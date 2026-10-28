# cymatic_utrack24

Reverse engineering & repurposing of the discontinued **Cymatic Audio uTrack24**
multitrack recorder/player and its **AudioLAN (AES67/RAVENNA) option card**.

Cymatic Audio was closed by RIEDEL in 2022. This project documents the device's
internals and provides a working replacement remote + multitool.

## What works today

- **Qt remote control** (`src/utrack_remote_qt.py`): transport (play/stop/rec/marker),
  24-ch mixer (fader/pan/mute/solo + **live vu-meters ~20 Hz**), takes browser
  (rename/delete/rec-log), settings, AudioLAN config, input-select matrix —
  driven by the replayed CHAI/CopperLan session (uRemote identity)
- **CopperLan meter stream**: the subscription keepalive pattern (`c423`
  rotation) unlocks the continuous `4437` notification flood — decoded from
  wire captures
- **AES67 receive path proven**: PC → RTP/L24 multicast → AudioLAN card →
  uTrack mixer (digital inputs), audible on outputs/headphone
- **AES67 senders**: the card streams 24 channels (3×8ch multicast L24)
- **Telnet `sds://` shell** (port 23): full parameter tree, transport,
  mixer (`querylevels`, `get/set`), `inputselect` analog/digital per 8-ch
  block, filesystem, raw memory `rd`/`wr` for firmware-level debugging
- **USB audio-interface mode** mapped: device switches personality (0
  CopperLan controls), Windows WDM driver + BeBoB IOCTLs documented

## Layout

- `src/utrack_remote_qt.py` — Qt GUI (main app)
- `src/utrack_control.py` — CHAI/CopperLan client (session replay, keepalives,
  notifications, writes)
- `src/utrack_telnet.py` — SDS shell client
- `src/audiolan_api.py` — AudioLAN JSON/HTTP API client
- `src/fake_aes67_sender.py` — AES67 test sender (RTP/L24 sweep + SAP + PTP)
- `src/ptp_master.py` — minimal PTPv2 grandmaster
- `RESEARCH.md`, `MEMOIRE_RE.md`, `research/` — firmware, captures, notes,
  decompilation output, manuals

## Status

Active development. No affiliation with Cymatic Audio / RIEDEL. Reverse
engineering for interoperability only — clean-room from public docs,
packet captures and controlled hardware tests.
