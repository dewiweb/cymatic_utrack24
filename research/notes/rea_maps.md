# REA batch 3 — maps extraites de la decompile (2026-11-02)

## 1. Classes de messages CCP/CHAI (decomp_uremote)

Chaque `CCPMessage_*::vftable` ctor appelle le registrateur avec son class ID.
Pattern: `0x1004xxxx` = request/commande, `0x1002xxxx` = reply, autres = events.
La classe `Generic` est un conteneur fourre-tout (ses IDs sont des ID de
sous-messages, pas un seul op-code).

```
APP_Generic	['0x10003700']
APP_Generic_Reply	['0x10023700']
Diag_Timing	['0x10045b01']
Generic	['0x10001002', '0x10001003', '0x10001012', '0x10001013', '0x10001014', '0x10001015', '0x10002300', '0x10002340', '0x10002351', '0x10002352', '0x10002360', '0x10002361', '0x10002381', '0x10002390', '0x10002391', '0x10002392', '0x100023f0', '0x100023f2', '0x100023f3', '0x10003700', '0x10004200', '0x10004203', '0x10004205', '0x10004206', '0x10004207', '0x10004208', '0x10004221', '0x10004222', '0x10004230', '0x10004240', '0x100042e0', '0x100042e1', '0x100042f3', '0x100042f6', '0x100042f7', '0x10006301', '0x10021021', '0x10023700', '0x10024202', '0x10041020', '0x10041030', '0x10041031', '0x10044201', '0x10045b01']
Generic_Reply	['0x10000000', '0x10020000']
Generic_Reply_Request	[]
HM_Warning	['0x10006301']
LM_DeviceDeclaredOrModified	['0x10004200', '0x10004203']
LM_DeviceIdentityChanged	['0x10004206']
LM_DeviceLostOrNotFound	['0x10004207']
LM_DeviceRemoved	['0x10004205']
LM_GetVNMInfoReply	['0x10024220']
LM_GetVNMInfoRequest	['0x10044220']
LM_GlobalSynchronizedClock	['0x10004221']
LM_NetworkModified	['0x10004222']
LM_RootDeviceDuplicateResolutionReply	['0x10024202']
LM_RootDeviceDuplicateResolutionRequest	['0x10044201']
LM_SetFitness	['0x100042f6']
LM_SetGlobalClockTime	['0x10004240']
LM_SubDeviceDeclared	['0x10004208']
LM_TransportFlowControl	['0x10004230']
LM_VNMTray_AddEthernetInterfaceReply	['0x100242f1']
LM_VNMTray_AddEthernetInterfaceRequest	['0x100442f1']
LM_VNMTray_GetFitnessReply	['0x100242f5']
LM_VNMTray_GetFitnessRequest	['0x100442f5']
LM_VNMTray_GetInterfacesReply	['0x100242f0']
LM_VNMTray_GetInterfacesRequest	['0x100442f0']
LM_VNMTray_GetStatisticsReply	['0x100242f4']
LM_VNMTray_GetStatisticsRequest	['0x100442f4']
LM_VNMTray_RemEthernetInterfaceRequest	['0x100442f2']
LM_VNMTray_ResetStatistics	['0x100042f3']
LM_VNMTray_SetTCPIPPort	['0x100042f7']
LM_VerifyKey_Reply	['0x100042e1']
LM_VerifyKey_Request	['0x100042e0']
NCM_DevicePresenceReply	['0x10021021']
NCM_DevicePresenceRequest	['0x10041020']
NCM_Duplicate_CheckDeviceExists	['0x10001012']
NCM_Duplicate_DeviceExists	['0x10001013']
NCM_Duplicate_Fixed_Mismatch	['0x10001015']
NCM_Duplicate_Restart	['0x10001014']
NCM_NetworkLatencyReply	['0x10041031']
NCM_NetworkLatencyRequest	['0x10041030']
NCM_NetworkModified	['0x10001003']
NCM_Ping	['0x10001002']
NCM_WhereIsDeviceIDReply	['0x10021001']
NCM_WhereIsDeviceIDRequest	['0x10041001']
SM_B_RecordingControl	['0x10002360']
SM_D_AssignController	['0x10002391']
SM_D_CollectSetupDataReply	['0x10022370']
SM_D_CollectSetupDataRequest	['0x10042370']
SM_D_RecordingControl	['0x10002361']
SM_D_RestoreSetupDataReply	['0x10022371']
SM_D_RestoreSetupDataRequest	['0x10042371']
SM_DeviceDeclarationXXX	['0x10002300', '0x100023f0']
SM_DeviceDiscarded	['0x100023f2']
SM_DeviceEnumerationContinueRequest	['0x10042300']
SM_DeviceEnumerationDoneReply	['0x10022315']
SM_DeviceEnumerationFindFirstRequest	[]
SM_DeviceEnumerationFindLastRequest	[]
SM_DeviceEnumerationFindNextRequest	[]
SM_DeviceEnumerationFindPreviousRequest	[]
SM_DeviceEnumerationReply	['0x10022314']
SM_DeviceEnumerationStartRequest	['0x10042300']
SM_DeviceIdentityChanged	['0x100023f3']
SM_FilteredDeviceSearchDoneReply	['0x1002231a']
SM_FilteredDeviceSearchReply	['0x10022319']
SM_FilteredDeviceSearchRequest	['0x10042300']
SM_GetDeviceInfoReply	['0x10022301']
SM_GetDeviceInfoRequest	['0x10042301']
SM_Learn	['0x10002392']
SM_MachineInformationReply	['0x10022320']
SM_MachineInformationRequest	['0x10042320']
SM_MachineNeighbourhoodReply	['0x10022331']
SM_MachineNeighbourhoodRequest	['0x10042331']
SM_Remote_Destination	['0x10002351']
SM_Remote_GenericChange	['0x10002352']
SM_ServiceDevice	['0x10002390']
SM_SetGlobalClockTime	['0x10002340']
SM_Signal	['0x10002381']
```

