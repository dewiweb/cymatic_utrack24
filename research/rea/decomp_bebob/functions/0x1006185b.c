// rea decompile_all
// name: CFrameImpl::ProcessMouseClick
// address: 0x1006185b
// body: available
// range: 0x1006185b-0x10061e16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10061a36 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::ProcessMouseClick(unsigned int,struct tagPOINT,struct
   HWND__ *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CFrameImpl::ProcessMouseClick(CFrameImpl *this,uint param_1,tagPOINT param_2,HWND__ *param_3)

{
  int *this_00;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT Point;
  CFrameImpl *pCVar1;
  ushort uVar2;
  BOOL BVar3;
  MENUAREA_TYPE MVar4;
  CMFCPopupMenu *pCVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  int *piVar8;
  CObject *pCVar9;
  HWND pHVar10;
  int iVar11;
  HWND__ *pHVar12;
  uint uVar13;
  HMENU pHVar14;
  CMenu *pCVar15;
  WPARAM wParam;
  int iVar16;
  undefined4 *puVar17;
  UINT UVar18;
  LPARAM lParam;
  tagPOINT local_44;
  tagPOINT local_3c;
  CFrameImpl *local_34;
  LONG local_30;
  uint local_2c;
  RECT local_28;
  undefined1 local_18 [8];
  LONG local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_2.y;
  local_30 = param_2.x;
  local_34 = this;
  if ((*(int *)(this + 0xfc) != 0) &&
     (BVar3 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar3 != 0)) {
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    local_10 = 0;
    local_c = 0;
    GetWindowRect(*(HWND *)(*(int *)(this + 0xfc) + 0x20),(LPRECT)local_18);
    pt.y = local_2c;
    pt.x = param_2.x;
    BVar3 = PtInRect((RECT *)local_18,pt);
    CMFCRibbonBar::DeactivateKeyboardFocus(*(CMFCRibbonBar **)(this + 0xfc),BVar3);
  }
  if ((param_1 == 0x201) &&
     ((puVar17 = DAT_10166ec0, DAT_10166e54 != 0 ||
      (uVar2 = GetAsyncKeyState(0x12), puVar17 = DAT_10166ec0, (uVar2 & 0x8000) != 0)))) {
    do {
      do {
        if (puVar17 == (undefined4 *)0x0) goto LAB_10061956;
        if (puVar17 == (undefined4 *)0x0) {
LAB_10061a36:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        this_00 = (int *)puVar17[2];
        puVar17 = (undefined4 *)*puVar17;
        if (this_00 == (int *)0x0) goto LAB_10061a36;
        pCVar6 = CWnd::FromHandlePermanent((HWND__ *)this_00[8]);
      } while (pCVar6 == (CWnd *)0x0);
      local_3c.x = local_30;
      local_3c.y = local_2c;
      ScreenToClient((HWND)this_00[8],&local_3c);
      iVar16 = (**(code **)(*this_00 + 0x390))(local_3c.x,local_3c.y);
    } while (iVar16 < 0);
    piVar8 = (int *)FUN_100261ef(this_00,iVar16);
    iVar16 = (**(code **)(*piVar8 + 0x38))();
    if (((iVar16 == 0) || (pHVar12 = (HWND__ *)(**(code **)(*piVar8 + 0x38))(), pHVar12 != param_3))
       || (pt_01.y = local_3c.y, pt_01.x = local_3c.x,
          BVar3 = PtInRect((RECT *)(piVar8 + 0x15),pt_01), BVar3 == 0)) goto LAB_10061956;
    lParam = CONCAT22((undefined2)local_3c.y,(undefined2)local_3c.x);
    UVar18 = 0x201;
    pHVar10 = (HWND)this_00[8];
LAB_10061a93:
    SendMessageW(pHVar10,UVar18,0,lParam);
    goto LAB_10061e06;
  }
LAB_10061956:
  local_3c.y = 0;
  if (((DAT_10166e54 == 0) && (DAT_1016843c != (CObject *)0x0)) &&
     (BVar3 = IsWindow(*(HWND *)(DAT_1016843c + 0x20)), BVar3 != 0)) {
    local_44.x = local_30;
    local_44.y = local_2c;
    MVar4 = CMFCPopupMenu::CheckArea((CMFCPopupMenu *)DAT_1016843c,(CPoint *)&local_44);
    if (MVar4 == 4) {
      pCVar5 = CMFCPopupMenu::FindMenuWithConnectedFloaty();
      if ((pCVar5 != (CMFCPopupMenu *)0x0) &&
         (BVar3 = IsWindow(*(HWND *)(pCVar5 + 0x10c0)), BVar3 != 0)) {
        local_18._0_4_ = 0;
        local_18._4_4_ = 0;
        local_10 = 0;
        local_c = 0;
        GetWindowRect(*(HWND *)(pCVar5 + 0x10c0),(LPRECT)local_18);
        pt_00.y = local_2c;
        pt_00.x = local_30;
        BVar3 = PtInRect((RECT *)local_18,pt_00);
        if (BVar3 != 0) {
          pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar5 + 0x10c0));
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                      (CObject *)pCVar6);
          *(undefined4 *)(pCVar5 + 0x10c0) = 0;
          SendMessageW(*(HWND *)(pCVar5 + 0x20),0x10,0,0);
          DAT_1016843c = pCVar7;
          goto LAB_10061e06;
        }
      }
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      pCVar7 = (CObject *)(**(code **)(*(int *)DAT_1016843c + 0x1cc))(&local_28);
      if (pCVar7 != (CObject *)0x0) {
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,
                                    pCVar7);
        local_44.x = local_30;
        local_44.y = local_2c;
        ScreenToClient(*(HWND *)(pCVar7 + 0x20),&local_44);
        pt_02.y = local_44.y;
        pt_02.x = local_44.x;
        BVar3 = PtInRect(&local_28,pt_02);
        if (BVar3 != 0) {
          if (((pCVar9 != (CObject *)0x0) &&
              (iVar16 = (**(code **)(*(int *)pCVar9 + 0x448))(), iVar16 == 0)) ||
             (iVar16 = (**(code **)(*(int *)DAT_1016843c + 0x1c4))(), iVar16 != 0))
          goto LAB_10061e06;
          lParam = 0;
          UVar18 = 0x10;
          pHVar10 = *(HWND *)(DAT_1016843c + 0x20);
          goto LAB_10061a93;
        }
        if ((pCVar9 != (CObject *)0x0) &&
           (iVar16 = (**(code **)(*(int *)pCVar9 + 0x448))(), iVar16 == 0)) {
          (**(code **)(*(int *)pCVar9 + 0x43c))();
          pHVar10 = GetParent(*(HWND *)(pCVar9 + 0x20));
          pCVar6 = CWnd::FromHandle(pHVar10);
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                      (CObject *)pCVar6);
          if (pCVar7 != (CObject *)0x0) {
            local_10 = local_30;
            local_c = local_2c;
            MVar4 = CMFCPopupMenu::CheckArea((CMFCPopupMenu *)pCVar7,(CPoint *)&local_10);
            if (MVar4 == 0) goto LAB_10061e06;
            if (0 < (int)MVar4) {
              if ((int)MVar4 < 3) {
                pHVar10 = *(HWND *)(pCVar7 + 0x20);
                goto LAB_10061ca0;
              }
              if ((MVar4 == 3) || (MVar4 == 5)) goto LAB_10061e06;
            }
          }
        }
      }
      iVar16 = (**(code **)(*(int *)DAT_1016843c + 0x1c4))();
      if (iVar16 == 0) {
        iVar16 = (**(code **)(*(int *)DAT_1016843c + 0x1d4))();
        local_3c.y = (uint)(iVar16 == 0);
        SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x10,0,0);
        pHVar10 = GetFocus();
        pCVar6 = CWnd::FromHandle(pHVar10);
        if ((pCVar6 != (CWnd *)0x0) &&
           (iVar11 = CObject::IsKindOf((CObject *)pCVar6,
                                       (CRuntimeClass *)&PTR_s_CMFCToolBar_10160470), iVar11 != 0))
        {
          CWnd::SetFocus(*(CWnd **)(local_34 + 0xb0));
        }
        if ((iVar16 == 0) != 0) {
          Point.y = local_2c;
          Point.x = local_30;
          pHVar10 = WindowFromPoint(Point);
          pCVar6 = CWnd::FromHandle(pHVar10);
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CView_10127358,(CObject *)pCVar6);
          if ((pCVar7 == (CObject *)0x0) || (*(int *)(pCVar7 + 0x20) == 0)) {
            local_3c.y = 0;
          }
        }
      }
    }
    else if ((MVar4 == 1) || (MVar4 == 2)) {
      pHVar10 = *(HWND *)(DAT_1016843c + 0x20);
LAB_10061ca0:
      SendMessageW(pHVar10,0x10,0,0);
      CWnd::SetFocus(*(CWnd **)(local_34 + 0xb0));
      goto LAB_10061e06;
    }
  }
  pCVar1 = local_34;
  if (param_1 != 0xa5) goto LAB_10061e06;
  if (*(int *)(local_34 + 0xb0) == 0) {
    pHVar12 = (HWND__ *)0x0;
  }
  else {
    pHVar12 = *(HWND__ **)(*(int *)(local_34 + 0xb0) + 0x20);
  }
  if (((param_3 != pHVar12) || (iVar16 = IsOwnerDrawCaption(local_34), iVar16 == 0)) ||
     ((uVar13 = OnNcHitTest(pCVar1,local_30,local_2c), uVar13 != 2 &&
      ((((uVar13 != 3 && (uVar13 != 8)) && (uVar13 != 9)) && (uVar13 != 0x14))))))
  goto LAB_10061e06;
  pHVar14 = GetSystemMenu(*(HWND *)(*(int *)(pCVar1 + 0xb0) + 0x20),0);
  pCVar15 = CMenu::FromHandle(pHVar14);
  if (((pCVar15 == (CMenu *)0x0) || (*(HMENU *)(pCVar15 + 4) == (HMENU)0x0)) ||
     (BVar3 = IsMenu(*(HMENU *)(pCVar15 + 4)), BVar3 == 0)) goto LAB_10061e06;
  EnableMenuItem(*(HMENU *)(pCVar15 + 4),0xf030,0);
  EnableMenuItem(*(HMENU *)(pCVar15 + 4),0xf120,0);
  BVar3 = IsZoomed(*(HWND *)(*(int *)(local_34 + 0xb0) + 0x20));
  if (BVar3 == 0) {
    BVar3 = IsIconic(*(HWND *)(*(int *)(local_34 + 0xb0) + 0x20));
    if (BVar3 == 0) {
      UVar18 = 0xf120;
      goto LAB_10061db1;
    }
  }
  else {
    UVar18 = 0xf030;
LAB_10061db1:
    EnableMenuItem(*(HMENU *)(pCVar15 + 4),UVar18,3);
  }
  pCVar1 = local_34;
  if (*(int *)(local_34 + 0xb0) == 0) {
    pHVar10 = (HWND)0x0;
  }
  else {
    pHVar10 = *(HWND *)(*(int *)(local_34 + 0xb0) + 0x20);
  }
  wParam = TrackPopupMenu(*(HMENU *)(pCVar15 + 4),0x100,local_30,local_2c,0,pHVar10,(RECT *)0x0);
  if (wParam != 0) {
    SendMessageW(*(HWND *)(*(int *)(pCVar1 + 0xb0) + 0x20),0x112,wParam,0);
    local_3c.y = 1;
  }
LAB_10061e06:
  iVar16 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar16;
}

