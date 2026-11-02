// rea decompile_all
// name: CMFCPopupMenuBar::AdjustLayout
// address: 0x100a0a7c
// body: available
// range: 0x100a0a7c-0x100a0adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenuBar::AdjustLayout(void)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __thiscall CMFCPopupMenuBar::AdjustLayout(CMFCPopupMenuBar *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  
  if ((this != (CMFCPopupMenuBar *)0x0) && (*(int *)(this + 0x20) != 0)) {
    (**(code **)(*(int *)this + 0x3e0))();
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    if (DAT_10166e54 != 0) {
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar2);
      if (pCVar3 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar3 + 0x174))(0);
      }
    }
  }
  return;
}

