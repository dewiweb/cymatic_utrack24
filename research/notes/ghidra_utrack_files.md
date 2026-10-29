# uTrack24 firmware 4218 — FILES / TRANSPORT / BUILT-IN COMMANDS completion map

Ghidra project `research\ghidra\utrack_fw_proj\utrack_fw`, program `uTRACK24_Release_4218.bcd`,
flat load (Ghidra addr = file offset; runtime = file + **0x60005F84**). Addresses are file
offsets unless marked `rt`. Closes the gaps listed in `ghidra_utrack_map.md` §"Open gaps"
and `ghidra_utrack_recorder.md` §"Open gaps". Companion: `device_model.md` (wire formats).

New tool this session: `AttachScan.java` (all FILL/ATTACH/GRPADD/GRPREG callsites +
backward string resolution + orphan recovery), `MkFunc2.java` (function-less-code
recovery without TMode writes). Dumps: `research/ghidra/dumps/f1_chai.txt`,
`f2_file.txt`, `f3_knos.txt`, `f4_usb.txt`, `f5_trans.txt`, `f7_decl.txt`,
`f9_text.txt`, `fa_attach.txt`, `x1.txt`, `c2_evt.txt`.

---

## 1. CopperLan write entry points — the 4-slot listener vtable

The CHAI write/read callbacks for the uTrackCopperLan singleton live in ONE multi-vtable
object (rodata @ file 0x2d5634, secondary vtable group). Thunks adapt args and jump to
the real handler:

| vtable slot | thunk | real fn | wire message | payload |
|---|---|---|---|---|
| +0x00 | FUN_001c3d3c | **FUN_000adab0** | read/announce (get current value) | — |
| +0x04 | FUN_001c3cdc | **FUN_000acd6c** | numeric write (TLV `4237`) | u64/u32 value |
| +0x08 | FUN_001c3d0c | **FUN_000ace70** | list/button write (TLV `4337`) | ctrl u16 + value u16 @+4 |
| +0x0c | FUN_001c3cb4 | **FUN_000abbc8(param_1-0x120,…)** | **text write** (c3-type ctrls; uRemote vtable+0x17c) | ASCII/UTF-8 string |
| +0x10 | FUN_001c3e00 | FUN_000aa898 | special query (0xb210/1/2 getters, 0xc010 file-select) | — |

So the "vtable+0x17c write variant" uRemote uses for 0xd001/0xd002/0xd003 arrives on the
device as the **text-write message**: the handler extracts a C-string
(`param_3->vt+0xc4` → `FUN_001be9f0`) and `strtol(..,10)`s it. **Payload format = decimal
ASCII integer**, no prefix. Announced as type `c3` (kind 4, text) in TLV `c837`.

### 1a. 0xd000 Action — the action-map table (COMPLETE)

Dispatch in FUN_000ace70: `iVar3 = ctrl - 0xb312`; `iVar3 == 0x1cee` ⇒ ctrl 0xd000.
Iterates subscriber list `uTrackCopperLan+0x8e0` and calls
`sub->vtable[8](actionMap[wireVal])` where `actionMap = DAT_000ad5d4 = rt 0x6029e8b8`
(file **0x298934**) = `u32[7]`:

| wire val | UI event code | meaning |
|---|---|---|
| 0 | 0x0000 | no-op |
| 1 | 0x194 | prev / next-adjacent key event (see below) |
| 2 | 0x195 | prev / next-adjacent key event (see below) |
| 3 | **0x196** | **STOP** — "Button Stop pressed - Stopping re…" (FUN_000d13e4 case 0x196) |
| 4 | **0x197** | **PLAY** (play/pause handled inside the play-event consumers; uRemote sends 4 for both) |
| 5 | **0x198** | **REC** — FUN_000d13e4 case 0x198 (take setup, >60 s guard, 0xcf/3 msg) |
| 6 | **0x192** | extra key event (enum table pairs code 0x192 with label `'Prev'`; likely Save-marker/prev — unverified on wire) |

