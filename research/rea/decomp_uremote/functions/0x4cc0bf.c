// rea decompile_all
// name: FUN_004cc0bf
// address: 0x4cc0bf
// body: available
// range: 0x4cc0bf-0x4cc103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cc0bf(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  
  FUN_004ccd51(param_1,unaff_ESI + 0xc4,param_2);
  FUN_004ccd51(param_1,unaff_ESI + 0x100,param_2);
  FUN_004cce5e();
  return;
}

