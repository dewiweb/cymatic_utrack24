# Recherche — uTrack24 + carte AudioLAN : faisabilité d'un développement "from scratch"

Date : 2026-10-22
Objet : État des lieux complet pour développer un logiciel de remplacement (uRemote / uTool / exploitation AudioLAN) pour le Cymatic Audio uTrack24, produit abandonné.

---

## 1. Contexte

- **Cymatic Audio (Cymatic Technologies B.V., Pays-Bas) a fermé en 2022.** La société avait été rachetée par **RIEDEL Communications en 2018** ; RIEDEL a décidé fin 2021 d'arrêter ventes et développement des produits Cymatic (confirmation du CEO relayée sur le groupe utilisateurs, article Gearnews du 24/03/2022).
- Le site `cymaticaudio.com` est **toujours en ligne** avec la mention "products are no longer available for sale / we no longer offer support". Les forums sont fermés mais archivés en lecture.
- **Point crucial : le site sert encore tous les téléchargements** (firmwares, uTool2, drivers, manuels) via le plugin WP File Download — voir §4.

## 2. Architecture réelle du système (analyse des firmwares)

**Analyse complète faite — voir les rapports détaillés dans `research/notes/`** :

| Rapport | Contenu |
|---|---|
| `ghidra_utrack_map.md` | Carte globale uTrack24 — ~50 commandes SDS (nom→handler+usage), arbre CnE, ~90 contrôles CopperLan déclarés par `FUN_000a6464`, ~20 threads RTOS, boot, détection cartes optionnelles |
| `ghidra_utrack_dsp.md` | Handlers SDS, état input-select (`*ctx+0x7c` bits 24-26 + status word `0x60401A98`), mètres `e0xx` (peak-detect ARM), MonitorBoost, mixer |
| `ghidra_utrack_recorder.md` | Moteur d'enregistrement — `FileStreamingInterface` `FUN_0012424c`, encodeur WAV (4 kernels, finalisation async), structure takes (`TakeNNNN/` + `.set` XML + segments `_NNNN_.wav` 4 Go/12 h), FS = FAT32 uniquement, transport CopperLan (`0xd000`: 3=stop/4=play/5=rec) |
| `ghidra_audiolan_map.md` | Carte globale AudioLAN — SDS, CnE, RTSP, HTTP, threads, classes, SPI |
| `ghidra_audiolan_thumb.md` | Module RAVENNA Thumb — gating receveur (ordre : sample-rate → multicast → domaine PTP → codec → décodeur libre), codes statut décodés (10=Waiting, 12=Receiving, 13=Invalid PTP Domain), conditions d'acceptation des paquets |

### Découvertes architecturales clés

- **Les deux firmwares = même plateforme BridgeCo BeBoB 7** (SoC audio ARM9 + moteurs DSP propriétaires `WARP`) — l'AudioLAN n'est pas une carte étrangère mais le **même OS décliné en esclave SPI** du uTrack, avec frontend AES67 ajouté ;
- **Souscription native RAVENNA résolue** : la carte est *cliente* RTSP — `DESCRIBE rtsp://<ip>/by-name/<StreamName>` → SDP → décodeur. La voie propre pour que nos flux soient découverts sans SDP manuel ;
- **Canal hôte↔carte** : `ARCProtocol` sur `/dev/spiSlave` (trames checksum+cmd-code) — transporte tout (fichiers, rec/play, config réseau, firmware) ;
- **AES67 « waiting » expliqué** : décodeur créé mais paquets hors fenêtre playout — les timestamps doivent être PTP-locked *ou* le SDP doit omettre les lignes PTP (→ flux *asynchrone*, check de domaine sauté) ;
- **État input-select lisible** : status word `0x60401A98` (bits 1-3 = masque des 3 blocs) diffusé dans le flux `4437` — la lecture CopperLan qu'il manquait.

Les deux firmwares `.bcd` (conteneur propriétaire `BcOd`, code **ARM 32 bits** en clair) ont été téléchargés et analysés par extraction de chaînes puis décompilation Ghidra complète.

### 2.1 Firmware hôte `uTRACK24_Release_4218.bcd` (build 25/09/2018, ~1,3 Mo)

