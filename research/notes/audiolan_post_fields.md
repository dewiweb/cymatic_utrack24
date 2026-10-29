# AudioLAN fw 4078 — POST JSON field names (exact schema from decompilation)

All addresses = **file offsets** in `uT24_Audiolan_Release_ 4078.bcd`
(runtime VA = file + 0x60000000 for the main image; the Streaming
Framework module's own literal pool uses link base **0x60005f80** —
verified: literals 0x601ed794..0x601ed940 → catalog strings at file
0x1e7814..0x1e79c0).

Dumps: `research/ghidra/dumps/post_fields1.txt` (doOutputs decompile +
3 setters), `post_gap1..4.txt` (rolled-back ARM disasm of the unanalysed
POST-handler region 0xadb3c–0xb1d48), `post_setters.txt`.

---

## 1. POST dispatch — how a URL reaches a handler

- **URL router @0xadb5c** (ARM, in the 0xadb3c–0xaffc4 analysis gap):
  `strcmp`s the request path against an inline table and stores an index
  byte on the request object (via `FUN_001dafb8(req+0x44)`), then
  `blx 0x9b654` (Thumb dispatcher). Also `strncpy`s **"/index.html"**
  (0xc bytes) as the default response path.
  | index | URL |
  |---|---|
  | 1 | `/api/fileupload` |
  | 2 | `/command` |
  | 3 | `/general` |
  | 4 | `/sources` |
  | 5 | `/outputs` |
  | — | anything else → return 0 (static file) |

- **Index→handler trampoline @0xae220**: writes `'/'`+NUL into the reply
  buffer, reads back the index byte, calls Thumb `0x9b6d0`, then
  `ldrcc pc,[pc,r7*4]` over a 6-entry table (file 0xae288) into Thumb
  case bodies at file 0xb4220–0xb4270, which tail-call the ARM stubs at
  0xae2a0/0xae2b4/0xae2c8/0xae2dc/0xae2f0 (`mov r1,r0; mov r0,r4; bl <fn>`):
  | ARM stub | target | handler |
  |---|---|---|
  | 0xae2a0 | **0xae318** | **doCommand** (ArchwaveCMD JSON) |
  | 0xae2b4 | **0xae70c** | **doGeneral** |
  | 0xae2c8 | **0xb0e1c** | **doSources** |
  | 0xae2dc | **FUN_000affc4** | **doOutputs** (callsite 0xae2e4 = `bl 0xaffc4`) |
  | 0xae2f0 | 0xb1998("/result") then **0xadc9c** | **doUpdate/fileupload** |

- **Request-mode gate** `*(req+0x14)` at every handler entry:
  doOutputs accepts modes **{1,2,3}**; doCommand/doGeneral/doSources
  accept **{1,3}** (mode 2 → return 0); fileupload requires **1**.

- There is **no auth** anywhere (no login/session/cookie).

## 2. Common JSON envelope

Every JSON POST body must be:

```json
{"<root>": {"version": 1, ...}}
```

- root = `"ArchwaveAES67"` for /outputs, /sources, /general;
  `"ArchwaveCMD"` for /command.
- `"version"` must be a JSON **number == 1** (node flag 0x400).
- DOM node type flags used throughout (`node+0xc`):
  `0x100` = bool (value `0x102` = true, else false), `0x400`/`0x800` =
  number, `0x100000` = string, `==3` = object, `==4` = array.
- Missing/ill-typed keys are **silently skipped** (the handler returns 1
  → HTTP 200 even though nothing was applied). Only explicit setter
  failures return 0 (→ error result / log line).

## 3. POST /outputs — doOutputs = FUN_000affc4 (ARM, fully decompiled)

```json
{"ArchwaveAES67":{"version":1,
 "outputs":[ {"name": "...", "streamPath": "...", "manualSDP": "...", "manualSDPChannel": 1},
             ... one element per hardware output, IN ORDER ... ]}}
```

- **Count check**: `outputs[]` length must equal the card's output count
  (24). Mismatch → log `"ERROR: RavennaPOST_handler::doOutputs: output
  count mismatch"`, abort, return 0. **No partial updates** — every POST
  must carry all outputs, positionally mapped (no key selects which
  output an element applies to).
- Per-element keys (only these four are looked up — no "enabled",
  "sourceStream", "stream", "channel", etc.):
  | key | type | effect |
  |---|---|---|
  | `"name"` | string | `setOutputName` FUN_000704c4 → CnE `User_OutputName` |
  | `"streamPath"` | string | see below → `setSourceStream` FUN_00070690 → `User_SourceStreamName` + `User_SourceChannel` |
  | `"manualSDP"` | string | `setManualSDP` FUN_00070260 → CnE `ManualSDP` + `ManualSDPChannel` |
  | `"manualSDPChannel"` | number | 1-based channel used with manualSDP (default 1 → passed as ch−1) |

