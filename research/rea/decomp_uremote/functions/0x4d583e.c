// rea decompile_all
// name: FUN_004d583e
// address: 0x4d583e
// body: available
// range: 0x4d583e-0x4d5a4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d583e(void)

{
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc019;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004d3044();
  FUN_0047620f();
  FUN_004d076d();
  FUN_00476850(local_38);
  local_c = 0;
  FUN_0047ce07();
  local_c = 0xffffffff;
  FUN_004768de();
  FUN_0047d187();
  FUN_0047888f();
  local_c = 1;
  FUN_00479368();
  FUN_004d3044();
  FUN_0047620f();
  FUN_0047cda7();
  FUN_0047d2ae();
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

