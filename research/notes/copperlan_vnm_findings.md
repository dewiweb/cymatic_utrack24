# CopperLan VNM — découvertes (22/10/2026)

## VNM installé et fonctionnel
- `CopperLanSetup_VistaSeven64[20110725_1.0(1)].exe` récupéré via Wayback (copperlan.org/phocadownload/autoupdate/Package/)
- NSIS -> extrait: CPVNM.exe (VNM), CPoEthAPI.dll, CPVMidi.dll, CLoNet.clp/CLoUSB.clp (plugins), CopperLanManager.exe, drivers CPoEthProt.sys + CHAILinkOverUSB.sys
- **CPoEthProt = driver NDIS RUNNING**, bindé toutes interfaces Ethernet
- CPVNM écoute TCP 40987/40989 + UDP 40987
- `CTCPIPLinkControllerIPAddressBroadcaster` = le VNM annonce ses liens TCP-IP dans les trames CPOETH

## Protocole discovery réel = Ethernet brut
- **EtherType 0x8927** = CopperLan over Ethernet (CPoEth)
- Beacons broadcast ~16Hz des 3 membres:
  PC(VNM)=f8:0d:ac:2a:67:d3 | uTrack24=00:07:f5:00:19:a0 | AudioLAN=00:07:f5:49:00:30
- Structure trame: `1x000000` + `f0f0f0f0` magic + `0700` + destMAC + `0700` + srcMAC + `0100 2000/2400` + `0001d0100100` + `0210 0010 xx00 0100` + tail(MAC+token)
- **PC beacon: 010020 | devices: 010024** -> probable version protocole (0x20 vs 0x24) = mismatch VNM 2011 vs fw 2018

## État: toujours pas de session
- Devices beaconnent mais VNM ne les adopte pas (CopperLanManager montre seul bloc MIDI local)
- Aucune connexion TCP device->VNM:40987 ni VNM->device:55000
- uRemote loop VNMSRCH UDP (app cherche le VNM local: ports 42857,51682,52345,65123) -> avec VNM installé, devrait répondre VNMINFO
- Hypothèses: (a) VNM trop vieux vs protocole device, (b) réseau CopperLan à créer/joindre dans Manager, (c) lien CLoNet TCP à configurer, (d) device attend une invitation

## Pistes non épuisées
- VNM Windows plus récent (1.2.x): Mac DMG 1.2(7)2014 existe; forum copperlan.org attachments id=71..76 non testés (URL args[0] à échapper)
- Settings CopperLanManager: créer réseau / ajouter lien TCP/IP 192.168.10.197:55000
- Analyser CPoEthAPI.dll/CPoEthProt.sys pour le protocole de membership
- uRemote connecté au VNM local -> capture session CHAI via pktmon (fonctionne!)

## Session 22/10 suite — découverte majeure

### La cause du blocage est CONFIRMÉE (Warnings.log)
`a013;1000;;Ethernet Received Failed Bad Version;MAC[F8:0D:AC:2A:67:D3]F:40[LCL301201]`
=> le VNM reçoit les trames mais rejette "Bad Version" (même les siennes en loopback)

### Structure trame CPOETH décodée (EtherType 0x8927)
`[type 4B][f0f0f0f0 magic][0700][dstMAC 6][0700][srcMAC 6][0100 VER][0001d0100100]`
- type: PC=0x10... (4B), devices=0x11...
- **champ version: `0100 20 00` (VNM 1.0 2011) vs `0100 24 00` (devices fw2018)** -> mismatch = cause du Bad Version

### Arme trouvée: CPoEthAPI.dll (43Ko, 8 exports propres)
`CPEth_Open, CPEth_Send, CPEth_StartReceive, CPEth_StopReceive, CPEth_GetInterfacesInfo, CPEth_GetInterfaceMac, CPEth_FreeInterfacesInfo, CPEth_Close`
=> permet de FORGER des trames CPOETH depuis Python (ctypes) :
   - rejouer beacon device avec version patchée 0x24->0x20 => si VNM adopte, session CHAI complète!
   - ou envoyer des trames VNMINFO à uRemote

### Pas trouvé de VNM plus récent (site live 403/404, wayback: seul 1.0(1) 2011 Windows + DMG Mac 1.2(7) 2014)

## NEXT (priorité)
1. Deviner signatures CPEth_* (désassembler la DLL, 43Ko) -> envoyer beacon patché
2. Si adoption: tout le protocole CHAI s'ouvre (uRemote via VNM local)
3. Fallback: patcher check version dans CPVNM.exe (r2 dispo)

