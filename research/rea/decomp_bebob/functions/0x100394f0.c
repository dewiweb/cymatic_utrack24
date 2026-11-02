// rea decompile_all
// name: CPaneFrameWnd::OnMouseMove
// address: 0x100394f0
// body: available
// range: 0x100394f0-0x10039d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPaneFrameWnd::OnMouseMove(CPaneFrameWnd *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  undefined4 uVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  char cVar2;
  SHORT SVar3;
  CObject *pCVar4;
  uint uVar5;
  CWnd *pCVar6;
  CDockingManager *pCVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  BOOL BVar11;
  CPaneDivider *pCVar12;
  undefined4 uVar13;
  CObject *pCVar14;
  HCURSOR hCursor;
  ulong uVar15;
  RECT *pRVar16;
  tagPOINT local_80;
  int local_78;
  tagPOINT local_74;
  int *local_6c;
  uint local_68;
  CDockingManager *local_64;
  CObject *local_60;
  tagPOINT local_5c;
  CSmartDockingManager *local_54;
  int *local_50;
  CObject *local_4c;
  tagRECT local_48;
  undefined1 local_38 [12];
  LONG local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (this[0x74] != (CPaneFrameWnd)0x0) {
    this[0x74] = (CPaneFrameWnd)0x0;
    goto LAB_10039cff;
  }
  if (this[0x99] == (CPaneFrameWnd)0x0) {
    local_80.x = param_3;
    local_80.y = param_4;
    ClientToScreen(*(HWND *)(this + 0x20),&local_80);
    (**(code **)(*(int *)this + 0x230))(local_80.x,local_80.y);
    CWnd::Default((CWnd *)this);
    goto LAB_10039cff;
  }
  if (*(int *)(this + 0x7c) == 0) {
    local_5c.x = 0;
    local_5c.y = 0;
    GetCursorPos(&local_5c);
    if ((local_5c.x == *(int *)(this + 0xf4)) && (local_5c.y == *(int *)(this + 0xf8)))
    goto LAB_10039cff;
    *(undefined4 *)(this + 0x7c) = 1;
    pCVar4 = (CObject *)(**(code **)(*(int *)this + 0x1a8))();
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar4);
    cVar2 = (**(code **)(*(int *)this + 0x1ac))();
    if ((cVar2 < '\0') &&
       ((pCVar4 != (CObject *)0x0 &&
        (uVar5 = (**(code **)(*(int *)pCVar4 + 0x194))(), (uVar5 & 0xf000) != 0)))) {
      pCVar7 = *(CDockingManager **)(this + 0x178);
      if (pCVar7 == (CDockingManager *)0x0) {
        pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
        pCVar7 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar6);
        if (pCVar7 == (CDockingManager *)0x0) goto LAB_100395c6;
      }
      CDockingManager::StartSDocking(pCVar7,(CWnd *)this);
    }
  }
