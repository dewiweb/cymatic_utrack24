// rea decompile_all
// name: FUN_00471f36
// address: 0x471f36
// body: available
// range: 0x471f36-0x471fa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00471f36(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0x30) != unaff_EDI)) && (unaff_ESI != unaff_EDI)) {
    for (iVar1 = *(int *)(unaff_EDI + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == unaff_ESI) {
        return;
      }
    }
    if (*(int *)(unaff_ESI + 0x30) != 0) {
      FUN_00472d86();
      FUN_00471fa6();
    }
    FUN_00472dda();
    *(int *)(unaff_ESI + 0x30) = unaff_EDI;
    FUN_00472214();
    FUN_00471b36();
    FUN_00471bd6();
  }
  return;
}