## CPoEthAPI.dll — signatures décodées (session RE)
```
handle CPEth_Open(wchar_t *name)         // repne scasw = wide string
int    CPEth_Send(handle, payload, len, dstMac*)  // DLL construit eth hdr (src=MAC iface, type=0x8927)
int    CPEth_GetInterfaceMac(handle, macOut6)
void*  CPEth_GetInterfacesInfo()         // liste {u32 n, ptr[16]->blocks{name wstr, \DEVICE\{GUID}, mac}}
int    CPEth_StartReceive(handle, cb, a2, a3)     // crée thread rx
void   CPEth_StopReceive(handle)
void   CPEth_Close(handle)
void   CPEth_FreeInterfacesInfo(ptr)
```
- Beacon device capturé (68B payload): `11000000 f0f0f0f0 0700 ffffffffffff 0700 0007f50019a0 0100 2400 0001d0100100 ...` version @~0x22 = 0x24 (patch->0x20 pour le VNM)
- BLOQUÉ: CPEth_Open(NULL) sur tous formats testés: '\DEVICE\{GUID}', '/Device/NPF_{G}', '{G}', friendly 'Ethernet', 'VirtualBox...'
  - crash sur arg non-string => bien une wchar*
  - suspects: nom dans liste = exact '\DEVICE\{ACC16CDF...}' (testé NULL!) | privilèges admin? | le driver refuse open concurrent si CPVNM l'a déjà?
- NEXT: hooker/tracer l'appel CPEth_Open réel de CPVNM.exe (il ouvre les interfaces au boot) -> voir l'argument exact; ou tester en tuant CPVNM d'abord

## DÉBLOCAGE CPEth_Open + forge réussie (22/10)
- **CPEth_Open retournait NULL car CPVNM.exe monopolisait le driver** (exclusif). Le tuer => Open OK.
- Appel réel dans CPVNM.exe @0x140078c95: name = string '\DEVICE\{GUID}' issue de GetInterfacesInfo
- **CPEth_Send FONCTIONNE**: beacon device (68B) patché 0x24->0x20 envoyé en broadcast x8 (ret=1)
- CPEth_StartReceive: segfault ctypes -> prototype callback probablement différent (à debugger)
- Interface: '\DEVICE\{ACC16CDF-991B-4516-BD19-62A97674B485}' (Ethernet, MAC f8:0d:ac:2a:67:d3)
- TODO: rx callback proto (probablement (ctx, buf, len) ou autre); test d'adoption VNM si relancé

## Progression finale session RE (22/10)
- CPEth_StartReceive retourne 1 = OK (signature cb à 4 args provoque segfault AU CALLBACK = trames reçues mais proto faux)
- CPEth_Send OK (forged v0x20 beacons émis)
- Le crash prouve la réception marche -> il faut le vrai prototype du cb (désassembler la thread rx dans la DLL)
- Candidats signatures cb: (ctx,buf,len) / (handle,buf,len) / (buf,len) / (buf,len,ctx) / retour!=void
- Reste CPVNM.exe tué actuellement -> le relancer pour tests VNM

## CANAL CPOETH BIDIRECTIONNEL FONCTIONNEL (fin de session)
- Callback signature: `CPEth_StartReceive(handle, destBuf, cb, ctx)` -> `cb(ctx, payloadLen, srcMacPtr)`, payload copié dans destBuf (arg2=buffer!)
- Python reçoit les trames LIVE: uTrack24 (0007f50019a0) beacons 68B v0x24; AudioLAN (0007f5490030) beacons 68B v0x24 + TRAME 60B variante `01001c`/type `1210`
- CPEth_Send OK -> on peut émettre ET recevoir du CPOETH en Python pur via la DLL officielle
- CPVNM.exe actuellement tué (driver exclusif)
- NEXT: décoder le handshake (envoyer trame type 0x11 avec v0x24 depuis PC -> les devices répondent-ils?); analyser trame 60B AudioLAN; relancer VNM pour test adoption

## CHAIFreeware.dll — accès direct à l'API CHAI (fin de session)
- DLL **32-bit** => inutilisable depuis Python x64; **PowerShell x86 (SysWOW64) marche**
- `?CreateCHAI@Factory@CPNS@@SAPAVICHAI@2@QBD@Z` appelé via Add-Type P/Invoke => objet ICHAI créé (ptr valide)
- Vtable concrète lue: 45+ méthodes (DLL load base 0x71640000; méthodes 0x7165a090-0x716ab470 = .text)
- Candidats Connect/init: idx 14 (call edx + param), 18, 21, 27, 42 — signatures à confirmer
- API découverte présente: ICHAI_RemoteDevice_Find_AsyncReturnHandler, SignalNotificationHandler, Timer
- NEXT: identifier chaque méthode (disasm propre par fonction) + appeler avec bon ctx -> connexion TCP 55000 au device
- Script invocable: research/tools/chai_vtable.ps1 (PS x86)

