// rea decompile_all
// name: FUN_0045484d
// address: 0x45484d
// body: available
// range: 0x45484d-0x454b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045484d(void)

{
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e34f3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00467eb1();
  FUN_00467e6f();
  FUN_0045d81a(*(undefined4 *)(in_ECX + 4));
  FUN_00467ef7();
  FUN_00465858();
  local_c = 0;
  FUN_004e99ff();
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f24();
  FUN_00465858();
  local_c = 1;
  FUN_004e99ff();
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f4c();
  FUN_00465858();
  local_c = 2;
  FUN_004e99ff();
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f74();
  FUN_00465858();
  local_c = 3;
  FUN_004e99ff();
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467f9c();
  FUN_00465858();
  local_c = 4;
  FUN_004e99ff();
  local_c = 0xffffffff;
  FUN_004652d6();
  FUN_00467fc4();
  FUN_00465858();
  local_c = 5;
  FUN_004e99ff();
  local_c = 0xffffffff;
  FUN_004652d6();
  *(undefined1 *)(in_ECX + 8) = 0;
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004d076d();
  FUN_004c1eee();
  FUN_004c1613();
  ExceptionList = local_14;
  return;
}

