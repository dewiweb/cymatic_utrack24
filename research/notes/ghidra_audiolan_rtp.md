# uT24 AudioLAN fw 4078 — RTP decoder RX / RTSP server / RTP TX internals

Continuation of `ghidra_audiolan_thumb.md` + `ghidra_audiolan_discovery.md`.
Program `uT24_Audiolan_Release_ 4078.bcd`, Ghidra addr = file offset; pointers
stored in the image are runtime VAs = file offset + 0x60000000. All offsets
below are FILE offsets unless marked VA. New dumps:
`research/ghidra/dumps/rtp_*.txt`. New scripts: `research/tools/ghidra2/`
(fresh script dir — Ghidra 12 OSGi refuses newly-added scripts in the old
`tools/ghidra` bundle: "Failed to get OSGi bundle containing script").

**Important structural correction to the earlier notes:** the three
"decoder vtables" @0x25fff8 / 0x260034 / 0x260070 are NOT independent tables —
0x260034 = 0x25fff8+0x3c and 0x260070 = 0x25fff8+0x78, i.e. they are
consecutive slots inside ONE shared table region. The decoder constructors
store that pointer at obj+0, and the creation site calls `[*obj + 0x24]`
uniformly (0xdf214–0xdf220). For L16 slot +0x24 = 0x60057bd9 (Thumb method);
for L24/L32 slot +0x24 = 0. Many other slots are also 0 — this module is a
loadable overlay and the empty entries are almost certainly filled by
load-time relocations into the main firmware's symbol table (they cannot be
literal zeros at runtime or the uniform `blx [vptr+0x24]` would crash).

---

## 1. Decoder object model & RX packet path

### Class layout (from ctors FUN_000708d0 / 0x70b28 / 0x70cb8, base FUN_00052038, base-base FUN_0006e06c)

- Codec selector `FUN_000394dc`: "L16"→0, "L24"→1, "L32"→2, "AM824"→3, else 4.
- Decoder-creation loop inside `FUN_000de560` tail (0xdef00–0xdf244):
  codec 0 → flag byte `src+0x30` chooses 0x228-byte `FUN_000cc6b4`
  (FlexDelay-L16) vs 0x11c-byte `FUN_000708d0` (L16); codec 1 → 0x228
  `FUN_000cc930` vs 0x11c `FUN_00070b28` (L24); codec 2 → `FUN_00070cb8`
  (L32); codec 3 → `FUN_0009cf20`/`FUN_00089400` (AM824). The +0x30 flag =
  `User_SyntonizedMode` → RTPDecoderFlexDelay{L16,L24} (typeinfo
  @0x258051/0x2583e1/0x2583fa). After the ctor, `blx [*obj+0x24]` = a
  start/bind vfunc, then obj stored into the per-channel decoder array
  `src_obj+0x88`.
- Base ctor writes (0x11c obj): +0x30 flag, +0xbe codec id, +0xc2/+0xc4
  channel counts, +0xd0..+0xe8 counters (init `[0x39]=0x0FFFFFFF`,
  `[0x3a]=0`), **+0xf4 = packet-validator fn ptr = 0x601ed6b8** and
  +0xf8 dispatch-mode dword (from `DAT_00052184 = {0x601ed6b8,…}`),
  +0x118 = per-channel routing table (0xc-byte entries: valid flag, dst
  channel, and for L24 four {byte-offset,part} pairs — the ×3/»2 packing
  table built by `FUN_000709e8`), +0xec = netconn, +0xfc = state byte,
  +0x11c = "expected timestamp" state (reset to 0x0FFFFFFF).

### Socket setup (FUN_00051d90 = "bind")

`bVar5 = (obj[0x43] & 0xF0) == 0xE0` multicast test →
`func_0x0019dc00(0x40|0x20, 0x11)` = netconn_new(UDP); recv timeout field
`conn+0xb0 = 500` ms; bind port `obj[0x45]`; for class-D additionally
`func_0x0019daa8(conn,&group,0)` = **igmp_joingroup**; then `blx [*obj+8]`
= start vfunc. Close path `FUN_00051f84`: igmp leave via
`func_0x0019daa8(conn,&group,0,1)` + `FUN_0019d660` (netconn_delete);
called by all decoder dtors (FUN_00070994, 0x70c50, 0x70d7c, 0x894c4,
0x9cff4, 0xcc7b0, 0x52188, 0x521c0).

