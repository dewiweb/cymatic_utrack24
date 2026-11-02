// rea decompile_all
// name: FUN_0051eb80
// address: 0x51eb80
// body: available
// range: 0x51eb80-0x51ebf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051eb80(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0054f6b0();
  FUN_00512710(param_1);
  if (*(short *)(in_ECX + -0x9c) != 0) {
    *(undefined2 *)(in_ECX + -0x98) = 0;
  }
  FUN_0054f6f0();
  return;
}

