# uT24 AudioLAN fw 4078 — STREAM DISCOVERY machinery (RTSP by-name / SAP / SIP)

Continuation of `ghidra_audiolan_map.md` + `ghidra_audiolan_thumb.md`.
Same program (`uT24_Audiolan_Release_ 4078.bcd`, VA = file offset + 0x60000000).
All offsets below are FILE offsets. Dumps: `research/ghidra/dumps/disc_*.txt`.

## 0. Object map — who owns what

```
FUN_000b8bc0 (BeBoB_App init)
 ├── FUN_00093540 → "RavennaWebsiteFS"  (HTTP JSON provider; inner cache obj
 │     holds /device_list @+0x1c4, /stream_list @+0x218,+0x21c)
 │     └── FUN_00090ae8 = stream_list JSON builder
 ├── FUN_0007a764 → "BonjourBrowser"    (mDNS/DNS-SD front object)
 │     └── inner worker @ iVar5-0x1b0 = RTSP-client stream-session manager
 │         (locks +0x124/+0x148, resolved-svc map +0x184, session map +0x1a0,
 │          TimerHandler +0x1b0, SessionUpdateInterval*1000 @+0x2d0,
 │          RTSPReconnectionTime*1000 @+0x2d4, listeners +0x2e8)
 ├── FUN_000db1e8 → FUN_000a3030 → "RavennaController" (the big coordinator;
 │     FUN_00093508 registers its +0x118/+0x11c/+0x120 listeners into:
 │     RTSP-client mgr *(+300), SAPService (FUN_0005508c), BonjourBrowser *(+0x128))
 ├── FUN_0005508c → FUN_00055f30 → "SAPService" singleton (announce + config;
 │     config mirror +0x45=group, +0x46=port, +0x49=AnnouncementEnabled,
 │     +0x125=BrowsingEnabled, +0x11a=SessionTimeoutSeconds)
 │     └── FUN_000550c0 → creates/kills "SAPReceiver" (FUN_00063a44)
 └── FUN_000e0314 / FUN_000e1494 → RtspServer(FUN_00054d88) + SIPHandler
     (FUN_00058bd4, spawned per controller via FUN_0009efd4 when flag +0x5cc)
```

`FUN_0006a6e4()` = `FUN_00087fb0()+0xc0` — the global mDNS/Bonjour service
interface object (register/browse/resolve; 12 callers incl. RTSP client,
per-stream advertiser, ARC transports).

---

## 1. RTSP by-name resolution

### 1.1 Card as RTSP **server** (it IS a stream source)

- Request dispatch: `FUN_000db030` → session-container getter
  (`thunk_FUN_0008b5d4`) → **`FUN_000b7dac`** → **`FUN_0015c49c`**:
  iterates the per-outgoing-stream session objects (+0x7c list). Each session
  stores `+0x44` = URL path `"/by-name/<User_StreamName>"` and `+0x54` = a
  1-byte rolling id. URL forms accepted:
  - `rtsp://<card>/by-name/<stream name>` — strcmp against +0x44
  - `rtsp://<card>/by-id/<n>` — parses trailing int, compares +0x54 byte
- On match → **`FUN_00152ae8`** = **SDP generator** (also used by SAP announce).
  Emits (string table verified @0x152e9c–0x1533a4; identical to live `/status`
  capture):
  ```
  v=0
  o=- <id8> 0 IN IP4 <card-ip>
  s=<User_StreamName>            (s=SIP<id> for unicast sessions)
  t=0 0
  a=clock-domain:PTPv2 <domain>
  m=audio <port> RTP/AVP <pt>
  c=IN IP4 <group>/<ttl>         (or own IP for unicast)
  a=rtpmap:<pt> <codec>/<rate>/<ch>
  a=recvonly                     (a=sendonly for unicast)
  a=framecount:<spp>
  a=sync-time:0
  a=ptime:<ms>
  a=ts-refclk:ptp=IEEE1588-2008:<gm-clockid>:<domain>
  a=mediaclk:direct=0
  ```
  The session objects are created/advertised by **`FUN_000524c0`** (per
  outgoing stream; builds `/by-name/<name>` path, 1-byte id counter, packet
  buffers). For **multicast** dest (`+0x30 & 0xf0 == 0xe0`) it additionally:
  - registers a Bonjour service `"_rtsp._tcp,_ravenna_session"` in `local.`
    domain via `FUN_0006a6e4()->vtable[+4]` (= mDNS serviceRegister)
  - enqueues a SAP announcement via `FUN_00055d44` (→ SAPService queue).
