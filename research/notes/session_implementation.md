# Session d'implémentation — uTrack24 + AudioLAN "couteau suisse AoIP"

État au commit `96776d6`. Récapitulatif des découvertes REA et du code livré,
avec la checklist de validation sur device réel.

---

## 1. Découvertes REA (cette session)

| § | Objet | Détail |
|---|-------|--------|
| 35 | Shell RTOS complet | ~50 commandes `sys`/`os`/`test` : watchpoints, event_callback, memscanraw, mlctest, call, load, threads, semaphores, ip_hdr, underflow… (telnet **non authentifié**) |
| 36 | Sync multi-unités | `uTrack24SyncCL` : 8 messages `uTS_Msg_*` (GroupForming, CancelGroupForming, BecomeSlave, BecameSlave, LeaveGroup, ExitGroup, RebuildGroupQuery, RebuildGroupResponse) + FSM — transporté sur **CHAI** (OnCHAI_DeviceDeclaration/Discarded/Notification/Timer) |
| 37 | Kernel DSP désassemblé | `0x1b020` = **ARM** (pas Thumb — corrige la doc WSL). `ldm r0!` paires + coeff Q16 + `cmp`/`strgt` peak-track : gain+peak-detect confirmé bit à bit |
| 38 | AudioLAN profond | Shell RTOS réduit (~8 cmds), features : sync/ptp/warp/pll/stream/gpio/spi/uart/codec/flash/sip/igmp, ARC multi-transport |
| 39 | Surfaces cachées carte | `/SHA204` (puce crypto Atmel), `/SPDIF`, `/Exchange/samir`, `/SDRamCfg`, `/USB/EP1/Rx/FifoSize`, `/Shell/cne/Shell/` |
| — | CnE `cne_paths.md` | 114 feuilles host + 28 carte (incluant `Sync/Slave_1..3_Id`, `CopperLan/Midi/*`, `Adat`/`Madi` groupes, `RavennaConfiguration/InputDelay*FS`, `ARC/UDP`) |
| — | RTTI `rtti_catalog.md` | 185 classes host + 111 carte : `MidiFileDecoder`, `StreamingConfiguration_USBDecoder`, `RTPDecoderAM824/L16/L24`, `HWAVPLL`, `IBCOService`… |
| — | Routing/DSP doc | `ghidra_utrack_dsp.md` (mixeur 26ch, kernels, meter=ARM peak, coeff block) + `ghidra_utrack_audiopath.md` §4-6 (matrice 2 niveaux, monitor bus, dataflow) |

### Capacités extensibles confirmées

- **MIDI** : fichiers `.mid` jouables (`MidiFileDecoder`), MIDI-over-CopperLan (`CopperLan/Midi/*`), `MidiOffset`, port physique + carte
- **Multi-unités** : groupe de 4 units max (master + 3 slaves), sur le canal CHAI existant
- **Backup/restore** : `SavedSettings/*` + `SM_D_CollectSetupData`/`RestoreSetupData`
- **Macros** : `bat <leaf>` (exécute feuilles batch CnE, récursion ×5) + `persparam wrb`
- **AM824/L16** : codecs RTP au-delà du L24 (interop BeBoB)
- **ARC-UDP** : pilotage carte par IP sans REST

---

## 2. Implémentations `src/` (cette session)

| Module | Rôle | Test hors-ligne |
|--------|------|-----------------|
| `uset_file.py` (202L) | `.set`/`.play`/`.playlistprj` parse+génère | ✅ round-trip `Take0012.set` |
| `audiolan_rtsp.py` (135L) | RTSP DESCRIBE/SETUP/PLAY/TEARDOWN + parseur SDP AES67 | ✅ parse_sdp testé |
| `audiolan_update.py` (120L) | chaîne update carte : `fileupload`→`installProgress`→reset→reboot | ✅ compile |
| `aes67_receiver.py` (91L) | mcast RTP/L24 → WAV 24-bit (BE→LE swap) | ✅ compile |
| `aoip_tool.py` (185L) | CLI 8 lames : discover/status/record/play/bridge/send/capture/ptp | ✅ `--help` OK |
| `aoip_features.py` (186L) | SyncGroup / Midi / Macros / ConfigProfiles / Monitor / AdvancedRouting via CnE+SDS | ✅ compile |
| `utrack_telnet.py` (435L, ~80 méthodes) | SDS complet : transport, mixer, CnE, rd/wr, persparam, file ops, take ops, playlists | ✅ compile |
| `utrack_remote_qt.py` (~1000L) | GUI 7 onglets : Mixer/Réglages/Prises/AES67/Matrice/**AoIP**/**Fonctions+** | ✅ compile |
| `chai_session.py` | réponses sondes VNM `c423`/`d842`/`d423`/`5423` (session adoptée durable) | ✅ compile |

### GUI — ajouts

