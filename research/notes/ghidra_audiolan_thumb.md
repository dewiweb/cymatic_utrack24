# Ghidra RE — AudioLAN Thumb module deep-dive (packet acceptance path)

Continuation of `ghidra_audiolan.md`. Program `uT24_Audiolan_Release_ 4078.bcd`
(raw ARM:LE:32:v7, VA = 0x60000000 + file offset). New tool:
`research/tools/ghidra/ThumbFunc.java` (clears code units + TMode context,
re-disassembles as Thumb, prints listing + decompile) and `BulkDisas.java`
(seeds disassembly at every pointer into a range — created ~640 extra
functions across the module; now 7409 functions total).

## 0. Mechanics discoveries

- **The 0x1e5xxx–0x1e8xxx "error catalog" is a FLAT string blob with NO pointers
  to it** (verified: no dword, no ARM adr — the old `thumb_xref.py` armadr mask
  was broken, fixed version found nothing; no Thumb movwt/adr16/ldr refs).
  Errors are raised by *index*, not by string pointer — the catalog is a
  passive registry (CnE error map). Code-side errors use *separate* copies of
  the strings embedded next to the code (e.g. ARM region 0x9dxxx for
  `RavennaController::doInitialize/doNotifyINVITE/doNotifyACK/doNotifyBYE`).
- Module code references its own strings at 0x22xxxx–0x26xxxx (TRACE:/ERROR:
  RTPSIPUnicastController::*, DataStreamHandler::*, PTP LC:*) via adr16/pools.
- **The module is mixed ARM+Thumb**, not pure Thumb (e.g. 0x165bbc, 0x1705b8
  are ARM; 0x16f8a0, 0x170da8 are Thumb).

## 1. Message / notification chain (subscription → decoder)

Confirmed chain:
`POST /outputs` or SDS `set` → `OutputChannel::setManualSDP` (0x70260) /
`setSourceStream` (0x70690) / `setOutputName` (0x704c4):
- writes CnE leaves (`ManualSDP`, `ManualSDPChannel`, `User_SourceStreamName`,
  `User_SourceChannel`) via `FUN_00041c14`/`FUN_00042a98`/`FUN_00043514`/`FUN_00041dd4`
- allocates a 0x18-byte message `{desc=&0x260b08, listener=*(leaf+0x24), arg1,arg2, obj, chan}`
  and calls `listener->vtable[+0x2c](listener, msg, -1)` (async post, no commit step).

Descriptor @0x260b08 = `{0xfffffffc, 0×6, funcs{0xfdd68,0xfdc88,0xfdc90,0xfdbfc}}`.
Those funcs are OutputChannel-internal list rebuilders (FUN_000fdca8/FUN_000fdab8)
that then call `*(obj+0x18)->vtable[+0x1c](obj,0,1)` — the notify-up to the
controller. This region 0x26030c–0x260e78 is a LONG array of ~80 such
descriptors (the CnE leaf-class registry; each = {marker -4, fields, 4 methods}).

### The dispatcher — FUN_000de560 (ARM, very large, ~0xde560→0xe6000+)

```
FUN_000de560(obj, msg, ...):
  lock(obj+4)                    // FUN_001a0700
  if (FUN_000da8f0(obj,msg,..)==0) {
     m = func_0x0016deb0(msg, &descA, &descB, -1);   // dequeue/translate
     if (m) switch (*(byte*)(m+5)) { case 0..14 }    // msg-type dispatch
  }
```

Jump table @0xde5e8, 15 case targets: 0xe45a4, 0xe4bbc, 0xe5310, 0xe576c,
0xe5884, 0xe597c, 0xe5a90, 0xe5b14, 0xe5ba4, 0xe5c38, 0xe5cc8, 0xe5d0c,
0xe5d30, 0xe5dbc, 0xe5e40. Most are std::map/list updates of the channel/
source structures ("Network Configuration", "Channels Configuration",
"Source" strings, FUN_00084950 + FUN_000e5b54 notify helpers).

