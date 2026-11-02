"""utrack_telnet — minimal client for the Cymatic uTrack24 sds:// shell.

The uTrack24 exposes an unauthenticated Telnet shell on port 23 giving full
access to the device: the `sds://` parameter tree (get/set), the transport
(fileplay/filerec), the monitor mixer, the USB filesystem and system commands.

Usage:
    from utrack_telnet import UTrack24
    u = UTrack24('192.168.10.198')
    print(u.get('cne/AppSettings/Global/uTrackName'))
    u.cmd('mixer levels')

Note: the shell echoes typed chars with backspace emulation; output is cleaned
automatically. Commands are read-mostly safe; `set`, `wr`, `ini`, `fs rm`,
`fs mkfs` and `fileplay/filerec` subcommands actually change device state.
"""

import re
import socket
import time


def _clean(t: str) -> str:
    t = re.sub(r'\x1b\[[0-9;?]*[a-zA-Z]', '', t)
    while '\x08' in t:
        t = re.sub(r'.?\x08', '', t, count=1)
    return t


def _parse_ls(out: str) -> list:
    rows = []
    for l in out.splitlines():
        if '|' not in l:
            continue
        p = [x.strip() for x in l.split('|')]
        if len(p) < 4 or not p[0] or p[0] == 'filename' or set(p[0]) <= set('-'):
            continue
        rows.append({'name': p[0], 'size': None if p[1] == '<DIR>' else int(p[1]),
                     'date': p[2], 'time': p[3], 'is_dir': p[1] == '<DIR>'})
    return rows


def _parse_wave(out: str) -> dict:
    keys = {'Sample rate': 'sample_rate', 'Bits per sample': 'bits',
            'Number of channels': 'channels', 'No of samples': 'samples'}
    d = {'markers': []}
    for l in out.splitlines():
        m = re.match(r'([A-Za-z ]+):\s*(\d+)', l)
        if m and m.group(1).strip() in keys:
            d[keys[m.group(1).strip()]] = int(m.group(2))
        m2 = re.match(r'Marker\s+\d+:\s*(\d+)', l)
        if m2:
            d['markers'].append(int(m2.group(1)))
    return d


