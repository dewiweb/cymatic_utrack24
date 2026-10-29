# Ghidra RE — uT24 AudioLAN firmware (uT24_Audiolan_Release_ 4078.bcd)

Analyse Ghidra 12.0.4, projet `/tmp/ghidra_proj/utrack_fw`, programme `uT24_Audiolan_Release_ 4078.bcd`
(raw ARM:LE:32:v7, base 0, bloc `ram` 0x0–0x270bff, 6766 fonctions, 425070 instructions).
Toutes les adresses ci-dessous = offsets fichier = adresses Ghidra.

## 0. Structure du .bcd et adressage (IMPORTANT)

- Header `"BcOd"` @0 : version 1, date `20171113130227`, puis descripteur secondaire @0x94 :
  `{0xaaaa5555, 1, 0xa5a5a5a5, 0x0040e000, 0x2e6, crc, stub ARM, 0xa5a5a5a5, 0x8000, 0xdeadbeef, 0x0026ea38, crc}`.
  Image principale ≈ 0x26ea38 octets (à partir de ~0x100) ; code ARM de fin @0x270a38.
- **L'image est linkée à VA = 0x60000000 + offset_fichier.** Preuves :
  - pools littéraux contenant p.ex. `0x60241f48` → chaîne au fichier 0x241f48 ;
  - tables de noms (typeinfo/leaf) dont les entrées internes sont `0x6025xxxx`/`0x6026xxxx` ;
  - `ldr r0,[pc,#x]` dans le code ARM charge des `0x60xxxxxx` (ex. @0xc907c → `0x60405ec4` = func Thumb @0x405ec4).
  ⇒ dans Ghidra, toute valeur `0x60xxxxxx` rencontrée en décompilation = adresse `value - 0x60000000`.
- **Code mixte** : ARM (KnOS, appli, CnE, HTTP, SDS, PTP) dans la partie basse ; gros module
  **Thumb** (stack "Streaming Framework" / Ravenna AES67 + lwIP + mDNS) ≈ >0x160000.
  L'analyse Ghidra (timeout 120 s) n'a disassemblé qu'une partie du Thumb ; une re-analyse à
  `-analysisTimeoutPerFile 3600` n'a **rien ajouté** (aucun point d'entrée découvert).
  Beaucoup de fonctions du module doivent être désassemblées à la demande (script `FuncAt.java`).
- Région ~0x1e5000–0x1e8000 : **catalogue de messages/leaves** — records `{u32, "str\0"}` avec tous
  les noms de leaves CnE (ManualSDP, User_SourceStreamName…) et les chaînes ERROR:
  `RavennaController::doOutputChannelChanged: *`. Pas de pointeurs directs : accès via descripteurs.
- Scripts créés pour cette analyse : `research/tools/ghidra/ProgInfo.java`, `StrFile2.java`
  (comme StrFile mais gère les strings terminées `\n\0` + scan de pointeurs LE),
  `RefScan.java`, `FuncAt.java` (disassembe+crée la fonction contenant un site donné, TMode forcé),
  `research/tools/thumb_xref.py` (scan de refs Thumb adr16/addw/subw/ldr-littéral/movw-movt,
  ARM adr, dword, aux bases 0 et 0x60000000). Sorties : `ghidra_al_*.txt`.

## 1. SDS / shell telnet

- Enregistrement des commandes = petites fonctions ARM « registrars » du type :
  `push; adr r0→nom; adr r1→help; adr r2→usage; mov r3,#1; stm entry+4..{r0-r3}; ldr handler→entry[0]; bl registrar`.
- **`sync`** : registrar @ **0xc8fb0** ; name @0xc8fec `"sync"`, help @0xc8ff4 `"switch to sync input:"`,
  usage @0xc900c `"sync\t line, ptp, wclk, ext, reset\n"` ; objet handler @ fichier **0x2641d0**
  (descripteur : première entrée = thunk d'exécution @ fichier **0x170440**, qui écrit dans un objet
  global `0x60244730` — champ « sync source » ; valeurs `line|ptp|wclk|ext|reset`).
