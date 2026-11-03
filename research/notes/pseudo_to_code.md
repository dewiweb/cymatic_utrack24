# Map REA : pseudo-code → code réel

Correspondance entre les entités décompilées (REA/Ghidra) et les implémentations
réelles dans `src/`. Pour chaque item : la source pseudocode (fonction/adresse),
le format/spec extrait, et le code (module.fonction) ou le statut « à écrire ».

Légende : ✅ implémenté+testé · ◐ implémenté à valider live · ⧗ spec connue non codée · ✗ runtime-only

---

## 1. Couche transport CHAI (uRemote.exe ↔ VNM :55000)

| Pseudo-code | Spec extraite | Code réel |
|---|---|---|
| `FUN_0064c110` (frame serialize) | `ef51` + `u16 LE (flags<<12 \| len)` + payload + `u16 a, u16 b` | `chai_session.frame(msg, flags)` ✅ |
| `FUN_00678cd0` (checksum) | Adler-like : `a=0x4c4d, b=0x5054; for x: a=(a+x)%0xfff1; b=(b+a)%0xfff1`, sur header+payload, écrit `<HH` | `chai_session.cksum(data)` ✅ |
| `FUN_0064bf70` (frame parse) | scan `ef51`, len=`h&0xfff`, end=`i+4+n+4`, verif cksum | `chai_session.parse(buf)` ✅ |
| `FUN_0058e350` (Generic serialize) | 20 B : `class_id u32 \| tag u16 \| flag u8 \| pad u8 \| param_id u64 \| value u32` | `chai_proto.pack_generic` ✅ |
| `FUN_0058e350` inverse | idem, lecture | `chai_proto.unpack_generic` ✅ |
| `FUN_0052fcc0` (dispatch inbound) | family=`cid>>8`, sub=`cid&0xff` (0x81 write, 0x1a enum-done, 0xe0-f7 generics) | `chai_proto.CID`/`CID_BY_ID` + `describe` ✅ |
| announce TLV `FUN_0053*…` | records TLV `{type,len,payload}` ; noms ASCII dans payload | `chai_proto.parse_announce_records` + `record_param_name` ◐ (regex fallback dans `announce_controls.tsv`) |
| sondes VNM (flags==2) | `00 01 c4 23→44 23` echo ; `d8 42` echo ; `d4 23`/`54 23`→`44 23` | `chai_session` boucle réception ✅ |
| `send_param` write | write_param 20B via SM_Signal cid | `chai_session.send_param` ◐ |

### Class-ids canoniques (37, méthode last-vftable)

Dictionnaire complet dans `chai_proto.CID` — chaque `0x10xxxxxx` ↔ nom de classe
(`SM_Signal` 2381, `SM_D_RecordingControl` 2361, `LM_GlobalSynchronizedClock` 4221,
`LM_TransportFlowControl` 4230, `LM_DeviceDeclaredOrModified` 4203/37c8…).

---

## 2. Codec paramètres / conversions (utrack_control.py)

| Pseudo | Spec | Code |
|---|---|---|
| fader dB↔raw | `raw=(dB+30)*65535/30`, `dB=raw*30/65535-30` | `utrack_control.att_raw` / `att_db` ✅ |
| ms↔raw | `raw=(v+1000)*65535/2000`, inverse | `utrack_control.ms_raw` / `ms_val` ✅ |
| messages `ctrl/num/text` | `ctrl(cid,op)`, `num(pid,val)`, `text(pid,str)` sur la base `0xd0xx/0xc0xx/0xb0xx` | `utrack_control.ctrl/num/text` ✅ |
| IDs directs | `0xd000` transport, `0xd001-3` locate/loop, `0xc001` chdir, `0xc003` filenav, `0xc011-1a` entrées, `0xd010+solo`, `0xd030+mute`, `0xd070+fader` | `utrack_control` méthodes ✅ |

---

## 3. SDS / telnet device (:23) — `utrack_telnet.py`

Toutes les commandes extraites des handlers decompilés → méthodes réelles.

