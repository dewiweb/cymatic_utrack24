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
