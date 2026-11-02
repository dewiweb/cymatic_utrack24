// rea decompile_all
// name: FUN_0043bae5
// address: 0x43bae5
// body: available
// range: 0x43bae5-0x43bc2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bae5(void)

{
  int unaff_ESI;
  
  FUN_004652e4();
  FUN_004d076d();
  FUN_0043a1cb(*(undefined4 *)(unaff_ESI + 0xb4));
  FUN_00439cd1();
  FUN_004652e4();
  FUN_004d076d();
  FUN_0043a1cb(*(int *)(unaff_ESI + 0xb4) + 1);
  FUN_00439cd1();
  FUN_0043a2d2();
  FUN_00439cd1();
  FUN_0043a322();
  FUN_00439cd1();
  FUN_0043a2d2();
  FUN_00439cd1();
  FUN_0043a322();
  FUN_00439cd1();
  FUN_0043a2fa();
  FUN_00439cd1();
  FUN_0043a2fa();
  FUN_00439cd1();
  FUN_0043a322();
  FUN_00439cd1();
  *(int *)(unaff_ESI + 0xb4) = *(int *)(unaff_ESI + 0xb4) + 2;
  return;
}

