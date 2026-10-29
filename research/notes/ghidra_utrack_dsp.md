# uTrack24 firmware — SDS mixer / inputselect / channelmode / dsp map

Ghidra project `Temp\ghidra_proj\utrack_fw`, program `uTRACK24_Release_4218.bcd`, loaded **flat at base 0** (single `ram` block 0x00000000–0x2EA7FF, file offset = Ghidra addr).
**Address rule**: Ghidra_addr = file_offset; runtime/prior-project addr = file_offset + 0x60005F84 (all `DAT_xxxx`/vtables store the 0x60xxxxxx runtime form). Below, addresses are **file offsets** with runtime in parens where useful.

SDS commands are registered by `FUN_000f8fcc` (BeBoB_App init): it calls `FUN_00146ba4` (channelmode), `FUN_00092600` (dsp), `FUN_000cd164` (mixer), `FUN_00137e04` (inputselect) plus other shell-register fns. Each registration `FUN_0007f01c(param,"name","desc","usage",argc)` returns a node whose `*node = DAT` points at a **0x30-byte command-descriptor**; the real handler is at `descriptor+0x1c`:
- mixer:     table file 0x2D6B38 → handler rt 0x600D2ADC → file **0xCCB58**
- channelmode: table 0x2DC1E4   → handler rt 0x6014C994 → file **0x146A10**
- dsp:       table 0x2D47A0     → handler rt 0x60098470 → file **0x924EC**
- inputselect: table 0x2DB3CC   → handler rt 0x6013DC64 → file **0x137CE0**

App singleton: `FUN_000f8ee0()`→`FUN_000b0f18()` = `*(0x60403AA4)` (ptr var at file 0xB0F24). Mixer object = `FUN_000f6910(ctx)` = **ctx+0x17c**. DSPStreaming engine = `FUN_000f63e0(ctx)` ≈ ctx+0x48c accessor.

---

## 1. `inputselect '1|2|3|all' 'analog|digital'`

- **Handler** `FUN_00137ce0` (file 0x137CE0): parses block mask {all→7, '1'→1, '2'→2, '3'→4} and {analog→0, digital→1}; for each selected card calls `FUN_00177910(FUN_00178f04(), cardIdx, isDigital)`.
- **ctx getter** `FUN_00178f04` (rt 0x6017EE88): lazy-creates a **900-byte HWCom object** via `FUN_001c6b14(900,…)`+ctor `FUN_0017930c`; pointer stored in RAM var **0x60404068** (literal at file 0x178F58). Ctor builds `HWComSPI`, `HWComI2C`, `HWCom Unmute Timer`, opens `/dev/spi0` — this object owns the SPI shift register, MADI (ctx+0x314) and ADAT/2nd board (ctx+0x340) drivers.
- **setter** `FUN_00177910` (rt 0x6017D894): writes **ctx+0x7c bit 24/25/26** = `(isDigital^1)&1` per card 0/1/2 → **bit set = analog, clear = digital**.
- ctx+0x7c is *ctx+0x68 sub-object* +0x14 — i.e. **byte 2 of the 3-byte SPI shift-register OUT shadow image**. Proven by `hw`-style debug cmd `FUN_000b4074` ("SPI shift register OUT/IN"): prints sub+0x18 (SyncSel0/1 byte), sub+0x17, sub+0x14 bits24-26/31 (OUT), and 3 bytes sub+0x1c..+0x1e (IN). The IN image at **ctx+0x84** also yields board IDs: `FUN_00178208`=bits4-6=digital board ID, `FUN_001781f8`=bits0-2=analog board ID.
- **getter** `FUN_00177acc` (rt 0x6017DA50): packs ctx+0x7c bits24-26 → 3-bit mask.

### Where the LIVE state really is — why ctx+0x7c "didn't change"
1. `*0x60404068` is a **pointer variable**, not the ctx. The 900 B ctx is heap-allocated lazily on first call of `FUN_00178f04`. Reading `0x60404068+0x7c` reads the wrong RAM; must dereference first.
2. The SDS setter only mutates the **shadow**; the value is clocked to the real shift register by the HWCom SPI-write path (ioctl `/dev/spi0`, per `HWCom::write: ioctl failed…chip_select` strings), triggered from routing-commit/sync paths (`FUN_00178180`, `FUN_00177b38`, `FUN_001776e4`/`FUN_00177834` which ORs ctx+0x80|=4 and calls `FUN_00096760(*(ctx+0x94))`), not necessarily at SDS-set time. A periodic HWCom poll may also rewrite the shadow — a stale-looking read does not prove the write didn't happen.
3. Authoritative / persisted state lives elsewhere (below).