- Server answers only **DESCRIBE, SETUP, TEARDOWN, PLAY** (+GET_PARAMETER);
  request classes `RtspServerRequest{Describe,Setup,Play,Teardown,GetParameter}`
  — SETUP creates a `RtspServerSession` = unicast pull (RTP TX to client).
  DESCRIBE of an unknown name → 454 (as seen live on `/`).

### 1.2 Card as RTSP **client** (native subscribe path)

**`FUN_00078f1c` = RTSP client DESCRIBE** (callers `FUN_000787b0`,
`FUN_00078b40`):

```
sock = socket(2,1,6); connect({family, port=*(param_4+0x10)=554, ip=*(param_3+4)});
send: "DESCRIBE rtsp://" + *(param_4+0xc)  (host = dotted IP)
      + "/by-name/" + *(param_4+8)         (stream name)
      + " RTSP/1.0\r\nCSeq: 2\r\n" + "\r\n"
recv loop ≤20 × recv(255B, timeout 8) with 20ms sleeps;
find "\r\n\r\n" → strip headers → FUN_00056158(out, body) = SDP_Parser.
```
- **The response status line is NOT checked** — anything after the first
  `\r\n\r\n` is fed to SDP_Parser. A minimal reply
  `RTSP/1.0 200 OK\r\nContent-Type: application/sdp\r\n\r\n<SDP>` is enough.
- No query params, no Accept/User-Agent headers, always `CSeq: 2`.

**`FUN_000787b0` = "service resolved → DESCRIBE"**: receives the mDNS resolve
answer record (`param_4+4` = raw IPv4, +0x10 port), formats `%u.%u.%u.%u`,
stores it in the resolved-service map (+0x184, keyed by param_6 stream-id),
then DESCRIBEs and copies the parsed SDP fields into the session entry
(name at +0x1c, addr +0x20, port, rate, codec str, channels, domain…) via the
SDP-field getters `FUN_00153704 / FUN_001536d0 / FUN_001536ec` (read
`+0x28`-list head: u16 port/PT, str addr/codec…), then notifies listeners
(`FUN_0007a620` → controller rebuilds `/stream_list`).

**`FUN_00078b40` = refresh tick**: iterates session map +0x1a0, picks the
entry with the **oldest last-seen** (+0x18 timestamp); if age >
`*(+0x2d4)` = RTSPReconnectionTime (default **60 s**, CnE
`AppSettings/Bonjour/RTSPReconnectionTime`) → re-DESCRIBE, merge fields,
notify. So discovered sessions are re-validated every ~60 s.

**How the name→IP resolution happens** (`FUN_0007a6a0`, called on browse
start): the manager registers **two DNS-SD browses** via
`FUN_0006a6e4()->vtable[+8]` with callback listener at `+0x114`:

| browse type string (@0x7a730/0x7a744) | subtype | handle |
|---|---|---|
| `"_http._tcp,_ravenna"` | `_ravenna` device browse | +0x16c |
| `"_rtsp._tcp,_ravenna_session"` | `_ravenna_session` stream browse | +0x170 |

then arms the timer at +0x1b0 with `*(+0x2d0)` = **SessionUpdateInterval
(default 10→5? CnE `AppSettings/Bonjour/SessionUpdateInterval`)** ms×1000 —
the periodic re-browse/resolve tick that also drives `FUN_00078b40`.

So the target IP is chosen **purely by mDNS/DNS-SD resolve** (service hostname
→ A record → `param_4+4`); the name in `/by-name/` = the DNS-SD service
instance name. Browse results/resolve completions are posted asynchronously
(`FUN_0007ac40`/`FUN_00078338` msg `{vt@0x260cb8, mgr, …, TXT/name payload}`
→ `vtable[+0x2c]` queue post; processed in the browser worker thread).

