# Carte des commandes uTrack24 (extraite de uRemote.exe)

Source : Ghidra. Les 35 appels `vtable[0x174](ctrl, 0, valeur, 0)` sont listés dans `ctrl_calls.txt`. La classe de chaque appelant vient de son RTTI (`ctrl_classes.txt`, script `ClassOf.java`).
Format sur le fil (2 trames réelles reproduites octet pour octet) : `8437` / TLV `4337`, ctrl u16 @50, valeur i32 en fin, sous-session @18 et @34.

| ctrl | Classe UI appelante (RTTI) | Valeur envoyée | Statut |
|---|---|---|---|
| 0xd000 | TransportKeys | 3=stop 4=play/pause 5=rec | **validé sur le device** (sous-session 2) |
| 0xd001 (slot 0x17c) | MarkerListPanel, ProgressBarPanel, TransportKeys | position (autre builder `FUN_0064de20`) | format à décoder |
| 0xd002 / 0xd003 | ProgressBarPanel (`FUN_00543ab0`) | 0 | |
| 0xd008 | RemoteDisplay::MyItem | u16 @+0x184 | |
| 0xd009 / 0xd088 | ViewSelection (items 5 / 6) | 0 / 1 | |
| 0xb000 | VI_ClockSourceChoice | index-1 | observé à l'init (sous-session 4) |
| 0xb001 | VI_FootswitchChoice | index-1 | observé à l'init (sous-session 4) |
| 0xb003 | VI_DHCPChoice | ==1 | ⚠ réseau |
| 0xb004 | VI_StaticIP | *param | ⚠ réseau |
| 0xb005 | VI_SubnetMask | *param | ⚠ réseau |
| 0xb102 | VI_SampleRateChoice | index-1 | |
| 0xb103 | VI_ResolutionChoice | index-1 | |
| 0xb104 | VI_TrackCountChoice | index-1 | |
| 0xb105 | VI_PreRecordingChoice | bool | |
| 0xb200 | VI_AutoPlayChoice | bool | |
| 0xb203 | VI_PlaybackModeChoice | index-10 | |
| 0xb204 / 0xb205 | VI_StereoOutputsChoice | 2 valeurs | |
| 0xb207 | VI_MultitrackOutPostFaderChoice | bool | |
| 0xb210 / 0xb211 / 0xb212 | MainComponent (boutons) | 0 | |
| 0xb300 | VI_MADIInputChoice | index-1 | |
| 0xb301 | VI_MADIModeChoice | index-1 | |
| 0xb302 | VI_MADIFrameChoice | index-1 | |
| id-0x4cd0 | VI_MADIInputAssignmentChoice | index-1 | |
| id-0x4ce0 | VI_MADI96kOutChoice | index-1 | |
| id-0x4cf0 | VI_MADI48kOutChoice | index-1 | |
| 0xc003 | MainComponent, FilePanel::ViewItemElement | sélection fichier | |
| 0xc010 | MainComponent | @+0x6a38 | |
| 0xf060 | MainComponent | *(+0x6c78) | |
| id-0x2ff0 = 0xd010+ch | DSPMChannelStrip (+0x2b0) | 2 (bascule) | Solo (par élimination, voir device_model.md) |
| id-0x2fd0 = 0xd030+ch | DSPMChannelStrip (+0x3c8) | 2 (bascule) | **Mute prouvé** (écho appareil, mute1.log) |
| 0xd050+ch / 0xd070+ch | mixer (TLV 4237 numérique) | u16 | Pan / Fader prouvés (chai2_125803.log) |

## Ouvert
- Sous-session : **résolu**, l'appareil annonce le node de chaque contrôle (voir `device_model.md`).
- Format fil du slot 0x17c (texte : 0xd001 locate, 0xd002/0xd003 loop).
- Valeurs brutes des listes : l'appareil les annonce avec leur libellé (`device_model_raw.txt`).
