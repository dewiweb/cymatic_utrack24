# Code review — Qt remote GUI + clients vs firmware-RE findings

Scope: `src/utrack_remote_qt.py`, `src/utrack_control.py`, `src/audiolan_api.py`,
`src/audiolan.py`, `src/utrack_telnet.py`, `src/chai_client.py`, `src/chai_session.py`.
Checked against: `ghidra_utrack_notify.md`, `ghidra_utrack_files.md`,
`ghidra_utrack_map.md`, `audiolan_http_api.md`, `ghidra_utrack_dsp.md`,
`MEMOIRE_RE.md`, `device_model.md`, `evidence/mixer_stat_full.txt`.

READ-ONLY review — no source files were modified.

---

## P0 — broken functionality / freeze-class bugs

### P0-1. Locate/loop writes (0xd001/2/3) use the wrong wire format AND truncate to u16
- **Files:** `src/utrack_remote_qt.py:100-103` (transport `►| / ⟲A / B⟲` buttons),
  `src/utrack_control.py:170` (`num()`), `src/utrack_control.py:216-218`
  (`seek/loop_in/loop_out`), `src/utrack_control.py:57` (`NUM_VAL_OFF`, `'<H'` pack).
- **Issue:** `num()` emits TLV `4237` (numeric write, value = u16). RE says
  0xd001/0xd002/0xd003 are declared **c3 text controls**; the write arrives at the
  device on the **text-write slot** (listener vtable +0x0c → `FUN_000abbc8`),
  payload = **decimal ASCII integer** (`strtol`), not a 4237 numeric write
  (`ghidra_utrack_files.md` §1 + §1b). `FUN_000acd6c` (the 4237 dispatcher) only
  handles 0xb201/0xb202/0xd050+/0xd070+ — a 4237 write to 0xd001 is dropped.
  On top of that `struct.pack('<H', val)` truncates: positions >65535 samples
  (~1.4 s @48 kHz) wrap silently.
- **RE ref:** `ghidra_utrack_files.md` §1 vtable table, §1b; `device_model.md` §Écriture.
- **Fix:** build a third template for the text-write message (capture uRemote
  dragging the position bar / Loop button, or derive the TLV from the
  `FUN_000abbc8` handler path); send `str(sample).encode()`; route `seek/loop_in/
  loop_out` and the three GUI buttons through it. Remove them from `num()`.

### P0-2. Unguarded keepalive send can kill the receive loop leaving `alive=True`
- **File:** `src/utrack_control.py:133` — `self._send(frame(b'',0xa));last=time.time()`
  is **outside** any try/except (contrast lines 129-131 where the HB send is
  wrapped in `except OSError: break`).
- **Issue:** socket is `settimeout(0.2)`; `sendall` on a half-dead link raises
  `socket.timeout`/`OSError` → propagates out of `_loop` → thread dies
  **without reaching `self.alive=False` at line 134** → `ensure_alive()` never
  fires → session dead forever: meters freeze, status stale, all writes throw.
  This is a plausible residual cause of the reported GUI freezes after the
  telnet timeout fix.
- **Fix:** wrap the ping send like the HB send (`except OSError: break`), or
  better: wrap the whole loop body so `alive=False` is always reached
  (try/finally around the `while`).

### P0-3. Successful reconnect never re-enables the UI
- **File:** `src/utrack_remote_qt.py:486-493, 518` (`_refresh`), `111` (initial
  `setEnabled`), `src/utrack_control.py:97-109` (`ensure_alive`/`_reconnect`).
- **Issue:** widgets are enabled only on the one-shot `_conn=='ok'` transition.
  If the first connect fails (`_conn=Exception` → `'done'`), `ensure_alive()`
  keeps reconnecting in the background every tick — when it eventually
  **succeeds**, `gb_tr`/`tabs` stay disabled forever; the overlay never
  reappears; there is no indication the session is alive. Conversely after a
  mid-session drop there is no visual disconnected state at all.
- **Fix:** in `_refresh`, drive enable state from `u.alive`
  (`self.gb_tr.setEnabled(u.alive); self.tabs.setEnabled(u.alive)` + overlay
  show/hide), not from the initial `_conn` flag.

---

## P1 — correctness vs RE (wrong values / dead controls)

### P1-1. Input-select read-back is inverted in the matrix tab
- **File:** `src/utrack_remote_qt.py:415-419` (`_fill_matrix`), read path
  `src/utrack_control.py:201-205`.
