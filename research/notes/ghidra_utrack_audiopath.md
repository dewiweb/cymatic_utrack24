# uTrack24 firmware 4218 — INTERNAL AUDIO PATH end-to-end

Ghidra 12.0.4 project `research\ghidra\utrack_fw_proj\utrack_fw`, program
`uTRACK24_Release_4218.bcd`, loaded flat (Ghidra addr = file offset;
runtime = file offset + **0x60005F84**). Addresses below are **file offsets**
unless marked `rt`. Companion to `ghidra_utrack_map.md` (global map),
`ghidra_utrack_dsp.md` (mixer/meter state), `ghidra_utrack_recorder.md` (file I/O).
New scratch tools used this session (in `C:\tools\ghidra_scripts`, not the repo):
`FindDword.java` (memory-value scan), `VtDump2.java` (vtable dump at file addr),
`MkFunc.java` / `ReThumb.java` (function creation for unanalyzed code; ReThumb
clears+redisassembles wrongly-ARM-decoded sites inside an **aborted**
transaction — nothing persisted).

Headline result: **there is no "DSP chip" mix path in this firmware image.**
The "DSP"/WARP block moves framed AV packets between the codecs and ARM RAM;
**all gain/pan/monitor-mix/peak-meter math runs on the ARM** as a family of
Thumb/ARM kernels (file 0x1a000–0x1c000) invoked per audio block through
function-pointer callbacks installed per channel-mode. The 26-channel
"fader/pan/mute" model is a pure software mixer.

---

## 1. The audio kernel pipeline

### 1.1 Buffer & descriptor conventions

- Audio travels in **AV packets**. Kernel wrappers compute a packet's payload
  as `payload = pktDesc + 0x14 + *(u16*)(pktDesc - 2)` — i.e. a packet
  descriptor carries a 0x14-byte header and a u16 payload offset two bytes
  before the passed pointer.
- Payload layout = **N frames × (C stereo pairs + 1 stereo "sum" slot)**
  where C = 12 (24-ch modes) or 4 (8-ch modes), so a frame is
  26 u32 (0x68 B) or 10 u32 (0x28 B) of 32-bit samples, interleaved L,R.
- Coefficient table = `*(0x6049888C)` (the "DSP state block" from
  `ghidra_utrack_dsp.md`): per stereo pair **3 u32** `{c0, c1, c2}` where
  `c0` = L-monitor-send pan pair `{→L lo16, →R hi16}`, `c1` = R-monitor-send
  pair, `c2` = direct channel gains `{L lo16, R hi16}` (Q16, signed shorts).
  12 records for ch 0–23; ch24 (Monitor fader) & ch25 (Bus fader) live at
  +0x90/+0x94 with their pan pair at +0x98.
- Peaks = per-channel `max(|sample|)` u32 array stored just before the
  `*param_2` pointer of the `{peakBase, coeffPtr}` state record
  (`0x60405A1C`-family; ping-pong with `0x604987BC`).

### 1.2 Kernel catalogue (file 0x1a000–0x1c000)

Two kernel families, each in a 24-ch and 8-ch variant (and ± side-bus merge):

| kernel | ch-pairs | operation |
|---|---|---|
| `FUN_0001ab90` | 12 | **meter + monitor-sum, no gain** — tracks 24 peaks into the peak array, accumulates `sumL += L·c0lo + R·c1lo`, `sumR += L·c0hi + R·c1hi` (saturated <<3), leaves samples untouched |
| `FUN_0001ac6c` | 12 | **meter + gain + monitor-sum** — same as above PLUS in-place `smp = sat(smp·c2 <<1)` per channel |
| `FUN_0001ad68` | 4 | 8-ch version of 0x1ab90 |
| `FUN_0001ae44` | 4 | 8-ch version of 0x1ac6c |
| `FUN_0001b020` | 12 | **mix → out packet** — reads src frames, peak-tracks block0, writes stereo sum into the sum slot (`out+0x60/0x64`) of every 0x68-B out frame |
| `FUN_0001b108` | 4 | 8-ch version (sum → out+0x20/0x24, 0x28-B frames) |
| `FUN_0001b1f0` | 12 | **mix + side-bus merge** — additionally mixes the stereo pair already in the out frame (`out[0],[1]`) with the fresh sum via a 2-gain record (`puVar14[4]`) — output-monitor merge |
| `FUN_0001b354` | 12 | variant of 0x1b1f0 (same geometry/merge, differing saturating order) |
| `FUN_0001b49c` | 4 | **mix + side-bus + format** — merges `param_4[0..1]` into sum via coeff recs `puVar13[0x1b],[0x1c]`, peak-tracks merged result into 2 trailing meter slots, and **rewrites each input sample as `smp>>8 | 0x40000000`** (24-bit→tagged fixed-point repack) |
| `FUN_0001b60c` | 4 | variant of 0x1b49c merge path |
| `FUN_0001b760` | — | copy-and-zero helper (move pkt contents, clear src) |