## API CHAI débloquée par le tutoriel officiel (copperlan.blogspot + GitHub ludoviclaffineur/CopperLan-Tuto1)
- `CreateCHAI(KEY)` : arg = **clé freeware** par application, ex. "@7ZSwec9Pk@Yg5vjw1hQekXiuih8wWn2&3&@"
- Flux: `ichai->AddLocalDevice(cat, brand?, DuplicateMode, ?, ExtDevCaps, "name")` -> `dev->AddInput(caps,"n",sect)`/`AddOutput` -> `ichai->Connect()` => rejoint le réseau -> `Disconnect()`, `Destroy()`
- Connect() rejoint le réseau CopperLan via le VNM local; les remote devices arrivent par notification
- Vtable ICHAI: idx avec refs RTTI NotificationHandler = [4],[5],[8],[24] (Set*NotificationHandler)
- Reste: identifier Connect()/Disconnect()/Destroy() dans la vtable (MSVC: [0]=dtor puis ordre de déclaration)
- Repo cloné: research/assets/CopperLan-Tuto1 (Engine.cpp montre usage complet)

## SDK COMPLET RÉCUPÉRÉ (FreewareSDK sourceforge ms812proxy)
- research/assets/chai_sdk/ : 7 headers + CPTypes/ — ICHAI complet documenté
- Vtable ICHAI (sans base, ~ICHAI en fin): [0]Destroy [1]GetVersion [2]GetVersionString [3]GetMachineUniqueDuplicateNumber [4]GetRandom [5]CHAILock [6]CHAIUnlock [7]SetThreadPriority [8]SetFlowControlIncomingCapacity [9]CheckAsync [10]CancelAsync [11]RegNotifHandler [12]UnregNotifHandler [13]GetGlobalSyncTime [14]RedeclareAllDevices [15]AddLocalDevice [16]AddPluginLocalDevice [17]AddMIDI2CP [18]AddCP2MIDI [19]AddHybridMIDI [20]GetLocalDevice [21]RemoveLocalDevice **[22]Connect [23]Disconnect [24]IsConnected** [25]SetCHAIGroups [26]GetCHAIGroups [27+]RemoteDevice_Find*... ~ICHAI dernier
- CreateCHAI prend la clé freeware "@7ZSwec9Pk@Yg5vjw1hQekXiuih8wWn2&3&@" (tuto github ludoviclaffineur/CopperLan-Tuto1)
- Appels testés via PS x86: CreateCHAI OK, Connect[22] -> 1 (ERR_Failed), IsConnected[24] garbage(?), AddLocalDevice -> NULL
- Échecs possibles: clé expirée | device requis d'abord | génération VNM | signature devCaps (classe non-POD)
- ATTENTION: [0]=Destroy — l'appeler tue l'objet

## Révision du raisonnement (revue projet)
- **"Bad Version" = UNIQUEMENT notre loopback PC (F8:0D:AC), ZÉRO rejet device** → le VNM accepte les trames device; le blocage est ailleurs (génération VNM)
- CopperLan **1.7.1 existe** (software.informer) — le VNM 1.0(1)/2011 qu'on a est trop vieux; voie propre = installer le package récent
- CHAIFreeware.dll du repo cpdummyapp (sourceforge) = IDENTIQUE à la nôtre
- cpdummyapp Source/: `CreateCHAI(NULL)` marche (identité par défaut, pas de clé requise!), `AddLocalDevice(DC_Performance)`, `dev->SetCustomName()`
- Connect[22] → ERR_Failed qu'on ait VNM ou pas; AddLocalDevice → NULL (devCaps classe non-POD à transmettre correctement)
- TODO: flux exact sample cpdummy (CreateCHAI NULL → AddLocalDevice → Initialize → Connect)

## 🎉 CHAI CONNECTÉE AU RÉSEAU (session 22/10 fin)
- Vtable map EXACTE confirmée (62 méthodes, ~ICHAI dernier): [22]Connect [23]Disconnect [24]IsConnected [15]AddLocalDevice [11]RegNotif [42]RegSignalNotif
- **Connect[22] -> 0 (ERR_None) avec: CPVNM.exe tournant + handlers fake enregistrés + clé "@7ZSwec9Pk@..."**
- Requis: VNM local actif (CPVNM mort = ERR_Failed); notification handlers PAS obligatoires pour connect mais recommandés (sample cpdummy)
- Fake C++ obj technique: obj={vptr}->vtable[N delegates stub] via Marshal.AllocHGlobal + GetFunctionPointerForDelegate (PS x86 / .NET 32bit)
- IsConnected[24] retourne garbage-int = en fait boolean (byte bas=1=TRUE)
- NEXT: RemoteDevice_FindFirst_Async[27] pour énumérer le uTrack24 -> IRemoteDevice -> méthodes device
- SCRIPT clé: research/tools/chai_member.ps1 (PS x86, handlers+connect OK)

