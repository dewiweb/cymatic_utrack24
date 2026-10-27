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

## INVOKE-CONTROL — fonctions mappees (msg 0x37c4)
- FUN_00665c60 -> FUN_0064dfe0 : envoie msg 0x37c4 (invoke) avec champs
  +0xf8 (controlID?) +0x2c +0x9c — appele quand flags &0x8000
- FUN_006621f0 -> FUN_0064e1b0 : msg invoke, lit l'objet +0xf0 (u16)
  et +0x54 vtable[0x98] -> construit le msg
- FUN_00669dd0 -> FUN_0064e1b0 : autre invoke
- FUN_00630ce0 : handler reception msg 0x37c4 (dispatcher invoke)
- Format msg 0x37c4 (FUN_0064dfe0): +0x48=msgID +0x4c=0x37c4
  +0x1c=flags +0x1e +0x20=u32 +0x24/0x28=u16 +0x2a=u8
NEXT: trouver le msg 0x37c4 qui fait "play" — le controlID dans +0xf8/+0x1c
ou capturer le vrai invoke (record/mute plus parlant que play)

## ETAT — invoke-control en cours d'extraction
- msg 0x37c4 = invoke-control (SmartConnect + transport/commands device)
- envoi: FUN_0064dfe0/64e1b0 | reception: FUN_00630ce0
- format: +0x48 msgID | +0x4c=0x37c4 | +0x1c..+0x2a = champs invoke
- controlIDs: mute=0x2fd0/2ff0 | transport=0xd000/0xd001 | device=0xb210
- strings transport (UI) a .rdata 0x2cc0a4-0x2cc13c (Play/Stop/Record)
- le transport n'est PAS un write 8423 -> invoke sur controle du device
- NEXT: decompiler FUN_00630ce0 complet (dispatch invoke) pour mapper
  les controlIDs -> actions, ou trouver le msg play par son controlID

