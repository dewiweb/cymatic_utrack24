#!/usr/bin/env python3
"""utrack — unified multitool for the Cymatic uTrack24 + AudioLAN card.

Two control planes:
  - uTrack host  : Telnet sds:// shell (transport, mixer, settings)
  - AudioLAN card: REST AES67 API (streams, routing, monitoring)

Usage:
  utrack.py info                 device + card identity
  utrack.py streams              AES67 sources/outputs summary
  utrack.py transport <play|pause|stop|rec|recstop|stat>
  utrack.py levels [n]           mixer meter poll
  utrack.py mixer <ch> <fader|pan|mute> <val>
  utrack.py get|set <sds-path> [val]
  utrack.py tree [path]          browse sds:// config tree
  utrack.py cmd <raw>            raw shell command on uTrack
  utrack.py monitor              AES67 sources -> analog monitoring snapshot
"""

import argparse
import sys
import time

sys.path.insert(0, __import__('os').path.dirname(__file__))
from utrack_telnet import UTrack24
from audiolan import AudioLAN

UTRACK_HOST = '192.168.10.197'
ALAN_HOST = '192.168.10.175'


def cmd_info(u, al):
    print('=== uTrack24 (Telnet) ===')
    for k, v in u.device_info().items():
        print(f'  {k:14s} {v}')
    if al:
        print('=== AudioLAN (AES67) ===')
        g = al.general()
        print('  ', {k: g.get(k) for k in list(g)[:8]} if isinstance(g, dict) else g)


def cmd_streams(al):
    if not al:
        print('AudioLAN unreachable'); return
    st = al.status()
    aw = st.get('ArchwaveAES67', st)
    print('=== AES67 sources ===')
    for s in aw.get('sources', []):
        sdp = s.get('SDP', '')
        name = next((l.split('s=')[-1].strip() for l in sdp.splitlines() if l.startswith('s=')), '?')
        dst = next((l.split('IP4 ')[-1].strip() for l in sdp.splitlines() if 'c=IN IP4' in l), '?')
        print(f'  [{s.get("status")}] {name} -> {dst}')
    print('=== outputs ===')
    try:
        for o in (al.outputs() or {}).get('outputs', []):
            print('  ', o.get('name') or o)
    except Exception:
        print('  (n/a)')


def main():
    ap = argparse.ArgumentParser(description='uTrack24 + AudioLAN multitool')
    ap.add_argument('cmd', nargs='?', default='info')
    ap.add_argument('args', nargs='*')
    ap.add_argument('--host', default=UTRACK_HOST)
    ap.add_argument('--alan', default=ALAN_HOST)
    a = ap.parse_args()
    c, ar = a.cmd, a.args

    u = UTrack24(a.host)
    al = None
    try:
        al = AudioLAN(a.alan)
        al.status()
    except Exception:
        al = None

    try:
        if c == 'info':
            cmd_info(u, al)
        elif c == 'streams':
            cmd_streams(al)
        elif c == 'transport':
            m = {'play': 'start', 'pause': 'pause', 'stop': 'stop'}
            print(u.fileplay(m[ar[0]]) if ar[0] in m else u.fileplay('stat'))
        elif c == 'rec':
            print(u.filerec(ar[0] if ar else 'start'))
        elif c == 'levels':
            import re
            for _ in range(int(ar[0]) if ar else 1):
                out = u.cmd('mixer levels')
                vals = re.findall(r'CH (\d+):\s+(0x[0-9a-fA-F]+)', out)
                print(' '.join(f'{x}:{int(v,16):08x}' for x, v in vals)[:140])
                if ar and int(ar[0]) > 1: time.sleep(0.5)
        elif c == 'mixer':
            print(u.mixer_set(int(ar[0]), ar[1], ar[2] if len(ar) > 2 else ''))
        elif c == 'get':
            print(u.get(ar[0]))
        elif c == 'set':
            print(u.set(ar[0], ' '.join(ar[1:])))
        elif c == 'tree':
            print(u.ls(ar[0] if ar else '', recursive='-r' in ar))
        elif c == 'monitor':
            cmd_streams(al)
        elif c == 'cmd':
            print(u.cmd(' '.join(ar)))
        else:
            print(__doc__)
    finally:
        u.close()


if __name__ == '__main__':
    main()