- **Issue:** `m='digital' if sel[blk] else 'analog'`. RE: `inputselect` writes
  HWCom ctx+0x7c bits24-26 as `(isDigital^1)&1` — **bit set = analog, clear =
  digital** (`ghidra_utrack_dsp.md` §1); status-word bits1-3 are this exact
  mask (`ghidra_utrack_notify.md` §2). So a bit=1 block is displayed 'digital'
  when the hardware is on **analog** — colours/letters are backwards whenever
  the 0xf050 path is live.
- **Fix:** `m='analog' if sel[blk] else 'digital'`. Verify once on hardware
  (bit semantics are unambiguous in firmware but one visual check is cheap).

### P1-2. channelmode labels are wrong
- **File:** `src/utrack_remote_qt.py:515` —
  `{0:'normal',1:'mono',2:'stereo',3:'?'}`.
- **Issue:** RE (`ghidra_utrack_dsp.md` §3): mode list is
  `0: 24In/26Out, 1: 24In/2Out, 2: 8In/26Out, 3: 8In/10Out`. 'mono'/'stereo'
  are misleading.
- **Fix:** use the RE labels (e.g. `'24in/26out'`), keep showing raw mode if 3.

### P1-3. 0xb201/0xb202 writes are known-dead on the device — spinboxes are dummies
- **Files:** `src/utrack_remote_qt.py:213-219` (Atténuation/Délai spinboxes →
  `u.num`), `src/utrack_control.py:170`.
- **Issue:** verified FAIL on hardware: 4237 numeric writes to 0xb201/0xb202 get
  no echo, value unchanged (`device_model.md` §Vérification). RE: they go
  through the `uCL+0x848` commit path / deferred-commit pump `FUN_0013e4a4`
  bits 1/2 (`ghidra_utrack_notify.md` §7, `ghidra_utrack_files.md` §1c) — an
  extra commit step our message lacks.
- **Fix:** either implement/verify the commit mechanism, or disable the two
  spinboxes with a "non fonctionnel — cf RE" tooltip. Also relabel 0xb202:
  it is **MIDI Offset** (`MEMOIRE_RE.md`:190, `ghidra_utrack_map.md`), not a
  monitor delay.

### P1-4. 0xb204 domain too wide
- **File:** `src/utrack_control.py:37` — `0xb204` and `0xb205` both use
  `range(1,32,2)` (1-2 … 31-32).
- **Issue:** RE (`device_model.md` domain table, `ghidra_utrack_map.md` §3):
  0xb204 = **88/96 kHz** stereo outs → valid ids **1..7** only; 0xb205 =
  44/48 kHz → 1..31. GUI offers 9..31 on b204 — out-of-domain writes.
- **Fix:** `0xb204:[(n,...) for n in range(1,8,2)]`; also relabel the combos to
  show the rate (`'Sorties stéréo 88/96k'` / `'Sorties stéréo 44/48k'`).

### P1-5. SDS meter fallback scaling (`>>12`) makes bars ~empty
- **File:** `src/utrack_remote_qt.py:405` —
  `min(65535,int(v,16)>>12)` on `mixer querylevels` u32 peaks.
- **Issue:** observed live peaks are right-justified ≤0xFFFFFF-class values
  (`evidence/mixer_stat_full.txt`: `0x000099FF…0x0000EC00`, i.e. quiet-signal
  ~-20 dBFS for 24-bit samples). `>>12` maps those to 9–14 on a 0–65535 bar →
  the SDS fallback meters look dead; even full-scale 24-bit (0x7FFFFF) only
  reaches ~3%. If peaks were instead left-justified s32, `>>12` would peg
  everything above ≈-1.6 dB — wrong either way.
- **Fix:** calibrate against the CHAI e0xx u16 values (same peak source); for
  24-bit right-justified peaks `v>>7` ≈ u16 FS. Mark with a hardware-check
  comment.

### P1-6. `_send` throws into Qt slots when the socket is dead
- **File:** `src/utrack_control.py:66-67` — `self.s.sendall` with no guard;
  `self.s` may be closed (after `close()`/session death) or replaced during
  `_reconnect`.
- **Issue:** every UI write path (`_flush` fader/pan 40 ms timer, mute/solo,
  transport buttons) propagates `OSError`/`AttributeError` into Qt slots —
  repeated tracebacks while dragging on a dead link; combined with P0-3 the
  controls stay clickable while dead.
- **Fix:** `def _send: s=self.s; if s is None or not self.alive: return` +
  try/except OSError → set `alive=False` (which also fixes P0-3 by letting the
  UI reflect the drop).

---

## P2 — robustness / smaller correctness

