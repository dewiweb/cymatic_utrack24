# cymatic_utrack24

Reverse engineering & repurposing of the discontinued **Cymatic Audio uTrack24**
multitrack recorder/player and its **AudioLAN (AES67/RAVENNA) option card**.

Cymatic Audio was closed by RIEDEL in 2022. This project documents the device's
internals and provides tools to control and repurpose it.

## What works today

- **Full remote control** via the undocumented Telnet `sds://` shell (port 23):
  parameter tree, transport (`fileplay`/`filerec`), mixer, USB filesystem
- **AES67 network → analog audio pass-through**: PC streams RTP/L24 to the
  AudioLAN card, audio comes out of the D-Sub outputs / headphone
- **AES67 transmission**: the card already streams all 24 channels (3×8ch
  multicast L24)
- Partial CHAI/CopperLan protocol map (541 SDK exports, message families)

## Layout

- `src/utrack_telnet.py` — Python client for the sds:// Telnet shell
- `src/ptp_master.py` — minimal PTPv2 grandmaster (domain 0)
- `src/fake_aes67_sender.py` — AES67 test sender (RTP/L24 + SAP, PTP-locked)
- `RESEARCH.md` — full technical research report
- `research/` — firmware images (.bcd), uRemote.exe, CHAIFreeware.dll,
  protocol notes, archived docs, packet/API dumps

## Status

Research stage. No affiliation with Cymatic Audio / RIEDEL. Reverse
engineering for interoperability only.
