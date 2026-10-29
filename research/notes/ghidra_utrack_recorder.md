# uTrack24 firmware 4218 — RECORDING / PLAYBACK ENGINE deep-dive

Ghidra 12.0.4 project `research\ghidra\utrack_fw_proj\utrack_fw`, program
`uTRACK24_Release_4218.bcd`, loaded flat (Ghidra addr = file offset;
runtime = file offset + **0x60005F84**). All addresses below are **file offsets**
unless marked `rt`. Companion to `ghidra_utrack_map.md` / `ghidra_utrack_dsp.md`.
New tool written for this session: `StrFind.java` (substring search + refs,
tolerates strings fused in rodata blobs), `TiName.java` (typeinfo ptr → class name).

Architecture summary:

```
SDS filerec/fileplay ─┐
CopperLan 0xd000/etc ─┼─► StreamingConfiguration_* / StreamingQuery_* msg objects
UI state machine ─────┘    │ posted via stream-control vt+8 (config) / vt+0xc (query)
                           ▼
              streaming thread → FileStreamingInterface::reconfigure (FUN_0012424c)
                           │   vectors: decoders[0x18], encoders[0x1b],
                           │   dec-cfg recs[0x14]×ptr, enc-cfg recs[0x11]×0x20
              ┌────────────┴────────────┐
        FileEncoder (WaveFileEncoder)   FileDecoder (WaveFileDecoder /
              │ write jobs               MonoMulti/Midi) │ read jobs
              ▼                          ▼
        FileAccessHandler (FUN_000cbaf0): ExtJobQueue + IntJobQueue threads,
        FileAccessJob_* (0x1b0 B) → FileSystemServiceImpl → FatFileSystemImpl
        → disk_read/disk_write → USB_SCSI BOT MassStorageDeviceClient
        deferred close: WaveFileEncoderCleanUpHandler thread (header+cue patch)
```

---

## 1. `filerec` — SDS handler `FUN_001237c8` (registrar `FUN_0012418c`)

Owner object = app singleton member at `app-0x3f8` (stream-control sub-object);
posts polymorphic command objects through `**(owner)+8` (send config, returns ok)
or `**(owner)+0xc` (send query). All commands build a stack object whose first
dword is the class vtable; RTTI-verified classes:

| subcommand | msg vtable | class (RTTI) | notes |
|---|---|---|---|
| `configure <id> <file> <bits> <firstCh> <nCh> <nBuf> <bufSize> <notifyInt> {autostart}` | rt 0x602e22ec | `34StreamingConfiguration_FileEncoder` | bufSize clamped ≥ 0x10000; chanmode from owner vt+0x10; carries maxFileLength (+8) |
| `start` / `pause` | rt 0x602e28d4 | `42StreamingConfiguration_StartStopFileCoders` | payload `{+4=1,+5=start?1:0,+6=encMask=1,+7=decMask=0}` |
| `stop` | rt 0x602e22ec (FileEncoder cfg) | — | **loop**: posts a disabled/empty config per encoder id (counter byte ++) until the engine rejects an id → stop-all; name field = shared empty-string `0x60496910` |
| `stat` | rt 0x602e2458 | `35StreamingQuery_PrintFileCoderStatus` | posted via vt+0xc (blocking query) |
| `cue` | rt 0x602e2084 | `30StreamingConfiguration_SaveCue` | records a marker ("Save cue done/failed") |
| `prerecord` | rt 0x602e2840 | `40StreamingConfiguration_StartPreRecording` | |
| `next <id> <file>` | rt 0x602e29fc | `47StreamingConfiguration_FileEncoderSetupNextFile` | gapless next-file pre-open |
| `switch` | rt 0x602e2910 | `45StreamingConfiguration_FileEncoderSwitchFiles` | close current .wav, roll to next |
| `samplecounter reset` | rt 0x602e2b4c | `56StreamingConfiguration_FileEncoderStartStopSampleCounter` | sub-op byte = 1 start / 2 stop / 3 switch-file, +u32 sample, +u32 notify |
| `maxlen {n}` | — | none | get/set `cmd+0x18` max file length ("Max file length is/set to %u") — session-level 4 GB / 12 h split control |