### The RX loop + validator (FUN_000158e4 = L16, FUN_00015eb4 = L24, FUN_000157f0/0x15864 = more codec variants)

Shared per-decoder receive loop (obj = decoder, netconn at +0xec):

```
while (i = func_0x0019dd64(conn+0xec, &netbuf), run_flag@+0xf0):
    /* func_0x0019dd64 = netconn_recv (500 ms timeout set at bind) */
    if i==0: thunk netbuf_free
    if state@+0xfc != 4 && FUN_0007df30(obj,4)!=0:
        state = 4; *(+0x11c)=0x0FFFFFFF; *(+0x100)=0     /* stream-restart resync */
if i==0:   /* got a datagram */
    totlen_u16 = *(u16*)(*netbuf+8)   /* pbuf.tot_len */
    payload    = *(int*)(*netbuf+4)   /* pbuf.payload = RTP header */
    validator  = *(code**)(obj+0xf4)  /* = FUN_001ed6b8 */
    ret = (*validator)(decoder_base, payload, &totlen, &out)
    if ret: unpack samples via routing table +0x118/+0x224 into the
            playout-buffer slots returned by FUN_0001253c / FUN_0001261c
```

So **the packet validator is an indirect call — fn ptr stored at
decoder+0xf4** (signature `(decoder_sub_obj, rtp_payload_ptr, &totlen,
&out)` → returns {payload_offset, ok} plus an out param used as the
playout-slot index). The default dword `0x601ed6b8` copied in by the base
ctor lands in a **data/string region, not code** (both ARM and Thumb
disasm at 0x1ed6b8 fail) — it is a placeholder/default that the
bind/configure path overwrites with the real codec validator (likely a
load-time relocated pointer). The +0xf8 low bit selects direct-call vs
vtable-indirect dispatch of the same slot. Finding who writes decoder+0xf4
is the one remaining hard step for the exact SSRC/PT/seq rules; the call
sites show the validator is the sole accept/reject gate before sample
unpacking.

- **SSRC/PT filtering:** not done in the receive loop itself — it must be
  inside `FUN_001ed6b8` (single choke point). No SSRC literal-compare was
  found elsewhere; the RTP header is not touched before the validator.
- **Seq tracking:** handled inside the validator/playout layer; the
  decoder keeps `+0x11c` = last/expected timestamp (init 0x0FFFFFFF) and
  `+0x100` = secondary counter, both reset on "stream restart" (state
  transition to 4 posted through `FUN_00154df8` msg `{3,0,codec,4,…}`).
- **Jitter/playout buffer:** `FUN_0001253c`/`FUN_0001261c` walk a pool of
  `*param_2` slots; each slot has `param_2[ch+3]` = target timestamp; the
  window check is `uVar5 = poolbase + time_now` vs `slot_ts + param_3` —
  i.e. **accept iff `slot_ts ≤ now ≤ slot_ts + pool_span`** (with the
  wrap-around variant when `uVar5 < now`). Accepted slots return a write
  pointer into `poolbase + (stride*slot+ch)*4`. `FUN_0001261c` advances
  all slot write pointers by `stride*4` per packet. `minSampleBufferLevel`
  reported in /status = `*(stream+0x14)` while state ∈ {10,11} = this
  pool's fill.
- **'Samples outside window' / 'Time step':** posted to the controller as
  decoder messages; controller maps them to error-catalog strings
  @0x1e74a4/0x1e74f8 (status 2 'time step warning', 3 'sync error',
  1 'no sync'). The comparison is the slot-window check above —
  `RTP timestamp` is compared against the playout window derived from the
  card's media clock (the sample counter latched to PTP, see §5).
- **L16 vs L24 unpack:** FUN_000158e4 uses `spp*2` bytes/sample, u16
  reads, byte-swap `<<8|>>8` (L16); FUN_00015eb4 uses `spp*3`,
  0xc-byte routing entries `{valid, dstch, byteofs, part}` with
  part∈{0..3} selecting the L24 3-byte fragment shuffle written by
  `FUN_000709e8` (L24). AM824/L32 have parallel loops at
  FUN_000157f0/0x15864.

### TCP listener thread (for comparison) — FUN_00066fa0

