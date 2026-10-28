# Contrôle USB (BeBoB / BridgeCo) — RE de BebobDriverInterface.dll

Outils : Ghidra (projet `C:\tools\ghidra_projects\cymatic_tools`), scripts `CallTree.java`, `IoctlMap.java` (copies dans `research/tools/ghidra`).
Sorties : `bebob_calltree.txt` (exports `CDriverInterfaceClass` + appelés, profondeur 5), `bebob_ioctls.txt` (toutes les fonctions qui appellent DeviceIoControl).
Mixerpanel (.NET) décompilé localement dans `C:\tools\ilspy_out\mixerpanel` (non commité : code tiers) ; il n'appelle que les exports `Call*` de la DLL.

## Chaîne d'appel (prouvée par décompilation)
`setChannelInputMonitorVol(dev, ch, E_Channel, double)` → `FUN_10004ec0` → `FUN_10003bb0` : construit une requête de 0x810 octets
(champs : ctype 0, 1, 1, 1, `ch+0x200`, `fbid<<8`, 2, valeur u16) puis l'envoie par la méthode virtuelle +0x20 de l'objet périphérique.
Message d'erreur associé : "FeatureBlockID not defined" → c'est une commande AV/C *Function Block / Feature* (volume) adressée à un FB ID.
Mute (`FUN_10003ac0`) et SampleRate (`FUN_10004fe0` → IOCTL 0x808928c4) suivent le même schéma.

## IOCTL du pilote utrack24_usb (codes trouvés, sens à confirmer)
0x80892804 (out 0xc) 0x80892810 (out 4) 0x80892814 (in 4) 0x80892820 (in 4) 0x80892828 (out 0xc)
0x80892860 (out 0x104) 0x80892864 (out 0x808) 0x80892888 (out 8) 0x8089288c (in 8)
0x808928c0 (out 0x2c) 0x808928c4 (in 8, setSampleRate) 0x80892900 (in 4/out 0x338) 0x80892904 (in 0xc)
0x80892920 (in 4/out 0x200) 0x80892924 (in 0x200) 0x80892980 (in 4/out 0x5c) 0x80892984 (in 0x5c)
0x80892a00 0x80892a04 0x80892a80 0x80892a84 0x80892a88 0x80892a8c 0x80892ac8 (out 0x3c)
Wrapper générique : `FUN_10003100(ioctl, in, inlen, out, outlen)` (référencé depuis la vtable @0x1011cec4).

## Ouvert
- Quel IOCTL transporte la requête 0x810 (méthode virtuelle +0x20) et son format exact côté pilote (`utrack24_usb_x64.sys`) → nécessaire pour un contrôle USB multi-plateforme (libusb).
