// rea decompile_all
// name: FUN_00523650
// address: 0x523650
// body: available
// range: 0x523650-0x523856 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00523650(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cff5d;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::CCerbere::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  FUN_005157a0(uVar1);
  local_8 = 0;
  FUN_005157a0();
  local_8._0_1_ = 1;
  FUN_005157a0();
  local_8._0_1_ = 2;
  FUN_005157a0();
  local_8._0_1_ = 3;
  FUN_005157a0();
  local_8._0_1_ = 4;
  FUN_005157a0();
  local_8._0_1_ = 5;
  FUN_005157a0();
  local_8._0_1_ = 6;
  FUN_005157a0();
  local_8._0_1_ = 7;
  FUN_005157a0();
  local_8._0_1_ = 8;
  FUN_005157a0();
  local_8._0_1_ = 9;
  FUN_005157a0();
  local_8._0_1_ = 10;
  FUN_005157a0();
  local_8._0_1_ = 0xb;
  FUN_005157a0();
  local_8._0_1_ = 0xc;
  FUN_005157a0();
  local_8._0_1_ = 0xd;
  FUN_005157a0();
  local_8._0_1_ = 0xe;
  FUN_005157a0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_005157a0();
  in_ECX[0x109] = param_1;
  *(undefined2 *)(in_ECX + 0x10a) = 0;
  in_ECX[0x10b] = 0;
  *(undefined2 *)(in_ECX + 0x10c) = 0;
  in_ECX[0x10d] = 0;
  in_ECX[0x10e] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

