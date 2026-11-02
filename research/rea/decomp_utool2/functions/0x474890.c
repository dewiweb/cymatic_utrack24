// rea decompile_all
// name: FUN_00474890
// address: 0x474890
// body: available
// range: 0x474890-0x474bc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00474890(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int in_EDX;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(in_EDX + 4) == 1) {
    if (*(int *)(param_1 + 4) == 1) {
      if (param_5 != '\0') {
        FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
        FUN_00478e80(local_20);
        return;
      }
      local_18 = param_2 + 1;
      local_1c = param_1;
      local_14 = param_3;
      local_10 = param_4;
      FUN_004792c0(local_20);
      return;
    }
    if (*(int *)(param_1 + 4) != 2) {
      if (param_5 != '\0') {
        FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
        FUN_004796f0(local_20);
        return;
      }
      local_18 = param_2 + 1;
      local_1c = param_1;
      local_14 = param_3;
      local_10 = param_4;
      FUN_00479ae0(local_20);
      return;
    }
    if (param_5 != '\0') {
      FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
      FUN_004786c0(local_20);
      return;
    }
    local_18 = param_2 + 1;
    local_1c = param_1;
    local_14 = param_3;
    local_10 = param_4;
    FUN_00478ab0(local_20);
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(in_EDX + 4) != 2) {
    if (iVar1 == 1) {
      if (param_5 != '\0') {
        FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
        FUN_0047a230(local_20);
        return;
      }
      local_18 = param_2 + 1;
      local_1c = param_1;
      local_14 = param_3;
      local_10 = param_4;
      FUN_0047a3f0(local_20);
      return;
    }
    if (iVar1 != 2) {
      if (param_5 != '\0') {
        FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
        FUN_0047a590(local_20);
        return;
      }
      local_18 = param_2 + 1;
      local_1c = param_1;
      local_14 = param_3;
      local_10 = param_4;
      FUN_0047a7f0(local_20);
      return;
    }
    if (param_5 != '\0') {
      FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
      FUN_00479db0(local_20);
      return;
    }
    local_18 = param_2 + 1;
    local_1c = param_1;
    local_14 = param_3;
    local_10 = param_4;
    FUN_0047a020(local_20);
    return;
  }
  if (iVar1 == 1) {
    if (param_5 != '\0') {
      FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
      FUN_00477670(local_20);
      return;
    }
    local_18 = param_2 + 1;
    local_1c = param_1;
    local_14 = param_3;
    local_10 = param_4;
    FUN_00477b70(local_20);
    return;
  }
  if (iVar1 != 2) {
    if (param_5 != '\0') {
      FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
      FUN_00478050(local_20);
      return;
    }
    local_18 = param_2 + 1;
    local_1c = param_1;
    local_14 = param_3;
    local_10 = param_4;
    FUN_00478390(local_20);
    return;
  }
  if (param_5 != '\0') {
    FUN_00476930(in_EDX,param_1,param_2,param_3,param_4);
    FUN_00476d90(local_20);
    return;
  }
  local_18 = param_2 + 1;
  local_1c = param_1;
  local_14 = param_3;
  local_10 = param_4;
  FUN_00477210(local_20);
  return;
}