## 2. IOCTLs BeBoB (decomp_bebob + decomp_usb_*)

DeviceIoControl utrack24 driver — CTL_CODE(device=0x8089):
```
      1 0x80892004
      1 0x80892014
      1 0x80892018
      1 0x80892400
      1 0x80892404
      1 0x80892408
      1 0x8089240c
      1 0x80892410
      1 0x80892440
      1 0x80892444
      1 0x80892445
      1 0x80892480
      1 0x80892484
      1 0x808924a0
      1 0x808924a4
      1 0x808924c0
      1 0x808924c4
      1 0x808924c8
      1 0x808924c9
      2 0x80892804
      1 0x80892808
      2 0x80892810
      2 0x80892814
      2 0x80892820
      1 0x80892824
      2 0x80892828
      1 0x80892829
      2 0x80892860
      2 0x80892864
      1 0x80892868
      1 0x80892880
      1 0x80892884
      2 0x80892888
      1 0x80892889
      2 0x8089288c
      2 0x808928c0
      2 0x808928c4
      2 0x80892900
      2 0x80892904
      2 0x80892920
      2 0x80892924
      1 0x80892925
      1 0x80892928
      2 0x80892980
      2 0x80892984
      1 0x808929c0
      1 0x808929e0
      1 0x808929e4
      2 0x80892a00
      1 0x80892a01
      2 0x80892a04
      2 0x80892a80
      2 0x80892a84
      2 0x80892a88
      2 0x80892a8c
      1 0x80892aa0
      1 0x80892aa4
      1 0x80892aa5
      1 0x80892aa8
      1 0x80892aac
      1 0x80892ac4
      2 0x80892ac8
      1 0x80892ae0
```

## 3. Vocabulaire XML uTool2 (decomp_utool2)

Tokens song/playlist/track/channel/marker/audiofile/take/session trouvés:
```
AudioFileLibraryPath
ChannelMask
HideAutoPlaylistWarningMessage
ImportSplitAtMarkers
MultiTrack
Multitrack
Playlist
Playlists
ShowOnlyTakes
SongLib
TRACKNUMBER
_TempTake
channel
channel_count
channel_mute
channels
marker
multitrack
multitrackplaylist
output_channel
playlist
playlistname
song_name
song_settings
stereoplaylist
track_name
uTrack24
uTrackX32```

Prochaines étapes: pour chaque class ID -> structure du payload via `rea decompile`
sur les ctors; IOCTLs -> dispatcher dans decomp_usb_sys (IofCompleteRequest sites).

## 4. IOCTL dispatch kernel (decomp_usb_sys/FUN_00017614)

IOCTL -> handler interne du driver utrack24_usb_x64.sys :
```
0x80892888 ?
0x808924c8 FUN_00016344
0x80892444 FUN_00018960
0x80892400 ?
0x80892404 FUN_00015fb0
0x80892408 FUN_00016184
0x8089240c FUN_0001626c
0x80892410 FUN_000160ac
0x80892484 FUN_00018c98
0x808924a0 ?
0x808924a4 FUN_00018c54
0x80892828 ?
0x80892804 ?
0x80892808 ?
0x80892810 ?
0x80892814 ?
0x80892860 FUN_00016bc8
0x80892864 FUN_00016790
0x80892868 FUN_00016bc8
0x80892880 ?
0x80892a00 FUN_00014e7c
0x80892924 FUN_000165fc
0x8089288c ?
0x808928c0 FUN_00014794
0x808928c4 FUN_00016424
0x80892900 FUN_00016b88
0x80892904 FUN_00016b88
0x80892928 FUN_00016b88
0x80892980 FUN_000264d0
0x80892984 FUN_00016864
0x808929c0 FUN_00024014
0x808929e0 FUN_0001693c
0x80892aa4 ?
0x80892a04 FUN_00014e7c
0x80892a80 ?
0x80892a84 ?
0x80892a88 ?
0x80892a8c FUN_00016530
0x80892aa8 ?
0x80892aac FUN_000144d4
0x80892ac4 FUN_00021314
```

