"""aes67_receiver — recoit un stream AES67 (RTP/L24 multicast) vers WAV.

Spec (passthrough_status.md, audiolan docs): RTP payload L24 = echantillons
24-bit BIG-endian entrelaces par canal; paquets ~48 spl/1ms a 48k;
PTP pour l'horodatage (le ts RTP est en samples absolus ptp_time*rate).

Usage:
  python3 aes67_receiver.py <mcast_addr> <port> <out.wav> [--ch N] [--sec S] [--iface IP]
"""
import socket, struct, sys, time, argparse
import wave


def recv_stream(mcast: str, port: int, out_wav: str, channels: int,
                seconds: float, iface: str = '', rate: int = 48000,
                progress=None):
    """Joint le groupe multicast, recoit RTP/L24, ecrit WAV 24-bit PCM."""
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    s.bind(('', port))
    grp = socket.inet_aton(mcast)
    if iface:
        mreq = grp + socket.inet_aton(iface)
    else:
        mreq = grp + socket.inet_aton('0.0.0.0')
    s.setsockopt(socket.IPPROTO_IP, socket.IP_ADD_MEMBERSHIP, mreq)
    s.settimeout(2.0)

    buf = bytearray()
    pkt = 0
    t_end = time.monotonic() + seconds if seconds else None
    last_seq = -1
    dropped = 0
    expected_rate = rate

    while True:
        if t_end and time.monotonic() > t_end:
            break
        try:
            data = s.recv(65536)
        except socket.timeout:
            continue
        if len(data) < 12:
            continue
        v_p_x_cc = data[0]
        cc = v_p_x_cc & 0x0F
        pt = data[1] & 0x7F
        seq = struct.unpack_from('>H', data, 2)[0]
        if last_seq >= 0 and seq != (last_seq + 1) & 0xFFFF:
            dropped += 1
        last_seq = seq
        off = 12 + 4 * cc
        if v_p_x_cc & 0x10:  # extension header
            if off + 4 > len(data):
                continue
            ext_len = struct.unpack_from('>H', data, off + 2)[0]
            off += 4 + 4 * ext_len
        payload = data[off:]
        # L24: 3 octets BE par echantillon -> WAV attend LE
        for i in range(0, len(payload) - 2, 3):
            buf += payload[i:i + 3][::-1]  # BE -> LE
        pkt += 1
        if progress and pkt % 100 == 0:
            progress(f'{pkt} pkts, {dropped} seq gaps, {len(buf)} o')

    s.close()
    n = len(buf) // 3  # samples totaux
    frames = n // channels if channels else n
    w = wave.open(out_wav, 'wb')
    w.setnchannels(channels)
    w.setsampwidth(3)
    w.setframerate(expected_rate)
    w.writeframes(bytes(buf[:frames * channels * 3]))
    w.close()
    return {'packets': pkt, 'gaps': dropped, 'samples': n,
            'seconds': frames / expected_rate}


if __name__ == '__main__':
    ap = argparse.ArgumentParser()
    ap.add_argument('mcast')
    ap.add_argument('port', type=int)
    ap.add_argument('out')
    ap.add_argument('--ch', type=int, default=8)
    ap.add_argument('--sec', type=float, default=5.0)
    ap.add_argument('--rate', type=int, default=48000)
    ap.add_argument('--iface', default='')
    a = ap.parse_args()
    r = recv_stream(a.mcast, a.port, a.out, a.ch, a.sec, a.iface, a.rate,
                    print)
    print(r)