- The event codes are **the same ids front-panel buttons inject**: UIMainControl
  (ctor FUN_000e11c4 / alt ctor FUN_000e1664) subscribes to event ids
  {0x191,0x192,0x193,0x194,0x195,0x196,0x197,0x198,0x199,0x19a} on the UIService
  (`vt+0xc`/`vt+0x10` subscribe with listener obj). `400` is also subscribed.
- Subscriber broadcast for these CopperLan actions = the uTrackCopperLan +0x8e0 list;
  each subscriber's `vt[8]` typically forwards into **FUN_000f5268(obj,eventId)**,
  the UI-event broadcaster (lock obj+0xa0, walk obj+0x3c8 subs, `sub->vt+0x10(obj+0x140,id)`).
- Recorder-state consumer **FUN_000d13e4**: 0x196 → stop (slave/Standalone variants,
  posts 0xcf/3 to stream obj); 0x198 → record-take path; **0x194/0x195/0x197 → "…Adding
  a Marker [%d]"** (`FUN_000d34d0`) while recording — i.e. any play/skip key during REC
  drops a WAV cue point (matches the "markers = Play during REC" field note).
- Announced Action items (enum table slice @file 0x298950, entries {val,label}):
  `1='Next', 2='Stop', 3='Play', 4='Rec', 5='Save'`; a preceding record
  `{0x192,'Prev'}` closes the previous control's slice. Announced labels do NOT equal
  write semantics — the device treats the wire value purely as an index into the
  7-entry action map. Captures prove 3=stop, 4=play/pause, 5=rec; uRemote never
  emitted 1/2/6 (skip keys go through 0xd001 locate instead).

### 1b. 0xd001/0xd002/0xd003/0xd00f — text writes (FUN_000abbc8)

`ctrl - 0xd001` (`DAT_000ac0c8`):

| ctrl | parse | sink | meaning |
|---|---|---|---|
| 0xd001 | strtol(str,10) | `FUN_0013e404(ucl+0x848, pos)` | **Playback cursor — locate to absolute sample position** (frames, decimal ASCII) |
| 0xd002 | strtol(str,10) | `FUN_0013e49c(ucl+0x848, pos)` | **Loop start cursor** (samples) |
| 0xd003 | strtol(str,10) | `FUN_0013e47c(ucl+0x848, pos)` | **Loop end cursor** (samples) |
| 0xd00f | strtol(str,10) | `FUN_00093a7c(gs, val)` | "Current Controller" select |
| 0xf060 | string | `FUN_000ab2b8(ucl, str)` | Error Code write/ack |

`ucl+0x848` = the player/file-browser sub-object (same object used by 0xc00x). So
uRemote's seek-bar, marker-jump and FF/REW buttons all collapse to a single text write
of the target frame number — confirmed mechanism for locate (no relative-ff command
exists; skip = locate to computed sample).

### 1c. Other 0xd0xx / file-browser controls in FUN_000ace70 / FUN_000abbc8

