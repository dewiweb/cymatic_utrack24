// rea decompile_all
// name: FUN_004996e4
// address: 0x4996e4
// body: available
// range: 0x4996e4-0x49971c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x499709 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004996e4(void)

{
  byte in_AL;
  byte bVar1;
  int unaff_ESI;
  
  bVar1 = in_AL & 0xb;
  if (bVar1 == 0) {
    if ((*(uint *)(unaff_ESI + 0x28) & 0x8000) == 0) {
      FUN_004913a9();
      bVar1 = *(byte *)(unaff_ESI + 0x28) & 0xb;
      if ((*(byte *)(unaff_ESI + 0x28) & 0xb) != 0) goto LAB_00499712;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
LAB_00499712:
  for (; bVar1 != (-bVar1 & bVar1); bVar1 = bVar1 & ~(-bVar1 & bVar1)) {
  }
  return;
}

