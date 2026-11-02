// rea decompile_all
// name: CMFCAutoHideBar::OnTimer
// address: 0x100c442d
// body: available
// range: 0x100c442d-0x100c44c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCAutoHideBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCAutoHideBar::OnTimer(CMFCAutoHideBar *this,uint param_1)

{
  CMFCAutoHideButton *this_00;
  BOOL BVar1;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (param_1 == 1) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    this_00 = ButtonFromPoint(this,local_c.x,local_c.y);
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2cc));
    *(undefined4 *)(this + 0x2cc) = 0;
    if ((this_00 == (CMFCAutoHideButton *)0x0) || (*(int *)(this + 0x2c8) == 0)) {
      *(undefined4 *)(this + 0x2c8) = 0;
    }
    else {
      *(undefined4 *)(this + 0x2c8) = 0;
      BVar1 = IsWindowVisible(*(HWND *)(*(int *)(this_00 + 0x2c) + 0x20));
      if (BVar1 == 0) {
        CMFCAutoHideButton::ShowAttachedWindow(this_00,1);
      }
    }
  }
  CWnd::Default((CWnd *)this);
  return;
}

