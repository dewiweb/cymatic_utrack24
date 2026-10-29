# uTrack24 firmware 4218 — GLOBAL architectural map

Ghidra 12.0.4 project `Temp\ghidra_proj\utrack_fw`, program `uTRACK24_Release_4218.bcd`,
loaded **flat at base 0** (single `ram` block 0x00000000–0x2EA7FF; Ghidra addr = file offset).
**Address rule**: runtime addr = file_offset + **0x60005F84**. Below: file offsets; runtime in
parens where useful (all `DAT_xxxx` literals and vtables store the 0x60xxxxxx runtime form).

Supersedes/extends `ghidra_utrack_dsp.md` (mixer/inputselect/meter internals),
`hardware_analysis.md` (platform), `device_model.md` (control model from the wire).
New Ghidra tools written for this map: `CmdScan.java`, `VtDump.java`, `StrAt.java`,
`RttiScan.java`, `DescScan.java` (in `research/tools/ghidra/`).

```
Image layout (BcOd container):
0x0000  BcOd header: magic 'BcOd', date "2018 0925 13215", size 0x2ea578, CRC 0xcac6dbea
0x0040  2nd-stage boot header: 0x0035ff80 … "uTRACK24" @0x70, sig 0xaaaa5555@0x7c,
        0xa5a5a5a5@0x84, load/base 0x8000@0x9c, image len 0x2e8578@0xa4, CRC@0xa8
0x0094  ENTRY: ea000008 B +0x20 -> 0xbc (ARM reset stub)
0x00bc… code+rodata (Thumb-heavy), vtables ~0x2d4xxx-0x2e2xxx
0x2a2xxx-0x2a3xxx  command-name/usage string tables
0x2e8bfb… serialized CnE default tree blob (packed name fragments + defaults)
bss   rt 0x6040xxxx  (app singletons, command nodes, meter buffers)
```

---

## 1. SDS command registry

### Mechanics
- Shell executes in **`ShellThread` = FUN_001a9ca0** (ctor/loop; `sds://` prompt): reads a
  line, resolves the command node in the SDS tree, calls the node's **`vtable+0x1c`
  handler**, prints `---- OVERVIEW ----`/`---- DESCRIPTION ----` (desc field [2]) when
  args are wrong, or `Unknown command %s`.
- Command object layout (0x30 B): `[0]=vtable*, [1]=name*, [2]=desc*, [3]=usage*,
  [4]=argc, [5]=ctx/owner`. Real handler = `vtable[7]` (vt+0x1c).
- Descriptor fill helper **FUN_0007f01c**(obj,name,desc,usage,argc); attach into tree
  **FUN_001a7b9c**(obj,parentNode) (ATTACH — marks a shell command); inventory link
  **FUN_001c70ac**(obj,tag1,tag2) (GROUP_ADD — also used for non-shell objects);
  once-guard **FUN_001c7162**; group registrar **FUN_001f488c**(name,tag,desc,parent).
- **Registrar `FUN_000f8fcc`** (BeBoB_App init) calls 13 per-command register fns
  (below). `file`-group registrar **FUN_00026578** attaches 16 sub-commands.
- Core KnOS groups are registered from **FUN_001d379c** ("KnOS commands",
  "System commands" via FUN_001f488c, "test" group) + deeper inits
  (FUN_001de934, FUN_001d3884, FUN_00029d0c). Built-ins get/set/ls/cd/pwd/help/rd/wr/
  shell/bat/clear are part of the shell's static tree (usage strings at 0x1d3xxx/…).

