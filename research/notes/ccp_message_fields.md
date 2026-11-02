# CCPMessage ctor field layout

obj: [0]vftable [1]list_item [2,3]links [4]class_id; off:W = byte offset : width (2|4|8), #i:4 = dword index.

name | class_id | ctor | fields
---|---|---|---
Generic |  | 5331b0 | 0x48:4,0x4c:2
Generic |  | 5332d0 | 0x48:4,0x4c:2
Generic |  | 57b190 | 6:2
Generic |  | 57b5b0 | 6:2
LM_GetVNMInfoReply |  | 57df90 | 10:2
LM_GetVNMInfoReply |  | 57df10 | 10:2
LM_VNMTray_GetInterfacesReply |  | 57ed10 | 10:2
LM_VNMTray_GetInterfacesReply |  | 57ed60 | 10:2
SM_D_CollectSetupDataReply |  | 587940 | 0xd:2
SM_D_CollectSetupDataReply |  | 5879c0 | 0xd:2
SM_D_CollectSetupDataRequest |  | 587710 | 0xd:2
SM_D_CollectSetupDataRequest |  | 5876b0 | 0xd:2
SM_D_RestoreSetupDataRequest |  | 587ee0 | 0xd:2
SM_D_RestoreSetupDataRequest |  | 587e70 | 0xd:2
SM_DeviceEnumerationReply |  | 5865e0 | #10:4
SM_FilteredDeviceSearchReply |  | 58b5f0 | #10:4
SM_GetDeviceInfoReply |  | 5831b0 | #10:4,0x33:2,0x35:2,0xce:2,0xd2:2
SM_GetDeviceInfoReply |  | 5832f0 | #10:4,0x33:2,0x35:2,0xce:2,0xd2:2
SM_GetDeviceInfoRequest |  | 582e20 | 0x2a:2,0x2e:2,0xb:2,0xc:2,10:2
SM_GetDeviceInfoRequest |  | 582e80 | 0x2a:2,0x2e:2,0xb:2,0xc:2,10:2
SM_MachineInformationReply |  | 588fa0 | 0x13:2,10:2
SM_MachineInformationReply |  | 589070 | 0x13:2,10:2
SM_MachineInformationRequest |  | 588d50 | 0xf:2,10:2
SM_MachineInformationRequest |  | 588cb0 | 0xf:2,10:2
Generic | 0x10001002 | 58c8c0 | 
Generic | 0x10001002 | 58c980 | #6:4,#7:4,#8:4
Generic | 0x10001003 | 58ccc0 | 
Generic | 0x10001003 | 58cd80 | 
Generic | 0x10001012 | 58d110 | 
Generic | 0x10001012 | 58d050 | 
Generic | 0x10001013 | 58d350 | 
Generic | 0x10001013 | 58d410 | #9:4
Generic | 0x10001014 | 58d680 | 
Generic | 0x10001014 | 58d740 | 
Generic | 0x10001015 | 58d940 | 
Generic | 0x10001015 | 58da00 | 
Generic | 0x10002340 | 58b070 | #6:4,#7:4
Generic | 0x10002340 | 58b000 | 
Generic | 0x10002351 | 586d40 | 0x1a:2,6:2
Generic | 0x10002351 | 586e10 | 0x1a:2,6:2
Generic | 0x10002352 | 589de0 | #8:4,#9:4
Generic | 0x10002352 | 589d10 | #8:4,#9:4
Generic | 0x10002360 | 587240 | 6:2
Generic | 0x10002360 | 5871c0 | 6:2
Generic | 0x10002361 | 5874a0 | 0x1a:2,6:2
Generic | 0x10002361 | 587410 | 0x1a:2,6:2
Generic | 0x10002381 | 588860 | 0x1a:2,0x1e:2,6:2,7:2,8:2
Generic | 0x10002381 | 588760 | 0x1a:2,0x1e:2,6:2,7:2,8:2
Generic | 0x10002390 | 5885e0 | #6:4
Generic | 0x10002390 | 588560 | #6:4
Generic | 0x10002391 | 58aa30 | #6:4,7:2
Generic | 0x10002391 | 58ab00 | #6:4,7:2
Generic | 0x10002392 | 58ad80 | 
Generic | 0x10002392 | 58adf0 | 0x1a:2,6:2
Generic | 0x100023f0 | 582150 | 
Generic | 0x100023f2 | 5828e0 | 9:2
Generic | 0x100023f2 | 582820 | 
Generic | 0x100023f3 | 582bf0 | 
Generic | 0x100023f3 | 582b30 | 
Generic | 0x10003700 | 5819f0 | #7:4,#8:4,6:2
Generic | 0x10004203 | 57c940 | 
Generic | 0x10004205 | 57cf40 | 
Generic | 0x10004205 | 57d000 | 
Generic | 0x10004206 | 57d2c0 | 
Generic | 0x10004206 | 57d200 | 
Generic | 0x10004207 | 57d5b0 | 9:2
Generic | 0x10004207 | 57d4f0 | 
Generic | 0x10004208 | 57d800 | 
Generic | 0x10004208 | 57d8e0 | 
Generic | 0x10004221 | 57e300 | #10:4,#6:4,#7:4,#8:4,#9:4
Generic | 0x10004221 | 57e260 | #10:4,#6:4,#7:4
Generic | 0x10004222 | 57e640 | 
Generic | 0x10004230 | 57e930 | 
Generic | 0x10004230 | 57e9a0 | 
Generic | 0x10004240 | 580620 | #6:4,#7:4
Generic | 0x10004240 | 5806a0 | #6:4,#7:4
Generic | 0x100042e0 | 5808a0 | 
Generic | 0x100042e0 | 580960 | 
Generic | 0x100042e1 | 580bb0 | 0x36:2,0xd:2
Generic | 0x100042e1 | 580ca0 | 0x36:2,0xd:2
Generic | 0x100042f3 | 57fd60 | 
Generic | 0x100042f6 | 57e770 | 
Generic | 0x100042f6 | 57e700 | 
Generic | 0x100042f7 | 580450 | 6:2
Generic | 0x100042f7 | 5803e0 | 
Generic | 0x10006301 | 57b6a0 | 
Generic | 0x10006301 | 57b770 | 0x1a:2,6:2
Generic | 0x10006301 | 57b860 | 0x1a:2,6:2
Generic | 0x10021021 | 58dec0 | 
Generic | 0x10021021 | 58df80 | 
Generic | 0x10023700 | 581d40 | #7:4,#8:4,0x1a:2,6:2
Generic | 0x10024202 | 57c6c0 | 0xc:2
Generic | 0x10024202 | 57c600 | 
Generic | 0x10041020 | 58dcc0 | 
Generic | 0x10041020 | 58dc00 | 
Generic | 0x10044201 | 57c3a0 | 9:2
Generic | 0x10044201 | 57c2e0 | 
Generic | 0x10045b01 | 57bc70 | #9:4,10:2
