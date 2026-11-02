// rea decompile_all
// name: FUN_006daac0
// address: 0x6daac0
// body: available
// range: 0x6daac0-0x6dad20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006daac0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 0x11c);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    iVar3 = 0x1e;
  }
  else {
    local_8 = 0xf;
  }
  FUN_006e6400(&local_1c);
  iVar2 = *(int *)(*(int *)(param_2 + 0x78) + 0x128);
  if (local_14 - iVar3 < iVar2) {
    iVar2 = local_14 - iVar3;
  }
  local_c = 0;
  if (0 < iVar2) {
    local_c = iVar2;
  }
  iVar3 = *(int *)(*(int *)(param_2 + 0x78) + 300);
  *param_1 = 0;
  param_1[1] = 0;
  if (local_10 - local_8 < iVar3) {
    iVar3 = local_10 - local_8;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_8 = 0;
  if (0 < iVar3) {
    local_8 = iVar3;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(*(int *)(param_2 + 0x78) + 0x18);
    if ((iVar3 == 2) || (iVar3 == 3)) {
      param_1[4] = local_1c;
      param_1[5] = local_18;
      param_1[6] = local_14;
      param_1[7] = local_10;
    }
    else {
      param_1[6] = local_c;
      param_1[7] = local_8;
      if (iVar1 == 1) {
        param_1[4] = 0;
      }
      else if (iVar1 == 2) {
        param_1[4] = local_14 - local_c;
      }
      else {
        param_1[4] = (local_14 - local_c) / 2;
        if (iVar1 == 3) {
          param_1[5] = 0;
          goto LAB_006dac08;
        }
        if (iVar1 == 4) {
          param_1[5] = local_10 - local_8;
          goto LAB_006dac08;
        }
      }
      param_1[5] = (local_10 - local_8) / 2;
    }
  }
LAB_006dac08:
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  iVar3 = *(int *)(*(int *)(param_2 + 0x78) + 0x18);
  if ((iVar3 == 2) || (iVar3 == 3)) {
    local_14 = local_14 + -2;
    *param_1 = *param_1 + 1;
    local_10 = local_10 + -2;
    param_1[1] = param_1[1] + 1;
  }
  else {
    if (iVar1 == 1) {
      FUN_0040dd10(&local_1c,local_c);
    }
    else if (iVar1 == 2) {
      FUN_0040dcd0(&local_1c,local_c);
    }
    else if (iVar1 == 3) {
      FUN_0040dd60(&local_1c,local_8);
    }
    else if (iVar1 == 4) {
      FUN_00418d70(&local_1c,local_8);
    }
    iVar3 = *(int *)(param_2 + 0x18) / 2;
    iVar1 = *(int *)(param_2 + 0x1c) / 2;
    if (6 < iVar1) {
      iVar1 = 7;
    }
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar1 = iVar1 + 2;
    iVar3 = *(int *)(*(int *)(param_2 + 0x78) + 0x18);
    if ((((iVar3 == 0) || (iVar3 == 2)) || (iVar3 == 9)) || (iVar3 == 0xb)) {
      local_10 = param_1[3];
      *param_1 = *param_1 + iVar1;
      local_14 = param_1[2] + iVar1 * -2;
    }
    else {
      if (((iVar3 != 1) && (iVar3 != 3)) && ((iVar3 != 10 && (iVar3 != 0xc)))) {
        return param_1;
      }
      local_14 = param_1[2];
      param_1[1] = param_1[1] + iVar1;
      local_10 = param_1[3] + iVar1 * -2;
    }
  }
  iVar1 = 0;
  if (0 < local_14) {
    iVar1 = local_14;
  }
  param_1[2] = iVar1;
  iVar1 = 0;
  if (0 < local_10) {
    iVar1 = local_10;
  }
  param_1[3] = iVar1;
  return param_1;
}