### 3.1 The streamPath drop bug — RESOLVED

`streamPath` **is** the correct write key (it maps to
`User_SourceStreamName`/`User_SourceChannel`). But the code only
processes it when **`"manualSDP"` is also present in the same element
and is a string** (inner `FUN_001d8c94(elem,"manualSDP")` guard at
~0xb04xx). A POST of `{"streamPath":"devin-test/1"}` alone is parsed,
then skipped entirely → 200, value silently dropped (matches live test).

Semantics inside the coupled block:

| streamPath | manualSDP | action |
|---|---|---|
| `""` | `""` | `setSourceStream(out,"",0)` **then** `setManualSDP(out,"",0)` — clears both |
| `""` | `"<sdp>"` | `setManualSDP(out, sdp, manualSDPChannel-1)` **then** `setSourceStream(out,"",0)` — manual SDP wins |
| `"<name>/<ch>"` | any (must exist as string) | split at **last** `/`: `setSourceStream(out, name, atoi(ch)-1)` **then** `setManualSDP(out,"",0)` — named stream wins; no `/` → log `"the received path %d is not correct: %s"`, element skipped, POST continues |
| absent | any | nothing applied for this element |

- So a working subscribe POST is e.g.
  `{"ArchwaveAES67":{"version":1,"outputs":[{"streamPath":"<TX stream name>/1","manualSDP":""}, ×24]}}`
  — and to *un*subscribe: `{"streamPath":"","manualSDP":""}`.
- Setter failure → logs `"new stream path rejected"` /
  `"new Manual SDP rejected"` (catalog file 0x1e7xxx / inline 0xb0b07,
  0xb0d9c) → abort, return 0.
- `setSourceStream` also writes `User_SourceChannel` = ch−1 (0-based);
  `setManualSDP(out,sdp,ch,flag=0)` writes `ManualSDP`+`ManualSDPChannel`
  through the CnE leaf-write path (FUN_00042a98/FUN_00043514) — direct
  commit, no separate apply step.

## 4. POST /sources — doSources = func @0xb0e1c (ARM)

```json
{"ArchwaveAES67":{"version":1,
 "sources":[ {"name":"...","streamEnable":true,"multicastAddress":"239.x.x.x:5004",
              "automaticConfigEnabled":false,"RTPTTL":15,
              "SIPusername":"..","SIPpassword":"..","SIPserver":".."}, ×N ]}}
```

- Same envelope; `sources[]` count must equal # outgoing streams
  (5 in mode0) → `"Outgoing stream count mismatch"`, abort.
- Per element (positional over the CnE stream list):
  | key | type | setter → CnE leaf |
  |---|---|---|
  | `"name"` | string | FUN_0007c490 → `User_StreamName` ("New stream name rejected") |
  | `"streamEnable"` | bool | FUN_0007c9ec → `User_Enabled` ("New stream enable rejected") |
  | `"multicastAddress"` | string `"ip:port"` | split at `':'` → FUN_0007d728 → `User_DestAddr` + `User_DestPort` ("New multicast config rejected") |
  | `"automaticConfigEnabled"` | bool | FUN_0007d9a4 → `User_AutomaticConfigEnabled` ("New stream automatic config enable rejected") |
  | `"RTPTTL"` | number (&0xff) | FUN_0007c374 → `User_TTL` ("New stream RTP TTL rejected") |
  | `"SIPusername"`+`"SIPpassword"`+`"SIPserver"` | strings, **all three required together** | concatenated `"user:pass@server"` → FUN_0007c870 → `User_SIPIdentity` ("SIP identity %d rejected") |
- **Not writable**: `SIPFromURL`, `RTPDestination`, `RTPSource`,
  `ChannelRouting`, `SamplesPerPacket`, `NoOfChannels`,
  `EnabledIn{1x,2x,4x}FS`, `AppendMAC` — no lookups exist.

## 5. POST /general — doGeneral = func @0xae70c (ARM)

```json
{"ArchwaveAES67":{"version":1,"config":{
  "name":"...", "DHCPenable":false, "IPaddress":"..","IPmask":"..","IPgateway":"..",
  "IPDNS1":"..","IPDNS2":"..",
  "samplingRate":n, "audioMode":n, "resolution":n, "syntonizedMode":bool,
  "playoutDelay":{"delayInSamples":n},
  "PTP":{"domain":n,"preferredMaster":n,"clockClass":n,
         "logAnnounceInterval":n,"logSyncInterval":n,"ipTTL":n,"slaveOnly":bool},
  "SIPreceivers":{"SIPusername":"..","SIPpassword":"..","SIPserver":".."},
  "SAP":{"MulticastAddress":"239.255.255.255","Port":9875,"SessionTimeout":3600,
         "SessionAnnouncementEnabled":bool,"BrowsingEnabled":bool} }}}
```

