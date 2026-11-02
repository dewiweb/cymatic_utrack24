// rea decompile_all
// name: FUN_004ee1b8
// address: 0x4ee1b8
// body: available
// range: 0x4ee1b8-0x4ee231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004ee1b8(void)

{
  undefined1 uVar1;
  int unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005df906;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004edfc1(DAT_00955fd4 ^ (uint)&stack0xffffffc8);
  local_c = 0;
  uVar1 = FUN_004edff5(unaff_EDI);
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  FUN_004652d6();
  FUN_004670ed();
  ExceptionList = local_14;
  return uVar1;
}