**Inside the same function** (no ret between 0xde700–0xdf300) there is a
per-channel loop that creates decoders — the doOutputChannelChanged tail:
- 0xdf040 → `FUN_000708d0` (codec id 0 → alloc 0x11c decoder, vtable @0x25fff8)
- 0xdf170 → `FUN_00070b28` (codec id 1 → vtable @0x260034)
- 0xdf204 → `FUN_00070cb8` (codec id 2 → vtable @0x260070)
- 0xdf2d0 → `FUN_0009cf20`, 0xdf354 → `FUN_00089400` (more classes / teardown)
- codec id comes from `FUN_000394dc()` (same selector used by the SIP path)
- "Channel overlap detected" errors @0xe41xx (ARCApplicationInterface).

So `RavennaController::doOutputChannelChanged` = the OutputChannelChanged
case inside this dispatcher (its ordered gate checks from the error catalog:
controller-init → sampling rate → multicast dest → PTPv2 domain → payload
format → SDP info → free decoder → SIP-stream sanity), followed by the
decoder-creation loop above. **Note: it does NOT call the SDP parser
directly** — the ManualSDP text is parsed CnE-side / at leaf level; the only
`FUN_00056158` (SDP_Parser) callers are FUN_0006243c (SAPReceiver::process),
FUN_00078f1c (RTSP DESCRIBE client), FUN_0009fb84 (doNotifyINVITE / SIP),
FUN_000d8124 (SIP apply-SDP).

### Decoder creators (all alloc 0x11c bytes)

| creator | vtable | codec |
|---|---|---|
| FUN_000708d0 | @0x25fff8 | L16 (codec id 0) |
| FUN_00070b28 | @0x260034 | L24 (codec id 1) |
| FUN_00070cb8 | @0x260070 | L32/AM824 (codec id 2) |

(`FUN_000d8124` = SIP "apply SDP" — same selector: FUN_000394dc → mkdec1/2/3.)

## 2. IGMP / multicast gate

`igmp_joingroup` = **FUN_0018ced8** (lwIP): rejects unless group is class-D
(`(*addr << 0x18) >> 0x1c == 0xE`, i.e. 224.0.0.0/4) and != all-hosts
(`*addr != *_DAT_0018d050`, probably 224.0.0.1). Adds group node, emits IGMP
report via `func_0x0018d2a4`, marks group refcount.
Callers: `FUN_0018527c` (join/leave wrapper — joins if flag `param_1[4]==0`,
else `igmp_leavegroup` @0x18d094; sets a result byte at param_1+4) and
`FUN_00191cc0` (lwIP socket-option dispatcher — cases 3/4 = IP_ADD/DROP_
MEMBERSHIP → join/leave; also socket-level TTL/flags cases).
→ "Destination address is not a multicast address" is raised in
doOutputChannelChanged when the SDP `c=` addr isn't class-D; the actual join
goes through the socket/netconn layer at decoder bind time.

## 3. /status JSON + internal states

`provideStatus` = **FUN_0008e4e0** (ARM, ~0x8e4e0). Emits `status` and
`minSampleBufferLevel` per stream object:
```
iVar6 = *(uVar11 + 0x14)                // stream/output object
status = *(byte*)(iVar6 + 0x10)         // JSON "status"
if (status == 0xa || status == 0xb)
    minSampleBufferLevel = *(iVar6 + 0x14)  // only then
```
i.e. buffer level is only reported in states 10 and 11.

Status-name table @0x26af32 (indexed 0–15):
```
 0  "Receiving (unicast, no sync)"
 1  "Receiving (no sync)"
 2  "Receiving (time step warning)"
 3  "Receiving (sync error)"
 4  "Transmitting (unicast)"
 5  "Receiving (unicast)"
 6  "OK"
 7  "Disabled"
 8  "Idle"
 9  "Invalid Sampling Rate"
10  "Waiting"
11  "Transmitting"
12  "Receiving"
13  "Invalid PTP Domain"
14  "Address Collision"
15  "Not enough Decoders"
```
=> a subscribed receiver stuck at status **0xa = "Waiting"** reports
`minSampleBufferLevel` = decoder buffer fill (0 while nothing is accepted).
User-observed codes map: 0="Receiving (unicast,no sync)", 7="Disabled",
13="Invalid PTP Domain", 14="Address Collision" — assuming the +0x10 byte
indexes this table directly.

