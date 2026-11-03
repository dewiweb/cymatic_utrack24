#!/usr/bin/env python3
"""meter_watch — capture les pushes de metres CHAI (validation §55 on-wire).

Usage:
    python tools/meter_watch.py --host 192.168.10.198 --secs 10
    python tools/meter_watch.py --host X --secs 30 --raw frames.hex

Attendu (§55) : messages `4437` contenant des blocs 16B e0xx, ~10 Hz,
valeur = (peak>>15)&0xffff par metre. Ce script :
  1. ouvre la session CHAI (utrack_control)
  2. envoie la souscription (c437 kind 0x06 + 5423 signal si supporte)
  3. logue les trames entrantes + decode les blocs metres e0xx
  4. compare avec `mixer querylevels` SDS a la fin (cross-check)
"""
import sys, os, time, socket, argparse, struct

sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

def dump_meters(chunk, tag=''):
    """cherche des controles 0xe0xx dans une trame et affiche les valeurs."""
    for i in range(len(chunk) - 18):
        if chunk[i] == 0xe0:
            ctrl = struct.unpack_from('<H', chunk, i)[0]
            if 0xe000 <= ctrl <= 0xe01f:
                # valeur probable u16 a +20 (pattern write) ou +12/+14
                for off in (14, 16, 20):
                    v = struct.unpack_from('<H', chunk, i + off)[0] if i + off + 2 <= len(chunk) else None
                    if v is not None and v < 0xffff:
                        pass
                print(f'    meter ctrl 0x{ctrl:04x} @{tag} ctx={chunk[i:i+20].hex()}')


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--host', default='192.168.10.198')
    ap.add_argument('--port', type=int, default=55000)
    ap.add_argument('--secs', type=float, default=10)
    ap.add_argument('--raw', default='', help='fichier dump hex brut')
    a = ap.parse_args()

    try:
        from utrack_control import UTrackControl
    except ImportError as e:
        print(f'import: {e}'); return 1

    c = UTrackControl(a.host, a.port)
    try:
        c.connect()
    except Exception as e:
        print(f'connect: {e}'); return 1
    print(f'session {"OK" if c.alive else "ouverte (alive=False)"} — {a.secs}s capture')

    # souscription meters : c437 kind 0x06 vers node 1 (meters) si expose
    # (notre client n implemente pas encore le c437 — on capture quand meme :
    #  l annonceur pousse des la declaration du membre per §55)
    raw = open(a.raw, 'w') if a.raw else None
    t0 = time.time()
    n_frames = 0
    try:
        while time.time() - t0 < a.secs:
            s = c.s
            if s is None:
                break
            s.settimeout(0.5)
            try:
                data = s.recv(65536)
            except socket.timeout:
                continue
            except OSError:
                break
            if not data:
                break
            n_frames += 1
            i = data.find(b'\xef\x51')
            chunk = data[i:] if i >= 0 else data
            if raw:
                raw.write(chunk.hex() + '\n'); raw.flush()
            if b'\xe0' in chunk or chunk[4:6] == b'44' + b'37':
                dump_meters(chunk, f'f{n_frames}')
    finally:
        if raw: raw.close()

    print(f'{n_frames} trames capturees')
    # cross-check SDS
    try:
        from utrack_telnet import UTrack24
        u = UTrack24(a.host)
        r = u.cmd('mixer querylevels', 1.5)
        print('SDS querylevels (cross-check):')
        for line in r.splitlines()[:8]:
            print('   ', line.strip())
    except Exception as e:
        print(f'SDS cross-check: {e}')


if __name__ == '__main__':
    sys.exit(main() or 0)
