#!/usr/bin/env python3
"""chai_proxy — proxy MITM TCP pour capturer le trafic CHAI reel.

Usage:
    python tools/chai_proxy.py --device 192.168.10.198 --listen 15500
    # puis pointer uRemote (ou notre client) sur 127.0.0.1:15500

Chaque trame ef51 est loggee: direction, taille, hex, timestamp.
Sortie stdout + fichier --log (hexdump ligne/ligne pour analyse RE).

Sert a:
  - valider le wire format text-write 0x3744 (ecrire un locate dans uRemote)
  - capturer uTS_Msg_* si 2+ devices en groupe
  - observer la sequence de session complete uRemote (§56)
  - voir les pushes meters e0xx reels
"""
import sys, socket, threading, time, argparse

MAGIC = b'\xef\x51'

def hexdump(b):
    return ' '.join(f'{x:02x}' for x in b)


def pump(src, dst, tag, logf, stop):
    buf = b''
    try:
        while not stop[0]:
            data = src.recv(65536)
            if not data:
                break
            dst.sendall(data)
            buf += data
            # decoupe sur magic ef51
            while True:
                i = buf.find(MAGIC)
                if i < 0:
                    buf = buf[-2:]
                    break
                j = buf.find(MAGIC, i + 1)
                chunk = buf[i:j if j >= 0 else len(buf)]
                if j < 0 and len(chunk) < 12:
                    break  # trame incomplete
                ts = time.strftime('%H:%M:%S') + f'.{int(time.time()*1000)%1000:03d}'
                line = f'{ts} {tag} {len(chunk):5d}B  {hexdump(chunk[:64])}'
                if len(chunk) > 64:
                    line += f'  ..+{len(chunk)-64}B'
                print(line)
                if logf:
                    logf.write(line + '\n'); logf.flush()
                buf = buf[j:] if j >= 0 else b''
    except OSError:
        pass
    finally:
        stop[0] = True
        for s in (src, dst):
            try: s.close()
            except OSError: pass


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--device', default='192.168.10.198')
    ap.add_argument('--dport', type=int, default=55000)
    ap.add_argument('--listen', type=int, default=15500)
    ap.add_argument('--log', default='chai_capture.log')
    a = ap.parse_args()

    srv = socket.socket()
    srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    srv.bind(('0.0.0.0', a.listen))
    srv.listen(4)
    print(f'proxy 0.0.0.0:{a.listen} -> {a.device}:{a.dport}  log={a.log}')
    logf = open(a.log, 'a') if a.log else None
    while True:
        cli, addr = srv.accept()
        try:
            dev = socket.create_connection((a.device, a.dport), 5)
        except OSError as e:
            print(f'  device injoignable: {e}'); cli.close(); continue
        print(f'  session {addr[0]}:{addr[1]}')
        stop = [False]
        threading.Thread(target=pump, args=(cli, dev, 'C>D', logf, stop),
                         daemon=True).start()
        threading.Thread(target=pump, args=(dev, cli, 'D>C', logf, stop),
                         daemon=True).start()


if __name__ == '__main__':
    main()
