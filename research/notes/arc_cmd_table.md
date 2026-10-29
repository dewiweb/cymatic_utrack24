# ARC protocol — command-code → handler binding table

Companion to `arc_protocol.md` (framing/transport). All addresses **file
offsets** in `uT24_Audiolan_Release_ 4078.bcd` (runtime = +0x60000000);
uTrack-side offsets are file offsets in `uTRACK24_Release_4218.bcd`
(rt = +0x60005F84).

**Status key**: ✅ verified from decompiled dispatch/case-body ·
🔶 strong inference (payload shape + error-catalog order) · ❓ unresolved.

---

## 1. Dispatch mechanics (verified)

`FUN_0005ae14` = `ARCProtocol::receiveData(this=proto, frame, len)` — ARM,
file 0x5ae14–0x62898. After checksum/length validation and the immediate
`{msgId,0xFF}` ACK (`FUN_0005ad9c`), it switches on `frame[1]` (cmd):

- 19 **direct-compare** cases: `ldr r0,[proto+4]` → app-iface object →
  `ldr r1,[r0]` → vtable → `ldr rX,[r1,#slot]` → `blx`/`bx`.
  First handler arg = msgId (`r1=r8`); parsed payload fields follow.
- 3 **jump tables** (`ldrcc pc,[pc,idx,lsl#2]`):
  - cmds 0x00–0x16: table @0x5af18, 23 entries (rt ptrs 0x60061178–0x60061654)
  - cmds 0x51–0x55: table @0x5afd0, 5 entries (0x6006185c–0x600619f0)
  - cmds 0x78–0xd0: table @0x5b058, 0x59 entries; unhandled → 0x60062898
    (default → "Unknown command code" + `sendError(msgId,9)`).
- Bad payload length → `sendError(msgId,6)` (proto vt+8 = FUN_0016e19c).
- Field readers: `FUN_00077824`=u32BE, `FUN_00077a14`={u8,u8,u16BE},
  `FUN_00077a80`={u8,u8,u8}, `FUN_00077bd0`=NUL-term UTF-8→UTF-16 (cursor).

### ⚠ Vtable-resolution caveat (open)

The app-iface sub-object (proto+4 = ARCAppInterface+0x114) installs vptr
`DAT_000d5900+0x218` = file **0x264a3c** in ctor FUN_000d5514 — but that
table is **sparse** (only ~20 of ~100 slots non-zero, all 0x6017xxxx).
Neighbouring sub-vtables (ctor writes DAT_000d5900+{0,0x218,0x3a8,0x3bc,
0x3e0,0x3fc,0x45c,0x478,0x48c,0x498,0x4a4} = file 0x264824–0x264cc8) are
either all-sentinel (`fffffe58`/`ffffff70`/`ffffff7c` blocks — likely
vcall-offset/construction tables, not fn pointers) or dense mixes of
0x6017xxxx code + 0x6024xxxx/0x6026xxxx data ptrs + small ints — i.e.
CnE leaf-class descriptor records, not plain vtables. **The runtime
dispatch vtable therefore could not be pinned statically** (open item
carried over): the slot→name bindings below use the dispatch slot numbers
(definitive) + catalog-order/payload inference (marked 🔶/❓).

---

## 2. Command table

### Verified direct-compare commands