| ctrl | path | semantics |
|---|---|---|
| 0xd008 "Playlist songs" | list write | if `ucl+0x666 ∈ {3,4}` (busy/transition) → stash val @ucl+0x844, flag+0x846 (applied later by FUN_0013e4a4 bit0x80); else **FUN_000946e4**: `player+0x80 = songIdx` + UI event **0x18** |
| 0xd009 "Exit Playlist Mode" | list write | FUN_0009366c → UI event **0x16** |
| 0xd088 "Mixer Configuration" | list write | FUN_00094420 → UI event **0x2f** (mixer view toggle) |
| 0xc003 "Current Dir Names" | list write → **FUN_000ab3f8** | val 0 = **up one dir** (truncate `ucl+0x808` path at last '/'); val 1 = **root** (`DAT_000ab658='/'`); val&0xf000≠0 → **entry select** `idx=val&0x0fff` into dir list `ucl+0x810`: type byte+4==1 → **descend dir** (FUN_0013e0e0 → `+0x24` str, notify 0x20); type 8 → ignored; other → **load song/take** (FUN_00093628 → `player+0x1a0` + UI event **0x14**), or deferred @ucl+0x668/+0x66a when busy |
| 0xc001 "Current dir" | **text** write | `FUN_0013eab8(ucl+0x848, path)` = chdir to literal path (notify 0x10) |
| 0xc010 | special query (FUN_000aa898) | file-select by index `val&0xfff` → `FUN_000acd2c` (name) + `FUN_00092a18` → `player+0x10c`, UI event **0x20** |
| 0xc004 "Current Dir Types" | list write | parsed but ignored |
| 0xb002 DateTime | text | `a:b:c:d:e:f` six ':'-sep fields → `FUN_00092aa8(6 fields)`; notifies +0x2b4/+0x4ec |
| 0xb004/0xb005 Static IP / Subnet | text | `FUN_000aab74` IP-string parser → `FUN_00093cd0`/`FUN_00092ef8` (only when `FUN_001b5540(gs)==0`, i.e. DHCP off); notify +0x4f4/+0x4f8 |
| 0xb310..0xb317 | list | `FUN_00093910` → `gs+0x1bc[i]`; event 0x26 — 8× MADI "44/48kHz Out NN-MM" groups |
| 0xb320..0xb323 | list | `FUN_0009398c` → `gs+0x1dc[i]`; event 0x27 — 4× "88/96kHz Out" groups |
| 0xb330..0xb332 | list | `FUN_000931e4` → `FUN_000955a4`; event 0x2a — 3× ADAT out groups |
| 0xcf1 (=0xc003 read-back) / 0xcf2 | list | query FUN_000ab3f8 / ignored |

**FUN_0013e4a4** = the deferred-commit pump on the CopperLan player object: processes
pending-flag bits — bit0 dir-changed notify; bit3 apply pending playlist-song
(`FUN_00093574(loopStart,loopEnd)` + subs `vt+8`); bit1 MIDI-offset recompute
(`val*2000-1000 → ucl+0x59c`); bit2 attenuation; bit4 dir text-set → **rebuilds the
dir-entry list `ucl+0x810`** (`FUN_000acc60` walk + `FUN_0023afd0`) and pushes entry
count to 0xc003/0xc004 controls; bit5 deferred file-select; bit6 deferred dir-select
(re-enters FUN_000ab3f8 with `ucl+0x668`); bit7 deferred playlist-song (FUN_000946e4).

### 1d. Shared {value,label} enum table @ file 0x29894c+

One big interleaved table drives every list-control announce. Per-control slices are
picked by a table-of-tables in FUN_000a6464's literal pool (file 0xa6ff0–0xa703c);
slices overlap (e.g. 'On/Off/Toggle' shared). Resolved slices: Action
{Next,Stop,Play,Rec,Save}+Prev; Off/On/Toggle; clock {Int. Clock, Wordclock, PTP,
Digital I/O (ext)}; footswitch {Play, Play-Pause, Play-Stop, Record}; sample rates
{44.1,48,88.2,96 kHz}; {16-bit,24-bit}; tracks {Stereo,4,8,12,16,20,24 Ch};
playback mode {Single(0xffff),Continuous,Shuffle,Repeat One,Repeat All}; stereo-pair
outputs {1-2 .. 31-32}; sync {Master Present/Not}; MADI input {Coax,Optical},
{56ch(Std),64ch(Ext)}, {48kHz Frame,96kHz Frame}; per-group MADI out-pairs
{uTrack 01-08…57-64, MADI In …, Analog …}.

---

## 2. `file` SDS command group — COMPLETE (FUN_00026578)

Registrar builds 18 static command objects (BSS 0x60406380..0x604064e8); each =
{vtable,name,desc,usage,argc}; every child's **handler = vtable+0x1c**. Children attach
under the `file` group node; the last 5 attach under `dir`. All handlers follow one
pattern: convert path arg→wstring → build `FileAccessJob_*` → submit to
**FileAccessHandler singleton (FUN_000cbaf0) via vt+8 (blocking)** → print result
("%s failed with %d" carries the FS error code). `fs`/`file` only work when FAH exists
(mounted USB stick); the `dir`-object vtables reuse the *same name strings* ('open',
'close', 'read') — these are the "3 unnamed descriptors" from the earlier map; they are
NOT unnamed, they are `dir open`/`dir close`/`dir read`.