### App commands (registered by FUN_000f8fcc chain)
| cmd | register fn | vtable (file) | handler (file) | usage |
|---|---|---|---|---|
| samplerate | FUN_0012884c | 0x2da534 | **FUN_00128780** | `samplerate '44.1\|48\|88.2\|96' [-out]` |
| sync | FUN_0011ab20 | 0x2d9a24 | **FUN_0011aa18** | `sync line\|ptp\|reset` |
| channelmode | FUN_00146ba4 | 0x2dc1e4 | **FUN_00146a10** | `channelmode <mode>` |
| dsp | FUN_00092600 | 0x2d47a0 | **FUN_000924ec** | `dsp 'freq'\|stop\|stat` |
| fileplay | FUN_000fa580 | 0x2d8b18 | **FUN_000f9660** | `fileplay configure <id> <file> <firstCh> <playoutDelay> <nBuf> <bufSize> <nPreload> <notifyInt> {autostart} {fileId {switchN} {pause}}` |
| filerec | FUN_0012418c | 0x2da2b0 | **FUN_001237c8** | `filerec configure <id> <file> <bits> <firstCh> <nCh> <nBuf> <bufSize> <notifyInt> {autostart}` |
| wavefile | FUN_00111088 | 0x2d96f0 | **FUN_00110f0c** | `wavefile <fileName>` |
| mixer | FUN_000cd164 | 0x2d6b38 | **FUN_000ccb58** | `mixer levels\|querylevels\|stat\|get\|set\|store` |
| inputselect | FUN_00137e04 | 0x2db3cc | **FUN_00137ce0** | `inputselect '1\|2\|3\|all' 'analog\|digital'` |
| maditest | FUN_000fb0a8 | 0x2d8bf4 | **FUN_000fad64** | `maditest [id opt coax muteOn muteOff ...]` |
| audiolan | FUN_0012f81c | 0x2dad78 | rt 0x60135458 → file **0x12f4d4** | `audiolan [stat rec play 44 48 88 96]` |
| cpsync | FUN_00110138 | 0x2d96c4 | rt 0x60116090 → file **0x11010c** | `cpsync` (dump CopperLan sync module) |
| ptest | FUN_0013ad80 | 0x2db684 | **FUN_0013a9dc** | `ptest N` |

### Other attached commands (registered elsewhere)
| cmd | attach site | notes |
|---|---|---|
| ptp | FUN_0003d35c | "ptp shell command" (+ 1 more node) |
| framer | FUN_00070dec | "framer routing and internal state" |
| rtc | FUN_000717e0 | "set/show RTC registers" |
| adat | FUN_0007bf90 | "adat related functions" (handler FUN_0007bd04) |
| madi | FUN_0007d100 | "madi related functions" (handler FUN_0007c008) |
| deframer | FUN_00092958 | "deframer routing and internal state" |
| codec | FUN_00097b20 | "set/show audio codec registers" `codec set <chipaddr> <regnr> <val>` |
| usb | FUN_000a1a3c | "USB cmd for host controller" |
| stack | FUN_000c77bc | "Shell cmd for USB Stack" `usb stack ep` |
| usb/drv/test | FUN_000c6440 | 3 nodes: `usb`, `drv`, `test` (USB driver cmds) |
| hsci + show | FUN_000cc464 | "High Speed Control Interface commands" / "hsci show header" |
| stream/sys/cfg/pll/stat | FUN_000ef70c | "iso stream information and config", `sys/cfg/stream` paths, `pll`, `stat` |
| perf | FUN_0013b400 | performance dump |
| fmt | FUN_001a89d4 | `fmt` (format volume) |
| warp | FUN_001a6170 | "warp commands" (SuluModule, WARP DSP) |
| versulu | FUN_001f6398 | SuluModule version (attach) |
| gpio / sys_gpio / gpio regression | FUN_001f6b0c | "gpio commands", "gpio control commands", `sys_gpio` |
| help | FUN_000625c8 | registers `help` node from a descriptor table (*obj+4000, stride -0x14) |
| file … | FUN_00026578 | group `file` + subs below |

### `file` group (FUN_00026578, 16 children)
`file open close read print write tell size stat move remove seek info dir create free`
(+3 unnamed descriptors 0x602e24c0/0x602e2538/0x602e24ec — rename/append/mkdir-class ops).
Handler = each child's vtable+0x1c (vtables at 0x2dcxxx e.g. open→0x602e2590).
Subcmd handler thunks land at rt 0x6014xxxx (file offsets 0x149990, 0x1509e0,
0x14fb1c, 0x150c00, 0x150e50, 0x14ff1c, 0x176020, 0x14fde4, 0x14f73c, 0x175c94,
0x14fc78, 0x14da44, 0x14da80, 0x14ecd4, 0x14ee6c, 0x14f56c, 0x14efc0, 0x14eb40).