C'est un firmware **bare-metal / RTOS propriétaire** (pas de Linux) construit sur la plateforme **Archwave AG** (`Copyright 2000-2010 by Archwave AG, Duebendorf, Switzerland`, projet interne `bebob7`, compilé GCC 3.4.4).

| Bloc | Indices dans le binaire |
|---|---|
| Audio / player | `WaveFileDecoder`, machine à états Player/Playlist, parsing XML de playlists ("Playlist File too big. Bigger than 16KB"), enregistrement multi-canal WAV sur **FAT**, mixeur monitor 24×2 |
| USB | `USBHighSpeedCtrlService`, `USBMidiIn/OutStreamBlock`, interface audio 24×24 (classe) |
| Réseau | **lwIP 1.3.1** (`Server: lwIP/1.3.1`), mDNS/Bonjour, DHCP, **PTPv2 stack ZHAW**, serveur **HTTP + WebSocket RFC6455** |
| Contrôle distant | `CopperLanModule`, `uTrackCopperLan`, **`CHAIoNet`** (broadcaster UDP + sockets serveur TCP/UDP), arborescence `sds://cne/...` |
| Cartes d'extension | `RavennaConfiguration`, `AppSettings/Madi/*`, `Adat/*`, `AudioLan/InterfaceAsInput` → le firmware hôte gère les trois cartes (MADI / ADAT / AudioLAN) |
| MAJ | `FirmwareUpdateHandler` exécutant un **script JSON** embarqué dans le `.bcd` (rapidjson), API `/api/fileupload`, `/api/installProgress`, `/command`, `/sw_versions` |
| Debug | `TelnetShellService`, `sdsShell` ("ready for commands. Try 'help'") |
| Sync multi-unités | `sds://cne/AppSettings/Sync/Slave_1..3_Id`, `uTrack24SyncCLListener` |

### 2.2 Firmware carte `uT24_Audiolan_Release_4078.bcd` (build 13/11/2017, ~1,3 Mo)

La carte AudioLAN est un **module Archwave uNet autonome** (même architecture, son propre OS) :

- **RAVENNA / AES67 natif** : serveur **RTSP** (`DESCRIBE rtsp://`, `RtspServer`), `application/sdp` (+ `ManualSDP`), **SAP** (announce/browsing configurables), IGMP multicast + unicast, PTP (maître/esclave, unicast/multicast)
- **Web UI AES67 dédiée** servie par la carte : `/assets/aes67-0.1.2.js`, `aes67-0.1.2.css`, `ravenna-logo.png`, module `ArchwaveAES67` — accessible via Bonjour (le manuel recommande MTDiscovery de Merging)
- Même mécanisme de MAJ `/api/fileupload` + script JSON, shell Telnet (`Archwave AG Telnet`)
- CopperLan (commande & MIDI) — c'est la partie "AudioLAN = AES67 + CopperLan" de la doc Cymatic
- Archwave propose en option **Ember+** sur ses modules uNet (à confirmer sur cette carte)

### 2.3 Structure du conteneur `.BCD`

```
0x00  "BcOd" magic + version + date de build ASCII ("20180925 132153")
0x70  nom produit ("uTRACK24" / "uT24_Audiolan")
0x80+ marqueurs 0x5555AAAA / 0xA5A5A5A5 / 0xDEADBEEF, tailles, adresses, CRC
0xB8+ code ARM 32 bits (non compressé, non chiffré)
fin   padding 0xFF
```
→ Le firmware n'est **ni chiffré ni compressé** : analyse statique complète possible (Ghidra), et les mises à jour se font par l'API web documentée.

## 3. Le protocole de contrôle — ce qu'on sait

### CHAI / CopperLan over IP (voie principale, utilisée par uRemote)

- `uRemote.exe` (v1.2.009, récupéré via Wayback) = application **JUCE / C++ natif Windows**, basée sur le **SDK CopperLan "CHAI"** (`CPCHAI`, `CCHAIPort`), utilisant de simples **sockets Win32 TCP/UDP** — *pas* d'Ethernet brut pour le uTrack24 (le CopperLan "classique" non-IP n'est utilisé que pour le hardware Alyseum).
- Côté appareil : `CHAIoNet_Broadcaster` (découverte par **broadcast UDP**) + serveur `VnmTcpListener`/`VnmUdpListener`. Le **port TCP 55000** observé par des utilisateurs sur le forum correspond.
- **Carte complète de l'API** extraite des symboles RTTI MSVC de `uRemote.exe` :