## État final session CHAI (22/10)
- Connect() marche: CPVNM actif + handlers + clé -> ERR_None, CHAI membre du VNM local
- MAIS zéro notification/déclaration en 25s -> le uTrack24 ne rejoint toujours pas le réseau du VNM 2011
- Conclusion: le VNM 1.0(1) est le goulot — les devices v0x24 n'entrent pas dans son réseau même si un client CHAI y arrive
- La solution reste le package CopperLan récent (1.7.1) côté VNM, OU forger le protocole device-side
- Scripts PS x86 validés: chai_member.ps1 (connect OK), chai_listen.ps1 (notification stubs OK)

## Tentative forge VNM v0x24 (22/10 fin)
- Beacon device rejoué avec src MAC = PC -> émis OK x20 broadcast
- Device continue son annonce, pas de réaction visible -> beacon seul insuffisant pour déclencher la session
- "Bad Version" log = uniquement loopback PC, PAS les devices -> VNM accepte leurs trames
- Disasm zone beacon-building (fo 0x74c00-0x75200): champ version écrit via helper sérialisation, pas immédiat visible

## État projet consolidé
✅ CPoEth bidirectionnel | ✅ CHAI connecte au VNM | ✅ SDK complet | ✅ Telnet + AES67
⏳ VNM↔device session = le blocage final (génération v0x20 vs v0x24)
→ Solution réaliste: package CopperLan 1.4.5 (liens dans notes) OU patch CPVNM pour annoncer/accepter v0x24

