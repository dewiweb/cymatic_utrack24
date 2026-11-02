// rea decompile_all
// name: FUN_00475fbe
// address: 0x475fbe
// body: available
// range: 0x475fbe-0x476040 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00475fbe(undefined4 param_1)

{
  float *in_EAX;
  
  FUN_004760cd(in_EAX[2] * 0.621 + in_EAX[1] * 0.9563 + *in_EAX,
               (*in_EAX - in_EAX[1] * 0.2721) - in_EAX[2] * 0.6474,
               in_EAX[2] * 1.7046 + (*in_EAX - in_EAX[1] * 1.107),in_EAX[3]);
  return param_1;
}

