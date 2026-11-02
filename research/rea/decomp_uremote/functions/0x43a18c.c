// rea decompile_all
// name: FUN_0043a18c
// address: 0x43a18c
// body: available
// range: 0x43a18c-0x43a1ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0043a18c(undefined4 param_1)

{
  int in_EDX;
  undefined4 *extraout_EDX;
  
  *(undefined4 *)(in_EDX + 4) = 0;
  FUN_00476041();
  FUN_004652cd();
  extraout_EDX[4] = 0;
  extraout_EDX[5] = 0;
  extraout_EDX[6] = 0;
  extraout_EDX[7] = 0;
  extraout_EDX[8] = 0;
  extraout_EDX[9] = 0;
  extraout_EDX[10] = 0;
  extraout_EDX[0xb] = 0;
  extraout_EDX[0xc] = 0;
  *extraout_EDX = param_1;
  return extraout_EDX;
}