## Dernière passe forge (22/10 fin de session)
- Forge v0x24 VNM-style (type 0x10, queue 1c00, MAC PC) -> émis x25 broadcast, device = aucune réaction
- Conclusion: le handshake VNM↔device nécessite PLUS que le beacon (séquence d'adoption multi-trames inconnue)
- Il manque la spec du handshake post-beacon -> à désassembler dans CPVNM.exe (fonction member-adopt) ou capturer d'un VNM récent
- TOUS les acquis documentés: canal bidirectionnel, vtable 62 méthodes, SDK, structure trames

## 🎯 Fonction de traitement des trames localisée (RE final)
- `CPEth_StartReceive` thunk IAT @0x1400d7110, appelé depuis `0x140078d08`
- **Le callback rx (frame processor) = 0x1400777a0** (`lea r8,[rip-0x155c]`)
  → c'est LA fonction qui valide version/type/adopte un membre = la spec du handshake
- Contexte VNM (obj) = [rsp+0x50]+0x660
- rabin2/radare2 pour désassembler 0x1400777a0 -> logique version+adoption
- PROCHAINE ÉTAPE: `r2 -A` CPVNM.exe, pdf @0x1400777a0 -> lire la décision d'adoption
  et quelles trames elle attend/envoie -> forger la séquence complète

## Désassemblage fonction rx 0x1400777a0 (début)
- Signature: cb(ctx=[rsp+8], len=[rsp+0x10 edx], srcMac=[rsp+0x18 r8], data=[rsp+0x1b0])
- Vérifie: (1) srcMac != own MAC+0x668 (loopback -> err 0x1488) (2) len>=0xe (->err 0x1468) (3) len<=0x5dc (->err 0x146c) (4) copie payload en ctx+0x8a0
- Check version + adoption = plus loin (>+0x300)
- NEXT: continuer disasm de 0x140077a98+ (parse fields, version cmp, appel adoption)

## Fin session — point de reprise RE
- Fonction rx/adoption = 0x1400777a0 (CPVNM.exe)
- Dispatch des types trouvé: cmp 0x100/0x200/0x400/0xc00/0x1000000 = types messages; boucle membres ~0x480
- PROCHAINE ÉTAPE: désassembler avec radare2 -A (pas capstone linéaire -> désaligne) et suivre les sauts; chercher la fonction qui ENVOIE la réponse d'adoption (call CPEth_Send dans la fonction) -> la séquence complète du handshake
- Alternative + rapide: installer Ghidra (décompilateur) sur CPVNM.exe -> C code de la fonction d'adoption

## Handoff final RE
- CPEth_Send IAT 0x1400d70f0 — appelée via thunk jmp (comme StartReceive), pas ff15 direct
- Fonction rx/adoption = 0x1400777a0: dispatch types 0x100/200/400/c00, boucle membres 0x480
- NEXT: trouver thunks jmp ff25 vers CPEth_Send -> localiser la fonction qui ENVOIE l'adoption reply
- Puis désasm la réponse envoyée = la spec du handshake = ce qu'il faut forger

## RE CPVNM.exe — cartographie complète
- CPEth_Send thunk=0x14002b9d6 ; 2 fonctions senders:
  - 0x1400741a4 (send@0x252) — CRC seed 0xfdb98ace
  - 0x140074a9a (send@0xdf8) — CRC seed 0xfdb98ace
- Appelées indirectement (vtable) = méthodes du CpEth link controller
- Fn rx/adoption = 0x1400777a0 (callback à StartReceive)
  - signature: cb(ctx,len,srcMac,data)
  - dispatch types: 0x100/200/400/c00/0x1000000 ; boucle membres 0x480
- NEXT: soit r2 -A et chercher 'call [vtable]' dans 0x1400777a0 qui pointe vers
  0x1400741a4/0x140074a9a = l'envoi de la réponse d'adoption
- Ou Ghidra decompiler CPVNM.exe pour pseudo-C complet

## Point de reprise final RE CPVNM.exe
- fn rx/adoption = 0x1400777a0 ; senders = 0x1400741a4 (petit, 254B - reply?) et 0x140074a9a (gros, 942B - beacon?)
- Serializer magic f0f0f0f0 = helper partagé vers ~0x140075bxx
- Les senders sont méthodes vtable du link controller
- PROCHAINE ÉTAPE: Ghidra sur CPVNM.exe (decompile) OU radare2 -A; trouver le
  'call [vtable]' dans 0x1400777a0 qui appelle un sender après réception beacon
  -> la réponse d'adoption envoyée = spec du handshake à forger

## CPVNM.exe — map définitive (radare2)
fn rx 0x1400777a0: parse [CRC 0x140073cc0] -> loopback MAC check -> len check
  -> dispatch type msg: 0x100->0x1400776d0 / 0x200->0x1400763e0 / 0x400 / 0xc00
  -> erreurs->0x14008f600 ; itère membres->0x14001fd1c+0x14001f560+0x140006f50
senders: 0x1400741a4 (petit=reply?) / 0x140074a9a (gros=beacon) — via vtable ctx
le "Bad Version" vient des branches erreur (call [rax] edx=0x200/0x80/0x400/0x1000/0x2000)
DERNIER PAS: dans 0x1400777a0 trouver quel chemin mène à 0x1400741a4 (reply)
  = la trame d'adoption à forger. Ghidra recommandé.

## RE rx fn 0x1400777a0 — structure révélée
- Parse TLV: champs word-typés (max 0x480), boucle membres (allocs array ptr*8)
- Helpers: 0x14001f3e8=alloc obj, 0x14001f560=populate, 0x140006f50=?, 0x14001fd1c=?
- Senders via vtable ctx: 0x1400741a4 / 0x140074a9a (CRC seed 0xfdb98ace)
- NEXT (dernier): Ghidra/r2 -A sur 0x1400777a0 -> trouver quelle branche d'adoption
  appelle 0x1400741a4 (reply) = la trame à forger pour que le device rejoigne

## Session 27/10 — retour réseau + adoption partielle
- uTrack24 = USB-only après reboot → Ethernet down (muet même L2). Débranché → beaconne à nouveau (.197, 23/80/55000 ouverts)
- AudioLAN = .175 (changé), shell sds identique + stack VNM complète (CLPLnkCtlr/VnmTcpListener:55000/VNM Core/KeyVerif)
- VNM mémoire: uTrack MAC ×2, AudioLAN record avec NOM "uT24-AudioLan-49-00-30", strings "#uTRACK24 MIDI"
- 1210 frames: AL=feff/1000 (lien annoncé), uTrack=0100 (rien), PC=0100/0200
- Ports MIDI PC: VMidi 1-4 + LCL301201 (id VNM)
- AudioLAN CopperLan cfg: BrandID=0xFFFE, BrandName="Test", Enabled=1
- État: VNM traque les devices (beacon-level) mais PAS de déclaration CHAI → invisible Manager
- Le blocage final = session applicative CHAI (lien TCP:55000 jamais formé)

## Session 27/10 — lien TCP jamais formé
- uTrack24 de retour après débranchement USB (.197, ports ouverts)
- AudioLAN=.175 même stack (VnmTcpListener:55000 + shell sds + threads VNM)
- VNM mémoire: traque les 2 MACs + noms ("uT24-AudioLan-49-00-30", "#uTRACK24 MIDI")
- VNM↔device TCP:55000 JAMAIS établi (pas de handshake observé en 15s sniff)
- VNM local: client CHAI (Manager) connecté sur localhost:40987
- 1210: AL=feff/1000 (lien!), uTrack=0100 (aucun) — AL signale son lien TCP
- NEXT: Manager UI > add TCP-IP link manuel vers 192.168.10.197:55000

## Session 27/10 — client CHAI natif en cours
- uTrack24 de retour (.197, tous ports) après débranchement USB
- AudioLAN = .175, shell sds complet + stack VNM
- VNM mémoire: noms devices présents (uT24-AudioLan-49-00-30, #uTRACK24 MIDI)
- Connect CHAI = OK, notification handler reçoit cb#1 (ptr device!)
- RemoteDevice_FindFirst_Async[27] = signature 10 args non-POD → crash interop
- SOLUTION PROPRE: compiler client C++ natif avec CHAIFreeware.lib (déjà téléchargée)
  mais pas de compilateur x86 installé sur la machine → blocage outil
- Ou: créer les objets CDeviceID/CombinedEnums correctement (layout connu: {vptr,_v})

## Session 27/10 — fin de journée, état consolidé
- uTrack24 back on LAN (.197, 23/80/55000 open) — beaconne CPOETH à nouveau
- AudioLAN = .175, stack VNM complète + shell sds
- VNM mémoire: uTrack ×1, AudioLAN ×3-4 (adoptée avec nom "uT24-AudioLan-49-00-30")
- Forge 1210 spoof uTrack-MAC+champ-lien-AL -> aucune réaction VNM (pas de TCP init)
- Diagnostic final: la déclaration se fait sur le lien TCP:55000, jamais initié par VNM v0x20
- AudioLAN adoptée via son canal v0x1c natif (bilingue); uTrack24 v0x24-pur ignoré au-delà du beacon
- Le verrou = génération de protocole au niveau liaison, pas au niveau beacon

## uRemote.exe = carte complète du protocole CHAI (RTTI riche)
- Contient l'implémentation CHAI statique complète: classes RemoteDevice_*
  (GetControllerInfo/GetIndexListItem/GetInputInfo/GetOutputInfo/GetParameter*/GetProperty)
- Handshake: AppIntCtrlMsgPayload_Hello / HelloReturn / SmartConnect_*
- TypedNotificationManager/TypedQueuedNotification = modèle notif complet
- PROCHAINE ÉTAPE: désassembler ces classes dans Ghidra/r2 -> le format exact
  du handshake CHAIoNet -> forger vers VnmTcpListener:55000
- La session :55000 attend un Hello CHAIoNet -> trouver son template dans uRemote

## Session 27/10 — pool d'agents + nouvelle version + RTTI résolu

### Nouvelle version CopperLan (CNET)
- 1.0.6.1 installée (Program Files\CopperLan, 64-bit) — TOUJOURS v0x20, même mur
- 1.4.5 = probablement inexistante (informer agrège des versions fantaisistes)

### Cartographie uRemote.exe (agents)
- Chaîne: CFindVNMThread → UDP broadcast VNMSRCH → VNMINFO reply
         → CTransportAddress(ip,55000) → CWin32TCPIPSocket → connect()
         → CCLPCHAIMsgLinkTransportProtocol → 1er msg = AppIntCtrlMsgPayload_Hello
         → HelloReturn → SmartConnect → CHAIInfo
- uRemote en mode DEMO = aucune socket (découverte désactivée)
- VNMSRCH forgé (UDP 40987/55000/9875...) → aucune réponse VNMINFO des devices

### RTTI → vtable (méthode validée en Python, sans r2 -A)
- Hello TD @ 0x955a14 → COL @ 0x92ac2c → vftable @ 0x5f0250
  slots: 0x5abf70,0x54f5d0,0x5a76e0,0x505e20,0x56d150,0x56d190,0x56d1e0
- Payloads = stubs; la sérialisation wire est dans l'enveloppe
  CAppInternalControlMessage (RTTI @ .?AVCAppInternalControlMessage@CPCHAI@@)
- 1210 field après 1100: AL=feff (BrandID 0xFFFE / "all"), uTrack=PC=0100
- Warnings a013 = loopback PC uniquement — devices 0x24 ACCEPTÉS,
  blocage = formation de lien, PAS version

### Prochaine étape
1. Sortir uRemote du mode demo → capturer VNMSRCH live → forger VNMINFO
   → uRemote ouvre TCP:55000 → capture Hello sur le fil (vérité terrain)
2. Ou désassembler CAppInternalControlMessage::Serialize via sa vftable
   (même méthode RTTI→COL→vftable que ci-dessus)

## RE uRemote.exe — adresses clés extraites
- Hello vftable @ 0x5f0250 (dtor 0x5abf70, GetSize 0x54f5d0, Serialize 0x5a76e0,
  Deserialize 0x505e20, + 0x56d150/0x56d190/0x56d1e0)
- CAppInternalControlMessage vftables @ 0x5ee8f8/0x5ee92c/0x5ee93c/0x5ee96c
  (multi-héritage; Serialize enveloppe ~0x56b200, builder @ 0x56b240 écrit
  const 0x37c4 = msg type-ID)
- CCLPCHAIMsgLinkTransportProtocol vftables @ 0x5ef7b8/0x929d10
- CCLPMessageLinkCHAI vftables @ 0x5edb40/0x5edb5c
- Méthode: TD = nameVA-8 ; scan LE-dword(TD) -> COL ; scan LE-dword(COL) -> vftable-4
- uRemote démo = 0 socket, ne touche pas VNM:40987 non plus; la connexion CHAI
  au VNM est transient ou ne se fait qu'avec un device découvert
- mDNS: uTrack annonce _http._tcp seul; AudioLAN _http+_rtsp; VNM annonce LCL301201
- uRemote NE FAIT PAS de VNMSRCH observable en démo (0 socket UDP)

## Session 27/10 — percée décisive: BAD VERSION EST LE MUR

### Console CPVNM (manual start) = debug complet!
- `T` Transport: **#Received: 0, #Sent: 140, #BadVersion: 414**
  → le VNM rejette TOUTES les trames entrantes (devices v0x24 incluses)
- `N` Network Control: Neighbour/Bottom lists = VIDES (aucun voisin)
- `D` Device table: 2 entrées locales seulement (VNMManager + MIDI)
- `M` Link manager: seul "Internal message link" — PAS de lien Ethernet/TCP dans la liste
- `Ethernet[Version: 16]` = version de lien 0x10

### Autres découvertes
- CLoNet.clp = DEBUG build → dépend de msvcr80d.dll (absente) → jamais chargé
  → pas d'interface TCP-IP annoncée dans les 1210 → devices ne dial pas
- Patch CLoNet.clp fait (imports msvcr80d->msvcr80 mappés) — pas encore chargé
  (peut-être chargé on-demand, pas au startup)
- Patch mémoire 0x20->0x24 sur 307 beacons = INUTILE (rebuild instantané
  par le builder — version vit dans l'objet lien, pas le buffer)

### PROCHAINE ÉTAPE
- Patcher LE CODE: la comparaison version dans le rx path OU l'objet lien
  (champ version stocké à l'init). Chercher `cmp reg,0x20`/`cmp reg,0x24`
  autour de la rx callback du nouveau CPVNM.exe (même rôle que
  0x1400777a0 de l'ancienne build)
- Ou forcer le chargement CLoNet (copier msvcr80d.dll si trouvable)

## Session 27/10 — BREAKTHROUGH: le check version est LE mur (confirmé console)

### CPVNM console (manual) — état réel du VNM
- `T`: #Received=0, #BadVersion=414, #Sent=140 → TOUT rejeté à l'entrée
- `N`: Neighbour/Bottom vides — aucun pair formé
- `D`: 2 entrées locales (VNMManager + MIDI) — les devices ne sont PAS membres
- `M`: seul Internal link — pas de lien Ethernet ni TCP
- `Ethernet[Version: 16]`

### Verrous précis identifiés
1. Check version CPOETH: devices v0x24 rejetés (version attendue par le VNM=0x20)
2. CLoNet.clp = debug build → msvcr80d.dll manquante → jamais chargé →
   pas de TCP-IP link annoncé → devices n'ouvrent pas de session :55000
3. uRemote démo = stack CHAI jamais lancé (pas de socket)

### Échec: patch mémoire 0x20→0x24 (307 beacons) — rebuild écrase instantanément
### NEXT: patcher le CODE — la comparaison version dans le rx callback
  (nouveau CPVNM.exe, rôle de l'ancien 0x1400777a0 — trouver via thunk
  CPEth_StartReceive @ IAT 0x1400d5120 → son call site → callback = arg
  de la fonction qui appelle le thunk; la comparaison ~`cmp reg,0x20` dans
  cette callback est à NOPer/patcher pour accepter 0x24)

## Session 27/10 — PERCÉE: patch rx fonctionne! (815 received, 0 badver)

### LE PATCH QUI MARCHE (CPVNM.exe 1.0.6.1)
- `0x140075a65`: `74 24` -> `eb 24`  (skip reject byte3!=0&&!=1)
- `0x140075a9a`: `74 24` -> `eb 24`  (accept any byte0/version)
- Résultat console: **#Received: 0 -> 815**, BadVersion 414->0
- Device table: 2 -> 50 entrées (membres locaux résolus)
- Neighbour ring: PREVIOUS/NEXT/BOTTOM = Unknown[22] (anneau formé!)

### CLoNet.clp fixé et CHARGÉ
- 2 patches: imports `MSVCR80D.dll`->`msvcr80.dll` (+ map _malloc_dbg->malloc,
  _free_dbg->free, _CRT_RTC_INITW/_CrtSetCheckCount/__crt_debugger_hook->_getpid)
- manifest SxS: `Microsoft.VC80.DebugCRT v6195` -> `Microsoft.VC80.CRT v9680`
- + copie msvcr80.dll dans CPVNM dir => CLoNet.clp se charge, VNM écoute
  TCP 40987/40988/40989

### RESTE: adoption incomplète
- Aucune trame unicast échangée (tout reste broadcast)
- VNM n'initie pas de directed frames vers les devices
- Notre 1210 n'annonce pas d'endpoint TCP (1100 0100 0200)
- Device table = locaux seulement, pas de noms appris
- Manager: pas de NIC sélectionnable (lien Ethernet pas enregistré?)
- Forge 1210 style-AL (feff/1000): aucun dial entrant

### Hypothèses restantes
- Devices rejettent nos v32 sortants (mur symétrique) -> patcher version
  émise (dans l'objet lien, champ init - non localisé: pas un immédiat)
- Ou la résolution membres passe par le lien TCP, jamais créé côté VNM
  (le TCPIP link existe mais n'apparaît pas dans M)

## Session 27/10 bis — FORMAT DU LIEN TCP DÉCODÉ (abebafec)

### Capturé: stream :40987 du VNM (link CHAIoNet)
```
abebafec <len u16 LE> <message CPOETH-style>   -> trame de lien
  abebafec1c00...30 42 00 10 07 00 00 00 6976ffaa   = keepalive v0x1c
  abebafec3800...ffffffff0100 2000 ...0210...2300 101e 2200 = member dump v32
  abebafec2400...0100 2100 ...4200 1010            = frame v0x24 (dialecte device!)
```
Le lien TCP véhicule les mêmes messages que CPOETH, wrappés `abebafec<len>`.
`abebafec`=magic header, finit par `ffaa`-ish trailer.

### Patch rx CONFIRMÉ: 815 reçus, 0 badver — le VNM accepte tout

### Échecs session:
- :55000 device ignore TOUS les formats testés (greeting, frames abebafec,
  v24/v32) → n'accepte que des pairs appairés au CPOETH (adoption d'abord)
- Aucun unicast TCP ni directed frame: le VNM n'initie jamais le lien
- Notre 1210 n'annonce pas le endpoint TCP :40987
- Manager connecte à :40987 (CHAI client) — capture loopback via pktmon
  a donné métadonnées seulement (pas de payload)

### Prochaine étape
- La résolution membres doit passer par le lien CPOETH directement
  (directed frames) — le VNM ne les envoie pas → trouver le déclencheur
  de "link engage" dans CPVNM (SmartConnect?) OU forcer un directed frame
  forgé à la main vers le device

## Session 27/10 ter — LA 1.4.5 TROUVÉE ET INSTALLÉE

### CopperLan 1.4.5 existe (sept 2017, Klavis) — téléchargée depuis
  https://alyseum.com/copperlanmanager.html (pcloud)
  → research/assets/software/CopperLanSetup_1.4.5.exe
- VNM v36 natif → AudioLAN ADOPTÉE (uT24-AudioLan-49-00-30's CHAI en mémoire!)
- Plugins: CHAIoNet.clp + CLoNet.clp + CLoUSB.clp tous chargés
- Lien TCP format: abebafec <len u16> <msg CPOETH> (keepalive/member dump/v36)

### Bloqué: driver CPoEthProt non installé
- 'T' = "No transport interfaces"; Manager = aucune NIC
- Driver présent: C:\Program Files\CopperLan\Drivers\CPoEthProt.inf/.sys
- + CPVMidi.sys + CHAILinkOverUSB.sys + DriversInstallation.exe
- User relance Windows pour activer le driver

### Cleaned: mes patches CPVNM/CLoNet écrasés par l'install 1.4.5,
  msvcr80.dll supprimés, ActiveEthernet restauré

## Session 27/10 final — RÉUSSI: chaîne complète + trames dirigées capturées

### Chaîne fonctionnelle complète
- CPoEthProt.sys installé (DriversInstallation.exe) → Ethernet transport OK
- VNM 1.4.5 → uTrack24 + AudioLAN ADOPTÉS sur le canvas Manager
- uRemote connecte et contrôle le device
- Trames dirigées 1104/1101 (CPOETH unicast VNM↔devices) = le canal contrôle

### Capturé en live — le vrai protocole de contrôle
  VNM→uTrack: 1104 0000 2f02... (msgs dirigés)
  uTrack→VNM: 1101 0000 2f02... (réponses)
  + member records avec noms (uT24-AudioLan-49-00-30, uTrack)

### Plan boîte à outils (en cours)
1. Décoder le format des trames dirigées 1104/1101
2. Reproduire les commandes uRemote (transport/mixer/etc.) en Python
3. Assembler le multitool: Telnet + CPOETH-CHAI + AES67 + USB
