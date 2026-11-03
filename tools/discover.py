#!/usr/bin/env python3
"""discover — localise uTrack24/AudioLAN sur le LAN (Windows/WSL/Linux).

Strategies (sans dependances):
  1. `arp -a` — lit la table ARP, liste les IPs + MACs (Cymatic/Archwave OUI)
  2. scan de ports sur un prefixe (--net 192.168.10) : hosts avec 23/55000/80 ouverts
  3. probe HTTP : GET /api/... pour distinguer host vs carte AudioLAN

    python tools/discover.py
    python tools/discover.py --net 192.168.10 --scan
"""
import sys, os, re, socket, argparse, subprocess, concurrent.futures

CYMATIC_OUIS = {'00:07:f5', '00-07-f5'}   # Archwave/Cymatic OUI probable
PORTS = {23: 'SDS', 55000: 'CHAI', 80: 'HTTP', 554: 'RTSP'}


def arp_table():
    out = subprocess.run(['arp', '-a'], capture_output=True, text=True,
                         errors='replace').stdout
    rows = []
    for m in re.finditer(r'(\d+\.\d+\.\d+\.\d+)\s+([0-9a-fA-F:\-]{11,17})', out):
        rows.append((m.group(1), m.group(2).lower()))
    return rows


def probe_ports(ip, t=0.6):
    open_ = []
    for p in PORTS:
        try:
            s = socket.create_connection((ip, p), t)
            s.close(); open_.append(p)
        except OSError:
            pass
    return open_


def http_identify(ip):
    try:
        import urllib.request
        r = urllib.request.urlopen(f'http://{ip}/api/version', timeout=1.5)
        return 'audiolan?' + r.read(120).decode('latin-1', 'replace')
    except Exception:
        return None


def scan_net(prefix, workers=64):
    found = []
    def one(i):
        ip = f'{prefix}.{i}'
        p = probe_ports(ip)
        if p:
            found.append((ip, p))
        return None
    with concurrent.futures.ThreadPoolExecutor(workers) as ex:
        list(ex.map(one, range(1, 255)))
    return sorted(found)


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--net', default='192.168.10', help='prefixe reseau a scanner')
    ap.add_argument('--scan', action='store_true', help='scan de ports sur le prefixe')
    a = ap.parse_args()

    print('== table ARP ==')
    for ip, mac in arp_table():
        flag = '  <== OUI Cymatic/Archwave?' if mac[:8] in CYMATIC_OUIS else ''
        print(f'  {ip:16} {mac}{flag}')

    if a.scan:
        print(f'\n== scan {a.net}.0/24 (ports {sorted(PORTS)}) ==')
        for ip, ports in scan_net(a.net):
            names = '/'.join(PORTS[p] for p in ports)
            ident = http_identify(ip) if 80 in ports else None
            print(f'  {ip:16} {names}' + (f'  {ident[:50]}' if ident else ''))


if __name__ == '__main__':
    main()
