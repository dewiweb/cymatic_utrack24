# uT24 AudioLAN firmware 4078 — GLOBAL architectural map

Ghidra 12.0.4 project `research/ghidra/utrack_fw_proj` (project `utrack_fw`),
program `uT24_Audiolan_Release_ 4078.bcd`, loaded flat at base 0 (single `ram`
block 0x00000000–0x270bff, 7444 functions after BulkDisas).
**Address rule**: runtime addr = file_offset + **0x60000000** (NOT the uTrack
+0x5F84 — verified via literal pools: `0x60241f48` → file 0x241f48).
Below: file offsets; runtime in parens where useful. Thumb entry points are
stored odd (e.g. `0x60173d97` → file 0x173d96).

Extends `ghidra_audiolan.md` (JSON API, SDP parser, SDS basics) and
`ghidra_audiolan_thumb.md` (message dispatch, IGMP, decoder model). Mirrors
`ghidra_utrack_map.md`. New tools this session: `SdsScan.java`,
`RttiScanAL.java` (in `research/tools/ghidra/`). Dumps: `al_*.txt`.

```
Image layout (BcOd container):
0x0000  BcOd header: magic 'BcOd', ver 1, date "20171113130227"
0x0040  2nd-stage boot header: "uT24_Audiolan"@0x70, sig 0xaaaa5555@0x80,
        1@0x84, 0xa5a5a5a5@0x88, load 0x40e000@0x8c, 0x2e6@0x90, CRC@0x94
0x0098  ENTRY: ea000008 B +0x20 -> 0xc0 (ARM reset stub)
0x00c0… ARM code (KnOS, app, CnE, HTTP, SDS, PTP-arm part)
~0x160000+  mixed ARM+Thumb "Streaming Framework" module (RAVENNA/AES67,
        RTSP client+server, SIP, lwIP, mDNS, IGMP, RTP decoders/encoders)
0x1e5xxx-0x1e8xxx  flat error-catalog string blob (indexed, no pointers)
0x22xxxx-0x26xxxx  module strings (TRACE/ERROR, RTSP methods+reasons,
        SDS usage strings, JSON keys, ARC error strings)
0x250xxx-0x272xxx  vtable/descriptor region (thread+class vtables 0x25f088+,
        leaf-class descriptor array 0x26030c-0x260e78, SDS objects 0x261xxx+,
        type-name strings 0x2577a5+, crypto tables ~0x22dxxx)
bss   rt 0x6040xxxx  (singletons, SDS descriptors, queues)
```

Shared primitives (same framework as uTrack):
`FUN_0006e06c` = thread spawn wrapper (parent,name,arg,…,stackSize) — every
named thread goes through it; `FUN_00111154` = timer create; `FUN_001a07ac` =
lock create; `FUN_001a0808`/`FUN_0010f82c` = heap alloc; `FUN_001a0700`/
`FUN_001a0d18` = lock/unlock; `FUN_00003960` = strcmp; `FUN_000028a4` =
log/puts; `FUN_000028d8` = sprintf; `FUN_000b9aac` = global config/outputs
object getter (~40 callers); `FUN_0014d890` = **SDS command register**;
`func_0x0016dd44` = publish named object into global service directory;
`func_0x0016ddfa` = once-guard (like __cxa_guard); `FUN_000151a4` = open,
`FUN_000153bc` = read, `FUN_0001545c` = ioctl.

---

## 1. SDS command registry

### Mechanics (different from uTrack!)

- Descriptor = 5-dword record in **BSS** `{exec*, name*, desc*, usage*, argc}`.
  Filled once per boot inside a once-guard (`*flag&1==0` + `func_0x0016ddfa`),
  then `func_0x0016dd44(desc,…)` (publish) and/or `FUN_0014d890(desc,0)`
  (attach to shell tree). `exec*` points at a per-command executor object
  (vtable-ish; slot 0 = the exec thunk that parses argv).
- Two registrar styles:
  1. **App style** (dsp/sync/config/ptest): function takes `r0=desc` from
     caller, `stm desc+4 {name,desc,usage,argc}` (adr inline strings), loads
     executor via literal, `blx` a Thumb attach thunk. Called from
     **FUN_000b8bc0** (BeBoB_App init) with desc = field inside the app object.
  2. **Static style** (ptp/telnet/warp/fba/…): descriptor is a fixed BSS
     object (`DAT_xxx504` = 0x604xxxxx), filled under once-guard, then
     `func_0x0016dd44` + `FUN_0014d890`.
- Shell loop = **ShellThread** spawned by FUN_0014e8a4 ("ShellThread",
  "SystemDataService"); `sds://` prompt strings @0xd9804/0x227cb4/0x26b2c7.
