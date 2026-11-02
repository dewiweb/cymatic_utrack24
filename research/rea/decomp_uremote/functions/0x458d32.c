// rea decompile_all
// name: FUN_00458d32
// address: 0x458d32
// body: available
// range: 0x458d32-0x458db0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458d32(void)

{
  int unaff_EDI;
  
  FUN_00458feb();
  FUN_00465317(unaff_EDI + 0xbc);
  FUN_00465317(unaff_EDI + 200);
  FUN_00465317(unaff_EDI + 0xcc);
  FUN_00465317(unaff_EDI + 0xe0);
  FUN_00465317(unaff_EDI + 0xe4);
  FUN_00465317(unaff_EDI + 0xf0);
  FUN_00465317(unaff_EDI + 0xf4);
  FUN_00474839();
  FUN_004c1613(unaff_EDI);
  return;
}

