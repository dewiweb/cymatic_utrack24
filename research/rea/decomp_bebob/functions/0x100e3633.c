// rea decompile_all
// name: CMFCToolBarsListPropertyPage::OnSelchangeToolbarList
// address: 0x100e3633
// body: available
// range: 0x100e3633-0x100e3720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsListPropertyPage::OnSelchangeToolbarList(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsListPropertyPage::OnSelchangeToolbarList(CMFCToolBarsListPropertyPage *this)

{
  WPARAM wParam;
  int *piVar1;
  int iVar2;
  
  wParam = SendMessageW(*(HWND *)(this + 0x30c),0x188,0,0);
  if (wParam == 0xffffffff) {
    *(undefined4 *)(this + 0x380) = 0;
    CWnd::EnableWindow((CWnd *)(this + 0x278),0);
    CWnd::EnableWindow((CWnd *)(this + 0x204),0);
    CWnd::EnableWindow((CWnd *)(this + 0x11c),0);
    CWnd::EnableWindow((CWnd *)(this + 0xa8),0);
  }
  else {
    piVar1 = (int *)SendMessageW(*(HWND *)(this + 0x30c),0x199,wParam,0);
    *(int **)(this + 0x380) = piVar1;
    iVar2 = (**(code **)(*piVar1 + 900))();
    CWnd::EnableWindow((CWnd *)(this + 0x278),iVar2);
    iVar2 = CMFCToolBar::IsUserDefined(*(CMFCToolBar **)(this + 0x380));
    CWnd::EnableWindow((CWnd *)(this + 0x204),iVar2);
    iVar2 = CMFCToolBar::IsUserDefined(*(CMFCToolBar **)(this + 0x380));
    CWnd::EnableWindow((CWnd *)(this + 0x11c),iVar2);
    iVar2 = (**(code **)(**(int **)(this + 0x380) + 0x378))();
    CWnd::EnableWindow((CWnd *)(this + 0xa8),iVar2);
    *(undefined4 *)(this + 0x37c) = *(undefined4 *)(*(int *)(this + 0x380) + 0xb14);
    CWnd::UpdateData((CWnd *)this,0);
  }
  return;
}