- `name` → FUN_000b9c98 (device name post; "New device name rejected").
- **IP block is all-or-nothing**: requires `DHCPenable` (bool) **and**
  `IPaddress`,`IPmask`,`IPgateway` (strings) — missing any → whole block
  skipped. `IPDNS1`/`IPDNS2` optional individually. → FUN_000bb42c
  ("New IP config rejected").
- `samplingRate` (num &0xff) / `audioMode` → "Sampling rate rejected",
  "Audio mode / sampling rate rejected"; `resolution` → "Sampling size
  rejected"; `syntonizedMode` bool; `playoutDelay.delayInSamples` →
  "Playout delay rejected" (`msPerSample` is read-only/computed).
- `PTP` sub-object: `domain` (num flag 0x800), `preferredMaster`,
  `clockClass`, `logAnnounceInterval`, `logSyncInterval`, `ipTTL`,
  `slaveOnly` (bool). Errors: "PTP domain number rejected", "PTP
  priorities rejected" (preferredMaster/clockClass pair), "PTP TTL
  rejected", "PTP slave only rejected".
- `SIPreceivers`: all three strings required → `"user:pass@server"` →
  FUN_000bdc00 → "output groups SIP identity rejected" (this **is** the
  receiver/`OutputGroups` `User_SIPIdentity` — there is no separate key).
- `SAP`: **all five** keys required or whole block skipped →
  FUN_000bc528 (mcast addr str), FUN_000b96e0 (Port u16),
  FUN_000bdde0 (SessionTimeout u16), FUN_000be894
  (SessionAnnouncementEnabled bool), FUN_000bc4ac (BrowsingEnabled bool).

## 6. POST /command — doCommand = func @0xae318 (ARM)

```json
{"ArchwaveCMD":{"version":1,"reboot":true,"bootloader":false}}
{"ArchwaveCMD":{"version":1,"newMACaddr":"XX:XX:XX:XX:XX:XX"}}
```

- `reboot` must be a bool node ==0x102 (true); `bootloader` bool
  ==0x102 → bootloader mode. Responses "Restarting on HTTP command" /
  "Restarting to bootloader on HTTP command" (inline strings
  0xae694/0xae6b0); calls shutdown/restart vfuncs via `blx 0x509a8` /
  `0x6a6e4`.
- **`newMACaddr`** — hidden command: string parsed by func @0xae064
  (`%2hX:%2hX:%2hX:%2hX:%2hX:%2hX`, prints "current MAC:"/"new MAC:") →
  "Restarting on MAC address change".
- No `reboot`/`newMACaddr` key → falls through, returns 1 (silent 200).

## 7. POST /api/fileupload — func @0xadc9c

- Requires mode==1; zeroes a 0x78-byte upload-state struct, calls
  FUN_000c62ac (multipart parser), then a 9-case jump table (file
  0xadd4c → Thumb bodies 0xb3d1c+) for the upload stages, then a 6-case
  result table (0xade70 → 0xb3e08+). Result strings inline:
  "Internal error", "Invalid content", "Invalid address", "Flash erase
  error", "Flash programming error", "Flash verify error", "Invalid
  hardware", "Invalid file", "Invalid CRC in file", "File successfully
  uploaded", "Internal memory error", "Error receiving file: Bad
  content", "File rejected". Stub 5 passes "/result" to helper 0xb1998
  (result-page builder) — so the upload flow redirects to GET /result.

## 8. Hidden endpoints / key semantics — summary

- POST paths accepted: exactly `/command`, `/general`, `/sources`,
  `/outputs`, `/api/fileupload` (+ GET `/result`, `/status`,
  `/device_list`, `/stream_list`, `/sw_versions`, `/parameter_strings`,
  `/api/installProgress`). Nothing else — no `/apply`, `/commit`,
  `/save`, `/reset`.
- **No commit/apply key**: CnE writes commit immediately (leaf write +
  notify → the CommitChanges msg handler, msg-type 1 in FUN_000de560).
- **Silent-skip policy**: unknown keys and missing optional keys are
  ignored (200 OK). Failures only on wrong `version`, wrong top-level
  type, array-count mismatch, or a setter rejecting a value.
- `version` must be `1` in every envelope.

## 9. Why the live `streamPath` POST was dropped — TL;DR

`POST /outputs {"ArchwaveAES67":{"version":1,"outputs":[{...,
"streamPath":"devin-test/1"}]}}` returns 200 with the value dropped
because `doOutputs` (FUN_000affc4) only enters the streamPath branch
when the element **also contains a string `"manualSDP"` key**. Send
`"manualSDP":""` alongside `"streamPath":"<name>/<ch>"` (name = the
source's `User_StreamName` as seen in GET /sources, ch = 1-based
channel) — or `"streamPath":"","manualSDP":"<sdp>"` /
`"manualSDPChannel":n` for a manual SDP subscribe. Array must contain
all 24 outputs in order.
