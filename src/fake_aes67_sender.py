"""fake_aes67_sender — fake AES67 sender locked to the network PTP master.

Listens for PTPv2 sync/follow_up on 224.0.1.129 (ports 319/320, the uTrack24
is grandmaster, domain 24), derives PTP time and drives RTP timestamps off it:
RTP ts = ptp_seconds * RATE (mediaclk:direct=0). Emits L24 sine + SAP announce.
"""

import argparse
import math
import socket
import struct
import threading
import time
import sys; sys.path.insert(0, __import__('os').path.dirname(__file__))
from ptp_master import PtpMaster

SAP_ADDR = ('224.2.127.254', 9875)
NAME = 'devin-test'
RATE = 44100
NCH = 8
PTIME = 1.0
FREQ = 1000.0
PTP_MCAST = '224.0.1.129'


class PtpClock(threading.Thread):
    """Track the network PTP grandmaster's time from sync/follow_up packets."""

    def __init__(self, iface_ip):
        super().__init__(daemon=True)
        self.ptp_at_rx = 0.0
        self.mono_at_rx = time.monotonic()
        self.gm = None
        self.domain = None
        self.have = False
        self.iface = iface_ip

    def _listen(self, port):
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        s.bind(('', port))
        s.setsockopt(socket.IPPROTO_IP, socket.IP_ADD_MEMBERSHIP,
                     socket.inet_aton(PTP_MCAST) + socket.inet_aton(self.iface))
        return s

    def run(self):
        s_ev, s_gn = self._listen(319), self._listen(320)
        for s in (s_ev, s_gn):
            s.settimeout(1)
        while True:
            for s in (s_ev, s_gn):
                try:
                    d, a = s.recvfrom(2048)
                except socket.timeout:
                    continue
                if len(d) < 44 or d[1] & 0xF != 2:
                    continue
                mt = d[0] & 0xF
                self.domain = d[4]
                self.gm = d[20:28].hex()
                if mt in (0, 8):  # sync / follow_up: precise origin ts
                    sec = int.from_bytes(d[34:40], 'big')
                    ns = int.from_bytes(d[40:44], 'big')
                    t = sec + ns / 1e9
                    if t > 0:
                        self.ptp_at_rx = t
                        self.mono_at_rx = time.monotonic()
                        self.have = True

    def now(self):
        return self.ptp_at_rx + (time.monotonic() - self.mono_at_rx)


def sdp(src_ip, mcast, port, gm_hex):
    gm = '-'.join(gm_hex[i:i + 2].upper() for i in range(0, 16, 2))
    return (
        "v=0\r\n"
        f"o=- 1 0 IN IP4 {src_ip}\r\n"
        f"s={NAME}\r\n"
        "t=0 0\r\n"
        "a=clock-domain:PTPv2 0\r\n"
        f"m=audio {port} RTP/AVP 96\r\n"
        f"c=IN IP4 {mcast}/32\r\n"
        f"a=rtpmap:96 L24/{RATE}/{NCH}\r\n"
        "a=sendonly\r\n"
        "a=framecount:48\r\n"
        "a=sync-time:0\r\n"
        f"a=ptime:{PTIME:.2f}\r\n"
        f"a=ts-refclk:ptp=IEEE1588-2008:{gm}:0\r\n"
        "a=mediaclk:direct=0\r\n"
    ).encode()


def sap_packet(src_ip, sdp_bytes):
    return (struct.pack('>BBH', 0x20, 0, 0) + socket.inet_aton(src_ip)
            + b'application/sdp\x00' + sdp_bytes)


def _dn(n):
    return b''.join(bytes([len(p)]) + p.encode() for p in n.split('.')) + b'\x00'


class RtspServer(threading.Thread):
    """Mini serveur RTSP: repond a DESCRIBE /by-name/<NAME> avec 200 + SDP.
    La carte RAVENNA ne verifie pas le statut, juste le body apres \\r\\n\\r\\n
    (cf ghidra_audiolan_discovery.md)."""
    def __init__(self, ip, port, get_sdp):
        super().__init__(daemon=True)
        self.ip, self.port, self.get_sdp = ip, port, get_sdp

    def run(self):
        srv = socket.socket()
        srv.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        srv.bind((self.ip, self.port))
        srv.listen(4)
        while True:
            try:
                c, _ = srv.accept()
                req = c.recv(4096)
                if b'DESCRIBE' in req or b'GET_PARAMETER' in req:
                    body = self.get_sdp()
                    rsp = (b'RTSP/1.0 200 OK\r\nCSeq: 2\r\n'
                           b'Content-Type: application/sdp\r\n'
                           + b'Content-Length: %d\r\n\r\n' % len(body) + body)
                    c.sendall(rsp)
                c.close()
            except OSError:
                continue


