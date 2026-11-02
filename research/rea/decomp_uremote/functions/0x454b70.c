// rea decompile_all
// name: FUN_00454b70
// address: 0x454b70
// body: available
// range: 0x454b70-0x454eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00454b70(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e34a8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0045ef8e();
  FUN_00467ef7();
  uVar1 = FUN_00465858();
  local_c = 0;
  FUN_004e99ff(uVar1);
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f24();
  uVar1 = FUN_00465858();
  local_c = 1;
  FUN_004e99ff(uVar1);
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f4c();
  uVar1 = FUN_00465858();
  local_c = 2;
  FUN_004e99ff(uVar1);
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f74();
  uVar1 = FUN_00465858();
  local_c = 3;
  FUN_004e99ff(uVar1);
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f9c();
  uVar1 = FUN_00465858();
  local_c = 4;
  FUN_004e99ff(uVar1);
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467fc4();
  uVar1 = FUN_00465858();
  local_c = 5;
  FUN_004e99ff(uVar1);
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_0045efa9();
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  FUN_004d076d();
  FUN_004c1eee(0x1000206);
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  FUN_004d076d();
  FUN_004c1eee(0x1000206);
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  FUN_004d076d();
  FUN_004c1eee(0x1000206);
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  FUN_004d076d();
  FUN_004c1eee(0x1000206);
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  FUN_004d076d();
  FUN_004c1eee(0x1000206);
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  FUN_004d076d();
  FUN_004c1eee(0x1000206);
  *(undefined1 *)(in_ECX + 0x88) = 0;
  FUN_004c1613();
  ExceptionList = local_14;
  return;
}

