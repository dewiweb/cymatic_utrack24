// rea decompile_all
// name: FUN_004cba60
// address: 0x4cba60
// body: available
// range: 0x4cba60-0x4cbb58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cba60(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 local_40 [24];
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e1d28;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  thunk_FUN_00472232(DAT_00955fd4 ^ (uint)&stack0xffffffb8);
  local_c = 0;
  FUN_004c8ff2(local_28,local_40);
  FUN_004c0036();
  FUN_004652d6();
  uVar1 = FUN_004d01c2();
  FUN_004cc04c(in_EDX,local_28,uVar1);
  uVar1 = FUN_004ccd8b(local_28,local_40);
  FUN_004cc003(uVar1);
  FUN_004cb766(local_28,local_40);
  local_c._0_1_ = 1;
  FUN_004cb48e(in_EDX);
  local_c._0_1_ = 0;
  FUN_004e37c2();
  FUN_004cba17(local_28,local_40);
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_004cb4bf();
  FUN_004e2f64();
  FUN_004e2f64();
  FUN_004722b6();
  ExceptionList = local_14;
  return;
}

