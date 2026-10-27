# MEMOIRE — RE Cymatic uTrack24 / CopperLan (a relire apres reset)

## OBJECTIF
Remplacer uRemote/uTool2 par un outil natif (Qt GUI). Reverse-engineering du protocole
CHAI/CopperLan pour controler le uTrack24 (transport/mixer/monitoring/routing AES67).

## ETAT = ADOPTION REUSSIE dans CopperLan Manager
Notre client Python src/chai_session.py rejoue la sequence init_seq_fresh.txt
(1073 msgs captures de uRemote sur VNM vierge) → le membre "uRemote" apparait
dans CopperLan Manager avec un edge vers uTrack. Session tient via keepalives.

## PROTOCOLE DECODE (verifie dans le code Ghidra)
Frame: ef51 | u16 (flags<<12 | len max 0x58c) | payload aligne4 | crc32-BE
Flags: b0=client→VNM  20=VNM→client  10/a0=keepalive
Checksum interne = Adler-like FUN_00678cd0 (seeds 0x4c4d/0x5054, mod 0xfff1)

Handshake: hello ef510180+nonce → accept ef510000 → puis decls c842
c842 = declarations membres/devices (VNM echoit = accepte)
d842 = negociation lien VNM→client (SmartConnect payloads 0x37c4)
8423 = writes proprietes (controles)  |  4437 = metering flux
5423 = subscriptions  |  c423/4423 = polls/sync  |  c010/d010 = session
Membre: ID persistant 0x69727160 (cote client) ; handle session alloue par VNM
uRemote cree: device "uTrack24 Remote" classe 0x6800000, membre "uRemote",
containers Status/Meters/Controllers/Files/Settings (FUN_00545da0)
Mute = FUN_0051b610 toggle par canal ; serialiseur TLV 0123 = FUN_005834a0

## FICHIERS CLES
src/chai_session.py      = client session interactive (replay + reponses)
research/assets/cap/init_seq_fresh.txt  = sequence d'adoption complete
research/assets/cap/clean_130604.log    = capture session uRemote
research/assets/cap/fresh_vnm.log       = capture VNM vierge + uRemote
research/notes/copperlan_vnm_findings.md = toutes les notes RE
research/assets/software/uRemote.exe    = binaire analyse
research/assets/chai_sdk/               = SDK freeware 2011 + sources

## GHIDRA — projet pret
C:\tools\ghidra_projects\uremote_v36 (uRemote.exe analyse, 16909 vftables)
Scripts: C:\tools\ghidra_scripts\ (Decomp*.java, FindCHAI, Callers, ChainRTTI*)
Cmd: analyzeHeadless.bat C:\tools\ghidra_projects uremote_v36 -process uRemote.exe
     -noanalysis -scriptPath C:\tools\ghidra_scripts -postScript <Nom>.java

## RESEAU
uTrack24=192.168.10.197  AudioLAN=192.168.10.175  VNM TCP=127.0.0.1:55000
SDK v1.5 se connecte :40987 (autre service, rejete pour adoption)

## PROCHAINE ETAPE
1. Stabiliser membre (repondre a toutes sondes VNM) ou renommer DewiTool
2. Capturer 1 action utilisateur seule (mute ch1) = isoler le msg 8423 exact
3. Decoder le mapping propriete<->canal puis reproduire mixer complet

## UPDATE — messages de controle 8423 decodes
Format: 8423 | src membre | dst device uTrack (34b96e2e) | TLV 0123 0410 3400 | propID u16 | valeur
La rafale a ~22.8s = sync etat (tous les canaux). Le mute ch1 = un write specifique.
NEXT: comparer 2 captures (ch1 mute on vs off) pour isoler le propID du mute.

## PENDING — mute off non capture
mute1.log a les writes 8423 (sync etat ~22.8s) mais pas le toggle isole
mute_off.log = aucun write 8423 -> uRemote n'envoyait pas (pas sur vue mixer?)
NEXT: recapturer en gardant uRemote sur l'onglet mixer, toggle ch1 proprement.
Les writes 8423 = TLV 0123 0410 3400 <propID u16> <valeur> vers device 34b96e2e