- **`dsp`** : registrar @0x85bf0. **`ptp`** : enregistré dans `FUN_00037704` (écrit la leaf
  `"ptp shell command"` puis `FUN_0014d890` ×2). **`ptpt`** ("change PI values") : string @0x1703f0,
  site Thumb @0x1703ce. Table de dispatch `{0,funcptr}` @ ~0x22a240 avec aides `stat`,
  `sys/stream` à côté (handlers stat/`audiolan`-style côté framework).
- **`audiolan` command is NOT in this firmware** : `"Test AudioLAN card on adapter"` (et ses
  sous-commandes `stat|rec|play|44|48|88|96`) n'existe que dans `uTRACK24_Release_4218.bcd`.
  C'est une commande SDS **du uTrack** qui pilote la carte via l'interface adaptateur (SPI).
  La carte expose : `sync`, `ptp`, `ptpt`, `ptp_sync`, `get`, `set`, `ls`, `cd`, `persparam`, `warp`…
- get/set CnE : `get [-e] <attr>` / `set <attr> <val>` (Usage strings @0x22981e…) ; les leaves
  sont des `19CnE_SystemDataProxy` (valeurs visibles dans `audiolan_sds_tree.txt` ; ex.
  `RavennaConfiguration/OutputGroups/OutputGroup1/OutputN/{User_SourceStreamName,
  User_SourceChannel, OutputChannel, ManualSDP, ManualSDPChannel}`).

## 2. API JSON « ArchwaveAES67 » (HTTP :80)

- Enregistreur d'endpoints @ **0x8f754** (fonction ARM) : enregistre via `bl 0x3960`
  (r1=URL, r0=this=RavennaWebsiteFS) : `/device_list` @0x8fa44, `/stream_list` @0x8fa54,
  `/general` @0x8fa64, `/sources` @0x8fa70, `/outputs` @0x8fa7c, `/status` @0x8fa88,
  `/sw_versions` @0x8fa90, `/parameter_strings` @0x8faa0, `/result` @0x8fab4,
  `/api/installProgress` @0x8fabc.
- GET = méthodes `RavennaWebsiteFS::provideXxx`. **FUN_0008fcac = provideOutputs** : émet
  `{ArchwaveAES67:{version,outputs:[{name,streamPath,manualSDP,manualSDPChannel}…]}}`
  (strings @0x900e4/0x900f0/0x900fc).
