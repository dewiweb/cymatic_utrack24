// rea decompile_all
// name: FUN_004914f8
// address: 0x4914f8
// body: available
// range: 0x4914f8-0x491534 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49152f to EXTERNAL:0x6e KERNEL32.DLL::ExitProcess (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004914f8(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = "libpng error: %s";
  iVar1 = FUN_005b2818("libpng error: %s",&DAT_009114df);
  _fprintf((FILE *)(iVar1 + 0x40),pcVar2);
  pcVar2 = "\n";
  iVar1 = FUN_005b2818();
  _fprintf((FILE *)(iVar1 + 0x40),pcVar2);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}