## 5. User-mode IOCTL senders (decomp_bebob)

Chaque fonction DeviceIoControl de BebobDriverInterface.dll et son code:

```
FUN_addr  ioctl
10003100 
10001240 0x80892804
100012c0 0x80892810
10001340 0x80892814
100013c0 0x80892820
10001450 0x80892828
100014d0 0x80892860
10001680 0x80892864
10001bb0 0x80892888
10001c30 0x8089288c
10001aa0 0x808928c0
10001b20 0x808928c4
10001cc0 0x80892900
10001d50 0x80892904
10001560 0x80892920
100015f0 0x80892924
10001710 0x80892980
100017a0 0x80892984
10001dd0 0x80892a00
10001e50 0x80892a04
10001820 0x80892a80
100018a0 0x80892a84
10001920 0x80892a88
100019a0 0x80892a8c
10001a20 0x80892ac8
```

## 6. Call* export RVAs (BebobDriverInterface.dll)

VA = image_base(0x10000000) + RVA. Les wrappers Call* (C ABI) forwardent vers les
methodes C++ CDriverInterfaceClass (exports mangles) qui envoient les IOCTLs.

```
0x7310 CallConnectDevice
0x6f80 CallGetAsioBufferConfiguration
0x7040 CallGetAsioDropouts
0x7420 CallGetChannelInputMonitorMute
0x73d0 CallGetChannelInputMonitorPan
0x7380 CallGetChannelInputMonitorVol
0x70f0 CallGetChannelProperties
0x7240 CallGetCurrentAudioMode
0x72b0 CallGetCurrentOpticalInputDetectionStatus
0x7280 CallGetCurrentSpdifInputDetectionStatus
0x7480 CallGetCurrentSyncSource
0x74e0 CallGetDeviceProps
0x6f40 CallGetDriverInfo
0x7260 CallGetFirmwareVersion
0x72e0 CallGetLevelMeterData
0x6f00 CallGetNumberOfConnectedDevices
0x7190 CallGetPrependDeviceNameToDisplayName
0x7450 CallGetSampleRate
0x7060 CallGetSampleRateInfo
0x7000 CallGetSampleRateSelectionMode
0x6fa0 CallGetStreamBufferConfiguration
0x70a0 CallGetSyncModeInfo
0x71a0 CallPollDeviceStatus
0x7170 CallPrependDeviceNameToDisplayName
0x74d0 CallRemoveUsbNotificationCallback
0x6fe0 CallSetAsioBufferConfiguration
0x7400 CallSetChannelInputMonitorMute
0x73b0 CallSetChannelInputMonitorPan
0x7330 CallSetChannelInputMonitorVol
0x7140 CallSetChannelNickName
0x7360 CallSetCrossFader
0x6f20 CallSetDeviceNickName
0x71f0 CallSetSampleRate
0x7020 CallSetSampleRateSelectionMode
0x6fc0 CallSetStreamBufferConfiguration
0x7210 CallSetSyncSource
0x74b0 CallSetUsbNotificationCallback
```

## 7. Methode C++ -> IOCTL (graphe d appels transitif, depth 4)

0x80892804/0x80892860/0x80892920 = plumbing de session generique (open/close/
status poll) vu partout; les autres codes sont l operation reelle.

```
ConnectDevice 0x80892804,0x80892820,0x80892860,0x80892900,0x80892920
GetAsioBufferConfiguration 0x80892a88
GetAsioDropouts 0x80892ac8
GetChanProp 0x80892810,0x80892864,0x80892980
PrependDeviceNameToDisplayName 0x80892810,0x80892814
GetSampleRateSelectionMode 0x80892888
SetSampleRateSelectionMode 0x8089288c
GetStreamBufferConfiguration 0x80892a80
SetStreamBufferConfiguration 0x80892a00,0x80892a04,0x80892a80,0x80892a84
SetAsioBufferConfiguration 0x80892a00,0x80892a04,0x80892a88,0x80892a8c
SetChannelNickName 0x80892984
SetDeviceNickName 0x80892924
setSyncSource 0x80892904
setSampleRate 0x808928c4
getCurrentSyncSource 0x80892900
getSampleRate 0x808928c0
getChannelProperties 0x80892810,0x80892864,0x80892980
```

