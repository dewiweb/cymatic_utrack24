// rea decompile_all
// name: FUN_006f3ce0
// address: 0x6f3ce0
// body: available
// range: 0x6f3ce0-0x6f3dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f3ce0(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00729a2e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
    iVar3 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  else {
    iVar2 = param_1[3];
    iVar3 = param_1[4];
    local_1c = param_1[3];
    local_18 = param_1[4];
  }
  local_14 = (undefined4 *)0x0;
  local_8 = 1;
  (**(code **)(*param_1 + 0x10))(local_2c,0,0,0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (local_28 == 1) {
    FUN_004bb940(local_24,iVar2,iVar3);
    uVar1 = extraout_ECX_02;
  }
  else if (local_28 == 2) {
    FUN_004bb9f0(local_24,iVar2,iVar3);
    uVar1 = extraout_ECX_01;
  }
  else {
    uVar1 = extraout_ECX;
    if (local_28 == 3) {
      FUN_004bb8a0(local_24,iVar2,iVar3);
      uVar1 = extraout_ECX_00;
    }
  }
  FUN_006f3df0(iVar2,iVar3,0,uVar1,1);
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)*local_14)(1);
  }
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