class MdnsAdvertiser(threading.Thread):
    """Annonce DNS-SD : <NAME>._rtsp._tcp.local (_ravenna_session subtype) ->
    <host>.local:<rtsp_port>. La carte browse _rtsp._tcp,_ravenna_session."""
    def __init__(self, ip, rtsp_port):
        super().__init__(daemon=True)
        self.ip, self.port = ip, rtsp_port
        self.inst = f'{NAME}._rtsp._tcp.local'
        self.host = f'pc-{ip.replace(".", "-")}.local'

    def _resp(self):
        mdns_ip, mdns_port = '224.0.0.251', 5353
        rrtype_srv, rrtype_txt, rrtype_a, rrtype_ptr = 33, 16, 1, 12
        cache_flush = 0x8000
        inst, host = _dn(self.inst), _dn(self.host)
        svc = _dn('_rtsp._tcp.local')
        sub = _dn('_ravenna_session._sub._rtsp._tcp.local')
        def rec(n, t, data, flush=False):
            return n + struct.pack('>HHIH', t, 1 | (0x8000 if flush else 0), 120, len(data)) + data
        ans = b''
        ans += rec(sub, rrtype_ptr, inst)                       # subtype PTR
        ans += rec(svc, rrtype_ptr, inst)                     # type PTR
        srvd = struct.pack('>HHH', 0, 0, self.port) + host
        ans += rec(inst, rrtype_srv, srvd, True)
        ans += rec(inst, rrtype_txt, b'\x00', True)
        ans += rec(host, rrtype_a, socket.inet_aton(self.ip), True)
        return struct.pack('>HHHHHH', 0, 0x8400, 0, 5, 0, 0) + ans

    def run(self):
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        try:
            s.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_TTL, 255)
            s.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_IF, socket.inet_aton(self.ip))
        except OSError:
            pass
        pkt = self._resp()
        ls = None
        try:  # reception des queries (optionnelle si 5353 deja pris)
            ls = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
            ls.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
            ls.bind(('', 5353))
            ls.setsockopt(socket.IPPROTO_IP, socket.IP_ADD_MEMBERSHIP,
                          socket.inet_aton('224.0.0.251') + socket.inet_aton(self.ip))
            ls.settimeout(8.0)
        except OSError:
            ls = None
        while True:
            try:
                s.sendto(pkt, ('224.0.0.251', 5353))
                if ls:
                    try:
                        while True:
                            d, a = ls.recvfrom(4096)
                            if b'_rtsp' in d or b'_services' in d:
                                s.sendto(pkt, ('224.0.0.251', 5353))
                    except socket.timeout:
                        pass
                else:
                    time.sleep(8)
            except OSError:
                time.sleep(2)


def main():
    global RATE, SAP_ADDR
    ap = argparse.ArgumentParser()
    ap.add_argument('--ip', default='239.69.200.200')
    ap.add_argument('--port', type=int, default=5004)
    ap.add_argument('--src', default='192.168.10.81')
    ap.add_argument('--iface', default='192.168.10.81')
    ap.add_argument('--dur', type=float, default=0.0)
    ap.add_argument('--rate', type=int, default=44100)
    ap.add_argument('--sap-group', default=SAP_ADDR[0])
    ap.add_argument('--rtsp', type=int, default=0, help='port RTSP natif (0=off)')
    ap.add_argument('--async-sdp', action='store_true', help='SDP sans lignes PTP (flux asynchrone)')
    a = ap.parse_args()
    RATE = a.rate
    SAP_ADDR = (a.sap_group, 9875)

    clk = PtpMaster(a.iface, domain=0)
    threading.Thread(target=clk.serve, daemon=True).start()
    time.sleep(0.5)
    print(f'PTP master: gm={clk.clock_id_hex} now={clk.now():.3f}', flush=True)

    def make_sdp():
        s = sdp(a.src, a.ip, a.port, clk.clock_id_hex)
        if a.async_sdp:
            s = b''.join(l for l in s.split(b'\r\n')
                         if not l.startswith((b'a=clock-domain', b'a=ts-refclk', b'a=sync-time', b'a=mediaclk')))
            s += b'\r\n'
        return s
    sdpb = make_sdp()
    sapb = sap_packet(a.src, sdpb)

    if a.rtsp:
        RtspServer(a.src, a.rtsp, make_sdp).start()
        MdnsAdvertiser(a.src, a.rtsp).start()
        print(f'RTSP by-name: rtsp://{a.src}:{a.rtsp}/by-name/{NAME} + mDNS _rtsp._tcp,_ravenna_session', flush=True)

    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_TTL, 32)
    try:
        s.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_IF, socket.inet_aton(a.iface))
    except OSError:
        pass
    s_sap = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    samples = 48
    seq, n = 0, 0
    ts0 = int(clk.now() * RATE)
    t0 = time.perf_counter()
    print(f'sending -> {a.ip}:{a.port} (ts locked to PTP)', flush=True)
    while a.dur == 0 or time.perf_counter() - t0 < a.dur:
        if n % 5000 == 0:
            try:
                s_sap.sendto(sapb, SAP_ADDR)
            except OSError:
                pass
        ts = int(clk.now() * RATE)
        hdr = struct.pack('>BBHII', 0x80, 96, seq & 0xFFFF, ts & 0xFFFFFFFF, 0xDEADBEEF)
        p = bytearray()
        # sweep lineaire 20 Hz -> 20 kHz sur 4s, en boucle
        per = 4.0
        for i in range(samples):
            f2 = 20 + (20000 - 20) * (((ts + i) / RATE) % per / per)
            v = int(0.3 * 8388607 * math.sin(2 * math.pi * f2 * (ts + i) / RATE))
            for ch in range(NCH):
                p += (v if ch < 2 else 0).to_bytes(3, 'big', signed=True)
        s.sendto(hdr + p, (a.ip, a.port))
        seq += 1
        n += 1
        t_next = t0 + n*(48.0/RATE)
        while time.perf_counter() < t_next:
            pass  # busy-wait: Windows sleep() is ~15ms granularity
    print('done', n, 'pkts; ts drift', int(clk.now() * RATE) - ts0, 'samples')


if __name__ == '__main__':
    main()
