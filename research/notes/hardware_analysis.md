# Analyse hardware — firmware RE (uTrack24 4218 + AudioLAN 4078)

## Plateforme commune : SoC audio BridgeCo BeBoB 7 (TC Electronic)
- CPU **ARM9** (masters `ARM9I`/`ARM9D`) + moteurs DSP propriétaires **WARP** (`SECWARPI/D`, `SOLWARP`, `Warp0/1Mult`)
- SDK `j:\PROJECTS\bebob7_Official` ; classes `BeBobStreamProcess*`, `DSPProcess*`, `HWAVPLL_Analog/Digital/Virtual`
- Réseau : **lwIP**, mDNS/SPS ; debug `rd`/`wr`, `phy` (PHY Ethernet)
- Mémoire : SDRAM refresh config, flash partitionnée ; UART0/1, SPI0-3, RTC, PLL (`Xtali*DivM/DivN/OutDiv`)
- Conteneur : `BcOd` header (date, version, CRC)

## uTrack24 4218 (3.05 MB)
- LCD driver `LM6069_LCD_driver/LCDDisplay.cpp` — écran frontal
- `DSPAppControl`, `setSampleRateDo` — mixeur temps réel via CnE
- `inputselect` per-bloc analog/digital ; `persparam` ; `usb` host/device ; `ptp` timestamps PHY hardware
- Web UI Angular embarquée (angular.js, bootstrap, normalize.css) — panneau web du device

## AudioLAN 4078 (2.56 MB)
- Objet `ArchwaveAES67` (API JSON v1) + `ArchwaveCMD` (reboot/bootloader), `ArchwaveVER`
- `/dev/spiSlave` — esclave SPI du uTrack (lien carte→hôte)
- Web UI Angular servie par la carte (`archwave-logo.png`, `devType*.png`)
- `/cfg/AppSettings/ARC/SPI` — config lien SPI interne

## Architecture déduite
```
[ ARM9 — contrôle (SDS, web, CopperLan, fichiers) ]
        | SPI/I2C/PCI
[ moteurs WARP — DSP audio (mixeur, mètres, routing) ]
        |
[ AudioLAN = même SoC + AES67 frontend, liée en SPI slave ]
```
- Même codebase, deux rôles : recorder/hôte vs carte réseau esclave.
