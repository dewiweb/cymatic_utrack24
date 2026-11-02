// rea decompile_all
// name: FUN_004f9f4d
// address: 0x4f9f4d
// body: available
// range: 0x4f9f4d-0x4f9f7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9f4d(undefined4 param_1,undefined4 param_2,char param_3)

{
  int in_EDX;
  
  if (param_3 == '\0') {
    *(undefined4 *)(in_EDX + 0xa0) = 0x7fffffff;
  }
  FUN_00467adf();
  FUN_0047479c();
  return;
}

