// rea decompile_all
// name: CMFCCustomizeMenuButton::UpdateCustomizeButton
// address: 0x100d43be
// body: available
// range: 0x100d43be-0x100d440c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d4408 to 0x1002a56b CMFCToolBar::RedrawCustomizeButton (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCCustomizeMenuButton::UpdateCustomizeButton(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCCustomizeMenuButton::UpdateCustomizeButton(CMFCCustomizeMenuButton *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = GetParent(*(HWND *)(DAT_1016977c + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  if ((pCVar2 != (CWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
    pHVar1 = GetParent(*(HWND *)(DAT_1016977c + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    RedrawWindow(*(HWND *)(pCVar2 + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
  }
  CMFCToolBar::RedrawCustomizeButton(DAT_1016977c);
  return;
}