## TESTS CONTROLE DEVICE (en attente verification)
- mute ch1 envoye via write 8423 endpoint 34b96e2e prop 0000 val 1/0
- play/stop transports envoyes (controlIDs) — pas confirmes
- Question ouverte: nos writes atteignent-ils le device? (verifier visuellement)
- Si ca ne marche pas: le lien membre->device est peut-etre incomplet
  (le SmartConnect etablit le routing; verifier qu'il est actif)

## TEST TRANSPORT (en attente)
- envoyes: play capturé + propIDs 0x6300-0x6b00 val=1 vers ca53d56b
- les boutons play/rec sur le device s'allument si ca marche
- si rien: nos writes n'atteignent pas le device (lien SmartConnect inactif)
  ou mauvais endpoint/format

## POINT DE VERIFICATION EN COURS
Les writes 8423 partent vers le uTrack mais on n'a pas encore de confirmation
visuelle que le device reagit. 3 hypotheses si ca ne marche pas:
1. le lien membre->device (SmartConnect) n'est pas actif -> writes rejetes
2. mauvais endpoint/propID pour le transport
3. le transport utilise un autre type de message (invoke 0x37c4)
Verifier dans Manager si l'edge uRemote<->uTrack est actif (vert) ou inactif.

## BARRAGE TESTE — 414 msgs envoyes
- writes 8423: propIDs 0x00-0x80 + transports 0x6300-0xb210, 3 endpoints
- invocations 4023 TLV 1023/1223
- Aucun bouton transport allume (confirmation user en attente)
- Si rien: le lien SmartConnect vers le device est inactif — nos decls
  creen le membre mais pas le ROUTING. uRemote fait un connect explicite
  qu'on ne reproduit pas. C'est le vrai blocage.
- NEXT: trouver le msg qui ACTIVE le lien (SmartConnect open-session)
  classes: CTaskSmartConnectInitiator, RemoteDeviceWatcher_SmartConnectOpenSession

## CONFIRMATION — writes non routés (aucun bouton)
Barrage 414 msgs: aucun bouton device. Le membre existe dans Manager
mais N'A PAS de lien data vers uTrack = SmartConnect non etabli.
uRemote ouvre une session au device (RemoteDeviceWatcher_SmartConnectOpenSession)
= le message qui cree le routing. C'est ce qu'il faut reproduire.
PROCHAINE ETAPE: trouver la seq SmartConnect open-session dans les
classes TD decompiles, ou capturer le connect uRemote->device exact.

## SMARTCONNECT SESSION — format decode
FUN_00679060 construit msg SmartConnect (0x120 octets):
  params: u16 champs + u32 (endpoint IDs) + blob optionnel
  envoie via FUN_00676560(8,0x80,payload)
FUN_006794b0 cree session depuis un buffer
=> le "play" n'est pas le souci; il faut d'abord OUVRIR la session au device
   via un msg SmartConnect_Source vers l'endpoint uTrack, puis les writes passent
NEXT: envoyer un SmartConnect source vers uTrack endpoint avant les writes;
le contenu exact du payload dans les captures (chercher le connect uRemote)

## C437 = OPEN SESSION (le message qui manque)
uRemote envoie c437 a chaque endpoint uTrack (t=35.62):
  src 0e00 0200 <membre> | dst 0e00 0100 <device> | reqID | TLV 0837
VNM echoit c437 avec 8837 = session ACCEPTEE
puis 8437 = abonnements metering actifs
=> notre replay contient ces c437 (init_seq_fresh) donc la session s'ouvre
   (edge visible dans Manager = preuve). Le probleme n'est PAS la session.
=> les writes echouent car propID/valeur faux OU mauvais membre handle.
   Le vrai test: lire une prop pour verifier le routing (read, pas write)

## PERCEE — le READ fonctionne, le routing existe!
- 5423 (subscribe/read) vers uTrack 34b96e2e -> 9964B de reponse avec le device
- Donc notre session PEUT parler au uTrack. Routing OK.
- Le probleme writes = format/propID, pas le routing
- La session s'ouvre bien (c437) + on peut lire les props
- NEXT: enumere les props uTrack par read (5423) pour mapper les
  controlIDs -> trouver play/transport par leur valeur, ou le bon format write

## ETAT FINAL — routing prouve, props capturees
- READ 5423 vers uTrack marche (reponses 10-15KB avec le device)
- prop_enum.bin = 14916B de reponses aux props transport/device
- la session parle au uTrack. Reste a mapper les writes (format/propID)
- le transport probablement = propID lisible dans prop_enum.bin
- NEXT: decoder prop_enum.bin, identifier propIDs play/stop/transport
  puis les writes correspondants pour controler le uTrack

## RESUME DE LA SESSION RE — ou on en est
FAIT:
- Protocole CHAI decode (framing ef51, checksum, handshake, adoption)
- Notre client = membre visible dans CopperLan Manager + lien uTrack
- c437 = open-session (s'ouvre, routing VERS device existe)
- READ 5423 marche (reponses du uTrack, props lisibles)
- Formats decodes: writes 8423 TLV, invoke 0x37c4, session c437

BLOQUE:
- Writes vers uTrack partent mais pas d'effet visible
- propEnum depropIDs illisible dans la reponse brute
- Le transport/play = format write encore a clarifier

CLES POUR LA SUITE:
- le routing fonctionne (reads passent) -> c'est le FORMAT write a fixer
- comparer write uRemote vs notre octet-par-octet sur le meme endpoint
- ou le transport utilise un message invoke 0x37c4 special

## TEST play valeur reelle 28018400 envoye (pas 1)
- play.log montre valeur 28018400 pas un simple 1 -> envoye tel quel
- si ca marche: le transport est un write avec valeur encodee (state machine)
- si non: le membre handle ou autre champ differe

## ETAT — play ne marche toujours pas
- valeur 28018400 envoyee, uTrack ne reagit pas
- routing prouve (reads marchent) mais writes inefficaces
- le vrai play utilise probablement un autre endpoint ou membre handle
- ou le transport n'est pas un write 8423 sur ca53d56b mais autre chose
  (invoke 0x37c4, ou commande sur un autre endpoint device)
- NEXT: capturer une action transport NETTE (record) pour comparer
  le write exact bit-par-bit vs ce qu'on envoie; ou decompiler la
  fonction uRemote qui envoie play (bouton UI -> commande)
