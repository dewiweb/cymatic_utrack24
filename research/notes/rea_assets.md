# REA analysis session — 2026-11-02

Binaries re-acquired and re-analyzed with REA (rea-agents 6.8.0) + Ghidra 12.1.4.
Raw binaries live in `research/assets/` (gitignored, "kept locally, not published").

## Download sources (still live on cymaticaudio.com, WP File Download)

| Target | URL |
|---|---|
| uTrack24 fw 4218 | `…/download/564/utrack24-firmware-update-files/89255/utrack24-release-4218-cymatic-audio.zip` |
| uTrack24 fw 4064 | `…/89254/utrack24-release-4064-cymatic-audio.zip` |
| uTrack24 net-update 3124 | `…/89253/utrack24-network-update-3124-cymatic-audio.zip` |
| uTrack24 3124 updaters osx/x64/x86 | `…/89256..89258/…` |
| AudioLAN card fw 4078 | `…/download/552/audiolan/89261/utrack24-audiolan-release-4078-cymatic-audio.zip` |
| uTool2 win/mac | `…/download/540/utool/90202/utool2-installer-windows.exe`, `…/90201/utool2-installer-mac.pkg` |
| USB audio driver 6.19.1 signed/unsigned | `…/download/563/windows-usb-audio-driver/89262..89263/…` |
| uTrack-X32 fw 2905/3865/5000 | `…/download/571/utrack-x32-firmware-update-files/89284..89286/…` |

Wayback Machine only (site no longer serves them):
- `uRemote_win_1.2.009.zip` — `web.archive.org/web/20160424103204id_/http://cymaticaudio.com/images/downloads/drivers_and_firmware/uRemote_win_1.2.009.zip`
- `uRemote_OSX_1.2.009.zip` — `…/20160424103037id_/…uRemote_OSX_1.2.009.zip`
- `uTool_Installer_1.1.46_Win.zip` — `…/20160424103106id_/…uTool_Installer_1.1.46_Win.zip`

## REA setup notes

- REA MCP server registered in `~/.config/devin/mcp_config.json` but the client
  needs a restart for tools to appear; the CLI (`rea`) works standalone.
- REA 6.8.0 requires **Ghidra 12.1.x** (verified 12.1.4); system has 12.0.4 in
  /opt → rejected (`unsupported_version`). Workaround: user-local Ghidra at
  `~/tools/ghidra_12.1.4/ghidra_12.1.4_PUBLIC`, pass `GHIDRA_INSTALL_DIR=<path>`
  to every `rea` invocation. Hopper/IDA/Kuna not configured (fine — Ghidra covers it).
- `.bcd` containers aren't auto-detected →
  `rea analyze FILE.bcd --target-format raw-binary --architecture arm --entry-point 0x0`
  (flat load at 0, file offset = address, same convention as earlier Ghidra work;
  BcOd header bytes disassemble harmlessly until reset branch at 0x94 → 0xBC).
- Each CLI call spins an ephemeral Ghidra project (analysis re-runs every call,
  ~3–5 min per 3 MB firmware). `decompile-all` batches pseudocode export;
  `--resume` needs an existing `decompile-journal.jsonl` in the output dir.

## Results so far (`research/rea/`)

| File | Content |
|---|---|
| `analyze_4218.json` | uTrack24 fw 4218: 10,238 procs, 9,911 strings, ram 0x0–0x2ea800 |
| `analyze_4064.json` | uTrack24 fw 4064: 10,289 procs, 9,849 strings |
| `analyze_3124.json` | uTrack24 fw 3124: 8,710 procs, 8,468 strings |
| `analyze_audiolan.json` | AudioLAN card fw 4078: 6,399 procs, 7,475 strings |
| `analyze_uremote.json` | uRemote.exe PE32@0x400000: 18,336 procs, 2,799 strings |
| `analyze_utool2.json` | uTool2.exe PE32 (JUCE) |
| `analyze_uremote_macho.json` | uRemote.app/Contents/MacOS/uRemote (Mach-O via Ghidra) |
| `mixerpanel_members.json` | `uTrack24 Mixerpanel.exe` full .NET member inventory |
| `decomp_uremote/` | full uRemote.exe pseudocode export (decompile-all, gitignored) |

## Driver package findings (utrack24_usb v6.19.1)

- `utrack24_usb{,_x64}.sys` — WDM function driver (ntoskrnl + USBD only),
  VID_1511&PID_0043 (INF), child-device enumerator `utrack24_usb_ENUM`.
- `utrack24_usb_avs{,_x64}.sys` — AVStream audio driver.
- `utrack24_asio{,_x64}.dll` — ASIO user-mode driver (COM exports), talks to the
  kernel driver via `DeviceIoControl`.
- `BebobDriverInterface.dll` — native C++ `CDriverInterfaceClass`, **82 exports**:
  `GetLevelMeterData`, `GetChanProp`, `Get/SetSyncMode`, `GetFirmwareVersion`,
  `ConnectDevice`, `setChannelInputMonitor{Vol,Pan,Mute}`, `SetCrossFader`,
  `Get/SetAsioBufferConfiguration`, `Get/SetStreamBufferConfiguration`,
  `GetCurrent{Spdif,Optical}InputDetectionStatus`, `GetDeviceProps`, …
- `uTrack24 Mixerpanel.exe` — **fully managed .NET** (`Bebob_Mixerpanel`):
  `CDriverInterface` P/Invokes mirror every `Call*` export (432 methods, 74 types);
  types for channel props, sync source, sample-rate info, ASIO/stream buffers,
  AM824 sampling freq enum (`ESFI_AM824_MBSamplingFreq` — BeBoB heritage).

## Pending / next

- `decompile-all` on uRemote.exe running (18k procs); driver .sys + firmwares next.
- `analyze-javascript-application assets/audiolan` — 300 KB minified Angular
  bundle exceeds the 300 s default per-source deadline; retry with
  `--analysis-timeout-ms 900000`.