```
IRemoteDevice::  GetControllerInfo, GetIndexListItem, GetInputInfo,
                 GetOutputInfo, GetParameterInfo, GetParameterPath,
                 GetProperty, GetSelectorParameterValueText,
                 GetModifierDataTypeInfo
Notifications:   IRemoteDevice_NotificationHandler,
                 IRemoteDevice_WatcherNotificationHandler
Session:         AppIntCtrlMsgPayload_Hello / HelloReturn,
                 SmartConnect_Source / SmartConnect_Target,
                 RemoteDevice_Watcher_SmartConnectOpenSession
Messages:        IParameter, ISelectorMessage, IModifierMessage,
                 ITextMessage, IEventMessage, IDataTransferMessage
Découverte:      IFindFirstDevice, IFindForeignDevice, IGConnectedDevices
```

Modèle : le device expose des **paramètres adressés par chemins** (l'arbre `sds://cne/...`), le client lit/écrit les valeurs et souscrit à des watchers. uRemote n'est qu'une UI au-dessus.

### Arbre de paramètres `sds://` (extrait du firmware — 66 URIs)

```
sds://cne/AppSettings/Global/{DeviceMode,SampleRate,ClockSource*,
  StreamingInterface,FootSwitchFunction,EnableMIDI,uRemoteId,uTrackName}
sds://cne/AppSettings/Recording/{SampleRate,SampleSize,TrackCount,PreRecording}
sds://cne/AppSettings/Playback/{AutoPlay,PlaybackMode,OutputAttenuation,
  MultitrackOutputsPostFader,StereoOutputs,StereoOutputs96K,StereoOutputsPostFader,Midi/MidiOffset}
sds://cne/AppSettings/SavedSettings/*   (persistants : StaticIP, SubnetMask, SyncMode…)
sds://cne/AppSettings/Sync/{Mode,GroupId,SlaveIndex,Slave_1..3_Id}
sds://cne/AppSettings/{Madi,Adat,AudioLan,AnalogInputs,MixerControl}/...
sds://cne/AppSettings/USBEncoder
sds://cne/Networking/IpCfg/Config0/Hostname
```

### Interfaces secondaires (peut-être plus simples à exploiter)

| Interface | Preuve | Potentiel |
|---|---|---|
| HTTP + **WebSocket** | `WebSocket::process`, `Sec-WebSocket-Version: 13` | Peut servir au transport CHAI/VNM over WS — à sonder sur l'appareil |
| **Telnet shell** | `sdsShell ready for commands. Try "help"` | Accès direct à l'arbre `sds://` ? À tester : `telnet <ip>` |
| HTTP API JSON | `/api/fileupload`, `/api/installProgress`, `/command` (`{"ArchwaveCMD":{version:1,reboot:..}}`), `/sw_versions` | Documentée par l'app Angular embarquée |

## 4. Inventaire des assets (récupérés dans `research/` + URLs vivantes)

### Téléchargés

```
research/assets/firmware/utrack24-release-4218.zip   → uTRACK24_Release_4218.bcd
research/assets/firmware/audiolan-release-4078.zip   → uT24_Audiolan_Release_ 4078.bcd
research/assets/software/uRemote_win_1.2.009.zip     → uRemote.exe (JUCE/CHAI) + manuel
research/assets/software/utool2-installer-windows.exe (10 Mo, NSIS)
research/assets/docs/  audiolan-module-manual.pdf, utrack24-sync-manual.pdf,
                       uremote-manual.pdf, uremote-release-notes.pdf,
                       firmware-4218-release-notes.pdf, utool_manual.pdf
research/notes/        utrack24_fw_strings.txt (11 511 chaînes),
                       audiolan_fw_strings.txt, uremote_exe_strings.txt,
                       wayback_cdx_*.txt
```

### Encore disponibles sur cymaticaudio.com (pattern `…/download/<cat>/<slug>/<id>/<nom>`)

- `…/564/…/89253..89258` firmwares uTrack24 : **3124, 4064, 4218** + outils de MAJ OSX/x64/x86 + `network-update-3124` (MAJ par le réseau)
- `…/552/audiolan/89261` firmware AudioLAN **4078**
- `…/540/utool/90201-90202` **uTool2** mac .pkg / win .exe
- `…/563/…/89262-89263` driver audio USB Windows v6.19.1 (signé / non signé)
- `…/571/…` firmwares + manuels uTrack-X32
- Recherche wpfd : `POST /wp-admin/admin-ajax.php?juwpfisadmin=false&action=wpfd&task=search.display` avec `chk_ftags[]=UTRACK24`
- Wayback : `uRemote_OSX_1.2.009.zip`, `uTool_Installer_1.1.46_Win.zip`

## 5. Écosystème communautaire (état octobre 2026)

| Projet | Statut | Intérêt |
|---|---|---|
| `verstaerkermusic/copperlan-Connect` | **Closed source**, beta publique très active (rc.21, oct. 2026), Apple Silicon | **Preuve de faisabilité** : client CopperLan ré-implémenté de zéro (routing MIDI AL-88/AL-22c/MS-812). Le dev a visiblement cartographié le protocole — contact potentiel précieux |
| `not-nef/open-uremote-copperlan` | Repo **vide** (placeholder, août 2026), "Futura Software" (dev Python/tkinter) | Quelqu'un a annoncé/réservé un "open uRemote" — probablement le projet dont tu parles |
| Forums Cymatic (archivés) | Lecture seule | Demandes d'API récurrentes jamais abouties ; Cymatic a confirmé : "pas conçu pour être contrôlé par un device programmable, seulement uRemote + footswitch" |
| `bondagit/aes67-linux-daemon` | **GPLv3, actif** | Implémentation AES67 complète (PTP, RTP, SDP, SAP, mDNS, web UI REST) — testée contre Dante AVIO, Hasseb… |
| Merging `ravenna-alsa-lkm` | **GPL** (kernel) + Butler | Driver ALSA RAVENNA/AES67 officiel. ⚠ build public limité à **8 canaux** sans matériel Merging (64 en OEM) |
| CopperLan SDK (copperlan.org) | Site mort, Alyseum disparue ; SDK freeware existait | Récupérable via Wayback/archive si besoin de headers |

## 6. Faisabilité par couche

| Couche | Faisabilité | Effort | Remarques |
|---|---|---|---|
| **a) Remote control (remplacer uRemote)** | **Élevée** | Moyen | Capture Wireshark/tcpdump d'une session uRemote → protocole CHAI sur UDP bcast + TCP 55000. Symboles RTTI = carte de l'API (Ghidra/IDA sur `uRemote.exe`, JUCE non strippé). Fallbacks : Telnet `sdsShell`, WebSocket |
| **b) Gestion contenu (remplacer uTool)** | **Très élevée** | Faible | USB stick = WAV multicanal + playlists XML + `song_settings`. Le firmware documente le parsing (limite 16 KB/playlist). Analyser une clé exportée par uTool2 (toujours dispo) → spec complète en quelques jours |
| **c) Streaming audio via AudioLAN** | **Élevée** | Moyen | **100 % standards ouverts** : AES67 = RTP/L24 + PTPv2 + SDP + RTSP + SAP + mDNS. La carte a un serveur RTSP (`DESCRIBE rtsp://`) → établissement de flux par requêtes RTSP standard. Outils : aes67-linux-daemon, linuxptp, GStreamer. Limite : driver ALSA public plafonné à 8 canaux → contourner via stack RTP maison ou OEM |
| **d) Config carte AudioLAN** | **Élevée** | Faible | Web UI + assets JS lisibles ; params accessibles en JSON ; Ember+ en option Archwave |
| **e) Sync multi-uTrack24** | Moyenne | Moyen | Protocole maître/esclave sur Ethernet (params `Sync/*`, listeners dédiés). Documenté dans le Sync Manual |
| **f) Patch/extension firmware** | Moyenne | Élevé | .BCD non chiffré, ARM non compressé, MAJ par API web → possible mais risqué (brick). Plutôt pour plus tard |
| **g) USB audio interface** | Déjà OK | — | 24×24 USB2 ; driver Windows dispo ; probablement UAC2 (class-compliant sur macOS/Linux à vérifier) |

