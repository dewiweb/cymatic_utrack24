// rea decompile_all
// name: FUN_00411e0d
// address: 0x411e0d
// body: available
// range: 0x411e0d-0x411e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411e0d(undefined4 param_1)

{
  undefined4 extraout_EDX;
  int *unaff_EDI;
  
  FUN_00411ce4();
  *unaff_EDI = *unaff_EDI + -1;
  if ((code *)unaff_EDI[8] != (code *)0x0) {
    (*(code *)unaff_EDI[8])(extraout_EDX,unaff_EDI[3]);
  }
  FUN_00411a5c(param_1);
  return;
}