| command | usage | desc | handler (file) | FAH job |
|---|---|---|---|---|
| `file` | — | "file access handler shell commands" | 0x1488d8 | group node |
| `file open` | `open <filename> {ro|rw|wo}` | "open file" | 0x1497dc | OpenFile (mode flag ro/rw/wo; handle cached in cmd obj) |
| `file close` | `close` | "close file" | **0x14a968** | CloseFile; clears stored handle to 0xffffffff, "File successfully closed" |
| `file read` | `read <bytes> {-a}` | "read file" | 0x1499b4 | ReadFile <n> bytes (option -a = alt/ascii dump) |
| `file print` | `print <bytes>` | "print file" | 0x14aa80 | ReadFile + print to shell |
| `file write` | `write <bytes> {<count>} {<buffer_offset>}` | "write file" | 0x14aca0 | WriteFile — bytes to write, repeat count, source offset in the FAH staging buffer |
| `file tell` | `tell` | "tell file offset" | 0x149e84 | TellFile |
| `file size` | `size` | "get file size" | 0x16ff94 | GetFileSize |
| `file stat` | `stat <filename>` | "stat file/directory" | 0x149d18 | Stat |
| `file move` | `move <currentname> <newname>` | "move file/directory" | 0x14960c | Move (rename, argc=2) |
| `file remove` | `remove <name>` | "remove file/directory" | 0x16fbc0 | Remove — "File successfully removed" |
| `file seek` | `seek <file offset>` | "seek file" | 0x149bbc | SeekFile |
| `file info` | `info` | "show info of file access handler" | 0x147a7c | prints "Last file access: %s" (FAH diag) |
| `file dir` | — | "dir access handler shell commands" | 0x147ae4 | subgroup node |
| `file dir open` | `open <dirname>` | "open dir" | 0x148d74 | OpenDir ("Directory successfully opened") |
| `file dir close` | `close` | "close dir" | 0x1494e0 | CloseDir |
| `file dir read` | `read` | "read dir" | 0x148f0c | ReadDir — iterates entries, "End of directory reached" |
| `file dir create` | `create <dirname>` | "create dir" | 0x148be0 | MakeDir ("Directory successfully created") |
| `file dir free` | `free` | "get free space" | 0x148abc | GetFree → "Free space is %llu kbytes" |

Vtables (rt): open 0x602e2590, close 0x602e275c, read 0x602e25bc, print 0x602e2788,
write 0x602e27b4, tell 0x602e2640, size 0x602e28a8, stat 0x602e2614, move 0x602e2564,
remove 0x602e2814, seek 0x602e25e8, info 0x602e227c, file-grp 0x602e242c,
dir-grp 0x602e22a8, dir open 0x602e24c0, dir close 0x602e2538, dir read 0x602e24ec,
dir create 0x602e2494, dir free 0x602e2468.
Most handlers sit in un-analyzed Thumb code (DecompOne "no func"); the four that
decompile cleanly (close/remove/info/free) confirm the uniform job-submit pattern
above; remaining handlers are inferred from job class + result strings — semantics
per the table.

---

## 3. Built-in / static shell commands — COMPLETE

### Registration (KnOS init chain)
- **FUN_001d379c**: copyright banner → `FUN_001de934` (DI_DebugPrint lock) →
  `FUN_001d3884` (console/uart objs via FUN_00013244/FUN_00013290) → `FUN_00029d0c`
  (LibcWrapperLock) → `FUN_001f488c('sys',"System commands",0)`,
  `FUN_001f488c('test',"Test commands",0)`, and a 200×0x10 record table via
  FUN_001c70d8 under group **"KnOS commands"**.
- **~25 ATTACH/GRPADD callsites in function-less code** (AttachScan): sites at
  0x1f64c0..0x1f67f4 (~11 GRPADD+ATTACH pairs), 0x1f6ax4, 0x4cdf4, 0x1a93c4/0x1a93d8 —
  all register **static descriptor objects in BSS 0x604973xx–0x604976xx**, i.e. the
  pre-compiled KnOS command set (os/sys/test/gpio/versulu family). **No hidden
  diagnostic commands surfaced** — everything resolves to the documented set or to
  inventory (GROUP_ADD with tag, not shell) entries. Orphan decompiles failed on
  TMode conflicts (code exists, no function objects); names not individually resolved
  but the obj-set is contiguous with FUN_001f6b0c's gpio/sys_gpio/gpio-regression cmds.

