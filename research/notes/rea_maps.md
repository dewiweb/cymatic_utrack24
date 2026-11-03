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

## 31. Transport = write param standard (0x10002361 SM_D_RecordingControl)

Ctor 0x5874a0 -> vftable 0x5ea308 (meme Generic family). Le controle
record/play/stop = un write param 20B: param_id = noeud du tree
(les noms Idle/Play-Pause/On de announce_controls.tsv sont ces
selecteurs), value = action. Pas de message transport special —
tout passe par le format unique. Le tree VNM porte tout.

## 32. Groupe file SDS (ops texte, pas de transfert binaire)

file open/read/write/dir/create/move/remove/seek/tell/size/stat/info/free
/close/print — outputs texte: "file size done: %u bytes", "file info",
"file created: %ls", erreurs "file open failed with %d". Pas de chemin
binaire brut => transfert de fichiers = autre canal (FTP/HTTP/uTool USB).
Le .set upload/update via /api/fileupload (REST, section 9).

## 33. Writers uTool2 playlist

FUN_005501d0 / FUN_005581e0 (refs playlist_project) — pas de tags XML
inline; noms construits via le writer XML generique (s_profile = suffix
de fichier .play?). "Autoplay" = playlist speciale autoplay.play.
Le writer song.set (FUN_005406f0, doc WSL) reste le format principal.

## 34. Re-verification REA MCP (2026-11-02)

Verifications live sur les sessions ouvertes:
- search_bytes c8370010 dans uRemote.exe = 0 match sur 5.8MB =>
  0x100037c8 confirmé VNM-only (pas dans le client)
- FUN_0058e350 re-decompile = layout 20B EXACT confirme
  (class_id4|tag2|flag1|pad1|param_id8|value4)
- ctor 0x5874a0 = SM_D_RecordingControl: in_ECX[4]=0x10002361, champs
  u16 @+0x18/+0x1a — note: ses champs propres sont 2x u16 (dans la
  zone param_id u64 du format generique)
- FUN_000cd164 (fw) = enregistrement mixer: FUN_0007f01c("mixer",
  help, handler, 1) -> FUN_001a7b9c — confirme ghidra_utrack_map.md

## 35. Table commandes statiques RTOS (0x1dfxxx-0x1e1xxx)

Groupes sys/os/test: ~50 cmds dont couche debug bas niveau:
  memoire: memscan, memscanraw, memdump, mchk, mlctest, mseg, mtype, malloc, free
  exec: call, load, running, th(threads), sem(semaphores), evt(events),
        flg(flags), q, timer, timestamp, shell, sleep, standby, suspend
  debug: watchpoints, event_callback, underflow, unhandled, ip_hdr,
         blocks, byte, dump, index, ports, statistics, address, select
  systeme: clock, flash, reboot, reset, restart (+restart in update mode),
        uartcfg, ver, av, if stat, lpm, mode, test
=> shell de debug RTOS complet expose via telnet (device non authentifie!)

## 36. Protocole sync multi-unites uTrack24SyncCL (uTS_Msg_*)

Messages CHAI (OnCHAI_* handlers, pas canal dedie):
  GroupForming | CancelGroupForming | BecomeSlave | BecameSlave |
  LeaveGroup | ExitGroup | RebuildGroupQuery | RebuildGroupResponse
  (+ notifies: enteredGroupForming/exitedGroupForming/becameSlave/
   slaveChanged/masterChanged/groupDisolved/groupRebuildQuery|Failed)
Etats: state/mode/groupid/index/connected. Handlers:
  OnCHAI_DeviceDeclaration (type), OnCHAI_DeviceDiscarded (reason,
  modes SM_Master/SS_GroupForm/SS_GroupRebuild), OnCHAI_Notification
  (CNT_Connected/Disconnected/NetworkChanged/NetworkStable),
  OnCHAI_Timer (resend RebuildGroupQuery aux slaves).
=> sync de groupe entierement sur le canal CHAI/VNM existant.

## 37. Kernel DSP 0x1b020 — disassemble manuel (ARM, pas Thumb)

