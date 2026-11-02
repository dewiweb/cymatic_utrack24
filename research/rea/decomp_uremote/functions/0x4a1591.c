// rea decompile_all
// name: FUN_004a1591
// address: 0x4a1591
// body: available
// range: 0x4a1591-0x4a15cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1591(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_004a542c();
  *(undefined4 *)(unaff_ESI + 0xc) = param_1;
  *(undefined4 *)(unaff_ESI + 0x10) = param_2;
  *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(unaff_EDI + 8);
  cVar1 = FUN_004a3e2a(unaff_ESI);
  if (cVar1 == '\0') {
    FUN_004a20f5(unaff_ESI,unaff_EDI);
  }
  FUN_004a2136(unaff_ESI);
  return;
}