## 6bis. Reconnaissance live (192.168.10.197, 22/10/2026)

### Ports ouverts (scan TCP)

| Port | Service | Statut |
|---|---|---|
| 23 | **Telnet `sdsShell`** | ✅ Ouvert, **sans authentification**, prompt `sds://>` |
| 80 | HTTP lwIP 1.3.1 | ✅ `archWaveApp` (page MAJ firmware), `/sw_versions` renvoie `"Main Firmware revision 4218"` |
| 55000 | **CHAI/CopperLan** | ✅ Accepte TCP, protocole binaire (pas de bannière, pas de WS) |

### Surface HTTP du port 80 (énumérée)

- `GET /` → page Angular `archWaveApp` "Firmware update" (assets `scripts/*.js`, `styles/*.css`, `views/partials/fileuploader.html`)
- `GET /sw_versions` → JSON `{"ArchwaveVER":{"bootloader":{"version":"No BSL."},"application":{"version":"Main Firmware revision 4218"}}}`
- `GET /api/installProgress` → JSON `{"status":"error","message":"Unknown error"}` (attend des params `action=...`)
- `POST /api/fileupload` et `POST /command` (404 en GET) — MAJ firmware + reboot `{"ArchwaveCMD":{...}}` non testés (effets destructeurs)
- **`Upgrade: websocket` sur port 80 → `101 Switching Protocols`, `WebSocket-Server: lwIP`** — accepté sur n'importe quel chemin ; écho des trames texte, silence sur trames binaires → endpoint WS brut (diagnostic/CHAI-over-WS ?), pas le canal uRemote principal
- Les assets AES67 (`/assets/aes67-*.js`) ne sont PAS sur l'hôte → ils sont servis par la carte AudioLAN (IP distincte à découvrir via mDNS/MTDiscovery)