class UTrack24:
    def __init__(self, host: str, port: int = 23, timeout: float = 2.0):
        self.host, self.port, self.timeout = host, port, timeout
        self._s = socket.create_connection((host, port), timeout)
        self._s.settimeout(0.6)
        self._drain()

    # ---------- low level ----------
    def _drain(self, wait: float = 0.5) -> str:
        time.sleep(wait)
        out = b''
        try:
            while True:
                b = self._s.recv(16384)
                if not b:
                    break
                out += b
                if len(b) < 16384:
                    break
        except socket.timeout:
            pass
        return _clean(out.decode('latin1', errors='replace'))

    def cmd(self, c: str, wait: float = 0.5) -> str:
        """Send a shell command, return cleaned output (incl. prompt)."""
        self._s.sendall(c.encode() + b'\r\n')
        return self._drain(wait)

    def close(self):
        self._s.close()

    # ---------- sds:// tree ----------
    def get(self, path: str) -> str | None:
        """get <sds path> -> value string, or None."""
        out = self.cmd(f'get {path}')
        m = re.search(r'Value=\s*(.*)', out)
        return m.group(1).strip() if m else None

    def set(self, path: str, value) -> str:
        return self.cmd(f'set {path} {value}')

    def ls(self, path: str = '', recursive: bool = False) -> str:
        return self.cmd(f'ls {"-r " if recursive else ""}{path}')

    # ---------- transport ----------
    def fileplay(self, *args) -> str:
        return self.cmd('fileplay ' + ' '.join(map(str, args)))

    def filerec(self, *args) -> str:
        return self.cmd('filerec ' + ' '.join(map(str, args)))

    def play(self):
        return self.fileplay('start')

    def pause(self):
        return self.fileplay('pause')

    def stop_play(self, *ids):
        return self.fileplay('stop', *ids)

    def play_stat(self):
        return self.fileplay('stat')

    def rec(self):
        return self.filerec('start')

    def stop_rec(self):
        return self.filerec('stop')

    # ---------- mixer ----------
    def mixer_levels(self):
        return self.cmd('mixer levels')

    def mixer_set(self, ch: int, what: str, value) -> str:
        """what: fader|pan|mute"""
        return self.cmd(f'mixer set {ch} {what} {value}')

    # ---------- CnE / systeme ----------
    def get_ex(self, path: str, mode: str = '') -> str:
        """get [-e|-b|-s] <path> : -e type etendu, -b binaire, -s string."""
        return self.cmd(f'get {mode} {path}'.replace('  ', ' '))

    def ls_tree(self, path: str = '', mode: str = '') -> str:
        """ls sds dir: -r recursif, -e type etendu, -b binaire, -v name+value."""
        return self.cmd(f'ls {mode} {path}'.replace('  ', ' '))

    def cd(self, path: str) -> str:
        return self.cmd('cd ' + path)

    def pwd(self) -> str:
        return self.cmd('pwd')

    def showtree(self, path: str = '', opts: str = '') -> str:
        return self.cmd(f'showtree {path} {opts}'.strip())

    def bat(self, name: str) -> str:
        """Execute un batch leaf (max recursion 5)."""
        return self.cmd('bat ' + name)

    # ---------- memoire brute (debug) ----------
    def rd(self, addr: int, count: int = 1, mode: str = '') -> str:
        """rd <addr> <count> [b|h|a] — memoire physique (addr=VA runtime)."""
        return self.cmd(f'rd 0x{addr:x} {count} {mode}'.strip(), 1.0)

    def wr(self, addr: int, value: int, mode: str = '') -> str:
        """wr <addr> <value> [b|h] — ecriture memoire physique brute."""
        return self.cmd(f'wr 0x{addr:x} 0x{value:x} {mode}'.strip(), 1.0)

    def persparam(self, *args) -> str:
        """persparam rd|wr|wrb|clr|check|reset — params persistants flash."""
        return self.cmd('persparam ' + ' '.join(map(str, args)), 1.5)

    # ---------- app commands (ghidra_utrack_map.md) ----------
    def samplerate(self, *args) -> str:
        return self.cmd('samplerate ' + ' '.join(map(str, args)))

    def sync(self, *args) -> str:
        return self.cmd('sync ' + ' '.join(map(str, args)))

    def channelmode(self, mode) -> str:
        return self._chk(self.cmd(f'channelmode {mode}'))

    def inputselect(self, *args) -> str:
        return self.cmd('inputselect ' + ' '.join(map(str, args)))

    def dsp(self, *args) -> str:
        return self.cmd('dsp ' + ' '.join(map(str, args)))

    def audiolan(self, *args) -> str:
        return self.cmd('audiolan ' + ' '.join(map(str, args)))

    def cpsync(self) -> str:
        return self.cmd('cpsync')

    def perf(self) -> str:
        return self.cmd('perf')

    def wavefile(self, path: str) -> str:
        return self.cmd('wavefile ' + path, 2.0)

    # ---------- file dir ops (FAH) ----------
    def file_dir(self, *args) -> str:
        """file dir open|close|read|create|free."""
        return self.cmd('file dir ' + ' '.join(map(str, args)), 1.5)

    def file_stat(self, path: str) -> str:
        """file stat <path> — metadata fichier/dossier."""
        return self.cmd('file stat ' + path, 1.5)

    def file_tell(self) -> str:
        """file tell — offset courant du handle ouvert."""
        return self.cmd('file tell', 1.0)

    def file_seek(self, offset: int) -> str:
        """file seek <offset> — repositionne le handle courant."""
        return self.cmd(f'file seek {offset}', 1.0)

    def file_info(self) -> str:
        """file info — diag FAH ("Last file access: %s")."""
        return self.cmd('file info', 1.0)

    # ---------- playlists (#PLAYLISTS, .play XML) ----------
    def playlists(self) -> list:
        """Liste les fichiers .play dans #PLAYLISTS."""
        return [e['name'] for e in self.list_dir('/#PLAYLISTS')
                if not e['is_dir'] and e['name'].lower().endswith('.play')]

    def playlist_read(self, name: str):
        """Lit + parse un .play device -> Playlist (uset_file)."""
        from uset_file import Playlist
        data = self.read_file(f'/#PLAYLISTS/{name}', 262144)
        return Playlist.parse(data.decode('utf-8', 'replace'))

    def file_dir_create(self, path: str) -> str:
        return self.file_dir('create', path)

    def file_dir_free(self) -> str:
        return self.file_dir('free')

    # ---------- systeme ----------
    def sys(self, *args) -> str:
        """sys ver|reset|reboot|restart|clock|flash|memdump…"""
        return self.cmd('sys ' + ' '.join(map(str, args)), 2.0)

    def sys_ver(self) -> str:
        return self.sys('ver')

    def reboot(self, mode: str = 'reboot') -> str:
        """sys reboot (soft) | sys reset (hard) | sys restart [in update mode]."""
        return self.sys(mode)

    # ---------- filesystem ----------
    def fs(self, *args) -> str:
        return self.cmd('fs ' + ' '.join(map(str, args)))

    def fs_ls(self, path: str = '') -> str:
        return self.fs('ls', path)

    def fs_mkdir(self, path: str) -> str:
        """fs mkdir <path> — verifie live (sortie silencieuse)."""
        return self.cmd('fs mkdir ' + path, 1.5)

    def fs_rename(self, old: str, new: str) -> str:
        """fs rename <old> <new> — chemins complets, fichiers+dossiers."""
        return self.cmd(f'fs rename {old} {new}', 1.5)

    def fs_rm(self, path: str) -> str:
        """fs rm <path> — supprime fichier ou dossier vide."""
        return self.cmd('fs rm ' + path, 1.5)

    # ---------- recordings (read-only) ----------
    def reset_line(self):
        """Vide la ligne de commande conservee entre connexions (300 backspaces)."""
        self._s.sendall(b'\x08' * 300)
        self._drain(0.5)

    def list_dir(self, path: str) -> list:
        """fs ls <path> -> [{name,size(None=dir),date,time,is_dir}]."""
        return _parse_ls(self.cmd('fs ls ' + path, 2.0))

    def wave_info(self, path: str) -> dict:
        """wavefile <path> -> {sample_rate,bits,channels,samples,markers}."""
        return _parse_wave(self.cmd('wavefile ' + path, 2.0))

    def read_file(self, path: str, maxlen: int = 65536) -> bytes:
        """Lit un fichier via file open ro / size / print ; close garanti."""
        self.cmd('file open ' + path + ' ro', 1.0)
        try:
            m = re.search(r'(\d+)\s*bytes', self.cmd('file size', 1.0))
            size = min(int(m.group(1)), maxlen) if m else maxlen
            data = b''; pos = 0
            while pos < size:
                n = min(4096, size - pos)
                for h in re.findall(r'^\s*\d+: ([0-9A-F]+)', self.cmd('file print %d' % n, 1.0 + n / 2000), re.M):
                    data += bytes.fromhex(h)
                pos += n
            return data[:size]
        finally:
            self.cmd('file close', 1.0)

    def take_settings(self, take: str):
        """Lit + parse le .set d'une prise -> SongSettings (uset_file)."""
        from uset_file import SongSettings
        data = self.read_file(f'/MultiTrack/{take}/{take}.set', 262144)
        return SongSettings.parse(data.decode('utf-8', 'replace'))

    def delete_take(self, take: str, loaded=None):
        """Supprime une prise: fichiers puis dossier (fs rm verifie live).
        loaded = nom de la prise actuellement chargee (refuse si == take)."""
        if take == (loaded or '').split('/')[-1]:
            raise ValueError('prise actuellement chargee')
        self._valid_take_name(take)
        base = f'/MultiTrack/{take}'
        for e in self.list_dir(base):
            if not e['is_dir']:
                self.fs_rm(f'{base}/{e["name"]}')
        self.fs_rm(base)

    def rename_take(self, old: str, new: str, loaded=None):
        """Renomme une prise: dossier + fichiers prefixes (reclog/.set
        non modifies en contenu — procedure recordings_access.md)."""
        if old == (loaded or '').split('/')[-1]:
            raise ValueError('prise actuellement chargee')
        self._valid_take_name(old); self._valid_take_name(new)
        base = '/MultiTrack'
        for e in self.list_dir(f'{base}/{old}'):
            n = e['name']
            if n.startswith(old):
                self.fs_rename(f'{base}/{old}/{n}', f'{base}/{old}/{new}{n[len(old):]}')
        self.fs_rename(f'{base}/{old}', f'{base}/{new}')

    def takes(self) -> list:
        """Liste des prises /MultiTrack (hors _Temp) avec infos du 1er wav."""
        self.reset_line()
        out = []
        for e in self.list_dir('/MultiTrack'):
            if not e['is_dir'] or e['name'].startswith('_'):
                continue
            files = self.list_dir('/MultiTrack/' + e['name'])
            wavs = [f for f in files if f['name'].lower().endswith('.wav')]
            t = {'name': e['name'], 'date': e['date'], 'time': e['time'], 'files': files,
                 'wavs': [(f['name'], f['size']) for f in wavs]}
            if wavs:
                wi = self.wave_info('/MultiTrack/%s/%s' % (e['name'], wavs[0]['name']))
                t['wave'] = wi
                t['duration'] = wi.get('samples',0) / max(wi.get('sample_rate',1),1)
                t['markers_s'] = [m / wi['sample_rate'] for m in wi['markers']]
            out.append(t)
        return out

    def download(self, remote: str, local: str, maxlen: int = 16777216) -> int:
        """file open ro/size/print/close -> sauve en binaire local."""
        data = self.read_file(remote, maxlen)
        with open(local, 'wb') as f:
            f.write(data)
        return len(data)

    def mv(self, src: str, dst: str) -> str:
        """file move <src> <dst> (rename; documented ghidra_utrack_files.md)."""
        return self._chk(self.cmd(f'file move {src} {dst}', 1.5))

    def rm(self, path: str) -> str:
        """file remove <path>."""
        return self._chk(self.cmd(f'file remove {path}', 1.5))

    def _fah_buffer_probe(self, data_probe: bytes) -> int:
        """Retourne l'offset du staging buffer FAH (rt addr) — 0 si non trouve.
        Strategie: file read un fichier connu (reclog.txt) puis rd autour de
        l'objet FAH (*0x60403a3c) pour localiser ou les donnees ont atterri.
        EXPERIMENTAL — a valider sur device live."""
        # l'objet FAH pointe par rt 0x60403a3c (singleton FUN_000cbaf0+0xc0)
        out = self.cmd('rd 0x60403a3c 1', 1.0)
        m = re.search(r'([0-9a-fA-F]{8})', out)
        if not m:
            return 0
        obj = int(m.group(1), 16)
        if not (0x60000000 <= obj < 0x61000000):
            return 0
        # scanner quelques offsets plausibles du buffer (FAH+0x0..+0x400)
        return obj

    def upload(self, remote: str, data: bytes) -> str:
        """Upload via wr (staging buffer) + file open wo + file write <n>.
        EXPERIMENTAL: l'adresse du staging buffer FAH est runtime — obtenue
        par _fah_buffer_probe/rd. Taux ~1 mot/commande wr => lent, ok pour
        .set (~KB). Requiert device live pour calibration."""
        raise NotImplementedError('calibration runtime du staging buffer requise')

    def _chk(self, out: str) -> str:
        if re.search(r'fail|error', out, re.I):
            raise RuntimeError(out.strip().splitlines()[-1] if out.strip() else 'erreur')
        return out

    def _valid_take_name(self, name: str, loaded=None):
        if name == (loaded or '').split('/')[-1]:
            raise ValueError('prise actuellement chargée')
        if not name or len(name) > 64 or not re.fullmatch(r'[A-Za-z0-9_-]+', name) or name[0] == '_':
            raise ValueError('nom invalide: %r' % name)

    def rename_take(self, old: str, new: str, loaded=None):
        """Renomme la prise <old> : dossier puis fichiers prefixes <old>."""
        self._valid_take_name(old, loaded)
        self._valid_take_name(new)
        if any(e['name'] == new for e in self.list_dir('/MultiTrack')):
            raise ValueError('%r existe deja' % new)
        self._chk(self.cmd('fs rename /MultiTrack/%s /MultiTrack/%s' % (old, new), 2.0))
        for f in self.list_dir('/MultiTrack/' + new):
            if f['name'].startswith(old):
                self._chk(self.cmd('fs rename /MultiTrack/%s/%s /MultiTrack/%s/%s'
                                   % (new, f['name'], new, new + f['name'][len(old):]), 2.0))

    def delete_take(self, name: str, loaded=None):
        """Supprime la prise <name> : fichiers puis dossier ; verifie par fs ls."""
        self._valid_take_name(name, loaded)
        for f in self.list_dir('/MultiTrack/' + name):
            self._chk(self.cmd('fs rm /MultiTrack/%s/%s' % (name, f['name']), 2.0))
        self._chk(self.cmd('fs rm /MultiTrack/' + name, 2.0))
        if any(e['name'] == name for e in self.list_dir('/MultiTrack')):
            raise RuntimeError('dossier toujours present')

    # ---------- misc ----------
    def device_info(self) -> dict:
        g = self.get
        return {
            'name': g('cne/AppSettings/Global/uTrackName'),
            'mode': g('cne/AppSettings/Global/DeviceMode'),
            'sample_rate': g('cne/AppSettings/Global/SampleRate'),
            'streaming_if': g('cne/AppSettings/Global/StreamingInterface'),
            'sw_version': g('cne/AppSettings/Global/SwVersion'),
        }


if __name__ == '__main__':
    import sys
    u = UTrack24(sys.argv[1] if len(sys.argv) > 1 else '192.168.10.198')
    print(u.device_info())
    if len(sys.argv) > 2:
        print(u.cmd(' '.join(sys.argv[2:])))
    u.close()