Also in the neighbourhood: **AV packet pumps** `FUN_0001a490` (pkt payload
`<<8` → ring; 24→32-bit up-shift for playback) and `FUN_0001a5dc` (raw copy),
which pull `*(u16*)(param_1+0x132)` samples per packet via ring pointers
`FUN_0001275c`/`FUN_00012898` and release packets with `FUN_00012bfc`
(refcount at pkt-4 → `FUN_001ce72c`). `FUN_0001a0b0` = AV packet/event
dispatcher (status-word bits at pkt+0x12, per-channel flag sweep calling
`FUN_00019adc`), `FUN_0001a37c` = packet-clear/underrun filler,
`FUN_0001a74a/0x1a8ae/0x1a8fc` = stream-channel activation wrappers
(`FUN_000ea530` USB/stream configure path), `FUN_0001aa9c/0x1ab12` =
streaming-msg builders (ids 0x28/0x2a).

### 1.3 Kernel wrappers — the installable callbacks

Each kernel is wrapped as `cb(pktDesc_in, pktDesc_out, nFrames)` (or
`cb(pktDesc, nFrames)` for in-place variants) and bound to a peaks+coeff
state record:

| wrapper | kernel | mode / direction |
|---|---|---|
| `FUN_000ebb64` | 0x1ab90 | 24ch **in** (meter+mon mix only) |
| `FUN_000ebf90` | 0x1ac6c | 24ch **in** (meter+gain+mon) |
| `FUN_000ebb9c` | 0x1ad68 | 8ch in (meter+mon) |
| `FUN_000ebfc8` | 0x1ae44 | 8ch in (meter+gain+mon) |
| `FUN_000ebbd4` | 0x1b60c | 8ch out merge |
| `FUN_000ebc20` | 0x1b1f0 | 24ch out merge |
| `FUN_000ebc6c` | 0x1b354 | 24ch out merge |
| `FUN_000eb6e8` | 0x1b020 | 24ch out mix |
| `FUN_000eb734` | 0x1b108 | 8ch out mix |
| `FUN_000eb780` | 0x1b49c | 8ch out merge+repack |
| `FUN_000eb624` | — | **meter-swap "signal" cb**: clears idle ping-pong buffer, swaps `*0x60405A1C`, copies ≤26 peaks into the LevelMeters DTO (`0x60405AEC`), marks it valid (`FUN_0008055c`) |

(ebb64/ebb9c/ebbd4/ebc20/ebc6c were unanalyzed — recovered via MkFunc.)

### 1.4 Who installs them — `StreamingConfiguration` mixer msgs

The callbacks are delivered **not by the DSPProcess thread directly but as
streaming-configuration messages** posted through the stream-control path:

- Builder `FUN_001435d0(&msg, processCb, signalCb)` → msg =
  `{vtable 0x602e1e70, flag=1, +8=processCb, +0xc=signalCb}` (base ctor
  `FUN_001289f0`, flag set by `FUN_001289e8`). signalCb is **always**
  `FUN_000eb624` (the meter swap).
- Posted via the app singleton's `vtable+0x80` slot
  (`FUN_000f8ee0()`→`*(0x60403AA4)`) or directly via the streaming object's
  `vt+0xc` (`param_1[0x5b]` = the FileStreamingInterface). The engine
  dequeues the msg on the streaming thread and registers the {cb,ctx} pair.