## 8. Stack UI driver (tous managed .NET Framework)

Mixerpanel.exe + CControlKnob.dll, PushButton.dll, VUMeter.dll, Fader.dll,
MatrixLib.dll, FlatTabControl.dll = 100% CIL -> decompilables en C# integral
(ilspy/dnSpy). Seuls BebobDriverInterface.dll, utrack24_asio*.dll,
utrack24_usb*.sys et uTrack24MixerLauncher.exe sont natifs.

## 9. Routes REST du bundle AES67 (aes67-0.1.2.js, carte AudioLAN)

/api/fileupload, /command, /configuration, /device, /device_list,
/firmware-install, /firmware-update, /general, /home, /outputs,
/parameter_strings, /setup, /sources, /status, /stream_list, /sw_versions

Driver signed vs unsigned: meme arborescence; seules la signature
(.cat, vendor.cer) changent.

## 10. Updater uTrack24_v3124 (x64/x86/osx)

SFX 7z: arch_fwdl + arch_usb_fwdl.dll (API de flash Archwave) +
deviceUpgrade_64.exe + uTRACK24_Release_No_CnE_ 3124.bcd.
Le .bcd embarque est **strictement identique** (byte-for-byte) a
uTrack_3124.bcd du network-update — "No_CnE" n est qu un nom.

## 11. API de flash firmware (arch_fwdl_x64 / arch_usb_fwdl_x64)

Reseau (BCOFWDL, 13 exports): EnumerateDevices, OpenDevice, CloseDevice,
CheckDownload, StartDownload, GetDownloadStatus, GetBcdFileInfo,
GetDeviceInfo, GetVersion, IsUserAdmin, Reboot, SetTimeout, EnableLogging

USB (BCOUFWDL, 12 exports): EnumerateDevices, OpenDevice, CloseDevice,
StartDownload, GetDownloadStatus, GetBcdFileInfo, GetDeviceInfo,
GetApiVersion, GetSerialNumber, SetSerialNumber, SetTimeout, EnableLogging

== l equipement /api/fileupload du firmware a un pendant PC documente.

## 12. Schema .set device (Take0012.set)

<song_settings>: version, creator, target_device, song_name, sync_device,
wave_file_count, total_sample_count, sampling_rate, resolution,
channel_count, playback_type, channels/channel(id): output_level,
output_mute, output_channel, track_name, monitor_volume, monitor_mute,
monitor_pan (+ markers/marker: position,name si presents)

## 13. Decode pcvnm_full_announce.bin (401 trames ef51)

Flags: 0x23=174x msg 0x100037c8 (records membres du reseau), 0x20=messages
d enumeration (0x10022301 GetDeviceInfoReply x53, 0x10002381 x50,
0x10004221 x22, 0x10004230 x19, 0x10002390 x14, 0x10002380 x10,
0x10004207 x10, 0x10003788 x5, 0x100023f0 x2, 0x10022314/15 enum x2+1,
0x10024220 LM_GetVNMInfoReply x1, 0x10042301 request x1),
0x10=25 trames sans class id (hello/keepalive), 0x22/0x25=variantes ack
du msg 0x100037c8.

## 14. Decodes complementaires (.bin captures)

after_play (87260B): 86x 0x100037c8 (flag23 broadcast membres), 33x keepalive
0x10, msgs 0x20: 0x10002381 x17, 0x10004221 x12, 0x10004230 x11, 0x10002390 x3
transport_check (94980B): idem — 94x 0x100037c8, 34x keepalive, 0x10002381 x16
prop_enum (14916B): 15x 0x100037c8 + 0x10004230/0x10002381/0x10002390 x1
enum.bin: vide. => 0x100037c8 = broadcast periodique de la liste membres VNM.

audiolan_vnm_replay (15472B): trafic VNM replay — 0x10002381 x71,
0x10022301 GetDeviceInfoReply x52, keepalive x44, 0x10004221 x27,
0x10004230 x25, 0x10002390 x21. Trafic unicast enum/params, pas le
broadcast 0x100037c8.

## 15. cpm_audiolan.log — session uRemote/VNM decodee (14732 lignes)

Log CopperLan Manager: timestamps + direction (uR>VNM / VNM>uR) + trame ef51
hex + port=6354. Flag direction: 0xa0/0xb0=uRemote->VNM, 0x10/0x20=VNM->uR.
Keepalive ef5100a0/ef510010 (echo du rand 9d4d5686). Sous-types msg:
c423 (enum/announce unicast), 5423 (sub sur 8123/9023 params), d842
(negoc lien). Corps TLV: 0001<sub16><ep8B?><flags><...><id 0xXXXX0010>
<crc32 BE>. Endpoint VNM=0x34b96e2e, broadcast feff2000f4de012f.

