// rea decompile_all
// name: CMFCPopupMenu::OnKeyDown
// address: 0x1005e3f4
// body: available
// range: 0x1005e3f4-0x1005e7a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnKeyDown(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::OnKeyDown(CMFCPopupMenu *this,uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  ushort uVar2;
  CMFCPopupMenuBar *this_00;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ANIMATION_TYPE AVar7;
  CMFCToolBarMenuButton *pCVar8;
  CMFCToolBarMenuButton *pCVar9;
  CMFCToolBar *pCVar10;
  CMFCPopupMenu *pCVar11;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  this_00 = (CMFCPopupMenuBar *)(**(code **)(*(int *)this + 0x1c0))();
  bVar1 = false;
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar3 & 0x400000) == 0) {
LAB_1005e479:
    if (0x25 < param_1) goto LAB_1005e439;
    if (param_1 == 0x25) {
      pCVar10 = GetParentToolBar(this);
      if (pCVar10 != (CMFCToolBar *)0x0) {
        (**(code **)(*(int *)pCVar10 + 0x398))();
        AVar7 = DAT_10168438;
        goto LAB_1005e792;
      }
      AVar7 = DAT_10168438;
      if ((*(int **)(this + 0x148) == (int *)0x0) ||
         (iVar4 = (**(code **)(**(int **)(this + 0x148) + 0x70))(), AVar7 = DAT_10168438, iVar4 == 0
         )) goto LAB_1005e792;
      iVar4 = 0;
LAB_1005e5b7:
      CloseMenu(this,iVar4);
      AVar7 = DAT_10168438;
      goto LAB_1005e792;
    }
    if (param_1 == 0xd) goto LAB_1005e4b1;
    if (param_1 == 0x1b) {
      *(undefined4 *)(this + 0x10b4) = 1;
      iVar4 = 1;
      goto LAB_1005e5b7;
    }
    if (param_1 < 0x21) goto LAB_1005e451;
    if (0x22 < param_1) {
      if (0x24 < param_1) goto LAB_1005e451;
      goto LAB_1005e4a7;
    }
    if (*(int *)(this + 0xef4) == 0) goto LAB_1005e451;
    (**(code **)(*(int *)this_00 + 0x3fc))(param_1);
  }
  else {
    if (param_1 != 0x25) {
      if (param_1 == 0x27) {
        param_1 = 0x25;
      }
      goto LAB_1005e479;
    }
    param_1 = 0x27;
LAB_1005e439:
    if (param_1 != 0x26) {
      if (param_1 == 0x27) {
        AVar7 = GetAnimationType(0);
        DAT_10168438 = 0;
        pCVar8 = GetSelItem(this);
        if (((pCVar8 == (CMFCToolBarMenuButton *)0x0) ||
            (((*(int *)(pCVar8 + 0x20) != -1 && (*(int *)(pCVar8 + 0x20) != 0)) &&
             (iVar4 = (**(code **)(*(int *)pCVar8 + 0xdc))(), iVar4 == 0)))) ||
           (iVar4 = (**(code **)(*(int *)pCVar8 + 200))(0), iVar4 == 0)) {
          pCVar10 = GetParentToolBar(this);
          if ((pCVar10 == (CMFCToolBar *)0x0) ||
             (iVar4 = CObject::IsKindOf((CObject *)pCVar10,
                                        (CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40
                                       ), iVar4 != 0)) {
            pCVar11 = GetParentPopupMenu(this);
            if (pCVar11 != (CMFCPopupMenu *)0x0) {
              SendMessageW(*(HWND *)(pCVar11 + 0x20),0x100,
                           (uint)((uVar3 & 0x400000) == 0) * 2 + 0x25,0);
            }
          }
          else {
            (**(code **)(*(int *)pCVar10 + 0x39c))();
          }
        }
        else if ((*(int *)(pCVar8 + 0x8c) != 0) && (pCVar9 = GetSelItem(this), pCVar9 == pCVar8)) {
          OnKeyDown(*(CMFCPopupMenu **)(pCVar8 + 0x8c),0x24,0,0);
        }
        goto LAB_1005e792;
      }
      if (param_1 != 0x28) {
LAB_1005e451:
        iVar4 = (**(code **)(*(int *)this_00 + 0x3fc))(param_1);
        AVar7 = DAT_10168438;
        if (iVar4 == 0) {
          CWnd::Default((CWnd *)this);
          AVar7 = DAT_10168438;
        }
        goto LAB_1005e792;
      }
      uVar2 = GetAsyncKeyState(0x11);
      if (((uVar2 & 0x8000) != 0) && (*(int *)(this_00 + 0xcf0) == 0)) {
        ShowAllCommands(this);
        AVar7 = DAT_10168438;
        goto LAB_1005e792;
      }
    }
LAB_1005e4a7:
    bVar1 = true;
LAB_1005e4b1:
    if (DAT_10166e54 == 0) {
      (**(code **)(*(int *)this_00 + 0x3fc))(param_1);
    }
    AVar7 = DAT_10168438;
    if (!bVar1) goto LAB_1005e792;
  }
  if (((*(int *)(this + 0xef0) != 0) && (-1 < *(int *)(this_00 + 0xb7c))) &&
     ((iVar4 = FUN_100261ef(this_00,*(int *)(this_00 + 0xb7c)), iVar4 != 0 ||
      (iVar5 = (**(code **)(*(int *)this_00 + 0x354))(), iVar5 != 0)))) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this_00 + 0x20),&local_18);
    iVar5 = *(int *)(this_00 + 0xcd4);
    if (*(int *)(iVar4 + 0x58) < local_18.top) {
      iVar6 = (**(code **)(*(int *)this_00 + 0x354))();
      iVar4 = (*(int *)(iVar4 + 0x58) - local_18.top) / iVar6 + -1;
    }
    else {
      if (*(int *)(iVar4 + 0x60) <= local_18.bottom) goto LAB_1005e779;
      iVar6 = (**(code **)(*(int *)this_00 + 0x354))();
      iVar4 = (*(int *)(iVar4 + 0x60) - local_18.bottom) / iVar6 + 1;
    }
    if (iVar4 != 0) {
      iVar6 = (**(code **)(*(int *)this_00 + 0x354))();
      iVar5 = iVar5 + iVar4;
      iVar4 = iVar5;
      if (iVar5 < 0) {
        iVar4 = 0;
      }
      local_1c = (*(int *)(this_00 + 0xbd4) - (*(int *)(this + 0x13c) / iVar6 + -2)) + -1;
      if ((iVar4 < local_1c) && (local_1c = iVar5, iVar5 < 0)) {
        local_1c = 0;
      }
      CMFCPopupMenuBar::SetOffset(this_00,local_1c);
      iVar4 = AdjustScroll(this,0);
      if (((*(int *)(this + 0xef4) == 0) || (this == (CMFCPopupMenu *)0xfffff0d8)) ||
         (*(int *)(this + 0xf48) == 0)) {
        if (iVar4 != 0) {
          AdjustScroll(this,0);
        }
      }
      else {
        SetScrollPos(*(HWND *)(this + 0xf48),2,local_1c,1);
      }
    }
  }
LAB_1005e779:
  AVar7 = DAT_10168438;
  if (*(int *)(this_00 + 0xd08) != 0) {
    (**(code **)(*(int *)this + 0x1fc))(*(undefined4 *)(this_00 + 0xb7c));
    AVar7 = DAT_10168438;
  }
LAB_1005e792:
  DAT_10168438 = AVar7;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

