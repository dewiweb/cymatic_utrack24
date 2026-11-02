// rea decompile_all
// name: FUN_00473b00
// address: 0x473b00
// body: available
// range: 0x473b00-0x473bf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00473b00(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int in_ECX;
  undefined1 local_4c [4];
  int local_48;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00701b26;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = *(int **)(in_ECX + 0x54);
  if (piVar1 == (int *)0x0) {
    local_3c = 0;
    local_38 = 0;
  }
  else {
    local_3c = piVar1[3];
    local_38 = piVar1[4];
  }
  local_34 = (undefined4 *)0x0;
  local_8 = 0;
  (**(code **)(*piVar1 + 0x10))(local_4c,0,0,2,local_14);
  local_8 = 1;
  if (local_48 == 1) {
    FUN_004766c0(local_4c,param_2);
    FUN_00483ac0(local_30);
    local_8 = CONCAT31(local_8._1_3_,3);
    _eh_vector_destructor_iterator_(local_24,3,4,guard_check_icall);
  }
  else if (local_48 == 2) {
    FUN_00475f70(param_2);
  }
  else {
    FUN_00476000(param_2);
  }
  if (local_34 != (undefined4 *)0x0) {
    (**(code **)*local_34)(1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

