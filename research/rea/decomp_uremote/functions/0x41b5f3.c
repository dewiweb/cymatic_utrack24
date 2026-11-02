// rea decompile_all
// name: FUN_0041b5f3
// address: 0x41b5f3
// body: available
// range: 0x41b5f3-0x41b612 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041b5f3(void)

{
  uint *in_EAX;
  uint in_ECX;
  
  if (*in_EAX <= in_ECX) {
    return 0;
  }
  return (uint)*(byte *)(in_EAX[2] + ((int)in_ECX >> 3)) & 0x80 >> ((byte)in_ECX & 7);
}

