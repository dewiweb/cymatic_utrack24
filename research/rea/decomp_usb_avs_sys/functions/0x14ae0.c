// rea decompile_all
// name: FUN_00014ae0
// address: 0x14ae0
// body: available
// range: 0x14ae0-0x14c9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00014ae0(undefined8 *param_1,undefined8 param_2,void *param_3,uint param_4,uint *param_5,
                undefined4 *param_6)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined4 local_res20 [2];
  undefined2 local_48;
  undefined2 local_46;
  longlong local_40;
  int local_38;
  
  if (0x7fffffff < param_4) {
    return -0x3ffffff3;
  }
  uVar3 = param_4 + 0xf;
  puVar2 = (ulonglong *)ExAllocatePoolWithTag(1,uVar3,0x67526e4b);
  if (puVar2 == (ulonglong *)0x0) {
    iVar1 = -0x3fffff66;
  }
  else {
    FUN_0001cf40(puVar2,0,(ulonglong)uVar3);
    local_38 = 0;
    RtlInitUnicodeString(&local_48,param_2);
    local_res20[0] = 0;
    iVar1 = ZwQueryValueKey(*param_1,&local_48,2,puVar2,uVar3,local_res20);
    if (iVar1 == 0) {
      if ((uint)puVar2[1] < param_4) {
        param_4 = (uint)puVar2[1];
      }
      memcpy(param_3,(void *)((longlong)puVar2 + 0xc),(ulonglong)param_4);
      if (param_5 != (uint *)0x0) {
        *param_5 = param_4;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = *(undefined4 *)((longlong)puVar2 + 4);
      }
      if (local_40 != 0) {
        if (local_38 == 1) {
          RtlFreeUnicodeString(&local_48);
        }
        else if (local_38 == 2) {
          ExFreePoolWithTag(local_40,0);
        }
        local_40 = 0;
      }
      local_46 = 0;
      local_48 = 0;
      ExFreePoolWithTag(puVar2,0);
      iVar1 = 0;
    }
    else {
      if (local_40 != 0) {
        if (local_38 == 1) {
          RtlFreeUnicodeString(&local_48);
        }
        else if (local_38 == 2) {
          ExFreePoolWithTag(local_40,0);
        }
        local_40 = 0;
      }
      local_46 = 0;
      local_48 = 0;
      ExFreePoolWithTag(puVar2,0);
    }
  }
  return iVar1;
}

