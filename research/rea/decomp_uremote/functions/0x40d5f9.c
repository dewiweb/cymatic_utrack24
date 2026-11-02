// rea decompile_all
// name: FUN_0040d5f9
// address: 0x40d5f9
// body: available
// range: 0x40d5f9-0x40d657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d653 to 0x40d5dd FUN_0040d5dd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040d5f9(void)

{
  int unaff_ESI;
  
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x18));
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x1c));
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x20));
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x28));
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x34));
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  FUN_0040d5dd();
  return;
}

