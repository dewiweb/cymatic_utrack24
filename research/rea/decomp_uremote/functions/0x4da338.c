// rea decompile_all
// name: FUN_004da338
// address: 0x4da338
// body: available
// range: 0x4da338-0x4da493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004da338(void)

{
  int iVar1;
  undefined1 local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005db0ad;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004d076d();
  FUN_0047d23a();
  FUN_004c2047();
  FUN_004f5b6b();
  FUN_0047604f();
  FUN_0047604f();
  FUN_00476850(local_58);
  local_c = 0;
  FUN_0047ce07();
  local_c = 0xffffffff;
  FUN_004768de();
  FUN_0047d170();
  FUN_0047604f();
  FUN_0047cda7();
  FUN_004f5c0c();
  FUN_0047d170();
  iVar1 = FUN_004e7d66();
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_004e7d90();
    FUN_004f5bd0();
    FUN_0047d170();
  }
  ExceptionList = local_14;
  return;
}