## BLOQUE — capture des writes de controle
- mute_off.log + prop_edit.log : QUE du trafic de fond (4437 metering, polls)
- L'editeur CopperLan Manager n'envoie pas de 8423 sur :55000 capte
- Le write de controle passe peut-etre par :40987 (service controle) ou
  une session Manager differente qu'on ne capte pas sur loopback:55000
- NEXT: capturer TOUS les ports CPVNM, ou les writes en live depuis notre session

## APPROCHE — envoyer les writes depuis NOTRE session
Capturer les writes utilisateur ne marche pas (Manager parle ailleurs).
Meilleur: notre session adoptee peut ENVOYER des 8423 au uTrack directement.
8423 TLV 0123 0410 3400 <propID> <valeur> vers 34b96e2e = write propriete.
Les propIDs du mixer (mutes/faders) a decouvrir en sondant (read 0123 vs write).

## GHIDRA — chaine de commande (mise a jour)
- FUN_00516c30 = dispatch evenements -> FUN_00547400 / FUN_00547350 (mute)
- FUN_005262c0 = dispatch avec routes -> FUN_00547780/545420/5453a0/545320/545200
- FUN_00585430 = encoder write propriete (flags +0x30 selectionne le type)
- mute = FUN_0051b610 toggle canal ; session keepalive = FUN_00545200 (c010)
- PropIDs transport vus en capture: 6306-6b06 (4023) et 6506 (8423 write)
- le write play (6506/28018400) n'a PAS declenche la lecture = mauvais champ

## CLE — les commandes passent par control IDs (vtable[0x174])
Handlers decompiles montrent des appels vtable[0x174](controlID, 0, param, 0):
- 0x2fd0 = mute canal (base controleurs)
- 0xd000 = controle (FUN_00547780 - probablement transport/seek)
- 0xb210 = controle (FUN_00545420)
Le "play" = un controlID specifique, pas un propID generique.
NEXT: lister les controlIDs (0xXXXX) utilises dans les handlers -> carte des commandes

## CARTE DES CONTROLS (controlIDs vtable[0x174])
Plages de controle identifiees dans uRemote:
0x2fd0 = base controles canaux (mute+)
0xd000 / 0xb210 = controles transport/device (handlers FUN_547780/545420)
Listes candidates: 0x2300-0x4200 (canaux), 0x5000-0xd000 (device/transport)
Le play = probablement un controlID 0xd0xx ou 0xb2xx.
NEXT: decompiler FUN_00547350 et ses freres pour mapper chaque controlID
-> fonction de transport (play/stop/record) au bon controlID.

## UPDATE — controlIDs confirmes (handlers decompiles)
- 0x2ff0 = base mute canaux (FUN_547350 appelle vtable[0x174](id-0x2ff0))
- 0x2fd0 = mute alternatif (FUN_51b6c0 toggle etat canal +envoie)
- 0xd001 = controle transport (FUN_5450f0 vtable[0x17c] -> seek/transport?)
- 0xb210 = controle device (FUN_545420)
- 0xd000 = autre transport (FUN_547780)
La valeur float 0x4cc = position/valeur du controle (fader?)
NEXT: tester play = envoyer commande controlID 0xd001/0xd000 au uTrack;
les handlers montrent que le transport utilise vtable[0x17c] pas [0x174]

## ETAT SESSION (reprendre ici)
- Teste controlIDs transport: 0xd001, 0xd000, 0xb210 envoyes au uTrack
- A verifier: le uTrack a-t-il joue? (user pas encore confirme)
- Handlers transport = vtable[0x17c](controlID) / vtable[0x174](controlID)
- Mute = 0x2fd0/0x2ff0 | Transport = 0xd000/0xd001 | Device = 0xb210
- Session src/chai_session.py tient le lien (repond sondes)
- NEXT: confirmer si play a marche; sinon decompiler les methodes
  vtable[0x174]/[0x17c] pour le format exact de la commande transport

