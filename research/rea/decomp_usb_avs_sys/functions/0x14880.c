// rea decompile_all
// name: FUN_00014880
// address: 0x14880
// body: available
// range: 0x14880-0x14a1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00014880(undefined8 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  undefined1 local_38 [8];
  longlong local_30;
  int local_28;
  undefined2 local_20;
  undefined2 local_1e;
  short *local_18;
  int local_10;
  
  local_10 = 0;
  RtlInitUnicodeString(&local_20,0);
  RtlInitAnsiString(local_38,"{00000000-0000-0000-0000-000000000000}");
  if (local_18 != (short *)0x0) {
    if (local_10 == 1) {
      RtlFreeUnicodeString(&local_20);
    }
    else if (local_10 == 2) {
      ExFreePoolWithTag(local_18,0);
    }
    local_18 = (short *)0x0;
  }
  local_1e = 0;
  local_20 = 0;
  local_10 = 1;
  iVar3 = RtlAnsiStringToUnicodeString(&local_20,local_38,1);
  psVar2 = local_18;
  if (iVar3 == 0) {
    lVar4 = -1;
    local_28 = 0;
    psVar5 = local_18;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    RtlInitUnicodeString(local_38,L"{1DA5D803-D492-4EDD-8C23-E0C0FFEE7F0E},2");
    iVar3 = ZwSetValueKey(*param_1,local_38,0,1,psVar2,~(uint)lVar4 * 2);
    if (local_30 != 0) {
      if (local_28 == 1) {
        RtlFreeUnicodeString(local_38);
      }
      else if (local_28 == 2) {
        ExFreePoolWithTag(local_30,0);
      }
    }
    if (local_18 == (short *)0x0) {
      return iVar3;
    }
    if (local_10 != 1) {
      if (local_10 != 2) {
        return iVar3;
      }
      ExFreePoolWithTag(local_18,0);
      return iVar3;
    }
  }
  else {
    if (local_18 == (short *)0x0) {
      return iVar3;
    }
    if (local_10 != 1) {
      if (local_10 != 2) {
        return iVar3;
      }
      ExFreePoolWithTag(local_18,0);
      return iVar3;
    }
  }
  RtlFreeUnicodeString(&local_20);
  return iVar3;
}

