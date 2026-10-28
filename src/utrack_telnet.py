"""utrack_telnet — minimal client for the Cymatic uTrack24 sds:// shell.

The uTrack24 exposes an unauthenticated Telnet shell on port 23 giving full
access to the device: the `sds://` parameter tree (get/set), the transport
(fileplay/filerec), the monitor mixer, the USB filesystem and system commands.

Usage:
    from utrack_telnet import UTrack24
    u = UTrack24('192.168.10.197')
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

    # ---------- filesystem ----------
    def fs(self, *args) -> str:
        return self.cmd('fs ' + ' '.join(map(str, args)))

    def fs_ls(self, path: str = '') -> str:
        return self.fs('ls', path)

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
                t['duration'] = wi['samples'] / wi['sample_rate']
                t['markers_s'] = [m / wi['sample_rate'] for m in wi['markers']]
            out.append(t)
        return out

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
    u = UTrack24(sys.argv[1] if len(sys.argv) > 1 else '192.168.10.197')
    print(u.device_info())
    if len(sys.argv) > 2:
        print(u.cmd(' '.join(sys.argv[2:])))
    u.close()