### Command semantics (authoritative — from the in-firmware help block @0x2ad5xx..0x2ae2xx)
| cmd | usage | semantics |
|---|---|---|
| `get` | `get [-e\|-b\|-s] <attributename>` | read CnE leaf: -e extended (type), -b binary, -s string; prints `Name="x", Value=…`; TAB-completion |
| `set` | `set <attributename> <attributevalue>` | write CnE leaf (e.g. `set dev/uart1/bufferSize 128`); routes through CnE_Property → owner objects, async notify |
| `ls` | `ls [-r\|-n\|-e\|-v\|-b\|-s] [path]` | list sds dir: -r recursive, -n with dir name, -e extended (shows type e.g. `19CnE_SystemDataProxy`), -v name+value only, -b binary, -s string; path `sds://…` or `cne/…` |
| `cd` | `cd <dir>` | change current directory (e.g. `cd cne/USB`); errors "Directory \"%s\" does not exist" |
| `pwd` | — | print working directory (core nav set, same registrar as get/set/ls/cd/shell/clear) |
| `clear` | — | clear screen |
| `shell` | `shell [-o][-i][-b][-n][-s]` | shell config: -o overwrite mode, -i insert mode, -b bold errors, -n normal, -s show config. CTRL-P = priority boost, CTRL-S = switch shell to this device |
| `bat` | `bat <batch-name>` | execute commands stored in a tree leaf (batch script); **max recursion 5** ("Too many recursiv accsess of batch commands"); TAB-completion |
| `rd` | `rd <addr> <count> [b\|h]` / `rd <addr> [<count>] [a\|b\|h]` | **raw physical memory read**: default 32-bit quadlets; b=8-bit, h=16-bit; `a` = 32-bit + ASCII dump; `rd -c` toggles MMU/address-validity check. Units = words, addr = runtime VA |
| `wr` | `wr <addr> <value> [q] [b\|h]` | **raw physical memory write**: default 32-bit; b=8-bit, h=16-bit; `wr -q` verbose, `wr -c` MMU-check toggle |
| `showtree` | `[path] [-l][-r]` | "displays the tree starting from this directory (sds://…)" |
| `help` / `bc_help` | `help` | command list / per-command overview+description dump |
| `persparam` | `rd/rds/rdss <name>`, `wr/wrs/wrss <name> <val>`, `wrb/wrbs <name> <hex>`, `clr/clrs <name>`, `check`, `reset` | persistent-parameter (config-flash) access — 4-char names or full-string variants |
| `ctr` | `ctr n get`, `ctr n get speed` | inspect/manipulate CTR registers |
| `sys`/`os`/`test` groups | (desc strings @0x1dfdxx..0x1e10xx) | `os`: blk, byte, evt, flg, free `<ptr>`, load `<time>`, map, mchk `[nodump]`, mlc, mlctest, mseg, mtype `<ptr>`, q `[reset]`, running `<submode>`, sem, shell `<uart>`, sleep `<ms>`, standby, suspend, th `<int>`, timer, timestamp, uartcfg, wp. `sys`: memscan `<a0> <a1>`, memscanraw, memdump, ver, reset (hard), reboot (soft, via PowerManager), restart + "restart in update mode", clock, av, if `<if> stat`, lpm, flash |

`ls -l`-style dir listing columns: `filename | size | date | time | attributes` (@0x2a0025)
— that is the `fs ls`/dir-read tabular format.

---

## 4. `filerec stat` / `fileplay stat` — output format

`stat` posts a `35StreamingQuery_PrintFileCoderStatus` (msg vtable rt 0x602e2458)
through stream-control `vt+0xc` (blocking query); on the streaming thread the engine
iterates coders and prints, per active coder:

