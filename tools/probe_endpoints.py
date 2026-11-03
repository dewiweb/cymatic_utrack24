#!/usr/bin/env python3
"""probe_endpoints — sonde les surfaces cachees/incompletes du device (3% RE restant).

Usage:
    python tools/probe_endpoints.py --host 192.168.10.198 --card 192.168.10.175 --out probe.json

Sondes (lecture seule sauf mention):
  - AudioLAN: endpoints REST caches (/SHA204, /SPDIF, /SDRamCfg, /Exchange/samir,
    /SlaveOnly, /Shell/cne/Shell/, /USB/EP1/Rx/FifoSize...)
  - uTrack SDS: usage de chaque commande (envoie sans args -> help/erreur),
    showtree complet -> diff avec cne_paths.md
  - CnE: feuilles documentees lues + valeurs reelles (sync/midi/routing)
  - RTOS: threads/free/sem/load (read-only)
"""
import sys, os, json, time, socket, argparse, urllib.request

sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

OUT = []
def rec(zone, name, val):
    OUT.append({'zone': zone, 'probe': name, 'result': val})
    s = str(val).strip().replace('\n', ' | ')
    print(f'  [{zone}] {name}: {s[:110]}')


def http_get(ip, path, t=2.0):
    try:
        r = urllib.request.urlopen(f'http://{ip}{path}', timeout=t)
        return r.status, r.read(300).decode('latin-1', 'replace')
    except urllib.error.HTTPError as e:
        return e.code, e.read(200).decode('latin-1', 'replace')
    except Exception as e:
        return 'ERR', str(e)


CARD_PATHS = ['/SHA204', '/SPDIF', '/SDRamCfg', '/Exchange/samir', '/SlaveOnly',
              '/Shell/cne/Shell/', '/USB/EP1/Rx/FifoSize', '/version',
              '/api/version', '/api/installProgress', '/parameter_strings',
              '/sw_versions', '/status', '/stream_list', '/device_list',
              '/sources', '/outputs', '/general']

SDS_USAGE = ['help', '?', 'flash', 'persparam', 'load', 'bat', 'mlctest',
             'versulu', 'xmodem', 'rd', 'wr', 'call', 'load', 'memdump',
             'threads', 'free', 'sem', 'ip_hdr', 'memscan', 'watchpoints']

CNE_LEAVES = ['/Sync/Mode', '/Sync/GroupId', '/Sync/SlaveIndex',
              '/Sync/Slave_1_Id', '/CopperLan/Midi/Enabled', '/Playback/Midi/MidiOffset',
              '/AudioLan/InterfaceAsInput', '/Recording/PreRecording',
              '/Global/FootSwitchFunction', '/MixerControl/MonitorBoost']


def probe_card(card):
    print('\n== AudioLAN endpoints ==')
    for p in CARD_PATHS:
        st, body = http_get(card, p)
        rec('card', p, f'{st} {body[:120]}')


def probe_sds(u):
    print('\n== SDS usages (no-arg) ==')
    for cmd in SDS_USAGE:
        try:
            r = u.cmd(cmd, 0.8)
            rec('sds', cmd, r)
        except Exception as e:
            rec('sds', cmd, f'ERR {e}')


def probe_cne(u):
    print('\n== CnE feuilles ==')
    for path in CNE_LEAVES:
        try:
            r = u.get('cne/AppSettings' + path)
            rec('cne', path, r)
        except Exception as e:
            rec('cne', path, f'ERR {e}')


def dump_tree(u, out_json):
    print('\n== showtree dump ==')
    try:
        t = u.showtree()
        ref = os.path.join(os.path.dirname(__file__), '..',
                           'research', 'notes', 'cne_paths.md')
        known = set()
        if os.path.exists(ref):
            for line in open(ref, errors='replace'):
                for tok in line.split('`'):
                    if '/' in tok:
                        known.add(tok.strip().rstrip('/'))
        got = set(l.strip().rstrip('/') for l in t.splitlines()
                  if '/' in l)
        new = sorted(got - known)
        rec('cne', 'showtree feuilles', f'{len(got)} vues, {len(new)} nouvelles')
        for n in new[:40]:
            rec('cne', '  NOUVEAU', n)
        out_json['cne_tree'] = sorted(got)
    except Exception as e:
        rec('cne', 'showtree', f'ERR {e}')


def probe_rtos(u):
    print('\n== RTOS shell (read-only) ==')
    for c in ('threads', 'free', 'sem', 'timer', 'blocks', 'index'):
        try:
            r = u.cmd(c, 1.0)
            rec('rtos', c, r)
        except Exception as e:
            rec('rtos', c, f'ERR {e}')


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--host', default='192.168.10.198')
    ap.add_argument('--card', default='192.168.10.175')
    ap.add_argument('--out', default='probe_results.json')
    a = ap.parse_args()

    res = {'host': a.host, 'card': a.card, 'when': time.ctime()}

    if socket.gethostbyname(a.card):
        probe_card(a.card)

    try:
        from utrack_telnet import UTrack24
        u = UTrack24(a.host)
        probe_sds(u)
        probe_cne(u)
        dump_tree(u, res)
        probe_rtos(u)
    except Exception as e:
        rec('sds', 'connect', f'ERR {e}')

    res['probes'] = OUT
    json.dump(res, open(a.out, 'w'), indent=1)
    print(f'\n{len(OUT)} sondes -> {a.out}')


if __name__ == '__main__':
    main()
