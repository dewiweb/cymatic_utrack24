"""utrack_tool — CLI multitool for the Cymatic uTrack24 (Telnet sds:// shell).

Subcommands:
  info                  device identity (name/mode/rate)
  levels [n]            mixer meter poll (n loops, ~2/s)
  transport play|pause|stop|rec|recstop|stat
  get <sds-path> / set <sds-path> <val>
  tree [path]           browse the sds:// config tree
  ls [dir]              USB filesystem listing
  mixer <ch> <fader|pan|mute> <val>
  input analog|digital  input selector
  cmd <raw shell cmd>   any shell command
"""

import argparse
import sys
import time

sys.path.insert(0, __import__('os').path.dirname(__file__))
from utrack_telnet import UTrack24

HOST = '192.168.10.198'


def levels(u, n=1):
    import re
    for _ in range(n or 1):
        out = u.cmd('mixer levels')
        vals = re.findall(r'CH (\d+):\s+(0x[0-9a-fA-F]+)', out)
        bar = ' '.join(f'{c}:{int(v,16):08x}' for c, v in vals)
        print(bar[:120], flush=True)
        if n and n > 1:
            time.sleep(0.5)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('cmd', nargs='?', default='info')
    ap.add_argument('args', nargs='*')
    ap.add_argument('--host', default=HOST)
    a = ap.parse_args()
    u = UTrack24(a.host)
    c, ar = a.cmd, a.args
    try:
        if c == 'info':
            for k, v in u.device_info().items():
                print(f'{k:14s} {v}')
        elif c == 'levels':
            levels(u, int(ar[0]) if ar else 1)
        elif c == 'transport':
            m = {'play': ('fileplay', 'start'), 'pause': ('fileplay', 'pause'),
                 'stop': ('fileplay', 'stop'), 'rec': ('filerec', 'start'),
                 'recstop': ('filerec', 'stop'), 'stat': ('fileplay', 'stat')}
            f, sub = m[ar[0]]
            print(getattr(u, f)(sub) if ar[0] != 'stat' else u.fileplay('stat'))
        elif c == 'get':
            print(u.get(ar[0]))
        elif c == 'set':
            print(u.set(ar[0], ' '.join(ar[1:])))
        elif c == 'tree':
            print(u.ls(ar[0] if ar else '', recursive=True))
        elif c == 'ls':
            print(u.fs_ls(ar[0] if ar else ''))
        elif c == 'mixer':
            print(u.mixer_set(int(ar[0]), ar[1], ar[2]))
        elif c == 'input':
            print(u.cmd(f"inputselect 'all' '{ar[0]}'"))
        else:
            print(u.cmd(' '.join([c] + ar)))
    finally:
        u.close()


if __name__ == '__main__':
    main()