### Readable state outputs (READ path found!)
- **`get cne/AppSettings/AnalogInputs/Inputs00to07|Inputs08to15|Inputs16to23`** — CNE persparams, one value per 8-ch block (hw test read 3,4,5). RAM mirror: **GeneralSettings obj +0x1ec..+0x1ee** (3 bytes). Setter `FUN_000937f4` (called by `FUN_0013c370`): writes `gs+0x1ec+i` then `FUN_00093e48(gs,i,1)` → `FUN_00178180(HWCom, i, gs[0x1ec+i])` (commits to HWCom routing image) + stores ADAT-outputs CNE value `Outgroup %02d-%02d`.
- **Notification status word @0x60401A98** (u32). `FUN_000f6810` (periodic meter/status notify builder): queries level DTO `0x60405AEC` via `ctx->vtable[0x84]` (= `FUN_000f67c0`), reads input-select mask via `FUN_00177acc`, packs it into **status bits 1-3** (`*0x60401A98 = … | (mask&7)<<1`), then `FUN_0005b438` copies status into peak-block and fans out to the subscriber list at **ctx+0x408** (each `(*(code*)*sub)(param_1, metersDTO)` — this is the 4437 push). Other writers of the same word: `FUN_000f8124` bit0 = sync-lock (state 6 "OUT OF LOCK"/"IN LOCK"), `FUN_000f65ec` bits4-5 = channel mode, `FUN_000f8fcc` bits8-10 = digital board ID (at init).
- `madi input <uTrackCh>` (one-arg form in `FUN_0007c008`) calls the **same** `FUN_00177910(ctx, ch>>3, 0)` → marks that 8-ch block analog. `madi input <u> <m>` → `FUN_001778ec`→`FUN_00172fa4` (rt 0x60178F28): nibble-packs routing map at `obj+0x10/0x12+3*(madi>>4+2)`, calls `FUN_00177910` with 1 (digital), then `FUN_00178c5c`-eq `FUN_00172cd8` writes 3 bytes via `HWCom::writeToMADI` (vtable call on `obj[0xc]`).

---

## 2. `mixer` — handler `FUN_000ccb58` (rt 0x600D2ADC)

Subcommand dispatch on `param_2[0]`:
- `stat` → `FUN_000c8bf4` → `(*0x600F1750… ` actually printer chain → **`FUN_000eb880`**: prints "Mixer Status / Fader Values" from the **DSP-mirror state block `*iRam000eb984` = 0x6049888C**: 12 stereo-pair records of 12 B = `{u32 gain_even, u32 gain_odd, u16 panEven|panOdd<<16 @+8}` (CH%02d + "CH%02d output"), then **Monitor fader @+0x90**, **Bus fader @+0x94**, then `FUN_000eb7cc` prints "Level Meters" — 7 rows ×4 u32 from `*0x60405A1C` (26 meters + extras).
- `levels` → `FUN_000c8bd4` → `FUN_000eb7cc` (meter block only).
- `querylevels` → builds **LevelMeters DTO** (ctor `FUN_00144908` size 0x18 → `{vptr, valid u8 @+4, count @+8, data u32* @+0xc}`; accessors `FUN_001b49d0`/`FUN_001bd0b0`/`FUN_001448fc`), calls `ctx->vtable[0x84]` (`FUN_000f67c0`) to fill it, prints `CH %02d: 0x%08x` per channel, or "Level meters are invalid!"/"Query not processed.".
- `get <ch>` → `FUN_00069ed4(mixer,ch,&rec)` reads a **6-byte param record** `{f32 fader_dB @+0, s8 pan @+4, u8 mute @+5}` from the list at mixer+0xc0 (`FUN_0023d888` indexed get, `FUN_0022e594` count); prints "Fader %f dB (mute %s) / Pan %d". Records per-channel; count = 26.
- `set <ch> <fader|pan|mute> <v>` → `FUN_00069f60(mixer,ch,&rec,0)`: range-checks (fader min/max via `FUN_00249f7c`/`FUN_0024a1b0` against mixer+0x11c/+0x124, pan ±127 mixer+0x120/+0x128), writes record, then **`FUN_00069d0c(mixer,ch)`** = apply: iterates **observer list @mixer+0x12c (300)**, calling `(*obs[0])(obs, ch, &param8, boost)` where `boost = *(mixer+0x114)` if ch ∈ "monitor-send" flag list @mixer+0xec else 0. `param4!=0` path instead enqueues via mixer+0x100.
- `store` → `FUN_0006a060(mixer, sds)`: persists CNE `sds://cne/AppSettings/MixerControl/CH%02d_Fader_dB`, `CH%02d_Pan`, `CH%02d_Mute` via SystemDataService (`FUN_000b4964`/`FUN_000b4840`).

