// rea decompile_all
// name: FUN_006ae3e0
// address: 0x6ae3e0
// body: available
// range: 0x6ae3e0-0x6ae5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ae3e0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int local_1c;
  undefined1 local_18 [20];
  
  iVar1 = FUN_006e9580();
  local_1c = iVar1;
  piVar2 = (int *)FUN_006d79e0(local_18);
  *param_2 = *piVar2;
  param_2[1] = piVar2[1];
  param_2[2] = piVar2[2];
  iVar3 = piVar2[3];
  param_2[3] = iVar3;
  iVar5 = *(int *)(*(int *)(in_ECX + 0xe0) + 0x8c);
  if ((iVar5 == 2) || (iVar5 == 3)) {
    iVar3 = param_2[2];
  }
  iVar3 = (**(code **)(*(int *)(iVar1 + 0x3c) + 8))(iVar3);
  if (0 < iVar3) {
    iVar5 = *(int *)(*(int *)(in_ECX + 0xe0) + 0x8c);
    if ((iVar5 == 2) || (iVar5 == 3)) {
      iVar5 = param_2[2];
      param_2[1] = param_2[1] + iVar3;
      iVar1 = param_2[3] + iVar3 * -2;
    }
    else {
      iVar1 = param_2[3];
      *param_2 = *param_2 + iVar3;
      iVar5 = param_2[2] + iVar3 * -2;
    }
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    param_2[2] = iVar3;
    iVar3 = 0;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
    param_2[3] = iVar3;
  }
  if (*(int *)(in_ECX + 0xe8) != 0) {
    piVar2 = (int *)(**(code **)(*(int *)(unaff_EBX + 0x3c) + 0x10))(&local_1c);
    *param_1 = *piVar2;
    param_1[1] = piVar2[1];
    param_1[2] = piVar2[2];
    iVar3 = piVar2[3];
    param_1[3] = iVar3;
    iVar5 = *(int *)(*(int *)(in_ECX + 0xe0) + 0x8c);
    if ((iVar5 != 2) && (iVar5 != 3)) {
      iVar3 = *param_1;
      iVar5 = *param_2;
      if (param_2[2] / 2 + iVar5 < param_1[2] / 2 + iVar3) {
        iVar1 = param_2[2] + iVar5;
        if (iVar3 < param_2[2] + iVar5) {
          iVar1 = iVar3;
        }
        if (iVar1 < iVar5) {
          iVar5 = iVar1;
        }
        *param_2 = iVar5;
        param_2[2] = iVar1 - iVar5;
        return;
      }
      iVar3 = param_1[2] + iVar3;
      iVar1 = iVar5;
      if (iVar5 < iVar3) {
        iVar1 = iVar3;
      }
      *param_2 = iVar1;
      iVar5 = (iVar5 - iVar1) + param_2[2];
      iVar3 = 0;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      param_2[2] = iVar3;
      return;
    }
    iVar5 = param_1[1];
    iVar1 = param_2[1];
    if (param_2[3] / 2 + iVar1 < iVar3 / 2 + iVar5) {
      iVar3 = param_2[3] + iVar1;
      if (iVar5 < param_2[3] + iVar1) {
        iVar3 = iVar5;
      }
      if (iVar3 < iVar1) {
        iVar1 = iVar3;
      }
      param_2[1] = iVar1;
      param_2[3] = iVar3 - iVar1;
      return;
    }
    iVar4 = iVar1;
    if (iVar1 < iVar3 + iVar5) {
      iVar4 = iVar3 + iVar5;
    }
    param_2[1] = iVar4;
    iVar5 = (iVar1 - iVar4) + param_2[3];
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    param_2[3] = iVar3;
  }
  return;
}

