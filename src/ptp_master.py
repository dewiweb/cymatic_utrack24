"""ptp_master — minimal PTPv2 (IEEE1588-2008) grandmaster on a chosen domain.

Sends Announce (1/2s) + one-step Sync (1/s) on 224.0.1.129 and answers
Delay_Req so slaves can complete their measurement. Designed to make a PC
the PTP master for AES67 receivers like the AudioLAN card (domain 0).
"""

import socket
import struct
import threading
import time
import uuid

MC = '224.0.1.129'


def eui64_from_mac(mac: int) -> bytes:
    m = mac.to_bytes(6, 'big')
    return m[:3] + b'\xff\xfe' + m[3:]


class PtpMaster:
    def __init__(self, iface_ip: str, domain: int = 0, priority1: int = 128):
        self.iface = iface_ip
        self.domain = domain
        self.prio = priority1
        self.clock_id = eui64_from_mac(uuid.getnode())
        self.clock_id_hex = self.clock_id.hex()
        self.t0 = time.time()
        self.mono0 = time.monotonic()
        self.seq_sync = 0
        self.seq_ann = 0
        self._stop = threading.Event()

    def now(self):
        """Master time (PTP timescale, our own epoch)."""
        return self.t0 + (time.monotonic() - self.mono0)

    def _hdr(self, mtype, length, control, seq):
        return struct.pack(
            '>BBHBBHQI8sHHBb',
            0x00 | mtype,          # transportSpecific|msgType
            0x02,                  # reserved|version 2
            length,
            self.domain,
            0,
            0x0000,                # flags (one-step)
            0,                     # correctionField
            0,                     # reserved
            self.clock_id, 1,      # sourcePortIdentity
            seq,
            control,
            -1 if mtype == 0 else 1,  # logInterval
        )

    def _ts(self, t):
        sec = int(t)
        ns = int((t - sec) * 1e9)
        return sec.to_bytes(6, 'big') + struct.pack('>I', ns)

    def sync_pkt(self):
        return self._hdr(0x00, 44, 0, self.seq_sync) + self._ts(self.now())

    def announce_pkt(self):
        body = (self._ts(self.now())
                + struct.pack('>H', 37)          # currentUtcOffset
                + b'\x00'
                + bytes([self.prio])
                + bytes([248, 0xFE]) + struct.pack('>H', 65535)  # class/accuracy/variance
                + bytes([248])                   # priority2
                + self.clock_id
                + struct.pack('>H', 0)           # stepsRemoved
                + bytes([0xA0]))                 # timeSource INTERNAL_OSC
        return self._hdr(0x0B, 64, 5, self.seq_ann) + body

    def delay_resp(self, req):
        # Delay_Req(0x01) -> Delay_Resp(0x09): echo requester id + rx ts
        req_id = req[20:30]
        body = self._ts(self.now()) + req_id
        return self._hdr(0x09, 54, 3, struct.unpack('>H', req[30:32])[0]) + body

    def _sock(self, port):
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        s.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_TTL, 32)
        try:
            s.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_IF,
                         socket.inet_aton(self.iface))
        except OSError:
            pass
        s.bind(('', port))
        try:
            s.setsockopt(socket.IPPROTO_IP, socket.IP_ADD_MEMBERSHIP,
                         socket.inet_aton(MC) + socket.inet_aton(self.iface))
        except OSError:
            pass
        return s

    def serve(self, stop_evt=None):
        stop = stop_evt or self._stop
        s_ev = self._sock(319)
        s_gn = self._sock(320)
        s_ev.settimeout(0.2)
        print(f'PTP master running: domain={self.domain} gm={self.clock_id_hex} iface={self.iface}', flush=True)
        last_sync = last_ann = 0.0
        while not stop.is_set():
            t = time.monotonic()
            if t - last_sync >= 1.0:
                self.seq_sync += 1
                s_ev.sendto(self.sync_pkt(), (MC, 319))
                last_sync = t
            if t - last_ann >= 2.0:
                self.seq_ann += 1
                s_gn.sendto(self.announce_pkt(), (MC, 320))
                last_ann = t
            try:
                d, a = s_ev.recvfrom(2048)
                if len(d) >= 44 and d[0] & 0xF == 0x01:  # Delay_Req
                    s_gn.sendto(self.delay_resp(d), (MC, 320))
            except socket.timeout:
                pass


if __name__ == '__main__':
    import sys
    PtpMaster(sys.argv[1] if len(sys.argv) > 1 else '192.168.10.81').serve()