| cmd | vt slot | len check | payload layout | candidate method (conf.) |
|-----|---------|-----------|----------------|--------------------------|
| 0x17 | +0x70 | ==0 | — | doGetSystemState? / no-arg query ❓ |
| 0x18 | +0x74 | ≥1 | `{utf8str}` | set-name-ish: setHostData/setIPAddr/doBonjour*(name) 🔶 |
| 0x19 | +0x78 | ≥7 | `{u8,u8,u16BE, u8,u8,u8}` (two sub-records: FUN_00077a14+FUN_00077a80) | 2-field config set 🔶 |
| 0x30 | +0x7c | ==5 | `{u32BE, u8}` | id+flag selector (closeFile? handle/deregister) 🔶 |
| 0x31 | +0x80 | ==0 | — | no-arg ❓ |
| 0x32 | +0x84 | ==0 | — | no-arg ❓ |
| 0x50 | +0x88 | ==0x0a | `{u32BE, u32BE, u8, u8}` | doSPISendReceive (device,cs,xfer) / transport cfg 🔶 |
| 0x56 | +0xa0 | ==0 | — | no-arg ❓ |
| 0x57 | +0xa4 | ==0 | — | no-arg ❓ |
| 0x58 | +0xa8 | ==0 | — | no-arg ❓ |
| 0x59 | +0xac | >1 | `{u8, utf8str}` | chan/id + name (doNetSetOutput name? play-chan map) 🔶 |
| 0x5a | +0xb0 | ==0 | — | no-arg ❓ |
| 0x70 | +0xb4 | ==5 | `{u32BE, u8}` | id+flag (doBonjourDeregisterService handle?) 🔶 |
| 0x71 | +0xb8 | >5 | `{utf8str, u8, u32BE}` | name+id+param (resolveService?) 🔶 |
| 0x73 | +0xbc | ==0 | — | no-arg ❓ |
| 0x74 | +0xc0 | >0x0c | `{u8,u8,u8, u32BE, u8, u32BE, utf8str}` | **doNetSetDeviceConfig** 🔶 (3×u8=IP-cfg fields, u32, u8=syntonized/samplesize, u32=playout-delay?, utf8=device-name) |
| 0x75 | +0xc4 | ==0 | — | no-arg ❓ |
| 0x76 | +0xc8 | ==0 | — | no-arg ❓ |
| 0x77 | +0xcc | ==0 | — | no-arg ❓ |

### Jump-table group 0x00–0x16 (table @0x5af18)

23 cmds, entries (rt) 0x60061178,0x600611a4,0x600611cc,0x600611f4,
0x60061228,0x60061278,0x600612ac,0x600612c8,0x60061338,0x60061374,
0x600613c0,0x600613e8,0x60061410,0x600612e4,0x60061300,0x6006131c,
0x60061438,0x600614d0,0x60061538,0x60061550,0x600615a0,0x6006162c,
0x60061654 (cmd order 0x00→0x16).

⚠ Entries point into a code region that the current project disassembly
has bound to *other* functions (RtspServer lazy-singleton getter @0x6120c,
RTPSIPTimer methods @0x61e24/0x61e98/0x62034/0x62108, SAPReceiver/browse
helpers @0x61260/0x61538/0x61624/0x61694/0x6170c…). The case bodies are
therefore **inside FUN_0005ae14's own tail span interleaved with library
code and were not cleanly separable** — per-body field reads not fully
extracted (open item). Expected family (error catalog + handler-helpers in
the same span): **file/browse/session** — parseBrowseCreateDirectory,
getPlayFileMap→{Alphabetical,Postfixed,Prefixed}PlayFileMap,
doGetWaveFileInfo, closeFile, doFileSystemAdded + session/system
(onStartup, doGetSystemState, setHostData, setIPAddr,
handleLinkStatusChanged, handleIPAddressAssigned, setNetChangedFlags,
servicesListUpdated).

### Jump-table group 0x51–0x55 (table @0x5afd0)

| cmd | case-body rt |
|-----|--------------|
| 0x51 | 0x6006185c |
| 0x52 | 0x600618fc |
| 0x53 | 0x6006195c |
| 0x54 | 0x600619d8 |
| 0x55 | 0x600619f0 |

5 cmds, medium record parsing — **net/transport config records** 🔶:
candidates {doNetSetDeviceConfig, doNetSetSource, doNetSetOutput,
doUDPSetConfiguration, doTCPSetConfiguration} in some order
(but note 0x74's payload already matches doNetSetDeviceConfig —
the 0x51–0x55 family may instead be transport-only: doUDPSetConfiguration/
doTCPSetConfiguration/doSPISendReceive + 2 more).

### Jump-table group 0x78–0xd0 (table @0x5b058)

Handled codes (all others → default/unknown):

