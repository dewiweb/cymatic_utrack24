# uTrack24 firmware — gap-closure findings

Read-only Ghidra analysis of `uTRACK24_Release_4218.bcd`.
Convention: **file** offset = Ghidra address; **rt** = file + 0x60005F84.
Evidence dumps: `research/ghidra/dumps/g3_arm.txt`, `g4_consumers.txt`,
`g5_final.txt`, `g5_arm.txt`, `g6_settings.txt`, `g7_board.txt`,
`g2_scan.txt` (plus the pre-existing `ap_hwcom.txt`, `ghidra_hwc.txt`,
`f3_knos.txt`, `fa_attach.txt`, `c2_evt.txt`).
CONF = confirmed by code/strings; INF = inferred; UNRES = still open.

## 1. Transport/UI event ids 0x191–0x19a

### 1a. Delivery mechanism (CONF)

* `FUN_000f5268` — the service-side broadcaster. Walks the subscriber list at
  `param_1+0x3c8` and calls `sub->vtable[+0x10](sub, param_1+0x140, eventId)`
  for every subscriber. ~50 callers (all `FUN_0009xxxx` service methods) — it is
  the generic "notify" primitive, not transport-specific.
* `FUN_000e11c4` (called once from singleton getter `FUN_000dfcb0`,
  "uTrack24 main UI state machine") = **UIMainControl ctor**. It creates the
  "Main UI Timer", reads the `HWVS` persistent parameter
  (`FUN_001db900("SVWHERROR: UIMainControl: HWVS…")`, default 2), obtains the
  UIService event provider via `svc->vt[+0x20]` and subscribes event ids
  **400, 0x191, 0x192, 0x193, 0x194, 0x195, 0x196, 0x197, 0x198, 0x199**
  on the listener object at `this+0x11c` (literal pool `0xE1520..0xE1538`;
  id literal 0x194/0x198 inline). Then a second provider via `svc->vt[+0x30]`
  and subscribes **0x19a** on the listener at `this+0x120` (pool `0xE1630`).
* `FUN_000e1664` re-subscribes the same id set on yet another provider
  (pool `0xE19D0..0xE19EC`: 0x191,0x192,0x193,0x195,0x196,0x197,0x199,0x19a).
* The multi-vtable listener objects dispatch through ARM thunks at
  `0x1C3B14..0x1C3E58` (`sub this, #-0x11c` / `-0x120` then `bl handler`):

  | listener | vt slot | thunk  | target | meaning (error strings recovered) |
  |---|---|---|---|---|
  | this+0x11c | +0x08 | 0x1C3BE4 | `FUN_00077070` | "UIMainControl::buttonClicked" |
  | this+0x11c | +0x0c | 0x1C3C24 | `FUN_000772bc` | "buttonLongPressed" |
  | this+0x11c | +0x10 | 0x1C3BC4 | **`FUN_00076f6c`** | "buttonDown" (was un-analyzed; force-disassembled at g5_arm.txt:2) |
  | this+0x11c | +0x14 | 0x1C3C44 | `FUN_00077234` | (buttonUp sibling at 0x7702c) |
  | this+0x11c | +0x18 | 0x1C3C04 | `FUN_000771b0` | "buttonAutoRepeat" |
  | this+0x120 | +0x08 | 0x1C3C8C | `FUN_000770f4` | "rotaryRotation" |
  | (timer listener) | — | — | `FUN_000773ac` | "handleTimerCallback" |

  Each handler builds a 16-byte frame via `FUN_001a4810(&frame, slotIdx, id, …)`
  and submits it to the action queue at `obj+0x12c` via `FUN_0022b9c4`; on
  failure it prints "UIMainControl::<cb>: Could not submit … %u".

  ⇒ The ids are **front-panel key / input events**, delivered by UIService
  broadcasts → queued → dispatched to per-page handlers (the functions that
  load constants 0x191..0x199 in the EVTP scan are *page handlers and
  page-table constructors*, e.g. `FUN_000dc300` = UIMainControl overlay/page
  builder reached via thunk `FUN_001c42d0`, `FUN_0013fab8` = Settings-menu
  machine builder; key-transitions are registered by `FUN_000e1a0c` /
  `FUN_001054e4` / `FUN_00105648`).

### 1b. Action map + enum — value 6 resolved (CONF)

