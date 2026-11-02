// rea decompile_all
// name: FUN_000121f0
// address: 0x121f0
// body: available
// range: 0x121f0-0x1269f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_000121f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 *param_6)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *local_res8;
  undefined1 *local_98;
  undefined1 local_90 [8];
  longlong local_88;
  int local_80;
  undefined4 local_78 [2];
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  ushort local_38 [4];
  undefined8 local_30;
  ushort local_28 [8];
  undefined1 local_18 [16];
  
  puVar5 = local_18;
  if (param_6 != (undefined1 *)0x0) {
    puVar5 = param_6;
  }
  uVar4 = IoRegisterDeviceInterface
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),param_2,param_4,puVar5);
  if (-1 < (int)uVar4) {
    local_98 = (undefined1 *)0x0;
    uVar3 = IoOpenDeviceInterfaceRegistryKey(puVar5,0xf003f,&local_98);
    if (uVar3 == 0) {
      RtlInitUnicodeString(local_48,L"CLSID");
      RtlInitUnicodeString(local_28,L"{17CCA71B-ECD7-11D0-B908-00A0C9223196}");
      uVar3 = ZwSetValueKey(local_98,local_48,0,1,L"{17CCA71B-ECD7-11D0-B908-00A0C9223196}",
                            local_28[0] + 2);
      if (uVar3 == 0) {
        RtlInitUnicodeString(local_48,L"FriendlyName");
        RtlInitUnicodeString(local_38,param_3);
        uVar3 = ZwSetValueKey(local_98,local_48,0,1,local_30,local_38[0] + 2);
        if (uVar3 == 0) {
          cVar2 = IoIsWdmVersionAvailable(6,0);
          puVar1 = local_98;
          if (cVar2 != '\0') {
            local_res8 = (undefined1 *)0x0;
            param_6 = (undefined1 *)0x0;
            local_80 = 0;
            RtlInitUnicodeString(local_90,&LAB_0001d100);
            local_68 = local_90;
            local_78[0] = 0x30;
            local_70 = puVar1;
            local_60 = 0x240;
            local_58 = 0;
            local_50 = 0;
            uVar3 = ZwCreateKey(&local_res8,0xf003f,local_78,0,0,0,0);
            if (uVar3 != 0) {
              local_res8 = (undefined1 *)0x0;
            }
            if (local_88 != 0) {
              if (local_80 == 1) {
                RtlFreeUnicodeString(local_90);
              }
              else if (local_80 == 2) {
                ExFreePoolWithTag(local_88,0);
              }
            }
            puVar1 = local_res8;
            if (uVar3 == 0) {
              if (param_6 != (undefined1 *)0x0) {
                ZwClose();
                param_6 = (undefined1 *)0x0;
              }
              local_80 = 0;
              RtlInitUnicodeString(local_90,&DAT_0001d110);
              local_68 = local_90;
              local_78[0] = 0x30;
              local_60 = 0x240;
              local_58 = 0;
              local_50 = 0;
              local_70 = puVar1;
              uVar3 = ZwCreateKey(&param_6,0xf003f,local_78,0,0,0,0);
              if (uVar3 != 0) {
                param_6 = (undefined1 *)0x0;
              }
              if (local_88 != 0) {
                if (local_80 == 1) {
                  RtlFreeUnicodeString(local_90);
                }
                else if (local_80 == 2) {
                  ExFreePoolWithTag(local_88,0);
                }
              }
              if (uVar3 == 0) {
                uVar4 = FUN_00014730(&param_6);
                uVar3 = (uint)uVar4;
                if (uVar3 == 0) {
                  uVar3 = FUN_00014880(&param_6);
                  if (uVar3 == 0) {
                    if (param_6 != (undefined1 *)0x0) {
                      ZwClose();
                      param_6 = (undefined1 *)0x0;
                    }
                    if (local_res8 != (undefined1 *)0x0) {
                      ZwClose();
                    }
                  }
                  else {
                    if (param_6 != (undefined1 *)0x0) {
                      ZwClose();
                      param_6 = (undefined1 *)0x0;
                    }
                    if (local_res8 != (undefined1 *)0x0) {
                      ZwClose();
                    }
                  }
                }
                else {
                  if (param_6 != (undefined1 *)0x0) {
                    ZwClose();
                    param_6 = (undefined1 *)0x0;
                  }
                  if (local_res8 != (undefined1 *)0x0) {
                    ZwClose();
                  }
                }
              }
              else {
                if (param_6 != (undefined1 *)0x0) {
                  ZwClose();
                  param_6 = (undefined1 *)0x0;
                }
                if (local_res8 != (undefined1 *)0x0) {
                  ZwClose();
                }
              }
            }
            else {
              if (param_6 != (undefined1 *)0x0) {
                ZwClose();
                param_6 = (undefined1 *)0x0;
              }
              if (local_res8 != (undefined1 *)0x0) {
                ZwClose(local_res8);
              }
            }
          }
        }
      }
    }
    if (local_98 != (undefined1 *)0x0) {
      ZwClose();
    }
    if (((int)uVar3 < 0) || (puVar5 == local_18)) {
      RtlFreeUnicodeString(puVar5);
    }
    uVar4 = (ulonglong)uVar3;
  }
  return uVar4;
}

