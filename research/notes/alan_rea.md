# AudioLAN 4078 — RE ARM (WSL Ghidra headless, base 0, ARMv5t)

## Sous-systemes confirmes (strings + xrefs, dumps/alan_strs.txt)
- **CopperLan complet** : CopperLanRoot, CopperLanConfiguration, CnE (CopperLan network entity), CopperLan/MIDI, serial device — la carte sert SDS :23 et CopperLan :55000
- **SDS** : "SDS available" x4, SDSDirectoryValid (CnE Directory + System Data Service)
- **telnet** : `telnet <start|stop>` commande shell
- **PTP** : servo loops, Port instance, BMC algorithm, State Machine + debug shell ('i N')
- **AES67** : ~9 refs (config/protocole)

## Cles a decompiler ensuite
- FUN_0006ed24, FUN_0006f6b4, FUN_00084754, FUN_00084950 : singletons CopperLan (MIDI/Root/Module init)
- Handlers SDS/telnet commands + AES67 RTP/SAP — suivre xrefs dump

## REA CLI en WSL — METHODE QUI MARCHE
`rea decompile --procedure <addr> --target-format raw-binary --architecture arm --entry-point 0x0 <firmware.bcd>`
dans UbuntuRE, avec GHIDRA_INSTALL_DIR=/mnt/c/tools/ghidra_12.1.4_PUBLIC, JAVA_HOME=java-21-openjdk-amd64.
=> decompile ARM direct avec Evidence — remplace les scripts headless manuels.

## FUN_00055f30 = ctor SAPService
Objet service : mutex nomme, config SAP via FUN_000b9aac (ports @+0x25a/258, flags @+0x25c/d).
