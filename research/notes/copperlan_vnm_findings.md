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
