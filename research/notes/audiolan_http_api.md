# AudioLAN card — HTTP/JSON API reference (firmware 4078)

**Device under test:** `uT24-AudioLan-49-00-30`, MAC `00:07:F5:49:00:30`,
firmware `Main Firmware revision 4078` (BcOd build `20171113130227`),
HTTP server lwIP/1.3.1 on **TCP port 80**.

**Provenance of this document.** Everything below comes from three mutually
confirming sources:

- Full decompilation of `uT24_Audiolan_Release_ 4078.bcd` (Ghidra, file
  offsets; runtime VA = file offset + `0x60000000`). Handler functions:
  GET dispatcher `FUN_0008f754`, providers `FUN_000918fc` (general),
  `FUN_00090228` (sources), `FUN_0008fcac` (outputs), `FUN_0008e4e0`
  (status), `FUN_0008e2ac` (result/installProgress); POST router @0xadb5c,
  `doCommand` @0xae318, `doGeneral` @0xae70c, `doSources` @0xb0e1c,
  `doOutputs` `FUN_000affc4`, `doUpdate` @0xadc9c.
- The embedded webapp bundle `research/assets/audiolan/aes67-0.1.2.js`
  (minified AngularJS "aes67App").
- Live captures in `research/notes/evidence/` (`audiolan_status.json`,
  `audiolan_general.json`, `audiolan_http_root.html`,
  `audiolan_rtsp_describe.txt`) and the validated subscribe experiments
  logged in `audiolan_api.md`.

Companion notes: `audiolan_api.md` (summary), `audiolan_post_fields.md`
(POST internals), `ghidra_audiolan_map.md` §4, `ghidra_audiolan_discovery.md`
(stream discovery), `ghidra_audiolan_rtp.md` / `ghidra_audiolan_thumb.md`
(decoder + status machinery).

---

## 1. Transport model and global rules

### 1.1 Basics

- Plain HTTP/1.x on port 80. **No authentication of any kind** — no login,
  session, cookie, token or basic-auth anywhere in the firmware.
- JSON endpoints accept `GET` (read) and `POST` (write) on the **same URL**.
- `Content-Type: application/json` is served for JSON GETs; the webapp POSTs
  with `Content-Type: application/json` (Angular `$http.post`, body is a
  serialized JSON object).
- Firmware upload is the only non-JSON API (`multipart/form-data`,
  §6.5) plus a WebSocket upgrade path (`HTTP/1.1 101 Switching Protocols`
  string exists; the webapp does not use it).
- Static files are served by `RavennaWebsiteFS` from the embedded FS;
  `/` and `/index.html` return the Angular single-page app. Unrecognized
  GET paths fall through to the static-file lookup (effectively 404 /
  index fallback). The router `strncpy`s `/index.html` as the default
  response path.
- All four JSON POSTs are *whole-config* writers: arrays must be complete
  and positional; **there is no partial update, no `apply`/`commit`/`save`
  endpoint**. Every accepted leaf write goes straight into the CnE config
  tree and posts an async change-notification — it is live immediately
  (see §7.4 for which changes need a reboot to take full effect).

### 1.2 JSON envelope

Every JSON request body and response body uses a single root object:

```json
{"<root>": { "version": 1, ... }}
```

| root key | used by |
|---|---|
| `ArchwaveAES67` | /status, /outputs, /sources, /general, /stream_list, /device_list, /parameter_strings |
| `ArchwaveVER` | /sw_versions |
| `ArchwaveCMD` | POST /command only |

**`version` is mandatory and must be the number `1`** in every POST body.
Internally it must be a JSON number node (DOM flag `0x400`) with value 1;
a missing, wrong-typed or non-1 `version` makes the handler reject.
Every GET response also carries `"version": 1` — the webapp rejects any
response where `version !== 1`.

### 1.3 Silent-skip policy (very important)

The POST handlers follow a *parse-what-you-can* policy:

- Unknown keys, missing optional keys and ill-typed members are **silently
  ignored**. The handler still returns success → HTTP 200. Your value was
  dropped with no error anywhere except (sometimes) a debug-log line only
  visible on the serial/telnet console.
- Hard failures (handler returns 0) happen only for:
  - `version` missing / not a number / ≠ 1,
  - wrong top-level type (root not an object, array node not an array),
  - **array element-count mismatch** (`output count mismatch`,
    `Outgoing stream count mismatch`),
  - a value explicitly rejected by a CnE setter (`"new stream path
    rejected"`, `"new Manual SDP rejected"`, `"New device name
    rejected"`, … — see error strings per endpoint below).
- A return of 0 means the request is treated as *unhandled* — the client
  sees either the default response path or a generic error; the JSON API
  has **no structured error body** for POST failures (unlike the upload
  path, which returns `{"status":…,"message":…}`). Details only appear in
  the device log (`ERROR: RavennaPOST_handler::do*:` catalog strings).
- DOM node type rules (from the JSON parser, `node+0xc` flag word):
  `0x100` bool (value `0x102` = true), `0x400`/`0x800` number,
  `0x100000` string, `3` object, `4` array. Handlers test these flags —
  e.g. `"streamEnable": "true"` (string) is silently skipped.
- Internal gate: every POST handler is invoked with a request-phase byte
  (`req+0x14`). `doOutputs` accepts phases {1,2,3}; `doCommand`/`doGeneral`/
  `doSources` accept {1,3}; `doUpdate` requires {1}. (Phase numbering is
  internal to the HTTP server; from the wire this is transparent — it
  just means the fileupload handler only runs for its dedicated path.)

### 1.4 GET-side caching

`/device_list`, `/stream_list`, `/sw_versions`, `/parameter_strings` are
**pre-serialized** JSON buffers rebuilt on change-notification (locks at
WebsiteFS `+0x1c4`, `+0x218`, `+0x168`, `+0x170`). The other providers
regenerate on a dirty flag (`param_1+0x29c` / `+0x26c`). Consequence: GETs
are cheap and safe to poll, but freshly POSTed values may take one
notification tick to appear in a subsequent GET.

---

## 2. Endpoint summary