```
### Encoder %u ###          /   ### Decoder %u ###
Cycle:                     %s      ("Recording" | "Playback")
CurrentCycle:              %u
CurrentFile:               %u
SetupNextFile:             %s
TotalSamplesRecorded:      %u
TotalSamplesPlayed:        %u
SamplesRecorded:           %u
SamplesPlayed:             %u
SetupNextFileSampleNumber: %u
MaxFileSize16Bits:         %u
MaxFileSize24Bits:         %u
DropOuts:                  %u
WriteErrors:               %u
```

So stat = per-coder dump: cycle kind, cycle counter, current file index, next-file
state, cumulative + per-cycle sample counters, the configured split points
(4 GiB 16-bit / 24-bit file limits = the maxlen mechanism), dropout count, and
write-error count. (Field strings @0x7a158..0x7a2f8; headers @0x1261bd/0x1261d8.
The four printer thunks +0x10/+0x2c sit in un-analyzed code — fields recovered from
the format-string block, which matches the msg class name exactly.)

---

## 5. USB-device mode internals

### Two USB personalities
- **Host mode** (front-panel USB-A, mass-storage sticks): `USBHostController` →
  `MassStorageDeviceClient` → `FatFileSystemImpl` — always present in recorder mode;
  SDS `usb host list | host log <on|off> [dev#] [ep#] [rx|tx] | host devlog <on|off>`.
- **Device mode** (rear USB-B, audio interface): `USBDeviceHandler` (+HSM,
  `USBDeviceMsgHandler`, `USBCommandHandler`) serving a UAC2 function:
  `USBAudioDevice` with `USBControlAlternateSetting` (AC + IRQ ep),
  `USBStandardStreamAlternateSetting` (standard UAC2 streaming, explicit-FB ep),
  **`USBBCoStreamAlternateSetting`** (BridgeCo *private* compound-stream descriptors —
  the proprietary high-channel-count path the BeBoB driver uses), and
  `USBDFUAlternateSetting` (device firmware upgrade). `USBAudioControlRequest`
  handles AC class requests (mixer/feature-unit queries).
- Role detect: GPIO pins `"USB device detect"` / `"USB host detect"` /
  `"USB host enable"` (@0x177284–0x1772a8, HWCom GPIO descriptor list) — hardware
  ID/VBUS sensing decides host↔device before stack config.
- **Personality switch**: CnE `AppSettings/Global/DeviceMode` (0 = recorder) +
  `USBConfigurationId` selects the USB model descriptor set — switching prints
  `"Switch to %s USB model -> reboot!"` (@0x86c2d, `USBAudioDevice::setConfiguration`),
  i.e. **model change requires reboot** (descriptors are built at enumeration from
  `USBModelDynamic` / `BeBob_USBModelDynamic`; `configureUSBModel` also builds the
  MIDI plugs). `StreamingInterface` CnE enum = {`USB`,`uNET`,`Bridge`,`ETHERNET`}
  (@0x29f328) picks the streaming backend — "USB Interface Mode" is also a UI state.
  In USB-interface mode the device announces **zero CopperLan controls** (verified on
  wire) — control is SDS/telnet + host-driver IOCTL only.

### `usb` SDS subtree (FUN_000c6440 — also spawns USBDrvRxThread)
- `usb` — "commands related to USB" (grp handler 0xc8709)
- `usb drv` — "Commands related to USB Bus Driver level" (handler 0xe8c10):
  `drv stat [reset]`, `reg`, `crc [on|off]` (CRC-err detection), `ep [ep-no]`,
  `bal` (USB I/O balance counter), **`ts`** (UsbDecoder timestamp infos →
  `"UsbDecoder: TS=%9d = %3.1f %% (%9d...%9d) / Corr=%d"`),
  **`explicit`** (explicit-feedback counters), `fifo`
- `usb drv test` — "USB test commands" (handler 0xe9164): `reset`,
  `phy [disable|enable]`, `suspend`, `resume`, `enableHS`, `enableSoftConn`,
  `session [on|off]`, `hostDisc`, `setHostReq`, `setFeatStep [1|2]`,
  `devDescStep [1|2|3]` (staged enumeration debug), `testpat [j|k|se0|pkt|
  forceHostHS|forceHostFS|forceHostLS]`, `packet [cap|show]` — USB-IF/PHY-level
  compliance + packet capture diagnostics.
