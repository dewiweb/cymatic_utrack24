# Roadmap — uTrack24 multitool (état au 29/10/2026)

## Acquis (implémenté + validé)

- **CopperLan/CHAI** : framing, souscription mètres 20 Hz, ~90 contrôles mappés, transport (play/stop/rec/marker/prev/next/save), mute/solo/fader/pan ×26, input-select lu via `0xf050`, header état/board/channelmode/lock.
- **Carte AudioLAN** : API JSON complète documentée (`audiolan_http_api.md`), souscription native AES67 (mDNS `_rtsp._tcp,_ravenna_session` + RTSP `/by-name/` + SDP async), routing `streamPath` par API, routing GUI par dropdown.
- **RE firmware** : 13 rapports Ghidra (cartographie ~95% des 2 images), ARC protocol specifié.
- **GUI Qt** : 5 onglets + statuts live + reconnexion + overlay.

## Étapes d'implémentation (court terme)

1. **[A] Écriture texte CopperLan** — locate/loop `0xd001-3`, chdir `0xc001`, playlist `0xd008-9`. Bloqueur : manque un frame d'écriture texte capturé (uRemote seek/chdir) pour le template TLV. Action : capture Wireshark quand uRemote tourne, ou deviner la famille `x837`.
2. **[A] File browser CopperLan** (`0xc001/0xc003/0xc010`) — navigation + load take sans telnet. Dépend de [1] pour `0xc001` (texte) ; `0xc003`/`0xc010` sont numériques (faisable déjà).
3. **[B] Transport avancé** : position live (0xf006-9/f00b), filerec/fileplay stat en continu, markers display.
4. **[B] AudioLAN étendu** : PTP state, playoutDelay editor, reboot via `/command`, `needsReboot` flag.
5. **[C] Monitoring** : MonitorBoost (`0xd0xx`?), headphone/source select, automation snapshots.
6. **[C] uTool2** : format USB, songs/playlists, .BCD export.

## Étapes RE (moyen terme)

7. **[RE-A] Écriture texte** : décompiler le chemin `FUN_000abbc8` → le TLV exact attendu ; ou capture uRemote.
8. **[RE-B] Commit path** `uCL+0x848` / `FUN_0013e4a4` — débloque `0xb201/0xb202` (atténuation/MIDI offset).
9. **[RE-C] ARC host-side** : le vrai canal uTrack→carte (SPI) — compléter `audiolan` SDS + browse/rec-play.
10. **[RE-D] USB device mode** : UAC2 + protocole BridgeCo privé — potentiel pour un driver custom.
11. **[RE-E] DSP kernels** : les 11 kernels audio (gain/pan/mix) — base d'un mixeur software équivalent.

## Jalons produit

- **v0.3** (actuel) : télécommande complète + AES67 natif.
- **v0.4** : locate/loop + file browser + automation.
- **v0.5** : monitoring avancé + playlists.
- **v1.0** : remplacement uRemote/uTool2 complet.
