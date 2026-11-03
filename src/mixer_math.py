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
