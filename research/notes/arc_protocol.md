# ARC protocol — uTrack24 ⇄ AudioLAN card internal channel

Reverse-engineered from `uT24_Audiolan_Release_ 4078.bcd` (card, Ghidra addr =
file offset, runtime = +0x60000000) and `uTRACK24_Release_4218.bcd` (host, rt =
+0x60005F84). All addresses below are **file offsets** unless marked `rt`.

**TL;DR**: On SPI and UART, each ARC frame is **COBS-encoded and terminated by
a single 0x00 byte** on the wire. After COBS-decoding a frame is
`{msgId, cmd, lenBE16, payload[len], checksum}` where checksum makes all bytes
sum to 0xFF (i.e. `ck = ~sum(header+payload)` = `0xFF - sum`). The card sends an
immediate 2-byte ACK `{msgId, 0xFF, ck}` for every well-formed request, then the
handler's response (same layout, `cmd` = reply code) and possibly async events.

---

## 1. Transport & framing

### SPI (uTrack ⇄ card, the channel we care about)

- Card side = **SPI slave** on `/dev/spiSlave`; uTrack = master. Config from
  CnE `AppSettings/ARC/SPI`: `RequestPinGPIONumber=4`, `RequestPinActiveLevel`.
  The card raises a GPIO when it has data for the host (request-to-send);
  ioctls on `/dev/spiSlave`: cmd1={8} word size, cmd3={1000} tx wait,
  cmd0xb={0xc,pin,level} request pin. Ctor `FUN_000825cc` (ARCTransportSPI).
- **RX loop `FUN_000824f8`**: byte-at-a-time `read(fd,&b,1)`; accumulates into
  buffer at transport+0xd2 (max **0x840 bytes**); a received **0x00 byte ends
  the frame** → `FUN_00067524` (decode) → `FUN_0005ae14` (dispatch).