## 16. utrack24_asio.dll / _x64 — COM ASIO standard

4 exports seulement: DllCanUnloadNow/DllGetClassObject/DllRegisterServer/
DllUnregisterServer => objet COM IASIO classique (vtable Steinberg), la
couche streaming passe par IOCTLs 0x80892axx vers le .sys (buffer config,
sample rate), cf section 7.

## 17. Headers .bcd X32 (meme conteneur BcOd/Archwave)

uTRACKX32: 2905 (build 20151008, 2243584B), 3865 (20170216, 2242560B),
5000 (20181022, 2319360B). Header: BcOd | ver32(1) | build16B |
0200 0000 | release_no32 @0x1c (0x0b59=2905, 0x0f19=3865, 0x1388=5000).

## 18. deviceUpgrade_64.exe (updater 3124)

MFC CDeviceUpgradeApp/CDeviceUpgradeDlg -> appelle BCOUFWDL_* (variante USB
du flash, pas reseau): EnumerateDevices+GetSerialNumber, OpenDevice,
StartDownload, GetDownloadStatus. Enum via InterfaceGuidUSB_%02d.

## 19. IDs dominants du trafic = CCPMessage_Generic

0x10002381, 0x10002390, 0x100037c8, 0x10004221, 0x10004230, 0x10004207,
0x10003788, 0x100023f0 = sous-classes CCPMessage_Generic (famille
proprietes/parametres — get/set/watch du tree VNM). Les noms SM_/APP_/LM_
n apparaissent que pour les ops de haut niveau; le gros du trafic =
Generic* (ctors 0x57d4xx-0x5889xx dans decomp_uremote).

## 20. Contrat P/Invoke complet (Mixerpanel.decompiled.cs)

### Signatures Call* (extrait, [DllImport Cdecl Unicode])
```
int CallGetNumberOfConnectedDevices(IntPtr pTestClassObject)
void CallGetDeviceProps(IntPtr pTestClassObject, [In][Out] CDeviceProperties devProps, int iDeviceArrayIndex)
void CallGetDriverInfo(IntPtr pTestClassObject, [In][Out] CDriverInfo driverInfo)
uint CallGetFirmwareVersion(IntPtr pTestClassObject, int iDeviceArrayIndex)
void CallGetAsioBufferConfiguration(IntPtr pTestClassObject, [In][Out] CAsioBufferSettings audioBufferSettings)
void CallGetStreamBufferConfiguration(IntPtr pTestClassObject, [In][Out] CStreamBufferSettings audioBufferSettings)
void CallSetStreamBufferConfiguration(IntPtr pTestClassObject, int bufferValue)
void CallSetAsioBufferConfiguration(IntPtr pTestClassObject, int bufferValue)
int CallGetSampleRateSelectionMode(IntPtr pTestClassObject)
void CallSetSampleRateSelectionMode(IntPtr pTestClassObject, int mode)
int CallGetAsioDropouts(IntPtr pTestClassObject)
void CallSetDeviceNickName(IntPtr pTestClassObject, [MarshalAs(UnmanagedType.BStr)
void CallGetSampleRateInfo(IntPtr pTestClassObject, [In][Out] CSampleRateInfo sampleRateInfo, int iDeviceArrayIndex)
void CallGetSyncModeInfo(IntPtr pTestClassObject, [In][Out] CSyncSource syncSource, int iDeviceArrayIndex, int syncSourceIndex)
void CallGetChannelProperties(IntPtr pTestClassObject, [In][Out] CChannelProperties chProps, int iDeviceArrayIndex, E_DIRECTION eDirection, int chNumber)
void CallSetChannelNickName(IntPtr pTestClassObject, int iDeviceArrayIndex, [MarshalAs(UnmanagedType.BStr)
void CallPrependDeviceNameToDisplayName(IntPtr pTestClassObject, int iDeviceArrayIndex, bool bPrependDeviceNameToDisplayName)
bool CallGetPrependDeviceNameToDisplayName(IntPtr pTestClassObject, int iDeviceArrayIndex)
void CallPollDeviceStatus(IntPtr pTestClassObject, [In][Out] CDeviceStatus deviceStatus, int deviceIndex)
void CallGetCurrentSpdifInputDetectionStatus(IntPtr pTestClassObject, [In][Out] CDigitalInputState ioState, int iDeviceArrayIndex)
E_SelectorPosAudioMode CallGetCurrentAudioMode(IntPtr pTestClassObject, int iDeviceArrayIndex)
void CallGetCurrentOpticalInputDetectionStatus(IntPtr pTestClassObject, [In][Out] CDigitalInputState ioState, int iDeviceArrayIndex)
bool CallGetLevelMeterData(IntPtr pTestClassObject, IntPtr pLevelMeterArray, int iNumberOfChannels, int iDeviceArrayIndex, IntPtr pDeviceStatus)
bool CallConnectDevice(IntPtr pTestClassObject, int iDeviceArrayIndex)
void CallSetChannelInputMonitorVol(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, double dVolume)
double CallGetChannelInputMonitorVol(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel)
void CallSetChannelInputMonitorPan(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, long iPan)
long CallGetChannelInputMonitorPan(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel)
void CallSetChannelInputMonitorMute(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, bool bMute)
bool CallGetChannelInputMonitorMute(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel)
ulong CallGetSampleRate(IntPtr pTestClassObject, int iDeviceArrayIndex)
void CallSetSampleRate(IntPtr pTestClassObject, int iDeviceArrayIndex, int iSampleRate)
void CallSetSyncSource(IntPtr pTestClassObject, int iDeviceArrayIndex, int deviceID, int syncSourceID, DEVICE_SYNC_MODE eSyncMode)
int CallGetCurrentSyncSource(IntPtr pTestClassObject, int iDeviceArrayIndex)
void CallSetCrossFader(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, int Pos)
void CallSetUsbNotificationCallback(IntPtr pTestClassObject, [MarshalAs(UnmanagedType.FunctionPtr)
void CallRemoveUsbNotificationCallback(IntPtr pTestClassObject)
```