**Subscribe flow**: `User_SourceStreamName`/`streamPath` → controller looks up
the name in the RTSP-client session map (already DESCRIBEd) → **applies the
cached parsed SDP** straight to the decoder gates (same path as ManualSDP;
no second DESCRIBE at subscribe time). `RTSPReconnectionTime` only refreshes
the listing.

---

## 2. SAP (Session Announcement Protocol, RFC 2974)

Config (CnE `AppSettings/SAP`, mirrored into SAPService +0x45..0x125):
`MulticastAddress=239.255.255.255`, `Port=9875`, `AnnouncementEnabled=1`,
`BrowsingEnabled=0`, `SessionTimeoutSeconds=3600`.

### 2.1 Announce path — YES, the card SAP-announces (default ON)

- `FUN_00055564` = **SAPService thread main loop**: `FUN_000550c0` applies
  config (opens the announce socket `func_0x0019dc00(0x22)`, binds
  `FUN_0019d4b4`, sender `FUN_0019d264`); if `+0x49` (AnnouncementEnabled)
  → per-session jittered scheduler: for each queued announce record
  (`FUN_00055d44` enqueue, 0x20-B msg built by `FUN_000b2158` w/ msg-id-hash
  counter +0x11c):
  - interval = randomized, **clamped 4 s ≤ t ≤ 300 s** (SAP spec); each new
    announcement is **re-sent 3×** (`piVar16[7]` repeat counter);
  - **packet layout** (disasm 0x558a8–0x55964): byte0 = `0x20` announce /
    `0x24` delete (V=1, C-bit), bytes1-3 = msg-id-hash+flags pattern,
    bytes4-7 = origin IPv4 (SAPService +0x110..0x113), bytes8-23 = a 16-byte
    payload-type field copied from **`0x60236b98` = literal text
    "h record %s due to LOAddressAnswers %d"** (!), then the SDP at +0x18.
    ⇒ the 16-byte payload-type field should be `"application/sdp\0"` but the
    build points at an mDNS log string — **firmware quirk/defect**; a strict
    RFC peer would see the first 8 bytes "h record" instead of the MIME type.
    (Sendto = `func_0x0019e1b0(sock,sender,group@+0x45,port@+0x11a)`.)
  - `FUN_00152ae8` (the SDP generator) triggers re-announce via
    `FUN_000553b0` whenever the SDP text changes.
- For unicast streams no SAP announce (only `_rtsp._tcp` Bonjour — the
  `(&0xf0)==0xe0` branch in `FUN_000524c0`).

### 2.2 Browse path — OFF by default

- `FUN_000550c0` (SAPService::configure): **only if `+0x125`
  (BrowsingEnabled) ≠ 0** does it create `SAPReceiver` (`FUN_00063a44`,
  thread "SAPReceiver", consumer = SAPService `+0x30`) and start it
  (`vtable[+8]`); else it stops/frees the receiver. Default config = 0 →
  **the card ignores foreign SAP announcements unless enabled**
  (`set /AppSettings/SAP/BrowsingEnabled 1` or POST /general).
- **`FUN_0006243c` = SAPReceiver::process**: `netconn_recv` on the joined
  group (buffers via `func_0x0019dc00`/`FUN_0019d4b4`); per packet:
  - header checks: version top-bits must be 1 ("Invalid SAP version %u");
    origin IPv4 at `pb+8` (auth-offset `uVar25=(pb[0]&0xF)*4`); a
    msg-id-hash dedup guard vs `param_1+0x33`; C-bit ⇒ **deletion** path;
  - payload type must equal `"application/sdp"` at `pb+uVar25+0x10`
    ("Unknown payload type"), SDP body at `uVar25+0x20` →
    **`FUN_00056158` = SDP_Parser**;
  - valid SDP → session **keyed by (originIP, msgIdHash) u64**
    (`FUN_0007e210`); display name built as **`"sap:" + <name extracted
    from the SDP>`** (searches the SDP for a field boundary then appends);
    equal-name existing sessions are replaced (dedup-by-name);
  - store `{name, sdp-text, timestamp}` in map `+0x3f..0x43`, notify consumer
    `param_1[0x30]->vtable[0](entry)` + `vtable[+4]` (SAPService → forwards
    to listeners incl. the RavennaController → stream_list rebuild).
    Re-announcement of the same key just refreshes the timestamp (+0x18)
    and re-notifies only if the SDP text changed (`FUN_0007e02c` compare →
    `FUN_0007e220` update).