- Full registrar scan (callers of FUN_0014d890/func_0x0016dd44):
  `al_sds.txt`, `al_th2.txt`.

### Registry (live help-verified set + registrars)

| cmd | registrar / exec | notes |
|---|---|---|
| sync | FUN_000c8fb0, exec-obj @0x2641d0 → thunk 0x170440 | `sync line\|ptp\|wclk\|ext\|reset` — writes sync source @0x60244730 |
| dsp | FUN_00085bf0, exec-vt @0x261508 | `dsp 'stop\|44.1\|48\|88.2\|96'` (vt = 12×same thunk 0x173d96 T) |
| config | FUN_000cad14, exec-vt @0x2644a8 | "set configuration" |
| ptest | FUN_000e275c, exec-vt @0x265648 | "execute production tests" |
| fba | FUN_000e7e0c, exec @0x265b00 | "file allocator" |
| telnet | FUN_00042618, exec @0x2613b8 | `telnet <start\|stop>` |
| ptp | FUN_00037704, exec-vt @0x25f594 | "ptp shell command" (+2nd descriptor 0x6041d260) |
| ptp_sync | registrar @0x377e0, exec-vt @0x261890 | "PTP sync" |
| ptpt | Thumb @0x1703ce | "change PI values" (PTP servo PI tuning) |
| sys | FUN_0004a894 | group "System commands" |
| framer | FUN_0006fb8c | "framer routing and internal statistics" (+warp) |
| deframer | FUN_00085f24 | "deframer routing and internal statistics" (+warp) |
| warp | FUN_0006fb8c / FUN_00085f24 / FUN_0014c354, exec @0x25f720 | "warp commands" (WARP DSP) |
| usb×3 | FUN_00098574 (14d890 ×3) | USB driver cmds (also spawns USBDrvRxThread) |
| AudioHWService×3+ | FUN_000b462c (14d890 ×3 + attach) | audio HW service cmds |
| shell clear pwd get set ls cd | **FUN_0017e59c** (7 attach+register pairs) | the core navigation set |
| os sys test | static `{desc,vtable,name}` records @0x1823c0/0x1823d8/0x1823f4 | group vtables @0x250d4/0x250e0/0x24aec; registered ~0x182324-0x18237c |
| help bat rd wr cfg persparam ping showtree | KnOS "static" tree (ShellCommandInit config table; usage strings @0x228ffc-0x22a1xx; name/desc adjacent inline e.g. 'showtree'@0x227d70, 'persparam'@0x227e86, 'bat'@0x2290e0/0x2290e4) | handlers inside group vtables / exec thunks — same KnOS set as uTrack |
| persparam | — | full arg list in help (`rd/rds/rdss/wr/wrs/wrss/wrb/wrbs/clr/clrs/check/reset`) — flash config access |
| audiolan | — | **NOT present** (uTrack-side only; drives this card over SPI/ARC) |

### SDS groups/branches
`sds://static` (KnOS built-ins) + `sds://cne` (config tree below). `ls -e`
shows type names like `19CnE_SystemDataProxy` (display strings, not RTTI).

---

## 2. CnE attribute tree

Same model as uTrack: master config DB; leaves `19CnE_SystemDataProxy`;
`get/set/ls/cd` walk it; `set` writes post async notifications to owning
objects (no commit step). Live dump: `research/notes/evidence/audiolan_sds_tree.txt`.

Branches & owners:
- `AppSettings/Global` — SwVersion, StreamingInterface(=ETHERNET), SampleRate,
  GPIOUsage(=uNET), AvPort* (format/align/LRCK pol/MCLK ratios/clk edges),
  SyncMode=3, Shell=enable, **ModelName=uT24_AudioLan, ManufacturerName=cymatic
  audio, WebIconPath** (strings written into app obj by FUN_000b8bc0).
