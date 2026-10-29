# uT24 AudioLAN fw 4078 — RTP decoder validator dispatch + PTP servo constants

Continuation of `ghidra_audiolan_rtp.md`. Program `uT24_Audiolan_Release_ 4078.bcd`;
Ghidra addr = file offset; stored pointers = VA = offset + 0x60000000.
New dumps: `research/ghidra/dumps/val_*.txt`. New scripts:
`tools/ghidra2/{PtrDecomp,DisasThumb,HexDump,ValRangeScan,PoolOwner,RevScan}.java`.
All runs read-only (`-readOnly`, rollback transactions).

---

## 1. The +0xf4 dispatch — decoded at instruction level

RX loop FUN_000158e4 (identical pattern in FUN_00015eb4/0x12b34/0x13004/0x134ec/0x138a4),
disasm @0x159ec (dump `val_dis_rx.txt`):

```
ldr r0,[r4,#0xf8]        ; r0 = decoder+0xf8 dword
tst r0,#0x1
ldreq r12,[r4,#0xf4]     ; bit0==0 → DIRECT: fn = *(dec+0xf4)
cpy r1,r8                ; r1 = pbuf.payload (RTP header)
add r0,r4,r0,asr #0x1    ; arg0 = dec + (+0xf8 >> 1)  = "sub-object"
beq skip
  ldr r12,[r0,#0x0]      ; INDIRECT: r12 = *subobj  (its vtable/desc ptr)
  ldr r10,[r4,#0xf4]     ; r10 = +0xf4 (byte offset into that table)
  ldr r12,[r12,r10]      ; r12 = *(*subobj + +0xf4)
skip:
blx r12                  ; validator(subobj=r0, rtp_hdr=r1, &totlen=r2=sp+0xc, &out=r3=sp+0)
movs r10,r0 ; beq drop   ; ret==0 → drop packet, netbuf freed
```

So the pair is **{+0xf4 = fn-ptr OR vtable-byte-offset, +0xf8 = (subobj_offset<<1)|indirect_flag}**.
Return: low dword = payload offset (even; later `iVar2 += ret & 0xfffffffe` skips the
12+RTP ext bytes before sample unpacking) — i.e. ret = {ok,payload_offset}.
The `out` param (sp+0 → iStack_38) is the packet's timestamp used everywhere below.

### Writers of decoder+0xf4 (complete list — every `str ..,#0xf4` audited)

| site | fn | what it does |
|---|---|---|
| 0x52130 | FUN_00052038 (base ctor) | `dec+0xf4 = *DAT_00052184` = **0x601ed6b8**; `+0xf8 = DAT_00052184[1]` (placeholder pair) |
| 0x51e18 / 0x51e38 | **FUN_00051d90 (bind)** | `ldr r0,[0x51eb8]` → table base **VA 0x601ed6a8**; multicast (`dst&0xF0==0xE0`): `+0xf4=tbl[0], +0xf8=tbl[1]`, `+0xfd=0`; unicast: `+0xf4=tbl[2], +0xf8=tbl[3]`, `+0xfd=1`, bind port `+0x45` |

No other code path writes the field (the ~8 other `str #0xf4` sites are unrelated
structs / stack slots: CHAIoNet FUN_0001bdb0, USB FUN_00098574, FUN_00104988,
FUN_0010cb50, FUN_001293b4, FUN_0012a6a0 — all different objects).
→ **The validator is chosen ONCE per decoder at socket-bind time, per transport
(unicast vs multicast), from a 4-dword descriptor table at VA 0x601ed6a8.**

### What the table region actually is (important negative result)

File offsets 0x1e8800–0x1f1xxx are the **embedded web-server resource blob**:
a gzip'd canned HTTP response (`"Server: lwIP/1.3.1 … Content-Encoding: gzip"`,
`1f 8b` magic @0x1e80c0, `Content-Length: 20272`), then
`/assets/fonts/glyphicons-halflings-regular.svg` + a second gzip response @0x1ed020.
The {f4,f8} table at file 0x1ed6a8 sits INSIDE that gzip data — its file content
(0xdb4138e3, 0x4adf2dfb, 0xc26cbd95, 0xec41660f…) is meaningless.