- **Timeout**: every `SessionTimeoutSeconds*1000/4` ms the receiver sweeps
  the map; sessions older than the timeout are removed + listeners notified
  (deletion). `FUN_00063a1c` writes `+0xcc`=group, `+0xce`=timeout.

---

## 3. SIP

- Full embedded SIP UA in the module (REGISTER/INVITE/ACK/BYE/CANCEL,
  `SIP/2.0`, port **5060**, region 0x16exxx–0x1bxxxx).
- `FUN_0009efd4` (called from `RavennaController::doInitialize`
  `FUN_0009da48`): if controller flag `+0x5cc` → spawn `SIPHandler` thread
  (`FUN_00058bd4`, stack 0x2000) with a config blob holding
  `SIPusername/SIPpassword/SIPserver/SIPFromURL` (the `SIPreceivers` CnE
  group + per-stream `User_SIPIdentity`/`OutputGroups` receiver identity);
  registers msg handler `FUN_000578b0(…,0x11)` and wires it to the
  RTSP-client manager (`FUN_00057578`).
- `FUN_000db050` = dispatch thunk → **`FUN_0009fb84` = doNotifyINVITE**
  (controller-side). Gates (per prior notes + error catalog): PTP domain,
  sampling rate, "not receive only", 486 Busy → **`FUN_000a1c50`** creates
  an RTP decoder; **`FUN_000d8124`** = "apply SDP" (calls `FUN_00056158`
  then codec-selector `FUN_000394dc` → `FUN_000708d0/70b28/70cb8` decoder
  ctors — same as RTSP/SAP paths).
- **Model**: phone-call style — a remote sender/UC INVITEs the card's
  receiver identity (`sip:<identity>@<card-ip>`) with its stream SDP in the
  INVITE body; the card parses the SDP and attaches a decoder (push/pull
  unicast AES67). Outgoing streams have `User_SIPIdentity` = their own URI
  so remote receivers can INVITE/BYE them (`RTPSIPUnicastController`).
  REGISTER support exists for `SIPserver`-based registrar setups; with
  empty `SIPserver` the UA answers direct INVITEs.
- vs RTSP/SAP: SIP is used for **unicast** streams where the peer is a SIP
  UA; SAP = multicast auto-discovery (off by default); RTSP/mDNS = the
  primary by-name path used by the web UI / ANEMAN-style tools.

---

## 4. stream_list internals

- **`/stream_list` JSON = `{"ArchwaveAES67":{"version":1,"streams":
  [{"name":<str>,"channelCount":<u16>}…]}}`** — built by **`FUN_00090ae8`**
  (JSON-writer `func_0x001d41f8/func_0x001d436c`, keys @0x90e64/0x90e78/
  0x90e80/0x90e90/0x90e9c). Serialized once into the WebsiteFS inner cache
  object at `+0x218` (ptr)/`+0x21c` (len) under lock `+0x1cc`; the GET
  dispatcher just returns the cached buffer.
- Sources merged (same pair used by `FUN_000d0834` = ARC `doNetGetStreamList`,
  which calls `*(+0x118)->vtable[+0x74](reply, idx, chCount, name)` per
  stream then `vtable[+0x78]` flush):
  1. **`FUN_00155c08`** — iterates the RTSP-client session map `+0x1a0`;
     an entry is listed **only if its SDP fully parsed**: +0x26 channel
     count≠0, +0x28/0x2c (rate) nonzero, +0x30/0x34 (addr) nonzero,
     +0x38 flag, +0x44 nonempty — i.e. *successful by-name DESCRIBEs*.
  2. **`FUN_001536b0`** — iterates the SAPReceiver session map
     (`SAPService+300 → +0x10c`); entries = `"sap:<sdp-name>"`, ch count
     from parsed SDP `+0x36`.