File `0x298934` = wire→event map `u32[7]` = `{0, 0x194, 0x195, 0x196, 0x197,
0x198, 0x192}` (rt `0x6029E8B8`).
File `0x298950` onward = `{char* label, u32 value}` enum pairs (verified by
raw dump — the earlier "0x192↔Prev" worry was a table-boundary misread; the
value word is the *wire index*, not the event id):

| wire | label | → event id |
|---|---|---|
| 1 | "Prev" | 0x194 |
| 2 | "Next" | 0x195 |
| 3 | "Stop" | 0x196 |
| 4 | "Play" | 0x197 |
| 5 | "Rec" | 0x198 |
| 6 | **"Save"** | **0x192** |

So action-map value **6 = "Save"** → event **0x192**, and the direction
assignment is settled: **0x194 = Prev, 0x195 = Next**. (uRemote never emits 6.)

### 1c. Event-id semantics

| id | meaning | evidence |
|---|---|---|
| 0x191 | panel key; triggers action 1 in `FUN_00106678`; in `FUN_00107ca4` it is only accepted while recording (`FUN_001b5ac4(svc)==1` or `FUN_001b5940(svc)!=0`) → sets flag +0xac, action 3 | INF: Marker/Locate-type key |
| **0x192** | **Save / Back / confirm** | CONF (wire 6='Save'); consumers `FUN_000f1680`, `FUN_00105eb4` (exit edit mode via vt+0x80), `FUN_00106678` (LAB_001069f0 commit text & return), `FUN_00107ca4` (action 3/0xc), `FUN_0013fab8` (menu-ascend transitions, key literal `DAT_00140a1c`), `FUN_0013e4a4` |
| 0x193 | subscribed panel key, explicitly swallowed (`FUN_00106678` `case 0x193: break`); no dedicated page consumer found in the analyzed handlers | UNRES physical key; likely handled by generic key paths (`FUN_0009dc24`/`FUN_0010fe58`) or reserved |
| 0x194 | Prev | CONF (enum+map) |
| 0x195 | Next | CONF |
| 0x196 | Stop | CONF (+ `FUN_000d13e4`, `FUN_00106678` → action 0x34) |
| 0x197 | Play | CONF |
| 0x198 | Rec | CONF |
| **0x199** | **Select / Enter** | INF-strong: `FUN_000f1680`/`FUN_00105eb4` toggle edit mode (vt+0x84/+0x88/+0x8c); `FUN_00106678` selects in popup list (param_1[0x3f]); `FUN_00107ca4` cycles selection index `param_1[0x27]` 0..4; `FUN_0013fab8` menu-descend transitions (key literal `DAT_00140314`); `FUN_0010792c`, `FUN_0010845c`, `FUN_0010aedc`, `FUN_0010ba44`, `FUN_0010ef64`, `FUN_0011e434`, `FUN_00134258`, `FUN_00134a20`, `FUN_00138874`, `FUN_0013becc`, `FUN_0013c780`, `FUN_00147da8`, `FUN_0014a11c` all consume it |
| **0x19a** | **rotary-encoder rotation** | CONF: distinct provider (svc vt+0x30), handler `FUN_000770f4` = "rotaryRotation" |

`FUN_000d13e4` (already known): Stop/Rec page handler; calls
`FUN_001a48f0(obj, action, 0)` → `(obj->subobj[+0xc])->vt[+8](subobj, action, 0)`
(CONF in g5_final.txt:727).

## 2. USB driver shell commands (all recovered by forced ARM disasm)

`usb` top handler at 0xC8708 is a Thumb stub `mov r0,#2; bx lr` → group node,
descend to children (registered by `FUN_000c6440`-family ctors under the
`usb` group: host list/log/devlog, dev log, stack ep, drv{…}).

### 2a. `usb drv` group handler @ 0xE8C10 (CONF)

Inline string-compare dispatch (`FUN_00003d18`); unmatched → return 2
(children handle it — that's why `crc` and `test` don't appear here):

