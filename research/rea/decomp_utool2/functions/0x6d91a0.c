// rea decompile_all
// name: FUN_006d91a0
// address: 0x6d91a0
// body: available
// range: 0x6d91a0-0x6d94a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d91a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *local_38 [8];
  undefined1 local_18 [8];
  int local_10;
  float local_8;
  
  FUN_006d79e0(local_18);
  local_8 = (float)local_10;
  iVar1 = *(int *)(*(int *)(param_1 + 0xe0) + 0x8c);
  if (iVar1 == 1) {
    FUN_00682e50();
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682d90();
  }
  else {
    if (iVar1 == 2) {
      FUN_00682e50();
      FUN_00682d90();
      FUN_00682d90();
      FUN_00682d90();
      local_8 = local_8 + 4.0;
      FUN_00682d90();
      goto LAB_006d9407;
    }
    if (iVar1 != 3) {
      FUN_00682e50();
      FUN_00682d90();
      FUN_00682d90();
      FUN_00682d90();
      FUN_00682d90();
      goto LAB_006d9407;
    }
    FUN_00682e50();
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682d90();
  }
  FUN_00682d90();
LAB_006d9407:
  FUN_00682d90();
  iVar1 = param_2[2];
  if ((iVar1 != 0) && (*(float *)(*param_2 + -4 + iVar1 * 4) != 100005.0)) {
    if (param_2[1] < iVar1 + 1) {
      FUN_00409cf0((iVar1 + 1) / 2 + iVar1 + 9 & 0xfffffff8);
    }
    iVar1 = param_2[2];
    param_2[2] = iVar1 + 1;
    *(undefined4 *)(*param_2 + iVar1 * 4) = 0x47c35280;
  }
  piVar4 = (int *)FUN_0067a6f0(local_38);
  iVar1 = *param_2;
  *param_2 = *piVar4;
  *piVar4 = iVar1;
  param_2[1] = piVar4[1];
  param_2[2] = piVar4[2];
  iVar1 = piVar4[4];
  iVar2 = piVar4[5];
  iVar3 = piVar4[6];
  param_2[3] = piVar4[3];
  param_2[4] = iVar1;
  param_2[5] = iVar2;
  param_2[6] = iVar3;
  *(char *)(param_2 + 7) = (char)piVar4[7];
  FID_conflict__free(local_38[0]);
  return;
}