LAB_100395c6:
  _DAT_10160f70 = 1;
  local_68 = (**(code **)(*(int *)this + 0x1ac))();
  local_54 = (CSmartDockingManager *)0x0;
  local_64 = (CDockingManager *)0x0;
  uVar5 = local_68 & 0x80;
  if (uVar5 != 0) {
    pCVar7 = *(CDockingManager **)(this + 0x178);
    if (pCVar7 == (CDockingManager *)0x0) {
      pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
      pCVar7 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar6);
    }
    local_64 = pCVar7;
    if (pCVar7 != (CDockingManager *)0x0) {
      local_38._8_4_ = param_3;
      local_2c = param_4;
      ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)(local_38 + 8));
      local_54 = CDockingManager::GetSmartDockingManager(local_64);
      if (local_54 != (CSmartDockingManager *)0x0) {
        CSmartDockingManager::OnMouseMove(local_54,local_38._8_4_,local_2c);
      }
    }
  }
  if ((local_68 & 2) == 0) {
    if ((local_68 & 1) != 0) {
      local_5c.x = param_3;
      local_5c.y = param_4;
      ClientToScreen(*(HWND *)(this + 0x20),&local_5c);
      if ((((uVar5 == 0) || (local_54 == (CSmartDockingManager *)0x0)) ||
          (*(int *)(local_54 + 8) == 0)) || (*(int *)(local_54 + 4) == 0)) {
        local_78 = -1;
        local_68 = 0;
      }
      else {
        local_78 = *(int *)(local_54 + 0x100);
        local_68 = 1;
      }
      SVar3 = GetKeyState(0x11);
      local_74.y = (LONG)(SVar3 < 0);
      local_6c = (int *)0x0;
      if (local_68 != 0) {
        if (local_74.y == 0) {
          piVar8 = (int *)(**(code **)(*(int *)local_64 + 0x14))(local_5c.x,local_5c.y,this);
          local_50 = piVar8;
          pCVar4 = (CObject *)(**(code **)(*(int *)this + 0x1a4))();
          local_4c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar4);
          if (piVar8 == (int *)0x0) {
LAB_10039805:
            pCVar4 = (CObject *)
                     (**(code **)(*(int *)local_64 + 0x10))
                               (local_5c.x,local_5c.y,DAT_10160710,1,0,1,local_4c);
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar4);
            if (pCVar4 != (CObject *)0x0) {
              iVar9 = (**(code **)(*(int *)pCVar4 + 0x224))(0);
              if (((iVar9 == 0) ||
                  (iVar9 = CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
                                     ((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)local_4c),
                  iVar9 == 0)) && (iVar9 = (**(code **)(*(int *)pCVar4 + 0x224))(0), iVar9 != 0)) {
LAB_100398bd:
                local_50 = (int *)0x0;
              }
              else {
                iVar9 = (**(code **)(*(int *)pCVar4 + 0x194))();
                iVar10 = (**(code **)(*(int *)local_4c + 0x194))();
                pCVar14 = local_4c;
                if (((iVar9 != iVar10) ||
                    (iVar9 = (**(code **)(*(int *)pCVar4 + 0x180))(local_4c), iVar9 == 0)) ||
                   ((iVar9 = (**(code **)(*(int *)pCVar14 + 0x188))(), iVar9 == 0 ||
                    (iVar9 = (**(code **)(*(int *)pCVar4 + 0x188))(), iVar9 == 0))))
                goto LAB_100398bd;
                local_50 = (int *)0x1;
              }
              local_28.left = 0;
              local_28.top = 0;
              local_28.right = 0;
              local_28.bottom = 0;
              GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_28);
              pt_00.y = local_5c.y;
              pt_00.x = local_5c.x;
              BVar11 = PtInRect(&local_28,pt_00);
              if ((BVar11 == 0) ||
                 (iVar9 = (**(code **)(*(int *)pCVar4 + 0x1a0))(),
                 iVar9 <= local_5c.y - local_28.top)) {
                local_48.left = 0;
                local_48.top = 0;
                local_48.right = 0;
                local_48.bottom = 0;
                local_18.left = 0;
                local_18.top = 0;
                local_18.right = 0;
                local_18.bottom = 0;
                (**(code **)(*(int *)pCVar4 + 0x32c))(&local_48,&local_18);
                pt_01.y = local_5c.y;
                pt_01.x = local_5c.x;
                BVar11 = PtInRect(&local_48,pt_01);
                if ((BVar11 == 0) &&
                   (pt_02.y = local_5c.y, pt_02.x = local_5c.x, BVar11 = PtInRect(&local_18,pt_02),
                   BVar11 == 0)) goto LAB_10039984;
              }
              local_6c = local_50;
              if (local_50 != (int *)0x0) goto LAB_1003995d;
            }
LAB_10039984:
            CSmartDockingManager::Show(local_54,1);
            if (pCVar4 == (CObject *)0x0) {
LAB_10039ac8:
              local_18.left = *(LONG *)(local_64 + 0xf8);
              local_18.top = *(LONG *)(local_64 + 0xfc);
              pRVar16 = &local_18;
              local_18.right = *(LONG *)(local_64 + 0x100);
              local_18.bottom = *(LONG *)(local_64 + 0x104);
              pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
              CWnd::ClientToScreen(pCVar6,pRVar16);
              pt_03.y = local_5c.y;
              pt_03.x = local_5c.x;
              BVar11 = PtInRect(&local_18,pt_03);
              pCVar4 = local_4c;
              if (BVar11 != 0) {
                local_50 = (int *)0x0;
                pCVar14 = (CObject *)(**(code **)(*(int *)local_4c + 0x198))();
                pCVar14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar14
                                            );
                if (((pCVar14 != (CObject *)0x0) &&
                    (iVar9 = CMDIFrameWndEx::AreMDITabs((CMDIFrameWndEx *)pCVar14,(int *)0x0),
                    iVar9 != 0)) &&
                   ((iVar9 = (**(code **)(*(int *)pCVar14 + 0x1d4))(), iVar9 != 0 &&
                    (iVar9 = (**(code **)(*(int *)pCVar4 + 0x18c))(), iVar9 != 0)))) {
                  local_50 = (int *)0x1;
                }
                uVar13 = (**(code **)(*(int *)local_4c + 0x194))();
                CSmartDockingManager::MoveCentralGroup
                          (local_54,local_18.left,local_18.top,local_18.right,local_18.bottom,
                           local_50,uVar13);
                uVar15 = (**(code **)(*(int *)local_4c + 0x194))();
                goto LAB_10039ac1;
              }
              if ((-1 < local_78) && (local_78 < 4)) goto LAB_10039bb0;
              uVar15 = (**(code **)(*(int *)local_4c + 0x194))();
              iVar9 = 0;
            }
            else {
              local_60 = (CObject *)
                         CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
                                   ((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)local_4c);
              iVar9 = (**(code **)(*(int *)pCVar4 + 0x1a4))();
              pCVar14 = local_4c;
              if (((iVar9 != 0) && (local_60 == (CObject *)0x0)) ||
                 (iVar9 = (**(code **)(*(int *)pCVar4 + 0x180))(local_4c), iVar9 == 0))
              goto LAB_10039ac8;
              local_60 = (CObject *)(**(code **)(*(int *)pCVar4 + 400))();
              uVar5 = (**(code **)(*(int *)pCVar14 + 0x194))();
              if ((((uint)local_60 & uVar5) == 0) ||
                 (pCVar12 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)pCVar4),
                 pCVar12 == (CPaneDivider *)0x0)) {
                iVar9 = (**(code **)(*(int *)pCVar4 + 0x224))(0);
                if (iVar9 != 0) {
                  iVar9 = (**(code **)(*(int *)pCVar4 + 0x194))();
                  iVar10 = (**(code **)(*(int *)local_4c + 0x194))();
                  if (iVar10 == iVar9) goto LAB_10039a2d;
                }
                goto LAB_10039ac8;
              }
