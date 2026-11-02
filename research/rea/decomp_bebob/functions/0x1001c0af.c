// rea decompile_all
// name: FUN_1001c0af
// address: 0x1001c0af
// body: available
// range: 0x1001c0af-0x1001c10a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1001c0af(void)

{
  HWND pHVar1;
  CWnd *unaff_EBX;
  int unaff_EBP;
  CDialog *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x28) != unaff_EDI) {
    CWnd::EnableWindow(unaff_EBX,1);
  }
  if (*(int *)(unaff_EBP + -0x2c) != unaff_EDI) {
    EnableWindow(*(HWND *)(unaff_EBP + -0x14),1);
  }
  if (*(int *)(unaff_EBP + -0x14) != unaff_EDI) {
    pHVar1 = GetActiveWindow();
    if (pHVar1 == *(HWND *)(unaff_ESI + 0x20)) {
      SetActiveWindow(*(HWND *)(unaff_EBP + -0x14));
    }
  }
  (**(code **)(*(int *)unaff_ESI + 0x60))();
  CDialog::PostModal(unaff_ESI);
  if (*(int *)(unaff_ESI + 0x78) != unaff_EDI) {
    FreeResource(*(HGLOBAL *)(unaff_EBP + -0x18));
  }
  return *(undefined4 *)(unaff_ESI + 0x60);
}