Generic TCP server loop: netconn_new(0x10)=TCP, bind port `+0xcc`,
`func_0x0019db5c(conn,5)`=listen backlog 5, `func_0x0019d27c`=accept,
`func_0x0019d880`=peer, recv `func_0x0019e0a8` 500 ms. Notifies a handler
object `+0xc0` via vfunc+0x110 (connect/disconnect, id byte `+0xd2`) and
vfunc+0x114 (data: id, len, buf `+0xe0`). Used by the RTSP server
(thread "RtspServerThread", 0x2000 stack, ctor `FUN_00054d88`).

---

## 2. RTSP server request flow

### Plumbing

- `FUN_00054d88` = RtspServer ctor: spawns "RtspServerThread" +
  "RtspServerTimer", allocates the session-manager object (lists at
  +0x100..+0x160, `*(iVar4+0x164)=1` — the "running" flag read by
  `FUN_000b7dac` via `param_1[0x1d0]+0x164`).
- "RTSP server starting on port %d" @0x5467c, referenced by Thumb code at
  0x542b6 (server bring-up region 0x53xxx–0x55xxx).
- The TCP listener `FUN_00066fa0` feeds the handler object's
  vfunc+0x114 = request-data parser; the URL→stream resolution is:
  `FUN_000db030` → session-container getter → `FUN_000b7dac` →
  `FUN_0015c49c`.

### FUN_0015c49c — URL dispatch (full decompile in `rtp_rtsp1.txt`)

Iterates session objects `param_1+0x7c..+0x80`; per session:
- `/by-name/<name>`: case-sensitive strcmp vs `session+0x44`
  (the path string built by `FUN_000524c0`).
- `/by-id/<n>`: parses the trailing integer, compares `session+0x54`
  (the 1-byte rolling id counter `DAT_000527e0` from `FUN_000524c0`).
- Match → `FUN_00152ae8(session, reply, 1)` = the SDP generator → return 1.
- No match → return 0 ⇒ 454 ("Session Not Found" @0x26b7b4).

### Method support

- Public/OPTIONS response lists exactly `DESCRIBE, SETUP, TEARDOWN, PLAY`
  (string @0xdb3f5, emitted via "Public" header @0xdb418, Thumb code
  ~0xdb3b0). The method-name table @0x26b624-0x26b672 lists
  RTSP/1.0, RTSP/1.1, RECORD, DESCRIBE, ANNOUNCE, PAUSE, TEARDOWN, SETUP,
  GET_PARAMETER, SET_PARAMETER — the *parser* recognizes these, but the
  only implemented request classes (see error strings) are
  RtspServerRequest{Describe,Setup,Play,Teardown,GetParameter}.
  **No ANNOUNCE, no RECORD, no PAUSE handler strings exist** (PAUSE/RECORD/
  ANNOUNCE/SET_PARAMETER parse but presumably get a 4xx/405 reply).
  `Server: DMP3_Embedded_RTSP_Server_v1` (@0xccda8, with "Transport"@
  0xccd8d/"Session"@0xccda0/"Server"@0xccdc8 = the response-header
  builder ~0xccce8).
- "RTSP Version not supported" @0x26b70e → only RTSP/1.0 (and 1.1 parse).

### invokeRequest bodies (error-string anchors @0x23c380–0x23c5c8)

| class | failure modes (strings) |
|---|---|
| RtspServerRequestDescribe::invokeRequest | "Cannot get SDP description for url %s - return error" → 454 |
| RtspServerRequestSetup::invokeRequest | "Cannot create new RTSP session"; "Cannot parse RTSP client transport parameter" |
| RtspServerRequestPlay::invokeRequest | "Error 454 session not found"; "Play attempt failed!" |
| RtspServerRequestTeardown::invokeRequest | "Error 454 session not found"; "Reardown attempt failed!" |
| RtspServerRequestGetParameter::invokeRequest | "Error 454 session not found" |

### SETUP response / transport model — UDP unicast only