| # | File:line | Issue | Fix |
|---|---|---|---|
| P2-1 | `utrack_control.py:97-101` + `utrack_remote_qt.py:518` | Reconnect storm: `ensure_alive()` runs every 100 ms tick; when VNM :55000 is refused, a new thread+socket is spawned ~10×/s forever | Backoff: store `self._next_retry`, only retry every ~2 s |
| P2-2 | `utrack_remote_qt.py:393-409` | `_meters_tick` spawns a thread each second; a dead device makes each `Tel()` connect take 2 s → overlapping worker pile-up | In-flight flag; skip tick while a worker runs |
| P2-3 | `utrack_remote_qt.py:338-343` | Route-combo '—' (unsubscribe) sets `streamPath=''` but leaves a non-empty `manualSDP` → per the POST coupling table, manual SDP wins → output **stays subscribed** | On '—', also `t['manualSDP']=''` (unsubscribe = both empty); `manualSDPChannel` already preserved |
| P2-4 | `chai_client.py:16`, `chai_session.py:33` | `self.s.connect((host,port))` / `s.connect` with **no timeout** — the same freeze class as the reported telnet bug; blocks indefinitely if VNM is down | `s.settimeout(4)` before connect (these are CLI-side but are transport layers in scope) |
| P2-5 | `utrack_control.py:120-127` | `parse()` returns `ok` (checksum) which is never checked — corrupt/misaligned frames feed `_update` | `if not ok: continue` |
| P2-6 | `utrack_control.py:103-109` | If `connect()` raises mid-replay (after `self.s` assigned), the half-open socket leaks (not closed) | `try: …connect() except: self.s.close(); raise` or close in `_reconnect`'s except |
| P2-7 | `utrack_remote_qt.py:475-484` | `_take_op` failure path only re-enables `btn_ref` (via `_take_err`); `btn_ren`/`btn_del` stay disabled until next selection change | Re-enable all three in the `_take_err` branch |
| P2-8 | `utrack_telnet.py:183-186` | `t['duration']=wi['samples']/wi['sample_rate']` — KeyError if `wavefile` output lacks a key (parse drift) → whole `takes()` fails | `wi.get('samples',0)/max(wi.get('sample_rate',1),1)` guarded |
| P2-9 | `utrack_remote_qt.py:440` | `_take_sel` early-returns when `self.tel is None` → selecting a take before first refresh does nothing (reclog never loads until re-select) | Allow lazy `Tel()` creation like `_take_op` does |
| P2-10 | `utrack_remote_qt.py:98-103` | `pos` spinbox + dead locate/loop buttons visible/enabled while the write path is broken (P0-1) | Disable until text-write implemented |
| P2-11 | `utrack_control.py:138-156` | `state` entries never expire (except meters' 2 s freshness check); after a reconnect-less death, pan/fader/mute show stale values | Treat all controls like meters (staleness) or clear `state` in `_reconnect` |
| P2-12 | `utrack_remote_qt.py:455` | duration format `'%d:%04.1f'` — for ≥60 min reads e.g. `61:30.0` (mins not split to h:mm) | cosmetic `h:mm:ss.s` |
| P2-13 | `utrack_remote_qt.py:344-351` | `_alan_apply` posts sources → general → outputs; a mid-sequence failure leaves a partial apply with no rollback and only a statusbar line | Report which POST failed; suggest re-read (`_alan_refresh`) on error |

---

## P3 — hygiene / stale comments / missing RE-driven features

### Hygiene
- **Duplicate AES67 client:** `src/audiolan.py` (urllib, read-only subset) vs
  `src/audiolan_api.py` (full r/w client used by the GUI). `audiolan.py` is only
  imported by legacy `utrack.py`/`utrack_gui.py`/`utrack_qt.py`. Fold legacy
  users onto `audiolan_api` or mark `audiolan.py` deprecated.
- **Stale comment contradicting RE:** `utrack_remote_qt.py:371-372` legend says
  *"l'état de sélection n'est pas lisible sur l'appareil"* — false since
  0xf050 bits1-3 were RE'd and are already decoded by the same file (line 355
  contradicts 371). Remove the second sentence.
- `utrack_remote_qt.py:355,371` use `objectName='info'` but the stylesheet
  defines no `#info` (only `#dim`) → unstyled. Add `QLabel#info{color:#9aa0a8}`.
- `chai_client.py` = standalone member-declaration experiment, unused by the
  GUI; `chai_session.run()` = standalone replay loop. Both fine as tools but
  neither has a timeout (P2-4) or a docstring pointing at their status.
- `utrack_control.py:158-164` `wait()` unused by the GUI (tools only) — keep,
  but document.