- Registration sites seen (choosing kernels by channel mode / track count /
  streaming direction):
  - `FUN_000c9124` — engine configure (field `param_1[0x39]` = channel mode
    0–4, creates `param_1[0x5b]` via `FUN_00126408`/`FUN_00121f78`); picks
    wrapper `0xebbd4`/`FUN_000eb780`/`0xebc20` and posts through
    `param_1[0x5b]->vt[0xc]`.
  - `FUN_0011d0f8` — stream setup; picks `FUN_000ebf90`/`0xebb64`/
    `FUN_000ebfc8`/data-ptr `0x60402bb4` vs channel count
    (`*(DAT_0011d440+0x1c)`), posts via app vt+0x80.
  - `FUN_00141348` (per-take recording setup) — picks `FUN_000eb734` vs
    `FUN_000eb6e8` by track count, posts via app vt+0x80.
- Literal-pool tables holding the candidates: file 0xc9718 {swap, ebc20, err,
  eb780, ebc6c, ebbd4}, 0x11d448 {swap, ebf90, ebb64, ebfc8, ebb9c,
  60405d80, 60402bb4, 60402bd4}, 0x141668 {swap, eb6e8, eb734}.
- After each block the engine calls `signalCb(levelMetersDTO)` → meter
  ping-pong swap → `FUN_000f6810`/`FUN_0005b438` fan the peaks + status word
  `0x60401A98` to the CopperLan subscriber list (`ctx+0x408`) — this is the
  0xe000–0xe019 meter push. **No DSP register is ever read for meters.**

So the block loop that invokes these callbacks lives in the streaming
engine's AV packet path (`DSPStreaming`/`AvAudio*Processor` objects driven by
the framer/deframer DMA); the kernels run in that engine's thread context —
they are **not** hardware-ISR code. (Exact callsite of the stored
`processCb` was not pinned down — the engine keeps the {cb,ctx} pair in an
internal slot; see §6 gaps.)

---

## 2. DSPProcess_Custom / BeBobStreamProcess

### 2.1 Object birth — `FUN_000c9810` = `DSPProcess_Custom` ctor

`FUN_000576bc(param_1, "DSPProcess", param_1+0x18c, stackCfg, msgCfg)` creates
the KnOS thread object (base ctor `FUN_000d6740`; derived vtable written as
`DAT_000c998c` = rt **0x602dc414** → file 0x2d6490). Then a chain of
**embedded-member ctors**, each returning the next member's base:

```
DSPProcess_Custom (vtable rt 0x602dc414)
├─ +0xf4  FUN_00122510  streaming core (StreamProcess-ish)
│   ├─ +0x58 FUN_001227f8        (+0x20 = 0)
│   │   ├─ +0x24 FUN_00233c94    name/desc member
│   │   │   ├─ +0x1c FUN_000eac54 AudioDeviceBlock-ish ctor
│   │   │   │      (u16 id, chan-mask str, name str, 5 bool flags=1)
│   │   │   ├─ +0x28 FUN_000c7f00(…,1)
│   │   │   ├─ +0x38 FUN_000c7e98
│   │   │   ├─ +0x1c FUN_000d6450(…,1,2)  small class, vt rt 0x602dd298
│   │   │   ├─ +0x30 FUN_000d63e0         6-dword state zero
│   │   │   └─ +0x18 FUN_0012c488         FileStreamingInterface region
│   │   │           (its reconfigure = FUN_0012424c)
└─ *(iVar5-0xe4) = iVar5   outer object points back at the streaming core
```

The thread's base vtables: rt 0x602d7964 / 0x602dc3f4 / 0x602dc404.
DSPProcess_Custom vtable (file 0x2d6490) notable slots: +0 `FUN_000c99b0`,
+0x34 `FUN_000d65e4` = **configuration dispatcher** — dynamic-casts
(`FUN_001c7218`) incoming msg objects against 4 typeinfos and forwards to
`this->vt[0xb4..0xc0]` handlers (the `StreamProcessBeBobCmd_{Start,Stop,
Configure,Shutdown}` family).

### 2.2 BeBobStreamProcess

