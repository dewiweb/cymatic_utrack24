// rea decompile_all
// name: FUN_0045534e
// address: 0x45534e
// body: available
// range: 0x45534e-0x455371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045534e(void)

{
  undefined4 *unaff_ESI;
  
  FUN_004e9394(unaff_ESI,&DAT_0095d718,0);
  *unaff_ESI = CurrentDateTime::MyTextEditor::vftable;
  unaff_ESI[0x1c] = CurrentDateTime::MyTextEditor::vftable;
  unaff_ESI[0x1d] = CurrentDateTime::MyTextEditor::vftable;
  return;
}