- **Lifecycle**: rebuilt on demand at WebsiteFS construction
  (`FUN_00093540` calls `FUN_00090ae8` right after `FUN_0008df44`) and on
  every listener notification (RTSP session add/refresh/remove →
  `FUN_0007a5b8/FUN_0007a620` → controller → rebuild; SAP add/delete/expire
  the same). No separate TTL at the JSON level — staleness is governed by
  SAP `SessionTimeoutSeconds` (3600 s) and the 60 s RTSP re-describe tick.
- The companion `/device_list` cache (+0x1c4) comes from the
  `_http._tcp,_ravenna` device browse (FUN_0008df44) — not needed for
  stream subscription.

---

## 5. Minimal viable discovery — wire-level checklist for a PC sender

**Goal**: card finds the sender natively (appears in `/stream_list`, usable
as `streamPath`/`User_SourceStreamName`) — *no manual SDP*.

### Path A — RTSP+mDNS (REQUIRED path; this is what the card browses)

1. **mDNS/DNS-SD announce** on `local.`:
   - PTR for **`_ravenna_session._sub._rtsp._tcp.local`** (subtype
     `_ravenna_session` of `_rtsp._tcp`) → SRV/TXT → host A-record.
   - Service **instance name = the stream name** (this string becomes both
     the `/stream_list` name and the `/by-name/` URL tail).
   - TXT: RAVENNA convention (session attrs optional; the card only needs
     resolve→DESCRIBE).
   - (Device-level `_http._tcp,_ravenna` is browsed too but only feeds
     `/device_list` — optional.)
2. **RTSP server on the sender** (port 554 or the SRV port):
   - accept TCP; expect literally:
     `DESCRIBE rtsp://<sender-ip>/by-name/<name> RTSP/1.0\r\nCSeq: 2\r\n\r\n`
   - reply: `RTSP/1.0 200 OK\r\n\r\n<SDP>` — status line never parsed;
     card splits at first `\r\n\r\n`, everything after goes to SDP_Parser.
3. **SDP body** must satisfy `FUN_00056158` — minimum viable:
   ```
   v=0
   o=- <id> 0 IN IP4 <sender-ip>
   s=<name>
   t=0 0
   c=IN IP4 239.x.x.x/<ttl>          (class-D — REQUIRED for subscribe)
   m=audio <port> RTP/AVP <pt>
   a=rtpmap:<pt> L24/48000/<ch>      (L16/L24/L32/AM824; rate must equal
                                      card's rate & be EnabledIn1x/2x/4xFS)
   a=recvonly
   a=framecount:<spp>                (48/96/192)
   a=sync-time:0
   a=ptime:<ms>
   a=ts-refclk:ptp=IEEE1588-2008:<gm-id>:<domain>   (domain == card's PTP
     DomainNumber)  +  a=mediaclk:direct=0
   — OR omit both ⇒ stream treated as asynchronous (accepted)
   ```
4. Card then: resolves→connects→DESCRIBE→SDP_Parser→session→stream_list
   (~within SessionUpdateInterval 5 s + RTSPReconnectionTime 60 s refresh).
   Subscribe: POST `/outputs` `streamPath="<name>/<chan>"` or SDS
   `set .../User_SourceStreamName <name>` → cached SDP → decoder.
5. RTP packets must then land in the playout window (48 kHz, correct PT,
   PTP-locked timestamps for `Receiving`; otherwise decoder stays
   `Waiting`/status 10 — separate issue, see `ghidra_audiolan_thumb.md` §4).

### Path B — SAP alone

- **Insufficient by default** (`BrowsingEnabled=0`); must first enable:
  `set AppSettings/SAP/BrowsingEnabled 1` or POST /general
  `SAP.BrowsingEnabled`.
