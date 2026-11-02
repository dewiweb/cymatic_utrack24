// rea decompile_all
// name: FUN_00439a91
// address: 0x439a91
// body: available
// range: 0x439a91-0x439aec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x439ac6 to 0x4fe16e FUN_004fe16e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439a91(void)

{
  int in_EAX;
  undefined4 uVar1;
  int *piVar2;
  int unaff_EDI;
  
  if (in_EAX < 0) {
    in_EAX = 0;
  }
  if (*(int *)(unaff_EDI + 0x238) != in_EAX) {
    *(int *)(unaff_EDI + 0x238) = in_EAX;
    if (in_EAX == *(int *)(unaff_EDI + 0x23c)) {
      uVar1 = thunk_FUN_004c1265();
      FUN_004fe17a(uVar1);
      FUN_004fe16e();
      return;
    }
    FUN_004fe1e6();
    piVar2 = (int *)FUN_004c0453();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x84))(*(undefined4 *)(unaff_EDI + 0x238));
    }
  }
  return;
}

