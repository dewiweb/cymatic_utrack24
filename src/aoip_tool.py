"""aoip_tool — uTrack24 + AudioLAN = couteau suisse AoIP.

Compose les couches existantes:
  AudioLan  (REST :80)  — config carte, subscribe/enable streams, discovery
  UTrack24  (SDS :23)   — transport, mixer, inputselect digital, rec/play
  aes67_receiver        — capture PC -> WAV
  ptp_master / fake_aes67_sender — PTP gm + sender de test

Lames:
  discover    devices + streams Ravenna vus par la carte
  status      sante carte (PTP, streams) + host (sync lock, board, mode)
  record      AoIP -> take 24ch (outputs souscrits -> inputs digitaux -> filerec)
  play        take -> stream AES67 (fileplay -> digital out -> sources -> mcast)
  bridge      stream sender -> sorties device (analog/MADI) via outputs
  send        sender de test sine -> mcast (depuis le PC)
  capture     mcast -> WAV (depuis le PC)
  ptp         etat PTP / role grandmaster

Usage:
  python3 aoip_tool.py <cmd> [args] [--host 192.168.10.198] [--card 192.168.10.175]
"""
import sys, time, argparse, json

from audiolan_api import AudioLan
from utrack_telnet import UTrack24 as Sds

# codes statut stream (audiolan_http_api.md)
ST = {0: 'inactive', 1: 'listening', 2: 'bound (quiet)', 3: 'listening (warn)',
      4: 'Tx unicast/OK', 5: 'receiving', 12: 'Rx sync error',
      13: 'Rx time step warning', 14: 'Invalid SR', 15: 'Invalid PTP Domain'}


def card_of(a):
    return AudioLan(a.card)


def sds_of(a):
    return Sds(a.host)


# ----------------------------------------------------------- commands ----
def cmd_discover(a):
    c = card_of(a)
    devs = c.device_list().get('ArchwaveAES67', {}).get('devices', [])
    streams = c.discovered_streams()
    print('== devices decouverts ==')
    for d in devs:
        print(' ', d.get('hostname', '?'), d.get('IPaddress', '?'))
    print('== streams decouverts (mDNS RAVENNA/SAP) ==')
    for s in streams:
        print(' ', json.dumps(s))


def cmd_status(a):
    c = card_of(a)
    st = c.status().get('ArchwaveAES67', {})
    print('== carte AudioLAN ==')
    for grp in ('outputs', 'sources'):
        for i, s in enumerate(st.get(grp, [])):
            code = s.get('status', 0)
            print(f'  {grp}[{i}] {s.get("name", "?")} status={code} ({ST.get(code, "?")})')
    try:
        u = sds_of(a)
        u.reset_line()
        ops = u.cmd('inputselect', 1.0)
        print('== host uTrack24 ==')
        print('  inputselect:', ops.strip().splitlines()[-1] if ops.strip() else '?')
    except Exception as e:
        print('  host SDS:', e)


def cmd_record(a):
    """AoIP -> take: les outputs carte souscrits alimentent les inputs
    digitaux host -> filerec 24ch -> dossier Take sur le disque USB."""
    u = sds_of(a)
    name = a.name or 'AoIP_%d' % int(time.time())
    print('inputselect -> digital (AudioLAN)')
    print(u.inputselect('all', 'digital'))
    print('filerec configure', name)
    print(u.filerec('configure', 0, name, a.bits, a.first_ch,
                    a.channels, 8, 4096, 48000, 'autostart'))
    print('enregistrement — Ctrl-C pour stop')
    try:
        time.sleep(a.secs or 3600)
    except KeyboardInterrupt:
        pass
    finally:
        print(u.filerec('stop'))


def cmd_play(a):
    """take -> AES67: fileplay route les pistes vers les sorties digitales,
    les sources carte emettent sur le reseau."""
    u, c = sds_of(a), card_of(a)
    srcs = c.sources().get('ArchwaveAES67', {}).get('sources', [])
    for s in srcs:
        s['streamEnable'] = True
    c.set_sources(srcs)
    print('sources carte -> TX actives')
    print(u.fileplay('configure', 0, a.take, a.first_ch, a.playout_delay,
                     8, 4096, 4, 48000, 'autostart'))
    print('lecture — Ctrl-C pour stop')
    try:
        time.sleep(a.secs or 3600)
    except KeyboardInterrupt:
        pass
    finally:
        print(u.fileplay('stop'))


def cmd_bridge(a):
    """Souscrit les outputs carte a un stream sender -> les canaux
    arrivent direct sur les sorties physiques (analog/MADI)."""
    c = card_of(a)
    c.route_all(a.stream)
    print(f'outputs -> {a.stream}')


def cmd_send(a):
    """Sender de test (sinus) vers un groupe multicast."""
    from fake_aes67_sender import main as send_main
    sys.argv = ['fake_aes67_sender.py', '--addr', a.mcast,
                '--freq', str(a.freq), '--rate', str(a.rate)]
    send_main()


def cmd_capture(a):
    """Capture un stream multicast -> WAV (PC)."""
    from aes67_receiver import recv_stream
    r = recv_stream(a.mcast, a.port, a.out, a.channels, a.secs or 5.0,
                    a.iface, a.rate, print)
    print(r)


def cmd_ptp(a):
    c = card_of(a)
    g = c.general().get('ArchwaveAES67', {})
    cfg = g.get('config', g)
    for k in ('PTP', 'ptp', 'ptpState', 'syncSource'):
        if k in cfg:
            print(k, '=', cfg[k])
    st = c.status().get('ArchwaveAES67', {})
    print(json.dumps({k: v for k, v in cfg.items() if 'ptp' in k.lower()
                      or 'sync' in k.lower()}, indent=1))


CMD = {'discover': cmd_discover, 'status': cmd_status, 'record': cmd_record,
       'play': cmd_play, 'bridge': cmd_bridge, 'send': cmd_send,
       'capture': cmd_capture, 'ptp': cmd_ptp}


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('cmd', choices=CMD)
    ap.add_argument('args', nargs='*')
    ap.add_argument('--host', default='192.168.10.198', help='uTrack24')
    ap.add_argument('--card', default='192.168.10.175', help='AudioLAN')
    ap.add_argument('--name', default='')
    ap.add_argument('--take', default='')
    ap.add_argument('--stream', default='')
    ap.add_argument('--mcast', default='239.0.0.1')
    ap.add_argument('--port', type=int, default=5004)
    ap.add_argument('--out', default='capture.wav')
    ap.add_argument('--channels', type=int, default=24)
    ap.add_argument('--first-ch', type=int, default=0)
    ap.add_argument('--bits', type=int, default=24)
    ap.add_argument('--rate', type=int, default=48000)
    ap.add_argument('--secs', type=float, default=0)
    ap.add_argument('--freq', type=float, default=1000.0)
    ap.add_argument('--playout-delay', type=int, default=50)
    ap.add_argument('--iface', default='')
    a = ap.parse_args()
    # positional shortcuts
    if a.cmd == 'record' and a.args:
        a.name = a.name or a.args[0]
    if a.cmd == 'play' and a.args:
        a.take = a.take or a.args[0]
    if a.cmd == 'bridge' and a.args:
        a.stream = a.stream or a.args[0]
    CMD[a.cmd](a)


if __name__ == '__main__':
    main()
