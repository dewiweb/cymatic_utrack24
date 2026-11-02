// rea decompile_all
// name: CMFCPopupMenuBar::OnChangeHot
// address: 0x1009ffb7
// body: available
// range: 0x1009ffb7-0x100a02ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009ffdc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenuBar::OnChangeHot(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenuBar::OnChangeHot(CMFCPopupMenuBar *this,int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  CObject *pCVar7;
  CWnd *pCVar8;
  tagMSG *ptVar9;
  CMFCPopupMenu *pCVar10;
  int *piVar11;
  CObject *pCVar12;
  CFrameWnd *pCVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  tagPOINT local_10;
  CObject *local_8;
  
  if (this == (CMFCPopupMenuBar *)0x0) {
    pHVar3 = (HWND)0x0;
  }
  else {
    pHVar3 = *(HWND *)(this + 0x20);
  }
  BVar4 = IsWindow(pHVar3);
  if (BVar4 == 0) {
LAB_1009ffdc:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (param_1 == -1) {
    local_10.x = 0;
    local_10.y = 0;
    GetCursorPos(&local_10);
    ScreenToClient(*(HWND *)(this + 0x20),&local_10);
    iVar6 = *(int *)(this + 0xb84);
    iVar5 = (**(code **)(*(int *)this + 0x390))(local_10.x,local_10.y);
    if (iVar5 == iVar6) {
      *(int *)(this + 0xb7c) = iVar6;
      return;
    }
  }
  puVar16 = *(undefined4 **)(this + 0xbcc);
  do {
    pCVar12 = (CObject *)0x0;
    if (puVar16 == (undefined4 *)0x0) break;
    if (puVar16 == (undefined4 *)0x0) goto LAB_1009ffdc;
    puVar1 = puVar16 + 2;
    puVar16 = (undefined4 *)*puVar16;
    local_10.y = (LONG)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                                          (CObject *)*puVar1);
  } while (((CObject *)local_10.y == (CObject *)0x0) ||
          (iVar6 = (**(code **)(*(int *)local_10.y + 0x70))(), pCVar12 = (CObject *)local_10.y,
          iVar6 == 0));
  local_8 = (CObject *)0x0;
  if (-1 < param_1) {
    pCVar7 = (CObject *)FUN_100261ef(this,param_1);
    if (pCVar7 == (CObject *)0x0) goto LAB_1009ffdc;
    local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,pCVar7);
  }
  if (local_8 == pCVar12) {
    if ((local_8 != (CObject *)0x0) && (local_8 == *(CObject **)(this + 0xd38))) {
      *(int *)(*(CObject **)(this + 0xd38) + 0xa4) = 0;
      *(undefined4 *)(this + 0xd38) = 0;
      KillTimer(*(HWND *)(this + 0x20),2);
    }
  }
  else {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar3);
    local_10.y = (LONG)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                          (CObject *)pCVar8);
    if (pCVar12 != (CObject *)0x0) {
      ptVar9 = CWnd::GetCurrentMessage();
      if ((DAT_10166e54 == 0) && ((ptVar9 == (tagMSG *)0x0 || (ptVar9->message != 0x100)))) {
        *(CObject **)(this + 0xd38) = pCVar12;
        *(int *)(pCVar12 + 0xa4) = 1;
        SetTimer(*(HWND *)(this + 0x20),2,DAT_10161b38 - 1,(TIMERPROC)0x0);
        InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(pCVar12 + 0x54),1);
        UpdateWindow(*(HWND *)(this + 0x20));
      }
      else {
        KillTimer(*(HWND *)(this + 0x20),2);
        *(undefined4 *)(this + 0xd38) = 0;
        (**(code **)(*(int *)pCVar12 + 0x58))();
        if ((CObject *)local_10.y != (CObject *)0x0) {
          pCVar13 = DAT_10168578;
          if (DAT_10168578 == (CFrameWnd *)0x0) {
            pCVar13 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          CMFCPopupMenu::ActivatePopupMenu(pCVar13,(CMFCPopupMenu *)local_10.y);
        }
      }
    }
    if ((local_8 != (CObject *)0x0) &&
       ((*(int *)(local_8 + 0x20) == -1 || (*(int *)(local_8 + 0x90) != 0)))) {
      (**(code **)(*(int *)local_8 + 0x20))(this,1);
    }
    if (((CMFCPopupMenu *)local_10.y != (CMFCPopupMenu *)0x0) &&
       (pCVar10 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)local_10.y), LVar2 = local_10.y
       , pCVar10 != (CMFCPopupMenu *)0x0)) {
      pCVar10 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)local_10.y);
      piVar11 = (int *)(**(code **)(*(int *)pCVar10 + 0x1c0))();
      if ((piVar11 != (int *)0x0) && (piVar11[0x34e] == *(int *)(LVar2 + 0x148))) {
        (**(code **)(*piVar11 + 0x440))();
      }
    }
  }
  *(int *)(this + 0xb84) = param_1;
  if (*(int *)(this + 0xd08) != 0) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar3);
    pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar8);
    if (pCVar12 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar12 + 0x1fc))(*(undefined4 *)(this + 0xb84));
    }
  }
  if (DAT_10168444 != 0) {
    pCVar13 = DAT_10168578;
    if (DAT_10168578 == (CFrameWnd *)0x0) {
      pCVar13 = CWnd::GetTopLevelFrame((CWnd *)this);
    }
    if (pCVar13 == (CFrameWnd *)0x0) {
      pCVar13 = (CFrameWnd *)AfxGetMainWnd();
    }
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar3);
    pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar8);
    if ((pCVar12 != (CObject *)0x0) && (*(CFrameWnd **)(pCVar12 + 0x124) != (CFrameWnd *)0x0)) {
      pCVar13 = *(CFrameWnd **)(pCVar12 + 0x124);
    }
    if ((pCVar13 != (CFrameWnd *)0x0) && (pCVar12 != (CObject *)0x0)) {
      uVar15 = 0x80;
      uVar14 = 0;
      if (local_8 != (CObject *)0x0) {
        if ((*(uint *)(local_8 + 0x24) & 0x40000) != 0) {
          uVar15 = 0x82;
        }
        if ((*(uint *)(local_8 + 0x24) & 0x10000) != 0) {
          uVar15 = uVar15 | 8;
        }
        uVar14 = *(uint *)(local_8 + 0x20);
        if (*(uint *)(local_8 + 0x20) == 0xffffffff) {
          uVar15 = uVar15 | 0x10;
          uVar14 = param_1;
        }
      }
      SendMessageW(*(HWND *)(pCVar13 + 0x20),0x11f,uVar15 << 0x10 | uVar14 & 0xffff,
                   *(LPARAM *)(pCVar12 + 0xea8));
    }
  }
  return;
}