- `usb dev log <on|off> [ep#] [rx|tx]` — device-handler trace ("USB cmd for device
  handler" @0x2a5174).
- `usb stack ep` — USBStackImpl endpoint dump ("Shell cmd for USB Stack").

### USB decoder path (audio-interface streaming)
`USBStreamingInterface::reconfigure` (errors @0x299d14+) sets up: **USB encoder**
(device→host isochronous IN), and a decoder chosen between **"BridgeCo decoder"**
(private protocol) and **"Standard decoder"** (plain UAC2) per model; msg classes
`33StreamingConfiguration_USBDecoder` (+`StreamingConfiguration_USBEncoder`,
`StreamingConfiguration_Ringbuffer`). Data plane: `StreamDeviceUSBAsync` /
`USBAsyncDevice` / `KnOSStreamDevice/StreamDeviceUSBAsyncDbgModul` — the **"USB
Decoder"** thread drains iso EPs into `DSPStreamingRingbuffer` (CnE
`/cfg/AppSettings/USBDecoder` — PlayoutDelay, NoOfElementsInQueue; MaxDelay for
StreamingRingbuffer). `usb drv ts`/`explicit` report the async-feedback tracking
stats shown above (TS window %, correction ppm) — the implicit/explicit feedback
loop that keeps the device clock locked to the host SOF rate.

---

## Key addresses added to the index
| what | file | rt |
|---|---|---|
| CHAI text-write handler (0xd001/2/3,0xd00f,0xc001,0xb002/4/5,0xf060) | FUN_000abbc8 | 0x600B1B4C |
| text-write thunk (listener vt+0x0c) | FUN_001c3cb4 | 0x601C9C38 |
| listener vtable (read/num/list/text/query slots) | 0x2d5634 | 0x602DB5B8 |
| action map u32[7] | 0x298934 | 0x6029E8B8 |
| shared enum→label table | 0x29894c | 0x6029E8D0 |
| enum slice table-of-tables | 0xa6ff0 | — |
| file-browser dir-select (0xc003) | FUN_000ab3f8 | |
| dir/file-select deferred-commit pump | FUN_0013e4a4 | |
| transport event consumer (stop/rec/marker) | FUN_000d13e4 | |
| UI event broadcaster | FUN_000f5268 | |
| locate/loop-start/loop-end setters | FUN_0013e404 / 0x13e49c / 0x13e47c | |
| dir descend / dir set (text) | FUN_0013e0e0 / FUN_0013eab8 | |
| playlist-song apply / file-select / c010-select | FUN_000946e4 / FUN_00093628 / FUN_00092a18 | |
| file registrar | FUN_00026578 | |
| KnOS groups registrar | FUN_001d379c | |
| usb/drv/test registrar | FUN_000c6440 | |
| usb drv handler / test handler | 0xe8c10 / 0xe9164 | |
| builtin help-text block | 0x2ad5xx–0x2ae2xx | |
| stat field strings | 0x7a158–0x7a2f8, 0x1261bd | |

## Remaining unknowns (explicit)
- UI event ids 0x191/0x193/0x199/0x19a (menu/marker keys) — subscribed but
  consumer switches not traced; 0x194/0x195 = the two skip-direction keys
  (prev/next), exact direction assignment unverified.
- Action wire value 6 → event 0x192 semantics ('Prev' label vs 'Save' marker —
  never emitted by uRemote).
- File-cmd handler internals beyond the four that decompile (open/read/print/
  write/tell/size/stat/move/seek/dir-*) — job classes certain from names/strings,
  arg-edge cases unverified.
- The ~25 orphan-registered static objects' exact per-command names (BSS
  0x604973xx–0x604976xx); contiguous with the KnOS/os/sys/test/gpio set — no
  evidence of undocumented commands.
- `usb` top-level handler (0xc8709) sub-command list not enumerated (usage field
  empty in registration).