- Then: multicast to `239.255.255.255:9875` (CnE-configured group):
  byte0=`0x20` announce / `0x24` delete (V=1), msg-id-hash u16 (dedup key
  with origin IP — **vary it per session, keep it stable per announce**),
  origin IPv4, payload type `"application/sdp"`, then the same SDP as above.
- Stream appears as `sap:<name>`, timeout `SessionTimeoutSeconds`=3600 s
  (re-announce ≥ every ~5–300 s is fine; deletion on SAP-delete or timeout).
- Caveat: the card's own announce packets carry a bogus 16-byte type field
  (`"h record %s due "` literal @0x236b98) — do not copy that bug; emit
  `"application/sdp\0"`.

### Path C — SIP (optional, unicast)

- Direct `INVITE sip:<receiver-identity>@<card-ip>:5060` with the SDP body
  → `doNotifyINVITE` builds a decoder (subject to PTP-domain/samplerate/
  486-busy gates). Registration is only needed if `SIPreceivers.SIPserver`
  is configured; otherwise the UA answers direct INVITEs.

### Answer to the core question

- **`rtsp://<sender-ip>/by-name/<name>` is the native mechanism — but it is
  discovered via mDNS, not dialed manually.** The card never needs the
  sender's SDP out-of-band: sender advertises
  `_rtsp._tcp` + `_ravenna_session` subtype, card resolves host→IP and does
  the by-name DESCRIBE itself.
- **Minimum sender footprint**: mDNS advertisement + a ~20-line TCP server
  that answers the DESCRIBE with a static SDP string. No SIP, no SAP needed.
- SAP-announcing alone works only after enabling BrowsingEnabled; mDNS is
  mandatory for the default configuration (the card does not perform a bare
  `/by-name/` guess without a resolved service).

---

## Key evidence anchors

| what | file offset | dump |
|---|---|---|
| RTSP client DESCRIBE | `FUN_00078f1c` | disc_rtsp_client.txt |
| resolve→DESCRIBE / refresh | `FUN_000787b0` / `FUN_00078b40` | disc_rtsp_client.txt |
| browse registrations | `FUN_0007a6a0` ("_rtsp._tcp,_ravenna_session" @0x7a744) | disc_browse.txt |
| BonjourBrowser ctor + intervals | `FUN_0007a764` | disc_rtsp_mgr2.txt |
| per-stream advertise (by-name path + Bonjour reg + SAP enqueue) | `FUN_000524c0` | disc_byname.txt |
| server URL dispatch /by-name/, /by-id/ | `FUN_000db030`→`FUN_000b7dac`→`FUN_0015c49c` | disc_byname.txt, disc_msg.txt |
| SDP generator | `FUN_00152ae8` (strs @0x152e9c+) | disc_sip.txt |
| SAPService ctor / configure / loop | `FUN_00055f30`/`FUN_000550c0`/`FUN_00055564` | disc_sap.txt, disc_msg.txt |
| SAPReceiver::process | `FUN_0006243c` (mime @+uVar25+0x10, SDP @+0x20, `sap:` name) | disc_sap.txt |
| SIP: handler ctor / INVITE / apply-SDP | `FUN_00058bd4`/`FUN_0009fb84`/`FUN_000d8124` | disc_streamlist.txt |
| /stream_list builder | `FUN_00090ae8` (cache +0x218) | disc_streamlist.txt |
| ARC doNetGetStreamList | `FUN_000d0834` | disc_lookup.txt |
| RavennaController ctor / listener wiring | `FUN_000a3030`/`FUN_00093508` | disc_lookup.txt, disc_byname.txt |

### Open items / uncertainties
- The exact auth/version guard `param_1+0x33` in `SAPReceiver::process`
  (compares packet's msg-id-hash field; likely last-hash dedup — the
  surrounding `==` branch direction needs one more disasm pass).
- The SAP TX byte order in [1..3] is non-RFC-ish (hash bytes swapped /
  flag duplicated) — worth a live capture if a peer ever needs to consume
  the card's own SAP announcements.
- `FUN_000787b0`'s invoker is a queued-message exec inside the browser
  worker (no direct xref — std::bind/vtable dispatch); the pending-resolve
  map `+0x184` vs session map `+0x1a0` split mirrors that.