Response Transport header is built in the server code region ~0x15c26c
from the literal pieces @0x15c3cc–0x15c404:
`unicast;` / `server_port=` / `client_port=` / `ssrc=` / `mode=` —
i.e. the reply is the classic
`Transport: RTP/AVP;unicast;client_port=X-Y;server_port=A-B;ssrc=<hex>`
form. The request-side parser understands `RTP/AVP`, `unicast`,
`multicast`, `client_port=` (strings @0xdb310–0xdb348, Thumb parser
~0xdb2b4).
**No "interleaved", "TCP", or "lower_transport" literals exist anywhere →
the card does NOT do RTP-over-RTSP-TCP interleaving.** SETUP is UDP-only;
a SETUP that fails to create the session or whose client transport can't
be parsed → error reply.
SETUP creates a `RtspServerSession` (@0xa38a4, ctor site ~0xa37d4) — the
unicast pull session: PLAY then switches the stream's send path to the
client's `client_port` (the "+0x5b" netconn-sendto branch in §3).
PLAY response carries `RTP-Info: …seq=%u…` (@0xc9378 + `seq=%u`@0xc936d,
site ~0xc92ea) and `Session:` (@0xc9384/0xc9338).
Session teardown frees the unicast session; GET_PARAMETER answers 454 for
unknown sessions (keep-alive ping).

### Outbound (client side)

The card is also an RTSP client only for DESCRIBE: `FUN_00078f1c` sends
`DESCRIBE rtsp://<ip>/by-name/<name> RTSP/1.0\r\nCSeq: 2\r\n\r\n`, strips
headers, feeds body to `FUN_00056158` SDP_Parser (status line unchecked).
No client SETUP/PLAY exists — subscription is by manualSDP/cache, never
by outbound RTSP session setup.

---

## 3. RTP TX path (card as sender)

### Per-stream session object (FUN_000524c0 "advertise", FUN_00052290 "buffer init", FUN_00052bc8 "teardown", FUN_00052e60 dtor)

- Fields: +0x30 dst IPv4, +0x34 src IPv4, +0x38 dst port, +0x3a src port,
  +0x44 `/by-name/<name>` path, +0x48 Bonjour service handle, +0x4c SAP
  record, +0x54 rolling id byte (`DAT_000527e0`, wraps skipping 0),
  +0x57 TTL, +0x59 "advertised" flag, +0x5a "stop" flag,
  +0x5b "unicast-socket mode" flag, +0x5e payload bytes per packet.
- For multicast dst (+0x30&0xF0==0xE0): builds **L2 frame templates** —
  dst MAC = `01:00:5e` + `(grp>>16)&0x7f : grp>>8 : grp` (@+0x31..0x33),
  IPv4 header `0x45|dscp<<2`, total-len = `+0x5e + 0x1c`, proto 0x11,
  saddr/daddr — pre-stuffed into 3 rotating frame buffers `+0xc..+0x14`
  (each `+10` = frame len `+0x5e+0x2c`); registers
  `_rtsp._tcp,_ravenna_session` in `local.` via `FUN_0006a6e4` mDNS
  (vtable+4) and enqueues SAP announce `FUN_00055d44`; igmp-joins the
  group via a temp netconn.
- For unicast (+0x5b mode): creates netconn 0x22 + netbuf `FUN_0019d264`;
  writes UDP src/dst ports (+0x38/+0x3a) and `len = +0x5e + 8` into each
  buffer's UDP header, zero checksum.
- `FUN_00052b68` = graceful stop; `FUN_00052bc8` = teardown (SAP delete
  `FUN_00055ea8`, mDNS unregister vfunc+0x18, netconn/netbuf free, igmp
  leave).

### Packetizer FUN_00052834 (called per session from pump FUN_00012680)

- Decimation gate: byte `+0x55` = stride, `+0x56` = phase — skip packets
  not matching the rate divider (`param_1[0x14]` next-due counter).
- `param_1[0x19]` = **RTP sequence counter** (32-bit, +1/packet, low 16
  written to the seq field); `param_1[0x1b]` = **RTP timestamp = the
  argument passed by the pump** (see below); `param_1[0x1c]` = **SSRC**
  (preset in the session object — fixed per stream, echoed back to
  clients in the SETUP `ssrc=` response).
- RTP header = 3 big-endian dwords `{VKF<<16 | seq16, timestamp, ssrc}`
  written at `param_1[6]+0/4/8` (VKF word = V/P/X/CC+M/PT initialized at
  session config; PT lives in the high half of `param_1[0x1a]`).
