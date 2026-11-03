"""arc_proto — codec ARC host<->carte AudioLAN (arc_protocol.md, disasm verifie).

Frame interne : {msgId u8, cmd u8, len u16 BE, payload[len], checksum u8}
  - checksum: somme de TOUS les octets de la frame (incl checksum) == 0xFF
  - donc checksum_byte = (0xFF - sum(msgId..payload)) & 0xFF
  - last byte 0xEE = bypass checksum (ancienne revision, pas vu en pratique)
Ack RX : message {msgId, 0xFF} -> on wire {id, 0xFF, ~ck} (3 octets apres COBS)
Transport : SPI (/dev/spi0), UART, et ARC/UDP (CnE ARC/UDP) — frames COBS.

COBS : 0x00 remplace par le compteur vers le prochain 0 ; trame terminee par 0x00.
"""


def cksum_byte(body: bytes) -> int:
    """Octet checksum : rend sum(body+ck)==0xFF."""
    return (0xFF - (sum(body) & 0xFF)) & 0xFF


def pack_frame(msg_id: int, cmd: int, payload: bytes = b'') -> bytes:
    """Frame ARC complete {id, cmd, lenBE16, payload, ck}."""
    body = bytes((msg_id, cmd)) + len(payload).to_bytes(2, 'big') + payload
    return body + bytes((cksum_byte(body),))


def unpack_frame(data: bytes):
    """Verifie checksum+len ; retourne (msg_id, cmd, payload) ou None."""
    if len(data) < 6:
        return None
    ln = int.from_bytes(data[2:4], 'big')
    if len(data) != 5 + ln:
        return None
    if data[-1] != 0xEE and (sum(data) & 0xFF) != 0xFF:
        return None
    return data[0], data[1], data[4:-1]


def pack_ack(msg_id: int) -> bytes:
    """ACK recu -> {id, 0xFF, ck}."""
    body = bytes((msg_id, 0xFF))
    return body + bytes((cksum_byte(body),))


def cobs_encode(data: bytes) -> bytes:
    """COBS (Consistent Overhead Byte Stuffing) — delimiteur 0x00."""
    out = bytearray()
    i = 0
    while i < len(data):
        j = data.find(b'\x00', i)
        if j < 0:
            j = len(data)
        span = j - i
        while span >= 0xFE:
            out.append(0xFF)
            out += data[i:i + 0xFE]
            i += 0xFE
            span -= 0xFE
        out.append(span + 1)
        out += data[i:j]
        i = j + 1
    return bytes(out)


def cobs_decode(data: bytes) -> bytes:
    out = bytearray()
    i = 0
    while i < len(data):
        span = data[i]
        if span == 0:
            break
        i += 1
        out += data[i:i + span - 1]
        i += span - 1
        if span < 0xFF:
            if i < len(data) and data[i] != 0:
                out.append(0)
            elif i >= len(data):
                break
    return bytes(out)


def wrap_udp(msg_id: int, cmd: int, payload: bytes = b'') -> bytes:
    """Frame COBS pour transport UDP/SPI: cobs(frame) + delimiteur 0x00."""
    return cobs_encode(pack_frame(msg_id, cmd, payload)) + b'\x00'


def unwrap(data: bytes):
    """cobs_decode -> unpack_frame."""
    f = cobs_decode(data.rstrip(b'\x00'))
    return unpack_frame(f)