- **POST /outputs = FUN_000affc4** (`RavennaPOST_handler::doOutputs`) :
  parse `{version:1, outputs:[…]}` ; pour chaque sortie (ordre = index du tableau interne,
  `FUN_000b9aac` fournit la liste) :
  - `name` → `FUN_000704c4(obj, name)` (rename),
  - `streamPath` non vide → coupe au dernier `'/'` (`stream/channel`), `atoi(channel)` ;
    `FUN_00070690(obj, streamName, chan-1)` = setSourceStream, puis
    `FUN_00070260(obj, "", 0)` = clear ManualSDP,
  - `streamPath` vide + `manualSDP` non vide → `FUN_00070260(obj, manualSDP, manualSDPChannel-1, 0)`
    = setManualSDP puis `FUN_00070690(obj, "", 0)` = clear source stream,
  - sinon erreur catalogue : « the received path %d is not correct » / « output count mismatch »
    (le POST exige **autant d'outputs que le modèle** — 24 ici).
- Vérifié par décompilation (`ghidra_al_verify.txt`) :
  - **FUN_00070690 = OutputChannel::setSourceStream** — écrit `User_SourceStreamName`
    (`FUN_00042a98` @0x70804) + `User_SourceChannel` (`FUN_00043514` @0x70860) puis poste le
    même message async (descripteur `DAT_00070878`, listener `*(obj+0x24)`, vtable+0x2c).
    Callers : FUN_000affc4 (POST /outputs), FUN_00161d8c, FUN_001624a0, FUN_00161ba4, FUN_000cea30.
  - **FUN_000704c4 = OutputChannel::setOutputName** — écrit `User_OutputName` (@0x705f8).
  - **FUN_000b9aac** = getter de la liste globale d'outputs (≈40 callers, dont doOutputs).
- **FUN_00070260 = OutputChannel::setManualSDP** : écrit les leaves CnE `ManualSDP` et
  `ManualSDPChannel` (`FUN_00041c14` open / `FUN_00042a98` write-string / `FUN_00043514` write-int /
  `FUN_00041dd4` close) puis **poste un message async** au listener `*(obj+0x24)`
  (descripteur de message @ fichier 0x260b08 → callbacks ARM 0xfdd68/0xfdc88/0xfdc90/0xfdbfc →
  `FUN_000fdca8`/`FUN_000fdab8` = notification + reconstruction de listes).
  **Pas d'étape « commit »** : chaque écriture de leaf notifie le contrôleur en async
  (même mécanisme que `set` en SDS).
- `POST /general` = `RavennaPOST_handler::doGeneral` (erreurs catalogue : device name, audio mode /
  sampling rate, PTP domain/TTL/slaveOnly, playout delay, sample size, SIP identity).
  `POST /sources` = `doSources` (multicast addr, RTP TTL, autoConfig, streamEnable, stream name,
  SIP identity, count mismatch). `POST /command` = `ArchwaveCMD` (reboot / bootloader).

## 3. Souscription récepteur (streamPath / manualSDP → RTP)

Chaîne confirmée : écriture leaf (SDS `set`, JSON POST, ou CopperLan) → notification CnE async →
`OutputChannel::setManualSDP`/`setSourceStream` → message au **RavennaController**
→ `doOutputChannelChanged` (code Thumb du module, non décompilé ; ses erreurs sont dans le
catalogue 0x1e6xxx) : vérifie dans l'ordre — controller init, sampling rate courant,
**destination multicast**, **domaine PTPv2** (`Invalid PTPv2 domain number %u`), **payload format**,
**sampling rate %d**, **Manual SDP info** (`SDP_Parser`), **décodeur dispo** (`No more decoders`),
et pour le chemin streamPath un flux SIP valide (`SIP source stream is malformed!`).

- **SDP_Parser = FUN_00056158 (ARM)** — champs lus :
  `a=clock-deviation:%u %u` (opt.), **`a=clock-domain: PTPv2 %hhu`**, sinon
  **`a=ts-refclk:ptp=IEEE1588-2008:%*x-%*x-…:%hhu`** ou variante `domain_nmbr=%hhu` → param_1+0xc ;
  `a=sync-time: %u`, **`a=mediaclk:direct= %u`** → param_1+8 ;
  `m=audio %hu RTP/AVP %hhu …` (port + liste PT) ; **`a=rtpmap:%hhu %[^/]/%u/%hu`**
  (pt, codec, fréq, canaux → liste) ; `c=IN IP4 %[^/]/%d` (addr + TTL) ; `a=recvonly` → [1]=1 ;
  `a=sendonly` → [2]=1 ; succès → [0]=1.
  **Point clé** : si `clock-domain`/`ts-refclk` ET `mediaclk` absents → **param_1[3]=1** (flag
  « asynchrone »). `a=mediaclk:asynchronous` ne matchant pas `direct= %u`, un SDP avec
  `mediaclk:asynchronous` + pas de ts-refclk est **accepté comme flux asynchrone**.
  → le SDP `devin-test` (`mediaclk:asynchronous`, sans ts-refclk/clock-domain) PARSE OK.
  Le rejet « Invalid PTPv2 domain » ne survient que si un domaine est présent et ≠ configuré.
- Classes de décodeurs présentes (typeinfo) : `RTPDecoderL16/L24/L32`,
  `RTPDecoderFlexDelay(L16/L24)`, `RTPDecoderAM824(CU)`, `RTPBaseDecoder` ; `MaxNoOfDecoders=4`.
- Statuts (table de noms @ **0x26af50**, ordre) : `… Receiving (no sync), Receiving (time step
  warning), Receiving (sync error), Transmitting (unicast), Receiving (unicast), OK, Disabled,
  Idle, Invalid Sampling Rate, Waiting, Transmitting, Receiving, Invalid PTP Domain,
  Address Collision, Not enough Decoders` (+ libellés UI `Samples in buffer`, `Delay Time`…).
  `/status` expose `status` numérique + `minSampleBufferLevel`.
- `Waiting` référencé depuis le code Thumb @0x22a284 (zone status getter).
- IGMP : `igmp_joingroup` (lwIP) référencé aux sites Thumb 0x18cef4/0x18cf0e — la jointure
  multicast existe dans le module réseau (déclenchée à la config du décodeur).
- RTSP : `RTSP/1.0` référencé aux sites Thumb 0x537dc/0x54bd8 ; `RtspServer`, 
  `RtspServerRequestDescribe::invokeRequest` (454 Session Not Found observé — le DESCRIBE n'est
  servi que pour des sessions existantes ; l'annonce des sources passe par SAP/Bonjour+RTSP côté
  ANEMAN). SIP unicast possible : `RTPSIPUnicastController`, `doNotifyINVITE` (vérifie domaine PTP,
  sampling rate, « not receive only », 486 Busy).
- **RTP reçu** : horodatage vs fenêtre de playout — erreurs `RavennaController::
  doHandleDecoderMessage: Samples outside window on decoder %u` et `Time step on decoder %u at
  timestamp %u` (→ statuts « time step warning »/« sync error »).

### Pourquoi « waiting » (status 7, buffer 0) — conditions d'acceptation des paquets
D'après le code : le statut `Waiting` = décodeur créé/configuré mais rien n'arrive dans la fenêtre.
Pour passer à `Receiving` il faut que : (1) le SDP ait produit un flux valide
(m=audio+rtpmap+c= obligatoires ; codec ∈ L16/L24/L32 ; channelCount ≤ flux),
(2) le domaine PTPv2 de l'SDP == `RavennaConfiguration/PTP/DomainNumber` si présent
(sinon flux asynchrone accepté), (3) la fréquence de l'SDP ∈ taux valides du mode audio ET
`EnabledIn1xFS/2xFS/4xFS`, (4) la dest soit multicast → IGMP join, (5) un décodeur libre,
(6) ensuite les paquets doivent tomber dans la fenêtre RTP-timestamp du playout buffer —
horodatages non-verrouillés PTP ⇒ « Samples outside window » ou état `Receiving (no sync)`
plutôt que `Receiving`. Notre SDP de test (44100, mediaclk:asynchronous, multicast
239.69.200.200) a dû créer le décodeur (→ Waiting) mais l'échantillonnage 44.1k/horodatage
non-locké ne remplit jamais la fenêtre — d'où buffer 0. Le fix probable : envoyer
`a=ts-refclk:ptp=IEEE1588-2008:<gm>:0` (+ `a=mediaclk:direct=0`) à 48 kHz pour que le décodeur
utilise l'horloge PTP, OU vérifier `streamStatus`/`minSampleBufferLevel` monte après IGMP join.

## 4. PTP (stack Thumb, région 0x25000–0x37xxx)

- **Dispatcher de trames = FUN_00027450** (appelé par FUN_000350fe) : valide longueur ≥0x22,
  `versionPTP==2` (pbVar8[1]&0xf), `domainNumber==cfg` (pbVar8[4]), clock-id source ≠ soi ;
  `switch(msgType)` : 0 Sync→**FUN_00032554**, 1 DelayReq→FUN_0003115c, 2 PDelayReq→FUN_00031af0,
  3 PDelayResp→FUN_000320dc, 8 FollowUp→FUN_00031688, 9 DelayResp→FUN_00031320,
  0xa PDelayRespFU→FUN_00031cb0, 0xb Announce→FUN_00030ebc, 0xc Signaling→FUN_00032548,
  0xd Management→FUN_00029ee8.
- **FUN_00032554 = RX Sync** : 1-step → timestamp RX (FUN_00036f7c/FUN_00036da0) puis
  **FUN_000263ec(port,t1,t2,correction,…)** = mise à jour CurrentDS ; 2-step attend le FollowUp
  (compteur « RX sync %d consecutive », free msg via FUN_00030aa4/FUN_00030aea).
- **FUN_000263ec = CurrentDS update** : calcule offset(t2-t1) & delay, appelle le servo
  **FUN_00025b38** ; si accepté écrit offset→currentDS (obj+8) + **FUN_000260dc** (applique) ;
  sinon log « Skipping -> CURRENT DS: Offset » (rejet).
- Servo/loop-control Thumb @ ~0x25b00–0x25d80 (non analysé) ; chaînes :
  `PTP LC: Sync Rejected - gap=%u raw_offset=%c%uns lock[count=%u depth=%u]` @0x23bfc8,
  `PTP LC: gap=%u raw_offset=%c%uns filteredOffsetNs=%d output_drift=%d accu_drift=%d
  lock[count=%u depth=%u]` @0x23c014, `PTP: resetting servo loops` @0x25d2c (ref @0x25b80),
  **`PTP: large offset, by-passing servo loops  raw_offset=%c%llus %uns`** @0x23c080 —
  sens : quand |raw_offset| dépasse un seuil, le servo saute la boucle PI (« by-passing ») et
  recale directement / reset (« resetting servo loops ») — c'est l'adaptation à un nouveau
  grandmaster ; puis `Loop Control: currentOffset=%d lock[count depth]` @0xad5a0 (site 0xad4da).
  `ptpt` permet de régler les coefficients PI.
- Config PTP (CnE) : `RavennaConfiguration/PTP/{DomainNumber,Priority1,Priority2,
  LogAnnounceInterval,LogSyncInterval,TTL,SlaveOnly}` ; JSON `/general` les modifie (doGeneral).
  `DSPAppControl_Custom::readSettingsFromConfiguration: Force sync mode to PTP` — le domaine de
  synchro BeBoB est forcé en mode PTP (cf. aussi `reconfigureSynchDomain`, domain IN-LOCK /
  TrySynchMuted). `sync` SDS choisit la source d'horloge (line = flux réseau, ptp, wclk, ext).

## 5. Divers utiles

- `sds://` @0xd9804/0x227cb4/0x227d4d/0x26b2c7 (prompt + scheme) ; « No SDS available ».
- `RTSP/1.0` refs 0x537dc/0x54bd8 ; `DESCRIBE, SETUP, TEARDOWN, PLAY` = Public header.
- WebSocket/Web FS + firmware update : `RavennaWebsiteFS::doUpdate`, `scanBCD`
  (« Current image 0x…-0x… », « New image ») — le .bcd porte un slot courant+nouveau.
- `error` strings utilisent un catalogue {id,"fmt"} (région 0x1e5xxx) — pour retrouver le code
  Thumb correspondant, chercher les littéraux `0x601e6xxx`/`0x601e7xxx` dans les pools ou les
  descripteurs voisins (table {funcptrs} p.ex. @0x2697b4 : 0x60167135,0x601df505,… = méthodes
  RavennaConfiguration).
- Adresses-clés restantes à creuser : `RavennaController::doOutputChannelChanged` (Thumb,
  dans le module — chaîne via le message @0x260b08 → thunks 0xfdd68/0xfdc88/0xfdc90/0xfdbfc),
  `RTPDecoderFlexDelayL24` (réception RTP : validation SSRC/PT/format), RTSP DESCRIBE handler
  (0x537dc), `audiolan` SDS inexistant (côté uTrack seulement).