- Multicast path: picks next of 3 frame slots `param_1[7]` (round-robin,
  requires slot refcount ≤1); writes **IP identification = seq16**
  (0x14/0x15 of the IP header — seq visible at IP layer), then computes
  the 20-byte IPv4 header checksum (five u16 pairs, ~sum, complement) at
  +0x1a/0x1b, and sends the whole frame via `func_0x001aa408` +
  `func_0x001abc94(1,frame)` = **direct Ethernet TX (bypasses lwIP for
  multicast RTP!)**.
- Unicast path: `func_0x0019e1b0(netconn, netbuf, &dst_addr@+0xc, port)`
  = netconn_sendto to the RTSP-SETUP client.
- Payload fill: `blx [*sess+0x14]` or `[*sess+0x18]` — codec-specific
  packer chosen by flag `+0x58`; appends `param_3` bytes per call;
  packet is emitted when `*(u16*)(+0x26)` (= framecount spp limit)
  reached.

### Pump FUN_00012680 ← FUN_000148ac (audio-data callback chain)

`FUN_000148ac` runs per audio engine tick (the stream's
`doHandleStreamCallback`): copies samples into the TX frame via
`FUN_000122ec` + the channel-map table `+0x178`, then calls
`FUN_00012680(sess, framebuf, spp, sample_counter)`:
- `sess+0x70` increments each tick = **stream sample counter**;
- `sess+0x74` = last timestamp → **`timestamp arg = sample_counter -
  last`** so the RTP timestamp advances in samples of the card's own
  media clock. When the card is PTP-locked, that counter is the
  PTP-syntonized domain clock (the "Streaming Sample Counter"/"PTP
  Sample Counter" pair @0x891e4/0x89204 is the same counter at a PTP
  latch event), i.e. **TX timestamps ARE in the PTP clock domain** when
  syntonized; otherwise the free-running audio clock.
- Iterates `sess+0x7c..+0x80` = the per-session sender objects, calling
  `FUN_00052834` on each live one; `FUN_00014b7c` releases the source buf.

### Payload type / rate control

- PT byte = high half of `param_1[0x1a]` written at session create
  (from the stream's configured `RTP/AVP <pt>` — CnE `RTPDestination`/
  `RTPTTL`/`RTPSource` leaves @0x906ac-0x906964 feed +0x30..+0x5e).
- Rate/stride: `+0x55`/`+0x56` decimation fields + `+0x5e` frame size and
  `+0x26` packet-size limit — all derived from `SamplesPerPacket1xFS/
  2xFS/4xFS` (@0x7d03c+) and the sampling rate; the SDP generator emits
  `a=framecount:<spp>`, `a=ptime:<ms>` from the same config.

---

## 4. FUN_000de560 dispatcher — the 15 msg-type cases

`func_0x0016deb0(queue, &desc@0x25d4d0, &desc@0x25d364, -1)` dequeues a
CnE "tree-changed" message; `switch(*(u8*)(m+5))` indexes jump table
@0xde5e8 → 15 ARM case bodies (disasm in `rtp_cases.txt`; several
entries land inside shared code — Ghidra's table lists fall-through
joins):