| subcmd | params | implementation |
|---|---|---|
| `stat [reset]` | none/`reset` | `FUN_000451cc` dumps the driver counter block: UsbIsr +0x47c, BusResets +0x478, SetupEnd +0x46c, BlockAllocErr +0x470, Babbles +0x474; then per-direction pairs TxDmaCtx +0x428 / RxDmaCtx +0x458, TxPackets +0x424 / RxPackets +0x454, TxDmaComplete +0x42c / RxDmaComplete +0x45c, TxDmaError +0x430 / +0x460, TxBusError +0x434 / +0x464, TxIrqErrIncomplete +0x438 / RxIsoCrcErr +0x468; conditional singles +0x43c (SentStall), +0x440 (FifoUnderRun), +0x444 (PktRdyErr), +0x448 (TimeOut), +0x44c (BusMsgErr), +0x450 (VBusError). `reset` zeroes 20 u32s at drv+0x424..0x474 |
| `reg` | none | `FUN_000c2438` — raw dump of USB OTG regfile `drv+0x4c8`: FADDR (reg+0), POWER (reg+1 bits: ISO Update/SoftConn/HSEnab/HSMode/Reset/Resume/Suspend/SuspendM), DEVCTL (reg+0x60: session, A/B device, bus FS/HS/none, VBus level 0–3, HostMode, HostReq, Session) |
| `ep [n]` | none → `FUN_000c4d94` (all EPs 0..7 table); `ep <n>` → "Endpoint number expected" → strtol → n<8 else "Invalid endpoint: %i" → `FUN_000c33e4(drv, n)` per-EP FIFO/csr dump (reads EP-indexed regs via `FUN_000c59bc`) |
| `fifo` | none | `FUN_000c4f68` (fifo dump) |
| `explicit` | none | explicit-feedback counters: drv+0x610 (ptr), +0x6a8/+0x61c/+0x618 → float math → `"USB explicit feedback: %6d -> %6.2f Hz (%6d...%6d) - drift=%d - WCLK.IRQctr=%d"` |
| `bal [reset|n]` | uses shared stat struct @ `0x60405A24`: no arg → `"USB balance (%d...%d)"` (fields +8,+4,…); `reset` → zero 5 u32s; `<n>` → print loop, `FUN_001d0130(1000)` between lines |
| `ts [reset]` | same struct: `"UsbDecoder: TS=%9d = %3.1f %% (%9d...%9d) / Corr=%d"` from fields +0x24,+0x20,+0x18 (float ×100 via 0x45FA0000) and +0x1c; `reset` zeros +0x1c and prints `"UsbDecoder: TS=%9d (%9d..%9d) / Corr=%d"` |
| `crc [on|off]` | child object (CRC-error detection toggle — documented in ghidra_utrack_files.md) |

### 2b. `usb drv test` handler @ 0xE9164 (CONF)

Dispatch order: reset, phy, suspend, resume, enableHS, enableSoftConn,
session, hostDisc, setFeatStep, devDescStep, testpat, setHostReq.
`r5`=cmd obj, `r9`=argv, `r11`=argc, `FUN_000c63b8()`=drv singleton getter,
drv OTG regfile = `drv+0x4c8` (DEVCTL at +0x60, POWER at +1).

| subcmd | semantics |
|---|---|
| `reset` | "-> USB reset" → `FUN_000c63f8`: drv+0x600 flag=0, POWER(reg+1) |= 8 (reset), sleep 30ms, &=~8, sleep 3 |
| `phy [disable|enable]` | "-> disable/enable USB phy" → `drv->vt[+0x88](drv, 0|1)` |
| `suspend` | "-> enter USB suspend mode" → `regfile+1 |= 2` (Suspend bit) |
| `resume` | "-> resume USB from suspend mode" → `regfile+1 |= 4`, sleep 10, clear bit (Resume pulse) |
| `enableHS [on|off]` | no arg → "HighSpeed mode is currently %s" (regfile+1 bit5); on/off → set/clear bit5, "HighSpeed mode enabled/disabled" |
| `enableSoftConn [on|off]` | same on bit6 → "SoftConn mode is currently/enabled/disabled" |
| `session [on|off]` | no arg → "USB session is currently %s" (DEVCTL+0x60 bit0); `on` → `drv->vt[+0x84](1)`, "-> USB Session enabled"; `off` → `drv->vt[+0x6c]()` check, reads DEVCTL+0x60 bits 4/6/5 → speed r10 = 1/2/3 (bit6→FS? bit5→HS?  else none), `FUN_000c1f04(drv,1,speed)`, vt+0x84(0), `FUN_000c1f04(drv,0,speed)` → "-> USB Session disabled" / "Could not disable/force Host Mode (speed=%d)" |
| `hostDisc` | `drv->vt[+0x5c](0xc2)`; lazily creates the "HostDisconnectThread" (name @0xE9AA4, stack 0x400, via `FUN_001f01c4(0xdc)`+`FUN_0006f700`) with "startDisconnect" semaphore (@0xE9AAC, `FUN_001ce8fc`), then vt+0x84(0), vt+0x84(1), signals sem — a scripted disconnect/reconnect |
| `setFeatStep [1|2]` | step1 "Set feature - STEP 1: SETUP transaction" — builds 8-byte SETUP into drv+0x20 queue; step2 "STEP 2: IN transaction" — IRQ-lock (`FUN_001fe1e4/0x1fe1f8`), patches drv ctx +0x12/0x13 bytes (|=0x20), sleep 100ms; state kept in `r5+0x1c` |
| `devDescStep [1|2|3]` | staged GET_DESCRIPTOR: step3 "Reading device descriptor - STEP 3: STATUS transaction"; patches descriptor fields +0x12/0x13 (|=0xa / |=0x20 / &=~0x80|0x80 variants per step) under IRQ lock, sleeps; arg stored r5+0x1c, EINVAL if missing |
| `testpat [j|k|se0|pkt|forceHostHS|forceHostFS|forceHostLS]` | @0xE9DAC+: arg-compares write the USB test-mode selector into the drv ctx (test-pattern J/K/SE0/packet + force-host-speed test modes) |
| `setHostReq` | last dispatch branch → 0xEA03C (tail outside dump; sets DEVCTL HostReq bit = HNP request) |
| `packet [cap|show]` | per ghidra_utrack_files.md |

