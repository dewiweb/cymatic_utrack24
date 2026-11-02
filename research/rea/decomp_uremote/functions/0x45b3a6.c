// rea decompile_all
// name: FUN_0045b3a6
// address: 0x45b3a6
// body: available
// range: 0x45b3a6-0x45b3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b3a6(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 8);
  while( true ) {
    if (iVar1 < 1) {
      return;
    }
    iVar1 = iVar1 + -1;
    if ((*(int *)(unaff_EDI + 8) <= iVar1) && (iVar1 = *(int *)(unaff_EDI + 8) + -1, iVar1 < 0))
    break;
    FUN_004f9b3e();
  }
  return;
}