| cmd | case-body rt | cmd | case-body rt |
|-----|--------------|-----|--------------|
| 0x78 | 0x60061d70 | 0xa4 | 0x60062148 |
| 0x79 | 0x60061dbc | 0xa5 | 0x60062170 |
| 0x7a | 0x60061e1c | 0xa6 | 0x60062198 |
| 0x90 | 0x60061e44 | 0xa8 | 0x600621c0 |
| 0x91 | 0x60061e6c | 0xa9 | 0x600621d8 |
| 0x92 | 0x60061e84 | 0xaa | 0x60062214 |
| 0x93 | 0x60061eac | 0xab | 0x600622a8 |
| 0x94 | 0x60061ec4 | 0xac | 0x600622e4 |
| 0x95 | 0x60061eec | 0xad | 0x60062320 |
| 0x96 | 0x60061f04 | 0xae | 0x60062338 |
| 0x97 | 0x60061f2c | 0xaf | 0x600623ac |
| 0x98 | 0x60061f84 | 0xb0 | 0x600623e0 |
| 0x99 | 0x60061fac | 0xb1 | 0x60062460 |
| 0x9a | 0x60062000 | 0xb2 | 0x60062514 |
| 0x9b | 0x60062028 | 0xb3 | 0x60062540 |
| 0x9c | 0x60062050 | 0xb4 | 0x600625bc |
| 0x9d | 0x60062068 | 0xb5 | 0x60062668 |
| 0x9e | 0x60062090 | 0xb6 | 0x60062694 |
| 0xa0 | 0x600620a8 | 0xb7 | 0x600626ec |
| 0xa1 | 0x600620d0 | 0xb8 | 0x6006273c |
| 0xa2 | 0x600620f8 | 0xb9 | 0x600627b8 |
| 0xa3 | 0x60062120 | 0xc0 | 0x600627f8 |
|      |              | 0xd0 | 0x60062854 |

41 cmds — the **large-record family** 🔶: heavy inline parsing (u8/u32/
string-list alloc loops). Candidates: firmware-upload chain
(startFirmwareUpload/uploadFirmwareChunk/validateFirmwareUpload/
performFirmwareUpdate/getFirmwareUpdateStatus), play/rec create
(doRecSetup/doRecCreate/doRecCreateSingle/doPlayCreate/
doPlayCreateSingle), Bonjour proxy (6 methods), doNetGetStreamList,
browse-create variants.

---

## 3. Method-name catalog (ordered, for binding)

Error strings at 0x2314c7–0x232eff (indexed catalog, no pointers).
File order = likely vtable order:

```
setHostData · getPlayFileMap · setIPAddr ·
handleLinkStatusChanged · handleIPAddressAssigned · setNetChangedFlags ·
servicesListUpdated ·
startFirmwareUpload · uploadFirmwareChunk · validateFirmwareUpload ·
performFirmwareUpdate · getFirmwareUpdateStatus ·
onStartup · doGetSystemState · closeFile · doFileSystemAdded ·
doGetWaveFileInfo · doRecSetup · doRecCreate · doRecCreateSingle ·
getAlphabeticalPlayFileMap · getPostfixedPlayFileMap ·
getPrefixedPlayFileMap · doPlayCreate · doPlayCreateSingle ·
doNetSetDeviceConfig · doNetSetSource · doNetSetOutput ·
doNetGetStreamList · doUDPSetConfiguration · doTCPSetConfiguration ·
doBonjourDeregisterService · doBonjourResolveService ·
doBonjourDeregisterBrowse · doBonjourGetBrowseServiceList ·
doBonjourResolveAddrInfo · doBonjourAbortResolve · doSPISendReceive
```
(plus `parseBrowseCreateDirectory` — dispatcher-side parse, may not be a
named method). ~39 names for ~88 handled codes → many cmds are
getter/setter variants without catalog errors or shared parse paths.

## 4. Payload schemas — key commands (verified from case bodies)

- **0x74 doNetSetDeviceConfig** 🔶 `{u8 ipCfg0,u8 ipCfg1,u8 ipCfg2,
  u32BE a, u8 syntonizedOrSampleSize, u32BE playoutDelay, utf8 deviceName}`
  — needs len > 0x0c; strings are NUL-terminated UTF-8→UTF-16, ≤0x100.
- **0x50 doSPISendReceive** 🔶 `{u32BE device/len?, u32BE arg2, u8 cs, u8 mode}`
  — len == 0x0a.
- **0x30/0x70** `{u32BE id/handle, u8 flag}` — len == 5.
- **0x19** `{u8,u8,u16BE} {u8,u8,u8}` — len ≥ 7 (two fixed records).
- **0x59** `{u8 sel/chan, utf8str name}` — len > 1.
- **0x71** `{utf8str name, u8, u32BE}` — len > 5.
- Group 0x00–0x16 & 0x78–0xd0 schemas: payload parsing lives in the
  interleaved case bodies — **not cleanly extracted this session** (❓).

## 5. uTrack-side ARC client (host)