LAB_10039a2d:
              local_50 = (int *)0x0;
              iVar9 = (**(code **)(*(int *)this + 0x170))();
              if ((iVar9 != 0) && (iVar9 = (**(code **)(*(int *)pCVar4 + 0x188))(), iVar9 != 0)) {
                iVar9 = (**(code **)(*(int *)pCVar4 + 0x194))();
                iVar10 = (**(code **)(*(int *)local_4c + 0x194))();
                if (iVar10 == iVar9) {
                  local_50 = (int *)0x1;
                }
              }
              local_18.left = 0;
              local_18.top = 0;
              local_18.right = 0;
              local_18.bottom = 0;
              GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_18);
              if (DAT_10168108 == 0) {
                uVar13 = (**(code **)(*(int *)local_4c + 0x194))();
              }
              else {
                uVar13 = 0xf000;
              }
              CSmartDockingManager::MoveCentralGroup
                        (local_54,local_18.left,local_18.top,local_18.right,local_18.bottom,local_50
                         ,uVar13);
              uVar15 = 0xf000;
LAB_10039ac1:
              iVar9 = 1;
            }
            CSmartDockingManager::ShowCentralGroup(local_54,iVar9,uVar15);
          }
          else {
            pCVar4 = (CObject *)(**(code **)(*piVar8 + 0x1a8))();
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar4);
            local_60 = pCVar4;
            if (((pCVar4 == (CObject *)0x0) ||
                (iVar9 = (**(code **)(*(int *)pCVar4 + 0x188))(), iVar9 == 0)) ||
               ((iVar9 = (**(code **)(*(int *)local_4c + 0x188))(), iVar9 == 0 ||
                ((iVar9 = (**(code **)(*(int *)pCVar4 + 0x338))(this), iVar9 == 0 ||
                 (iVar9 = CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
                                    ((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)local_4c),
                 iVar9 == 0)))))) goto LAB_10039805;
            iVar9 = (**(code **)(*(int *)pCVar4 + 0x194))();
            iVar10 = (**(code **)(*(int *)local_4c + 0x194))();
            piVar8 = local_50;
            if (iVar9 != iVar10) goto LAB_10039805;
            local_28.left = 0;
            local_28.top = 0;
            local_28.right = 0;
            local_28.bottom = 0;
            (**(code **)(*local_50 + 0x1c4))(&local_28);
            local_48.left = 0;
            local_48.top = 0;
            local_48.right = 0;
            local_48.bottom = 0;
            GetWindowRect((HWND)piVar8[8],&local_48);
            OffsetRect(&local_28,local_48.left,local_48.top);
            pt.y = local_5c.y;
            pt.x = local_5c.x;
            BVar11 = PtInRect(&local_28,pt);
            if (BVar11 == 0) goto LAB_10039805;
            local_6c = (int *)0x1;
            pCVar4 = local_60;
