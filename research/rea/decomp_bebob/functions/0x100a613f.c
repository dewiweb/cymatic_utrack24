// rea decompile_all
// name: CMFCOutlookBarTabCtrl::EnableScrollButtons
// address: 0x100a613f
// body: available
// range: 0x100a613f-0x100a6225 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCOutlookBarTabCtrl::EnableScrollButtons(int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCOutlookBarTabCtrl::EnableScrollButtons
          (CMFCOutlookBarTabCtrl *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = IsMode2003(this);
  if (iVar1 != 0) {
    param_1 = 0;
  }
  iVar1 = *(int *)(this + 0x218);
  *(int *)(this + 0x218) = param_1;
  if (param_1 == 0) {
    CWnd::ShowWindow((CWnd *)(this + 0xf48),0);
    CWnd::ShowWindow((CWnd *)(this + 0x1698),0);
  }
  else {
    CWnd::ShowWindow((CWnd *)(this + 0xf48),4);
    CWnd::EnableWindow((CWnd *)(this + 0xf48),param_2);
    CMFCButton::SetStdImage((CMFCButton *)(this + 0xf48),0x18,(uint)(param_2 == 0),0);
    CWnd::ShowWindow((CWnd *)(this + 0x1698),4);
    CWnd::EnableWindow((CWnd *)(this + 0x1698),param_3);
    CMFCButton::SetStdImage((CMFCButton *)(this + 0x1698),0xd,(uint)(param_3 == 0),0);
  }
  RedrawWindow(*(HWND *)(this + 0xf68),(RECT *)0x0,(HRGN)0x0,0x105);
  RedrawWindow(*(HWND *)(this + 0x16b8),(RECT *)0x0,(HRGN)0x0,0x105);
  if (iVar1 != param_1) {
    (**(code **)(*(int *)this + 0x180))();
  }
  return;
}