### Mixer→DSP write path (the observer that programs coefficients)
- `FUN_000ec000` (ctor, called by `FUN_000c8a8c`): allocates 0xE0-byte sink object, vtables rt 0x602DDEC8 (primary) / 0x602DDF10 (secondary @obj+0xdc), stores state-block ptr (0x6049888C) at obj+0x48, inits 12 pair-records to 0x20002000, monitor@+0x90=0, bus@+0x94=0x7FFF, then `FUN_000699c8(mixer, obj)` registers it in mixer+0x12c and pushes all current params (`obs->vtable[0]` per channel).
- Observer callback = **`FUN_000ebdc0`** (via thunk `FUN_001c3648`, `this+(-0xdc)`): clamps fader (min 0, max `c2fe0000` = -127 dB? / `DAT_000ebf7c`), clamps pan ±127, **mute flag = param byte1** → fader forced to max-atten, then `FUN_000ebcb8` computes constant-power pan-law packed `u16 L|u16 R` gains (`10^x` helpers `FUN_00249204`/`FUN_00249b28`/`FUN_00248dc0`…), writes `state[(ch/2)*0xc + (ch&1?4:0)] = gainPair` and `state[(ch/2)*0xc+8]` lo/hi u16 = pan word.
- **ch 24 → state+0x90 = "Monitor fader"; ch 25 → +0x94 = "Bus fader"; their pan pair @+0x98.** Monitor/Bus faders are just channels 24/25 of the same 26-ch mixer.
- `FUN_000f8fcc` (init) presets ch 0x18/0x19 via `FUN_00069e8c`/`FUN_00069c54`/`FUN_0006a2a0`/`FUN_00069f60(-127)`.

### Meter source — 0xe000–0xe017 values are SOFTWARE peak-detect on ARM
- Audio-block kernels **`FUN_0001b020` (12 stereo pairs, monitor/bus sums → out+0x60/0x64,+0xc8/0xcc, stride 0x68), `FUN_0001b108` (4 pairs, +0x20/0x24,+0x48/0x4c, stride 0x28), `FUN_0001b49c` (4 pairs + side bus, +10 stride), `FUN_0001ac6c`/`FUN_0001ae44` (in-place channel gain+pan processing)** — each multiplies interleaved sample pairs by the Q16 coefficients (`param_2[1]` = the 0x6049888C-style table, 3 u32 per stereo pair) **and max-tracks `|sample|` into a peak array located just before the buffer (`*param_2 - 4`)**.
- Wrapper callbacks `FUN_000eb6e8/0xeb734/0xeb780/0xebf90/0xebfc8` (registered per channel-mode/audio path) call them with the peaks+state struct `0x60405A1C` = `{peakBasePtr, coeffTablePtr, meters[26]}`.
- Two ping-pong meter buffers **0x60405A1C / 0x604987BC** (0x68 = 26 u32 each): `FUN_000eb624` clears the idle buffer, swaps `*0x60405A1C-ptr`, copies ≤26 peaks into the LevelMeters DTO (heap @0x60405AEC) and marks valid via `FUN_0008055c`.
- `FUN_0005b438` (from `FUN_000f6810`) peak-holds per-channel into `*0x60401A94` records (12 B each, `FUN_000d731c`), count `*0x60401A90`, and stores the **status word 0x60401A98** (with input-select bits1-3) into the last slot — i.e. the CopperLan 0xe000–0xe017 meter notifications = these ARM-computed peaks; **no DSP register read involved**.

---

## 3. `channelmode <0-3>` — handler `FUN_00146a10` (rt 0x6014C994)
- No arg → prints mode list (0: 24In/26Out, 1: 24In/2Out, 2: 8In/26Out, 3: 8In/10Out).
- Arg → `FUN_000f87ec(ctx, mode, 0xff)` → `FUN_0022b178` posts an 8-byte-id message @rt **0x60258FEC** to the streaming engine (direct vtable call if a handler is registered at `FUN_001b27ec`, else queues 60-B event via `FUN_002049ac`+`vtable[0x2c]`); prints "Change streaming channel mode required reboot: true/false".
- Mode is reflected in status word **bits 4-5** by `FUN_000f65ec` (msg post `*0x60258FEC`-family + `*0x60401A98 |= (mode&3)<<4`), called from `FUN_0011aa18`/`FUN_000be04c`/`FUN_000f7960`.