| Method | Path | Purpose |
|---|---|---|
| GET | `/` , `/index.html` | Angular app + static assets (`assets/aes67-0.1.2.js|css`) |
| GET | `/status` | live status: per-source/per-output status+SDP+buffer, device identity, PTP state |
| GET | `/outputs` | receiver (output channel) subscription config |
| GET | `/sources` | transmitter (outgoing stream) config |
| GET | `/general` | device/network/audio/PTP/SIP/SAP config |
| GET | `/stream_list` | discovered AES67 streams (name + channel count) |
| GET | `/device_list` | discovered AES67 devices (`_ravenna` mDNS browse) |
| GET | `/parameter_strings` | enum tables (samplingRates, resolutions, audioModes, streamStatus) |
| GET | `/sw_versions` | bootloader + application firmware versions |
| GET | `/result` | last firmware-upload result (status+message page) |
| GET | `/api/installProgress` | firmware burn progress `{status,message}` |
| POST | `/outputs` | write all output channels (name, streamPath, manualSDP) |
| POST | `/sources` | write all outgoing streams (name, enable, mcast, SIP, TTL) |
| POST | `/general` | write device config (network, audio, PTP, SIP receivers, SAP) |
| POST | `/command` | reboot / bootloader / `newMACaddr` (hidden) |
| POST | `/api/fileupload` | firmware `.bcd` upload (multipart) |
| — | *(everything else)* | static file or index fallback; **no** /apply /commit /save /reset |

Other open ports on the card for orientation (not this API): **23** telnet
(SDS shell), **554** RTSP (`DESCRIBE, SETUP, TEARDOWN, PLAY` —
`rtsp://<ip>/by-name/<stream>`), **5060** SIP UA, **55000** CopperLan VNM
(CHAI), mDNS/IGMP/SAP 239.255.255.255:9875 on UDP.

---

## 3. GET endpoints — full schemas

### 3.1 `GET /status` — live status

Provider `FUN_0008e4e0`. Live capture: `evidence/audiolan_status.json`.

```json
{"ArchwaveAES67": {
  "version": 1,
  "sources":  [ {"status": 4, "minSampleBufferLevel": 0, "SDP": "v=0\r\n…"}, … ],
  "outputs":  [ {"status": 0, "minSampleBufferLevel": 0, "SDP": ""}, … ×24 ],
  "manufacturer": "cymatic audio",
  "model": "uT24_AudioLan",
  "iconPath": "/assets/images/devTypeRecorder.png",
  "operatingMode": "ETHERNET",
  "hideSamplingRateCombo": true,
  "needsReboot": false,
  "PTP": {"state": "LISTENING",
          "grandMasterID": "00-07-F5-FF-FE-49-00-30",
          "currentOffset": 0}
}}
```

#### Top-level fields

| field | type | semantics |
|---|---|---|
| `version` | number | always 1 |
| `manufacturer` | string | from CnE `AppSettings/Global/ManufacturerName` (`cymatic audio`) |
| `model` | string | CnE `ModelName` (`uT24_AudioLan`) |
| `iconPath` | string | web icon URL (`/assets/images/devtype01.png` per firmware; captured `devTypeRecorder.png`) |
| `operatingMode` | string | `ETHERNET` \| `USB` \| `BRIDGE` \| `UNKNOWN`; this card is always `ETHERNET` |
| `hideSamplingRateCombo` | bool | UI hint: sampling-rate selector hidden (card rate is host-driven) |
| `needsReboot` | bool | set when a written change requires reboot (e.g. receiver SIP identity — `"Receivers SIP Identity (need reboot)"`) |
| `sources[]` | array | one element per **outgoing** stream (TX), in CnE `OutgoingStreams` order (5 in audioMode 1) |
| `outputs[]` | array | one element per **output channel** (RX), positionally = output index (24 here) |
| `PTP` | object | PTP port status (below) |

`PTP.state` is a **string**, one of (firmware state table @0x8ebcc+):
`ERROR`, `NOT DEFINED`, `INITIALIZING`, `FAULTY`, `DISABLED`, `LISTENING`,
`PRE-MASTER`, `PASSIVE`, `UNCALIBRATED`, `SLAVE`, `UNKNOWN`.
`grandMasterID` is an EUI-64 clock identity formatted
`%02X-%02X-…-%02X` (8 bytes). `currentOffset` is the servo offset
(number; units = the PTP loop's reported offset).

#### `sources[i]` / `outputs[i]` elements

| field | type | semantics |
|---|---|---|
| `status` | number 0–15 | index into the streamStatus table, §5.1 |
| `minSampleBufferLevel` | number | decoder playout-buffer fill (samples); **only meaningful for outputs in status 10 (`Waiting`) / 11** — the provider only reads the buffer level when `status ∈ {10,11}`; emitted as 0 elsewhere |
| `SDP` | string | sources: the SDP the card advertises for that stream (RTSP/SAP text). outputs: the SDP the decoder is currently subscribed to (from manualSDP or the resolved stream); `""` when unsubscribed |

The `SDP` string for a card's own stream looks like (verbatim from
capture — note `c=` carries `/ttl` and the custom `a=clock-domain:PTPv2`,
`a=sync-time`, `a=framecount` attrs):

```
v=0\r\no=- 7 0 IN IP4 192.168.10.176\r\ns=uT24 channels 1-8 (49-00-30)\r\n
t=0 0\r\na=clock-domain:PTPv2 0\r\nm=audio 5004 RTP/AVP 98\r\n
c=IN IP4 239.69.101.220/1\r\na=rtpmap:98 L24/44100/8\r\na=recvonly\r\n
a=framecount:48\r\na=sync-time:0\r\na=ptime:1.09\r\n
a=ts-refclk:ptp=IEEE1588-2008:00-07-F5-FF-FE-49-00-30:0\r\na=mediaclk:direct=0\r\n
```