### Structs marshales (Sequential, BStr pour strings)
- CDeviceProperties: Size, E_CONN_TYPE, E_DEVICE_TYPE, InterfaceGuid,
  DeviceID, VendorID, ProductID, DeviceRank, VendorName, ProductName,
  Nickname, sDeviceSerialNo, HardwareIdString, InstanceIdString
- CDeviceStatus: Size, bOpticalConnected, eOpticalSampleRate,
  bCoaxConnected, eCoaxSampleRate, eAudioMode, iSyncSource, bSyncLocked,
  uSampleRate, eDeviceMessageID
- CChannelProperties: Size, ChannelID, DeviceID, E_DIRECTION,
  HardwareName, Nickname
- CSampleRateInfo: Size, DomainID, CurrentSampleRate, Count, pSampleRates
- CChannelSettings: Size, NumberOfControls, DeviceIndex, ChannelSetting[]
- CChannelSetting: iFeatureID, eChannel, function, returnValue
- CDigitalInputState, CSyncSource (DeviceSyncMode), CAsioBufferSettings,
  CStreamBufferSettings, CDriverInfo, CTestClassObject

### Enums (vocabulaire API)
- E_DIRECTION: Input/Output
- E_CONN_TYPE: eNoConnection=-1, eUSB2
- E_DEVICE_TYPE: eCombiDevice, eUSB2Device
- ESFI_AM824_MBSamplingFreq: 22.05/24/32/44.1/48/96/176.4/192/88.2k +
  OB_DSD rates (2.048M-12.288M), DontCare=15 — SFI AM824 vocab
- E_SyncSource: Internal, Busclock
- E_DEVICE_MESSAGE_ID: AVSpdifIn/AVOpticalIn errors, StreamBlocked,
  In/OutOfPhase, SystemIn/OutOfLog
- DEVICE_SYNC_MODE: Unspecified/CSP/SYT_Iso/SYT_Synch/ExtSync/ExtDigital
- E_SampleRateSelectionMode, E_StreamingMode, USB_EVENT_TYPE

## 21. Records announce 0x100037c8 — decode partiel

Format observe (cpm_audiolan.log, pcvnm_full_announce.bin):
`c8370010 | type:u16 | len:u16 | <payload len octets>`
- type 0x1e len 0x16 : flags4B | paramid?4B | pad8B | nom ascii ("Idle")
- type 0x1c len 0x14 : ...| "On"
- type 0x32 len 0x2a : variante plus longue
- payload contient param ids famille 0x0010xxxx et noms ASCII
  (Idle, On, Off, Channel 1, Play-Pause, Take0012, 44.1 kHz,
  transmitter1/2 = sources AES67, -11 ms, 00-07-F5-FF-FE-49-00-30 = MAC)
