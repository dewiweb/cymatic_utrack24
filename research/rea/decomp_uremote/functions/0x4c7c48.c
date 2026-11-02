// rea decompile_all
// name: FUN_004c7c48
// address: 0x4c7c48
// body: available
// range: 0x4c7c48-0x4c7c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4c7c75 to 0x4c7e27 FUN_004c7e27 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c7c48(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  int unaff_EDI;
  
  piVar1 = (int *)(unaff_EDI + 0xc0);
  if (*piVar1 != in_EAX) {
    *piVar1 = in_EAX;
    FUN_004c1613(unaff_EDI);
    if (*piVar1 == 2) {
      uVar2 = FUN_00467ee3();
      *(undefined4 *)(unaff_EDI + 0xa0) = 0;
      *(undefined4 *)(unaff_EDI + 0x9c) = uVar2;
    }
    FUN_004c7e27();
    return;
  }
  return;
}

