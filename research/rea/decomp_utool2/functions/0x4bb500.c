// rea decompile_all
// name: FUN_004bb500
// address: 0x4bb500
// body: available
// range: 0x4bb500-0x4bb640 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb500(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007045fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1[1] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    param_1[1] = iVar1;
  }
  local_8 = 0xffffffff;
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1[1],"position");
  *in_ECX = uVar2;
  local_8 = 1;
  if (param_1[1] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    param_1[1] = iVar1;
  }
  local_8 = 0xffffffff;
  uVar2 = (**(code **)(*param_1 + 0x4c))(param_1[1],"screenSize");
  in_ECX[1] = uVar2;
  in_ECX[2] = *param_1;
  local_8 = 2;
  if (param_1[1] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    param_1[1] = iVar1;
  }
  local_8 = 0xffffffff;
  uVar2 = (**(code **)(*param_1 + 0x4c))(param_1[1],"imageTexture");
  in_ECX[3] = uVar2;
  in_ECX[4] = *param_1;
  local_8 = 3;
  if (param_1[1] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    param_1[1] = iVar1;
  }
  local_8 = 0xffffffff;
  uVar2 = (**(code **)(*param_1 + 0x4c))(param_1[1],"textureBounds");
  in_ECX[5] = uVar2;
  in_ECX[6] = *param_1;
  local_8 = 4;
  if (param_1[1] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))();
    param_1[1] = iVar1;
  }
  local_8 = 0xffffffff;
  uVar2 = (**(code **)(*param_1 + 0x4c))(param_1[1],"vOffsetAndScale");
  in_ECX[7] = uVar2;
  in_ECX[8] = *param_1;
  ExceptionList = local_10;
  return;
}