### Core shell set (from AudioLAN help + usage strings — same framework)
`help bat cd cfg clear config dsp fba get ls os persparam ping ptest ptp ptpt pwd rd set shell sync sys telnet test warp wr`
+ uTrack extras above. get/set/cd/ls/pwd navigate the CnE tree (`sds://cne/…`,
`sds://static/…`); `get` prints `Name="x", Value=…`; handlers live in the shell
"static" directory (registered from KnOS init FUN_001d379c/FUN_001de934 chain —
usage strings at 0x1d38xx, names in `sdsShell ready for commands` region).
`reboot`/`restart in update mode` strings exist (sys commands);
`fs ls` exists but errors "no filesystem available" unless a volume is mounted
(file-backed FS goes through the `file`/`FileAccessHandler` jobs instead).

---

## 2. CnE attribute tree

- The CnE ("Control nEtt"?) tree is the master config DB: nodes = directories/leaves;
  leaves are `CnE_SystemDataProxy` objects (RTTI `19CnE_SystemDataProxy`,
  `21SystemDataProxyCommonI*E`, `15SystemDataProxyI*E` per type).
  `get`/`set`/`ls`/`cd` walk it; persisted via `persparam` → config flash
  (`PersCne::put CnE entry in Pers Param`).
- Default model = **serialized blob at file 0x2E8BFB+** (packed tree: name fragments
  + type + default value; built into the static SystemDataDirectory at boot).
