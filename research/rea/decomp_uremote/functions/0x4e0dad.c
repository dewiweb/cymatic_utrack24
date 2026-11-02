// rea decompile_all
// name: FUN_004e0dad
// address: 0x4e0dad
// body: available
// range: 0x4e0dad-0x4e0e02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e0dad(int param_1)

{
  char cVar1;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = param_1 + 0x30;
  uStack_20 = 0x4e0dc9;
  FUN_004d076d();
  uStack_20 = 0x4e0dd0;
  FUN_004e0e9f();
  iStack_1c = 0x4e0dda;
  cVar1 = FUN_004e0e03();
  if (cVar1 != '\0') {
    iStack_1c = 0x4e0de8;
    FUN_0047479c();
    FUN_004c6d5f(&uStack_20);
    FUN_004e1b15();
  }
  return;
}