- `AppSettings/Bonjour` — SessionUpdateInterval=5, RTSPReconnectionTime=60.
- `AppSettings/RavennaConfiguration` — User_SyntonizedMode/PlayoutDelay(4800)/
  SampleSize(24)/AudioMode(1), ValidSamplingRates, MaxNoOfEncoders/Decoders=4,
  PlayoutDelayMin/Max, Input/OutputDelay{1x,2x,4x}FS, MaxCPULoad,
  MeasurementIntervalCPULoad.
  - `PTP/` — DomainNumber, Priority1/2(200), LogAnnounce/SyncInterval, TTL,
    SlaveOnly=1.
  - `AudioModes/Mode0` — "24CH InOut", ActiveStreams 1-5, ActiveOutputGroups
    1-3, AVIn/Out 24ch.
  - `OutgoingStreams/Stream1-5` — StreamID, User_StreamName ("uT24 channels
    1-8"…), AppendMAC, User_Enabled, User_AutomaticConfigEnabled,
    User_DestAddr/Port (239.69.10x.220:5004 / 239.8.4.201), User_SIPIdentity,
    EnabledIn{1x,2x,4x}FS, SamplesPerPacket{48,96,192}, NoOfChannels(8/8/8/4/4),
    ChannelRouting, User_ChannelName0-7, User_TTL.
  - `OutputGroups/` — User_SIPIdentity=receiver; `OutputGroup1` (Enabled
    1x/2x) → `Output1-24`: User_OutputName, **User_SourceStreamName,
    User_SourceChannel**, OutputChannel, **ManualSDP, ManualSDPChannel**.
- `AppSettings/DSP` — HWPacketDelay_{32k,44.1_48k,88.2_96k,176.4_192k}=200.
- `AppSettings/ARC` — Enabled=0, Transport=SPI; `SPI/` RequestPinGPIONumber=4,
  RequestPinActiveLevel=high; `UART/` Interface, Baudrate=19200, Parity.
  `ARC/UDP` exists too (DataServerPort, RegistrationServerPort,
  UDPDestinationIPAddress/Port — used by ARCTransportUDP ctor).
- `AppSettings/CopperLan` — Enabled=1, DuplicateNumber/Mode, BrandID/Name,
  ModelID, Contact; `Midi/` Enabled/Mode/Name/Device=/dev/uart0.
- `AppSettings/SAP` — MulticastAddress=239.255.255.255, Port=9875,
  AnnouncementEnabled=1, BrowsingEnabled=0, SessionTimeoutSeconds=3600.
- `System/Threads/*` — authoritative thread list w/ stackSize, memType,
  priority, preemptThreshold, timeSlice (+ StreamingMessenger
  MaxQueuedMessages=128): default, isoStateMachine(14), cmdline_setupThread,
  PTP(19), PTP Timer, PTP Forwarder(19), lwIP(13,ahb), EthernetReceive(7),
  EthernetTransmit(7), EthernetLink(22), RTP Decoder(12,ahb,512B),
  DSPProcess(6,ahb), CPU Load Supervisor(5), RavennaController(21),
  TimerHandler, StreamingMessenger(23), ARCTransportSPI(24).
- `Networking/IpCfg/Config0` — DHCPClient=1, IP 192.168.100.220, Mask, DefGW,
  Proxy*, DNSSrv1/2, Hostname=uT24-AudioLan, AppendMAC.
- `FirmwareUpdate` — KeepBootloader; `Config` Name=uT24_AudioLan, Version=6.

Persistence: `persparam` cmd → flash params; FlashPartitionManager error
strings @0x2285d4+ ("b1 Bootloader First Level / b2 / ap…", MetaInfo,
CnE-directory check "isSDSDirectoryValid"); ConfigFlashEntry_{Info,AddSibling,
ChangeValue,RemoveSibling} classes; "Factory default" reset flow @0x228912+.
`setPersParam` string @0x26c04e.

---

## 3. RTSP / SIP implementation

### RTSP server (port 554) — "embedded_RTSP_Server_v1" @0xccdb6

- **Object**: `RtspServer` (0x23c B, lazy singletons FUN_0006120c /
  FUN_000425c4 → ctor **FUN_00054d88**; callers FUN_000e0314 (network
  orchestrator) & FUN_000e1494). Thread vtable @0x25f088.
- **Threads**: `RtspServerThread` (stack 0x2000, spawn FUN_0006e06c) +
  `RtspServerTimer` (FUN_00111154). Also `RtspServerSession` objects.
- **Method table** @0x26b636+: RECORD, DESCRIBE, ANNOUNCE, PAUSE, TEARDOWN,
  SETUP, GET_PARAMETER, SET_PARAMETER, OPTIONS, REDIRECT, PLAY + full
  status-reason strings (all RTSP/1.0+1.1 codes) @0x26b696-0x26b9b4.
- **Request-line parser/dispatch = FUN_00054a84** (Thumb): tokenizes method,
  strcmp against a 13-entry name table (ptr @0x54d6c), unknown → status 405
  (`0xff+0x96`→[r0+0x10]); methods 0xb/0xc special-cased.
- **Request classes** (invokeRequest errors @0x23c387+):
  `RtspServerRequestGetParameter`, `RtspServerRequestDescribe` ("Cannot get
  SDP description for url %s"), `RtspServerRequestSetup` ("Cannot create new
  RTSP session" / "Cannot parse RTSP client transport parameter"),
  `RtspServerRequestPlay`, `RtspServerRequestTeardown` (all "454 session not
  found" paths). Only these 5 have server handlers; Public header observed
  on the wire: `DESCRIBE, SETUP, TEARDOWN, PLAY`.
- **Response builder = FUN_0005369c** (Thumb): emits "RTSP/1.0 <code>
  <reason>" from the {u16 code, str} status table (bss 0x60402870), session
  id, Content-Length, body.
- DESCRIBE only serves **existing** sessions/streams (454 otherwise) —
  matches observed behavior. Session = binding of a local source stream to
  an RTSP client (unicast pull) — SDP generated from the OutgoingStreams
  CnE config.

### RTSP client — the RAVENNA-native subscribe path (receiver side)

- **FUN_00078f1c = RTSP client DESCRIBE** (callers FUN_00078b40,
  FUN_000787b0 — session state machine):
  1. `func_0x00191ed0(2,1,6)` = socket TCP; `func_0x00190b64` = connect to
     `{param_3+4}` port from `param_4+0x10` (554).
  2. Sends literally: `DESCRIBE rtsp://<param_4+8>/by-name/<name> RTSP/1.0
     \r\nCSeq: 2\r\n\r\n` — **URL convention `rtsp://<source-ip>/by-name/
     <User_StreamName>`**.
  3. Reads response lines (≤0x14, retry delay), strips headers at `\r\n\r\n`,
  4. **`FUN_00056158(param_1,&sdp)` = SDP_Parser** → feeds the stream config
     into the output/decoder.
- So `User_SourceStreamName` resolution = SAP/mDNS-discovered source list
  (stream name → source IP; SAPReceiver browses 239.255.255.255:9875,
  BonjourBrowser/mDNS for service resolve) → RTSP client DESCRIBE → SDP →
  same decoder path as ManualSDP. `RTSPReconnectionTime=60` = retry timer.
- SDP_Parser callers (all the subscribe entry points): `0x62d20`
  (SAPReceiver::process), `0x792c8` (RTSP client DESCRIBE), `0x9e874`/`0xa0888`
  (SIP INVITE path), `0xd8170` (SIP apply-SDP), plus CnE-side ManualSDP apply.

### SIP (unicast AES67 pull/push)

- `SIPHandler` thread (ctor spawn site FUN_00058bd4, stack 0x2000); messages
  posted via FUN_00057710 ({desc DAT_000577a4,…} 0x18-B msgs to queue
  param_1+0xd0); caller FUN_000d8b10 ← FUN_000e1494.
- `RTPSIPUnicastController` + `SIPUnicastController` + SIPConfig/SIPURL/
  SIPInfo objects; per-stream `User_SIPIdentity` (transmitter1-5) and
  OutputGroups User_SIPIdentity=receiver.
- `SIPreceivers {SIPusername,SIPpassword,SIPserver,SIPFromURL}` — SIP auth
  params (the only "password" in the image; for SIP digest auth to remote
  transmitters), provided in `/sources` + `/general` JSON.
- **doNotifyINVITE = FUN_0009fb84** (caller FUN_000db050 dispatcher): checks
  PTP domain, sampling rate, recv-only, 486 Busy → creates RTP decoder via
  FUN_000a1c50 (reads `/cfg/System/Threads/RTP Decoder` cfg).
- RTSP and SIP both terminate in the same SDP→decoder machinery
  (`StreamingQuery_GetRTPSIPUnicastControllerSDP`).

---

## 4. HTTP / Web server (port 80)

- **Threads**: `WebServer` ctor **FUN_001521c0** (stack 0x2000, caller
  FUN_0015154c) — also registers Bonjour **`_http._tcp`** service via
  FUN_00151d04 and instantiates WebSocket. `WebSocket` ctor FUN_00150d7c
  (caller FUN_00098a40 — used by WebServer for `/api/fileupload` progress?).
- **GET dispatcher = FUN_0008f754** (vtable method of RavennaWebsiteFS;
  called from web-server URL router at 0x1639b0). `FUN_00003960`=strcmp per
  URL:
  | URL | handler |
  |---|---|
  | /device_list | cached string block +0x1c4/+0x1c8 |
  | /stream_list | +0x218 |
  | /general | **FUN_000918fc** |
  | /sources | **FUN_00090228** |
  | /outputs | **FUN_0008fcac** (provideOutputs) |
  | /status | **FUN_0008e4e0** (status + minSampleBufferLevel in states 10/11) |
  | /sw_versions | +0x168 (ArchwaveVER bootloader+app) |
  | /parameter_strings | +0x170 (enums) |
  | /result | FUN_0008e2ac |
  | /api/installProgress | progress from *(+0x124)+0x114/0x915, "Burning flash … %d %d done" |
  | (else) | return 0 → static file (RavennaWebsiteFS = embedded FS: `/index.ssi/html/shtml/htm/shtm` @0x26c522+) |
- GET schemas confirmed: provideSources → `{ArchwaveAES67:{version,sources:
  [{streamEnable,multicastAddress,automaticConfigEnabled,RTPTTL,SIPusername,
  SIPpassword,SIPserver,SIPFromURL,RTPDestination,RTPSource,…}]}}`;
  provideGeneral → `{config:{DHCPenable,currentIP*,IPaddress/mask/gateway,
  IPDNS1/2,MACaddress,samplingRate,resolution,audioMode,syntonizedMode,
  playoutDelay{msPerSample,delayInSamples},domain,preferredMaster,clockClass,
  logAnnounceInterval,logSyncInterval,ipTTL,slaveOnly,SIPreceivers{…},
  SAP{MulticastAddress,SessionTimeout,SessionAnnouncementEnabled,
  BrowsingEnabled}}}`.
- **POST side = RavennaPOST_handler** (`RavennaPOST_handler`@0xaf11f,
  `RavennaPOSTHandler`@0x170a30, `HTTP_POST_Handler`@0x23f207):
  doOutputs=**FUN_000affc4** (callsite 0xae2e4), doGeneral, doSources,
  `/command`=`ArchwaveCMD` (reboot/bootloader, string @0xadc5c).
  Firmware upload: `/api/fileupload` multipart + `doUpdate`/`scanBCD`,
  "Current image … New image" slot logic (BcOd has slot CRCs @0x94).
- **Auth model: none.** No login/session/cookie strings anywhere; the only
  credentials in firmware are SIPusername/SIPpassword for outbound SIP.

---

## 5. Tasks / threads & boot

- Reset: header@0x40 → entry `ea000008` @0x98 → ARM stub @0xc0.
- **bootstrapThread** ("bootstrap"/"bootstrapThread" strings @0x42c28/0x42c38):
  the function containing callsite 0x42990 → calls app entry.
- **App entry = FUN_00047dec** (called once @0x42990): allocs 0xfc0-byte
  application via **FUN_000b8bc0** (BeBoB_App init — wires sub-objects,
  registers dsp/sync/config/ptest/fba commands, writes ModelName/Manufacturer/
  WebIconPath strings), prints banner
  `"uT24_Audiolan (Release) / 04078 Nov 13 2017 14:1x / trunk_04078"`,
  then **FUN_0008ac28** = run.
- Network bring-up: **FUN_000e0314** (caller FUN_0009a2f4; creates
  RtspServer + everything else) and **FUN_000e1494** (caller FUN_000e1484;
  RtspServer + SIPHandler start).

### Thread table (spawn = FUN_0006e06c; full scan `al_threads.txt`/`al_th2.txt`)

| thread | creator | notes |
|---|---|---|
| bootstrapThread | (entry region 0x42xxx) | |
| ShellThread | FUN_0014e8a4 | SDS shell (telnet+uart) |
| RtspServerThread + RtspServerTimer | FUN_00054d88 | port 554 |
| SAPService | FUN_00055f30 | SAP announce 239.255.255.255:9875 |
| SAPReceiver | FUN_00063a44 | SAP browse/stream discovery |
| SIPHandler | FUN_00058bd4 | SIP session queue |
| ARCTCPServer | FUN_000673cc | ARC over TCP |
| ARCUDPListener / ARCUDPSender | FUN_00077ff8 / (UDP sender near) | ARC over UDP (mcast join) |
| ARCTransportSPI | FUN_000825cc | **uTrack host link** §7 |
| ARCTransportUART | FUN_0008a584 | ARC over /dev/uart0-3 |
| mDNSResponder | FUN_00088dd0 | stack 0x4000, Bonjour/DNS-SD |
| WebServer | FUN_001521c0 | + `_http._tcp` Bonjour |
| WebSocket | FUN_00150d7c | fw upload/progress |
| TelnetServer (+ByteStream/TelnetShell Event) | FUN_000cc42c | port 23 |
| USBDrvRxThread (+TxDmaComplete/RxDmaComplete/locks) | FUN_00098574 | USB host (flash drive for wav play/rec) |
| DSPProcessHelper | FUN_000cc07c | |
| CPU Load Supervisor | FUN_000daf68 | |
| SD-Ram Stress Thread | FUN_000d9ce0 | test cmd (status/start/stop) |
| HalUIControl | FUN_0006a5e0 | UI GPIO (Request pin etc.) |
| Timer (Event/TimerIsWaiting) | FUN_00111154 | generic timer svc |
| AV3test | FUN_0014a4ec | production AV test |
| "<svc>/Streaming" (`%s/Streaming`) | FUN_000685f4 | streaming worker per service |
| FUN_00052038 / 6d7e8 / 6f294 / 6fc90 / 7009c / ?@0x835d0 / ?@0xabeac | various | unnamed (framework internals) |
| lwIP tcpip, EthernetReceive/Transmit/Link, PTP×3, RTP Decoder, isoStateMachine, StreamingMessenger, RavennaController, TimerHandler, cmdline_setupThread | spawned inside framework/modules per `System/Threads` CnE cfg | RTP Decoder cfg read in FUN_000a1c50 |

Priorities/stacks: CnE `System/Threads` (§2). DSPProcess=6, EthRx/Tx=7,
RTP Decoder=12, lwIP=13, isoStateMachine=14, PTP=19, RavennaController=21,
EthernetLink=22, StreamingMessenger=23, default/ARCTransportSPI=24.

---

## 6. Class catalog

**No C++ RTTI objects**: the 191 length-prefixed names @0x2577a5+
(`audiolan_rtti_names.txt`) have **zero pointer references** — they are SDS
`type=` display strings, not typeinfo (firmware is `-fno-rtti`; the live tree
shows `type="19CnE_SystemDataProxy"` resolved via SDS, not vtable[-1]).
Vtables exist as plain tables in 0x25fxxx-0x266xxx (e.g. thread vt
@0x25f088, decoder vts @0x25fff8/0x260034/0x260070, SDS exec vts
@0x25f594/0x261508/0x261890/0x2644a8/0x265648/0x265b00/0x2613b8/0x25f720,
group vts @0x24aec/0x250d4/0x250e0). The **leaf-class descriptor array**
0x26030c-0x260e78 (~80 records `{marker -4, fields, 4 methods}`) is the CnE
leaf registry (per ghidra_audiolan_thumb.md).

Key families (from type-name strings + error strings):

- **Streaming/codec**: StreamProcess*, BeBobStreamProcess{,Settings,
  Capabilites}, StreamProcessBeBobCmd_{Start,Stop,Configure,Shutdown},
  StreamProcess{Settings,Parameter,Capabilities}, DSPProcess{,_Custom},
  DSPProcess_Custom, BeBobDSPCmd_Configure, CustomDSPCmd_Configure,
  DSPAppControl_Custom, AppControl_BeBob, StreamControlServiceImpl,
  IStreamProcessControl/IStreamControlService, StreamingConfiguration_*
  (Mixer, Ringbuffer, RTPDecoder{,PlayoutDelay,RoutingTable,
  SyntonizedMode,OutChannelSampleDelayOffset}, RTPEncoder{,EnableUnicast},
  RTPSIPUnicastController, RTPSIPDecoder{PlayoutDelay,RoutingTable,
  SyntonizedMode}, Base{PlayoutDelay,RoutingTable,SyntonizedMode},
  File{De,En}coder*, SaveCue, SetMarks, InputOutputDelays,
  StartStopFileCoders, MonoMulti/AudioFileDecoder, FileEncoderSwitchFiles/
  SetupNextFile, FileDecoder{PreloadNextFiles,SetNextFileName}),
  StreamingQuery_{GetLevelMeters,GetEncoderSourcePort,
  GetRTPSIPUnicastControllerSDP,PrintFileCoderStatus}.
- **RTP**: RTPDecoder{,L16,L24,L32}, RTPBaseDecoder,
  RTPDecoderFlexDelay{,L16,L24}, RTPDecoderAM824{,CU}, RTPEncoder{,L16,L24,
  L32}, RTPEncoderAM824CU.
- **Ravenna/AES67**: RavennaStreamingInterface, RavennaStreamingConfiguration,
  CommonStreamingInterface, BridgeStreamingInterface, DummyStreamingInterface,
  ExtendedIso{Audio,Image}Config, ExtendedIsoConfig, IIso{Input,Output}
  StreamProcessor, IStreamingInterface, IAppControlStreamingInterface;
  RTSP: RtspServer, RtspServerThread/Timer/Session, RtspServerRequest{Describe,
  Setup,Play,Teardown,GetParameter}; SIP: SIPHandler, SIPUnicastController,
  SIPConfig/SIPURL/SIPInfo; SAPService, SAPReceiver; BonjourBrowser + mDNS
  (mDNSResponder, `_dns-sd._udp` meta, `.local` CNAME logic).
- **ARC**: ARCProtocol, ARCInterface, ARCApplicationInterface,
  ARCApplicationModule, ARCCommand_Custom, ARCBootloaderInterface,
  ARCTransport{SPI,UART,UDP,UDPP}, ARCTCPServer, ARCUDPListener, ARCUDPSender.
- **CnE/persist**: CnE_SystemData{,Proxy,Directory}, SystemDataProxyBase,
  SystemDataDirectory, Static_SystemDataDirectory, SystemDataProxyI{t,s,l,j,
  i,h,f,d,c,b,s,Pc,PKc}E + SystemDataProxyCommonI*E (typed proxies),
  BaseSystemData, CnE_Property, PropertyControl, SystemDataServiceImpl,
  ISystemDataService, IPersistentControl, ConfigFlashEntry{_Info,_AddSibling,
  _ChangeValue,_RemoveSibling}.
- **HW/DMA**: AudioHWServiceImpl, IAudioHWService, HWAVInterface,
  HWGPIOInterface, HWUnusedInterface, HWAVPLL{,_Analog,_Digital,_Virtual,
  _Synthesizer}, IHWInterface, IHWPlug, IAudioHW{Analog,Digital,Midi}Plug{,
  Observer}, AvAudio{Input,Output}{,Fifo,Packet}Processor,
  FramerInputProcessor, DeframerOutputProcessor, DMAGenerator{,Sulu},
  SuluDMA{,Fifo,Warp,Block,Packet}, WarpFramerServiceImpl,
  WarpDeframerServiceImpl, IWarp{De}FramerService, SuluModule, SuluGPIO,
  StreamDeviceFramer/Deframer, StreamDeviceMgrImpl.
- **Shell/svc**: TelnetShellServiceImpl, ITelnetShellService, UIServiceImpl,
  IUIService, UILevelMeterHandler, IUILedHandler, WorkerThread, FunctorThread,
  MessageThread, Observable/IObservable, ICommunicationSettingsService,
  CommunicationSettingsService, USBBusDriverImpl, IUSBBusDriverService,
  I1394BusService, IBCOService/IBCOInterface, BCOApplication,
  DataStreamManager, IDataStreamControl, IMediaContentHandler,
  IAudioHWPlugObserver, IStreamSynchDomainObserver, NoCopy, 3DMA,
  LineIn/LineOut, AudioUnit-ish.

---

## 7. SPI slave channel (uTrack host link)

- **Transport**: `/dev/spiSlave` (the card is SPI *slave*; uTrack is master).
  `ARCTransportSPI` thread ctor **FUN_000825cc**: reads
  `/cfg/AppSettings/ARC/SPI` (`RequestPinActiveLevel`→1/0,
  `RequestPinGPIONumber`→GPIO4), opens `/dev/spiSlave` (FUN_000151a4 mode 1),
  ioctls (FUN_0001545c): cmd1={8} (word size), cmd3={1000} (tx wait),
  cmd0xb={0xc,pin,level} (**request GPIO** — signals host it wants to TX).
- **RX loop = FUN_000824f8** (separate open mode 2): byte-at-a-time read
  (FUN_000153bc); **frame = bytes until 0x00 delimiter**, max 0x840 bytes at
  param_1+0xd2; on delimiter → `FUN_00067524` (frame→message decode) →
  `FUN_0005ae14` (dispatch). Same decode/dispatch pair used by UART
  (callsites 0x8a528/0x8a53c) — one ARC protocol over all transports.
- **ARCProtocol** (`FUN_00060760` registers it): `receiveData` validates
  **checksum** ("Invalid checksum 0x%02x"), **command code** ("Unknown
  command code 0x%02x"), **message length** ("Invalid message length %u (%u
  expected)") — frame ≈ {cmd, payload, cksum}; `parseBrowseCreateDirectory`
  = file-browse commands.
- **ARCApplicationInterface** — the app-level command surface (all
  `ERROR: ARCApplicationInterface::*` strings, catalog region + 0xcdbf7+):
  - *File/browse*: getPlayFileMap (getAlphabetical/Postfixed/Prefixed),
    doGetWaveFileInfo, closeFile, doFileSystemAdded, doSPISendReceive.
  - *Record*: doRecSetup, doRecCreate, doRecCreateSingle.
  - *Play*: doPlayCreate, doPlayCreateSingle ("Channel overlap detected" —
    the 0xe41xx errors seen in the dispatcher), differing-sample-rate /
    channel-range checks.
  - *Net/RAVENNA config*: setIPAddr, **doNetSetDeviceConfig** (IP cfg,
    syntonized mode, sample size, playout delay, device name),
    **doNetSetSource** (streamEnable, autoConfig, multicast addr, source
    name, SIP identity), **doNetSetOutput** (output name, source stream,
    **manual SDP** — same leaves as the JSON API!), doNetGetStreamList
    (Bonjour browser).
  - *Transport*: doUDPSetConfiguration, doTCPSetConfiguration.
  - *Bonjour proxy*: doBonjour{DeregisterService,ResolveService,
    DeregisterBrowse,GetBrowseServiceList,ResolveAddrInfo,AbortResolve}.
  - *Firmware*: start/upload/validate/perform/getStatus FirmwareUpload
    (chunk offsets, CRC, HWID checks; "Not in firmware update mode").
  - *System*: onStartup, doGetSystemState, setHostData,
    handleLinkStatusChanged, handleIPAddressAssigned, setNetChangedFlags,
    servicesListUpdated.
- ARC is ALSO exposed on Ethernet: ARCTCPServer (TCP), ARCUDPListener/
  ARCUDPSender + ARCTransportUDP/UDPP (multicast join, registration server) —
  that's how a PC tool (ArchControl/ANEMAN-style) would find it; and
  `ARCInterface::convertUTF8ToWideString` for file names (UTF-16 lists).
- What the uTrack host shares: `audiolan` SDS cmd (uTrack side) → ARC over
  SPI → card's AES67 config + file play/rec + firmware. The card's
  `ARCApplicationInterface` is the executor; state is read back via
  doGetSystemState / stream-list callbacks.

---

## Key singletons / entry points (quick index)

| what | file | rt |
|---|---|---|
| reset stub | 0x98 (B →0xc0) | 0x60000098 |
| app entry (BeBoB app) | FUN_00047dec | 0x60047dec |
| app init / SDS app registrar | FUN_000b8bc0 | |
| app run | FUN_0008ac28 | |
| SDS register / object publish / once-guard | FUN_0014d890 / 0x16dd44 / 0x16ddfa | |
| ShellThread spawn | FUN_0014e8a4 | |
| thread spawn / timer create | FUN_0006e06c / FUN_00111154 | |
| HTTP GET dispatcher | FUN_0008f754 | |
| provideGeneral / provideSources / provideOutputs / provideStatus | FUN_000918fc / 0x90228 / 0x8fcac / 0x8e4e0 | |
| POST doOutputs | FUN_000affc4 | |
| RTSP server ctor / singleton getters | FUN_00054d88 / FUN_0006120c,FUN_000425c4 | |
| RTSP method parser | FUN_00054a84 | |
| RTSP response builder | FUN_0005369c | |
| RTSP client DESCRIBE | FUN_00078f1c | |
| SDP_Parser | FUN_00056158 | |
| SIP INVITE handler / RTP-decoder setup | FUN_0009fb84 / FUN_000a1c50 | |
| SAP announce / receiver ctors | FUN_00055f30 / FUN_00063a44 | |
| ARCTransportSPI ctor / RX loop | FUN_000825cc / FUN_000824f8 | |
| ARC frame decode / dispatch | FUN_00067524 / FUN_0005ae14 | |
| network bring-up | FUN_000e0314 / FUN_000e1494 | |
| global config getter | FUN_000b9aac | |
| CnE leaf open/write-string/write-int/close | FUN_00041c14 / 0x42a98 / 0x43514 / 0x41dd4 | |
| msg dispatcher (channels/decoder) | FUN_000de560 | |
| decoder creators L16/L24/L32 | FUN_000708d0 / 0x70b28 / 0x70cb8 | |

## Open gaps
- Exec-thunk identity per built-in (help/bat/rd/wr/os/cfg/test/persparam/
  ping/showtree): KnOS static records near strings (region 0x1823xx for group
  vts; leaf records inline in rodata) — decode per-record if needed.
- RTSP `invokeRequest` bodies (Describe/Setup/Play/Teardown/GetParameter) —
  in the big Thumb blob; the request classes' vtables are in 0x25fxxx.
- Exact ARC frame layout (cmd-code table + checksum alg) — inside
  ARCProtocol::receiveData/parse* (region 0x5b1c3/0x5c967/0x232f4f).
- RTP RX per-packet filter (SSRC/PT/seq-window) inside decoder objects
  (vts @0x25fff8/0x260034/0x260070, alloc 0x11c).
- Reset stub @0x98–0xc0 (PLL/SDRAM order) — trivial 2-insn; uninteresting.