## ECHEC — play via 8423 ne marche pas
- controlIDs 0xd001/0xd000/0xb210 envoyes en write 8423 -> uTrack n'a pas joue
- Raison: vtable[0x174]/[0x17c] = appels INVOKE sur les controles,
  pas des writes de propriete -> format de message different
- Le transport utilise probablement un msg "invoke control" (type autre que 8423)
- Dans play.log, le vrai play = probablement les msgs 4023 (propIDs 6306-6b06)
  ou un message invoke specifique
- NEXT: decompiler la methode vtable[0x17c] (invoke control) pour le format;
  ou capturer un vrai "record" depuis uRemote (plus parlant que play)

## BLOCAGE REEL TROUVE — nos writes ne sont pas routes
- Test: write 8423 vers uTrack -> VNM n'echoit PAS (0 echo recu)
- uRemote write -> VNM echoit (broadcast aux abonnes). Nous = refuse
- Donc: notre membre n'a pas l'autorisation/le lien vers l'endpoint uTrack
- Hypothese: il faut un SmartConnect/lien etabli membre<->device (l'edge
  qu'on voyait = le routing). Ou une souscription 5423 explicite au device.
- NEXT: decompiler la creation du lien SmartConnect (CTaskSmartConnect*) OU
  envoyer le bon msg de lien membre->device avant les writes;
  regarder comment uRemote etablit l'edge vers uTrack au debut

## ETAT FINAL — blocage sur le controle du device
- Echo test non concluant: le VNM ne renvoie JAMAIS l'echo a l'emetteur
- Read-back prop echoue: format read incorrect (4423 mal construit)
- Le lien uRemote<->uTrack est visible dans Manager (edge) = decls OK
- Le transport n'est PAS un write propriete classique:
  probablement un "invoke" sur un controle (vtable[0x17c] dans le code)
- Play.log montre: 4023 msgs (notifications etat) + 8423 write prop 6506
- NEXT (priorite): trouver le format INVOKE-CONTROL exact dans Ghidra;
  c'est probablement un autre type de message que 8423, ou un appel methode
  sur l'objet transport du device. Chercher FUN qui construit le msg invoke.

## PROCHAIN PAS PRECIS — resoudre invoke-control
- TD .?AVICHAI @ file 0x884de8 | .?AVCComputerCHAI @ 0x88a4ec
- ctor FUN_00627bd0: param_1[0x33b]=ICHAI::vftable (interface CHAI)
- les appels transport = vtable[0x174]/[0x17c] sur objet +400 (ICHAI*)
- Resoudre ICHAI::vftable VA (via TD->COL->vftable, ~offset -4 avant vft)
- lire les u32 aux slots +0x174 et +0x17c = adresses fonctions invoke
- decompiler ces fonctions = format exact du msg invoke-control (transport)

## NOTE — script errors courantes a corriger
- getScalars() n'existe pas sur Instruction -> utiliser getOpObjects()
- getLabels() n'existe pas -> SymbolTable.getSymbols()
- substring() : verifier length d'abord
- TD ICHAI @ file 0x884de8 -> VA ~0xc84de8 (verifier offset section)
- La fonction de send msg = FUN_0062edd0 (605 chars, decompilee)

## FORMAT INVOKE-CONTROL decode (FUN_0064dfe0/64e1b0)
Le transport = msg interne type 0x37c4 (meme type que SmartConnect):
  +0x48 = msgID | +0x4c = 0x37c4 | +0x1c..0x2a = champs (flags/controlID/params)
FUN_0062edd0 = le send: flag 0xb000 client / 0x2000 VNM, appelle FUN_0064c110 (frame)
Le "play" = msg 0x37c4 avec controlID transport dans les champs +0x1c-0x2a.
Les d842 VNM->client contiennent ces payloads 0x37c4 = negociation.
NEXT: mapper les champs +0x1c-0x2a du msg 0x37c4 au transport play/stop.