Driver object: singleton via `FUN_000c63b8`; ctor `FUN_000c6440` builds
"USBDrvRxThread", `TxDmaComplete`/`RxDmaComplete` semaphores (drv+0x15c/+0x178),
per-EP "USB Rx Ep%d lock"/"USB Tx Ep%d lock" mutexes (drv+0x4f4/0x534,
16 EPs), the "+USBBusDriver Lock", counter block at drv+0x424, and the
register-file mapping pointer at drv+0x4c8.
`FUN_000c77bc`/`FUN_001a1a3c` = endpoint/host cmd-object ctors (previously known).

## 3. svc+0x126 status-word source (CONF + partial UNRES)

* `FUN_001b5b0c` = `return *(u16*)(param_1 + 0x126)` (DAT_001b5b1c = 0x126;
  param_1 = settings/service object obtained via `FUN_000f4e84`+`FUN_000f4fc0`).
* Consumers: `FUN_000a5dfc` + `FUN_000ac18c` — it is the **last u16 of the
  uCL msg-0x22 status record**; and `FUN_000e45a0`, which checks
  `value == 3` → prints `"TRACE: USB WAS FORMATTED"`, reloads "MultiTrack"
  settings, zeroes the take/session counters and clears `obj+0xb4/0xb8`.
  ⇒ the field is a **session-dirty / "USB formatted" flag** (value 3 =
  media was reformatted → reset session state).
* Writer: a whole-program scalar scan found **no instruction using the
  immediate offset 0x126 or 0x266** (and no literal-pool load of it) — the
  note's "register-offset addressing" observation is confirmed. The write
  therefore goes through a computed base (e.g. `strh rX,[rN,rM]`, a wider
  struct store, or the CnE property-leaf setter). No CnE descriptor record
  containing u32 0x126 adjacent to a name pointer exists either, so the
  field is not a named leaf — it is written directly, most plausibly by the
  USB-format completion path (the only consumer of "formatted" semantics).
  UNRES: exact instruction site; the semantic and both readers are solid.
* Sibling getters on the same service object (CONF): +0x24, +0x28
  (FUN_001b598c — "init done" flag used by many pages), +0x8c/+0x90/+0x14c/
  +0x150/+0x158 (msg-0x22 counters via FUN_001b5bb8/1b5bc4/1b5b44/1b5b78/
  1b5b38), +0x9c/+0x9d (FUN_001b5b20/FUN_001b5844 — playlist/playback state),
  +0x16c (FUN_001b5b2c), +0x180/+0x181 bytes (FUN_001b5ac4/FUN_001b5940 —
  the "recording"/"armed" gates used by FUN_00107ca4), +0x1ac
  (FUN_001b5998 — "busy" flag), +0x1b8 (FUN_001b5b50).
* Global status word `0x60401A98` writers (CONF): bit0 sync-lock
  `FUN_000f8124` (`= old&~1 | (iVar6==6)` — 6 = "TRY SYNC"), bits4-5
  `FUN_000f65ec`, bits8-10 digital-board id `FUN_000f8fcc`
  (`word & 0xFFFF_F8FF | (digId&7)<<8`), bits1-3 input-select
  `FUN_000f6810` ← `FUN_00177acc` = three bits (25/26/27) of `HWCom+0x7c`
  (the "analog input block" assignment written by `FUN_00177910`).

