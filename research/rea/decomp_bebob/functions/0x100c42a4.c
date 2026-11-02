// rea decompile_all
// name: CMFCAutoHideBar::OnMouseMove
// address: 0x100c42a4
// body: available
// range: 0x100c42a4-0x100c43b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCAutoHideBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCAutoHideBar::OnMouseMove(CMFCAutoHideBar *this)

{
  CMFCAutoHideButton *pCVar1;
  CMFCAutoHideButton *pCVar2;
  BOOL BVar3;
  UINT_PTR UVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(this + 0x20),&local_c);
  pCVar2 = ButtonFromPoint(this,local_c.x,local_c.y);
  if (*(int *)(this + 0x2d0) == 0) {
    local_14 = *(undefined4 *)(this + 0x20);
    local_10 = 0xffffffff;
    *(undefined4 *)(this + 0x2d0) = 1;
    local_1c = 0x10;
    local_18 = 2;
    AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_1c);
  }
  if ((pCVar2 != (CMFCAutoHideButton *)0x0) && (*(int *)(this + 0x2c8) == 0)) {
    BVar3 = IsWindowVisible(*(HWND *)(*(int *)(pCVar2 + 0x2c) + 0x20));
    if (BVar3 == 0) {
      *(undefined4 *)(this + 0x2c8) = 1;
      if (*(UINT_PTR *)(this + 0x2cc) != 0) {
        KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2cc));
      }
      UVar4 = SetTimer(*(HWND *)(this + 0x20),1,DAT_101622e4,(TIMERPROC)0x0);
      *(UINT_PTR *)(this + 0x2cc) = UVar4;
    }
    pCVar1 = *(CMFCAutoHideButton **)(this + 0x2c4);
    if ((pCVar1 != (CMFCAutoHideButton *)0x0) && (pCVar1 != pCVar2)) {
      (**(code **)(*(int *)pCVar1 + 0x18))(0);
    }
    if (pCVar2 != *(CMFCAutoHideButton **)(this + 0x2c4)) {
      (**(code **)(*(int *)pCVar2 + 0x18))(1);
      *(CMFCAutoHideButton **)(this + 0x2c4) = pCVar2;
      UpdateWindow(*(HWND *)(this + 0x20));
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    }
  }
  return;
}