(For unicast sessions `s=` becomes `SIP<id>` and `a=sendonly` replaces
`recvonly`; `c=` is the card's own IP.)

The webapp additionally understands two optional top-level booleans
`allDecodersInUse` and `wouldNeedMoreDecoders` (mapped to streamStatus[6]
"OK" / [7] "Disabled" display). **fw 4078 never emits them** — decoder
exhaustion surfaces as per-output `status: 15` instead. Tolerate their
absence.

Webapp usage: polls this endpoint every 20 s; computes
`samplesInBuffer = min(outputs[i].minSampleBufferLevel)` over outputs in
states >9 (0 if none); maps each element's `status` through
`parameter_strings.streamStatus` for display.

### 3.2 `GET /outputs` — receiver subscription config

Provider `FUN_0008fcac`. Emits exactly four keys per element (verified
@0x900d4–0x900fc):

```json
{"ArchwaveAES67": {"version": 1, "outputs": [
  {"name": "Output 1", "streamPath": "uT24 channels 1-8 (49-00-30)/3",
   "manualSDP": "", "manualSDPChannel": 1},
  … one element per hardware output, in order …
]}}
```

| field | type | semantics |
|---|---|---|
| `name` | string | user label (`User_OutputName`) |
| `streamPath` | string | `"<discovered stream name>/<channel>"`, channel **1-based**; `""` when not subscribed via a discovered stream. Name = the `/stream_list` entry (which may carry a `sap:` prefix) |
| `manualSDP` | string | verbatim SDP text for manual subscription; `""` when unused. When non-empty it *wins* over streamPath |
| `manualSDPChannel` | number | 1-based channel index into the manual-SDP stream (default 1) |

Mutual exclusion is enforced by the POST handler (§4.1): writing a
streamPath clears manualSDP and vice-versa.

### 3.3 `GET /sources` — outgoing stream config

Provider `FUN_00090228` (verified key order from decompile):

```json
{"ArchwaveAES67": {"version": 1, "sources": [
  {"name": "uT24 channels 1-8 (49-00-30)",
   "streamEnable": true,
   "multicastAddress": "239.69.101.220:5004",
   "automaticConfigEnabled": false,
   "RTPTTL": 1,
   "SIPusername": "transmitter1", "SIPpassword": "", "SIPserver": "",
   "SIPFromURL": "sip:transmitter1@192.168.10.176",
   "RTPDestination": "239.69.101.220:5004",
   "RTPSource": "192.168.10.176:5004"},
  …
]}}
```

| field | type | semantics |
|---|---|---|
| `name` | string | `User_StreamName` — **this is the token used in `streamPath` and the RTSP `/by-name/<name>` URL and the mDNS service instance name** |
| `streamEnable` | bool | `User_Enabled` |
| `multicastAddress` | string | `"<dest-ip>:<dest-port>"` (`User_DestAddr`+`User_DestPort`, `%s:%u`). For unicast/SIP operation this holds the destination the same way |
| `automaticConfigEnabled` | bool | `User_AutomaticConfigEnabled` — card auto-allocates the destination addr; UI restores saved multicastIp/Port and ignores manual values while true |
| `RTPTTL` | number | IP TTL byte (`User_TTL`) |
| `SIPusername`, `SIPpassword`, `SIPserver` | string | the three halves of `User_SIPIdentity` (`user:pass@server`); empty server = peer-to-peer SIP |
| `SIPFromURL` | string | **conditional** — only present when the SIP flag byte (stream obj `+0x69`) is set |
| `RTPDestination` | string | **conditional**, `"<ip>:<port>"` actual RTP destination |
| `RTPSource` | string | **conditional**, `"<card-ip>:<port>"` actual RTP source |

Read-only (emitted nowhere, POST keys not looked up): `ChannelRouting`,
`SamplesPerPacket{1x,2x,4x}FS`, `NoOfChannels`, `EnabledIn{1x,2x,4x}FS`,
`AppendMAC`, `User_ChannelName0-7`. Those live only in the CnE tree
(SDS `get`/`set`).

### 3.4 `GET /general` — device configuration

Provider `FUN_000918fc`. Live capture: `evidence/audiolan_general.json`.

```json
{"ArchwaveAES67": {"version": 1, "config": {
  "name": "uT24-AudioLan-49-00-30",
  "DHCPenable": true,
  "currentIPaddress": "192.168.10.176", "currentIPmask": "255.255.255.0",
  "currentIPgateway": "192.168.10.1",
  "IPaddress": "192.168.100.220", "IPmask": "255.255.255.0",
  "IPgateway": "192.168.100.254", "IPDNS1": "", "IPDNS2": "",
  "MACaddress": "00:07:F5:49:00:30",
  "samplingRate": 1, "resolution": 24, "audioMode": 1,
  "syntonizedMode": false,
  "playoutDelay": {"min": 1, "max": 24000,
                   "msPerSample": 0.0226757, "delayInSamples": 4800},
  "PTP": {"domain": 0, "preferredMaster": false, "clockClass": 255,
          "logAnnounceInterval": 1, "logSyncInterval": 0,
          "ipTTL": 1, "slaveOnly": true},
  "SIPreceivers": {"SIPusername": "receiver", "SIPpassword": "", "SIPserver": ""},
  "SAP": {"MulticastAddress": "239.255.255.255", "Port": 9875,
          "SessionTimeout": 3600, "SessionAnnouncementEnabled": true,
          "BrowsingEnabled": false}
}}}
```

| field | type | semantics |
|---|---|---|
| `name` | string | device name |
| `DHCPenable` | bool | DHCP client |
| `currentIP{address,mask,gateway}` | string | **read-only** — live interface values (DHCP result); ignored on POST |
| `IP{address,mask,gateway}` | string | static config (applied when DHCP off; written with the all-or-nothing rule, §4.3) |
| `IPDNS1`, `IPDNS2` | string | DNS servers, optional individually |
| `MACaddress` | string | read-only on this endpoint (see `/command` `newMACaddr`) |
| `samplingRate` | number | index into `parameter_strings.samplingRates` (u8; on this card driven by host — `hideSamplingRateCombo`) |
| `resolution` | number | bits/sample (`SampleSize`, e.g. 24) |
| `audioMode` | number | index into `parameter_strings.audioModes` (s32; mode 1 = "24CH InOut" → 5 outgoing streams, 3 output groups) |
| `syntonizedMode` | bool | selects `RTPDecoderFlexDelay*` decoders (non-syntonized = plain) |
| `playoutDelay.min`, `.max` | number | allowed `delayInSamples` range (read-only) |
| `playoutDelay.msPerSample` | number | **read-only** computed ms/sample; ignored on POST |
| `playoutDelay.delayInSamples` | number | **writable** — decoder playout buffer depth in samples |
| `PTP.domain` | number | PTPv2 domainNumber — **stream subscribe gate** |
| `PTP.preferredMaster` | bool | priority/preferred-master flag (paired with clockClass on write) |
| `PTP.clockClass` | number | PTP clockClass byte (255 default; read live via defaultDS) |
| `PTP.logAnnounceInterval`, `.logSyncInterval` | number | log2 intervals |
| `PTP.ipTTL` | number | PTP multicast TTL |
| `PTP.slaveOnly` | bool | slave-only flag; UI force-clears `preferredMaster` when true |
| `SIPreceivers.{SIPusername,SIPpassword,SIPserver}` | string | the **receiver/output-groups** SIP identity (`user:pass@server`); needs reboot (`needsReboot`) |
| `SAP.MulticastAddress` | string | SAP group (must be multicast) |
| `SAP.Port` | number u16 | SAP port (default 9875) |
| `SAP.SessionTimeout` | number u16 | session expiry seconds (swept every T/4) |
| `SAP.SessionAnnouncementEnabled` | bool | card announces its streams via SAP (default ON) |
| `SAP.BrowsingEnabled` | bool | card *listens* for foreign SAP announces (default OFF — enable for Path-B discovery, §6.4) |

### 3.5 `GET /stream_list` — discovered streams

Cached buffer (`FUN_00090ae8` builder, keys @0x90e62+):

```json
{"ArchwaveAES67": {"version": 1, "streams": [
  {"name": "uT24 channels 1-8 (49-00-30)", "channelCount": 8},
  {"name": "sap:SomeSender", "channelCount": 8}
]}}
```

- `streams[]` merges two discovery sources (§6.4):
  1. mDNS `_rtsp._tcp,_ravenna_session` browse → resolve → RTSP
     `DESCRIBE rtsp://<ip>/by-name/<name>` → parsed SDP (listed only if the
     SDP fully parsed: channel count, rate, addr all nonzero).
  2. `SAPReceiver` sessions — only when `SAP.BrowsingEnabled`; names are
     prefixed **`sap:`**.
- `channelCount` (u16) lets the webapp offer channels `1..N`; the POST
  `streamPath` channel is 1-based into this list.
- Lifecycle: refresh tick = `AppSettings/Bonjour/SessionUpdateInterval`
  (default 5 s); RTSP entries re-validated every
  `RTSPReconnectionTime` (60 s); SAP entries expire after
  `SAP.SessionTimeout` (3600 s) or on SAP-delete.

### 3.6 `GET /device_list` — discovered devices

Cached buffer from the `_http._tcp,_ravenna` device browse
(`FUN_0008df44`), keys @0x915d0+:

```json
{"ArchwaveAES67": {"version": 1, "devices": [
  {"hostname": "uT24-AudioLan-49-00-30.local", "IPaddress": "192.168.10.176:80"}
]}}
```

- `IPaddress` is emitted `"%s:%u"` — **host:port**, not a bare IP. The
  webapp `split(":")[0]`s it. (Feeding the device list is cosmetic; not
  needed for subscription.)
- Entries are only other `_ravenna`-advertising devices.

### 3.7 `GET /parameter_strings` — enum tables

Cached buffer @+0x170. Keys verified @0x92a50+:

```json
{"ArchwaveAES67": {"version": 1,
  "samplingRates": [{"displayString": "44.1 kHz", "index": 1}, …],
  "resolutions":  [{"displayString": "…", "index": …}, …],
  "audioModes":   [{"displayString": "24CH InOut", "index": 1}, …],
  "streamStatus": [{"displayString": "Receiving (unicast, no sync)", "index": 0}, … ×16 ]
}}
```

- Every list entry is `{displayString: string, index: number}`.
- `samplingRates` strings present in firmware: `32 kHz`, `44.1 kHz`,
  `48 kHz`, `88.2 kHz`, `96 kHz`, `176.4 kHz`, `192 kHz`, `64 kHz`.
  **The emitted subset = `ValidSamplingRates` of the current audioMode.**
- `audioModes` = `RavennaConfiguration/AudioModes/Mode*` names
  ("24CH InOut" here).
- `resolutions` = valid `SampleSize` values.
- `streamStatus` = the 16-entry status table, §5.1 — the webapp indexes
  it directly by the numeric `status` field (`params.streamStatus[st]`),
  so **keep array order = table order**.

### 3.8 `GET /sw_versions` — firmware versions

Cached buffer @+0x168 (keys @0x8e21a+):

```json
{"ArchwaveVER": {"version": 1,
  "bootloader":  {"version": "BSL Firmware revision 1234"},
  "application": {"version": "Main Firmware revision 4078"}}}
```

`bootloader.version` is the literal `No BSL` when no bootloader is
present. Both are formatted `"<kind> Firmware revision %u"`.

### 3.9 `GET /result` — last upload result

`FUN_0008e2ac`; returns the last firmware-update result as a
`{"status":…,"message":…}` JSON/HTML page (see §6.5 for the status
strings). Also used internally by `/api/installProgress`.

### 3.10 `GET /api/installProgress` — burn progress

Reads the FirmwareUpdate state byte (`*(fs+0x124)+0x114`, states 0–11)
and returns `{"status": "<state>", "message": "<text>"}`:

| `status` | `message` / meaning |
|---|---|
| `ok` | upload accepted / idle stages; **also used during the burn** with progress text `Burning flash... %d%% done.` (state byte 2, percent at state obj +0x915) |
| `success` | `Firmware successfully updated` |
| `error` | one of: `Internal error`, `Invalid content`, `Invalid address`, `Flash erase error`, `Flash programming error`, `Flash verify error`, `Invalid hardware`, `Invalid file`, `Invalid CRC in file`, `File rejected`, `Internal memory error`, `Error receiving file: Bad content`, `Unknown error` |

The webapp polls it every **1 s**; on `status === "success"` it issues a
final `GET /api/installProgress?action=reset` then reboots the card.
(`action=reset` clears the install state.)

---

## 4. POST endpoints — writable schemas

Common envelope `{"ArchwaveAES67":{"version":1,…}}`,
`Content-Type: application/json`. All writes commit immediately to the
CnE tree (leaf write + async notify) — **no apply step**. All arrays are
**positional and must be complete**: the element count must exactly equal
the hardware/configured count, and element *i* maps to output/stream *i*.

### 4.1 `POST /outputs` — receiver subscriptions (doOutputs = FUN_000affc4)

```json
{"ArchwaveAES67":{"version":1,"outputs":[
  {"name":"Main L","streamPath":"<stream name>/<ch>","manualSDP":"","manualSDPChannel":1},
  {"name":"Main R","streamPath":"<stream name>/<ch2>","manualSDP":"","manualSDPChannel":1},
  … exactly N elements (24 on this card) …
]}}
```

- **Count check:** `outputs.length` must equal the card's output count
  (24). Mismatch → `output count mismatch`, whole POST aborts.
- **Only these keys are looked up per element:** `name` (string),
  `streamPath` (string), `manualSDP` (string), `manualSDPChannel`
  (number). Anything else (`enabled`, `channels`, `status`, `SDP`, the
  webapp's own `streamStatus`/`currentStream`/`currentStreamChannel`/
  `isCollapsedChannel`/`streamPathFake` helpers) is ignored — the webapp
  `delete`s them before posting.
- `name` → `setOutputName` → CnE `User_OutputName`.

#### The streamPath/manualSDP coupling (the silent-drop trap)

The streamPath/manualSDP block is entered **only when `streamPath` is a
string AND `manualSDP` is also present as a string in the same element**.
A `streamPath`-only POST parses fine, returns 200 — **and does nothing**
(this was observed live before the guard was found). Within the block:

| `streamPath` | `manualSDP` | action (order matters) |
|---|---|---|
| `""` | `""` | `setSourceStream(out,"",0)` then `setManualSDP(out,"",0)` — full unsubscribe |
| `""` | `"<sdp>"` | `setManualSDP(out, sdp, manualSDPChannel-1, 0)` then `setSourceStream(out,"",0)` — **manual SDP wins** |
| `"<name>/<ch>"` | any string (presence required, value unused) | split at **last** `/`; `setSourceStream(out, name, atoi(ch)-1)` then `setManualSDP(out,"",0)` — **named stream wins** |
| `"<name>/<ch>"` with no `/`, or channel `atoi()` == 0 | — | log `the received path %d is not correct: %s`, **element skipped**, POST continues |
| `streamPath` absent or non-string | any | nothing applied for this element |

Consequences:

- **Subscribe:** `{"streamPath":"<name>/<1-based ch>","manualSDP":""}`.
- **Manual SDP:** `{"streamPath":"","manualSDP":"<sdp>"}` (+ optional
  `manualSDPChannel`, default 1).
- **Unsubscribe:** `{"streamPath":"","manualSDP":""}`.
- Channel is `atoi`'d, must be ≥1; `"0"` or junk → element skipped.
- A name containing `/` is fine (split at *last* `/`).
- Setter failures (`new stream path rejected`, `new Manual SDP rejected`,
  `New Manual SDP rejected`) abort the whole POST.
- CnE leaves written: `User_SourceStreamName`, `User_SourceChannel`
  (ch−1, 0-based), `ManualSDP`, `ManualSDPChannel`.

#### curl examples

```bash
# subscribe output 1 to channel 3 of a discovered stream; leave others as-is
# (build the 24-element array from GET /outputs first!)
curl -s http://192.168.10.176/outputs | \
  python3 -c 'import sys,json;d=json.load(sys.stdin);o=d["ArchwaveAES67"]["outputs"];o[0].update(streamPath="uT24 channels 1-8 (49-00-30)/3",manualSDP="");print(json.dumps(d))' | \
  curl -X POST -H "Content-Type: application/json" -d @- http://192.168.10.176/outputs

# unsubscribe output 5
o[4].update(streamPath="", manualSDP="")

# manual SDP (async, no PTP) on output 7 channel 1
o[6].update(streamPath="",
  manualSDP="v=0\r\no=- 1 0 IN IP4 192.168.10.81\r\ns=devin-test\r\nt=0 0\r\nc=IN IP4 239.69.200.200/1\r\nm=audio 5004 RTP/AVP 98\r\na=rtpmap:98 L24/44100/8\r\na=recvonly\r\na=framecount:48\r\na=ptime:1.09\r\n",
  manualSDPChannel=1)
```

### 4.2 `POST /sources` — outgoing streams (doSources @0xb0e1c)

```json
{"ArchwaveAES67":{"version":1,"sources":[
  {"name":"uT24 channels 1-8 (49-00-30)","streamEnable":true,
   "multicastAddress":"239.69.101.220:5004","automaticConfigEnabled":false,
   "RTPTTL":1,"SIPusername":"tx1","SIPpassword":"","SIPserver":""},
  … exactly N elements (5 in audioMode 1) …
]}}
```

- `sources.length` must equal the configured outgoing-stream count →
  `Outgoing stream count mismatch` abort.
- Writable keys per element (positional over the CnE stream list):

| key | type | setter → CnE leaf | failure log |
|---|---|---|---|
| `name` | string | `User_StreamName` | `New stream name rejected` |
| `streamEnable` | bool | `User_Enabled` | `New stream enable rejected` |
| `multicastAddress` | string `"ip:port"` | split at `:` → `User_DestAddr`+`User_DestPort` | `New multicast config rejected` |
| `automaticConfigEnabled` | bool | `User_AutomaticConfigEnabled` | `New stream automatic config enable rejected` |
| `RTPTTL` | number (masked `&0xff`) | `User_TTL` | `New stream RTP TTL rejected` |
| `SIPusername`+`SIPpassword`+`SIPserver` | strings, **all three together** | concatenated `"user:pass@server"` → `User_SIPIdentity` | `SIP identity %d rejected` |

- **Not writable** (no lookups): `SIPFromURL`, `RTPDestination`,
  `RTPSource`, `ChannelRouting`, `SamplesPerPacket*`, `NoOfChannels`,
  `EnabledIn{1x,2x,4x}FS`, `AppendMAC`, plus the webapp's own
  `multicastIp`/`multicastPort`/`streamStatus` display fields (deleted
  before POST).
- Missing a SIP triple member → that element's SIP update is skipped.
- Renaming `name` retargets the mDNS service instance and the
  `/by-name/` path — existing subscribers by name break.

### 4.3 `POST /general` — device config (doGeneral @0xae70c)

```json
{"ArchwaveAES67":{"version":1,"config":{
  "name":"…","DHCPenable":false,
  "IPaddress":"…","IPmask":"…","IPgateway":"…","IPDNS1":"…","IPDNS2":"…",
  "samplingRate":1,"audioMode":1,"resolution":24,"syntonizedMode":false,
  "playoutDelay":{"delayInSamples":4800},
  "PTP":{"domain":0,"preferredMaster":false,"clockClass":255,
         "logAnnounceInterval":1,"logSyncInterval":0,"ipTTL":1,"slaveOnly":true},
  "SIPreceivers":{"SIPusername":"rx","SIPpassword":"","SIPserver":""},
  "SAP":{"MulticastAddress":"239.255.255.255","Port":9875,"SessionTimeout":3600,
         "SessionAnnouncementEnabled":true,"BrowsingEnabled":false}
}}}
```

Block-by-block rules:

| block / key | rule | failure log |
|---|---|---|
| `name` | string → device name | `New device name rejected` |
| **IP block** `DHCPenable` + `IPaddress` + `IPmask` + `IPgateway` | **all four required** or whole block skipped; `IPDNS1`/`IPDNS2` optional individually | `New IP config rejected` |
| `samplingRate` | number `&0xff` | `Sampling rate rejected` |
| `audioMode` | number | `Audio mode / sampling rate rejected` |
| `resolution` | number | `Sampling size rejected` |
| `syntonizedMode` | bool | — |
| `playoutDelay.delayInSamples` | number (`msPerSample`/`min`/`max` ignored) | `Playout delay rejected` |
| `PTP` sub-object | `domain` (num), `preferredMaster`, `clockClass`, `logAnnounceInterval`, `logSyncInterval`, `ipTTL`, `slaveOnly` (bool) — each optional | `PTP domain number rejected`, `PTP priorities rejected` (preferredMaster+clockClass pair), `PTP TTL rejected`, `PTP slave only rejected` |
| `SIPreceivers` | **all three strings required** → concat `user:pass@server` → receiver `User_SIPIdentity` (needs reboot) | `output groups SIP identity rejected` |
| `SAP` | **all five keys required** (`MulticastAddress`, `Port`, `SessionTimeout`, `SessionAnnouncementEnabled`, `BrowsingEnabled`) or the whole block is skipped | — |

The webapp's `sendConfig` additionally `parseInt`s `delayInSamples` and
forces `IPmask` to `""` if absent.

### 4.4 `POST /command` — device commands (doCommand @0xae318)

```json
{"ArchwaveCMD":{"version":1,"reboot":true,"bootloader":false}}
{"ArchwaveCMD":{"version":1,"newMACaddr":"XX:XX:XX:XX:XX:XX"}}
```

| key | type | action |
|---|---|---|
| `reboot` | bool `true` | restart. `bootloader:true` (also bool) → stop in bootloader (update mode); `false` → normal. Log strings `Restarting on HTTP command` / `Restarting to bootloader on HTTP command` |
| `newMACaddr` | string | **hidden command** — parses `"%2hX:%2hX:%2hX:%2hX:%2hX:%2hX"`, prints `current MAC:`/`new MAC:`, reboots (`Restarting on MAC address change`) |
| neither key | — | falls through, returns success — silent no-op |

The webapp's Reboot service posts
`{"ArchwaveCMD":{"version":1,"reboot":true,"bootloader":false}}` then
polls `GET /` until the card answers (≈2 s timeout loop).

### 4.5 `POST /api/fileupload` — firmware upload (doUpdate @0xadc9c)

- `multipart/form-data`, field name **`uploadedFile`**, `.bcd` file,
  webapp caps at **16 MiB** (`maxFileSize 16777216`). One file only.
- Upload progress is client-side XHR (`xhr.upload.onprogress`); the POST
  response is JSON `{"status":"ok"|"error", "message":"…"}`.
- On `"ok"` the card burns flash in the background → poll
  `GET /api/installProgress` (1 s cadence) until `status:"success"`,
  then `GET /api/installProgress?action=reset`, then `POST /command`
  reboot. `/result` shows the final outcome.
- Internally: 0x78-byte upload state, multipart parser `FUN_000c62ac`,
  9-stage update state machine, `scanBCD` (slot logic: `Current image` /
  `New image`, CRC checks, `KeepBootloader`, HWID check). Errors map to
  the `/api/installProgress` message table (§3.10).
- **Danger:** bricks the card if interrupted/wrong image. Treat as
  read-only in practice unless doing a controlled update.

---

## 5. Status code tables

### 5.1 `status` field (sources[] and outputs[] elements, 0–15)

Firmware name table @0x26af32 (this is also the
`parameter_strings.streamStatus` array, in order):

| # | displayString | meaning (decoder = outputs; encoder = sources) |
|---|---|---|
| 0 | `Receiving (unicast, no sync)` | decoder receiving a unicast RTP flow, timestamps not PTP-locked |
| 1 | `Receiving (no sync)` | receiving, not synchronized (timestamps outside lock; buffer may still fill poorly) |
| 2 | `Receiving (time step warning)` | receiving; RTP timestamp discontinuities seen (`Time step on decoder %u`) |
| 3 | `Receiving (sync error)` | receiving; samples outside playout window (`Samples outside window on decoder %u`) |
| 4 | `Transmitting (unicast)` | encoder streaming to a unicast (RTSP-SETUP/SIP) peer — **also observed as the steady state of normal multicast TX streams (status 4 in live capture)** |
| 5 | `Receiving (unicast)` | decoder receiving unicast, in sync |
| 6 | `OK` | healthy (webapp uses [6] for `allDecodersInUse` indicator too) |
| 7 | `Disabled` | stream/output disabled |
| 8 | `Idle` | enabled but nothing bound/flowing |
| 9 | `Invalid Sampling Rate` | SDP rate ∉ card's rate set/`EnabledInXxFS` |
| 10 | `Waiting` | decoder bound + IGMP-joined, waiting for first in-window packet — `minSampleBufferLevel` is live here (0 while nothing accepted); typical cause: sender timestamps not in the card's clock domain/rate |
| 11 | `Transmitting` | encoder streaming (multicast) — `minSampleBufferLevel` also read in this state |
| 12 | `Receiving` | decoder receiving, locked |
| 13 | `Invalid PTP Domain` | SDP `clock-domain:PTPv2 <d>`/`ts-refclk ...:<d>` ≠ card `PTP.domain`. (Also seen transiently while a discovered stream's SDP is being resolved.) Absent clock attrs ⇒ async stream, no gate |
| 14 | `Address Collision` | destination/multicast conflict |
| 15 | `Not enough Decoders` | > `MaxNoOfDecoders` (4) simultaneous decoders required |

Decoder→status causality (from `doHandleDecoderMessage`): config gates
sample-rate / multicast / PTP-domain / payload-format / free-decoder map
to 9 / 13 / 14 / invalid-payload / 15 respectively; runtime packet
acceptance maps to 1/2/3 (warnings) or 12/5/0 (receiving); bound-but-quiet
= 10.

The webapp renders `status-indicator` CSS classes `status0`–`status15`
directly from this index.

### 5.2 Source (encoder) statuses

Same table. A *disabled* source shows 7; enabled + transmitting shows
4/11 (unicast/multicast); non-transmitting falls back to 8 (`Idle`).
Observed live: `status: 4` on all enabled multicast streams.

### 5.3 PTP port states (status.PTP.state)

`ERROR`, `NOT DEFINED`, `INITIALIZING`, `FAULTY`, `DISABLED`,
`LISTENING`, `PRE-MASTER`, `PASSIVE`, `UNCALIBRATED`, `SLAVE`,
`UNKNOWN` — standard IEEE 1588 port-state names.

### 5.4 operatingMode

`ETHERNET` | `USB` | `BRIDGE` | `UNKNOWN`. Card runs ETHERNET only
(`This application supports only ETHERNET streaming`).

---

## 6. Semantics deep-dives

### 6.1 streamPath format and routing

- Format `"<stream name>/<channel>"`, channel **1-based** into the
  stream's `channelCount`. The firmware splits at the **last** `/`, so
  names containing `/` work.
- `<stream name>` is looked up in the stream session map — i.e. a name
  already present (or soon present) in `/stream_list`. It does **not**
  do a bare `/by-name/` guess at subscribe time; subscription applies the
  *cached* SDP from the last successful DESCRIBE.
- One name can feed any number of outputs and any channel can be mapped
  to any output — **arbitrary N→M routing including duplication**
  (validated: stream ch 2→card ch1, ch1→card ch2 stereo swap works).
- `streamPath=""` (+ `manualSDP=""`) unsubscribes; the decoder is freed.

### 6.2 manualSDP format

The verbatim SDP text is stored in CnE `ManualSDP` and fed to
`SDP_Parser` (`FUN_00056158`). Required lines (parse gates):
`v=`, `o=`, `s=`, `t=`, `c=IN IP4 <addr>[/<ttl>]`,
`m=audio <port> RTP/AVP <pt>`, `a=rtpmap:<pt> <codec>/<rate>/<ch>`
(codec ∈ `L16`,`L24`,`L32`,`AM824`), `a=recvonly`. Recommended:
`a=framecount:<spp>` (48/96/192), `a=ptime:<ms>`, `a=sync-time:0`.
Clock attrs: either `a=clock-domain:PTPv2 <domain>` or
`a=ts-refclk:ptp=IEEE1588-2008:<gm-clockid>:<domain>` +
`a=mediaclk:direct=0` — **domain must equal the card's `PTP.domain`** or
status 13; omit both ⇒ asynchronous stream, accepted. Non-multicast `c=`
for a network stream ⇒ rejected (`not a multicast address`).
`manualSDPChannel` selects which SDP channel lands on the output
(1-based).

### 6.3 Discovered-stream lifecycle

- **mDNS/RTSP (default path):** sender advertises
  `_ravenna_session._sub._rtsp._tcp.local`, instance name = stream name.
  Card resolves host→IP every `SessionUpdateInterval` (5 s), sends
  `DESCRIBE rtsp://<ip>/by-name/<name> RTSP/1.0\r\nCSeq: 2\r\n\r\n`
  (fixed CSeq 2, no other headers, response status line *not* checked —
  body after first `\r\n\r\n` → SDP_Parser). Re-DESCRIBEs the
  stalest session every `RTSPReconnectionTime` (60 s). Appears in
  `/stream_list` only after a fully-parsed SDP.
- **SAP:** only when `SAP.BrowsingEnabled` (default off); listens on
  `SAP.MulticastAddress:SAP.Port`; dedup by (originIP,msgIdHash); names
  shown as `sap:<sdp s=>`; expiry `SAP.SessionTimeout`, delete on
  SAP-delete record.
- **SIP:** remote UA `INVITE sip:<SIPreceivers-identity>@<card-ip>:5060`
  with SDP body → decoder (gated by domain/rate/busy). Outgoing streams
  have their own `User_SIPIdentity` for pull-style INVITEs.
- **manualSDP:** no discovery at all — straight to the decoder.

### 6.4 Why a decoder can stick at "Waiting" (status 10)

Decoder bound + IGMP joined, but every RTP packet fails the playout
window check `slot_ts ≤ now ≤ slot_ts + playout_span` (span =
`delayInSamples`). Causes: wrong payload-type, wrong rate, RTP
timestamps not in the card's PTP-syntonized clock domain (async sender),
wrong packet cadence (`framecount`). `minSampleBufferLevel` reports the
buffer fill — stays 0 while rejecting. Fixes: 48 kHz, PTP-locked
timestamps (`ts-refclk`/`mediaclk:direct=0`), matching PT/spp.

### 6.5 Firmware upload result strings

`{"status", "message"}` pairs (verbatim): `ok`,
`Firmware successfully updated` (+ `success`),
`Burning flash... %d%% done.`, `Internal error`, `Invalid content`,
`Invalid address`, `Flash erase error`, `Flash programming error`,
`Flash verify error`, `Invalid hardware`, `Invalid file`,
`Invalid CRC in file`, `File rejected`, `Internal memory error`,
`Error receiving file: Bad content`, `Unknown error`.

---

## 7. Error handling — complete catalogue

### 7.1 HTTP layer

- Statuses observed in firmware: `HTTP/1.1 200 OK`,
  `HTTP/1.1 101 Switching Protocols`, `Bad Request`. No 404/500 bodies.
- POST handlers return a path string for the response (default `/`;
  upload uses `/result`). The webapp ignores all POST response bodies.
- Unknown GET path → static-file lookup (falls back to serving
  `/index.html` i.e. 200 with the SPA, or nothing — no JSON error body).
- RTSP side (for reference): `RTSP/1.0 454 Session Not Found` for
  unknown `/by-name/`; `405` for unimplemented methods; only
  DESCRIBE/SETUP/TEARDOWN/PLAY (+GET_PARAMETER) implemented; SETUP is
  UDP-unicast only (no TCP interleave).

### 7.2 Silent drops (parse but ignore — HTTP 200)

| case | result |
|---|---|
| POST /outputs element without `manualSDP` key (streamPath alone) | **streamPath silently dropped** — the #1 trap |
| unknown keys anywhere | ignored |
| wrong JSON type for a known key | ignored |
| missing optional key / incomplete IP block / incomplete SAP block / incomplete SIP triple | that block skipped |
| `version` missing/wrong type/≠1, wrong root type, array count mismatch, setter rejection | handler returns 0 → unhandled request → not-applied (log only) |
| `streamPath` without `/`, or channel atoi()==0 | element skipped (`the received path %d is not correct: %s`), POST continues |
| POST /command with no recognized key | silent 200 no-op |
| POST to an unlisted URL | static-file path → no JSON handling |

### 7.3 Log-only error strings (device console, never in HTTP response)

`RavennaPOST_handler::doOutputs: output count mismatch`,
`doOutputs: new Manual SDP rejected` / `New Manual SDP rejected`,
`doOutputs: new stream path rejected`,
`doOutputs: the received path %d is not correct: %s`,
`doSources: Outgoing stream count mismatch`, `New stream name
rejected`, `New stream enable rejected`, `New multicast config
rejected`, `New stream automatic config enable rejected`,
`New stream RTP TTL rejected`, `SIP identity %d rejected`,
`doGeneral: New device name rejected`, `New IP config rejected`,
`Sampling rate rejected`, `Audio mode / sampling rate rejected`,
`Sampling size rejected`, `Playout delay rejected`,
`PTP domain number rejected`, `PTP priorities rejected`,
`PTP TTL rejected`, `PTP slave only rejected`,
`output groups SIP identity rejected`.

### 7.4 Reboot requirements

Most leaves apply live via the CnE notify path. Known reboot-requiring
change: receiver/output-groups SIP identity (`needsReboot:true` in
/status after writing; the config group is literally logged as
`Receivers SIP Identity (need reboot)`). Audio-mode / sampling-rate
changes reconfigure the stream set (counts change → subsequent POSTs
must use the new counts).

---

## 8. What the webapp actually does (aes67-0.1.2.js)

### 8.1 Endpoint map (`Config.path`)

```
root:"/"                    devicestatus:"/status"
reboot:"/command"           deviceconfig:"/general"
configuration:"/configuration"  devicechannels:"/outputs"
streamlist:"/stream_list"   deviceparams:"/parameter_strings"
devicelist:"/device_list"   devicesw_version:"/sw_versions"
devicesources:"/sources"    upload:"/api/fileupload"
pingServer:"/assets/aes67ping.gif"  progress:"/api/installProgress"
```

(`configuration` is the UI state route, not an API endpoint.)
`cachebustUrl` appends `?<timestamp>` to every GET.

### 8.2 Load sequence (`loadDeviceData`)

`parameter_strings → general → sources → outputs → stream_list → status`,
chained promises; each GET must unwrap to root key +
`version===1`. Polling: `device_list`, `stream_list`, `status` every
**20 s** (`reload:{devicelist:2e4,streamlist:2e4,status:2e4}`).

Client-side transforms (fields the POST must **not** contain — they are
`delete`d first):

- sources: `multicastAddress` split at `:` → `multicastIp`/`multicastPort`
  display fields; `streamStatus` display stub.
- outputs: `streamPath` split at last `/` matched against `stream_list`
  → `currentStream`/`currentStreamChannel` (1-based);
  `streamStatus`, `isCollapsedChannel`, `streamPathFake` UI fields.
- status: `streamStatus`/`decoderStatus` stubs merged onto
  sources/outputs/top-level; `samplesInBuffer` = min buffer level.

### 8.3 Dirty tracking & "Apply all" (the POST queue)

Forms: `streamsForm` (sources), `outputsForm`, `configForm`,
`advancedForm`. `sendDeviceConfiguration` builds queue `x`:

```
if streamsForm.$dirty → push "sendSources"
if outputsForm.$dirty → push "sendOutputs"
if configForm.$dirty  → push "sendConfig"
if advancedForm.$dirty → push whichever of the three wasn't already queued
then l(): POST = x.pop() until empty — i.e. execution order is
   sendConfig → sendOutputs → sendSources (reverse of push order)
```

Each POST success triggers the next queued one (`.success(l)`); any
error aborts the chain (`sendX error` log). After the queue drains,
`updateDevice()` (the **Apply all** button) calls `reloadDevice()`
(page reload) — or `rebootDevice()` when invoked with `true`
(the Reboot button posts `/command` then polls `GET /`).

sendConfig massaging: `delayInSamples = parseInt(…)`, `IPmask` forced to
`""` if absent, `deviceProvider = "ArchwaveAES67"`.

### 8.4 Reboot & upload flows

- Reboot: `POST /command {reboot:true,bootloader:false}` →
  `waitForReboot`: after 2 s, `GET <url>` repeatedly until success.
- Upload: `POST /api/fileupload` (FormData `uploadedFile`, `.bcd`,
  ≤16 MB) → on `{"status":"ok"}` navigate to install view →
  `GET /api/installProgress` every 1 s; `success` →
  `GET …?action=reset` → `rebootDevice()`; `error` → show message.
- Also a postMessage API for embedding the UI in an iframe
  (`{status:200,message:…}` envelopes; `getheight`, `reloadDevice`,
  `audiomodes`, `SDPtext`, spinner messages) — host-page bridge only,
  not an HTTP API.

---

## 9. Copy-paste recipes

```bash
CARD=192.168.10.176

# full status / config snapshot
curl -s http://$CARD/status   | python3 -m json.tool
curl -s http://$CARD/outputs  | python3 -m json.tool
curl -s http://$CARD/sources  | python3 -m json.tool
curl -s http://$CARD/general  | python3 -m json.tool
curl -s http://$CARD/stream_list http://$CARD/device_list

# subscribe output 1 → ch1 of "devin-test" (MUST keep all 24 elements +
# the manualSDP:"" guard key):
curl -s http://$CARD/outputs > /tmp/o.json
python3 - <<'EOF'
import json
d=json.load(open('/tmp/o.json'))
outs=d['ArchwaveAES67']['outputs']
outs[0]={'name':outs[0]['name'],'streamPath':'devin-test/1','manualSDP':'','manualSDPChannel':1}
print(json.dumps(d))
EOF
# … pipe into:
curl -X POST -H 'Content-Type: application/json' -d @- http://$CARD/outputs

# unsubscribe output 1
outs[0]={'streamPath':'','manualSDP':''}

# enable SAP browsing (all 5 keys mandatory)
curl -s http://$CARD/general | python3 -c '
import sys,json;d=json.load(sys.stdin);c=d["ArchwaveAES67"]["config"]
c["SAP"]={"MulticastAddress":"239.255.255.255","Port":9875,"SessionTimeout":3600,
          "SessionAnnouncementEnabled":True,"BrowsingEnabled":True}
print(json.dumps(d))' | curl -X POST -H 'Content-Type: application/json' -d @- http://$CARD/general

# reboot
curl -X POST -H 'Content-Type: application/json' \
  -d '{"ArchwaveCMD":{"version":1,"reboot":true,"bootloader":false}}' http://$CARD/command
```

**Golden rules for implementers**

1. Always `version: 1` (number, not string).
2. Always send **complete** arrays — read-modify-write via the GET.
3. For /outputs, **always include `manualSDP` (even `""`)** in every
   element or `streamPath` is silently dropped.
4. `streamPath` channel and `manualSDPChannel` are **1-based**; `0` or
   garbage = element skipped.
5. SIP fields travel as a triple and become `user:pass@server`.
6. Expect **no error responses** — verify writes by re-GETting, and
   watch `/status` for the 0–15 status codes.
7. There is no commit step; changes are live instantly.

---

## 10. Firmware anchors (for maintenance of this doc)

| item | file offset |
|---|---|
| GET URL dispatcher | `FUN_0008f754`; URL strings @0x8fa42+ |
| provideGeneral / provideSources / provideOutputs / provideStatus | `FUN_000918fc` / `0x90228` / `0x8fcac` / `0x8e4e0` |
| /result + installProgress | `FUN_0008e2ac`; state byte `*(fs+0x124)+0x114`, pct @+0x915; strings @0x8fad4–0x8fc9c |
| POST URL router | 0xadb5c (paths @0xadc5c–0xadc8c); index→handler trampoline @0xae220, jtab @0xae288 |
| doCommand / doGeneral / doSources / doOutputs / doUpdate | 0xae318 / 0xae70c / 0xb0e1c / `FUN_000affc4` / 0xadc9c |
| JSON key strings | outputs @0x900c4–0x900fc; sources @0x90644–0x90964; general @0x91d04–0x9266c; status @0x8e826–0x8ef8c; stream_list @0x90e62+; device_list @0x915c0+; parameter_strings @0x92a50–0x932d4; sw_versions @0x8e21a+; ArchwaveCMD @0xae664+ |
| status-name table (0–15) | @0x26af32 |
| PTP state strings | @0x8ebcc–0x8ef74 |
| setters | `FUN_000704c4` (output name), `FUN_00070690` (source stream), `FUN_00070260` (manual SDP), source setters `FUN_0007c490/0x7c9ec/0x7d728/0x7d9a4/0x7c374/0x7c870` |
| SDP parser / SDP generator / RTSP client DESCRIBE | `FUN_00056158` / `FUN_00152ae8` / `FUN_00078f1c` |