Exemples bruts:
c83700101e001600c200000002002010000040000000040049646c6500004960c837001032002a00c300000004
c83700101e001600c200000002002010000040000000040049646c6500004960c837001032002a00c300000004
c83700101c001400c2000000020010100000c000010002004f6e0000b759670a port=6354
c83700101e001600c200010002002010000040000000040049646c6500004960c837001033002b00c300010004
c83700101e001600c200000002002010000040000000040049646c6500004960c837001032002a00c300000004
c83700101e001600c200000002002010000040000000040049646c6500004960c837001032002a00c300000004
VNM session: membre ID 0x69727160 (stable, client-fourni), handle session
alloue par VNM (ex 0x3602/c50a), AddLocalDevice(0x6800000,"uTrack24 Remote")
+ 5 containers Status/Meters/Controllers/Files/Settings.
Serializer de ref: FUN_00657890 (LM_DeviceDeclaredOrModified, analyse WSL).

## 22. Enregistrement membre (decomp_uremote FUN_0045ba5d)

Sequence: chai->vtable[0xb4] AddLocalDevice(2,0,1,0, 0x6800000,
"uTrack24 Remote"), puis 5 containers proprietes type 0x4000000:
Status, Meters, Controllers, Files, Settings (data=DAT_0095c898).
Membre id stable 0x69727160, handle session alloue par VNM.
NB: adresses WSL (FUN_00545da0/FUN_00657890) ~= +0x100000 de notre
corpus — meme exe, region .text differente dans l analyse.

## 23. Serializer LM_DeviceDeclaredOrModified (notre corpus)

vftable CCPMessage_LM_DeviceDeclaredOrModified @VA 0x5eedd8:
Serialize=FUN_0057d120, Deserialize=FUN_0057d190 (+ 10 autres virtuals).
Wire: class_id u32 LE (obj+0x10) | u16 (obj+0x14) | bloc_id 10B
(obj+0x18, via FUN_00507bf0: u16,u16,u16,u32>>16,u16 — triplet id hi/lo).
Deserialize verifie >=0xf octets restants. => la trame 0x100037c8:
c8370010 | 1e00(=field14) | bloc 10B | puis records enchaines dans
la meme trame ef51 (multi-decl par trame, noms inclus dans payload).

## 24. Format fil des Generic param (0x10002381 = ecriture/set)

vftable 0x5ea308; Serialize FUN_0058e350 / Deserialize FUN_0058e410.
Layout 20 octets: class_id u32 | tag u16 (obj+0x14) | flag u8 (obj+0x24)
| pad u8(0) | param_id u64 (obj+0x18) | value u32 (obj+0x20).
Vu en capture: 81230010|1e00|03|22|0500000000000000|... = param_id 5,
tag 0x1e(30=type valeur: string/texte?), flag 3. 90230010|0800|0100...
= classe 0x10002390 tag 8 flag 1. GetStreamSize [8]retourne 0x14=20B.

## 25. Dispatch inbound FUN_0052fcc0 — grammaire message-space

Dispatcher: family = class_id>>8 & 0xff, sub = class_id & 0xff.
- family 0x10 (0x100010xx systeme): subs 1,2,3,0x12,0x13,0x14,0x15,0x20,0x21
- family 0x23 (0x100023xx replies/param): subs 1,0x10-0x15,0x18-0x1a(enum
  2314/2315/done),0x20,0x31,0x51,0x52,0x60,0x61,0x70,0x71(D_RecControl
  setup!),0x80,0x81,0x90,0x91,0x92,0xf0-f4
- family 0x42 (0x100042xx requests/param): subs 1-8,0x20,0x21,0x22,0x30,
  0xe0,0xe1,0xf0-0xf7
- family 0x37: announce (0x100037c8 broadcast hors de ce switch)
Encodage: 0x10 00 FF SS => FF=family, SS=sub-opcode. Handlers per-case
via FUN_005af82d factory + dispatch objet.

## 26. Grammaire SDS device (fw4218 strings) + decouvertes