## 4. KnOS static objects ("orphans", BSS 0x604973xx+)

`fa_attach.txt` counts 25 orphans; the ARM registration sites
(`FUN_001f6398`, `FUN_00044fdc`, `FUN_001f6b0c`, `FUN_0013b400`,
`FUN_0013b5a0`, `FUN_001f7588`, `FUN_001a6170`, `FUN_00226214`, `0x1A93xx`,
plus the inlined register blocks) build the descriptor records via the
`stmia rN,{name,desc,usage,flag}` trick then `GRPADD`+`ATTACH`. Resolved:

| object | name | desc / usage | parent path | vtable | handler |
|---|---|---|---|---|---|
| 0x60496bc4 | `versulu` | "SuluModule" | `sys` | 0x602DA198 | file 0x809D8 |
| 0x60496dbc | `dma` | "dma related commands" | `sys` | 0x602DAE14 | 0x9D3B8 |
| 0x604973d4 | `ctx` | "dump context of dma", `<nr>` | `sys/dma` | 0x602DD698 | 0xD99B4 |
| 0x604973e8 | `reg` | "displays registers" | `sys/dma` | 0x602DD6C4 | 0xDAC74 |
| 0x604973fc | `ctrl` | "gpio control commands", `set <gpio nb> <value> …` | `sys/gpio` | 0x602DD6F0 | 0xDADBC |
| 0x60497460 | `desc` | "displays descriptors" | `sys/dma` | 0x602DE1EC | 0xF0214 |
| 0x60497474 | `info` | "displays an overview of a dma" | `sys/dma` | 0x602DE218 | 0xF0270 |
| 0x60497488 | `perf` | "performance monitor", `eng|ctx <nr>|vc …` | `sys/dma` | 0x602DE244 | 0xF07EC |
| 0x60497500 | `ctxwr` | "writes into a context with offset[quadlet] the value", `<nr> <offs> <val>` | `sys/dma` | 0x602DEE08 | 0x104484 |
| 0x60497514 | `error` | "displays all dma's which are in error condition" | `sys/dma` | 0x602DEE34 | 0x1045B4 |
| 0x60497528 | `regression` | "gpio regression test command", `<out_gpio> <in_gpio> [nr_of_pulses]` | `sys/gpio` | 0x602DEE60 | 0x104B68 |
| 0x60497540 | `reg` | "show registers", `[-l] long format` | `sys/sdram` | 0x602DEE8C | 0x104BA4 |
| 0x60497590 | `ctxclr` | "clears the specified context", `context number` | `sys/dma` | 0x602DFA90 | 0x11B37C |
| 0x604975a4 | `lookup` | "displays lookup ram" | `sys/dma` | 0x602DFABC | 0x11B430 |
| 0x604975b8 | `perf` | group; perf monitor (CPU-usage `"%-30s %3u%% (%d/%d)"` fmt handler nearby) | `sys/sdram` (children `ahb`,`monitor` under `sys/sdram/perf`) | 0x602DFAE8 | 0x11B43C |
| 0x604975e0 | `extinfo` | "displays an overview of a dma with an extended error code" | `sys/dma` | 0x602E052C | 0x128A74 |
| 0x6049735c | `sdram` | "sdram commands" | `sys` | 0x602DCCF8 | 0xCF0FC |
| 0x60497608 | `stress` | "sdram stress test commands" | `sys/sdram` | 0x602E0BBC | 0x12EF94 |
| 0x60497624 | `ahb` | "monitor ahb" | `sys/sdram/perf` | 0x602E1034 | 0x133C70 |
| 0x60497664 | `monitor` | "monitor sdram" | `sys/sdram/perf` | 0x602E16B4 | 0x13B59C |
| 0x60496e84 | `gpio` | "gpio commands" | `sys` | 0x602DBF48 | 0xB883C |
| 0x60496a14 | `warp` | "warp commands" | (grp 0x604057E0) | 0x602D81F0 | 0x64744 |
| 0x60496ab4 | `bat` | batch-runner ("Usage: bat <batch-name>  TAB-completion supported") | `sys`-level (sdsShell, registered beside CommunicationSettingsService ctx) | 0x602D92A4 | 0x724BC |
| 0x604987ac | (rapi/djson document object — assert strings `j:\PROJECTS\beb7_Official\include\rapi\djson/document.h`, "type <= kNumberType") | | parent 0x60405A04 | 0x6022C194 | — |

