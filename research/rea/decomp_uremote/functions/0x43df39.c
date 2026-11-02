// rea decompile_all
// name: FUN_0043df39
// address: 0x43df39
// body: available
// range: 0x43df39-0x43df95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43df8f to 0x43f35a FUN_0043f35a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043df39(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  
  if (in_EAX < -0x37) {
    in_EAX = -0x40;
  }
  iVar1 = FUN_0043d950(unaff_ESI);
  if (iVar1 <= *(int *)(unaff_ESI + 0x98)) {
    *(int *)(unaff_ESI + 0x98) = iVar1;
    *(undefined4 *)(unaff_ESI + 0x9c) = 4;
    if (iVar1 < *(int *)(unaff_ESI + 0x94)) {
      *(int *)(unaff_ESI + 0x94) = iVar1;
      *(undefined4 *)(unaff_ESI + 0x90) = 0x14;
    }
  }
  if ((*(int *)(unaff_ESI + 0x88) != 0) && (in_EAX == 0)) {
    FUN_0043f35a();
    return;
  }
  return;
}