## 4. Packet acceptance — what a sender must emit

From the decompiled gates + decoder model:

1. **Subscription**: valid `streamPath` (existing source + channel) or
   `manualSDP` — leaf writes enqueue the change; no separate commit.
2. **Config gates** (doOutputChannelChanged, early-return ⇒ status stays
   'Waiting' or error status):
   - controller initialized (else "Controller uninitialized")
   - current card sampling rate valid AND == stream rate and allowed for the
     audio mode (`EnabledIn1xFS/2xFS/4xFS`) else "Invalid sampling rate %d" /
     status 9
   - destination = class-D multicast else "not a multicast address"
   - SDP `a=clock-domain:PTPvu` / `ts-refclk:ptp=…:%hhu` domain ==
     `RavennaConfiguration/PTP/DomainNumber` else "Invalid PTPv2 domain" /
     status 13; **absent ⇒ treated as asynchronous stream (accepted)**
   - payload format ∈ {L16,L24,L32,AM824} else "Invalid payload format"
   - free decoder (< MaxNoOfDecoders=4) else status 15
   - streamPath source must exist in SIP/source list ("SIP source stream is
     malformed!")
3. **Then** decoder bound (mkdec vtable + socket bind + IGMP join on
   multicast) ⇒ status 'Waiting' until first in-window packet.
4. **Runtime gate (why Waiting persists)**: each incoming RTP packet must land
   inside the playout window derived from the RTP timestamp vs the card's
   media clock. Decoder posts `RavennaController::doHandleDecoderMessage:
   "Samples outside window on decoder %u"` (reject) and
   `"Time step on decoder %u at timestamp %u"` (discontinuity) → statuses
   'Receiving (time step warning)' (2) / 'Receiving (sync error)' (3) /
   'Receiving (no sync)' (1). So a 44.1 kHz / non-PTP-locked test sender
   produces a decoder but its timestamps never enter the window →
   buffer stays 0 → status stays 10 'Waiting' (buffer level shown but 0).

   For acceptance the sender should emit:
   `m=audio <port> RTP/AVP <pt>` + `a=rtpmap:<pt> L16/48000/<ch>` (or L24/L32),
   `a=mediaclk:direct=0`, `a=ts-refclk:ptp=IEEE1588-2008:<gm>:<domain>` matching
   the card's PTP domain, correct RTP PT + monotonically increasing
   seq/timestamp at the right packet rate (samples/packet per config),
   multicast dest = SDP `c=` group.

## 5. Open items / next steps

- Exact SSRC/PT filter inside the decoder RX path not yet located: the
  decoder objects (0x11c, vtables @0x25fff8/0x260034/0x260070) should be
  decompiled — their RX callback = where payload-type/SSRC/seq-window checks
  happen (typeinfo names RTPDecoderL16/L24/L32/AM824/FlexDelay @0x257a8b+;
  vtables found at 0x25fff8+ region). "RTP Decoder" thread config read at
  FUN_00180aac (`/cfg/System/Threads/RTP Decoder/{priority,preemptThreshold}`).
- FUN_000da8f0 (first call in dispatcher) and func_0x0016deb0 (message
  dequeue) worth decompiling to name the 15 msg types.
- Switch cases in FUN_000de560 do list maintenance; the SDP-validation +
  status-write sequence for OutputChannelChanged is inside it (site of the
  catalog-indexed error raises — error IDs unresolved).
- Old `thumb_xref.py` armadr/movwtA mask is wrong (0xE28F0000 can never
  match) — fix mask to `(w & 0xFE0F0000)==0xE20F0000` for add/sub rd,pc.