So the ~25 "orphans" are mostly the **`sys` debug subtree** (dma engine debug:
ctx/ctxclr/ctxwr/lookup/desc/info/extinfo/error/reg/perf; gpio: ctrl/
regression; sdram: reg/stress + perf/{perf,ahb,monitor}), plus `versulu`,
`warp`, `bat`, and one non-shell static object (the djson document).
"Unnamed" `file` variants are already named in ghidra_utrack_files.md:
0x602E24C0=`dir open`, 0x602E2538=`dir close`, 0x602E24EC=`dir read`.

## 5. Boot-time board detection + SPI input

* `FUN_0017930c` = HWCom ctor (via singleton `FUN_00178f04`): creates
  "HWComSPI" + "HWComI2C" devices, "HWCom Unmute Timer" (0x400 stack),
  embedded SPI client objects at +0xb4/+0x14c/+0x1e4 (FUN_001a3308,
  0x160 bytes each, channels 0/1/2), board driver objects at
  **+0x314 (MADI: `FUN_00171608`), +0x340 (ADAT), +0x360 (AudioLAN:
  `FUN_001a66dc`, 0x164 bytes)**, opens `/dev/spi0`
  ("ERROR: HWCom: Can't initialize SPI"), reads the **HWVS** persistent
  parameter via `FUN_001db900` → on error prints
  "SVWHERROR: HWCom: HWVS not found - use HWVS=2" and stores default 2.
* SPI shift-register **input image = 3 bytes at HWCom+0x84..0x86**;
  `FUN_001781f8` = `(byte[0x84] & 7)` = **analog board id**;
  `FUN_00178208` = `(byte[0x84] & 0x70) >> 4` = **digital board id**.
  In-image write site: `strb r0,[r4,#0x84]` at file `0x9214C` inside
  `FUN_00092100` ("Instantiating uTRACK24 HAL" — singleton `FUN_000920a4`,
  invoked from `FUN_00177590`; also instantiates MidiOut, AudioHWService,
  CustomHWService chain `FUN_00091938`/`FUN_00091894`/`FUN_00092000`).
* `madi boardid` / `adat boardid` (`FUN_0007c008` / `FUN_0007bd04`) print
  `"Analog Board Id is %d Digital Board Id is %d"`.
* Digital-id map (CONF by call-target offsets): **1 = MADI** (the `madi`
  command group → obj+0x314: clock/MadiInput/mode/tx48k/setfs/input/output/
  madiin/modid/rev/getfs/getlock/getconn/get48k/get56ch/regread);
  **2 = ADAT** (`adat` cmds → obj+0x340: regread `FUN_00177894`→0x171378,
  source `FUN_00177c0c`→0x171458); **3 = AudioLAN** (`FUN_000f6be0` treats
  id 3 as valid-but-untouched here, and `FUN_00084450` routes id 3 to the
  +0x360 object via `FUN_001781a4`→0x1A63B0 / `FUN_00177818`→0x1A636C).
  `FUN_000f6be0` (sync-mode change): id1 → `FUN_001781dc`(+0x314),
  id2 → `FUN_001781c0`(+0x340), id≠3 → "unknown board" error.
* `FUN_000f8fcc` ("BeBoB_App" attach) writes the id into the status word:
  `*0x60401A98 = word & ~0x700 | (digId & 7) << 8`.
* Analog id (`byte&7`, values 0–7) distinguishes the analog mainboard
  variants ("Analog 1"); input-select bits live at HWCom+0x7c[24..26]
  (inverted write via `FUN_00177910`, read-back via `FUN_00177acc` →
  status bits 1-3), bus-mode bits at HWCom+0x18[0..1] (`FUN_000b865c`).

## Remaining gaps (explicit)

* 0x191/0x193 physical key names (191 = inferred marker/locate; 193
  subscribed but swallowed — no dedicated consumer located).
* 0x199 named "Select/Enter" by behavior — no literal label in the binary.
* `usb drv test` `setHostReq` tail (0xEA03C+) and `packet` handler bodies
  not disassembled in detail (names/strings known).
* svc+0x126 writer instruction site (semantic resolved: "USB formatted"
  flag; readers FUN_000a5dfc/FUN_000ac18c/FUN_000e45a0).
* ~3 of the 25 orphans outside the dma/gpio/sdram/sys naming above are
  covered only by address (e.g. the djson object); none are hidden commands.
