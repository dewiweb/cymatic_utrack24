# Pass-through réseau→AES67→analogique — état final (22/10/2026)

## Acquis
- Carte AudioLAN sur .176 (23/80/554, fw4078), API REST documentée, stream sortant 24ch actif
- PC = grandmaster PTP domaine 0 : LA CARTE SE VERROUILLE DESSUS (slaveOnly domain 0, avant : aucun master)
- Sender RTP/L24 8ch 44.1k, ts=ptp_now*RATE, 48 spl/pkt, cadence busy-wait, SAP announce
- Carte souscrit : outputs 0-1 status=12 avec le SDP

## Bloquant
status=12 "Receiving (sync error)" PERSISTE malgré : PTP gm verrouillé, jitter corrigé,
48 spl/1.088ms, ts-refclk vers mon gm. Hypothèses restantes :
  a) mediaclk semantics : ts offset/epoch différent de now*RATE
  b) la carte exige SAP-announce ou streamPath plutôt que manualSDP
  c) receiver exige un "vrai" sender certifié
  d) test a=mediaclk:asynchronous pas encore fait par l'utilisateur

## Fichiers
src/fake_aes67_sender.py (sender+SAP+PTP-lock)
src/ptp_master.py (grandmaster domaine 0, ~150 lignes, réutilisable)

## Next
- essayer a=mediaclk:asynchronous dans manualSDP
- Dante Virtual Soundcard mode AES67 (test définitif Windows)
- aes67-linux-daemon sur Linux = sender de référence
