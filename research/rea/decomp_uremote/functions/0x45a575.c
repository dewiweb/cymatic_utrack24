// rea decompile_all
// name: FUN_0045a575
// address: 0x45a575
// body: available
// range: 0x45a575-0x45a640 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045a575(void)

{
  int unaff_ESI;
  
  FUN_00465317(unaff_ESI + 0x98);
  FUN_00465317(unaff_ESI + 0x9c);
  FUN_00465317(unaff_ESI + 0xa0);
  FUN_00465317(unaff_ESI + 0xa4);
  FUN_00465317(unaff_ESI + 0xb0);
  FUN_00465317(unaff_ESI + 0xb4);
  FUN_00465317(unaff_ESI + 0xb8);
  FUN_00465317(unaff_ESI + 0xa8);
  FUN_00465317(unaff_ESI + 0xac);
  FUN_00465317(unaff_ESI + 0xbc);
  FUN_00465317(unaff_ESI + 0xd0);
  *(undefined1 *)(unaff_ESI + 0x114) = 0;
  if ((*(byte *)(unaff_ESI + 400) & 2) != 0) {
    (**(code **)(*(int *)(unaff_ESI + 0x128) + 0x28))(0);
  }
  *(undefined4 *)(unaff_ESI + 0xcc) = 0;
  FUN_004c1613(unaff_ESI);
  return;
}

