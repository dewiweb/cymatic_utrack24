"""device_discovery — autodiscovery uTrack24 / carte AudioLAN sur le LAN.

Reutilisable par la GUI et le CLI. Aucune dependance externe.

  find_devices(progress=None) -> [{'ip','mac','ports','role'}]
    role: 'utrack24' (ports 23+55000), 'audiolan' (port 80+554 sur IP carte),
          'host+card' (les deux familles sur la meme IP), 'inconnu'
"""
import re, socket, subprocess, concurrent.futures, urllib.request

CYMATIC_OUIS = ('00:07:f5', '00-07-f5')           # Archwave/Cymatic probable
PORTS = {23: 'SDS', 55000: 'CHAI', 80: 'HTTP', 554: 'RTSP'}


def arp_table():
    try:
        out = subprocess.run(['arp', '-a'], capture_output=True, text=True,
                             errors='replace', timeout=10).stdout
    except (OSError, subprocess.SubprocessError):
        return []
    rows = []
    for m in re.finditer(r'(\d+\.\d+\.\d+\.\d+)\s+([0-9a-fA-F:\-]{11,17})', out):
        rows.append({'ip': m.group(1), 'mac': m.group(2).lower()})
    return rows


def probe_ports(ip, t=0.6):
    open_ = []
    for p in PORTS:
        try:
            s = socket.create_connection((ip, p), t)
            s.close()
            open_.append(p)
        except OSError:
            pass
    return open_


def http_probe(ip, t=1.2):
    """Renvoie ('audiolan', detail) si l'IP repond comme une carte AudioLAN."""
    try:
        r = urllib.request.urlopen(f'http://{ip}/sw_versions', timeout=t)
        body = r.read(400).decode('latin-1', 'replace')
        if r.status == 200:
            return 'audiolan', body[:120]
    except Exception:
        pass
    return None, None


def local_prefixes():
    """Prefixes /24 des interfaces locales (pour le scan)."""
    pref = set()
    try:
        for fam, _, _, _, addr in socket.getaddrinfo(socket.gethostname(), None):
            ip = addr[0]
            if fam == socket.AF_INET and not ip.startswith('127.'):
                pref.add('.'.join(ip.split('.')[:3]))
    except OSError:
        pass
    pref.add('192.168.10')
    pref.add('192.168.1')
    return sorted(pref)


def classify(ip, mac, ports):
    cymatic = any(mac.startswith(o) for o in CYMATIC_OUIS)
    has_sds, has_chai = 23 in ports, 55000 in ports
    role = 'inconnu'
    if has_sds and has_chai:
        role = 'utrack24'
    elif has_chai or has_sds:
        role = 'utrack24?'
    elif cymatic:
        role = 'cymatic?'
    return role, cymatic


def find_devices(prefixes=None, progress=None, scan=True, workers=64):
    """Decouvre les devices sur le LAN.

    1. table ARP (hotes deja vus) + classification par ports
    2. scan de ports sur les prefixes locaux (--scan)
    progress(msg) est appele pour le status."""
    devs = {}
    for row in arp_table():
        devs[row['ip']] = {'ip': row['ip'], 'mac': row['mac'],
                           'ports': [], 'role': 'inconnu', 'detail': ''}
    if scan:
        pref = prefixes or local_prefixes()
        for p in pref:
            if progress:
                progress(f'scan {p}.0/24 …')
            def one(i):
                ip = f'{p}.{i}'
                ports = probe_ports(ip)
                if ports:
                    e = devs.setdefault(ip, {'ip': ip, 'mac': '', 'ports': [],
                                             'role': 'inconnu', 'detail': ''})
                    e['ports'] = ports
            with concurrent.futures.ThreadPoolExecutor(workers) as ex:
                list(ex.map(one, range(1, 255)))
    for ip, e in devs.items():
        if not e['ports']:
            e['ports'] = probe_ports(ip)
        role, cym = classify(ip, e['mac'], e['ports'])
        if role in ('utrack24', 'utrack24?'):
            pass
        elif 80 in e['ports']:
            r, det = http_probe(ip)
            if r:
                role, e['detail'] = r, det
        e['role'] = role
        e['cymatic'] = cym
    return sorted((d for d in devs.values() if d['ports'] or d['mac']),
                  key=lambda d: d['ip'])


def pick(devs):
    """Retourne (ip_utrack, ip_card) candidats depuis le resultat."""
    host = card = ''
    for d in devs:
        if not host and d['role'].startswith('utrack24'):
            host = d['ip']
        elif not card and d['role'] == 'audiolan':
            card = d['ip']
    return host, card