⇒ VA range 0x601e8xxx–0x601fxxxx is a **runtime-only module table region** (the
.bcd is a bundle: ARM image + appended resource payload; the RAM region is filled
by module init/relocation, not from file bytes — same mechanism as the decoder
vtables whose slots are 0 in the file). ~300 data pointers into 0x601eb3xx–0x601efxx
exist (literal pools of readers; e.g. FUN_00013b6c compares bitfields vs
`tbl[flag]` values). **The concrete runtime {fn/vt-slot, subobj-off|mode} pairs —
hence the exact validator function — are not recoverable from the file image.**
They are written by module-init code that addresses the region via a walked base
(no literal-pool VA for 0x601ed6a8 exists outside FUN_00051d90, and no instruction
materializes any 0x601e8xxx–0x601fxxxx immediate).

**Validator behavioral contract** (what can be asserted from the call sites):
- signature `u64 validate(subobj, rtp_hdr, &totlen_u16, &out_ts)`;
- it is the SOLE accept gate before sample unpacking: ret==0 → drop (no SSRC/PT/seq
  check exists anywhere else — the RTP header is untouched before the call);
- `out_ts` becomes decoder+0x108 ("expected next timestamp"), drives the
  time-step compare and the playout window (§4);
- `subobj` = decoder + (+0xf8>>1) — for indirect mode a real sub-object of the
  decoder (candidates: +0xec netconn, +0xdc/+0x118 pool/desc sub-objects); the
  validator is thus most likely a **vtable method of a per-decoder sub-object**
  (indirect) or a free function (direct mode).
- Default (ctor) = placeholder pair → decoder must be bound before RX is possible.

Decoder state byte +0xfc observed values: 2 = recv-timeout posted, 3 = samples
outside window, 4 = stream-restart resync latch, 6 = time step. +0xfd = dispatch
variant byte set by bind (0 multicast / 1 unicast). +0x100 = resync countdown
(reload `DAT_000163b8` = **0x7530 = 30000**); +0x104 = periodic-report counter
(reload from +0xd4); +0x108 = expected next ts; +0x11c = last-reported ts
(sentinel 0x0FFFFFFF ≈ 2.8 M samples ≈ 55 ms @48 k).

Decoder→controller messages (FUN_0007df8c(dec,id,arg) → msg `{3,0,codec,id,arg}`):
id 3 = 'Samples outside window' (arg=ts), id 5 = periodic ts report, id 6 =
'Time step' (arg=ts); FUN_0007df30(dec,{2,4}) = timeout / stream-restart.

---

## 2. Playout window — 'Samples outside window' / 'Time step', end-to-end

Pool objects: `pool = *(dec+0xd8)`; per-channel slot array at `dec+0x118`
(`*slot` = nChannels, `slot[1]` = min-distance stat, `slot[2]` = clamp max,
`slot[c+3]` = per-channel base ts, `slot[c+0x23]` = write ptr).
FlexDelay decoders use the twin pool at `dec+0xdc` via FUN_000123d8/FUN_00012514
(same math) and expected-ts at +0xe4.

`FUN_0001253c(pool, slots, pkt_ts=out_ts, &flag)`:

```
now   = FUN_00014ba0() = *(DAT_00015178+0x18)   ← media-clock sample counter
                                                  (PTP-latched domain when
                                                  syntonized — the 'PTP Sample
                                                  Counter'/'Streaming Sample
                                                  Counter' latch pair @0x891e4/0x89204)
hi    = now + pool[2]           /* pool[2] = playout span = configured
                                   delayInSamples / User_PlayoutDelayOffset */
tgt   = slot[c+3] + pkt_ts      /* per-channel base + RTP-derived ts */
accept iff  now ≤ tgt ≤ hi      (with the uVar5<now wrap-around variant)
```

- On accept: `slot[1] = min(tgt-now, slot[1])` (running min distance → feeds the
  reported buffer level); `FUN_00006158(tgt, pool[2])` = u32 divide → schedules
  the write pointer `slot[c+0x23] = *pool + (pool[1]*slot + c)*4`; per packet
  FUN_0001261c advances all live write ptrs by `pool[1]*4` (stride = ch count).
- On reject of ALL channel slots (`flag==0`): if state≠3 →
  `+0x100 = 30000; FUN_0007df8c(dec,3,out_ts)` → 'Samples outside window' →
  status 3 'Receiving (sync error)'; state→3, +0x11c=0x0FFFFFFF.
- Time-step (discontinuity): when a packet IS in-window, expected-ts bookkeeping:
  `+0x108` holds the previous target; mismatch vs current `out_ts` →
  `FUN_0007df8c(dec,6,ts)` 'Time step' (state→6, +0x100=30000); periodic
  `+0x104` countdown → msg 5 + `+0x11c` resend (throttled reporting).
