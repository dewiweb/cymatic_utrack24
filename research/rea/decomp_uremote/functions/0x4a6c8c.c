// rea decompile_all
// name: FUN_004a6c8c
// address: 0x4a6c8c
// body: available
// range: 0x4a6c8c-0x4a6ce8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a6c8c(void)

{
  int *in_EAX;
  int *in_ECX;
  
  if (*in_ECX < in_EAX[2] + *in_EAX) {
    if ((((in_ECX[1] < in_EAX[3] + in_EAX[1]) && (*in_EAX < *in_ECX + in_ECX[2])) &&
        (in_EAX[1] < in_ECX[3] + in_ECX[1])) &&
       (((0 < in_EAX[2] && (0 < in_EAX[3])) && ((0 < in_ECX[2] && (0 < in_ECX[3])))))) {
      return 1;
    }
  }
  return 0;
}