- `closeEvent` (`utrack_remote_qt.py:560-561`) closes `u` but not `self.tel`
  (daemon thread dies anyway; tidy: `self.tel and self.tel.close()`).
- Connect path replays all 1073 init msgs with ~20-25 ms drain each ≈ **~25 s**
  adoption time (`utrack_control.py:82-83`). Consider batching sends / shorter
  drains after the critical section.
- `audiolan_api.py:25` `b'gzip' in head` false-positives on the substring
  anywhere in headers; check `Content-Encoding: gzip` properly.
- `_alan_apply`'s `idmap` (`utrack_remote_qt.py:329`) keyed on `id()` of
  originals is clever-but-fragile; a comment explaining the
  original→deepcopy mapping would help.

### Missing RE-driven features (ranked by value)
1. **0xf010 "UTrack State" (+0xf011/12/13)** — drive a transport-state
   indicator and gate REC/marker correctly instead of the current
   GUI-local `self.mk.setEnabled` heuristic (`utrack_remote_qt.py:105-107`).
   `ghidra_utrack_notify.md` §3.
2. **filerec/fileplay `stat`** — wrappers exist (`utrack_telnet.py:117-124`,
   `play_stat`) but GUI never calls them; RE gives the full field list
   (DropOuts, WriteErrors, TotalSamples…) — `ghidra_utrack_files.md` §4.
   Cheap, high-value status panel.
3. **0xf006/0xf007/0xf008/0xf009/0xf00b** — played/remaining time, loop in/out,
   markers → position readout; pairs with P0-1 locate.
4. **Prev/Next/Save:** `0xd000` values 1,2,6 → UI events 0x194/0x195/0x192 —
   skip buttons; during REC they also drop markers
   (`ghidra_utrack_files.md` §1a). Add buttons next to MARQUEUR.
5. **CopperLan file browser:** 0xc001 (chdir text write), 0xc003 (list:
   0=up, 1=root, `val&0xf000`→entry select/load take), 0xc010 (file-select
   query) — enables "load take" and navigation without telnet.
   `ghidra_utrack_files.md` §1c.
6. **0xd008/0xd009** playlist song select / exit playlist mode.
7. **`file dir free`** → disk-free display in takes tab.
8. **SDS `channelmode`/`samplerate`/`sync`/`dsp stat`/`sys ver`** — settings
   tab or status bar (`ghidra_utrack_map.md` §1).
9. **Monitor/Bus faders** = mixer ch 24/25 (`ghidra_utrack_dsp.md` §4) and
   **meters 24/25** (0xe018/19) — the strips/meters already index 0..23 only;
   two extra strips + `mixer store` (persist to CnE) button.
10. **AudioLAN status tab:** decode `outputs[].status` via
    `parameter_strings.streamStatus` (0-15 table, `audiolan_http_api.md` §5.1),
    show PTP state + `needsReboot`, playoutDelay editor, guarded
    `POST /command` reboot. `audiolan_api.AudioLan.reboot` already exists,
    unused.
11. **0xf060 Error Code** — surface in status bar.
12. **0xb206** is writable (Stereo Post Fader, `ghidra_utrack_map.md`) —
    currently read-only raw 'b206' (`utrack_remote_qt.py:222`); make it a
    checkbox. MADI `0xb3xx` family exists only when a MADI card is present —
    gate on `board_id()==1`.

---

## What checks out (verified consistent with RE)

- Node/sub-session map `f0xx→0,e0xx→1,d0xx→2,c0xx→3,b*→4`
  (`utrack_control.py:24`) — matches `device_model.md` §Règle.
- Transport 0xd000: 3/4/5 stop/play/rec; PLAY doubles as pause and as
  REC-time marker — `ghidra_utrack_files.md` §1a action map confirms (0x197
  play-during-REC → "Adding a Marker").
- Mixer IDs d010/d030/d050/d070+ch and 2=toggle — `device_model.md` verified
  on-device.
- 0xf050 decode machinery (c3 decimal string → `op_status`, sync lock,
  board id 1/2/3) — `ghidra_utrack_notify.md` §2.
- `utrack_telnet` file commands (`file open ro/size/print/close`, `fs rename`,
  `fs rm`, `wavefile`, `mixer querylevels`) — `ghidra_utrack_files.md` §2.
- AudioLAN POST shapes (`version:1` envelope, whole-array writes, key
  stripping in `set_sources`/`set_outputs`) — `audiolan_http_api.md` §4.
- `chai_session` checksum/framing/parse — `MEMOIRE_RE.md` CORRECTION MAJEURE.
- b000/b001/b102/b103/b104/b203/b205 enum domains — `device_model.md` domain
  table (id−1 rule).
