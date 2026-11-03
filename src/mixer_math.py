"""mixer_math — mathematiques du mixeur uTrack24 (ghidra_utrack_dsp.md).

Traductions pseudo-code -> code:
  - record mixeur 6B : {f32 fader_dB, s8 pan, u8 mute} (FUN_00069ed4/0x69f60)
  - pan law constant-power (FUN_000ebcb8): u16 L|u16 R via 10^ helpers
  - coefficient block : 12 x {c0 monL|monR, c1 monL|monR, c2 gainL|gainR}
    u16-packed (state @0x6049888C), mon@0x90, bus@0x94, pan@0x98
  - meter u32 -> dBFS (peak detect Q? -> 20*log10)
"""
import struct, math


# ---------------------------------------------------- record 6 octets
def pack_record(fader_db: float, pan: int, mute: bool) -> bytes:
    """{f32 dB, s8 pan, u8 mute} — FUN_00069ed4/FUN_00069f60."""
    p = max(-128, min(127, pan))
    return struct.pack('<fbB', fader_db, p, 1 if mute else 0)


def unpack_record(data: bytes):
    f, p, m = struct.unpack_from('<fbB', data, 0)
    return f, p, bool(m)


# ---------------------------------------------------- pan / gain
def fader_to_linear(db: float) -> float:
    """dB -> coefficient lineaire (mute ~ -127 dB, DAT_000ebf7c)."""
    if db <= -127.0:
        return 0.0
    return 10.0 ** (db / 20.0)


def pan_gains(pan: int):
    """constant-power pan : pan -127..127 -> (gL, gR), gL^2+gR^2=1.

    Traduction de FUN_000ebcb8 : angle 0..pi/2 sur la course du pan,
    gL=cos, gR=sin (approx de la loi puissance constante)."""
    p = max(-127, min(127, pan))
    angle = (p + 127) / 254.0 * (math.pi / 2)
    return math.cos(angle), math.sin(angle)


def pack_gain_u16(g: float) -> int:
    """coeff lineaire -> Q0.16 u16 du state block."""
    return min(0xFFFF, int(g * 0x10000))


def coeff_record(fader_db: float, pan: int, mute: bool, boost_db: float = 0.0):
    """Produit le triple coefficient d'une paire stereo :
    {c0=monL|monR u16 pack, c1=monL|monR, c2=gainL|gainR}.
    Simplifie : monitor-send = gain*fader (boost sur flag), out = gain*fader."""
    g = 0.0 if mute else fader_to_linear(fader_db)
    gL, gR = pan_gains(pan)
    b = fader_to_linear(boost_db) if boost_db else 1.0
    out_L, out_R = g * gL, g * gR
    mon_L, mon_R = out_L * b, out_R * b
    return (pack_gain_u16(mon_L) | pack_gain_u16(mon_R) << 16,
            pack_gain_u16(mon_L) | pack_gain_u16(mon_R) << 16,
            pack_gain_u16(out_L) | pack_gain_u16(out_R) << 16)


# ---------------------------------------------------- meters
def peak_to_dbfs(peak: int) -> float:
    """peak u32 (max echantillon 24-bit signe, aligne MSB du mot 32) -> dBFS."""
    if peak <= 0:
        return -150.0
    return 20.0 * math.log10(peak / 0x7FFFFFFF)


def meter_row(peaks):
    """26 u32 -> [(ch, dBFS)]."""
    return [(i, peak_to_dbfs(p)) for i, p in enumerate(peaks)]


# ---------------------------------------------------- parseurs sortie SDS
import re as _re


def parse_querylevels(out: str):
    """`mixer querylevels` -> 'CH %02d: 0x%08x' -> [(ch, raw, dBFS)]."""
    rows = []
    for m in _re.finditer(r'CH\s*(\d+):\s*0x([0-9a-fA-F]+)', out):
        raw = int(m.group(2), 16)
        rows.append((int(m.group(1)), raw, peak_to_dbfs(raw)))
    return rows


def parse_mixer_get(out: str):
    """`mixer get <ch>` -> 'Fader %f dB (mute %s) / Pan %d'."""
    m = _re.search(r'Fader\s+(-?[\d.]+)\s*dB\s*\(mute\s+(\w+)\)\s*/\s*Pan\s+(-?\d+)', out)
    if not m:
        return None
    return {'fader_db': float(m.group(1)), 'mute': m.group(2) == 'on',
            'pan': int(m.group(3))}


def parse_mixer_stat(out: str):
    """`mixer stat` -> faders + mon/bus + meters bruts."""
    chans = {}
    for m in _re.finditer(r'CH(\d+)\s*=>\s*(-?[\d.]+)\s*dB', out):
        chans[int(m.group(1))] = float(m.group(2))
    mon = _re.search(r'Monitor fader\s+(-?[\d.]+)', out)
    bus = _re.search(r'Bus fader\s+(-?[\d.]+)', out)
    return {'channels': chans,
            'monitor': float(mon.group(1)) if mon else None,
            'bus': float(bus.group(1)) if bus else None,
            'meters': [raw for _, raw, _ in parse_querylevels(out)]}


def parse_engine_stat(out: str):
    """`filerec stat`/`fileplay stat` -> cycle/file/samples/dropouts/errors."""
    keys = {'cycle': 'cycle', 'current file': 'file',
            'samples': 'samples', 'next-file sample': 'next_file_samples',
            'max file size': 'max_file_size', 'dropouts': 'dropouts',
            'write errors': 'write_errors'}
    d = {}
    for l in out.splitlines():
        for k, v in keys.items():
            m = _re.match(rf'.*{re.escape(k)}\s*[:=]\s*(\S+)', l, _re.I)
            if m:
                try:
                    d[v] = int(m.group(1))
                except ValueError:
                    d[v] = m.group(1)
    return d


def parse_reclog(out: str):
    """reclog.txt -> entrees (timestamp, niveau, texte)."""
    rows = []
    for l in out.splitlines():
        m = _re.match(r'\[?([\d:.]+)\]?\s*(INF|WRN|ERR|DBG)?\s*[:\-]?\s*(.*)', l, _re.I)
        if m and m.group(3):
            rows.append({'ts': m.group(1), 'level': m.group(2), 'text': m.group(3)})
    return rows
