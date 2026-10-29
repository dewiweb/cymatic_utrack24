# AudioLAN (Archwave uMAN AES67) — API JSON/HTTP

> **Référence exhaustive déplacée → [`audiolan_http_api.md`](audiolan_http_api.md)**
> (schémas GET/POST champ par champ, tables de statuts 0-15, sémantique
> streamPath/manualSDP, gestion d'erreurs, séquence "Apply all" du webapp,
> file upload, exemples curl). Ce fichier reste le résumé + journal de
> découverte ; privilégier la référence pour toute implémentation.

Carte : `uT24-AudioLan-49-00-30` @ `192.168.10.175` (MAC `00:07:F5:49:00:30`), firmware `Main Firmware revision 4078`. Interface web AngularJS `aes67-0.1.2` (lwIP/1.3.1). Bundle JS conservé : `research/assets/audiolan/aes67-0.1.2.js`, page : `research/notes/audiolan_http_root.html`.

## Ports ouverts (vérifiés par scan TCP, 28/10/2026)

| Port | Service |
|---|---|
| 23 | telnet (accepte, pas de bannière spontanée — à explorer) |
| 80 | HTTP — API JSON ci-dessous |
| 554 | RTSP (`Public: DESCRIBE, SETUP, TEARDOWN, PLAY`) — contrôle de sessions RTP AES67 |
| 55000 | CopperLan VNM embarqué — **vérifié** : répond en CHAI (`CHAI.ac5`), annonce le uTrack (`34b96e2e`) dans ses membres. La carte est un membre CopperLan du même réseau ; le uTrack la pilote probablement ainsi (config AudioLAN/routing). |

## API JSON « ArchwaveAES67 » (GET, vérifiés en lecture)

| Endpoint | Contenu |
|---|---|
| `/status` | état `sources[]` + `outputs[]` (status, SDP, minSampleBufferLevel…) |
| `/device_list` | devices découverts `[{hostname, IPaddress}]` |
| `/stream_list` | `streams[]` actifs (vide au moment du test) |
| `/general` | `config`: name, DHCPenable, currentIP*, IPaddress/mask/gateway, MACaddress, playoutDelay, audioMode… |
| `/outputs` | `outputs[]`: name, streamPath, manualSDP, channels… |
| `/sources` | `sources[]`: name, streamEnable, multicastAddress, automaticConfigEnabled, RTPTTL, SIPusername/SIPpassword, channelCount… |
| `/parameter_strings` | énumérations : samplingRates, streamStatus, audioModes… |
| `/sw_versions` | `ArchwaveVER`: bootloader + application versions |

Observé dans `/outputs` : `manualSDP` conservait le flux de test `devin-test` (`239.69.200.200`, `L24/44100/8`, ptime 1.09) envoyé depuis `192.168.10.81`.

## Écriture (extrait du JS — `d.post(url, e)`)

POST JSON `Content-Type: application/json` sur les **mêmes URLs que les GET** :

```
POST /outputs   {"ArchwaveAES67":{"version":N,"outputs":[...]}}     (sans streamStatus/currentStream/currentStreamChannel/isCollapsedChannel/streamPathFake)
POST /sources   {"ArchwaveAES67":{"version":N,"sources":[...]}}     (sans multicastIp/multicastPort/streamStatus)
POST /general   {"ArchwaveAES67":{"version":N,"config":{...}}}      (playoutDelay.delayInSamples = entier)
POST /command   {"ArchwaveCMD":{"version":1,"reboot":true,"bootloader":false}}   → reboot ; bootloader:true → mode update
```

Firmware update : `POST /api/fileupload` multipart, champ `uploadedFile`, ≤ 16 Mo ; progression via `GET /api/installProgress`. **Ne pas tester sans nécessité.**

## À faire

- Telnet (23) : envoyer CR/`help` pour voir si un shell existe (comme le uTrack).
- RTSP : `DESCRIBE` une source pour voir le SDP dynamique.
- VNM 55000 : même protocole CHAI ? Si oui, la carte est pilotable via notre stack CopperLan existant.
- Captures ANEMAN/ArchControl si dispo pour compléter les champs write.

## Native subscribe VALIDATED (2026-10-29)

- POST /outputs avec `streamPath='<stream>/<ch>'` (1-indexed) persiste si `manualSDP` vide + `manualSDPChannel` present dans le POST.
- `devin-test` decouvert nativement via mDNS `_rtsp._tcp,_ravenna_session` (instance=name) + RTSP `DESCRIBE /by-name/<name>` -> SDP -> decodeur.
- SDP async (sans clock-domain/ts-refclk/sync-time/mediaclk) passe la gate PTP -> reception (status 13 pendant resolve, puis flux).
- streamPath vide = desabonne le canal. Teste sur 24 canaux et 1/2 (pairs) : fonctionne.
- sender: fake_aes67_sender.py --rtsp <port> --async-sdp + MdnsAdvertiser.
- ROUTING: streamPath permet le mapping arbitraire streamch->cartech (y compris duplication d'un canal sur plusieurs sorties). Ex: carte1<-devin-test/2, carte2<-devin-test/1 = swap stereo OK.

## CORRECTION table streamStatus (source officielle /parameter_strings)
0=Idle 1=OK 2=Transmitting 3=Tx unicast 4=Disabled 5=Not enough Decoders
6=Address Collision 7=Waiting 8=Rx no sync 9=Rx unicast no sync 10=Receiving
11=Rx unicast 12=Rx sync error 13=Rx time step warning 14=Invalid SR 15=Invalid PTP Domain
(13 = time step warning, PAS Invalid PTP Domain = 15 — corrige les notes RE precedentes)