## 4. Monitor / MonitorBoost / Bus fader / Monitor fader
- **MonitorBoost**: CNE float `sds://cne/AppSettings/MixerControl/MonitorBoost` (0.0–12.0 dB, `GeneralSettings::setMonitorBoost` validates range). Load at boot in `FUN_00095910` (GeneralSettings ctor, reads persparam via `FUN_001ffd68` float → `gs-0xf8`/`+0x104`) → **`FUN_00069ac8(mixer, dB, applyNow)`**: clamps [0,12], converts to raw u32 → stores **mixer+0x114**, then either `FUN_00069e54` (re-apply all channels via `FUN_00069d0c`) or marks dirty flag list @mixer+0x100. The raw boost is the 4th arg of every observer callback → folded into the channel gain math inside `FUN_000ebdc0`/`FUN_000ebcb8` for channels flagged in the monitor-send set @mixer+0xec.
- **Monitor fader = mixer channel 24** → coefficient `state+0x90`; **Bus fader = channel 25** → `state+0x94` (pan pair @+0x98). Same `mixer get/set` path with ch=24/25 works; `mixer stat` prints them separately.
- Remote model (device model text @0x2E8BFB+) exposes `MixerControl/MonitorBoost` and per-channel `H%02d` {Fader_dB, Pan, Mute} — H = headphone/control-room strips == the same mixer channels.

## 5. `dsp` — handler `FUN_000924ec` (rt 0x60098470)
- `dsp stop` → `FUN_000f8e0c(ctx,0)` → `FUN_0022b664(ctx,ctx,*0x6025902C,id+4,0xFFFFFFFF)` = post stop-msg (id pair @ rt 0x6025902C); (`FUN_000f8e0c(ctx,≠0)` uses msg @0x60259024).
- `dsp stat` → `FUN_000f63e0(ctx)`+0xec → **`FUN_00064d8c`** prints "DSPStreaming statistics": AV input packets @+0xC4, output block alloc @+0xC8, no-output-packet @+0xCC, no-bus-input-packet @+0xD0.
- `dsp <freq>` → `FUN_0004cca8` parses Hz; builds cfg obj (`FUN_0012e10c`/`FUN_0012e13c` dtor) → **`FUN_000b0e64`**: `cfg->vt[0xC]` alloc+`FUN_0007ed98`(0x90) → `FUN_000619c0`/`FUN_00061B08`/`FUN_00111620` serialize 0x90-byte DSP config; `cfg->vt[0x18]` sets fs index (`FUN_0004e2ec(hz)`, special 0x1F400F4 → 8); `cfg->vt[4]` commit(0xff) → **`FUN_000f8eec`**: `FUN_0012e0CC` copies cfg then `FUN_0022b6d4` posts start-msg @rt **0x6025901C**.
- The big start/run path is `FUN_000f5eb4` (event-driven; does changeSyncMode `FUN_000f6be0`, builds cfg `FUN_000b0e64(…,6,fs)`, `FUN_000f5c68` start, meter-notify reg `FUN_0005b530(0x1B)`, then presets all 24 faders to −12 dB `0xC1400000` via `FUN_00069f60`).
- changeSyncMode `FUN_000f6be0`: uses shift-reg sub-obj (err "pShiftreg is NULL"), `FUN_000b865c(sub,mode)` writes SyncSel bits @ctx+0x80 (mode0→00,1→bit0,2→bit1), then per digital-board-id `FUN_00178208` calls `FUN_001781dc`(ctx+0x314 MADI)/`FUN_001781c0`(ctx+0x340).

---

## Key state locations (runtime addrs)
| What | Address | Layout |
|---|---|---|
| app singleton ptr | `*(0x60403AA4)` | mixer obj = ctx+0x17c; meter-notify subscribers ctx+0x408 |
| HWCom ctx ptr | `*(0x60404068)` | 900 B; +0x68 shift-reg sub-obj; +0x314 MADI drv; +0x340 ADAT/2nd drv |
| input-select shadow | HWCom+0x7c bits24-26 | per card 0/1/2; 1=analog; SPI OUT image byte2 |
| SPI shift reg | HWCom+0x80 sync byte (bit0/1 sel,bit2?), +0x7f byte1, +0x7c ctrl; IN bytes +0x84..0x86 (board IDs) | |
| mixer param records | mixer+0xc0 list | 6 B: f32 dB, s8 pan, u8 mute; 26 ch |
| MonitorBoost raw | mixer+0x114 | u32 (0–12 dB); monitor-send flags mixer+0xec |
| DSP coeff state | `*(0x6049888C)` | 12×{u32 gainL/u32 gainR? pair, u16 pan pair} + ch24@0x90 mon, ch25@0x94 bus, +0x98 pan |
| meter ping-pong | `*(0x60405A1C)` ↔ `0x604987BC` | 26 u32 peaks, 0x68 stride |
| LevelMeters DTO | `0x60405AEC` | {valid@4,count@8,data@0xC} |
| status word (notif) | `0x60401A98` | bit0 lock, **bits1-3 inputsel**, bits4-5 chmode, bits8-10 digBoardId |
| peak-hold block | `*0x60401A94`, count `*0x60401A90` | 12 B/ch peaks → 4437 push |
| msg ids | rt 0x60258FEC (chmode), 0x6025901C (dsp start), 0x60259024/0x6025902C (dsp ?/stop) | 8-B event ids |
