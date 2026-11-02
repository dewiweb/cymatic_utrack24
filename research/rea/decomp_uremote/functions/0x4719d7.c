// rea decompile_all
// name: FUN_004719d7
// address: 0x4719d7
// body: available
// range: 0x4719d7-0x471a24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004719d7(void)

{
  int iVar1;
  int unaff_EDI;
  undefined1 local_14 [16];
  
  if (0 < *(int *)(unaff_EDI + 0xc)) {
    FUN_00472232();
    iVar1 = *(int *)(unaff_EDI + 0xc);
    while (0 < iVar1) {
      iVar1 = iVar1 + -1;
      if ((*(int *)(unaff_EDI + 0xc) <= iVar1) &&
         (iVar1 = *(int *)(unaff_EDI + 0xc) + -1, iVar1 < 0)) break;
      FUN_004f9b3e(local_14);
    }
    FUN_00471876();
  }
  return;
}