### Analyse binaire (radare2 / pefile)

- `CHAIFreeware.dll` : importe `WS2_32` (socket TCP+UDP complet : bind/connect/listen/accept/sendto/recvfrom) → le SDK fait son propre transport IP ; **541 exports** mappés dans `notes/chai_api_map.txt` (classes `CPT::` primitives sérialisables, `CPNS::I*` interfaces)
- `uRemote.exe` : JUCE + WS2_32, aucune DLL métier → CHAI statiquement lié ; strings `port:`, `portThread`, `port Connection state change`, `CHAI Thread`
- `utool2.exe` : JUCE ; namespaces XML `cymaticaudio.com/{SongProject,PlaylistProject,mixerpreset,sessiontree}/1.0`

### Le shell Telnet change tout

Non documenté dans le manuel utilisateur, non authentifié — c'est le shell de développement Archwave (`sdsShell`). Commandes principales :

- **Navigation de l'arbre `sds://` comme un filesystem** : `ls -r`, `cd`, `pwd` → tout l'arbre de paramètres listé (extrait dans `research/notes/telnet_probe.txt`)
- **`get <chemin>` / `set <chemin> <val>`** : lecture/écriture de tout paramètre (`get cne/AppSettings/Global/uTrackName` → `uTrack`, `DeviceMode=0`, `SampleRate=2`)
- **Transport complet** : `fileplay` (configure/start/pause/next/mark/select/eof/samplecounter — avec routing, marks, preload), `filerec` (configure/start/pause/next/cue/prerecord/switch/samplecounter)
- **`fs`** : accès filesystem USB (ls/mkdir/rm/stat/mkfs) — "no filesystem available" quand pas de clé
- **`mixer`** : levels/querylevels/get/set fader|pan|mute/store
- **`inputselect`**, `channelmode`, `samplerate`, `cpsync` (état sync : "Standalone (Connected), SS_Idle"), `ptp`, `usb`, `lcd`, `wavefile`, `ini`, `persparam`, `rd`/`wr` (mémoire brute), `bat` (scripts batch)

