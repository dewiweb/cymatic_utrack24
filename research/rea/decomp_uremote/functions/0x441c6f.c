// rea decompile_all
// name: FUN_00441c6f
// address: 0x441c6f
// body: available
// range: 0x441c6f-0x441cd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441c6f(int param_1,char param_2)

{
  int in_ECX;
  
  if (param_2 != '\0') {
    FUN_004d1266(in_ECX + 0x40,0,(double)-*(int *)(param_1 + 0x10),(double)*(int *)(in_ECX + -0x58))
    ;
    FUN_004d1266(in_ECX + 0x140,0,(double)-*(int *)(param_1 + 0x14),(double)*(int *)(in_ECX + -0x54)
                );
  }
  return;
}

