// rea decompile_all
// name: CMFCButton::OnLButtonDown
// address: 0x1005266d
// body: available
// range: 0x1005266d-0x1005271c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCButton::OnLButtonDown(CMFCButton *this)

{
  LPARAM lParam;
  HWND pHVar1;
  CWnd *pCVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x94) == 0) {
    *(undefined4 *)(this + 0xa0) = 1;
    *(undefined4 *)(this + 0xa4) = 1;
    *(undefined4 *)(this + 0xa8) = 1;
    if (*(int *)(this + 0xac) == 0) {
      pHVar1 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar1);
      *(undefined4 *)(this + 0xac) = 1;
    }
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    if (0 < (int)*(UINT *)(this + 0xd0)) {
      SetTimer(*(HWND *)(this + 0x20),1,*(UINT *)(this + 0xd0),(TIMERPROC)0x0);
    }
  }
  else {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (pCVar2 != (CWnd *)0x0) {
      lParam = *(LPARAM *)(this + 0x20);
      uVar3 = CWnd::GetDlgCtrlID((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x111,uVar3 & 0xffff,lParam);
    }
  }
  CWnd::Default((CWnd *)this);
  return;
}