CORRECTION doc WSL (kernels = Thumb) : le code est ARM 32-bit, Ghidra
n a simplement pas fait de fonction a cette adresse. Decode:
  e92d5ff0 push {r4-r12,lr}
  e1a08003 mov r8,r3
  e591c004 ldr r12,[r1,#4]   param_2[1] = table coefficients Q16
  e5913000 ldr r3,[r1,#0]    param_2[0] = ptr buffer/peaks
  e2433004 sub r3,r3,#4      peak array juste AVANT buffer (*param_2-4)
  e3a0b00c mov r11,#0xc      12 paires stereo
  e8b00030 ldm r0!,{r4,r5}   charge paire echantillons + auto-inc
  e5b36004 ldr r6,[r3,#4]
  e0247fc4 op r7,...
  e1570006 cmp  /  c5837000 strgt r7,[r3]   PEAK-TRACK store-if-greater
=> confirme doc: gain Q16 + peak-detect par paire, kernels ARM.

## 38. AudioLAN fw4078 — plongee profonde

Shell RTOS restreint (vs host): seulement blocks/free/index/reset/sem/
sleep/test/timer. Pas de debug watchpoint/call/load => surface reduite.

Commandes/features carte (strings+corpus):
  sync(0x33b20,0x37868,0x6a7fc,0xc8fec,0x18acb8) sync audio/PTP
  ptp(0x37758,0xc8f78) PTP grandmaster/slave
  warp(0x6fc3c,0x85fdc,0x14c508) moteur DSP WARP (SuluModule)
  pll(0xc2a08,0x22a428) horloge PLL
  stream(0x22a298,0x22a4fc,0x22aed8) gestion streams RTP
  gpio(0x1706b8,0x1aea10,0x1aeab8) GPIO carte
  spi(0x75ce0)+uart(0x75ce4) transports ARC host<->carte
  codec(0x26c838) codec audio
  flash(0x1906d4) update persistante
  sip(0x1a7f48,0x1a86fc) UA SIP (port 5060)
  igmp(0x18cxxx) gestion groupes multicast
  ARC(0xb709e,0x138011,0x1fdc59,0x237e8b,0x23892b,0x240228) interne
    host<->carte (SPI/UART + UDP 0x227d4d zone sds://)

CnE carte (28): ARC/{DeviceInfo,SPI,UART,UDP}, Bonjour,
  BridgeStreaming/RavennaConfiguration, CopperLan/{Midi}, DSP,
  Global/{ManufacturerName,ModelName,WebIconPath}, RavennaConfiguration
  {InputDelay1xFS/2xFS/4xFS,OutputDelay1xFS/2xFS/4xFS}, SAP
  {AnnouncementEnabled,BrowsingEnabled,MulticastAddress,Port,
   SessionTimeoutSeconds}, SIP
Codecs RTP: AM824, AM824CU, FlexDelay, FlexDelayL16, L24, L16

## 39. AudioLAN — chemins cachés / surfaces internes

Chemins config/endpoints non-documentés extraits du fw:
  /SHA204          — puce crypto Atmel SHA204 (auth/sign firmware?)
  /SPDIF           — interface SPDIF (carte a un port SPDIF?)
  /SlaveOnly       — PTP mode
  /Exchange/samir  — endpoint debug/dev interne
  /PDelay          — latence programme
  /Transaction     — état transactionnel
  /ServiceTypes    — types services réseau
  /SDRamCfg        — config SDRAM
  /USB/EP1/Rx/FifoSize — endpoints USB (fifo tuning)
  /Streaming, /TTL, /Port, /Mode, /PTP, /ADAT, /AVP, /USB
  /Shell/cne/Shell/ — shell SDS carte (confirme console :23)
=> carte plus riche: crypto-auth SHA204, SPDIF, debug /Exchange.

## 40. BcOd CRC — routine table identifiee (audiolan fw)

FUN_00001458 (decompile REA) = builder de table CRC32 reflected standard
(poly DAT_000014b8=0xedb88320, table DAT_000014bc):
  for i in 0..255: v=i; for 8: v = poly^(v>>1) if v&1 else v>>1; table[i]=v
=> CRC32 reflected zlib-compatible. MAIS le compute caller (scanBCD)
est Thumb non-analyse => plage/init/xorout inconnus.
Testes sans match: zlib toutes plages/pads/byte-swap/msb/adler/fletcher/
champ-zero. A faire: decompile Thumb de scanBCD ou routine PC (BCOFWDL).

## 41. uRemote re-verif (session REA #2) — text write format

Recherche du writer texte (0xd001 locate/0xc001 chdir — 'format fil non
capture' device_model.md):
- class_id 0x10003744 et TLV 0x3744/0x8437-like: 0 match dans le PE
- scanBCD (audiolan): strings PC-relatifs, xrefs vides — handler Thumb
- BcOd CRC: FUN_00001458 = builder table CRC32 reflected standard
  (poly 0xedb88320) — zlib-compatible. Couverture/init du caller
  (scanBCD, Thumb) toujours inconnus apres ~15 variantes testees.
=> text write = implemente dans utrack_control.text() (0xd001 etc)
   mais jamais observe sur le fil — format a valider live.

## 42. BcOd CRC — routine compute decodee (bytes + analyse manuelle)

FUN_000014c0 wrapper + FUN_000014e4 compute (audiolan fw, ARM):
  table_init() (FUN_00001458)
  crc=0xFFFFFFFF
  for i<len: crc = table[(b[i]^crc)&0xff] ^ (crc>>8)   # zlib standard
  return ~crc                                        # xorout 0xFFFFFFFF
=> math = zlib.crc32 classique. La PLAGE reste inconnue:
   pas img/hdr/tout/pads/skips/bswap/zeros (~25 variantes).
   Hypotheses restantes: CRC sectoriel NAND, ou signature/MAC
   via SHA204 (crypto chip — pas un CRC du tout).
Table @rt 0x40f72c, init flag 0x40f724.

## 43. uTS_Msg_* — champs messages (strings fw4218)

Format TRACE des handlers (champs ordre reel probable):
  Commun: state=%d mode=%d groupid=%u index=%u connected=%c
  GroupForming/Cancel/BecomeSlave/Leave/Exit: champs communs
  BecameSlave: + masterId=%u deviceIndex=%u
  RebuildGroupQuery: + masterAvailable=%c (et Notify: Resp=%c
    deviceID=%u uSlaveIndex=%u masterName=%s)
  RebuildGroupResponse: champs communs (+ groupRebuildFailed/slaveChanged)
Notifies: enteredGroupForming/exitedGroupForming/slaveChanged/
  becameSlave/groupDisolved/masterChanged/groupRebuildQuery|Failed.
Handlers OnCHAI_* (Declaration/Discarded/Notification/Timer).
Strings @0x298154-0x29860c (etats) + 0x8d7a2-0x8e554 (notifies).
Wire format exact = serializer uTS a localiser (meme pattern CCP).

## 44. SyncCL objet — layout (FUN_00090408 dump status)

Offsets objet sync (param_1):
  +0x1c  mode byte (1=Master, 0=Slave)
  +0x1d  state index (table d etats)
  +0x28  MasterID (u32)
  +0x50  liste slaves (count via FUN_0022e4a0)
  +0x74  DeviceIndex (u8)
  +0x82  connected (u8)
  +0x84  sous-objet dispatch (FUN_002341f4/FUN_002341cc = send/post)
Champs slave (FUN_0023cff0 indexe, FUN_001b9ed0/eb8/ec4):
  Name(s), ID(u), Index(u), Available(bool)
Handlers: OnCHAI_Notification FUN_0008c488 (trace CNT_*).

## 45. uTS send helpers — dispatch map (pas codec dedie)

FUN_002341f4/FUN_002341cc (26B) = wrappers map-dispatch:
  FUN_00212724(&stack,param_1) -> FUN_00209300(&stack2,&stack) -> *puVar1
=> les messages uTS sont des objets C++ postes via la couche
dispatch-objet generique (meme CCPMessage/factory que le reste).
Pas de codec uTS separe — les champs (44) sont serialises par le
serializer de classe (vftable slot 9, comme Generic/LM_*).

## 46. SyncCL — classe listener + FSM complete

RTTI 0x2d091a: '22uTrack24SyncCLListener' (classe listener dediee).
FSM strings 0x297f28-0x2980fc (enter/cancel/finish/rebuild/leave/becomeSlave).
Handlers OnCHAI_*: Notification (CNT_*), DeviceDeclaration (type),
  DeviceDiscarded (reason -> slaveChanged/masterChanged/exitedGroupForming),
  Timer (resend RebuildGroupQuery).
States nommes: SM_Master, SS_GroupForming_Master, SS_GroupRebuild_Master.
=> uTS msgs = objets CCP (vtable serialize), champs doc 43/44.
   class_ids non localises (ctors probablement Thumb).

## 47. versulu — update firmware host par SDS

Commande SDS 'versulu' @0x2a1bec (fw4218) — le point d entree de la
mise a jour firmware de l host (BCOFWDL reseau + mode update).
Pas de strings fwdl explicites dans le binaire (nom interne autre).

## 49. file write/upload handlers (Thumb decoded) — ARM en fait !

CORRECTION : les handlers `file` ne sont PAS Thumb — ce sont du code
**ARM 32-bit** (prologue `e92d4ff0 stmdb`). Ghidra n'a pas pu les analyser
("Context register change conflicts", TMode conflict — les zones sont
marquees OBJ/BSS). Decode manuel des words depuis le .bcd
(offsets fichier, base 0 ; rt = file + 0x60005F84).

### `file read` handler @0x1499b4 (ARM, ~0x150 B + litpool)

- `bytes = strtol(argv[0])`, clamp a 0x80000 (512 KiB), defaut 0x40
- option `-a` : boucle ReadFile jusqu'a short-read (lit TOUT le fichier)
- buffer = **FUN_001b01c4(nbytes,1) — malloc PAR APPEL** ("large buffer"
  alloc ; echec -> "ERROR: System out of memory allocating buffer in
  file read"), memset, puis job :
- `FUN_00123544(job@sp+0xc, queue/alloc, handle_lo, handle_hi,
  [buf, nbytes, 0])` = ctor **FileAccessJob_ReadFile**
- soumission : `FAH = FUN_000cbaf0(); (*FAH->vt[8])(FAH, job, 0, tag)`
  (blocant) ; resultats : octets lus dans job+0x24, rc dans job+0x12
- sortie : "Read failed (RC = %d)" / "Total %u bytes have been read:"
- `file print` @0x14aa80 = meme mecanique + dump hex via formats
  "%6u: ", "%02X", "%c" (literal pool @0x14ae20-0x14ae74)
- **Pas de staging buffer persistant** : le malloc est fait a chaque
  commande et libere — la notion "FAH staging buffer" des notes
  anterieures est FAUSSE (utrack_telnet.py `_fah_buffer_probe`).

### `file write` handler @0x14aca0 (ARM, ~0x1d8 B + litpool 0x14ae7c+)

Usage firmware : `write <bytes> {<count>} {<buffer_offset>}`
Decode du prologue (strtol x3) :

    bytes   = strtol(argv[0]); clamp <= 0x80000 ; si 0 -> 0x40
    count   = argc>1 ? strtol(argv[1]) : 1 ; si 0 -> 1 ; clamp <= 0x20000
    buf_off = argc>2 ? strtol(argv[2]) : 0 ; clamp <= 3   (offset 0..3 !)

    r8 = bytes + buf_off
    r6 = FUN_001f01c4(r8, 1)            ; malloc workbuf (fail -> ret 4)
    ; boucle arriere [1355096-1355156] : and r1,r4,r7 / sub r1,r6,r1 /
    ;   ldrb[r1,#1] / orr r0,r0,counter / str r0_prev+1,[r1,#-2]!
    ;   => GENERATEUR DE PATTERN (rampe auto-referentielle),
    ;      remplit le workbuf de donnees de test. buf_off = offset
    ;      de desalignement 0..3 pour tester ecritures non alignees.
    do { x = FUN_0001b800(&lock, &sp+0x30, 0) } while (!x)
        ; lock = lit @1355372 = rt 0x6040650c (objet BSS)
    r0 = r6 + buf_off                  ; src = workbuf + off
    stm sp!, {r0, r4}                  ; args job : src, nbytes
    r9 = lit @1355376 = rt 0x60406040  ; -> handle pair stockee en BSS
    r1 = lit @1355380 = rt 0x604064fc  ; -> queue/name obj
    ldm r9!, {r2, r3}                  ; r2,r3 = handle fichier ouvert
    FUN_0012c838(sp+8, r1, r2, r3, src, bytes)   ; ctor WriteFile job
    r7 = 0                             ; compteur de jobs
  loop (x count) :
    FAH = FUN_000cbaf0()               ; singleton FileAccessHandler
    (*FAH->vt[0])(FAH)                 ; queue getter
    si queue==0 -> echec
    FUN_0012c7bc(sp+8, r1, handle, ...) ; ctor WriteFile (boucle)
    submit blocant -> litb job+0x11 (done), job+0x12 (rc)
    r7++, accumulate r0 -> r8 ; tant que r7 != r5 (count)
    r1 = r0!=0 ? "succeeded" : "failed"   (addne pc,#0x30 / addeq #0x38)
    str r7,[sp]
    FUN_00002898("Write %s: Return code %d, %u bytes written with %u jobs",
                 r1, rc, total, jobs)
    free(buf) ; return 0

- Job result fields : done flag @job+0x11, rc @job+0x12, bytes @job+0x24
  (meme layout que les jobs lus dans FUN_00127fac, c2_evt.txt).
- Les deux ctors sont ceux du WaveFileEncoder (rec3.txt) : FUN_0012c7bc
  et FUN_0012c838 = builders **FileAccessJob_WriteFile** (src=buffer CPU,
  count=bytes, handle=paire stockee dans l'objet commande).

### VERDICT : `file write` N'EST PAS un chemin d'upload

C'est un **benchmark/stress d'ecriture** : il genere un motif dans un
buffer malloc (offset de desalignement 0-3 pour tester les cas limites),
puis soumet `count` jobs WriteFile de `bytes` octets au fichier ouvert
via `file open <f> wo`. La sortie "Write succeeded: Return code 0,
%u bytes written with %u jobs" = mesure de debit (miroir de
"Read %s: Return code %d, %u bytes read with %u jobs").
Les donnees ecrites sont synthétiques — **aucun moyen d'injecter un
contenu arbitraire** : pas de staging buffer persistant entre commandes,
pas de lecture du buffer depuis le shell.

### Chemins d'upload reels identifies dans fw4218

- `wr <addr> <val> [b|h]` ecrit la MEMOIRE, mais rien ne transfere la
  memoire vers le FS (file write ne lit pas de buffer externe) ->
  l'hypothese `wr`+staging de src/utrack_telnet.py:428 est MORTE.
- `persparam wrb <name> <hex-str>` / `wrbs` : ecrit un blob binaire
  (format `0xafc9f0`) dans un parametre persistant (flash config) —
  c'est le seul canal "donnees arbitraires -> stockage" du SDS, mais
  il cible les persparams, pas les fichiers du volume USB.
- xmodem : "CLCDDumpScreen: start xmodem reception now. Size = %d"
  (reception xmodem existe pour le dump LCD — a explorer comme canal).
- `versulu` : update firmware (BCOFWDL) = ecriture flash, pas fichiers.
- Le vrai chemin de depot de fichiers reste : USB host mass-storage
  (FAT), uTool2, ou endpoint HTTP /api/fileupload cote AES67.

### Adresses cles

| quoi | file | rt |
|---|---|---|
| file read handler | 0x1499b4 | 0x60150938 |
| file print handler | 0x14aa80 | 0x60150A04 |
| file write handler | 0x14aca0 | 0x60150C24 |
| FUN_0014ac04 (helper print) | 0x14ac04 | |
| lock object do-while | — | 0x6040650C |
| handle pair BSS (ldm) | — | 0x60406040 |
| queue/name lit (job arg2) | — | 0x604064FC |
| tag/timeout lit | — | 0x7530 (30000) |
| FUN_0012c838 WriteFile ctor | 0x12c838 | |
| FUN_0012c7bc WriteFile ctor | 0x12c7bc | |
| FUN_00123544 ReadFile ctor | 0x123544 | |
| FUN_001f01c4 malloc | 0x1f01c4 | |
| FUN_001b01c4 large-buf alloc | 0x1b01c4 | |
| FUN_0001b800 lock/alloc | 0x1b800 | |
| FUN_000cbaf0 FAH singleton | 0xcbaf0 | |
| strtol | 0x32fc | |
| printf | 0x2898 | |
| "Write %s: Return code..." | 0x14ae90 | |
| "succeeded"/"failed" | 0x14ae7c/0x14ae88 | |

### Usage client (benchmark seulement)

    file open /MultiTrack/Take/t.bin wo
    file write 65536        # 1 job de 64 KiB de motif genere
    file write 65536 10     # 10 jobs -> 640 KiB, affiche "Write succeeded: ... %u jobs"
    file write 65536 10 3   # meme, source desalignee +3 (edge-case)
    file close
-> Utile pour tester le debit d'ecriture, PAS pour uploader du contenu.
   Pour l'upload : pas de commande SDS file->disk ; envisager
   `persparam wrb` (flash), xmodem (a confirmer), ou hors-SDS
   (MSC host / HTTP / uTool2).

## 48. scanBCD CRC coverage (Thumb decoded)

scanBCD localise et decode (fw4218 decomp `research/rea/decomp_fw4218/
functions/0x117484.c` = FUN_00117484, ARM, non-contiguous 0x117484-
0x1181f7 — les gaps sont les pools/strings embarques dans le texte).
Equivalent audiolan = fonction ARM @file 0xC642C (push {r4-r11,lr}),
region code+strings+pools 0xC5xxx-0xC7xxx.

CORRECTION BASE: le module FirmwareUpdateHandler mappe VA = file +
0x60005F84 (PAS +0x60000000 — ca vaut pour les DEUX images). Preuve:
pool dword 0x602A29D8 (fw4218) -> file 0x29CA54 = debut exact de
"ERROR: FirmwareUpdateHandler::scanBCD: HWID mismatch". Pools audiolan
@0xC6xxx stockent 0x60239xxx -> strings rodata file 0x233xxx (set-B)
et 0x6040xxxx (BSS). Les strings "set-A" embarquees dans le code sont
referees par ADR (add/sub rd,pc) — d'ou l'absence de pools/xrefs.

CRC routine = zlib CRC32 reflechi poly 0xEDB88320, etat init 0xFFFFFFFF:
fw4218 FUN_00176c50 (wrapper: state=0xFFFFFFFF -> FUN_00176c74 update,
retourne l'etat) ; audiolan wrapper 0x14c0, update 0x14e4, table 0x1458.

Formules decodees (param_1 = pointeur image BcOd, param_2 = taille) :

  en-tete : save dword bcd[0x2c]; zero bcd[0x2c..0x2f];
            crc = crc32(bcd[0 : 0x70])   (0xb0 si bcd[0x28]==2 && param_4)
            vs dword@0x2c -> "CRC error in header" (str@file 0x1177B8), ret 0xb
  image   : start = bcd + u32@0x30 ; len = u32@0x38 ;
            borne : bcd+param_2 < start+len -> "Bad image size", ret 10
            crc = crc32(start,len) vs u32@0x3c
            -> "CRC error in image" (str@file 0x118030), ret 0xb

Champs : utrack24 @0x30=0x7C @0x38=0x2EA578 @0x3c=0xCAC6DBEA
         @0x2c=0xE33CC0B0 ; audiolan @0x30=0x80 @0x38=0x270A38
         @0x3c=0x404EAF12 @0x2c=0xBFA0CE46.
=> le CRC image couvre marker 0xaaaa5555 + table slots + code
   (offset @0x30 = 0x7C/0x80, PAS 0x94 — c'est pourquoi les ~30
   essais precedents a partir de 0x94 echouaient).

VALIDATION : crc bash maison verifie sur "123456789" -> 0xCBF43926.
   A tester en python (state vs zlib-final selon retour du wrapper) :

     zlib.crc32(d[0x7C:0x7C+0x2EA578])          == 0xCAC6DBEA ?   (fw4218 image)
     zlib.crc32(d[0x7C:0x7C+0x2EA578])^0xFFFFFFFF == 0xCAC6DBEA ? (si stored=state)
     zlib.crc32(d[0x80:0x80+0x270A38])          == 0x404EAF12 ?   (audiolan image)
     hdr = bytearray(d[:0x70]); hdr[0x2c:0x30]=b'\0'*4
     zlib.crc32(hdr)              == 0xE33CC0B0 ? (fw4218 header)
     zlib.crc32(hdr)              == 0xBFA0CE46 ? (audiolan header)

   Note: checks manuels bash (transcription 112B) : fw4218 header
   donne zlib=0xE3403C70 vs 0xE33CC0B0 et audiolan 0xBFACC246 vs
   0xBFA0CE46 — NON concordants => soit transcription erronée, soit
   variante (double-zeroing, autre range, stored=state). A recalculer
   en python AVANT de figer la formule header. La formule image
   (offset @0x30 + len @0x38 vs @0x3c) est lue directement du decomp,
   haute confiance — verifier aussi stored-vs-state.
   slot crcs @0x94+ non couverts par scanBCD (verifie bootloader?).

## 50. uTS_Msg wire format (fw4218, decode pools + corpus decomp)

CORRECTION premisse : les uTS_Msg_* ne sont PAS des classes CCPMessage
(0x10xxxxxx + Serialize vtable). Ce sont des **messages de donnees
entite CHAI** (link-layer directed/broadcast messaging) envoyes par
l'objet entite du SyncCL (SyncCL+0x68, cree par AddLocalDevice vt+0xb4).
Meme canal TCP ef51 que le reste du trafic CHAI — famille "member
directed message" (cf. uremote_textwrite.md : enveloppe type 0x3784 +
TLVs). Pas de vtable Serialize par type : serialisation generique dans
la couche lien CHAI. AUCUNE trace uTS dans les captures (single-device).

### Send API (2e vtable de l'entite, adjust this par *vtable-0x1ec)

Slots de l'interface lien (objet SyncCL+0x68) :
  +0xc8 query own 10B addr | +0xec create msg | +0x44 get msg header
  +0x1a4 sendTo(unicast) | +0x1a8 broadcast | +0xb8/+0xbc et
  +0x19c/+0x1a0 register/unregister listeners | +0x114 timer (1000ms,
  resend RebuildGroupQuery, doc 36).

Unicast  : sendTo(this, dest10B, A, B, msgId, f6, f7, name, aux [,f10])
Broadcast: bcast(this, A, B, msgId, f4, f5, name, aux)
dest10B = adresse entite CHAI {u16 grpLo, u16 grpHi, u32 memberId,
  u16 tail} — copiee par FUN_001726d4/172728 depuis SyncCL+0x5c
  (adresse propre, lue a l'init via +0xc8 ; le memberId u32@+4 est
  swappe vers le slave cible pour l'unicast, FUN_8d04c/8b578).
Constantes ROM recurrentes (base VA = file+0x60005F84, cf. §48) :
  broadcasts/master->slaves : A=0x00003c75, B=0x00003234,
    aux=0x60414BDC (objet RAM, cf. infra), name-src=0x60403B34 (RAM obj,
    FUN_001beccc lit {u32@0 si +6!=0} = pointeur nom).
  slave->master (FUN_8b860) : DATs decodent 0x60414BDC / 0xE8BD87F0 /
    0xEB8ED028 — les 2 derniers SUSPECTS (ressemblent a du code ARM ;
    verifier que ce ne sont pas des restes d'epilogue mal etiquetes).
  interpretation la plus probable : (A,B) = paire (channelId,dataId)
  ou (outer,inner) TLV type du canal lien uTS ; 0x3c75/0x3234 n'ont pas
  ete vus sur le fil (a valider par capture 2 devices).

### msgId (arg5) — mapping provisionnel (evidence = contexte d'appel)

  1 broadcast : fin de finishGroupForming (FUN_8c7ac tail) +
    FUN_8c100 (state 2/4) -> GroupForming announce ?
  2 FUN_8b234 state1->3, msg cree via +0xec(arg=1) -> RebuildGroupQuery?
  3 per-slave finishGroupForming FUN_8c7ac (f6=slaveIndex, f7=slaveCount)
    -> BecomeSlave ?
  4 slave(mode2)->master FUN_8af00 (state0/3) -> LeaveGroup
  5 broadcast->slaves FUN_90938 + mode->0 + clear liste -> ExitGroup/
    CancelGroupForming
  6 master->slave, f6=deviceIndex u16, f7=flag, name=masterName :
    FUN_8b578 (boucle slaves enterGroupForming, index=i+1) +
    FUN_8d04c (reponse a requete) -> BecameSlave
    {masterId=senderId header, deviceIndex, masterName}
  Manquants dans le corpus : CancelGroupForming, RebuildGroupResponse
    (msgIds 0/7/8 probables ; ctors/dispatch Thumb non decompiles).
  NB : memes helpers 8b860/8bc04 utilises avec msgIds 0x1xx (vers
  slaves) / 0x2xx (vers master) par des wrappers voisins — famille de
  messages membre plus large (SDS/link) partageant le helper ; les
  ids 1-6 sont le namespace uTS.

### Champs recus (header 8B, u16-oriented)

Handler FUN_8c9d0 (param_3 = ushort* raw fields) et msgObj vt+0x44
(FUN_8d04c remplit {u16,u16,u32}) :
  +0 u16 groupAddrLo | +2 u16 groupAddrHi | +4 u32 senderMemberId
  (verifies contre SyncCL+0x5c/0x5e = groupid, et id slave/deviceID).
Champs par msgId (args f6/f7 = paires u16 souvent ; cf. wrappers qui
passent param_2>>16 et param_2&0xffff) : index u16, flag/count u32,
name string optionnel (BecameSlave: deviceIndex+masterName ;
RebuildGroupQuery: Resp/deviceID/uSlaveIndex/masterName per TRACE).

### SyncCL objet — layout confirme (dump FUN_90408)

  +0x1c mode u8 (1=Master,2=Slave,0=Standalone) +0x1d state u8
  +0x20 own-entity obj (ID via FUN_1b9eb8=obj+8) +0x28 MasterID u32
  +0x2d flag | +0x50 liste slaves {ID u32@8, Index FUN_1b9edc, flags
  +0xd/+0xe, handle+0x14, Name FUN_1b9ed0/22d49c}
  +0x5c own entity addr 10B | +0x68 CHAI entity | +0x6c data-link obj
  (+0x154 resolve addr) | +0x70 timer | +0x74 deviceIndex u8
  +0x75 ? +0x76 slave_count u8 | +0x80/0x81 u8 | +0x82 connected u8
  +0x84 map listeners (uTrack24SyncCLListener, RTTI 0x2d091a).

### Dispatch entrant

Thunks adjust -0xc (vtable du sous-objet SyncCL+0xc enregistre sur le
data-link via +100) : 0x1c1cf0->8c488 OnCHAI_Notification (CNT_*),
0x1c1d20->8c9d0 (FSM msg A : groupid match + switch state — case0
master: slave par devID -> slaveChanged ; case0 slave: own-id ->
enteredGroupForming ; case2: rebuild liste ; case5/1: own-id ->
retour standalone), 0x1c1d50->8d04c (handler B : recoit requete ->
repond msgId6 index+1), 0x1c1d80->90374 (vide).

### Fonctions FSM decodees (corpus decomp_fw4218)

FUN_8af00 = dispatcher "send current FSM msg" (trace state/mode/
  groupid/index/connected) ; FUN_8b578 = enterGroupForming (build
  liste slaves depuis IDs CnE + resolve addr + msgId6 par slave,
  state->4) ; FUN_8c7ac = finishGroupForming (msgId3/slave + msgId1
  bcast, mode->1, masterID=ownID, deviceIndex=0) ; FUN_90938 =
  cancel/exit (msgId5 bcast + reset) ; FUN_8c100 (msgId1 bcast,
  state2/4->0) ; FUN_8b234 (state1->msgId2->3) ; FUN_8d04c (reply
  msgId6) ; FUN_8c9d0 (FSM reception) ; FUN_8b410 (rebuild liste).
FSM Thumb a ~0x297f28 non decompilee (strings 0x297f28-0x2988xx =
VA 0x6029DExx — meme region : DAT_8d24c=0x6029E634 -> "OnCHAI_
DeviceDeclaration type=%d Send mode=SM_Master slave[%u]=%u").

### Joindre un groupe (client 3e partie) — sequence deduite

1. Devenir membre VNM (AddLocalDevice, member id u32) comme le reste
   du protocole CHAI ; avoir son deviceID dans la config maitre
   (CnE Sync/Slave_1..3_Id -> liste slaves FUN_8b578).
2. Ecouter les messages lien-entite du maitre sur la paire
   (0x3c75,0x3234) ; l'adresse dest = adresse entite 10B du groupe
   (memberId du maitre).
3. Traiter msgId6 BecameSlave {deviceIndex, masterName} -> etat
   slave ; repondre par le chemin slave->master (constantes a
   confirmer) ; RebuildGroupQuery (msgId2?) exige une reponse
   {Resp,deviceID,uSlaveIndex,masterName}.
4. groupid = les 4 premiers octets de l'adresse entite maitre
   (u16+u16) ; verifier a la reception.
Residus a confirmer par capture 2 devices ou desassemblage du post()
CHAI : layout exact de l'enveloppe (tags TLV), semantique
channel/dataId, ids complets 0-8, constants slave->master.

## 51. text param write format (TLV 4437 / CAppTextMessage)

Resolu (details: uremote_textwrite.md). L'ecriture texte (controles c3:
0xd001-3 locate/loop, 0xc001 chdir, 0xb002 horloge, 0xb004/0xb005 IP,
0xf060, d011+, c011+) est un 3e TLV app-message dans le message membre
`8437` (0x3784), produit par `CPCHAI::CAppTextMessage` (RTTI c8d418,
type interne 0x8206, class-index 4).

Chaine uRemote: vtbl+0x17c du member -> thunk FUN_0048fb72 ->
FUN_00682a40 -> FUN_0064de20 (msg+0x4c=0x3784, +0x48=member+0xe0) ->
serialize FUN_0064b6a0 -> FUN_00634680(len+0x16, classIdx=4, flags).
Index TLV (0x3740|idx) dans 8437: 1=event 4137, 2=numerique 4237 (32B),
3=liste 4337 (22B), 4=texte 4437 (var), 8/9=interne 4837/4937.
NB: 0x3744 sert AUSSI de type de message externe device->client
(announce) — espace partage ; en TLV interieur de 8437 = ecriture texte.

Serialize CAppTextMessage (FUN_0064b6a0, verifie dump ur_appmsg.txt):
  p[0]=msg+0x78 (u16 flags=0) ; p[1]=msg+0x7a ; p[2..9]=msg+0x7c..0x8a ;
  p[10]=msg+0x92 (strlen) ; memcpy(p+11, msg+0x8c, strlen).

Layout fil (TLV a l'interieur de 8437, N=strlen) :
```
4437 0010 <N+0x1e:u16> <N+0x16:u16> | 0000 | ctrl u16 LE | 0000 x16 | N u16 | ASCII
```
- header TLV 8B : type `44 37` (=u16 LE 0x3744), const `10 00`,
  puis paire longueurs {content+8, content} (pattern identique aux
  ecritures capturees : `4337 0010 1e00 1600`, `4237 0010 2800 2000`).
- content = 0x16+N octets : u16@0=0, u16@2=ctrl, u16@4..19=8 zeros,
  u16@20=strlen, string ASCII @22 (pas de NUL, pas de pad).
- sous-session : meme SUB_OFFS (18,34) du header 8437, node(ctrl)
  0xf->0 0xe->1 0xd->2 0xc->3 0xb->4. (Aligner le record a 4B si
  plusieurs TLVs chaines — le walker fait (L+3)&~3.)

Parseur device (fw4218, preuve croisee) : thunk FUN_001c3cb4 (listener
texte, slot +0x0c) -> FUN_000abbc8(param_2=param ctrl, param_3=msg).
ctrl via vt+0x34 -> FUN_001bece0 = u16 @+4. Texte via vt+0xc4
(=ITextMessage::GetText) -> struct {ptr@0, cap u16@4, len u16@6},
FUN_001be9f0 rend le char*. Traitement: 0xd001 -> strtol base10 ->
FUN_0013e404 (locate) ; 0xd002/3 -> FUN_0013e49c/47c (loop) ;
0xc001 -> FUN_0013eab8 (chdir, chaine litterale) ; 0xb002 -> split ':'
6 champs -> FUN_00092aa8 (horloge) ; 0xb004/5 -> IP (FUN_000aab74) ;
0xf060 -> FUN_000ab2b8. (DAT_000ac0c8 = 0xd001.)

Exemple : ecrire "00:01:00" (N=8) a 0xd001 (node 2) — trame complete :
```
00018437000000000e0002000697271600000200000001000e00010034b96e2e0000020001000000
4437001026001e00000001d00000000000000000000000000000000000080030303a30313a3030
```
(header 8437 40B = prefixe CTRL_TEMPLATE, node 2 deja aux SUB_OFFS ;
TLV 38B : content=0x1e, +8=0x26 ; ctrl 01d0=0xd001 ; strlen 0800 ;
ASCII `30 30 3a 30 31 3a 30 30`.)

ATTENTION semantique : le device fait strtol(base 10) sur 0xd001 — la
valeur reelle d'un locate = nombre d'echantillons en decimal ASCII
(uRemote : FUN_00624830 = itoa). "00:01:00" n'est qu'un exemple de
framing (parse -> 0). Chaine ':' reelle = 0xb002 (horloge Y:M:D:h:m:s).

BUGS src/utrack_control.py::text_msg (signales, non corriges) :
1. `struct.pack('<HHHHH',0x4437,...)` -> octets `37 44` = TLV "3744" ;
   il faut la valeur u16 0x3744 (octets `44 37`).
2. `m=bytearray(CTRL_TEMPLATE)` copie les 72B incluant l'ancien record
   4337 (ctrl d000 val 4 = PLAY !) au lieu de CTRL_TEMPLATE[:40] ->
   chaque ecriture texte envoie aussi un play. (num_msg utilise bien
   [:40].) A corriger avant test hardware du text().

## 54. uTool2 command surface

VERDICT D'ENSEMBLE : uTool2 n'envoie AUCUNE commande au device. Pas de
socket, pas de CHAI/CopperLan, pas de telnet SDS, pas de DeviceIoControl
— grep exhaustif du corpus (23422 fns) : zero `socket|connect|recv|
sendto|WSA`, zero `copperlan|CHAI|CPCHAI`, zero `versulu|filerec|
fileplay|reclog|format`. Le seul reseau = InternetOpenW "juce"
(FUN_00457eb0, news utoolnews.xml + crash-report POST
dropbox wsreport.php) et ShellExecuteW (liens site/forum/manuel).
uTool2 travaille UNIQUEMENT sur le disque USB FAT32 monte sur le PC
(GetDriveTypeA FUN_005b50c0/5b69e0, GetVolumeInformationA FUN_005b6c80,
filtre "FAT32" FUN_00448730 dans la liste de drives FUN_005ae320).
Toute la "command surface" = fichiers poses sur le volume que le device
relit ensuite. API disque : CreateDirectoryW (0x612880), MoveFileW
(rename, 0x6129a0/0x6331e0), CopyFileW (0x6129e0/0x62d1b0),
RemoveDirectoryW+DeleteFileW (0x635980, recursif -> "Delete Folder" /
"Please erase all content" FUN_00553860).

### Firmware update — ABSENT de uTool2

- Aucun .bcd/BcOd/ArchwaveBCD dans le binaire (grep `BcOd`=0 hits,
  `bcd`=0). Le bouton "Check for driver and firmware update"
  (FUN_005adb00:140, PanelSupportComponent) ouvre juste le site web
  cymatic via ShellExecuteW.
- L'update firmware reste : .bcd copie a la main sur le disque
  (le device scanne au boot / `versulu` SDS host-side, cf. §47).

### Format / partition — ABSENT

- Pas de SHFormatDrive/FormatEx. uTool2 exige un volume DEJA FAT32
  (sinon absent de la liste cible). "Erase" = delete recursif de
  fichiers, pas un format bas niveau.

### Arborescence device ecrite (FUN_005bd870, mappeur dossiers)

device_type (FUN_005bcea0) : 1=LP-16, 2=LR-16, 3=uTrack24, 4=uTrackX32
(detecte via la chaine stockee par cible — champs target_device des
XML / choix utilisateur "Device type ?" FUN_005050b0 ; volume label lu
par GetVolumeInformationA FUN_005b6c80).

| item type | uTrack24 (case 3/4) | stereo (case 2) | libre |
|---|---|---|---|
| 1 | Music | Music | Music |
| 2 | MultiTrack | Recording | — |
| 3/4 | Music / MultiTrack | Music / Recording | — |
| 5 | #PLAYLISTS | #PLAYLISTS | — |

### Playlists — fichier `.play` XML (PAS de SDS, PAS de .playlistprj)

- Serialiseur FUN_00555a70 (decomp_utool2 0x555a70.c). Ecrit dans
  `#PLAYLISTS/<name>.play` ; defaut "New Playlist.play" (FUN_005581e0) ;
  auto-playlist = `autoplay.play` a la racine #PLAYLISTS (FUN_005501d0,
  node "Autoplay", exige fw>=3427).
- Le `.playlistprj` (ns0:playlist_project) reste un projet PC dans
  PlaylistLib — jamais envoye au device.
- Schema .play (DATs resolus RVA=file+0xE00, table @file 0x33D9E0) :

```xml
<playlist>
  <version>2.0.062</version><timestamp/><creator>cymatic audio uTool</creator>
  <playlistname/><target_device>uTrack24|uTrackX32</target_device>
  <song>                               <!-- 1 par morceau -->
    <name>...</name><location>...</location><duration>...</duration>
    <pause_mode><mode>..</mode><time>INT</time></pause_mode>
  </song>
</playlist>
```
  (ordre reel du code : name, location, duration, puis pause_mode
  contenant mode+time ; `time` = itoa(item+0xc).)

### Takes / songs — dossiers + `<Take>.set` XML + WAV

- Export ecrit `<dir>/<TakeName>/` : WAV copies (CopyFileW) + fichier
  `<TakeName>.set` pour uTrack24/uTrackX32 (FUN_005bd790 : types 1/2 =
  nom fixe "song.set", types 3/4 = nom du morceau).
- song.set serialiseurs : FUN_0055a260 (variante riche uTrack24) et
  FUN_00558f10 (variante simple). Root `<song_settings>` ; champs dans
  l'ordre : version, timestamp, creator, target_device, song_name,
  validationcode?, sync_device? (si sync units), playback_type,
  channel_count, sampling_rate, resolution, total_sample_count,
  midi_file/midi_length/midi_length_samples/midi_offset ("-"=vide,
  DAT_0073efbc/efa8/ef64), wave_file_count,
  `<wave_file_switches><switch/></wave_file_switches>`,
  `<channels><channel id="N">` avec output_level, output_mute,
  output_channel, track_name, monitor_volume, monitor_mute,
  monitor_pan `</channel></channels>`,
  puis `<marker><global_time_in_samples/><file_number/>
  <local_time_in_samples/></marker>`*.
  Verifie : identique au Take0012.set ecrit par le device
  (creator "cymatic audio uTrack24").
- `_TempTake` = dossier temporaire de prise relu a l'import
  (FUN_0055e400) ; existence via FUN_0045e0d0 sur dir.
- Ops take = filesystem : rename=MoveFileW, delete=RemoveDirectoryW
  recursif ("Warning: Multiple files will be deleted... Playlists with
  reference to deleted songs will turn invalid"), copy=CopyFileW.
- `sessions.xml` a la racine (FUN_005a95a0) :
  `<ns0:sessiontree xmlns:ns0=".../sessiontree/1.0"><ns0:version/>`
  `<ns0:items><ns0:item name=".." date=".."/></ns0:items>`
  (attribs DAT_0074801c="name", DAT_00748024="date").
- WAV exportes : metadonnee EBUCore XML ISRC injectee (FUN_005cfde0) ;
  resample via r8brain embarque ; splitter stereo/mono via
  wave_file_switches.
- mixerpreset : `<ns0:mixerpreset>` (ns .../mixerpreset/1.0) avec
  ns0:name, ns0:pre, ns0:channels>ns0:channel (FUN_00512000) —
  embarque dans les settings du morceau.

### Settings device — ABSENT

Aucun canal vers channelmode/inputselect/sync/etc. Les seuls reglages
que uTool2 influence sont ceux du song.set/.play ci-dessus (niveaux,
mutes, pans, pause_mode, playback_type, sync_device "Standalone"/_Slave
— "Redundant mode: One separate song is created for every synchronized
unit"). Les vrais reglages device restent en flash (persparams/CnE) et
ne sont modifiables que par SDS/CHAI (uRemote) ou l'UI du device.
"AudioSettings"/"TargetDeviceConfiguration" = config PC/locale JUCE,
pas device.

### Sync multi-unites (export)

Pas de protocole : uTool2 exporte le meme contenu sur N disques etiquetes
("_Slave" suffixe, "Target song Disk Unit", warning "label the hard
disks and plug them into the proper uTrack24 unit", batch en
'Force Overwrite'). sync_device dans song.set porte le role.

### Adresses cles (uTool2.exe, RVA=file+0xE00 pour .rdata chaines)

| quoi | adresse |
|---|---|
| serialiseur .play | FUN_00555a70 |
| serialiseur song.set (uT24) | FUN_0055a260 |
| serialiseur song.set (simple) | FUN_00558f10 |
| serialiseur songprj ns0:SongProject | FUN_005406f0 |
| sessions.xml writer | FUN_005a95a0 |
| mixerpreset | FUN_00512000 |
| mappeur dossiers | FUN_005bd870 |
| nom fichier .set | FUN_005bd790 |
| node autoplay.play | FUN_005501d0 |
| defaut "New Playlist.play" | FUN_005581e0 |
| device-type code/name | FUN_005bce00 / FUN_005bcea0 |
| volume/drive enum | FUN_005b6c80 / FUN_005ae320 |
| export walker | FUN_00595b20 / FUN_005955a0 / FUN_00593a60 / FUN_005979c0 |
| resolution chemins projet | FUN_00551b30 |
| delete recursif "erase all" | FUN_00553860 |
| support panel (lien update) | FUN_005adb00 |

## 55. announce records + meter push (fw4218, chaine complete)

### Builders device-side (corpus decomp_fw4218)

- FUN_000a5dfc (0xa5dfc.c) = init du controleur CHAI (`uTrackCopperLan`,
  singleton via FUN_000aa570 -> "uTrackCopperLan::getReference"). Appelle
  FUN_000a6464 puis remplit toutes les valeurs initiales (~40 callbacks
  FUN_000aaXXX/ecrivent les champs +0x5xx de l'objet controleur).
- FUN_000a6464 (0xa6464.c, ~5.6KB non-contig) = BUILDER DU CONTROL TREE.
  Sequence : `entity = member->vt[+0xb4](1,name,...)` (AddLocalDevice) ;
  `entityAdj = entity + *(*entity -0x1ec)` ; vt+0xe4 (set flags) et
  vt+0xb8 (register listener local_14+0x11c). Sous-objets crees via
  member vt+0xa4 (listes statiques numerotees : 5=transport "Action",
  1/2/3/4/7/9/0xb/0xc = enum providers) et vt+0xa8 (listes dynamiques,
  arg=1 : canaux playback, markers, playlist, exit-playlist).
- Sessions (= nodes) creees par `entityAdj->vt[+0x138](0,"<name>",DAT)` :
  +0x248 "KA Status" (node 0, ids 0xf0xx), +0x2c0 "Meters" (node 1,
  0xe000..0xe019), +0x32c "KA Controls" (node 2, 0xd0xx), +0x4c8 "Files"
  (node 3, 0xc0xx), +settings (node 4, 0xb0xx). Apres chaque session :
  `session->vt[+0x4c](local_14+0x120)` = abonne le listener du
  controleur (thunks FUN_001c3d3c -> getter FUN_000adab0,
  FUN_001c3d0c -> setter FUN_000ace70). "Files" a aussi vt+0x34
  (local_14+0x124, handler texte chdir/locate, cf. §51).
- Controles ajoutes par 3 slots session :
  `vt+0x84`(name, ctrl, x, kind, fmt1, fmt2) = valeur simple
    (arg5 kind: 0=texte courant, 1=etat, 2=rec, 3=playlist, 4=datetime,
    5=op-status, 6=error-code, 7=action, 8=cursor, 9=liste-dyn);
  `vt+0x80`(name, ctrl, 0, listObj, itemCount, fmt1, fmt2) = liste ;
  `vt+0x7c`(name, ctrl, 0, def=0x8000, scaleObj, unitStr, obj2, x, idx,
    u16f1, u16f2) = numerique (meters "-12dB", pans "Right", faders).
- Enregistrements per-voie (24x, boucle i<0x18) : Solo ctrl 0xd010+i,
  Mute 0xd030+i, Pan 0xd050+i (def 0x8000=centre), Fader 0xd070+i ;
  handles stockes +0x344/+0x3a4/+0x404/+0x464. Meters : boucle i<0x1a,
  "Meter %d" (FUN_00171d94/171cdc string+itoa), ctrl 0xe000+i, handles
  +0x2c4+i*4, def 0x8000, unit "-12dB". ATTENTION : dans le decomp,
  `(uint)(local_15c + 0x3404)` est de l'ARITHMETIQUE POINTEUR =
  i + 0xd010 directement (0x3404*4) — pas de transform d'id ; les ids
  annonces = ids ecriture (confirmes par les handlers).

### Wire : enveloppe announce (verifie cpm_audiolan.log)

```
<msg 4437: member directed, device -> client>
4437 <hdr ~40B: src=34b96e2e dst=69727160, sub-sessions>
  repeter: c837 0010 <totLen u16LE> <contentLen u16LE> <record>
  (totLen = contentLen + 8 ; padding a 4B APRES le payload, contenu
   variable — vu 0000/4960/0010/ff7f : octets non-significatifs)
```
Le `1e 00` de §21 est donc totLen, pas un "type" ; le type est le 1er
octet du record.

### Record controle (decode sur device_model_raw.txt, ~300 records)

```
+0  u8   type : c1=numerique, c2=liste/bouton, c3=texte, c9=marqueur
+1  u8   0x00
+2  u16  node (session : 0 status / 1 meters / 2 controls / 3 files / 4 settings)
+4  u16  kind : 1 (c1), 2 (c2), 4 (c3)
+6  u16  ctrl (f0xx/e0xx/d0xx/c0xx/b0xx — le haut-octet redonde le node)
+8  u32  flags : 0x00400000 (lecture), 0x00600000 (r/w usuel),
         0x00200000 (etats membres VNM), 0x00000000 (texte c3)
+12 u16  value (c1/c2 : valeur courante / index selectionne)
         | u16 text-len (c3, suivi du texte ASCII)
+14 u16  label-len (c2) puis label ASCII | (c1) voir ci-dessous
```

c1 (numerique, 24B fixes + label optionnel) :
  `+12 u16 value | +14 u16 def (0x8000 centre pan) | +16..+23 4xu16
   reserved=0 | +24 u16 label-len | +26 label ASCII | pad4`
  (b201: `c1 00 0400 0100 01b2 00006000 76f7` +10x00 +`0400"-1dB"0000`
   => value 0xf776 = (dB+30)*0xffff/30, formule §device_model confirmee)
c2 (liste) : `+12 u16 sel-index | +14 u16 label-len | label | pad4`
  (label = libelle de l'item SELECTIONNE, ex "Int. Clock", "Play-Pause")
c3 (texte) : `+12 u16 text-len | texte | pad4`
c9 (7B vu) : `c9 00 <u16 a> <u16 b>` — 1x par groupe de session
  (node0: a=0x19,b=1 ; node3: a=0x16,b=0x0b) — probablement marqueur
  fin-de-session/compteur ; semantique exacte a confirmer.
Meme format pour les PROPRIETES MEMBRES VNM (ctrls 0x1010 "Idle"/"Off",
0x1020 nom groupe, 0x0502 IP, 0x0503 port, 0x1011+i noms canaux AES67)
— le serializer est generique CHAI (member-record broadcast 0x100037c8
utilise les memes records c1/c2/c3 dans TLVs c837 ; le contenu differe).
Cote uRemote : FUN_005a0660 dispatch +0x78=type (c1->vt+0x48 numerique,
c2->vt+0x4c liste {index@+0x7e,flags@+0x82}, c3->vt+0x50 texte {len@+0x7c}).

### Handlers valeur (device)

- FUN_000adab0 (getter, thunk listener 0x1c3d3c) : dispatch par ctrl.
  Meters 0xe000..0xe019 : lit u32 @+0x6d8+(ctrl-0xe000)*4, envoie
  `&0xffff` via FUN_00172530+vt+0x4c PUIS EFFACE le peak (peak-hold
  read-and-clear). Faders 0xd070+i @+0x740 u16 ; pans 0xd050+i @+0x770
  (FUN_00172530 arg=1 = mapping pan) ; mutes 0xd030+i @+0x7a0 ; solos
  0xd010+i @+0x7d0. b0xx settings @+0x578.., b310/b320/b330 blocs
  @+0x5c0/+0x5e0/+0x5f0 (listes AES67).
- FUN_000ace70 (setter, thunk 0x1c3d0c) : meme dispatch ; solo 0xd010
  -> FUN_0006a654/6a6d4 ; mute 0xd030 -> toggle +0x7a0 puis rebuild
  record mixeur (FUN_001282fc + FUN_00069f60) ; 0xd008 -> set +0x846
  (dirty RemoteDisplay) ; transport/settings via FUN_00093xxx etc.
- Valeur ecrite lue `*(u16*)(param_3+4)` ; ctrl via FUN_001bece0 (u16@+4
  du msg — meme accesseur que le parseur texte §51).

### Meter PUSH (device -> client)

- FUN_000aacb0 (0xaacb0.c) = glue PeakMeters->CHAI : vector u32 du
  service (meme type que querylevels : valid FUN_001b49d0, count
  FUN_001bd0b0 clamp 0x1a=26, ptr FUN_001448fc), chaque valeur
  `>> 0xf` -> tableau 26, puis FUN_000b00bc(getReference(),vals,count).
- FUN_000b00bc (0xb00bc.c) = EMETTEUR : pour i<count (max 26) :
  peak-hold `store[i]=max(store[i], new[i])` @+0x6d8+i*4, puis
  `meterCtrl[i]->vt[+0x5c](0, store[i]&0xffff)` (set+notify) ; enfin
  `metersSession->vt[+0x98]()` = FLUSH batch. => valeur fil = u16
  `(peak_u32>>15)&0xffff` : lineaire, 0xffff = full-scale si peak
  aligne MSB 32-bit. ATTENTION : le vecteur SDS affiche des valeurs
  type 0x000099FF (bas-peuple) — si le service livre des valeurs
  low-aligned, le >>15 produit ~1 ; a verifier live (le wire reel =
  blocs 16B e0xx, cf. infra) — le doute est sur la representation du
  u32, pas sur le u16 emis.
- Wire (notes copperlan_vnm_findings + ce schema) : le flush emet un
  message membre dirige `4437` contenant des blocs 16B par metre
  (e000..e018/19 observes en capture uRemote : flux ~10Hz). Les pushes
  uni-controle confirmes = TLV `4337 0010 1e00 1600 | 0000 | ctrl u16 |
  16B | value u16@20` (settings b0xx dans cpm_audiolan.log, src
  34b96e2e). Le flush 26-meters = meme famille : probablement un TLV
  4237/conteneur avec les 26 blocs 16B `{ctrl e0xx + value u16 + pad}`
  (format exact du bloc non capture par nos logs — a valider).
- Trigger : PAS d'abonnement explicite par controle cote device — le
  service PeakMeters (HSCI, "PeakMeters::setChannelCount" erreur si
  absent) pousse periodiquement ; FUN_000aacb0 est le callback. Le
  gate abonne/non est dans l'objet session CHAI (vt+0x5c notify ne
  serialise que s'il y a des abonnes). Cote client uRemote :
  subscriptions = messages `c437` (0x37c4, emis par FUN_0064dfe0/
  0064e1b0) + `5423` group-subs — souscrire a la session "Meters"
  (node 1) ou au member suffit a recevoir le flux 4437.

### `mixer querylevels` SDS (verifie FUN_000ccb58, ghidra_mixer.txt)

Handler @0xccb58 : arg `querylevels` -> FUN_00144908(vec,0x18),
FUN_000f67c0(service, vec) via vt+0x84 ; si ok :
```
Level meters:
CH 00: 0x000099FF
CH 01: 0x00007DFF
... (une ligne par metre, count = taille du vecteur, <=26)
```
Format exact : `CH %02d: 0x%08x` (s_000ccdf4) — u32 hex 8 digits,
index decimal 2 digits. Erreurs : "Query not processed!",
"Level meters are invalid!". `mixer stat` imprime les memes u32 mais
4 par ligne (`  CH %02d:\t0x%08X` x4, section "Level Meters:",
valeurs observees 0x0000xxxx) + "Monitor fader Value: 0x%08X" /
"Bus fader Value: 0x%08X". parse_querylevels (src/mixer_math.py:79)
regex `CH\s*(\d+):\s*0x([0-9a-fA-F]+)` = CORRECT pour querylevels
(1 valeur/ligne) mais ne capture que la 1re colonne sur `mixer stat`
(7/26 valeurs — caveat, pas un bug demande). Valeur = u32 peak brut
du service (mixer_math.py le traite comme sample MSB-aligned ->
peak_to_dbfs ok si la hauteur est dans les bits hauts ; coherence
avec >>15 du push CHAI a confirmer live).

## 52. uTS_Msg wire format — confirmed

Re-decomp complete de la famille uTS (corpus ARM decomp_fw4218). Les
pools n'ont pas pu etre relus dans cette session (pas d'exec) — la map
msgId->type ci-dessous est deduite des roles FSM + directions +
arite des payloads + ordre enum ; confiance haute mais a valider par
capture 2 devices.

### msgId -> type (arg5 du send lien-entite)

| msgId | type | direction | payload fields | emetteur (preuve) |
|---|---|---|---|---|
| 0 | GroupForming | master -> bcast | name | FUN_8bf20 -> FUN_8be44 (enterGroupForming "open") |
| 1 | CancelGroupForming | master -> bcast | name | FUN_8c100 (abort, state2/4->0) ; FUN_8c7ac tail (close session) |
| 2 | BecomeSlave | slave -> master | own name | FUN_8b234 (becomeSlave, state1->3) |
| 3 | BecameSlave | master -> slave | deviceIndex u16 (f6), slaveCount u16 (f7), masterName | FUN_8c7ac finishGroupForming |
| 4 | LeaveGroup | slave -> master | — | FUN_8af00 (state0/mode2 -> standalone ; state3 re-send -> state1) |
| 5 | ExitGroup | master -> slave | name | FUN_90938 (dissolve/abort -> chaque slave) |
| 6 | RebuildGroupQuery | master -> slave | uSlaveIndex u16 (f6), flag u16 (f7: 0=forming, 1=re-announce), masterName | FUN_8b578 enterGroupForming (config path) ; FUN_8d04c (DeviceDeclaration resend flag=1) ; timer resend |
| 7 | RebuildGroupResponse | slave -> master | {Resp, deviceID, uSlaveIndex, masterName} per TRACE | wrapper 8b860-family a DAT-id — NON localise |

Preuves : msgId = index dans l'enum uTS_Msg (ordre des strings
fw4218 GroupForming/CancelGroupForming/BecomeSlave/BecameSlave/
LeaveGroup/ExitGroup/RebuildGroupQuery/RebuildGroupResponse = 0..7) ;
FUN_00090db8 borne `param_1 <= 7` sur une table a 8 entrees + liste
d'ids enregistres (DAT_90e0c/90e10) = la table de validite uTS ->
les ids sont exactement 0..7, pas d'id 8. Directions imposees par
les notifies TRACE : BecameSlave -> notify becameSlave (slave-side,
donc m->s) ; BecomeSlave -> slaveChanged (master-side, s->m) ;
ExitGroup -> groupDisolved (s) ; LeaveGroup -> slaveChanged (m) ;
GroupForming -> enteredGroupForming ; CancelGroupForming ->
exitedGroupForming ; RebuildGroupQuery -> masterChanged (s) /
groupRebuildQuery {Resp,deviceID,uSlaveIndex,masterName} ;
RebuildGroupResponse -> slaveChanged / groupRebuildFailed (m).

CORRECTIONS vs §50 : msgId1 != GroupForming (c'est
CancelGroupForming, emis a la cloture de session — abort ET fin
normale, les deux ferment l'etat group-forming) ; msgId6 =
RebuildGroupQuery (pas BecameSlave) ; msgId3 = BecameSlave
(l'assignation finale {index,count,masterName}) ; msgId0 =
GroupForming existe (bcast a l'ouverture).

### API d'envoi (vtable secondaire de l'entite, adjust -0x1ec)

```
sendTo_unicast (vt+0x1a4):
  (this2, dest10B{u16 grpLo,u16 grpHi,u32 memberId,u16 tail},
   A, B, msgId, f6, f7, name, aux [, arg10])
send_broadcast (vt+0x1a8):
  (this2, A, B, msgId, f4, f5, name, aux)
```
- dest10B copie depuis SyncCL+0x5c (adresse entite propre, lue via
  vt+0xc8 a l'init FUN_8adf8) ; le memberId u32@+4 est remplace par
  l'id du destinataire (FUN_1b9eb8 = obj+8 ; maitre = objet +0x20
  pour un slave).
- A=0x00003c75, B=0x00003234 (decode §50 ; probablement paire
  {channel/linkDataId, dataTypeId} du canal lien uTS ; octets fil
  supposes `75 3c`/`34 32` si u16 LE — non vu en capture).
- name = char* nom propre de l'emetteur (extrait par FUN_1beccc :
  {ptr@0, u16@4, flag@6} ; source = msg cree par vt+0xec(type=1)
  ou objet Name statique 0x60403B34).
- aux = objet RAM 0x60414BDC (options/cookie envoi) ; arg10 =
  handle du slave (uniquement FUN_8c7ac — probablement cookie de
  transaction/handle entite destinataire).
- Slave->master : constantes des helpers 8b860/8bc04 presumees
  identiques (les valeurs 0xE8BD87F0/0xEB8ED028 de §50 = lecture
  erronee d'un pool — ce sont des encodings ARM, pas des donnees).

### Dispatch entrant

Trois interfaces listener (FUN_8adf8) :
- dataLink(+0x6c).vt+0x64 <- SyncCL+0xc = LISTENER EVENEMENTS DEVICE
  (pas les uTS !) : thunk 0x1c1cf0 = OnNotification (FUN_8c488,
  CNT_Connected/Disconnected/NetworkChanged/NetworkStable, param_3=
  code) ; 0x1c1d20 = OnDeviceDiscarded (FUN_8c9d0, param_3 = adresse
  entite du device {grpLo,grpHi,memberId}, param_4 = reason ;
  switch sur state+mode : slave disparu -> slaveChanged, maitre
  disparu -> masterChanged/retour standalone) ; 0x1c1d50 =
  OnDeviceDeclaration (FUN_8d04c, param_3 = type, param_4 = obj msg
  vt+0x44 = header {u16,u16,u32} ; slave inconnu/re-declare ->
  renvoi msgId6) ; 0x1c1d80 = vide (FUN_90374).
- entity.vt+0xb8 <- SyncCL+4 et entity.vt+0x19c <- SyncCL+0 =
  listeners des messages lien (uTS + famille 0x1xx) ; handlers dans
  la region FSM non decompilee (Thumb ~0x8d2xx-0x903xx) — ce sont
  eux qui impriment les "SyncMsg:uTS_Msg_*" et notifient la map
  +0x84 (slots notifies : +0x10 exitedGroupForming, +0x14, +0x20,
  +0x24, +0x28 slaveChanged).
- dataLink.vt+0x114 -> timer 1000ms (SyncCL+8, FUN_8adf8:40-42) =
  retransmission msgId6 RebuildGroupQuery vers les slaves sans
  reponse (flags +0xd/+0xe, deadline +0x14 via FUN_1d06b8).
Pas de transaction id dans les champs fil : correlation par
memberId source + flags pending.

### Enveloppe fil

Message lien-entite CHAI sur le meme transport que le reste
(CPOETH dirige / canal TCP ef51 via VNM). Contenu cote recepteur :
header 8B {u16 groupAddrLo, u16 groupAddrHi, u32 senderMemberId}
(getter msg vt+0x44) + champs {f6 u16, f7 u16, name ASCII}.
groupid = les 4 premiers octets de l'adresse entite (+0x5c/0x5e).
Format exact de l'enveloppe exterieure = post() vt+0x1a4 de la
couche lien (implementation CHAI generique, hors corpus uTS) —
famille "directed data" ; a capturer 2 devices ou decompiler le
vtable de l'entite (objet cree par AddLocalDevice vt+0xb4).

### FSM (chaine UI FUN_10ef64 verifiee)

- enterGroupForming : FUN_8bf20(count) = variante decouverte —
  bcast GroupForming(0), state->2 (SS_GroupForming_Master, liste
  reservee a count) ; FUN_8b578(list) = variante configuree (CnE
  Slave_1..3_Id, FUN_e5a90) — msgId6/slave, state->4.
- becomeSlave : FUN_8b234 — slave envoie BecomeSlave(2) ->
  state3 (attente).
- finishGroupForming : FUN_8c28c -> FUN_8c7ac (state2) —
  BecameSlave(3)/slave {index,count,name} + CancelGroupForming(1)
  bcast, mode->1 Master, masterID=ownID(+0x60), deviceIndex=0.
- cancelGroupForming : FUN_8c100 — CancelGroupForming(1) bcast,
  state->0, reset +0x20.
- leaveGroup : FUN_8af00 — slave LeaveGroup(4) -> standalone ;
  master -> FUN_90938 ExitGroup(5)/slave + reset.
- rebuild : state2 (SS_GroupRebuild_Master) via FUN_8bf20 ;
  slave state3 (SS_GroupRebuild_Slave) ; re-annonce passive
  FUN_8d04c (DeviceDeclaration -> msgId6 flag=1).
- msgIds 0x100/0x104/0x108/0x110/0x200 + ~12 DAT-ids (wrappers
  FUN_8bc04 master->slaves / FUN_8b860 slave->master mode2&&state0)
  = famille runtime sync (commandes transport/playlist/etat
  "onMaster*"), canal identique, namespace distinct des uTS.

### Sequence de join (client 3e partie)

1. Membre CHAI avec entite locale ; adresse 10B connue ; ecouter le
   canal lien (0x3c75,0x3234) sur les broadcasts + unicast vers
   son memberId.
2. Chemin A (decouverte) : recevoir GroupForming(0) du master
   (senderMemberId = master) -> envoyer BecomeSlave(2) unicast vers
   le master {name = nom propre} -> attendre BecameSlave(3)
   {deviceIndex, slaveCount, masterName} -> mode slave, masterID =
   sender, groupe = groupAddr du header.
   Chemin B (provisionne) : recevoir RebuildGroupQuery(6)
   {monIndex, flag, masterName} -> repondre RebuildGroupResponse
   (id 7) -> BecameSlave(3).
3. Quitter : LeaveGroup(4) -> master ; sortie maitre : ExitGroup(5)
   ou CancelGroupForming(1) bcast -> standalone.

### Restes ouverts

- id exact de RebuildGroupResponse (7 presume ; wrappers 8b860
  candidats : FUN_8d25c/8c334/8c370/8c04c/8cebc/8bb0c/8c6e8 — pools
  non lus).
- semantique exacte (A,B) et de aux/arg10 ; octets fil du post()
  lien (+0x1a4) ; confirmation capture 2 devices requise.

## 53. versulu/xmodem/persparam handlers

### Modele SDS decode (dispatch reel, corpus fw4218)

- Objet commande (BSS, cree lazy) : {vtable@0, name_ptr@+4,
  help/usage ptrs @+8/+C, flag@+10, 10 paires {key,value} @+0x14..+0x5C,
  guard-once @+0x58}.
- Registration : FUN_001c70ac(obj, init_fn, tag) empile un noeud
  {next,obj,init_fn,tag} sur la liste FUN_000040f8 ;
  FUN_001c7120(tag) la consomme : `init_fn(obj)`. tag=0x60008000 pour
  le module SDS/SuluModule.
- Arbre : FUN_000625c8 = 200 noeuds x 0x14B {obj,parent,next_sibling,
  children,flags} ; insertion FUN_00062514 (match name=*(obj+4)) ;
  attach FUN_001a7b9c(obj,parent_name).
- Resolver chemin : FUN_001b2168 consomme argv[i] vs *(node_obj+4).
- EXEC : FUN_001b1b38 (interpreteur ligne, quotes/; geres) appelle
  `(**vt + 8)(obj, argv+consumed, argc-consumed, eol_char)`.
  eol_char = 0xd ou le separateur.
- Table RTOS statique (§35) : records de 5 dwords {vtable_ptr,
  handler_fn, obj1, obj2, name_ptr} + name CStr inline + help CStr
  inline. Exemples decodes (offsets fichier) :
  - lpm    @0x1E0ECx : h=0x60078E28->0x72EA4, o=0x60405870/0x60496C78
  - flash  @0x1E0F18 : h=0x60086A5C->0x80AD8 (thunk Thumb non
    decompilee -> appelle FUN_000b9ea8), o=0x604058E4/0x60496E80,
    name_str=0x602B4380, "flash"+help inline
  - mlctest@0x1E0320 : {vt=0x602D98A8, 0x6007F16C->0x791E8*,
    o=0x60405974/0x6049757C, name=0x602B31B8} "mlctest"+
    "do malloc and perf test" (*0x791E8=0x791ec.c imprime la liste
    des semaphores — l'appariement champ/handler reste a confirmer)

### `versulu` — commande VERSION (pas update firmware !)

- nom "versulu" @file 0x2a1bec ; help = "print chip version
  information" @file 0x2a1bcc (exactement name-0x20).
  => CORRECTION §47 : `versulu` = "VERsion SULU", requete de version
  chip/module. AUCUN .bcd, aucun reboot bootloader, aucun handshake
  reseau dans son exec.
- Descripteur statique @file 0x2A1BAC : {0x602EC8D1(Thumb->0x2E694D),
  0x602EC575(->0x2E65F1), 0, 0x600514DC(->0x4B558), 0x3C, 1,
  0x602EC8DA(->0x2E6956), self=0x602A7B30} + "print chip version
  information\0" + "versulu\0".
- Objet runtime @BSS 0x60496BC4, init lazy par FUN_00044fdc
  (file 0x44fdc) : vtable=0x602DA1D8 (file 0x2D4254), name, help,
  10 slots de paires {key,value} mis a 0.
- Semantique : les paires sont remplies par 6 appelants de
  FUN_00044fdc (0x745f0, 0x76170, 0x764e0, 0xcf6dc, 0xdbcec,
  0x1ce1d4) = code d'init HW qui enregistre des couples {champ,
  valeur} de version/revision chip (FUN_000745f0 ecrit des regs MMIO
  0x26000000/0xb4000000 puis depose une paire). `versulu` imprime ce
  registre cle/valeur = "chip version information".
- Exec : dispatch vt+8 -> 0x6020904C -> file 0x2030C8 (stub ARM :
  ldr r2,[pc+0x48] / ldr r0 / mov r0,#4 / blx Thumb ~0x600B5Fxx ;
  Ghidra le lit {FUN_001ac2d4,FUN_001eecc8} — lecture douteuse).
  Autres slots non-nuls : +C->0x203094 (stub->Thumb ~0x600B5F38,
  args petits ints 4/5/8 = print helper), +0x20->0x2030D8 (litteraux
  0x602E46D0/0x602E3FF8 = tables), +0x34->0x203120.
- Syntaxe effective : `versulu` (nu) -> imprime versions ; c'est le
  seul usage attendu. LE canal firmware-update n'est PAS versulu.

### `flash` — chemin XMODEM reel (upload/download FLASH !)

Handler FUN_000b9ea8 (ARM decompile, file 0xb9ea8) — sub-commandes
(argv[0] matchees via FUN_00003d18, args strtol FUN_000032fc) :

    flash read <off> <size>      hexdump flash (FUN_001dabd8), 32B/ligne hex+ASCII
    flash transmit <off> <size>  envoie flash->hote par XMODEM (size<=0x400000)
    flash receive <off> <size>   EFFACE puis RECOIT XMODEM -> flash @off (size<=0x400000)
    flash erase <off> <size>     efface ; off>=0x40000, size<=0x400000 sinon refuse
    flash pattern <off> <size> [v <val>|<val>]  motif rampe ou u32 fixe -> flash write
    flash verify <off> <size> [<val>]  re-lit + compte erreurs (off>=0x40000)

Sequence receive : "Erasing flash %u bytes from offset %u" ->
FUN_001da98c(add r/w area) -> FUN_001dac54(unlock) ->
FUN_001da9b4(erase) -> "Start (Send File) via XModem now..." ->
sleep 1000ms -> objet XModem malloc(0x490) vtable _DAT_000ba20c ->
vt+8 (receive) alimente par FUN_001dba80 (console IO).
Transmit : "Start X-Modem now..." -> meme objet, vt+0xC (send).
=> `flash receive` est LE chemin d'ecriture flash par SDS
   (le payload XMODEM arrive sur le port console/telnet).
NB : erase/pattern/verify imposent off>=0x40000 ; receive/transmit
ne verifient PAS l'offset bas (verifier soi-meme).

Autre xmodem : "CLCDDumpScreen: start xmodem reception now. Size=%d"
@file 0x2010D (+ "xmodemTransmit failed"/"there is no lcd service")
= service dump ecran LCD interne (reception via xmodem, declenchee
par le service LCD — pas un canal upload utilisateur).

### `persparam` — store parametres persistants

Syntaxe COMPLETE (help inline @file 0x2A02A8) :

    persparam rd <name>             read integer   (name = 4 chars)
    persparam rds <name>            read string    (name = 4 chars)
    persparam rdss <name>           read string    (name libre)
    persparam wr <name> <value>     write integer  (name = 4 chars)
    persparam wrs <name> <value>    write string   (name = 4 chars)
    persparam wrss <name> <value>   write string   (name libre)
    persparam wrb <name> <hex-str>  write BINAIRE  (name=4 chars, hex "0xafc9f0")
    persparam wrbs <name> <hex-str> write BINAIRE  (name libre, hex)
    persparam clr <name>            clear integer  (4 chars)
    persparam clrs <name>           clear string   (4 chars)
    persparam check                 check + update default parameters
    persparam reset                 reset parameters to default

- Descripteur @file 0x2A0294 : {ptr 0x602EC852->file 0x2E68CE,
  str 0x602A5C04} + "persparam" + help ci-dessus.
- Handler = code Thumb NON decompile (gap 0x7e5a4-0x7ea23) — les
  strings sub-cmd "rdss"/"clrs"/"wrbs" sont embarquees a
  0x7E8C8/0x7E8D4/0x7E8F0 (refs ADR). Semantique wrb/wrbs : parse
  hex-str -> blob -> parametre nomme du store persistant (config
  flash). Limite de taille non verifiable statiquement (pas de
  decomp) ; c'est le seul canal SDS "donnees arbitraires->stockage"
  confirme (mais cible = persparams, pas fichiers USB).

### `load`/`mlctest`/`rd`/`wr`/`bat`

- `mlctest` : record table ci-dessus, "do malloc and perf test"
  (malloc + perf benchmark ; pas un canal upload).
- `load`, `rd`, `wr`, `bat` : presents dans la liste §35 de la table
  RTOS statique (0x1dfxxx-0x1e1xxx) ; handlers non epingles cette
  session (region contient aussi `restart in update mode`, `reboot`,
  `call`, `memdump`, `memscan`, `malloc`, `free` — surface debug
  RTOS complete non authentifiee via telnet SDS).

### Adresses cles

| quoi | file | note |
|---|---|---|
| SDS interpreter (exec vt+8) | 0x1b1b38 | (obj,argv,argc,eol) |
| resolver chemin | 0x1b2168 | match *(obj+4) |
| registration list push | 0x1c70ac | node{next,obj,init,tag} |
| list consume | 0x1c7120 | appelle init(obj) |
| versulu pair-filler/init | 0x44fdc | obj@BSS 0x60496BC4 |
| versulu vtable | 0x2D4254 | +8->0x2030C8 exec |
| flash handler (xmodem) | 0xb9ea8 | wrapper 0x80AD8 |
| XModem obj vtable | 0xba20c | alloc 0x490 |
| flash cmd record | 0x1E0F18 | handler field 0x60086A5C |
| persparam desc | 0x2A0294 | handler Thumb ~0x7E5xx |
| LCDDumpScreen xmodem | 0x2010D | strings |