**Conséquence : un client "uRemote" fonctionnel peut être écrit aujourd'hui en pure Telnet** — play/stop/rec, routing, mixeur, navigation filesystem, réglages. Le reverse engineering CHAI (port 55000) devient optionnel : il n'apporte que les notifications temps réel (watchers, compteurs) que le Telnet fournit en polling (`fileplay stat`, `mixer levels`).

### Carte AudioLAN — live sur 192.168.10.176 (22/10/2026)

Détectée par scan (signature 23+80+554). Firmware **4078**, même stack Archwave :

- **RTSP/1.0** : `Public: DESCRIBE, SETUP, TEARDOWN, PLAY` (DESCRIBE racine → 454, nécessite chemin de session)
- **Web UI `aes67App`** (Angular) + REST : `GET /sources` et `GET /status` renvoient JSON `ArchwaveAES67` ; `POST /configuration` ; mêmes `/api/fileupload`+`/command` que l'hôte
- **Streaming déjà actif** : 3 sources multicast **8ch L24/44100** vers `239.69.101/102/103.220:5004`, `ptime 1.09`, `framecount 48`, clock-domain PTPv2 `00-07-F5-FF-FE-49-00-30`, `mediaclk:direct=0` — les 24 sorties du uTrack sont diffusées sur le réseau en continu
- **24 "outputs"** (receivers réseau→carte) vides — configurables via la web UI ou l'API REST
- `audiolan stat` sur l'hôte : carte OK (in/out errors=0), `InterfaceAsInput=true`
- Réception : join IGMP `239.69.101.220:5004` suffit pour capter le RTP L24 (décodage trivial ; sync PTP requise pour qualité pro)

**→ La carte fonctionne d'ores et déjà comme un pont 24ch analog→AES67.** Reste à valider le sens inverse (RTP réseau → 24 sorties analogiques via les "outputs" + `inputselect digital`).

### Protocole CHAI/CCP (port 55000) — modèle confirmé