`FUN_000d64cc` = `BeBobStreamProcess::initialize` (vtable rt 0x602dd298
class at +0x1c above is a sibling service record): pulls named services into
fixed slots — `StreamControlService`→+0x90, `DataStreamControl`→+0x9c,
`UIService`→+0x78, `AudioHWService`→+0x84 — then sets +0xa8=1. So the
*process loop* = the DSPProcess thread dequeuing `StreamProcessBeBobCmd_*`
messages (ids rt 0x6025901C start / 0x60259024 / 0x6025902C stop — the
`dsp` SDS command posts exactly these), configuring the AV chain through
`AudioHWService`, and letting the registered kernel callbacks (§1.4) run
per packet. `FUN_00064d8c` (`dsp stat`) prints the engine's AV counters:
input packets @+0xC4, output allocs @+0xC8, no-output @+0xCC,
no-bus-input @+0xD0.

### 2.3 The ring path

`FUN_0001275c`/`FUN_00012898`/`FUN_00012bfc` = the sample-ring primitives
(pow2 u32 ring built by `DSPStreamingRingbuffer::create FUN_00122640`);
packet pumps `FUN_0001a490`/`FUN_0001a5dc` shovel AV-packet payloads into the
ring (the `<<8` variant converts 24-bit packed → 32-bit). Kernels read/write
the ring-side frames; file coders (`ghidra_utrack_recorder.md`) and the USB
audio class sit on the other side of the ring.

---

## 3. Hardware interfaces — the HWCom 900-byte object

Ctx getter `FUN_00178f04` → `*(0x60404068)`. Ctor `FUN_0017930c` builds:

| offset | member |
|---|---|
| +0x04 | `HWComSPI` sub-object (`FUN_00091838`, "/dev/spi0" opened at ctor end, fd at +0x64) |
| +0x28 | `HWComI2C` sub-object |
| +0x4c | `HWCom Unmute Timer` (0x100-B `FUN_00179820` timer/queue obj) |
| +0x60 | MIDI/uart1 sub-object (`FUN_00178f60` midiInit, EnableMIDI CnE gate; sets OUT byte1 bit4) |
| +0x68 | **SPI shift-register sub-object** (`FUN_001776c0` returns ctx+0x68) |
| +0x94 | SPI client/drv object (unmute path `FUN_00096760` → `obj[0x14]->vt[0x14]`) |
| +0xb4,+0x14c,+0x1e4 | **three 8-ch analog codec card drivers** (stride 0x98, `FUN_001a3308` ctors id 0,1,2) |
| +0x314 | **MADI driver** (`FUN_00171608`) |
| +0x340 | **ADAT/2nd digital driver** (`FUN_001a66dc`) |
| +0x2fc… | HWVS persparam (board revision, default 2) |

### 3.1 SPI shift-register image

From the `hw` debug cmd (`FUN_000b4074`, "SPI shift register OUT/IN") +
setters — the shadow image lives inside the +0x68 sub-object:

- **OUT image = 9 bytes at sub+0x10..+0x18** (cmd `hw set <1-9> <v>` writes
  `sub + 0x19 - n`, i.e. byte1 is the *last* byte shifted out).
- **OUT byte1 @sub+0x18 (= ctx+0x80)**: bit0/bit1 = SyncSel0/1 (written by
  `FUN_000b865c`: mode0→00, 1→01, 2→10 — line/ptp/internal clock select);
  bit2 = commit/update flag (set by `FUN_00177834` when `ctx+0x54 ≥ 2`,
  else unmute timer path `FUN_00096760`); bit4 = MIDI enable.
- **OUT byte2 @sub+0x17**; **OUT dword @sub+0x14 (= ctx+0x7c)**: bits 24,25,26
  = per-card **input-select** (`FUN_00177910`: `(isDigital^1)<<24+card` —
  1 = analog, 0 = digital, for cards 0/1/2); bit31 printed alongside
  (card-detect/power flag).
- **IN image = 3 bytes @sub+0x1c..+0x1e (= ctx+0x84..86)**: bits0-2 = analog
  board id (`FUN_001781f8`), bits4-6 = digital board id (`FUN_00178208` →
  status word bits8-10).
