// rea decompile_all
// name: CMFCPopupMenu::OnTimer
// address: 0x1005e037
// body: available
// range: 0x1005e037-0x1005e2b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnTimer(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::OnTimer(CMFCPopupMenu *this,uint param_1)

{
  POINT pt;
  POINT pt_00;
  CMFCPopupMenuBar *this_00;
  CMFCToolBarMenuButton *pCVar1;
  BOOL BVar2;
  int iVar3;
  ANIMATION_TYPE AVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar6;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  this_00 = (CMFCPopupMenuBar *)(**(code **)(*(int *)this + 0x1c0))();
  if (param_1 != 1) {
    if (param_1 == 2) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(this + 0x20),&local_c);
      pCVar1 = GetSelItem(this);
      if (pCVar1 != (CMFCToolBarMenuButton *)0x0) {
        (**(code **)(*(int *)pCVar1 + 0x58))();
      }
      iVar3 = *(int *)(this_00 + 0xcd4);
      pt.y = local_c.y;
      pt.x = local_c.x;
      BVar2 = PtInRect((RECT *)(this + 0xef8),pt);
      if ((BVar2 == 0) || (-1 < *(int *)(this + 0xf18))) {
        pt_00.y = local_c.y;
        pt_00.x = local_c.x;
        BVar2 = PtInRect((RECT *)(this + 0xf08),pt_00);
        if ((BVar2 == 0) || (*(int *)(this + 0xf18) < 1)) {
          KillTimer(*(HWND *)(this + 0x20),2);
          *(undefined4 *)(this + 0xf18) = 0;
          InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xf08),1);
          InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xef8),1);
          goto LAB_1005e2a8;
        }
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      CMFCPopupMenuBar::SetOffset(this_00,iVar3);
      AdjustScroll(this,0);
    }
    goto LAB_1005e2a8;
  }
  if (*(int *)(this + 0xee8) != 0) goto LAB_1005e2a8;
  local_c.y = _clock();
  uVar6 = FUN_100f8660(extraout_ECX,extraout_EDX);
  iVar3 = (int)uVar6;
  AVar4 = GetAnimationType(0);
  if (AVar4 == 1) {
    iVar5 = (**(code **)(*(int *)this_00 + 0x358))();
    *(int *)(this + 0xed8) = *(int *)(this + 0xed8) + iVar5 * iVar3;
LAB_1005e1bb:
    iVar5 = (**(code **)(*(int *)this_00 + 0x354))();
    *(int *)(this + 0xedc) = *(int *)(this + 0xedc) + iVar5 * iVar3;
  }
  else {
    if (AVar4 == 2) goto LAB_1005e1bb;
    if ((AVar4 == 3) &&
       (*(int *)(this + 0xf24) = *(int *)(this + 0xf24) + 10,
       (iVar3 + 10) * 10 < *(int *)(this + 0xf24))) {
      *(undefined4 *)(this + 0xf24) = 0x65;
    }
  }
  AVar4 = GetAnimationType(0);
  if ((((AVar4 != 3) && (*(int *)(this + 0x13c) <= *(int *)(this + 0xedc) - *(int *)(this + 0xfc0)))
      || ((AVar4 == 1 && (*(int *)(this + 0x138) <= *(int *)(this + 0xed8) - *(int *)(this + 0xfc0))
          ))) || ((AVar4 == 3 && (100 < *(int *)(this + 0xf24))))) {
    *(int *)(this + 0xed8) = *(int *)(this + 0x138) + *(int *)(this + 0xfc0);
    *(int *)(this + 0xedc) = *(int *)(this + 0x13c) + *(int *)(this + 0xfc0);
    KillTimer(*(HWND *)(this + 0x20),1);
    (**(code **)(*(int *)this_00 + 0x234))(0,0,0,0,0,0x5f,0);
    ValidateRect(*(HWND *)(this_00 + 0x20),(RECT *)0x0);
    *(undefined4 *)(this + 0xee8) = 1;
    if ((*(int *)(this + 0xfc0) != 0) &&
       ((AVar4 = GetAnimationType(0), AVar4 != 3 && (*(int *)(this + 0xea4) == 2)))) {
      UpdateShadow(this,(tagRECT *)0x0);
    }
  }
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
  _DAT_1016844c = (CMFCPopupMenu *)local_c.y;
LAB_1005e2a8:
  CWnd::Default((CWnd *)this);
  return;
}