| Pseudo (registration `FUN_001a7b9c`) | Spec | Code |
|---|---|---|
| `file` group (18 cmds, vtables `0x2dcxxx`, handler=`vtable+0x1c`) | `open/close/read/print/write/tell/size/stat/move/remove/seek/info`, `dir open/close/read/create/free` | `file_stat/tell/seek/info`, `file_dir`, `read_file`, `download`, `mv`, `rm`, `upload`(stub) ◐/✅ |
| `fs` | `ls/mkdir/rename/rm` | `fs_ls`, `fs_mkdir`, `fs_rename`, `fs_rm` ✅ |
| `fileplay`/`filerec` (grammar 0x29acec/0x29aff8) | `configure/stop/stat/mode/start/pause/next/mark/samplecounter/select/clear/eof`, `maxlen/cue/prerecord/switch` | `fileplay(*)`, `filerec(*)` ✅ |
| `mixer` (handler `FUN_000ccb58`) | `stat/levels/querylevels/get/set/store` + `get <ch>` record 6B | `mixer(*)` ✅ |
| `inputselect`/`channelmode`/`samplerate`/`sync`/`dsp`/`audiolan`/`cpsync`/`maditest`/`ptest` | parsers d'args extraits | méthodes homonymes ✅ |
| `get`/`set`/`ls`/`cd`/`pwd`/`clear`/`shell`/`bat`/`showtree`/`persparam`/`rd`/`wr` | CnE + debug | toutes ✅ |
| `sys`/`os` (~50 cmds) | `ver/restart/flash`, `os th/free/load`… | `sys_ver`, `sys`, `Monitor` (aoip_features) ✅ |
| `wavefile` | infos take wav | `wavefile` ✅ |
| FAH staging `FUN_000cbaf0` | `*0x60403a3c+0xc0` = FAH obj, buffer runtime | `_fah_buffer_probe` stub ⧗ |

---

## 4. DSP / mixeur / meters (ghidra_utrack_dsp.md)

| Pseudo | Spec | Code réel |
|---|---|---|
| `FUN_000ebcb8` pan-law | constant-power `u16 L|u16 R` via `10^x` | ⧗ à porter si mixeur soft |
| Kernel `0x1b020` (désasm) | `ldm r0!` paires × Q16 coeff + `cmp`/`strgt` peak → `*param_2-4` | spec documentée — pas besoin côté client |
| Meter DTO `FUN_00144908` | `{valid u8 @4, count @8, data u32* @0xc}` — 26 canaux | `utrack_telnet` parse `querylevels` ◐ |
| Status word `0x60401A98` | bit0 lock, bits1-3 inputsel, bits4-5 chmode, bits8-10 board_id | `utrack_control.op_status` + `utrack_remote_qt` decode ✅ |
| coeff block `0x6049888C` | 12×{gainL,gainR,pan pair} + mon@0x90 + bus@0x94 | spec (pas de rd/wr nécessaire) |
| 6B mixer record | `{f32 fader_dB, s8 pan, u8 mute}` | `utrack_telnet.mixer get` parse ◐ |

---

## 5. Carte AudioLAN (REST + RTSP + RTP)

| Pseudo | Spec | Code |
|---|---|---|
| POST handlers (`doUpdate @0xadc9c`, POST JSON `version:1`) | `{"ArchwaveAES67":{"version":1,...}}` | `audiolan_api.AudioLan.post` ✅ |
| GETs `/status /general /sources /outputs /stream_list /device_list /sw_versions /result /installProgress` | JSON `ArchwaveAES67` | `audiolan_api` getters ✅ |
| `doUpdate` + state machine 9 étapes + `scanBCD` | multipart `uploadedFile`, `.bcd` `BcOd`, burn poll 1s→success→reset→reboot | `audiolan_update.upload_bcd/wait_burn/progress_reset/reboot/update` ◐ |
| RTSP server carte | `rtsp://<ip>/by-name/<stream>`, DESCRIBE→SDP→SETUP→PLAY→TEARDOWN | `audiolan_rtsp.py` ◐ |
| SDP AES67 | `c=IN IP4 <mcast>`, `a=rtpmap:96 L24/<rate>/<ch>`, `a=mediaclk`, `a=ts-refclk:ptp` | `audiolan_rtsp.parse_sdp` ✅ |
| RTP/L24 → WAV | samples 24-bit **BE** entrelacés → LE pour WAV, seq-gap detect | `aes67_receiver.recv_stream` ◐ |
| RTP/L24 sender + PTP gm | ts RTP = ptp_sec × rate (mediaclk direct=0) | `fake_aes67_sender.py`, `ptp_master.py` ◐ |
| status codes (FUN dispatch) | 0-15 incl. 12 sync-error, 13 time-step, 14 SR, 15 PTP | `aoip_tool.ST`, `_fill_aoip` ✅ |
| `BeBobStreamProcess`, `RTPDecoder*` | interne carte — pas besoin client | — |

