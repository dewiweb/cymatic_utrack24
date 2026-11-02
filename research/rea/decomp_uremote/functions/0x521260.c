// rea decompile_all
// name: FUN_00521260
// address: 0x521260
// body: available
// range: 0x521260-0x5212d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00521260(void)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005cfce2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  FUN_005219b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8._0_1_ = 1;
  FUN_0054e580();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00559ab0();
  local_8 = 0xffffffff;
  FUN_0055a8c0();
  ExceptionList = local_10;
  return;
}

