// rea decompile_all
// name: FUN_00438291
// address: 0x438291
// body: available
// range: 0x438291-0x4382cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4382cb to 0x438273 FUN_00438273 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00438291(void)

{
  undefined4 uVar1;
  void *unaff_ESI;
  int unaff_EDI;
  
  _memset(unaff_ESI,0,0xac);
  *(int *)((int)unaff_ESI + 0xa4) = unaff_EDI;
  uVar1 = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined4 *)((int)unaff_ESI + 0x4c) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x50) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa8) = uVar1;
  *(undefined4 *)((int)unaff_ESI + 0x54) = 0;
  *(int *)((int)unaff_ESI + 0x58) = (int)unaff_ESI + 100;
  *(undefined4 *)((int)unaff_ESI + 0x60) = 0x40;
  FUN_00438273();
  return;
}