fileplay (aide @0x29acec):
  route [<destChannel>|*],[<destChannel>|*],... or reset
  configure <id> <fileName> <firstChannel> <playoutDelay> <noOfBuffers>
    <bufferSize> <noOfBuffersToPreload> <notifySampleInterval>
    {autostart} {<fileId> {{<switchSampleNumber>} {pause}}}
  stop {<id>} | stat | mode | start | pause
  next <id> <fileName> {<mark-in> {<mark-out> {<fileId> {<switchSampleNumber> {pause}}}}
  next [preload|select] | mark <id> <mark-in> {{<mark-out>} {pause}}
  samplecounter [start|stop|reset] {<sample_counter>} {<id>}
  select <id> <fileId> | clear <id> | eof <id> [pause|continue]

filerec (aide @0x29aff8):
  maxlen <length>
  configure <id> <fileName> <bitsPerSample> <firstChannel> <noOfChannels>
    <noOfBuffers> <bufferSize> <notifySampleInterval> {autostart}
  stop | mode | start | pause | stat | cue | prerecord
  next <id> <fileName> | switch
  samplecounter [start|stop|switch|reset] {<sample_counter>} {<id>}

Enregistrement cmd SDS (FUN_000fa580): obj {vftable=DAT_000fa5f8,
  name="fileplay", help, flags=DAT_000fa5f4, 1, arg} -> FUN_001a7b9c registry.

Decouvertes fw4218:
- Web UI Angular embarquee dans le firmware host (page firmware-update,
  HTML/JS inline @0x29xxxx, Server: lwIP/1.3.1)
- uTrack24SyncCL : machine d etats sync multi-unites
  (enterGroupForming/cancelGroupForming/finishGroupForming/rebuildGroup/
  leaveGroup/becomeSlave + SyncMsg uTS_Msg_* — protocole de sync
  entre uTrack24 chaines en groupe)

## 27. Mixer device-side (fw4218, verifie MCP — croise avec ghidra_utrack_map.md)

- Table SDS complete deja dans ghidra_utrack_map.md (13 app cmds + ~20
  attaches + file group 16 children) — confirmee par analyse MCP
  (FUN_001a7b9c registry, registration thunks FUN_000fa580 etc.)
- 5 mixer units: USBInput Mixer, Monitor Mixer, PhonesCH Mixer,
  LineOut Mixer, Phones Mixer (@0x113224-0x113264)
- Persistence: sds://cne/AppSettings/MixerControl + /MonitorBoost
  (CnE = CopperLan/CnE config storage — MixerControl::loadParametersFromCnE)
- Handler zone 0xcc-0xcd; querylevels @0xccdd8; usage complet @0x251c10:
  mixer levels | querylevels | stat | get <channel> | set <channel>
  <fader|pan|mute> <value> | store
- Le client Qt existant poll deja 'mixer querylevels' ~1/s
  (src/utrack_remote_qt.py:606-615)

## 28. UN SEUL format fil pour tout le param-tree (Generic*)

0x10002381, 0x10002390, 0x10004221, 0x10004230 partagent vftable 0x5ea308
(= CCPMessage_Generic) => Serialize FUN_0058e350 / Deserialize
FUN_0058e410 IDENTIQUES pour toutes les classes param.

Layout 20B: class_id u32 LE | tag u16 | flag u8 | pad u8 | param_id u64 |
value u32. Le class_id seul distingue le sens (request 0x42xx vs reply
0x23xx vs sous-type). ~90% du trafic CHAI = ce format unique.

## 29. Dictionnaire canonique class_id -> classe (dernier vftable)

Correction du mapping precedent (le dernier vftable assigne dans le ctor
= la classe concrete, pas le base Generic):

```
0x10001002 NCM_Ping            0x10002381 SM_Signal
0x10001003 NCM_NetworkModified 0x10002390 SM_ServiceDevice
0x10001012/13/14/15 NCM_Duplicate_*  0x10002391 SM_D_AssignController
0x10002340 SM_SetGlobalClockTime     0x10002392 SM_Learn
0x10002351 SM_Remote_Destination     0x100023f0 SM_DeviceDeclarationXXX
0x10002352 SM_Remote_GenericChange   0x100023f2 SM_DeviceDiscarded
0x10002360 SM_B_RecordingControl     0x100023f3 SM_DeviceIdentityChanged
0x10002361 SM_D_RecordingControl     0x10003700 APP_Generic
0x10004203 LM_DeviceDeclaredOrModified  0x10004205 LM_DeviceRemoved
0x10004206 LM_DeviceIdentityChanged  0x10004207 LM_DeviceLostOrNotFound
0x10004208 LM_SubDeviceDeclared      0x10004221 LM_GlobalSynchronizedClock
0x10004222 LM_NetworkModified        0x10004230 LM_TransportFlowControl
0x10004240 LM_SetGlobalClockTime     0x100042e0/e1 LM_VerifyKey_Req/Reply
0x100042f3 LM_VNMTray_ResetStatistics 0x100042f6 LM_SetFitness
0x100042f7 LM_VNMTray_SetTCPIPPort   0x10006301 HM_Warning
0x10021021 NCM_DevicePresenceReply   0x10023700 APP_Generic_Reply
0x10024202 LM_RootDeviceDuplicateResolutionReply
0x10041020 NCM_DevicePresenceRequest
0x10044201 LM_RootDeviceDuplicateResolutionRequest
0x10045b01 Diag_Timing
```

NB: 0x100037c8 (broadcast members) absent de cette table — ctor hors
corpus ou classe non-nommee. trafic 0x23xx=notifications/replies VNM.

## 30. Note 0x100037c8

Absent du binaire uRemote — classe instanciee uniquement cote VNM
(member-record broadcast). uRemote le lit via le parseur generique
(base CCPMessage sans ctor nomme). Son format TLV <type u16|len u16|
payload> est decode en section 21.