## 2. `fileplay` — SDS handler `FUN_000f9660` (registrar `FUN_000fa580`)

Owner = `app-0x3e4` (sibling sub-object of filerec's). Same posting model.

| subcommand | msg vtable | class |
|---|---|---|
| `configure <id> <file> <firstCh> <playoutDelay> <nBuf> <bufSize> <nPreload> <notifyInt> {autostart} {fileId {switchN} {pause}}` | rt 0x602e27e0 | `39StreamingConfiguration_AudioFileDecoder` — builder `FUN_0014afac`: fields +4 id, +8 notifyInt, +0x15 chanmode, +0x16/17 fmt, +0x18 firstCh, +0x1c playoutDelay, +0x20 nPreload, embedded file-name wstring, then **32-B routing table** (file ch → stream ch, −1=skip); appended autostart/fileId/switchN/pause tail |
| `route reset` / `route <csv>` | — | fills module-global route map `rt 0x60403a38` (32 B) + flag `0x60403a34`; map applied inside configure/next msgs via `FUN_0014aef0`/`FUN_001710f4` |
| `start` / `pause` | rt 0x602e28d4 | StartStopFileCoders `{+4=1,+5=start?1:0,+6=0,+7=1}` (decoder mask) |
| `stop {id}` | rt 0x602e27e0 | disabled AudioFileDecoder cfg per id; no-arg loops ids until reject |
| `stat` | rt 0x602e2458 | PrintFileCoderStatus query |
| `next <fileId> <file> <markIn> <markOut> <switchSample> <?> {pause}` | rt 0x602e2ab0 | `49StreamingConfiguration_FileDecoderSetNextFileName` — routes by decoder class (Wave→`FUN_000a2534`, Midi→`FUN_0009a318`) |
| `next select` / `next preload` | rt 0x602e2aa0 / 0x602e2b0c | `49..SelectNextFiles` / `50..PreloadNextFiles` |
| `marks <id> <in> <out> {pause}` | rt 0x602e20f4 | `31StreamingConfiguration_SetMarks` → decoder vt+0x10 `mark(in,out)` + pause-at-EOF flag |
| `select <fileId> <v>` | rt 0x602e2b1c | `52..SelectNextFileById` → `FUN_000a2d08`/`FUN_0009ad2c` |
| `clear <fileId>` | rt 0x602e2a64 | `48..ClearNextFiles` → `FUN_000a1e34`/`FUN_000996d0` |
| `eof <fileId> pause\|continue` | rt 0x602e2b2c | `53..SetPauseAtEndOfFile` → `FUN_000a2f20`/`FUN_0009ad38` |
| `samplecounter reset\|start\|stop` | rt 0x602e2b3c | `56..FileDecoderStartStopSampleCounter` |

## 3. `wavefile` & WAV internals

`wavefile <file>` (`FUN_00110f0c`) → `FUN_00110ec0`→**`FUN_001101ec` = WaveFileHeaderParser::getFullInfo**: OpenFile + GetFileSize + ReadFile jobs via the
FileAccessHandler singleton (`FUN_000cbaf0`, submit = `vt[8]` = `FUN_001c29e4`
submitJobAndWaitForCompletion — pushes job onto queue at FAH+0x38, blocks on the
job's own completion queue at job+0x10, checks done flag job+0x11 / rc +0x12).
Validates file ≥ 0x2d, RIFF/WAVE ids, `RIFF.size+8` vs fs-size (warns "File size
in header (%u) differs", corrects), walks chunks: `fmt ` copied, `data` offset+size
recorded, `cue ` → collects `dwSampleOffset` of every 0x18-B point (max 99) into a
vector. `getCorrectedDataSize` patches bad data sizes. Prints nCh/bits/fs/
dataSize/totalFrames(`dataSize/(nCh*bytesPerSample)`)/markers.

### WaveFileEncoder (`FUN_000a4d44` = setup, object ≈ 0x280 B)
- Buffer pool = `FUN_000ec344(heap, bufSize*nBuf)` → `enc+0xc8`; job ring =
  `nBuf` × 0x28-B job slots at `enc+0xfc` (ctor allocs 8 max — `FUN_000a55b8`,
  nBuf clamped to 8, bytesPerSample 2 if param<0x11 else 3).
- **44-byte canonical PCM header** built inline at `enc+0x9c`:
  `RIFF` `size=0xFFFFFFFF` `WAVE` `fmt ` `len=0x10` `tag=1` `nCh` `fs`
  `byteRate` `blockAlign` `bits` `data` `size=0xFFFFFFFF` — both sizes are
  placeholders patched at close. Written via FileAccessJob_WriteFile
  (`FUN_0012c7bc`/`FUN_0012c838` builders) + SyncFile (`FUN_001236d4`), then a
  pre-allocating **Blank** job (`FUN_0012367c`, "zero the file" – keep FAT chain
  hot / avoids write-latency). samplesPerBuf = `bufSize/(nCh*bps) & ~0xf`.
- **Sample packing** via fn-pair table @file `0x2b0550` (4 pairs {fn,flag}):
  16-bit mono `FUN_000aa8ac`, 16-bit multi `FUN_000aa6c8`, 24-bit mono
  `FUN_000aa914`, 24-bit multi `FUN_000aa780`; invoked indirectly in
  `FUN_000a5154` (encode) — ARM-side interleave+pack, no DSP involvement.
- `selectNextBuffer` (`FUN_000a426c`): rotates write index mod nBuf, submits
  WriteFile jobs (FAH vt+4 non-blocking), tracks +0x274 dropouts; >8 congested
  loops re-arms the Blank job; on stop/switch boundary submits the
  close-out job (`FUN_000ec110`, +0x254) and registers markers via
  `FUN_001452dc` (clean-up handler setEncoderInfo).
- `encode_SwitchToNextFile` (`FUN_000a4aa0`) / `setupNextFile`
  (`FUN_000a3d80`): file-roll = chained **FileAccessJob_Container**
  (`FUN_0012c748`+`FUN_0012c57c` append): {Sync?, Close, Move(rename),
  GetFileSize} then open new + write-sync 0x2c header.
- `shutdown` (`FUN_000a524c`): flush partial buffer → **write `cue ` chunk**
  `{id,count*0x18+4,count,{id,pos=0,'data',0,0,sampleOff}×n}` (markers at
  `enc+0x27c`, u16 count @+0x27a) → GetFileSize → patch `RIFF.size=fileSize-8`,
  `data.size=fileSize-cueBytes-0x2c`, rewrite header, CloseFile, free pool.
- **encodePreRecording** (`FUN_000a5154`, flag `enc+0x29`): pre-record mode
  keeps the buffer pool circular — flushes the *oldest* N buffers on start so
  the take begins `PreRecording`-seconds before the REC press.
- **WaveFileEncoderCleanUpHandler** (`start`=`FUN_001453bc`, `process`=`FUN_0014549c`)
  — own thread (created in `FUN_001458f8` with ExtJobQueue/IntJobQueue):
  pulls 0x1b0-B encoder-info records queued by `FUN_001452dc`, and per closed
  file: GetFileSize → write cue chunk (from the stashed header+marker copy) →
  SeekFile(0) → rewrite patched header → SyncFile → frees slot + posts
  completion to DSPStreaming (`FUN_001b2acc`, msg `{5,encIdx,ok,samples}`).
  ⇒ recording stop returns instantly; .wav finalization is asynchronous.

### WaveFileDecoder / MonoMultiWaveFileDecoder
- `FUN_000a3940` = AudioFileDecoder ctor (~0x800 B): next-file ring
  **16 × 0x54-B records** (`FUN_001c70d8`, at `dec+0xa4` region, indices
  `dec+0x5e4`/`+0x5e5`) + read-job ring 9 × 0x2c at `+0x688` + name area.
- `FUN_000a2534` = `WaveFileDecoder::setNextFileName`: parses WAV header
  (`FUN_00110ee8`), enforces same fs (`dec+DAT_000a27f8`) and single↔multi
  channel compat (`+0x5f0`), clamps markIn/markOut to &~3 frames and to the
  switch-to-next-file sample, opens file (FUN_0005f284 = open-job), enqueues a
  next-file record {fileId, handle, ch, frameSize, dataOff, dataSize,
  markIn/markOut bytes+samples, pauseAtEof, name[0x20]}.
- `FUN_000a1eb4` = `preloadBuffers`: fills the read-job ring from the head
  record: ReadFile jobs (FAH vt+4 non-blocking, first `nPreload` wait-sync);
  byte counters `dec+0x620/+0x624` drive `selectNextBuffer`; streaming msgs
  type 8/9 (`FUN_0005f0c0`) push buffer-ready to the stream thread.
- `MonoMultiWaveFileDecoder` = per-channel-mono variant: `FUN_00131238`
  addMonoFile (channel-in-stream check), `FUN_00131a2c` setupNextMonoFile —
  each channel = separate .wav file (uTool2 stereo/multi-mono mode).
- `MidiFileDecoder` (`FUN_0009baec` ctor) — parallel path for .mid playback.

## 4. Engine plumbing

- **FileStreamingInterface::reconfigure = `FUN_0012424c`** — the central
  dispatcher, reached only via vtable (no direct callers): the posted
  `StreamingConfiguration_*` object's apply vfunc lands here on the streaming
  thread. Guards `param_1+1` mutex (`FUN_001f00bc`/`FUN_001f06d4`), sem-gated
  coder teardown (`FUN_001cfb1c`/`FUN_001cfbe0`). Container vectors:
  `fsi[0x18]` decoders*, `fsi[0x1b]` encoders*, `fsi[0x14]` decoder-cfg
  records*, `fsi[0x11]` 0x20-B encoder-config slots, `fsi[0x1f]` second mutex.
  dispatch by `FUN_001c7218(msg, baseTI, derivedTI)` (dynamic-cast):
  - `FileEncoder` cfg → copy 0x20-B record `{+4 enabled, +5 bits, +6 firstCh,
    +7 nCh, +8 nBuf, +0x19 autostart, +0xc bufSize, +0x10 notifyInt, +0x14 name,
    +0x1c maxLen}` into `fsi[0x11]+id*0x20`; delete old (`FUN_0005f6a0` stop +
    vt+0xc/vt+4 teardown), if enabled & type==1 → `FUN_000a55b8` ctor → vt+8
    setup → `fsi[0x1b]+id*4`.
  - `AudioFileDecoder`/`MidiFileDecoder`/`MonoMultiFileDecoder` cfgs → same
    pattern via ctors `FUN_000a3940`/`FUN_0009baec`/`FUN_00132a80` (+addMonoFile).
  - `StartStopFileCoders` → `+5` flag picks start (`FUN_0005f154`/`FUN_0005f6b0`
    = set `coder+0x28`) vs pause/stop (`FUN_0005f148`/`FUN_0005f6a0` = clear
    `+0x28`,`+0x29`), `+6/+7` = encoder/decoder mask.
  - `SaveCue` → vt+0x14 on all encoders. `StartPreRecording` → touches
    enc-info slot +0x10 → `FUN_0005f68c`.
  - samplecounter msgs → per/all coder calls `FUN_0005f618`(start),
    `FUN_0005f694`(stop/switch val), decoder `FUN_0005f0b0/0f0a0/0f134/0f128`.
  - `ChangeFile{Dec,Enc}oderSampleNotificationInt` → info slot +0x10/+0x8.
- **BeBobStreamProcess** — `initialize FUN_000d64cc` pulls services by name:
  `StreamControlService`→+0x90, `DataStreamControl`→+0x9c, `UIService`→+0x78,
  `AudioHWService`→+0x84. DSPStreaming msg queue ids at rt `0x6025901C`
  (start) / `0x60259024` / `0x6025902C` (stop) — `StreamProcessBeBobCmd_*`.
- **DSPStreamingRingbuffer** — `create FUN_00122640`: pow2-sized u32-entry
  ring (param_2 words × param_3 entries), heap `FUN_001f01c4`; CnE
  `/cfg/AppSettings/StreamingRingbuffer MaxDelay`.
- **FileAccessHandler** — singleton `FUN_000cbaf0`, init `FUN_001458f8`:
  `ExtJobQueue` + `IntJobQueue` worker threads + `WaveFileEncCleanUp` thread;
  job objects 0x1b0 B (`FileAccessJob_{Open,Read,Write,Seek,Sync,Tell,Close,
  Stat,Move,Remove,MakeDir,OpenDir,ReadDir,GetFileSize,GetFree,Format,Blank,
  Container}` — builders `FUN_00123418/123488/12c7bc/123634/1236d4/12378c/
  12c504/12367c/12c748/12c57c`); `submitJobAndWaitForCompletion FUN_001c29e4`.
- **FS stack** — `FatFileSystemImpl` (FAT12/16/32 strings; "NO NAME    FAT32"
  OEM field; NO exFAT anywhere) → `disk_read`/`disk_write` → `USB_SCSI_Read/
  Write` → BOT/CSW `MassStorageDeviceClient` on the USB host port.
- **WARP→ARM audio** — decoders feed `DSPStreaming` output ring buffers which
  the DSP process drains to the AV output processors (WARP FPGA iso-DMA);
  encoders get filled rings from AV input. All file I/O is ARM+jobs — the WARP
  only moves audio between DSPStreaming and the codec/MADI/ADAT interfaces.

## 5. Takes / projects / .BCD

- **Product-level record flow** (UIUtils_Recorder/UIState_*):
  `FUN_00141c60` = prepare-recording orchestrator: logs `Fw:%d HwVs:%d` +
  `Device type:%s Vendor:%s Product:%s` (Hard Drive vs Flash Drive via
  `FUN_000944c4` MSD inquiry), checks max take index `DAT_00141fac`
  ("Maximum recording take %d reached!"), disk-space probe (`FUN_000bdabc`),
  forces MADI/ADAT/AudioLAN card outputs, sets streaming channel mode to
  Recording (`FUN_000c016c`), then `FUN_00141348` = per-take setup:
  waits USB re-mount, **createDirectoryForRecording** (`FUN_000bc6c0`, dir =
  take name under recordings root `FUN_000f5150`/`FUN_001b6f18`),
  writes `reclog.txt` inside the take dir, `FUN_000c0228`
  prepareMultiTrackRecording (= the filerec-configure flood → encoders),
  optional pre-recording arm (`FUN_000bd598` "Started pre-recording"),
  master/slave sync (`sm_SyncTakeName`, `onSlavePrepareRecordingAck`,
  `onMasterPrepareRecording`), take index = `FUN_001b5ae8` → `Take%04d`.
  On failure paths `FUN_001419e0(param_1,errCode)` + destroy encoders.
- **Take directory contents**: `<Take%04d>.set` + `<Take%04d>_0001_.wav`
  (+ `_NNNN_` siblings for wave_file_switches > 4 GB/12 h splits —
  "Max Take Time(12 hours) completed. Starting a new recording take") +
  `reclog.txt` + optional midi file.
- **`.set` = uTool2-compatible song-settings XML**:
  writer `FUN_000d17f8` (called on msg 0x2d in `FUN_000d22c4`, the
  UIUtils_Recorder state handler): emits `<song_settings>` with version,
  creator "cymatic audio uTrack24", target_device, song_name (Take%04d),
  sync_device (Standalone/Master/Slave%d via `FUN_0006d818`), wave_file_count
  (list at `song+0xc8`), total_sample_count, sampling_rate, resolution,
  channel_count, playback_type `multitrack`, wave_file_switches `<switch>`
  (sample-positions of file rolls), `<channel id>` × n {output_level,
  output_mute, output_channel, track_name "Channel %d", monitor_volume/mute/
  pan — pulled live from the mixer via `FUN_00069ed4`}, `<marker>` × n
  {global_time_in_samples, file_number, local_time_in_samples} from the
  `song+0xbc` triple-list. Path `_Take%04d.set` written via FAH helpers
  (`FUN_000bb52c` open, `FUN_000c1358` write, `FUN_000c1220` close).
- **`.set` parser = `FUN_000be0ac`** (callers `FUN_000bb774` song validator,
  `FUN_000e65a0`): derives `<name>.set` path + `<name>_0001_.wav`, parses the
  same XML into a song struct {+0x1c fs, +0x26 res, +0x1a nCh, +0x8c total
  samples, +0x58 wave_file_count, +0x4c midi_len, +0xc midi_file, +0x5c marker
  list, +0x68 switch list, +0x74 0x1c-B channel records, +0x89 target-match}.
  `FUN_000bb774` then validates: `playback_type==multitrack`, channels, fs ∈
  {44100,48000,88200,96000}, bits ∈ {8,16,24} (err codes 0xd/0xe/0xf).
- **`.BCD`** — `ArchwaveBCD` magic @0x116300 used by `FUN_00115d40` (playlist/
  project container parser — separate from BcOd firmware magic; uTool2 writes
  the .set XML, the device browses both).
- **Playlist**: XML `playlistname` parse errors "Error in reading Playlist
  File %ls" @0xbbd88-region; playlist start-mode/start-time are CopperLan
  0xf030..0xf033 + 0xd008/0xd009.
- **CopperLan `Files` group** (0xc000 song path, 0xc001 current dir,
  0xc003/0xc004 dir names/types) browses the recordings root — takes are just
  directories; file-select drives `fileplay next` messages; `takes`/
  `Takes directory` controls map to the same dir list.

## 6. CopperLan transport end-to-end

1. Wire write (uRemote TLV 4337/4237) → `FUN_000ace70` binary-compare tree
   (uTrackCopperLan singleton; ids: `DAT_000ad5dc`+0x17 = 0xd010.. solo,
   `DAT_000ad5e0`+0x17 = 0xd030.. mute, b-blocks settings, 0xcf1 query).
2. **0xd000 Action**: `iVar5 == 0` (`DAT_000ad5d0`=0x1cee ⇒ iVar2−0xb312−0x1cee
   = iVar2−0xd000) → iterates **subscriber list `uTrackCopperLan+0x8e0`** and
   calls `sub->vtable[8](DAT_000ad5d4[val])` — CHAI action value mapped through
   table rt `0x6029e8b8` (file 0x298934). Values (device_model): 3=stop,
   4=play, 5=rec. 0xd008 = playlist-song index via same table; 0xd009 →
   `FUN_0009366c` exit playlist; 0xd088 → mixer config `FUN_00094420`.
3. Subscribers = the transport listeners (UI control + recording engine):
   front-panel REC is symmetric — string `Sending Rec Button click to the
   Recording Engine` @0xd29d4 in the UI region. UIState drives
   `FUN_00141c60`/`FUN_00141348` (§5), which post `StreamingConfiguration_*`
   objects through the same stream-control path as SDS — i.e.
   **CopperLan transport ≡ SDS commands ≡ front-panel**: all converge on
   `FileStreamingInterface::reconfigure` on the streaming thread.
4. Status back-flow: `FUN_000d22c4` (recorder UI handler) receives engine
   msgs (0x15 "Next Take prepared", 0x2d→write .set + notify 0x49, 0x4a→
   control 0xcf, 9 = slave-ack quorum `param_1+0x280[3]`); meter/status push
   per `ghidra_utrack_dsp.md` (0xf0xx status, 0xf050 UTrack Operation Status,
   0xf020..0xf024 recording name/time/remaining/markers/dropouts).

### Reproduce transport (host side)
- Play take N: `fileplay configure 0 <dir>/<TakeN>_0001_.wav 0 <playoutDelay>
  4 0x10000 4 <notify> autostart` → or CopperLan select file + write
  0xd000=4.
- Record: write 0xd000=5 (or SDS `filerec configure …` + `start`) — the device
  creates `Take%04d/` + `.set` + `_0001_.wav` and manages file rolls +
  cue/header finalize itself.
- Stop: 0xd000=3 / `filerec stop` / `fileplay stop`.

## Key addresses (file offset)
| what | addr |
|---|---|
| filerec/fileplay/wavefile SDS handlers | 0x1237c8 / 0xf9660 / 0x110f0c |
| registrars (BeBoB_App init FUN_000f8fcc) | 0x12418c / 0xfa580 / 0x111088 |
| FileStreamingInterface::reconfigure | FUN_0012424c |
| WaveFileEncoder setup/shutdown/switch/setNext/encode/selectBuf | 0xa4d44/0xa524c/0xa4aa0/0xa3d80/0xa5154/0xa426c |
| encoder ctor / packer table / pack fns | 0xa55b8 / 0x2b0550 / 0xaa8ac,aa6c8,aa914,aa780 |
| WaveFileDecoder ctor/setNext/preload | 0xa3940 / 0xa2534 / 0xa1eb4 |
| MonoMulti ctor/addMono/setupNext | 0x132a80 / 0x131238 / 0x131a2c |
| MidiFileDecoder ctor | 0x9baec |
| WaveFileHeaderParser::getFullInfo | 0x1101ec |
| FAH singleton / submit-wait / init | 0xcbaf0 / 0x1c29e4 / 0x1458f8 |
| CleanUpHandler start/process/setEncoderInfo | 0x1453bc / 0x14549c / 0x1452dc |
| prepare-recording / per-take setup | 0x141c60 / 0x141348 (callers 0x1411f4,0x1412ac) |
| .set writer / parser / validator | 0xd17f8 / 0xbe0ac / 0xbb774 |
| recorder UI msg handler | 0xd22c4 |
| BeBobStreamProcess::initialize | 0xd64cc |
| ringbuffer create | 0x122640 |
| CHAI write dispatch / Action subs list / action map | 0xace70 / uTrackCopperLan+0x8e0 / rt 0x6029e8b8 |
| route map global | rt 0x60403a34(flag)+0x60403a38(32B) |
| empty-name singleton | rt 0x60496910 |

## Open gaps
- The `?`-region funcs (0x148c44 etc.) calling FAH — file-browser side, needs
  manual function-boundary work.
- DAT_000ad5d4 action-value table contents (map says 3/4/5 = stop/play/rec;
  table @file 0x298934 has more entries incl. playlist ops).
- Subscriber classes on uTrackCopperLan+0x8e0 (register site not yet found —
  probably an "addActionListener" called by UIMainControl/UIUtils_Recorder).
- Exact `FsI` vector roles for `fsi[0x15]/[0x16]` (encoder-side second table,
  likely mirror of the decoder 0x14/0x15 pair).
- `filerec stat` PrintFileCoderStatus output format (query class exists but
  printer internals not traced).