LAB_1003995d:
            CSmartDockingManager::Show(local_54,0);
            CMFCDragFrameImpl::PlaceTabPreDocking
                      ((CMFCDragFrameImpl *)(this + 0x120),(CWnd *)pCVar4);
          }
        }
        else {
          CSmartDockingManager::Show(local_54,0);
        }
      }
LAB_10039bb0:
      local_60 = (CObject *)(**(code **)(*(int *)this + 0x1ac))();
      if (local_68 == 0) {
LAB_10039c16:
        if ((local_6c == (int *)0x0) && (iVar9 = MoveMiniFrame(this), iVar9 != 0)) {
          local_74.x = 0;
          local_74.y = 0;
          GetCursorPos(&local_74);
          iVar9 = local_74.x - *(int *)(this + 0x124);
          iVar10 = local_74.y - *(int *)(this + 0x128);
          local_38._0_4_ = 0;
          local_38._4_4_ = 0;
          local_38._8_4_ = 0;
          local_2c = 0;
          GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)local_38);
          OffsetRect((LPRECT)local_38,iVar9,iVar10);
          CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,local_38._0_4_,local_38._4_4_,-1,-1,0x45);
          *(undefined4 *)(this + 300) = local_38._0_4_;
          *(undefined4 *)(this + 0x130) = local_38._4_4_;
          *(undefined4 *)(this + 0x134) = local_38._8_4_;
          *(LONG *)(this + 0x124) = local_74.x;
          *(LONG *)(this + 0x128) = local_74.y;
          *(LONG *)(this + 0x138) = local_2c;
        }
      }
      else if ((local_78 == -1) || (local_74.y != 0)) {
        if (local_6c == (int *)0x0) {
          CMFCDragFrameImpl::RemoveTabPreDocking
                    ((CMFCDragFrameImpl *)(this + 0x120),(CDockablePane *)0x0);
          CSmartDockingManager::HidePlace(local_54);
          goto LAB_10039c16;
        }
      }
      else {
        uVar13 = *(undefined4 *)(this + 0x124);
        uVar1 = *(undefined4 *)(this + 0x128);
        CMFCDragFrameImpl::MoveDragFrame((CMFCDragFrameImpl *)(this + 0x120),0);
        *(undefined4 *)(this + 0x124) = uVar13;
        *(undefined4 *)(this + 0x128) = uVar1;
      }
      if (((uint)local_60 & 0x80) == 0) {
        AfxGetModuleState();
        hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
        SetCursor(hCursor);
      }
    }
  }
  else {
    CMFCDragFrameImpl::MoveDragFrame((CMFCDragFrameImpl *)(this + 0x120),0);
  }
  _DAT_10160f70 = 0;
LAB_10039cff:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

