// rea decompile_all
// name: FUN_0043969f
// address: 0x43969f
// body: available
// range: 0x43969f-0x43982d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043969f(void)

{
  int iVar1;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dde30;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004d076d();
  FUN_004d076d();
  FUN_00476850(local_38);
  local_c = 0;
  FUN_0047ce07();
  FUN_0047d535();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0047d5bd();
  FUN_004d076d();
  FUN_0047cda7();
  iVar1 = FUN_004c1221();
  if (iVar1 != 0) {
    FUN_004c1221();
    FUN_00439b17();
    FUN_0047d37e();
  }
  FUN_004768de();
  ExceptionList = local_14;
  return;
}