- **`audiolan` SDS command exists** (uTrack only): registrar
  **FUN_0012f81c**, exec vtable @file **0x2dad78**, handler **file
  0x12f4d4** (rt 0x60135458, Thumb — **not yet decompiled**: the program's
  analysis has no function/xrefs there; needs a ThumbFunc pass on
  `uTRACK24_Release_4218.bcd`).
  Usage per help: `audiolan [stat rec play 44 48 88 96]`.
- **`audiolan` handler body** ✅ (file 0x12f4d4 — **ARM**, not Thumb;
  thunk into `b 0x12f81e`): strcmp's argv tokens via FUN_00003d18:
  - `stat` → `FUN_00178f04()` (HWCom getter) → `FUN_00177ba0(hwcom,0)`
    reads SPI-register context: `(byte0 & 0x70) == 0x30` = AudioLAN card
    ID check ("AudioLan ID (SPI Reg) FAILED" @0x12f754); then
    `FUN_00177870(hwcom,&in,&out)` = **getAudioLanError** → prints
    `AudioLan: inError=%d, outError=%d` (@0x12f790).
  - `rec` → `FUN_00177818(hwcom,1)` = **setAudioLanMode**
    ("setAudioLanMode FAILED/OK"); `play` = same helper arg 0 presumably.
  - `44/48/88/96` → **setAudioLanSampleRate** (@0x12f7f0).
  ⇒ Host→card control uses HWCom SPI primitives FUN_00177818/
  FUN_00177870/FUN_00177ba0 — i.e. **the ARC channel (or a register-level
  subset) is driven through HWCom**, not a named ARC client object.
- **Option-card detection** ✅ (ghidra_utrack_map.md §): AudioLAN card
  presence = bits in the SPI **shift-register IN image** inside HWCom
  (ctor FUN_0017930c opens `/dev/spi0` + HWComSPI/HWComI2C/"HWCom Unmute
  Timer"; IN bytes at ctx+0x84..86). Presence gates the `audiolan` cmd and
  the CopperLan Inputs groups. HWCom getter = FUN_00178f04 → *(0x60404068).
- **ARC link direction**: card firmware runs `/dev/spiSlave` (slave side);
  host side is the **SPI master on /dev/spi0** (SuluSPI0 in HWCom) — the
  ARC master channel should be the same engine, request-GPIO polled/irq.
- **"Audiolan Card" UI pane = `FUN_0011da94`** ✅: fills cached card info
  — `param_1+0x25/0x28/0x2b` = SDS/UI field objects (state enum 3 vs 5 =
  absent/present?), `param_1[0x36]` formatted into a 0x1e-char buffer shown
  next to literal "Firmware" (firmware version + IP shown in details pane).
- Host holds NO `ARC*` strings — the client is unnamed; expected mirror:
  build `{msgId,cmd,len,payload,ck}`, COBS-encode, write SPI master +
  request-pin handshake. uTrack ships `/dev/spi0` (HWCom shift-reg,
  "SuluSPI0") — the ARC master channel is not yet located ❓
  (check HWCom writeSCI/writePCI paths + `audiolan` cmd body).
- Card file-browse/rec-play/net-config drivers on host: expected callers
  of the ARC send path behind the browse/rec/play UI pages — to be traced
  from the `audiolan` thunk's callees + `FUN_0011da94` callers.

## 6. New open items (this session)

1. **Dispatch vtable**: proto+4 → ARCApp+0x114, ctor vptr = file 0x264a3c —
   sparse; neighbouring 0x264824–0x264dac tables are sentinel/descriptor
   blocks. Runtime-patched vtable or adjusted sub-object pointer likely —
   needs a live query or ctor single-step.
2. **Jump-table case bodies**: entries land inside currently-misbound
   library functions (RtspServer/RTPSIPTimer/SAPReceiver/browse helpers
   0x61178–0x62854). The case bodies are real ARM code interleaved in the
   same span — needs per-case ARM re-disassembly with correct boundaries
   (ArmPeek showed entries like 0x61e44 = `str r8,[sp]; ldr r0,[r4,#4];
   ldr r1,[r0]; ldr r12,[r1,#0x24]; blx r12` — i.e. they DO use the
   app-vt slot pattern, slot +0x24 for cmd 0x90 — but register context at
   entry (r4=proto) means these are dispatch-internal shared tails).
3. uTrack `audiolan` thunk body + SPI-master writer + COBS encoder —
   unstarted (no func/xrefs in program).
4. Which cmds map to firmware-upload vs play/rec vs bonjour inside
   0x78–0xd0 — needs case-body decompiles (item 2).