- uRemote = app **JUCE/Win32**, CHAI SDK, sockets TCP+UDP classiques (pas d'Ethernet brut)
- `CHAIFreeware.dll` (SDK freeware Alyseum, SourceForge `ms812proxy`) = **541 exports** → carte API complète dans `research/notes/chaifreeware_exports.txt` / `chai_api_map.txt`
- Familles de messages CCP identifiées dans les binaires : `NCM_*` (Ping, DevicePresence, WhereIsDeviceID, NetworkLatency, duplicates), `LM_*` (DeviceDeclared/Lost, VNMTray, VerifyKey — auth possible), `SM_*` (DeviceEnumeration, GetDeviceInfo, AssignController, Collect/RestoreSetupData, RecordingControl, Remote_*, Learn, Signal), `APP_*` (Generic + Modifier/Selector/Text/Event/DataTransfer), `AppIntCtrlMsgPayload_*` (Hello/HelloReturn/SmartConnect/CHAIInfo/Audio)
- Docs officielles archivées : `copperlan.org/chaidoc/` (concepts VNM/CHAI) + `chailinkdoc/` (CHAILink client/serveur — transport agnostique, bidirectionnel ; CHAIoNet ≈ CHAILink sur TCP)

### uTool2 — schémas XML récupérés

uTool2 = app **JUCE**. Vocabulaire XML complet extrait : namespaces `cymaticaudio.com/{SongProject,PlaylistProject,mixerpreset,sessiontree}/1.0`, éléments `song_project, playlist_project, audiofile(trackindex), channel(s), marker(s), track(name/count), sampling_rate, resolution, duration_seconds, total_sample_count, midi_file, start_mode(_delay), monitor_{level,mute,pan}, direct_level, sync_units…`, projet `.playlistprj`. Export USB = WAV multicanal + XML (limite 16 Ko/playlist) — spec quasi complète dans `research/notes/utool2_exe_strings.txt`.

## 7. Ce qui reste à vérifier (inconnues résiduelles)

1. ~~Ports ouverts~~ → **fait** : 23 (Telnet sdsShell, no auth), 80 (HTTP fw-update), 55000 (CHAI binaire).
2. ~~Rôle du WebSocket~~ → le WS n'est pas sur 55000 ; probablement côté carte AudioLAN ou non exposé sur l'hôte.
3. ~~Telnet sds://~~ → **confirmé, accès total** : c'est la voie royale (voir §6bis).
4. ~~Format on-wire CHAI~~ → **fait** : framing `ef51`/Adler, TLV 4337/4437, ~90 contrôles mappés via `FUN_000a6464`, notifications 4437 (~20 Hz mètres).
5. Ember+ réellement présent ou non sur la carte (option payante Archwave).
6. Interop AES67 à 24 canaux avec aes67-linux-daemon (limite 8ch du driver ALSA public — contournable via RTP brut ou build OEM Merging).
7. ~~Structure fichiers USB~~ → **fait** : `TakeNNNN/` + `<name>.set` XML + segments `_NNNN_.wav` (4 Go/12 h), FAT32 uniquement.
8. ~~Carte AudioLAN propre IP~~ → **fait** : 192.168.10.175, web UI Angular sur :80, telnet :23, RTSP :554, CopperLan :55000.

## 8. Aspects légaux

- **Interopérabilité** : la rétro-ingénierie d'un protocole pour interopérer est licite en UE (art. 6, directive 2009/24/CE) et tolérée en pratique ailleurs pour usage personnel.
- L'entité Cymatic Technologies B.V. est liquidée ; l'IP appartient probablement à RIEDEL/cessionnaires — **réutiliser des binaires/strings dans un produit publié serait risqué, ré-implémenter un protocole propre non**.
- Ne pas redistribuer les firmwares/installateurs Cymatic ; les garder en local comme référence.

## 9. Feuille de route suggérée (révisée post-recon — état nov 2026)

1. ✅ **Recon réseau** — faite : 23/80/55000 ouverts, Telnet sdsShell non authentifié = accès total.
2. ✅ **Client SDS** — fait : GUI Qt complète (`src/utrack_remote_qt.py`) couvrant transport, mixer 24ch, mètres, réglages, matrice routage, takes, AudioLAN.
3. ✅ **Framing CHAI documenté** — fait : `ef51`/Adler, TLV 4337/4437, souscription `c423` → flux ~20 Hz. Voir `ghidra_utrack_map.md` + `MEMOIRE_RE.md`.
4. ✅ **uTool/fichiers** — fait : structure takes complète via firmware RE (`ghidra_utrack_recorder.md`).
5. 🔶 **AES67/AudioLAN** — chaîne prouvée (sender 48k L24 → carte → mixer → casque) ; reste : souscription native RTSP `by-name`, domaine PTP, 24ch.
6. **Open source** — à faire : publier le repo nettoyé ; contacter `verstaerkermusic`/`not-nef` en référence.
7. **RE restant** : Thumb non-analysé restant (décodeur RX validator, `invokeRequest` RTSP), intégration complète USB-control (IOCTLs `0x8089xxxx`), bus SPI hôte↔carte.

## 10. Annexe — API HTTP embarquée (extraite de l'app Angular `archWaveApp`)

```
POST /api/fileupload        upload .BCD (FormData "uploadedFile"), max size en config
GET  /api/installProgress   progression install (params action=reset…)
POST /command               {"ArchwaveCMD":{"version":1,"reboot":true,"bootloader":false}}
GET  /sw_versions           {"ArchwaveVER":{"bootloader":{...},"application":{...}}}
WebSocket (RFC6455)         Sec-WebSocket-Version: 13 — payload binaire/texte à identifier
Telnet                      "sdsShell ready for commands. Try 'help'"
```

## Sources principales

- cymaticaudio.com (pages produit, forums archivés, wpfd downloads encore actifs)
- Firmware 4218 + AudioLAN 4078 (analyse statique, ce repo `research/`)
- `uRemote.exe` 1.2.009 via Wayback (analyse symboles)
- gearnews.com (fermeture Cymatic), installation-international.com + audioxpress (Archwave AudioLan/uNet)
- github.com/bondagit/aes67-linux-daemon, github.com/verstaerkermusic/copperlan-Connect, github.com/not-nef/open-uremote-copperlan
- ravenna-network.com (driver ALSA Merging), kvraudio/sequencer.de (détails CopperLan)