- Resync: FUN_0007df30(dec,4) → state 4, +0x11c=0x0FFFFFFF, +0x100=0
  ("accept next packet wherever it lands" for ~55 ms).
- RX timeout (netconn_recv −4/500 ms) → msg 2 → state 2 'time step warning'.

So: **window = [now, now + delayInSamples]** in the card's media-clock domain;
tolerance is purely the configured playout delay, no extra constant.

---

## 3. PTP servo loop control — FUN_00025b38 (full decode)

Called by FUN_000263ec (CURRENT_DS offset computation on RX sync — 'PTP MSG: RX
sync -> Synchronise local clock' path in FUN_00032554) and FUN_000278d8 (PTP
event dispatcher ← FUN_0003526c). Args: `param_2` = raw offset {hi64,ns,sign-byte};
extra stack arg = `gap` ("Time since previous Event", passed through from
FUN_000263ec's param_12).

State blocks (BSS): `DAT_00025d24`→0x60402e30 hold-off `{+9 flag, +0x2c tick}`;
`DAT_00025d48`→0x6045f938 lock `{count, depth, depthTarget, ?, outlierThresh}`;
`DAT_00025d4c`→0x6045f930 PI state; `DAT_00025d50`→0x6045f990 debug `{+0x1c flag}`.

### Constants

| const | value | meaning |
|---|---|---|
| **DAT_00025d28 = 0x1E8480 = 2,000,000 ns (2 ms)** | **'large offset' bypass threshold** — `if (*param_2‖param_2[1] (sec part ≠0) ‖ |raw_ns| > 2 ms)` → bypass |
| DAT_00025d58 = 0x1DCD64 = 1,953,124 ns (≈1.953 ms ≈ 1e9/512−1) | **steering rate limit** — `|output_drift| < const` required to apply |
| 0x3E9 = 1001 (ticks, ≈1 s @1 kHz) | post-bypass hold-off: `while (tick−last < 1001) skip` |
| 0x19 = 25 | min `gap` between servo applications (`gap<25` → just count, return 0) |
| PI divisors (defaults from FUN_00025774 reset) | +0x28 = **1000** (integral path), +0x2c = **10** (proportional path) |
| PI block init | +0x10=8, +0x14=1, +0x18=2000, +0x38=3, +0x3c=5, +0x5c=4, +0x60=2, +0x40=&DAT_00001f40, rest 0 |
| DAT_000ad654 = 0x2710 = 10000 | shell 'change PI values' clamp max (1..10000) |

### Algorithm (FUN_00025b38)

```
if (param_1==0) { log "PTP: resetting servo loops"; FUN_00025774(); arm hold-off; FUN_00026084(0); }
if (hold-off armed && tick−prev < 1001) return 1; else disarm
if (sec≠0 || |raw_ns| > 2,000,000)  ─┐
    bypass: log "PTP: large offset, by-passing servo loops raw_offset=%c%llus %uns" (@0x242000)
    FUN_00025774(); bypass_cnt(+0x78)++; arm hold-off; FUN_00026084(0);
    *out = raw offset (copied through — stepped by caller)
if (gap < 25) { PI+0x1c event_cnt++; return 0 }            /* no steer */
dev = |raw − filteredOffsetNs|
if (dev > (lock.thresh(+0x10) >> depth))                    /* outlier */
    if (count>0) count--; else if (depth>0){depth--; count=depthTarget}
    if (depth) { log "PTP LC: Sync Rejected …lock[count=%u depth=%u]"; cnt_1c++; return 0 }
    /* depth exhausted → accept anyway (self-heal) */
else { count++ (→depthTarget); then depth++ (→max), count=0 }
filteredOffsetNs(+0x24) = (raw + filtered) >> 1            /* 2-tap IIR */
accu_drift(+0x20)  += (filtered / DIV_I[+0x28=1000]) * (event_cnt+1)
output_drift        = (filtered / DIV_P[+0x2c=10]) + accu_drift
if (|output_drift| < 1,953,124) {
    FUN_00026084(|out|, sign)   /* apply steering: func_0x001e3634/0x1e378c/
                                   0x1e34dc + FUN_000371cc(*DAT_000260b4,…,sign)
                                   = PTP clock adjust write */
    *param_1 = {0,0,|filtered|, sign}   (the corrected offset returned)
    if debug@0x6045f990+0x1c: log "PTP LC: gap=%u raw_offset=%c%uns
        filteredOffsetNs=%d output_drift=%d accu_drift=%d lock[count=%u depth=%u]" (@0x241f94)
}
```

FUN_00003a1c = signed division ({quot,rem}); lock[count,depth] log fields read
from PI block +8/+0xc; FUN_00026084 also called with 0 on bypass/reset paths.

### Shell handler FUN_000ad4b4 ('ptp shell command', Thumb @0xad4b4)

`puVar1 = _DAT_000ad57c` = 0x6045f930 (same PI block):
- case 0: print fmt@0xad580 = PI divisors {+0x28,+0x2c}; @0xad5a0 =
  {+0x24 filtered, +8,+0xc lock count/depth}; @0xad5d8 = {+0,+4,+0xc,+0x34,+0x30};
  @0xad618 = +0x78 bypass counter.
- case 1 ("Log"): toggle debug byte 0x6045f990+0x1c, print "Log %s\n" +
  "Enabled"/"Disabled" (@0xad64c/0xad638/0xad640).
- case 2 ("change PI values" desc): `i = atoi(arg) clamp 1..0x2710`; strcmp
  (@0xad658) "p" → puVar1[0x28] = i; (@0xad65c) "i" → puVar1[0x2c] = i;
  reprints the pair. So **P divisor and I divisor are runtime-tunable** (defaults
  10 / 1000 after reset; note +0x28 feeds the accumulator path, +0x2c the direct
  path as decoded above).

---

## 4. Evidence anchors (new)

| what | file offset |
|---|---|
| validator dispatch (disasm) | FUN_000158e4 @0x159ec–0x15a14 |
| **+0xf4/+0xf8 writer (bind)** | **FUN_00051d90 @0x51df8–0x51e3c** |
| descriptor table base literal | @0x51eb8 → VA 0x601ed6a8 (ctor default 0x601ed6b8 @0x52184) |
| RX loops sharing dispatch | FUN_000158e4/0x15eb4/0x157f0/0x15864 + FlexDelay FUN_00012b34/0x13004/0x134ec/0x138a4 |
| window check (per-channel) | FUN_0001253c (std) / FUN_000123d8+FUN_00012514 (FlexDelay) |
| 'now' = media clock | FUN_00014ba0 = *(0x15178+0x18) |
| decoder msg post | FUN_0007df8c (id 3/5/6) / FUN_0007df30 (id 2/4) |
| resync reload const | DAT_000163b8 = 0x7530 (30000) |
| **PTP servo** | **FUN_00025b38**; reset FUN_00025774; apply FUN_00026084; sync path FUN_00032554→FUN_000263ec→FUN_00025b38 |
| servo consts | bypass 0x1e8480 (@0x25d28); rate limit 0x1dcd64 (@0x25d58); hold-off 0x3e9; gap-min 0x19; PI div 1000/10; clamp 0x2710 (@0xad654) |
| servo strings | 'large offset' @0x242000 (ptr @0x25d60); 'Sync Rejected' @0x241f48 (@0x25d54); 'PTP LC: gap=' @0x241f94 (@0x25d5c); 'resetting servo loops' @0x25d2c |
| PTP shell | FUN_000ad4b4 (Thumb); state @0x6045f930, debug @0x6045f990, lock @0x6045f938, hold-off @0x60402e30 |

## Still open

1. **Exact runtime validator pointers** — the {+0xf4,+0xf8} pairs at VA
   0x601ed6a8 are filled at runtime (region shares file offsets with the gzipped
   web-asset blob; file bytes are placeholder). To pin the real validator fn:
   find the module-init filler that writes VA 0x601eb3xx–0x601ed7xx (walked-base
   stores; the ~300 literal-pool pointers into the region are all *readers*),
   or dump the region on a live card. Whatever it is, its contract is now fully
   known: `(subobj, rtp_hdr, &totlen, &out_ts) → {ok, payload_offset}`.
2. Whether the multicast pair lands in direct or indirect mode at runtime;
   for indirect, +0xf4 = vtable byte-offset into *subobj — the candidate
   sub-objects are +0xec netconn / +0xdc / +0x118 pools.
3. FUN_00015178+0x18 media-clock writer (the 'Streaming Sample Counter' latch —
   PTP domain hand-off point) — same open item as before, unchanged.
