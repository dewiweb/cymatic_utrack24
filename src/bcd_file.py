"""bcd_file — parseur conteneur firmware Archwave `BcOd` (.bcd).

Layout extrait REA (hexdumps fw4218 + fw4078, slot CRCs @0x94 doc):

  0x00  'BcOd'            magic
  0x04  u32               container version (=1)
  0x08  char[8]           build date  'YYYYMMDD'
  0x10  char[8]           build time  'HHMMSS  '
  0x18  u32               section count (=2)
  0x1c  u32               firmware revision (0x107a=4218, 0xfee=4078)
  0x20  u32               board/product id (0x43 utrack24, 0x49 audiolan)
  0x24  u32               const 0x7f510
  0x28  u32               KeepBootloader flag (=1)
  0x2c  u32               header CRC32 (crc of d[0:0x70], this field zeroed)
  0x30  u32               image data offset (0x7c/0x80 — incl marker+slots)
  0x34  u32               const 0x4a0080
  0x38  u32               image data size (file - header)
  0x3c  u32               image CRC32 (crc of d[img_off:+img_size])
  0x40  u32               const 0x35ff80
  0x44..0x6f             zeros
  0x70  char[12]          product name 'uTRACK24'/'uT24_Audiolan'
  0x7c  u32               marker 0xaaaa5555

Slot entry @0x80 (5 u32):
  {id, flag 0xa5a5a5a5, load_addr, hwid, crc}
Image code starts @0x94 (ARM `b` skip over embedded metadata).
"""
import struct, zlib


class BcdError(Exception):
    pass


def parse(path):
    d = open(path, 'rb').read()
    return parse_bytes(d)


def parse_bytes(d):
    if len(d) < 0x94 or d[:4] != b'BcOd':
        raise BcdError('not a BcOd image')
    h = {
        'version': u32(d, 0x04),
        'build_date': d[0x08:0x10].decode('ascii', 'replace'),
        'build_time': d[0x10:0x18].decode('ascii', 'replace').strip(),
        'sections': u32(d, 0x18),
        'revision': u32(d, 0x1c),
        'product_id': u32(d, 0x20),
        'const_7f510': u32(d, 0x24),
        'keep_bootloader': u32(d, 0x28),
        'header_crc': u32(d, 0x2c),
        'image_offset': u32(d, 0x30),
        'const_4a0080': u32(d, 0x34),
        'image_size': u32(d, 0x38),
        'image_crc': u32(d, 0x3c),
        'const_35ff80': u32(d, 0x40),
        'name': d[0x70:0x7c].split(b'\x00')[0].decode('ascii', 'replace'),
        'marker': u32(d, 0x7c),
    }
    h['build'] = h['build_date'] + h['build_time']
    h['name'] = h['name'].strip()
    # slot entries: {id, flag, load, hwid, crc} a partir de image_offset+4
    slots = []
    off = h['image_offset'] + 4
    while off + 20 <= len(d):
        sid, flag, load, hwid, crc = struct.unpack_from('<5I', d, off)
        if flag != 0xA5A5A5A5 and sid > 16:
            break
        slots.append({'id': sid, 'flag': flag, 'load_addr': load,
                      'hwid': hwid, 'crc': crc, 'offset': off})
        # fin de table: flag deadbeef ou plus de magic
        if flag == 0xDEADBEEF:
            break
        off += 20
        if len(slots) > 8:
            break
    return {'header': h, 'slots': slots, 'size': len(d),
            'data_offset': h['image_offset']}


def u32(d, o):
    return struct.unpack_from('<I', d, o)[0]


def verify_crc(bcd):
    """Verifie les deux CRCs BcOd (decode FirmwareUpdateHandler::scanBCD).

    header CRC: crc32(d[0:0x70]) avec le champ @0x2c mis a zero.
    image CRC : crc32(d[image_offset : image_offset+image_size]).
    Retourne dict {'header': (calc,stored,ok), 'image': (calc,stored,ok)}.
    """
    d = open(bcd, 'rb').read() if isinstance(bcd, str) else bcd
    info = parse_bytes(d)
    hdr = bytearray(d[:0x70])
    hdr[0x2c:0x30] = b'\x00' * 4
    hc = zlib.crc32(hdr) & 0xFFFFFFFF
    off = info['header']['image_offset']
    img = d[off:off + info['header']['image_size']]
    ic = zlib.crc32(img) & 0xFFFFFFFF
    return {
        'header': (hc, info['header']['header_crc'], hc == info['header']['header_crc']),
        'image': (ic, info['header']['image_crc'], ic == info['header']['image_crc']),
    }


def describe(path):
    i = parse(path)
    h = i['header']
    print(f"{h['name']}: rev {h['revision']} build {h['build']} "
          f"product 0x{h['product_id']:x} keepBoot={h['keep_bootloader']}")
    print(f"  image: @{h['image_offset']} +{h['image_size']}B "
          f"crc 0x{h['image_crc']:08x} hdrcrc 0x{h['header_crc']:08x}")
    for s in i['slots']:
        print(f"  slot{s['id']}: load 0x{s['load_addr']:08x} "
              f"hwid 0x{s['hwid']:x} crc 0x{s['crc']:08x} flag 0x{s['flag']:08x}")
    return i


if __name__ == '__main__':
    import sys
    for p in sys.argv[1:]:
        describe(p)
        v = verify_crc(p)
        for k, (c, s, ok) in v.items():
            print(f"  {k} crc 0x{c:08x} {'OK' if ok else '!= 0x%08x' % s}")