- **Onglet AoIP** : streams découverts + Bridge→sorties, REC AoIP→take, PLAY take→AES67, capture PC→WAV, sender sinus, **groupe "Carte son USB"** (channelmode 24In/26Out…, inputselect analog/digital, statut USB)
- **Onglet Fonctions+** : sync groupe (mode/GroupId), MIDI (enable/offset), macros+profils (bat, snapshot→json, restore), diagnostics RTOS, routage bas niveau MADI, console sortie
- **Gating par carte option** : fonctions AoIP ↔ `board_id==3`, routage MADI ↔ `board_id==1` (lu du status `0xf050` bits8-10)

---

## 3. Checklist — tests sur device réel

### Connexion / sessions
- [ ] CHAI : handshake enum + adoption membre, session stable (sondes c423/d423/d842/5423)
- [ ] SDS telnet : toutes les commandes wrapper (`samplerate`, `mixer`, `fileplay`, `filerec`, `inputselect`, `channelmode`, `dsp`, `audiolan`, `cpsync`, `perf`, `get`/`set`/`ls`/`cd`/`pwd`/`showtree`/`bat`, `rd`/`wr`, `persparam`, `file*`, `fs`, `wavefile`, `versulu`, `sys`, `os`, `shell`)
- [ ] REST carte : `/status` `/general` `/sources` `/outputs` `/stream_list` `/device_list`

### Transport / mixeur
- [ ] play/stop/rec/prev/next/save (CHAI + SDS fileplay/filerec)
- [ ] mute/solo/fader/pan par canal, monitor/bus faders (ch24/25), MonitorBoost
- [ ] vu-mètres : push CopperLan `0xe000-e019` vs `mixer querylevels` polling

### Fichiers / takes
- [ ] `fs ls/mkdir/rename/rm`, `file open/read/close/print/stat/tell/seek/info`, `file dir` ops
- [ ] `download` binaire complet (vérifier taille + checksum)
- [ ] `rename_take`/`delete_take` live (GUI boutons)
- [ ] `file write` **upload** : découverte staging FAH par `rd` sur `*0x60403a3c+0xc0`, puis `wr`→`file open wo`→`file write`→`file close` (EXPÉRIMENTAL — jamais validé)
- [ ] `playlists()`/`playlist_read()` sur `#PLAYLISTS`, `.set` parse sur take réel

### AoIP (carte AudioLAN — board_id==3)
- [ ] `inputselect digital` → vérif flux carte→host (matrice interne)
- [ ] `record` : outputs carte souscrits → filerec 24ch → take WAV valide
- [ ] `play` : take → fileplay → sources carte → stream mcast entendu
- [ ] `bridge` : souscrire output → sortie analog/physique
- [ ] `capture` PC : join mcast → WAV 24-bit correct (rate/channels)
- [ ] `send` PC → carte : **status=12 sync error** à résoudre (mediaclk/PTP)
- [ ] `ptp` : host gm vs PC gm (`ptp_master.py`), état sur carte
- [ ] RTSP : `DESCRIBE`/`SETUP`/`PLAY` sur `rtsp://<card>/by-name/<stream>`
- [ ] Délais RTP par FS (`InputDelay1xFS`…), L16/AM824 si sources présentes

### Carte son USB (UAC2)
- [ ] `channelmode` 0-3 → layouts USB attendus sur PC
- [ ] `inputselect analog|digital` → sources des 24 entrées USB (analog ou AES67)
- [ ] `usb`/`stream stat` — état stack
- [ ] PC : lsusb/ALSA voit l'interface audio sans driver custom

### Fonctions+ (extensibles)
- [ ] `sync.mode/group_id/slave_id` écrits → trafic `uTS_Msg_*` observable
- [ ] `midi.enable/control/offset` — effet sur port/playback
- [ ] `macros.run` — exécution `bat` feuille CnE
- [ ] `profiles.save/restore` — round-trip `.json` (vérifier persistence)
- [ ] `monitor.threads/memory/load/flash_info` — sorties RTOS
- [ ] `routing.madi_*` (nécessite carte **MADI** montée — slot unique)
- [ ] `adat_source` (carte ADAT)

### Firmware update — DANGEREUX
- [ ] `audiolan_update.py` uniquement en contrôlé (brick si interrompu)

### GUI
- [ ] Gating correct : groupes AoIP actifs avec AudioLAN, routage avec MADI
- [ ] Toutes les actions AoIP/Fonctions+ ne bloquent pas l'UI (threads)
- [ ] Polling `mixer querylevels` fluide

---

## 4. Points ouverts (hors scope actuel)

- Upload `file write` : staging FAH = adresse runtime (calibration live requise)
- AES67 `status=12` : sémantique mediaclk à déboguer sur carte
- Driver USB privé (IOCTL) : chaîne connue sauf mapping USB-vendor final (driver OS, hors remote)
- CPVNM `0x100037c8` : daemon PC (CopperLan Manager), hors firmware
