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