- Commit path: setters only touch the shadow; `FUN_00177834`/`FUN_00177b38`
  push it out — `FUN_00177b38` calls `FUN_001a31d8` on **each of the three
  codec-card objects** (+0xb4/+0x14c/+0x1e4): `FUN_001a31d8` maintains a
  per-card channel-enable mask at card+0x94 (8 bits), mirrors it to
  card+0x37, then `FUN_001a2f54` writes **3 bytes** to the card (its SPI
  payload: enable mask + control bytes). So per analog card the shift-out
  chain carries {input-src select, channel enables, gain/misc bits}.

### 3.2 writeSCI / writePCI / PLLs

**No `writeSCI`/`writePCI`/`instantiateAllHWPLLs` strings exist in this
binary** — those are source-level method names. The equivalents found:

- `codec set <chipaddr> <reg> <val>` SDS cmd → codec register writes go
  through the card drivers' SPI write (`FUN_001a2f54`/`FUN_00171250`-family,
  3-byte payloads — i.e. the "SCI/PCI" register writes to the codec boards
  and digital-card register pages are 3-byte shift-register writes, cf.
  `writeToMADI` below and `madi read/write <reg>`, `adat read <reg>`).
- PLL chain = the `HWAVPLL_{Analog,Digital,Virtual,Synthesizer}` classes
  (RTTI catalogue §5 of the map) + the `pll` SDS node under `sys/cfg/stream`
  (registered by `FUN_000ef70c`). `changeSyncMode FUN_000f6be0` selects the
  clock master by writing SyncSel bits (above) then calling
  `FUN_001781dc` (MADI drv) or `FUN_001781c0` (ADAT drv) per digital-board id —
  i.e. analog PLL is master in standalone, digital card PLL when syncing to
  MADI/ADAT/AudioLAN.

---

## 4. Routing matrix

### 4.1 The two-level route: uTrack 8-ch blocks ↔ option-card 8-ch groups

- `inputselect '1|2|3|all' 'analog|digital'` → `FUN_00177910` → OUT dword
  bits24-26 (per 8-ch card: analog codec vs digital board).
- **`madi input <uTrackCh> <madiCh>`** → `FUN_001778ec` → **`FUN_00172fa4`**
  (the routing-map function, rt 0x60178F28):
  - `madiCh>>3` = target MADI 8-ch group (0–7); `(uTrackCh>>3)&1` picks the
    nibble; `(uTrackCh>>4)+2` picks the byte triple. The **route map is
    nibble-packed** at MADI-drv `+0x10 + 3*(2|3)` — byte at drv+0x18 covers
    uTrack blocks 0/1, byte at drv+0x1b covers blocks 2/3 (each nibble =
    which MADI group feeds that 8-ch block).
  - then `FUN_00177910(…,uTrackCh>>3,1)` marks the block digital, and
    `FUN_00172cd8` performs `drv->vt[0]` = **HWCom::writeToMADI** — a 3-byte
    SPI register write into the MADI FPGA's routing table (error string
    "ERROR: MADI::writeToMADI write …").
- `madi output <u> <m>` → `FUN_00177b7c` → `FUN_001731f8` (output map,
  same nibble scheme); `madi` bare prints Analog/Digital board ids;
  `madi setfs/getfs`, `getlock`, `getconn`, `get48k`, `get56ch`, `mode`,
  `tx48k`, `clock`, `moduleid`, `modulerev`, `read/write <reg>` — all → the
  +0x314 MADI driver (`FUN_00177558/0x177504/0x177520/0x177b00/0x176df8/…`).
- `adat` cmd (`FUN_0007bd04`): `adat source <port>` → `FUN_00177c0c` →
  `FUN_00171458` on the +0x340 driver; `adat read <reg>` → `FUN_00177894`.
  ADAT *output* group select goes through `FUN_0017157c` (bit-set at
  drv+0x18 + 3-byte SPI write `FUN_00171250`) — driven by the
  `AppSettings/Adat/Output{48k,96k}` CnE writes (`FUN_00178180` →
  `FUN_0017157c(ctx+0x340, group, onoff)`).
- USB return / file playback enter the stream side of the ring (§2.3) —
  the routing map only selects **which 8-ch hardware block feeds each uTrack
  input block**; inside a block the channels are always contiguous
  (`uTrack N..N+7 ← card group M..M+7`, per the
  "uTrackAddress %d..%d receives input from madi %d..%d" printout).

