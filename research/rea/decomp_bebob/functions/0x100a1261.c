// rea decompile_all
// name: CMFCPopupMenuBar::GetCommandTarget
// address: 0x100a1261
// body: available
// range: 0x100a1261-0x100a12a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a129f to 0x1002e5ea CMFCToolBar::GetCommandTarget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CWnd * __thiscall CMFCPopupMenuBar::GetCommandTarget(void)const 
   
   Library: Visual Studio 2010 Release */

CWnd * __thiscall CMFCPopupMenuBar::GetCommandTarget(CMFCPopupMenuBar *this)

{
  CWnd *pCVar1;
  HWND pHVar2;
  
  if (*(int *)(this + 0xcf8) == 0) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar1 = CWnd::FromHandle(pHVar2);
    pCVar1 = (CWnd *)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                        (CObject *)pCVar1);
    if ((pCVar1 == (CWnd *)0x0) || (*(int *)(pCVar1 + 0x124) == 0)) {
      pCVar1 = CMFCToolBar::GetCommandTarget((CMFCToolBar *)this);
      return pCVar1;
    }
  }
  else {
    pCVar1 = (CWnd *)0x0;
  }
  return pCVar1;
}

