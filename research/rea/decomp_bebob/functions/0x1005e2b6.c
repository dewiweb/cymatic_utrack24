// rea decompile_all
// name: CMFCPopupMenu::ShowAllCommands
// address: 0x1005e2b6
// body: available
// range: 0x1005e2b6-0x1005e3b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPopupMenu::ShowAllCommands(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::ShowAllCommands(CMFCPopupMenu *this)

{
  CObject *pCVar1;
  CMFCToolBar *this_00;
  BOOL BVar2;
  
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                              *(CObject **)(this + 0x148));
  if (pCVar1 != (CObject *)0x0) {
    this_00 = (CMFCToolBar *)(**(code **)(*(int *)this + 0x1c0))();
    CMFCToolBar::SetHot(this_00,(CMFCToolBarButton *)0x0);
    CMFCMenuBar::SetShowAllCommands(1);
    AFXPlaySystemSound(2);
    CWnd::ShowWindow((CWnd *)this,0);
    *(undefined4 *)(this + 0xebc) = 0;
    if (((CGdiObject *)(this + 0xfc4) != (CGdiObject *)0x0) && (*(int *)(this + 0xfc8) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0xfc4));
    }
    if (((CGdiObject *)(this + 0xfcc) != (CGdiObject *)0x0) && (*(int *)(this + 0xfd0) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0xfcc));
    }
    *(undefined4 *)(this + 0x128) = *(undefined4 *)(this + 0x130);
    *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0x134);
    (**(code **)(*(int *)this + 0x1ec))();
    if (*(int *)(this + 0xef0) != 0) {
      AdjustScroll(this,0);
      SetScrollBar(this);
    }
    UpdateBottomWindows(this,0);
    CWnd::ShowWindow((CWnd *)this,4);
    if (*(int *)(pCVar1 + 0x6c) != 0) {
      BVar2 = IsWindow(*(HWND *)(*(int *)(pCVar1 + 0x6c) + 0x20));
      if (BVar2 != 0) {
        InvalidateRect(*(HWND *)(*(int *)(pCVar1 + 0x6c) + 0x20),(RECT *)(pCVar1 + 0x54),1);
        UpdateWindow(*(HWND *)(*(int *)(pCVar1 + 0x6c) + 0x20));
      }
    }
  }
  return;
}

