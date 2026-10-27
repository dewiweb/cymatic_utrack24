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