- Live tree (dumped via telnet `ls -e -r cne`, `utrack_cne_tree.txt`):
  - `DisplaySettings/` V5_Ratio, LCD_Bias, Volume
  - `AppSettings/Global/` SwVersion, BusBySwitch, BusType, StreamingInterface,
    SampleRate, DigitalIOFormat, SyncMode, USBConfigurationId, EnableMIDI,
    FootSwitchFunction, ClockSourceStandAlone/Sync/Interface, uTrackName,
    uRemoteId, DeviceMode
  - `AppSettings/MixerControl/` CH01..24_{Fader_dB,Pan,Mute}, MonitorBoost
  - `AppSettings/Recording/` SampleSize, TrackCount, SampleRate, PreRecording
  - `AppSettings/Playback/` PlaybackMode, StereoOutputs96K, StereoOutputs,
    OutputAttenuation, AutoPlay, MultitrackOutputsPostFader,
    StereoOutputsPostFader, Midi/{MidiThru,MidiOffset}
  - `AppSettings/AnalogInputs/` Inputs00to07, Inputs08to15, Inputs16to23 (hw desc, NOT the selector)
  - `AppSettings/AudioLan/` InterfaceAsInput
  - `AppSettings/Adat/` Input, Output48k/96k Outgroup*
  - `AppSettings/Madi/` Input, Mode, Frame, Output48k (8 groups), Output96k (4 groups)
  - `AppSettings/SavedSettings/` (mirror persisted), `FileStreaming/` (MaxHeapSize,
    MaxNoOfEncoders/Decoders), `USBDecoder/` (PlayoutDelay, NoOfElementsInQueue),
    `StreamingRingbuffer/` (MaxDelay), `DSP/` (HWPacketDelay_*), `Sync/` (Mode,
    GroupId, SlaveIndex, Slave_1..3_Id), `CopperLan/` (Enabled, DuplicateNumber/Mode,
    BrandID/Name, ModelID, Contact, Midi/*)
  - `USB/` DeviceInfo (VID 0x1511 PID 0x0043, "Archwave Switzerland"/"uTRACK24"), DFU
  - `System/Threads/<name>/` stackSize, priority, preemptThreshold, timeSlice, memType —
    **authoritative thread list** (default, cmdline_setupThread, USBDrvRxThread,
    USBStackImpl, PTP, PTP Timer, PTP Forwarder, lwIP, EthernetReceive,
    EthernetTransmit, EthernetLink, USB Decoder, RTP Decoder, DSPProcess,
    Explicit Feedback, Main UI Timer, UI Main Control, HalUIControl,
    FileAccessHandler, StreamingMessenger)
  - `Networking/IpCfg/` DeviceName + Config0 (DHCPClient, IP, Mask, DefGW, DNS, Hostname, AppendMAC)
  - `FirmwareUpdate/` KeepBootloader; `Config/` Name, Version
- Path resolution: `get cne/AppSettings/…` and `get /cne/…` both work; setters route
  through `CnE_Property`/SystemDataService which fans out to owning objects
  (GeneralSettings FUN_000937f4-family writes `gs+0x1ec+i` then commits to HWCom;
  `DSPAppControl_Custom::*` read/write most AppSettings leaves — see error strings
  `ERROR: DSPAppControl_Custom::…` for its responsibilities).

---

## 3. CopperLan/CHAI control & notification map

### Publisher side
- `uTrackCopperLan` object (singleton; `uTrackCopperLan::getReference`), CHAI core
  (`CHAIoNet_InitEx`, `CHAICore`, `CLPCHAIMsgFIFO`, `CLPToCHAIMsgFIFOMtx/Evt`),
  VNM stack (`VNMCore`, `VNM Eth Bckg`, `VNM KeyVerif`, `VnmCHAICon`, `CLPLnkCtlr`).
- **Declaration function = FUN_000a6464** (called from FUN_000a5dfc during CopperLan
  init): creates member-variable groups via `vt[0xa4]` and controls via `vt[0x84]`/
  `vt[0x80]` — signature `(owner, "Name" or &name, ctrlId, flags, parentHandle,
  fmtIdx, fmtHi, fmtLo)` returning a handle stored at `uTrackCopperLan+0x138..0x5xx`.
- Wire write path (uRemote→device, TLV 4337/4237): dispatcher **FUN_000ace70**
  (binary compare tree on ctrl id — compare literals resolved: DAT_000ad5c4=
  0xb312 (top of MADI block), ad5c8=0xb204, ad5cc=0xb103, ad5dc=0xd010 solo base,
  ad5e0=0xd030 mute base, ace68=0xd050 pan base, ace6c=0xd070 fader base,
  ac0c8=0xd001; apply fns FUN_0009321c clock, FUN_000945d8 footswitch,
  FUN_000957bc DHCP, FUN_000b810c sample-rate…); numeric path **FUN_000acd6c**
  (0xb201→FUN_0013e424 OutputAttenuation, 0xb202→FUN_0013e17c MIDI-Offset,
  0xd050..0xd067→pan FUN_0013e998, 0xd070..0xd087→fader FUN_0013e9f8).
- Read/announce path: **FUN_000adab0** (get current value), **FUN_000aa898**
  (group/member enumeration incl. 0xb210/1/2 getters FUN_000943b4/0x93374/0x93358,
  0xc010 file-select via list at +0x810), **FUN_000ab3f8** (0xf0xx status strings).
- Meter push: FUN_000f6810→FUN_0005b438 fans peak buffer + status word 0x60401A98 to
  subscriber list ctx+0x408 (see ghidra_utrack_dsp.md §Key state).

### Declared controls (FUN_000a6464 — COMPLETE)
Groups (vt[0xa4], arg2 = group node id): `KA_Status` (root), `Meters`,
`KA_Controls`, `Files`, `Settings` → sub-groups `General`=1, `Recording`=2,
`Playback`=3, `Inputs`=4, `MADI`=5 (4/5 only when digital card present; sub-groups
for 48k×8 / 96k×4 / ADAT×3 out-groups).

| ctrl | name | ctrl | name |
|---|---|---|---|
| 0xf000 | Current song | 0xf020 | Recording name |
| 0xf001 | Next song | 0xf021 | Recording time |
| 0xf002 | Song length | 0xf022 | Remaining recording time |
| 0xf003 | Song sample rate | 0xf023 | Recording markers |
| 0xf004 | Song resolution | 0xf024 | Recording dropouts |
| 0xf005 | Song track count | 0xf030 | Current Playlist |
| 0xf006 | Remaining song length | 0xf032 | Playlist current start mode |
| 0xf007 | Played song length | 0xf033 | Playlist current start time |
| 0xf008 | Playback loop start | 0xf040 | DateTime |
| 0xf009 | Playback loop end | 0xf050 | UTrack Operation Status |
| 0xf00a | Playback Channels | 0xf060 | Error Code |
| 0xf00b | Markers | 0xf00c | Sync |
| 0xf010 | UTrack State | 0xf011 | Pre Rec Play State |
| 0xf012 | Player Mode | 0xf013 | Playback In Loop |
| **meters** | | | |
| 0xe000..0xe019 | 26 level meters (peak array, ARM-computed) | | |
| **KA_Controls** | | | |
| 0xd000 | Action (transport 3=stop 4=play 5=rec) | 0xd001 | Playback cursor (locate, text) |
| 0xd002 | Loop start cursor | 0xd003 | Loop end cursor |
| 0xd008 | Playlist songs | 0xd009 | Exit Playlist Mode |
| 0xd00f | Current Controller | 0xd088 | Mixer Configuration |
| 0xd010+ch | Solo ch (btn, 2=toggle) | 0xd030+ch | Mute ch (btn, echo On/Off) |
| 0xd050+ch | Pan ch (0x8000=center) | 0xd070+ch | Fader ch (u16) |
| **Files** | | | |
| 0xc000 | Current song path | 0xc001 | Current dir |
| 0xc003 | Current Dir Names | 0xc004 | Current Dir Types |
| **Settings/General** (grp 1) | | | |
| 0xb000 | Clock source | 0xb001 | Foot switch |
| 0xb002 | DateTime | 0xb003 | DHCP |
| 0xb004 | Static IP | 0xb005 | Subnet Mask |
| **Settings/Recording** (grp 2) | | | |
| 0xb102 | Sample Rate | 0xb103 | Resolution |
| 0xb104 | Track count | 0xb105 | Pre recording |
| **Settings/Playback** (grp 3) | | | |
| 0xb200 | Auto play | 0xb201 | Output Attenuation (−30..0 dB) |
| 0xb202 | MIDI Offset (−1000..1000 ms) | 0xb203 | Folder Mode (playback mode) |
| 0xb204 | 88/96kHz Stereo Outputs | 0xb205 | 44/48kHz Stereo Outputs |
| 0xb206 | Stereo Post Fader | 0xb207 | Multitrack Post Fader |
| (queried) | 0xb210/0xb211/0xb212 | getters FUN_000943b4/FUN_00093374/FUN_00093358 | |
| **Settings/MADI** (grp 5, card-present only) | | | |
| 0xb300 | Input | 0xb301 | Mode |
| 0xb302 | Frame | 0xb320+2i | "88/96kHz Out NN-MM" (i=0..3) |
| 0xb330+2i | "44/48kHz Out NN-MM" (i=0..7) | | |

- **Unmapped families**: the uTrack24 itself declares **only** b/c/d/e/f + the
  conditional MADI b3xx. The `0x4cxx` seen in uRemote notes are **struct offsets in
  uRemote.exe, not device ctrl ids**. Families 0x8xxx/0x9xxx/0xaxxx are not declared
  anywhere in this firmware — if observed on the wire they belong to other CHAI
  members (AudioLAN card, CPvNM manager) or to CHAI internal handle space
  (declaration returns handles at `+0x138..`, distinct from ids). The `0xf0xx` block
  is read-only status (node 0), `0xe0xx` meter push (node 1), `0xd0xx` write
  transport+mixer (node 2), `0xc0xx` files (node 3), `0xb0xx` settings (node 4).

---

## 4. Task / thread table (KnOS, BridgeCo RTOS)

- Thread spawn primitive **FUN_001cf8e8**(tcb, name, entry, arg, stack, size, prio,
  thresh, slice, flags); C++ wrapper **FUN_0006f700** (thread object ctor + spawn —
  name arg directly visible). "Could not create boostrap thread" if it fails.
- Creators (names resolved from decompiles):
  | create site | thread(s) | entry literal |
  |---|---|---|
  | FUN_00048cd0 | **bootstrapThread** | *DAT_00048e08 = rt 0x60053490 -> file **0x4d50c** |
  | FUN_001ee62c | **coreThread** (KnOS core) | DAT_001ee6a8 |
  | FUN_001a9ca0 | **ShellThread** (SDS) | obj+0x30 |
  | FUN_001d0a7c | System Timer Thread | DAT_001d0b2c |
  | FUN_00068008 | HalUIControl | |
  | FUN_0012d6f4 | ReadDirectoryTypeThread | |
  | FUN_0006a740 | MixerControl / MixerUpdater | |
  | FUN_000c6440 | USBDrvRxThread | |
  | FUN_001458f8 | ExtJobQueue / IntJobQueue (FileAccessHandler) | |
  | FUN_001b08ac | WebServer (http_tcp) | |
  | FUN_001af480 | WebSocket | |
  | FUN_000b55c4 | LCDDriverTestApp / LCDDisplayThread | |
  | FUN_00127714 | TelnetServer (ByteStream, TelnetShell_Event) | |
  | FUN_0012eb70 | SD-Ram Stress Thread | |
  | FUN_0001debc | VnmTcpListener | DAT_0001e0b8 |
  | FUN_00022354 | VNM_Receive | DAT_00022564 |
  | FUN_000450d8 | VnmUdpListener | DAT_00045188 |
  | FUN_0001e1fc | VnmCHAICon | DAT_0001e304 |
  | FUN_0015d3f8 | CHAI Thread / VNM Core / VNM Eth Bckg / VNM KeyVerif / CLPLnkCtlr | |
  | FUN_00179820 | Timer/_Event | |
  | FUN_00065060 | streaming thread (iI/s_Streaming) | |
- Other named threads in strings: PowerManagerThread, Init Sequence Thread,
  LogFileThread, PanicResetThread, Descriptor Sequence Thread, Pulse Generator
  Thread, hub descriptor thread, HTTP Handler Thread, HostDisconnectThread,
  MidiFillBufferThread, MidiGetSysexDataThread, MidiUpdateEventThread,
  MidiPreLoadNextFileThread, FileTestThread, tcpip_thread (lwIP), spi slave thread,
  m_pFunctorThread (12WorkerThread/13FunctorThread RTTI).
- Config/priorities live in CnE `System/Threads/*` (see §2): priorities 7 (DSPProcess)
  …24 (cmdline_setupThread, PTP Timer); stacks 1–4 KiB.

---

## 5. Class catalog (GNU ARM EABI RTTI)

395 length-prefixed typeinfo names in rodata (no MSVC `.?AV`). Key families:

- **Streaming/DSP**: `10DSPProcess`, `17DSPProcess_Custom`, `18BeBobStreamProcess`,
  `13StreamProcess`, `21StreamProcessSettings`, `22StreamProcessParameter`,
  `25StreamProcessBeBobCommand`, `27StreamProcessBeBobCmd_Start`,
  `26StreamProcessBeBobCmd_Stop`, `31StreamProcessBeBobCmd_Configure`,
  `30StreamProcessBeBobCmd_Shutdown`, `29BeBobStreamProcessCapabilites`,
  `25StreamProcessCapabilities`, `26BeBobStreamProcessSettings`,
  `21BeBobDSPCmd_Configure`, `22CustomDSPCmd_Configure`,
  `24StreamControlServiceImpl`, `21IStreamProcessControl`,
  `29StreamingQuery_GetLevelMeters`, `35StreamingQuery_PrintFileCoderStatus`,
  `28StreamingConfiguration_Mixer`, `33StreamingConfiguration_Ringbuffer/
  USBDecoder/USBEncoder`, `34StreamingConfiguration_FileDecoder/FileEncoder`,
  `38..66StreamingConfiguration_*` (Midi/Audio/MonoMulti decoders, SaveCue,
  SetMarks, StartPreRecording, SwitchFiles, SetupNextFile, …)
- **File/take objects**: `11FileDecoder`, `15WaveFileDecoder`,
  `19WaveFileDecoderBase`, `24MonoMultiWaveFileDecoder`,
  `FileAccessJob_{Move,Stat,Blank,Format,Remove,GetFree,MakeDir,OpenDir,ReadDir,
  OpenFile,ReadFile,SeekFile,SyncFile,TellFile,CloseFile,Container,WriteFile,
  GetFileSize}` + `13FileAccessJob`, `21FileSystemServiceImpl`, `18IFileSystemService`
- **HW/AV**: `HWCom` (900-B object, ctor FUN_0017930c, ptr 0x60404068),
  `13HWAVInterface`, `15HWGPIOInterface`, `17HWUnusedInterface`,
  `14HWAVPLL_Analog`, `15HWAVPLL_Digital`, `15HWAVPLL_Virtual`,
  `19HWAVPLL_Synthesizer`, `7HWAVPLL`, `18AudioHWServiceImpl`, `AvAudio{Input,
  Output}{,Fifo,Packet}Processor`, `Framer{Input}Processor`,
  `DeframerOutputProcessor`, `16DMAGeneratorSulu`, `7SuluDMA`
- **USB**: `12USBStackImpl`, `15USBDeviceClient`, `16USBBusDriverImpl`,
  `16USBDeviceHandler`, `17USBDescriptorBase`, `17USBHostController`,
  `20USBHighSpeedCtrlImpl`, `21USBEndpointController`, `23MassStorageDeviceClient`,
  `USBMidi{In,Out}JackDescriptor`, `USBAudioClass*` descriptor blocks,
  `Custom_InputFeatureUnitBlock`, `25USBStreamingConfiguration`
- **UI**: `13UIMainControl`, `18UIControl_uTrack24`, `16UIUtils_uTrack24`,
  `16UIUtils_Recorder`, `15UIStateSettings`, `UIState_{StartUp,Playing,Recording,
  CheckDisk,IdlePlayer,IdlePlaylist,PlayingHead,PlayingLoop,ChannelFocus,
  SettingsMenu,UtilitiesMenu,AnalogInput,MadiSettings,AdatSettings,
  MadiOutputSettings,AdatOutputSettings,SyncSettings,IPSettings,
  DateTimeSettings,PlaybackSettings,RecordingSettings,InterfaceMode,
  PlaybackMultiTrackModeSettings,PlaybackStereoModeSettings,PreparePlayer,
  PreparePreRecording,SystemDetails,FirmwareUpdate,BrowseFolder,TreeMenuBase,
  uTrack24Base}` + views (`*View`, `19UILevelMeterHandler`)
- **CnE/persist**: `19CnE_SystemDataProxy`, `14CnE_SystemData`,
  `23CnE_SystemDataDirectory`, `26Static_SystemDataDirectory`,
  `19SystemDataDirectory`, `19SystemDataProxyBase`, `14BaseSystemData`,
  `21SystemDataServiceImpl`, `18ISystemDataService`, `CnE_DynContentSysDataMgr`,
  `12CnE_Property`, `Property*/NonAtomicProperty*` typed wrappers,
  `ConfigFlashEntry_{Info,AddSibling,ChangeValue,RemoveSibling}`
- **CopperLan/sync**: `uTrackCopperLan` (above), `uTrack24SyncCL`,
  `CopperLanConfiguration{,Base,Custom}`, `StdCopperLanConfiguration`,
  `CTaskRemoteDeviceDelayedNotification`, `18PTP2_KnOS_Callback`
- **Misc**: `9AudioUnit`, `9MixerUnit`, `17ClockSourceEntity`,
  `19ClockSelectorEntity`, `MidiPlug`, `8SpdifOut`, `6LineIn`, `7LineOut`,
  `7MidiOut`, `16AudioDeviceBlock`, `17DataStreamManager`,
  `22TelnetShellServiceImpl`, `19ITelnetShellService`, `15ResourceManager`,
  `32UserResourceRetrieverServiceImpl`

(Full typeinfo-name list: `research/notes/fw_rtti_names.txt`, 395 entries.
Resolved typeinfo objects (GNU EABI ti={ti_vtbl*,name*}): `18BeBobStreamProcess`
ti @0x2ce6f0, `17DSPProcess_Custom` ti @0x2ce5c4, `11FileDecoder` ti @0x2ce070;
HWCom/FileEncoder/DSPAppControl/uTrackCopperLan typeinfo names not in rodata
(objects identified by ctor/site instead - HWCom ctor FUN_0017930c,
uTrackCopperLan = FUN_000a6464 owner). Vtable->ti back-link scan found no
candidates; resolve per-class vtables on demand with RttiScan.java.)

---

## 6. Boot / init sequence

1. **BcOd header @0** → boot-header block @0x40–0x93 ("uTRACK24", sigs, len) →
   **reset stub @0x94** `B 0xbc` — early ARM init (not function-bounded in Ghidra;
   overlapped instructions block FuncAt — disasm manually if needed).
2. **bootstrapThread** created by **FUN_00048cd0** (entry = *DAT_00048e08): allocs
   0x20-B msg + 0xb8-B TCB, spawns via FUN_001cf8e8, then joins/signals a
   semaphore-chain (FUN_001cf70c/…cfb1c/…cfcb8/…d0518) — classic "wait for children".
3. Init order observed in registrar chain (BeBoB_App, **FUN_000f8fcc**):
   app object alloc (`FUN_000b0f28`, "BeBoB_App", stack 0x1000) → CnE/sysdata
   wiring → mixer ctor (FUN_000ec000 sink, 26-ch records, MonitorBoost) →
   register all SDS commands (§1) → preset monitor/bus faders ch24/25 to −∞ →
   `FUN_00178f04()` lazy-create **HWCom** (900 B, ptr 0x60404068) →
   read digital board id `FUN_00178208` → status word bits8-10.
4. Service/module inventory: FUN_001c83e4–FUN_001cd890 family registers every module
   name/version via FUN_001f0168+FUN_001c70ac ("uTRACK24_App (Release) 04218
   Sep 25 2018 15:19 trunk_04218", "Board HAL uTRACK_24", UIService,
   RavennaConfiguration, UA_ChannelFeatureUnit, SuluModule…). KnOS groups via
   FUN_001d379c (Copyright banner Archwave, os/sys/test).
5. Threads spawned per §4; CopperLan init → FUN_000a5dfc→FUN_000a6464 declares the
   control model (§3); DSP streaming autostart = FUN_000f5eb4 (event-driven;
   changeSyncMode FUN_000f6be0 → shift-reg SyncSel @HWCom+0x80).

### Option-card detection (MADI vs AudioLAN vs ADAT)
- Hardware truth = **SPI shift-register IN image** in HWCom (ctor FUN_0017930c opens
  /dev/spi0, builds HWComSPI/HWComI2C/"HWCom Unmute Timer"): IN bytes at ctx+0x84..86.
  - `FUN_001781f8` = analog board id (IN bits0-2); `FUN_00178208` = **digital board
    id** (IN bits4-6) → stored in status word bits8-10; printed by `madi info`
    ("Analog Board Id is %d"/"Digital Board Id is %d").
  - changeSyncMode/FUN_000f6be0 branches on digital board id to drive ctx+0x314
    (MADI drv) vs ctx+0x340 (ADAT/2nd drv); MADI/AudioLAN presence gates the
    CopperLan `Inputs`/`MADI` groups (§3) and the `maditest`/`audiolan` commands.
- `HWVS` persparam = HW revision (errors "HWVS not found - use HWVS=2" in
  UIUtils_uTrack24/UIMainControl/HWCom → default board revision 2).
- Option-card comms for AudioLAN = SPI slave link (`/dev/spiSlave`,
  "spi slave thread"); MADI/ADAT = same SPI shift register + dedicated driver objs.

---

## Key singletons / entry points (quick index)
| what | file addr | rt |
|---|---|---|
| reset stub | 0x94 | 0x60005FB8? |
| bootstrapThread creator | FUN_00048cd0 | 0x6004EC54 |
| SDS registrar (BeBoB_App init) | FUN_000f8fcc | 0x600FEF50 |
| cmd desc fill / attach / group-add | FUN_0007f01c / FUN_001a7b9c / FUN_001c70ac | |
| ShellThread (cmd loop) | FUN_001a9ca0 | 0x601AFC24 |
| thread spawn / wrapper | FUN_001cf8e8 / FUN_0006f700 | |
| app singleton getter | FUN_000f8ee0→FUN_000b0f18 → *(0x60403AA4) | |
| HWCom getter / ctx | FUN_00178f04 → *(0x60404068) | |
| CHAI declare-all-controls | FUN_000a6464 ← FUN_000a5dfc | |
| CHAI write dispatch / num-write | FUN_000ace70 / FUN_000acd6c | |
| CHAI read/enum dispatch | FUN_000adab0 / FUN_000aa898 | |
| file-group registrar | FUN_00026578 | |
| CnE default blob | data @0x2E8BFB | |
| status word | — | 0x60401A98 |
| meter ping-pong | — | *(0x60405A1C) ↔ 0x604987BC |
| DSP coeff block | — | *(0x6049888C) |

## Open gaps (for next sessions)
- get/set/ls/cd/pwd/bat/clear/rd/wr/shell built-in handlers: registered inside the
  shell's "static" tree from KnOS init chain (FUN_001d379c + FUN_001de934 +
  FUN_001d3884 + FUN_00029d0c); resolve each group's children via FUN_001f488c
  callsites (FUN_001f488c itself @FUN_001f488c signature (name,tag,desc,parent)).
- 25 ATTACH/GROUP_ADD callsites live in code without function boundaries
  (? bucket in CmdScan) — mostly CnE tree builders; disasm if a missing cmd appears.
- The 3 unnamed `file` subcommands (vt 0x602e24c0/0x602e2538/0x602e24ec).
- Reset stub @0x94–0xbc: overlapped-instruction conflict; needs manual disasm to
  name PLL/SDRAM init order (KnOS (Release) + SDRAM refresh strings nearby).
- 0x8xxx/0x9xxx/0xaxxx CHAI ids: not declared by uTRACK24 firmware — likely other
  members'/CHAI-internal handle space; revisit if a capture shows the device
  emitting them.
