// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnMouseMove
// address: 0x100a2cbc
// body: available
// range: 0x100a2cbc-0x100a2e65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnMouseMove
          (CMFCRibbonPanelMenuBar *this,uint param_1,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 local_14;
  undefined4 local_10;
  tagPOINT local_c;
  
  CMFCPopupMenuBar::OnMouseMove((CMFCPopupMenuBar *)this,param_1,param_3,param_4);
  if ((((*(int **)(this + 0xe20) != (int *)0x0) && (DAT_10166c3c != 0)) &&
      (iVar2 = (**(code **)(**(int **)(this + 0xe20) + 0x18))(param_3,param_4), iVar2 != -1)) &&
     (iVar2 != *(int *)(this + 0xb98))) {
    *(int *)(this + 0xb98) = iVar2;
    SetTimer(*(HWND *)(this + 0x20),0x14,500,(TIMERPROC)0x0);
  }
  iVar2 = *(int *)(this + 0xe20);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 0)) && (iVar2 = FUN_100b3c4d(iVar2), iVar2 != 0))
  {
    return;
  }
  if ((*(int *)(this + 0xe30) != 0) && (iVar2 = FUN_100abaa4(*(int *)(this + 0xe30)), iVar2 != 0)) {
    return;
  }
  iVar2 = CSize::operator!=((CSize *)(this + 0xda0),(tagSIZE)0xffffffffffffffff);
  if (iVar2 != 0) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    lVar3 = _labs(local_c.x - *(int *)(this + 0xda0));
    if ((lVar3 < 10) && (lVar3 = _labs(local_c.y - *(int *)(this + 0xda4)), lVar3 < 10)) {
      return;
    }
    *(undefined4 *)(this + 0xda0) = 0xffffffff;
    *(undefined4 *)(this + 0xda4) = 0xffffffff;
  }
  if ((param_3 == -1) && (param_4 == -1)) {
    *(undefined4 *)(this + 0xd58) = 0;
  }
  else if (*(int *)(this + 0xd58) == 0) {
    local_c.x = *(LONG *)(this + 0x20);
    *(undefined4 *)(this + 0xd58) = 1;
    local_14 = 0x10;
    local_10 = 2;
    local_c.y = -1;
    AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_14);
    if (((*(int *)(this + 0xe30) == 0) && (iVar2 = FUN_100b3c08(*(int *)(this + 0xe20)), iVar2 != 0)
        ) && ((param_1 & 1) == 0)) {
      *(undefined4 *)(iVar2 + 0x74) = 0;
    }
  }
  if (*(int **)(this + 0xe30) == (int *)0x0) {
    piVar1 = *(int **)(this + 0xe20);
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = piVar1[3], (**(code **)(*piVar1 + 0x70))(1,param_3,param_4), iVar2 == 0)) {
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
    }
  }
  else {
    (**(code **)(**(int **)(this + 0xe30) + 0x20))(param_3,param_4);
  }
  return;
}

