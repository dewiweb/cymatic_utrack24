"""Couche protocole CHAI/CopperLan — spec reverse-engineered (research/notes/rea_maps.md).

Format fil unique CCPMessage_Generic (vftable uRemote 0x5ea308,
Serialize FUN_0058e350 / Deserialize FUN_0058e410) — 20 octets:

  class_id u32 LE | tag u16 | flag u8 | pad u8(0) | param_id u64 LE | value u32 LE

Trame ef51: 0xef51 | u16 LE (flags<<12 | len) | payload | cksum (voir chai_session).
"""
import struct

# --- class ids canoniques (dictionnaire last-vftable, rea_maps.md §29) ---
CID = {
    'NCM_Ping': 0x10001002,
    'NCM_NetworkModified': 0x10001003,
    'SM_Signal': 0x10002381,
    'SM_ServiceDevice': 0x10002390,
    'SM_D_AssignController': 0x10002391,
    'SM_Learn': 0x10002392,
    'SM_B_RecordingControl': 0x10002360,
    'SM_D_RecordingControl': 0x10002361,
    'SM_Remote_Destination': 0x10002351,
    'SM_Remote_GenericChange': 0x10002352,
    'SM_SetGlobalClockTime': 0x10002340,
    'SM_DeviceDeclarationXXX': 0x100023f0,
    'SM_DeviceDiscarded': 0x100023f2,
    'SM_DeviceIdentityChanged': 0x100023f3,
    'APP_Generic': 0x10003700,
    'APP_Generic_Reply': 0x10023700,
    'LM_DeviceDeclaredOrModified': 0x10004203,
    'LM_DeviceRemoved': 0x10004205,
    'LM_DeviceIdentityChanged': 0x10004206,
    'LM_DeviceLostOrNotFound': 0x10004207,
    'LM_SubDeviceDeclared': 0x10004208,
    'LM_GlobalSynchronizedClock': 0x10004221,
    'LM_NetworkModified': 0x10004222,
    'LM_TransportFlowControl': 0x10004230,
    'LM_SetGlobalClockTime': 0x10004240,
    'LM_VerifyKey_Request': 0x100042e0,
    'LM_VerifyKey_Reply': 0x100042e1,
    'HM_Warning': 0x10006301,
    'NCM_DevicePresenceRequest': 0x10041020,
    'NCM_DevicePresenceReply': 0x10021021,
    'MEMBER_BROADCAST': 0x100037c8,  # VNM-only, tree broadcast
}
CID_BY_ID = {v: k for k, v in CID.items()}


def pack_generic(class_id, param_id, value, tag=0x1e, flag=0):
    """CCPMessage_Generic 20B. tag=type valeur (0x1e=30 vu sur les set),
    flag=u8, param_id=u64 LE (id du noeud du tree), value=u32."""
    return struct.pack('<IHB B Q I', class_id, tag, flag, 0, param_id, value)


def unpack_generic(body):
    """Inverse de pack_generic -> dict. Retourne None si <20B."""
    if len(body) < 20:
        return None
    cid, tag, flag, _pad, pid, val = struct.unpack_from('<IHB B Q I', body, 0)
    return {'class_id': cid, 'class_name': CID_BY_ID.get(cid, '?'),
            'tag': tag, 'flag': flag, 'param_id': pid, 'value': val}


def write_param(param_id, value, tag=0x1e):
    """Body pret a frammer pour un write param (classes request-side 0x42xx
    ou SM_Signal 0x10002381 selon direction — a confirmer sur le fil)."""
    return pack_generic(0x10002381, param_id, value, tag)


def parse_announce_records(body):
    """Decline une trame LM_DeviceDeclaredOrModified / member-broadcast en
    records TLV <type u16 | len u16 | payload len> (rea_maps.md §21/23)."""
    recs, i = [], 4  # skip class_id
    while i + 4 <= len(body):
        typ, ln = struct.unpack_from('<HH', body, i)
        if ln == 0 or i + 4 + ln > len(body):
            break
        recs.append({'type': typ, 'len': ln, 'payload': body[i + 4:i + 4 + ln]})
        i += 4 + ln
    return recs


def record_param_name(payload):
    """Extrait le nom ASCII d'un record announce (derniere chaine >=3 chars)."""
    import re
    m = re.findall(rb'[ -~]{3,}', payload)
    return m[0].decode('latin1') if m else ''
