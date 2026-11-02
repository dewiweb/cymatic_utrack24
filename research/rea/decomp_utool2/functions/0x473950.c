// rea decompile_all
// name: FUN_00473950
// address: 0x473950
// body: available
// range: 0x473950-0x473a35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00473950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  void *_Memory;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 local_30 [4];
  int local_2c;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00701ac0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (void *)0x0;
  local_8 = 0;
  uVar3 = FUN_0067e9f0(param_3,&local_14);
  piVar1 = *(int **)(in_ECX + 0x54);
  if (piVar1 == (int *)0x0) {
    local_20 = 0;
    local_1c = 0;
  }
  else {
    local_20 = piVar1[3];
    local_1c = piVar1[4];
  }
  local_18 = (undefined4 *)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*piVar1 + 0x10))(local_30,0,0,2,uVar2);
  _Memory = local_14;
  if (local_2c == 1) {
    FUN_00475b50(param_2,param_3,local_14,uVar3,param_4,extraout_ECX);
  }
  else if (local_2c == 2) {
    FUN_00475a50();
  }
  else {
    FUN_00475c50();
  }
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)*local_18)(1);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