### 4.2 AudioLAN

AudioLAN is a third source at the *stream* level (SPI-slave link to the
option card, `spi slave thread`, `/dev/spiSlave`), merged into the same
frame stream — its `InterfaceAsInput` CnE flag + the AudioLAN card's own
streams; the `audiolan` SDS cmd (rt 0x60135458) pokes its stat/rec/play
rates. The 0x60402bb4/0x60402bd4/0x60405d80 "alternative process" pointers
seen in the registration tables are RAM-resident objects in this
streaming/AudioLAN domain (they appear wherever a stream is configured
without a kernel cb — likely "passthrough" process objects).

---

## 5. Monitor / headphone path

- **Monitor mix = the stereo "sum" slot appended to every frame** (u32
  pair #12 of each 0x68-B frame, or #4 of each 0x28-B frame). Every kernel
  accumulates `sum{L,R}` from all channel pairs using the `c0`/`c1` pan
  records — i.e. **the monitor bus is a stereo send-sum computed in the same
  pass as gain/metering**; MonitorBoost is simply an extra gain folded into
  the send coefficients.
- **MonitorBoost application point**: `mixer+0x114` (raw, 0–12 dB) is passed
  as 4th arg of the observer callback `FUN_000ebdc0` for channels flagged in
  the **monitor-send set @mixer+0xec**; inside `FUN_000ebcb8` the boost is
  folded into the constant-power pan → `c0`/`c1` send gains written to the
  coeff block. Non-flagged channels get boost=0 (post-fader-only send).
- **Merge stage**: the 0x1b1f0/0x1b354/0x1b49c/0x1b60c kernels add the
  *side bus* — a stereo pair already present in the out packet
  (`out[0],[1]`) scaled by extra coeff records — i.e. an existing stereo
  program (USB host return / playback stereo pair) merged with the channel
  monitor sum, applying **Monitor fader (ch24) / Bus fader (ch25)**
  coefficients (state+0x90/+0x94, pan +0x98). The merged result is
  peak-tracked into the two trailing meter slots = the monitor L/R meters.
- The monitor pair then exits through the output frame's sum slot to the
  headphone/monitor DAC (and is what `mixer stat` prints as
  "Monitor fader"/"Bus fader" and meter slots 24/25).
- **Solo**: CopperLan 0xd010+ch toggles the solo flag; the solo feed is the
  same monitor bus — solo channels are mixed into the monitor sum while
  others' send coefficients are forced to zero by the same observer path
  (mute ⇒ max-atten written by `FUN_000ebdc0`; solo set is applied via the
  monitor-send flag list).

---

## 6. Dataflow (structural)

```
 ANALOG IN (3×8ch codec)  DIGITAL IN (MADI drv+0x314 / ADAT drv+0x340 / AudioLAN)
        │ SPI shift-reg: input-select bits24-26, chan-enable masks, SyncSel
        ▼
 WARP framer → AV input packets (hdr 0x14B + u16 off → interleaved 32-bit frames:
               N × {12 or 4 stereo pairs + stereo sum slot})
        │
        ├─► registered processCb #1  (INPUT side, in-place)
        │     0x1ab90/0x1ac6c (24ch) or 0x1ad68/0x1ae44 (8ch):
        │     per pair: peak-track |s| → peak array (before *state)
        │               s *= c2  (channel fader+mute, Q16)
        │               sum += s * c0/c1  (monitor-send pan)
        │     → writes stereo monitor sum into frame's sum slot
        │
        ├─► DSPStreaming ring buffers (FUN_0001275c/0x12898, pow2 u32 ring)
        │       ├─► FileEncoder(s) → FileAccessHandler jobs → .wav  (record)
        │       ├─► FileDecoder(s) ← .wav                          (playback)
        │       └─► USB audio class streams                        (interface)
        │
        ├─► registered processCb #2  (OUTPUT side, in→out packet)
        │     0x1b020/0x1b108 (plain mix) or 0x1b1f0/0x1b354/0x1b49c/0x1b60c
        │     (+side-bus merge with existing stereo pair + repack >>8|0x40000000)
        │     → monitor/bus faders (ch24/25) + merged stereo program
        │
        └─► meter "signal" cb FUN_000eb624 each block:
              swap ping-pong peaks → LevelMeters DTO (0x60405AEC)
              → FUN_000f6810 → FUN_0005b438 → CopperLan 0xe000..e019 push
        ▼
 WARP deframer → AV output packets → codec DACs / MADI / ADAT / phones

 Coefficients (Q16): UI/SDS/CopperLan → mixer obj (ctx+0x17c, 26×6B recs)
   → observer FUN_000ebdc0/FUN_000ebcb8 (pan law + MonitorBoost + mute)
   → state block *(0x6049888C): 12×{c0 monL|monR, c1 monL|monR, c2 gainL|gainR}
                                + ch24 mon@0x90, ch25 bus@0x94, pan@0x98
```

## Gaps / honesty notes

- The exact callsite that dereferences the stored `processCb` per packet was
  not pinned (the streaming engine keeps it in an internal slot after the
  config msg lands). Everything upstream (registration) and downstream
  (kernel semantics) is verified; the invoker is implied by msg plumbing.
- `writeSCI`/`writePCI`/`instantiateAllHWPLLs` are source names — the
  concrete ops found are the 3-byte SPI register writes (`FUN_001a2f54`,
  `FUN_00171250`, `FUN_00172cd8`→`writeToMADI`, codec `set` cmd) and the
  HWAVPLL class family + `pll`/`sync` SDS nodes.
- Kernel coeff semantics `c0/c1` were read as monitor-send pan pairs
  (consistent with 12 stereo records + pan word at +8 in `mixer stat`);
  assignment of {lo→L,hi→R} per half-word is per the multiply pattern.
- `FUN_0001b354` vs `0x1b1f0` and `0x1b60c` vs `0x1b49c` differ only in
  detail (saturating order / repack) — treat as build variants for the two
  channel widths.

## Key addresses (file offset)

| what | addr |
|---|---|
| kernels | 0x1ab90,0x1ac6c,0x1ad68,0x1ae44,0x1b020,0x1b108,0x1b1f0,0x1b354,0x1b49c,0x1b60c,0x1b760 |
| wrappers | 0xebb64,0xebb9c,0xebbd4,0xebc20,0xebc6c,0xeb6e8,0xeb734,0xeb780,0xebf90,0xebfc8; meter-swap 0xeb624 |
| msg builder / base ctor | FUN_001435d0 / FUN_001289f0 |
| registration sites | FUN_000c9124, FUN_0011d0f8, FUN_00141348 |
| DSPProcess_Custom ctor / vtable | FUN_000c9810 / rt 0x602dc414 (file 0x2d6490) |
| BeBobStreamProcess::initialize | FUN_000d64cc |
| stream msg dispatch | FUN_000d65e4 (vt+0x34) |
| ring ops | FUN_0001275c / FUN_00012898 / FUN_00012bfc |
| HWCom ctor / getter / shift-reg sub | FUN_0017930c / FUN_00178f04 / ctx+0x68 |
| input-select bits | FUN_00177910 (OUT dword @+0x14 of shift-reg sub = ctx+0x7c, bits24-26) |
| SyncSel bits | FUN_000b865c (OUT byte @+0x18 = ctx+0x80, bits0-1; bit2 commit, bit4 MIDI) |
| SPI debug cmd | FUN_000b4074 (`hw`) |
| codec-card commit | FUN_00177b38 → FUN_001a31d8 → FUN_001a2f54 (3B SPI) |
| MADI cmd / drv | FUN_0007c008 / ctx+0x314; route map FUN_00172fa4; out map FUN_001731f8; writeToMADI FUN_00172cd8 |
| ADAT cmd / drv | FUN_0007bd04 / ctx+0x340; FUN_0017157c out-group write |
| observer (coeff writer) | FUN_000ebdc0 → FUN_000ebcb8 → *(0x6049888C) |
| monitor-send flags / boost raw | mixer+0xec / mixer+0x114 |
| meter ping-pong / DTO | *(0x60405A1C)↔0x604987BC / 0x60405AEC |
