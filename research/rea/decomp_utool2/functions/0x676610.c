// rea decompile_all
// name: FUN_00676610
// address: 0x676610
// body: available
// range: 0x676610-0x67673c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676610(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720744;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00675f90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    FUN_00409cf0(iVar1);
    FUN_004c2c30(0,*param_1,iVar1 << 2);
  }
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 < 1) {
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar1 * 4);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar1 * 4);
  }
  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = (float)*(int *)(iVar1 + 0xc) + (float)param_2[2];
  local_1c = param_2[3];
  local_18 = param_2[4];
  local_14 = (float)*(int *)(iVar2 + 0x10) + (float)param_2[5];
  FUN_00680060(&local_28);
  FUN_00675a00(extraout_ECX);
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))("clip\n",5);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