| # | @ | evidence | resolved role |
|---|---|---|---|
|0|0xe45a4| hash-mixer loop (smull/eor shift) + calls 0x189e68/0x189e90/0x18a1a4 with reg base 0xFE0000 | multicast-MAC-hash reprogram / NIC filter update (address-changed) |
|1|0xe4bbc| strings "Receivers","Commit changes","Network Configuration","Audio Configuration","Commit change","Audio mode","Receiver Configuration","PTP Configuration","Receivers SIP Identity (need reboot)" | **CommitChanges** — walks config groups, commits CnE leaf sets |
|2|0xe5310| "Channels Configuration"; vfuncs +0x238/+0x23c on the leaf engine; list splice helpers | **ChannelsConfiguration changed** — rebuild channel tables |
|3|0xe576c| shared epilogue: leaf names "Config","Source","Source path","Status" via vfunc+0x248/+0x24c + notify FUN_000e5b54 | **OutputChannel leaf-set notify** (config/source/path/status dirty) |
|4|0xe5884| falls into case-3 epilogue | same family (leaf-set notify, second variant) |
|5|0xe597c| single branch → case-3 tree walk | same family (tree-next hop) |
|6|0xe5a90| `bl 0x001ce9cc` (string/variant copy) inside epilogue | same family (list cleanup + notify) |
|7|0xe5b14| bare `pop` return | no-op case |
|8|0xe5ba4| nested switch on r8: 0x500/0x501/0x504/0x1000/0x1001/DAT base+0x2e,+0x2f | **leaf-value GET request dispatcher** (mirrors FUN_000e5b54's getter table: MAC addr, IP, name strings) |
|9|0xe5c38| FIFO-depth math vs 0x200/0x600 thresholds + vfunc+0x208 (queue level) + FUN_000be010 | **status/value publish** (report producer, high-water path) |
|10|0xe5cc8| shared with 9 | publish path |
|11|0xe5d0c| shared with 9 | publish path |
|12|0xe5d30| shared with 9 | publish path |
|13|0xe5dbc| bare pop | no-op case |
|14|0xe5e40| `blx [r0+0x20c]` on the reporter object | publish single leaf value (vfunc+0x20c) |

So the 15 subtypes collapse to ~6 functional groups: (a) MAC/multicast
reconfig, (b) config-group commit, (c) channel config rebuild,
(d) output-channel leaf notify, (e) leaf-value get (query),
(f) value/status publish + 2 no-ops. `FUN_000da8f0` pre-dispatches one
descriptor family ({0x25d4a4}: mirrors `+0x30..+0x3c` triple into a
cache and invokes a cb ptr) — that's the "current settings" shadow-copy
update. `FUN_000e5b54` = the notify/publish helper implementing the
getter table (0x500=name?, 0x501, 0x504, 0x1000=?, +0x2e MAC, +0x2f IP,
+0x20) via reporter-object vfuncs +0x208/+0x20c/+0x210.

The decoder-creation tail (0xdef00–0xdf244) is reached from the
OutputChannelChanged path inside the same function (before the switch —
it's the "apply" phase, not a switch case).

---

## 5. Time-slip / PTP servo

- Decoder-side resync: on each received packet the RX loop checks
  `FUN_0007df30(obj,4)` → posts msg `{3,0,codec,4,…}` via `FUN_00154df8`;
  when it fires, state byte +0xfc←4, **expected-timestamp +0x11c ←
  0x0FFFFFFF** (i.e. ~2.8 M samples ≈ 55 ms @48 kHz restart window) and
  +0x100←0 — this is the decoder's "accept the next packet wherever it
  lands" resync latch after stream restart. The per-packet window check
  itself is the `FUN_0001253c` slot-acceptance (`slot_ts ≤ now ≤
  slot_ts + pool_span`, pool_span = playout delay in samples,
  CnE `User_PlayoutDelayOffset`/`StreamingConfiguration_RTPDecoder
  PlayoutDelay` + `delayInSamples` leaf @0x921d0).
- 'Time step on decoder %u at timestamp %u' = the discontinuity message
  when `ts - expected > playout-window`; 'Samples outside window' = the
  reject when outside `±` the buffer span. Exact numeric threshold =
  the pool's `param_1[2]` (delay) + `param_1[1]` (stride) terms in
  FUN_0001253c — i.e. **tolerance = configured playout delay** (CnE
  `delayInSamples`), not a hardcoded constant in the RX loop.
- PTP servo bypass: log strings in the second PTP string region —
  `PTP: large offset, by-passing servo loops    raw_offset=%c%llus %uns`
  @0x23c085, `PTP: resetting servo loops` @0x25d2c, `PTP LC: gap=%u
  raw_offset=%c%uns filteredOffsetNs=%d output_drift=%d accu_drift=%d
  lock[count=%u depth=%u]` and `Loop Control: currentOffset=%d
  lock[count=%u depth=%u]` (referenced by code near site 0xad4da).
  **`FUN_000ad4b4` @0xad4b4 (Thumb) = the loop-control shell/status
  handler**: case 0 prints lock[count,depth]/currentOffset/offset+drift
  state (struct `DAT_000ad57c`), case 1 toggles debug flag +0x1c,
  case 2 sets lock params +0x28/+0x2c clamped to `1..DAT_000ad654`;
  the PI servo code itself sits around it in 0xa8xxx–0xaexxx.
  The bypass condition is a
  **raw_offset magnitude threshold in the PTP loop-control** (when the
  unfiltered master↔slave offset is huge, the PI servo is skipped and the
  clock is stepped instead of steered; "PTP MSG: RX sync -> Synchronise
  local clock" path). The strings carry `%llus %uns` — comparison is on
  the raw ns offset; the literal threshold constant sits next to the
  'large offset' raise site which the xref tools did not resolve (the
  0x23cxxx module strings are reached via movw/movt pairs or a
  descriptor, not adr16) — **unresolved, needs one more pass on the
  0xa8xxx–0xaexxx loop-control code**.
- Status mapping (table @0x26af32): decoder states 1 'Receiving (no
  sync)', 2 'time step warning', 3 'sync error', 10 'Waiting',
  12 'Receiving' — written by `doHandleDecoderMessage` from the
  decoder→controller messages above.

---

## Evidence anchors

| what | file offset |
|---|---|
| codec selector | FUN_000394dc |
| decoder ctors L16/L24/L32 | FUN_000708d0 / 0x70b28 / 0x70cb8 |
| FlexDelay ctors (0x228 obj) | FUN_000cc6b4 (L16) / FUN_000cc930 (L24) |
| base ctors | FUN_00052038 → FUN_0006e06c |
| L24 routing-table builder | FUN_000709e8 |
| decoder-creation loop | inside FUN_000de560 @0xdef00–0xdf244 |
| decoder bind/close (UDP+IGMP) | FUN_00051d90 / FUN_00051f84 |
| **RX loops + validator call** | **FUN_000158e4 (L16), FUN_00015eb4 (L24), FUN_000157f0/0x15864; validator = decoder+0xf4 → FUN_001ed6b8** |
| playout-window slot check | FUN_0001253c / FUN_0001261c |
| stream-restart resync post | FUN_0007df30 → FUN_00154df8 |
| TCP listener (RTSP server) | FUN_00066fa0 (port +0xcc, handler vfunc+0x110/+0x114) |
| RtspServer ctor | FUN_00054d88 |
| URL dispatch /by-name/ /by-id/ | FUN_000db030 → FUN_000b7dac → FUN_0015c49c |
| SDP generator | FUN_00152ae8 |
| SETUP transport strings | @0x15c3cc "unicast;","server_port=","client_port=","ssrc=","mode=" (builder ~0x15c26c) |
| response-header builder | ~0xccce8 ("Transport","Session","Server: DMP3_Embedded_RTSP_Server_v1") |
| PLAY RTP-Info | ~0xc92ea ("RTP-Info","seq=%u","Session") |
| Public methods list | @0xdb3f5/0xdb418, site ~0xdb3b0 |
| invokeRequest error strings | @0x23c380–0x23c5c8 |
| session advertise + mDNS/SAP | FUN_000524c0 |
| session buffers/UDP hdr | FUN_00052290 |
| session teardown | FUN_00052bc8 / FUN_00052b68 / FUN_00052e60 |
| **RTP packetizer** | **FUN_00052834** (seq +0x64, ts arg, ssrc +0x70, PT in +0x68 hi, IP-ID=seq, raw-ETH TX multicast / netconn_sendto unicast) |
| TX pump | FUN_00012680 ← FUN_000148ac (timestamp = sample counter delta, +0x70/+0x74) |
| notify/publish helper | FUN_000e5b54 (getter table 0x500/0x501/0x504/0x1000/…) |
| dispatcher | FUN_000de560, jtab @0xde5e8, pre-dispatch FUN_000da8f0 |
| msg dequeue | func_0x0016deb0 (descs @0x25d4a4 / 0x25d4d0 / 0x25d364) |
| error catalog (indexed, no ptrs) | @0x1e74a4 'Samples outside window', @0x1e74f8 'Time step', etc. |
| status names | @0x26af32 (0–15) |

## Still open / next pass

1. `FUN_001ed6b8` (packet validator at decoder+0xf4): decompile needs a
   manual ARM disasm pass (decompiler chokes on its ctor pattern) —
   this is where exact SSRC/PT/seq/timestamp rules live.
2. PTP loop-control region ~0xa8xxx–0xaexxx for the numeric 'large
   offset' bypass threshold (strings @0x25d2c/0x23c085 have no direct
   xref — locate via the 'PTP LC:'/'Loop Control' code users).
3. Exact meaning of decoder state byte +0xfc values (4 = restart-latched;
   others map to the 0–15 status table).
4. Which of cases 8–14's leaf-ids correspond to which CnE leaves — the
   +0x500/+0x1000-range leaf-id constants are computed from a base DAT.
