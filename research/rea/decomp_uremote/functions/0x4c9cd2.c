// rea decompile_all
// name: FUN_004c9cd2
// address: 0x4c9cd2
// body: available
// range: 0x4c9cd2-0x4c9dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c9cd2(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  undefined1 local_44 [4];
  undefined1 local_40 [16];
  undefined1 local_30 [28];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0056;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  thunk_FUN_00472232(DAT_00955fd4 ^ (uint)&stack0xffffffb0);
  local_c = 0;
  FUN_004c8ff2(local_40,local_44);
  FUN_004c0036();
  FUN_004652d6();
  uVar1 = FUN_004c9c4d(local_40,local_30,1);
  local_c._0_1_ = 1;
  FUN_004e2cbe(uVar1);
  FUN_004722b6();
  uVar1 = FUN_004c9c4d(local_40,local_30,0);
  local_c._0_1_ = 2;
  FUN_004e2cbe(uVar1);
  local_c._0_1_ = 0;
  FUN_004722b6();
  FUN_004c9a13(local_40,local_30);
  local_c._0_1_ = 3;
  FUN_004c9627(unaff_EBX);
  FUN_004e37c2();
  uVar1 = FUN_004c99e2(local_30);
  local_c = CONCAT31(local_c._1_3_,4);
  FUN_004d0221(param_1,unaff_EBX,uVar1);
  FUN_004722b6();
  FUN_004722b6();
  ExceptionList = local_14;
  return;
}