- TX: `ARCTransportSPI::send` (vtable slot +8 of the transport iface sub-object
  at thread+0xc0; vt 0x2613e4; error string "ARCTransportSPI::send: %u bytes
  requested, %d bytes sent" @0x233024) — writes the COBS-encoded frame + 0x00
  delimiter to the same `/dev/spiSlave` fd (opened mode 1 for TX, mode 2 RX).
  Host sees the request GPIO before clocking data out.

### UART (`ARCTransportUART`, ctor `FUN_0008a584`)

- `/dev/uart0..3` per CnE `AppSettings/ARC/UART` (Interface, Baudrate=19200,
  Parity). **Same COBS+0x00 framing**: callsites 0x8a528 (FUN_00067524) /
  0x8a53c (FUN_0005ae14). Error strings @0x2330b8/0x2330fc confirm same
  `send`/`process` pair.

### UDP (`ARCTransportUDP`/`UDPP` + `ARCUDPListener`/`ARCUDPSender`)

- `FUN_0005ae14` is called **directly on the datagram payload** — callsite
  0x83478 inside the UDP listener loop (`FUN_000833c0`, which is the
  netconn_recv loop): `FUN_0005ae14(unaff_r4[0x31], buf, len&0xffff)`.
  **No COBS, no 0x00 delimiter** — one UDP datagram = one raw ARC frame
  `{msgId,cmd,len,payload,ck}` (the length field still validates:
  `len+5 == frame_len`).
- CnE `AppSettings/ARC/UDP`: DataServerPort, RegistrationServerPort,
  UDPDestinationIPAddress/Port. Listener joins a multicast group
  (`ARCUDPListener::setupConnections` errors @0x23fc94+); a registration-server
  mechanism exists (ARCTransportUDPP `parseRegistrationData` @0x2332d4).

### TCP (`ARCTCPServer`, ctor `FUN_000673cc`, threads `ARCTCPServer`/`[%u]`)

- Per-client netconn accept loop; `send[%u]`/`process[%u]` error strings
  @0x66e60/0x23fb84. Delimiting on the TCP byte stream **not fully resolved** —
  likely identical frame format (header already carries length); possibly
  0x00-terminated like SPI/UART (COBS decode is only invoked by SPI/UART
  RX loops, so TCP probably uses the raw frame + its length field).

---

## 2. Frame format (post-decode)

`FUN_00067524` = **COBS decoder** (classic consistent-overhead-byte-stuffing):
each code byte N means "copy N-1 literal bytes, then an implicit 0x00"; code
0xFF means "copy 254 bytes, no implicit zero". Returns decoded length; output
buffer at transport+0x912.

Decoded frame layout (validated by `ARCProtocol::receiveData` =
`FUN_0005ae14`):

| off | size | field |
|-----|------|-------|
| 0   | 1    | **msgId** — request/response correlator; echoed in ACK + response |
| 1   | 1    | **cmd** — command code (dispatch key, table §3) |
| 2   | 2    | **len** — payload length, big-endian u16 |
| 4   | len  | **payload** |
| 4+len | 1  | **checksum** |

Constraints in receiveData (file 0x5ae14):
- frame ≥ 5 bytes.
- **Checksum**: 8-bit sum of *all* frame bytes (incl. checksum) must be `0xFF`;
  send side (`FUN_0005ad9c` = sendMessage) appends `~sum(msg)` i.e.
  `ck = 0xFF - sum(bytes 0..end)`. **Alternative accept**: last byte `0xEE`
  also passes the check (compat/escape marker — see open items).
- `len + 5 == frame_len` ("Invalid message length %u (%u expected)" @0x232fd8).
- Unknown cmd → "Unknown command code 0x%02x" @0x5c95e + `sendError(msgId,9)`.
- Bad payload length per cmd → `sendError(msgId,6)` (proto vt+8 =
  `FUN_0016e19c`; proto vtable @0x25f30c).

### On-the-wire SPI frame example

`msgId=0x10, cmd=0x17, len=0` → raw `{10 17 00 00 A8}` (sum=0x10+0x17=0x27,
ck=0xFF-0x27-0=0xD8 → `{10 17 00 00 D8}`) → COBS encode →
`{04 10 17 02 D8 00}`-style block on the wire ending with the 0x00 delimiter.

### Immediate ACK

On every frame that passes checksum+length, receiveData sends a **2-byte
message `{msgId, 0xFF}`** via sendMessage → on wire `{id, 0xFF, ~cksum}` (3
bytes before COBS). This is a transport-level "received" token — it is shorter
than a legal frame, so the host side must treat a <5-byte decoded frame as an
ACK rather than a protocol frame. (Mechanism confirmed; host-side handling not
yet decompiled — see §6.)

### Field encoding helpers (payload cursor parsers)

| helper | semantics |
|---|---|
| `FUN_00077824` | read **u32 BE**, cursor += 4 |
| `FUN_00077a14` | read `{u8,u8,u16BE}` (4 B) |
| `FUN_00077a80` | read `{u8,u8,u8}` (3 B) |
| `FUN_00077bd0` → `FUN_0006697c` | read **NUL-terminated UTF-8 string** (max
0x100 chars), convert to UTF-16LE; cursor advances past the 0x00 |
| `func_0x001d9b54` / `func_0x001d9cc8` | wrap parsed UTF-16 buffer into a heap
wstring object / free it |
| `FUN_000778e8` | write u16 BE at cursor |
| `FUN_0007791c` | write u32 BE at cursor |
| `FUN_00077d00` / `FUN_00077970` | write u8/u16-prefixed blob |

Strings on the wire are therefore **UTF-8, NUL-terminated, not
length-prefixed** (only 1–3-byte UTF-8 accepted — surrogate-range 4-byte forms
rejected in `ARCInterface::convertUTF8ToWideString` @0x6697c/0x225fb4).

---

## 3. Command-code table

Dispatch = giant compare/jump-table switch in `FUN_0005ae14`
(0x5ae14–0x62898). Handlers are virtual methods on the application interface
object (`proto+4`; vcall = `vt[app+0x114]+slot`), first arg = msgId. Below:
cmd → dispatch slot & **payload layout parsed by the dispatcher** (verified
from case-body disasm in `research/ghidra/dumps/arc_cases.txt` +
`arc_dispatch_disas.txt`).

### Direct-compare commands (fully verified)

| cmd | vt slot | len | payload |
|-----|---------|-----|---------|
| 0x17 | +0x70 | 0 | — (no-arg query; e.g. getSystemState/getVersion) |
| 0x18 | +0x74 | ≥1 | `{utf8str}` |
| 0x19 | +0x78 | ≥7 | `{u8,u8,u16BE, u8,u8,u8}` |
| 0x30 | +0x7c | 5 | `{u32BE, u8}` |
| 0x31 | +0x80 | 0 | — |
| 0x32 | +0x84 | 0 | — |
| 0x50 | +0x88 | 0x0a | `{u32BE, u32BE, u8, u8}` |
| 0x56 | +0xa0 | 0 | — |
| 0x57 | +0xa4 | 0 | — |
| 0x58 | +0xa8 | 0 | — |
| 0x59 | +0xac | >1 | `{u8, utf8str}` |
| 0x5a | +0xb0 | 0 | — |
| 0x70 | +0xb4 | 5 | `{u32BE, u8}` |
| 0x71 | +0xb8 | >5 | `{utf8str, u8, u32BE}` |
| 0x73 | +0xbc | 0 | — |
| 0x74 | +0xc0 | >0x0c | `{u8,u8,u8, u32BE, u8, u32BE, utf8str}` |
| 0x75 | +0xc4 | 0 | — |
| 0x76 | +0xc8 | 0 | — |
| 0x77 | +0xcc | 0 | — |

### Jump-table groups

- **0x00–0x16** (table @0x5af18 → case bodies 0x61178–0x61654): 23 commands;
  bodies mostly small (lock/alloc/log + a few field reads). Given the error
  catalog, this is the **file/browse/session group** — `parseBrowseCreateDirectory`
  (with date/time+flags fields), getPlayFileMap variants, file open/close,
  getAlphabetical/Postfixed/Prefixed file maps, doGetWaveFileInfo, closeFile.
- **0x51–0x55** (table @0x5afd0 → 0x6185c–0x619f0): 5 commands with medium
  parsing (net config records — likely doNetSet{DeviceConfig,Source,Output}
  or transport config).
- **0x78–0xd0** (table @0x5b058 → bodies 0x61d70–0x62854): ~40 commands;
  unhandled codes → 0x62898 (default/unknown). Handled (non-default) codes:
  0x78,0x79,0x7a, 0x90–0x9e (0x9f gap), 0xa0–0xa6 (0xa7 gap), 0xa8–0xb9,
  0xc0, 0xd0. This is the **large record family** — bodies do heavy inline
  parsing (u8/u32/string lists, alloc loops) matching the Bonjour proxy,
  stream-list, firmware-upload and play/rec-create surfaces.
- Everything else (0x1a–0x2f, 0x33–0x4f, 0x5b–0x6f, 0x72, 0xd1+ except d0…)
  → "Unknown command code".

### Application surface (names → inferred cmd family)

Error catalog @0x231c40–0x233024 (`ERROR: ARCApplicationInterface::<m>:`) plus
method strings — the complete handled-command set:

- **System/misc**: onStartup, doGetSystemState, setHostData, setIPAddr,
  handleLinkStatusChanged, handleIPAddressAssigned, setNetChangedFlags,
  servicesListUpdated.
- **File/browse**: getPlayFileMap → getAlphabeticalPlayFileMap /
  getPostfixedPlayFileMap / getPrefixedPlayFileMap (post/prefix = take-number
  scheme "File NNN" parsing), doGetWaveFileInfo (validates fmt+bits),
  closeFile, doFileSystemAdded (mount event), parseBrowseCreateDirectory.
- **Record**: doRecSetup (file type, channel mask — "No channels selected"),
  doRecCreate / doRecCreateSingle (mutually exclusive).
- **Play**: doPlayCreate / doPlayCreateSingle ("Channel overlap detected",
  "Differing sample rates", "Highest channel %u beyond available %u").
- **Net/RAVENNA**: doNetSetDeviceConfig (IP cfg, syntonized mode, sample size,
  playout delay, device name — matches 0x74's `{3×u8, u32, u8, u32, str}`),
  doNetSetSource (streamEnable, autoConfig, multicast addr, source name,
  SIP identity), doNetSetOutput (output name, source stream, manual SDP),
  doNetGetStreamList (Bonjour browser required).
- **Transport**: doUDPSetConfiguration, doTCPSetConfiguration,
  doSPISendReceive (raw SPI pass-through: device, chip-select, xfer).
- **Bonjour proxy**: doBonjourDeregisterService, doBonjourResolveService
  (Name/RegType/Domain → Resolve ID), doBonjourDeregisterBrowse,
  doBonjourGetBrowseServiceList, doBonjourResolveAddrInfo,
  doBonjourAbortResolve.
- **Firmware upload**: startFirmwareUpload (size cap, buffer alloc),
  uploadFirmwareChunk (offset, data — also `ARCBootloaderInterface` variant),
  validateFirmwareUpload (complete-check + CRC + HWID), performFirmwareUpdate,
  getFirmwareUpdateStatus; gate = "firmware update mode".

Exact per-cmd-code name binding: unresolved (dispatch is fully virtual —
see §7 open items). Ordering hint: error-catalog order tracks the method
vtable order; cmd groups above are sized consistently with it.

---

## 4. Responses, errors & session model

- **No open/handshake** in the protocol itself: any correctly framed message is
  dispatched. "Session" state lives in handlers (e.g. RecCreate-vs-Single
  exclusivity, fw-update mode gate).
- Request → (a) immediate `{msgId,0xFF}` ack token, then (b) response message
  `{msgId, respCmd, len, payload, ck}`. Responses are built by per-handler
  builders (`FUN_0005ad10`, `FUN_0005c9a4` + ~60 siblings calling
  `FUN_0005ad9c` = sendMessage(buf,len) which appends `~sum` and calls
  `transport->send(buf,len+1)` under a protocol lock).
- Error reply = `sendError(msgId, code)` (ARCProtocol vt+8, `FUN_0016e19c`);
  observed codes: **6 = invalid payload length/params**, **9 = unknown cmd**.
- Field writers confirmed symmetric to readers: `FUN_000778e8` u16 BE,
  `FUN_0007791c` u32 BE, `FUN_00077970` u64 BE, `FUN_00077d00` NUL-terminated
  string (memcpy strlen+1). All length fields (frame + in-payload) are BE.
- Async card→host: sendMessage is callable outside receiveData context (queue
  on the transport; StreamingMessenger registration at onStartup suggests
  push notifications — e.g. file-system-added and stream/status updates).
- msgId matching is caller-chosen (any u8); responses echo it — host can
  pipeline only if it tracks one outstanding req/resp per id (safer:
  serialize requests).
- SPI flow control: card drives request GPIO to notify host it wants to TX —
  host should clock frames only when the pin (or a poll) indicates pending
  data; RX side of each transport waits on the request pin / netconn.

---

## 5. Host side (uTRACK24)

- Card detection via SPI shift-register (HWCom digital-board id, bits4–6 of
  IN image) → "Audiolan Card" (str @0x11e130), `audiolan` SDS command exists
  (`audiolan [stat rec play 44 48 88 96]`, vtable 0x2dad78, handler rt
  0x60135458 → file 0x12f4d4 — Thumb, not yet decompiled).
- Host holds cached card state read by the UI (`FUN_0011da94` = "Audiolan
  Card" details pane: firmware version, IP address — fields param_1+0x25/28/2b).
- Host-side sender path **not fully traced** — expected mirror image
  (build `{msgId,cmd,len,payload}` + `~sum` + COBS encode + write SPI master
  channel that shares/pairs the `/dev/spiSlave` peer; uTrack also ships
  `/dev/spi0` (HWCom shift-reg + likely ARC master channel on SuluSPI0) —
  verify writeSCI/writePCI vs dedicated ARC master device before
  reimplementing; see §7).

---

## 6. Reimplementation notes (Python uTrack-side)

```python
def arc_build(msg_id, cmd, payload=b""):
    f = bytes([msg_id, cmd]) + len(payload).to_bytes(2,"big") + payload
    return f + bytes([(-sum(f)) & 0xFF])          # ck so that sum == 0xFF

def cobs_encode(frame):                          # standard COBS
    out = bytearray()
    i = 0
    while i < len(frame):
        j = frame.find(b"\0", i)
        j = len(frame) if j < 0 else j
        while j - i >= 254:                      # 0xFF blocks
            out.append(0xFF); out += frame[i:i+254]; i += 254
        if i < j or (i == len(frame) and False):
            out.append(j - i + 1); out += frame[i:j]
            i = j + 1
        else:
            out.append(j - i + 1); out += frame[i:j]; i = j + 1
    return bytes(out) + b"\0"                    # + 0x00 delimiter on wire

def cobs_decode(block):                          # block = bytes before 0x00
    out = bytearray(); i = 0
    while i < len(block):
        n = block[i]; i += 1
        out += block[i:i+n-1]; i += n-1
        if n != 0xFF: out.append(0)
    return bytes(out)
```

RX state machine (host = SPI master): read stream → split on 0x00 → COBS
decode each block → if len < 5 treat `{id,0xFF}` as ACK → else verify
`len+5==n` and `sum==0xFF` → `{id,cmd,plen,payload}`.

---

## 7. Open items / gaps

1. **cmd-code → method-name binding**: dispatch is a pure vtable call through
   the app-interface sub-object at app+0x114; its static vtable (rt
   0x60264a3c) is sparse in the image — runtime vptr could not be confirmed
   statically (multi-inheritance object with ~10 sub-vtables 0x264824–0x264d00;
   the +0x70..+0xcc slot→cmd mapping from the case bodies stands regardless).
   Next step: decompile one handler body per cmd (targets live in the
   0x16xxxx–0x26xxxx framework region) or run a live query against the card.
2. **0xEE checksum bypass**: last-byte 0xEE is accepted without sum check —
   likely an "unframed/escape" marker (possibly a compatibility path with an
   older ARC revision or a literal 0xFF-impossible checksum escape); not seen
   generated by the card's own sendMessage.
3. **TCP framing**: confirm delimiter (probably raw frame, length-prefixed;
   possibly same 0x00 delimiter, without COBS).
4. **Response cmd codes**: respCmd semantics (reply-cmd = request cmd | a
   generic response class | per-cmd codes) need one response-builder body
   (`FUN_0005ad10`/family) — outgoing buf[0]=msgId, buf[1]=respCmd is strongly
   suspected but only the 2-byte `{id,0xFF}` ack is proven end-to-end.
5. **uTrack-side ARC client**: locate the SPI-master write + matching COBS
   encode and request-pin handshake (likely near `audiolan` cmd @file
   0x12f4d4 / HWCom `/dev/spi0` "SuluSPI0"; uTrack firmware has no "ARC*"
   strings — the client code is unnamed/differently compiled).
6. **ARCBootloaderInterface**: separate ARC surface active in update mode
   (firmware-upload cmds may switch the card to a boot-loader ARC instance).
7. Session/persparam sync details: uTrack↔card config replication (CnE
   `AppSettings/AudioLan`) — call sites not yet enumerated.

## Dump/evidence index (research/ghidra/dumps)

`arc_dec_67524.txt` (COBS decode + dispatch decompile) ·
`arc_dispatch_disas.txt` (header/checksum/ack + direct-cmp cases) ·
`arc_cases.txt` (case-body disasm 0x61178–0x62898) · `arc_jt.txt` (3 jump
tables) · `arc_helpers*.txt` (field parsers, sendMessage, ctors) ·
`arc_init4.txt` (ARC subsystem init FUN_00049500: transport-select + app +
protocol creation) · `arc_iface_ctor.txt` (ARCApplicationInterface ctor
FUN_000d5514) · `arc_vts*.txt` (candidate vtables) ·
`arc_utrack_strs.txt` (uTrack "Audiolan Card" UI + spiSlave dev node).

## Verification terrain (29/10/2026) — ARC/UDP inactif sur cette carte

- `cne/AppSettings/ARC` : `Enabled=0`, `Transport=SPI` (etat d'origine).
- `Enabled=1`+`Transport=UDP` persists, reboot fait → **aucun listener UDP** (scan unicast 1-20000, groupes multicast testes), pas de `_arc._udp` Bonjour, pas de port TCP ARC trouve.
- Le sous-arbre `AppSettings/ARC/UDP` (DataServerPort etc.) **n'existe pas dans le modele CnE** — cree uniquement par `doUDPSetConfiguration` via ARC → dependance circulaire.
- **Conclusion : ARC reseau desactive dans cette variante produit.** ARC ne sert que sur SPI (hote↔carte) et UART interne. Canal PC→carte = HTTP API + SDS + RTSP.
- Carte restauree a SPI/Enabled=0 apres test.