---

## 6. Formats fichier (uTool2 / device)

| Pseudo | Spec | Code |
|---|---|---|
| `.set` writer/reader | `<song_settings>` XML : version/creator/target/song_name/sync/wave_count/total_samples/rate/res/channels/type + `<channels>` + markers | `uset_file.SongSettings` ✅ round-trip |
| `.play` playlist | writer `FUN_005501d0`/`FUN_005581e0` via helper générique — schéma XML déduit | `uset_file.Playlist` ◐ |
| `.playlistprj` | projet uTool2 | `uset_file` ◐ |
| `BcOd` conteneur | magic `BcOd`, slots `Current/New image`, CRC, HWID | `audiolan_update` check magic ⧗ parseur complet |
| `reclog`/`Warnings.log` | texte | `utrack_telnet.reclog` ✅ |

---

## 7. Drivers USB / ioctl (utrack24_usb.sys, BebobDriverInterface)

| Pseudo | Spec | Code |
|---|---|---|
| IOCTL map `0x8089xxxx` (~63 codes, 41 handlers) | table `Call*`→méthode→IOCTL→handler | `ghidra_utrack_map.md` spec ⧗ (driver OS hors scope) |
| `BCOFWDL`/`BCOUFWDL` | flash update réseau + USB | ⧗ spec |
| `/api/fileupload` | voir §5 | `audiolan_update` ◐ |
| C# driver UI (14k lignes decompilé) | structs P/Invoke, mixer panel | spec corpus |

---

## 8. ARC host↔carte (SPI/UART/UDP)

| Pseudo | Spec | Code |
|---|---|---|
| `arc_dispatch_disas` frame | `{msgId, cmd, lenBE16, payload, cksum}` — somme tous octets = `0xFF`; ack `{id,0xFF,~ck}` | `arc_protocol.md` spec ⧗ |
| COBS + ack | encapsulation | ⧗ |
| `ARC/UDP` CnE | pilotage carte par IP | `aoip_features` via `set` ⧗ |

---

## 9. Sync multi-unités (uTrack24SyncCL)

| Pseudo | Spec | Code |
|---|---|---|
| `uTS_Msg_*` ×8 | GroupForming/Cancel/BecomeSlave/BecameSlave/Leave/Exit/RebuildQuery/RebuildResponse — sur CHAI | `aoip_features.SyncGroup` (CnE `Sync/*`) ◐, wire format ⧗ |
| `OnCHAI_DeviceDeclaration/Discarded/Notification/Timer` | FSM master/slave | doc seule |

---

## 10. Ce qui n'est PAS transposable en code PC

- `HWCom` 900B, SPI shift register, MADI/ADAT drivers, `hw`, `codec set` — hardware
- Kernels DSP `0x1a*` — embarqué
- `wr`/`rd` mémoire — debug device
- CPVNM `0x100037c8` — daemon Windows CopperLan Manager absent du corpus

---

## Résumé d'implémentation

- **✅ Codé + testé** : frame CHAI, checksum, codec 20B, CID table, conversions fader/ms, SDS ~80 méthodes, `.set` round-trip, SDP parse, status decode, REST carte, update chain (squelette)
- **◐ Codé à valider live** : send_param, announce TLV (regex fallback), meter parse, RTSP session, AES67 rx/tx, file write upload stub, sync CnE, file ops sur device
- **⧗ Spec connue, pas de code** : uTS wire format, USB-IOCTL, BCOFWDL, CRC BcOd custom

## Modules ajoutes depuis la map

| Module | Traduit | Statut |
|---|---|---|
| `bcd_file.py` | header BcOd (magic/ver/date/rev/product/keepBoot/image_size/name), slot entries {id,flag,load,hwid,crc} | ✅ testé fw4218+fw4078 (CRC custom a deriver de scanBCD) |
| `arc_proto.py` | frame {id,cmd,lenBE16,pl,ck} sum==0xFF, ack {id,0xFF,~ck}, COBS, wrap_udp | ✅ round-trip teste |
| `mixer_math.py` | record 6B, fader→lin, constant-power pan, coeff triple u16, peak→dBFS | ✅ |
| `mixer_math` parseurs | querylevels→(ch,raw,dB), mixer get/stat, engine stat, reclog, showtree→dict, ls, dir read, inputselect, op_status decode | ✅ |

