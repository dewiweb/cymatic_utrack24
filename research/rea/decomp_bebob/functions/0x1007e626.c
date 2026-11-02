// rea decompile_all
// name: FUN_1007e626
// address: 0x1007e626
// body: available
// range: 0x1007e626-0x1007f6c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007f53a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1007e626(void *this,CDC *param_1,int *param_2,CMFCToolBarImages *param_3,int param_4,int param_5
            ,int param_6,int param_7)

{
  CMFCToolBar *this_00;
  undefined4 uVar1;
  double dVar2;
  CMFCToolBarImages *pCVar3;
  CMFCVisualManager *pCVar4;
  undefined4 uVar5;
  int iVar6;
  CObject *pCVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  int *piVar10;
  undefined *puVar11;
  __POSITION *p_Var12;
  CObject *pCVar13;
  HRGN pHVar14;
  int iVar15;
  CMFCVisualManager *pCVar16;
  undefined **ppuVar17;
  undefined4 *puVar18;
  ulong uVar19;
  short *psVar20;
  size_t sVar21;
  undefined4 extraout_EDX;
  uint uVar22;
  int iVar23;
  CDC *pCVar24;
  int local_e0 [2];
  tagAFXDrawState local_d8 [12];
  undefined **local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [4];
  wchar_t *local_c0;
  CMFCToolBarImages *local_bc;
  CMFCToolBarImages *local_b8;
  int local_b4;
  CObject *local_b0;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_ac [4];
  CMFCToolBarImages *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  CUserTool *local_9c;
  int local_98;
  CObject *local_94;
  uint local_90;
  int *local_8c;
  uint local_88;
  char local_81;
  HICON__ *local_80;
  int *local_7c;
  CDC *local_78;
  RECT local_74;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int local_4c;
  CObject *pCStack_48;
  tagRECT local_44;
  undefined1 local_34 [8];
  int local_2c;
  CObject *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xd0;
  local_8 = 0x1007e635;
  local_8c = param_2;
  local_88 = 0;
  local_78 = param_1;
  local_a8 = param_3;
  if (*(int *)((int)this + 0x20) == -2) {
    pCVar4 = CMFCVisualManager::GetInstance();
    pCVar24 = local_78;
    uVar5 = (**(code **)(*(int *)pCVar4 + 0x4c))
                      (local_78,*local_8c,local_8c[1],local_8c[2],local_8c[3]);
    local_b8 = (CMFCToolBarImages *)(**(code **)(*(int *)pCVar24 + 0x30))(uVar5);
    local_24.left = *local_8c;
    local_24.top = local_8c[1];
    local_24.right = local_8c[2];
    local_24.bottom = local_8c[3];
    InflateRect(&local_24,-3,0);
    pCVar24 = local_78;
    local_24.bottom = local_24.bottom + -2;
    uVar5 = (**(code **)(*(int *)local_78 + 0x28))(&DAT_10166bc4);
    (**(code **)(*(int *)pCVar24 + 0x68))
              (*(int *)((int)this + 0x2c),*(undefined4 *)(*(int *)((int)this + 0x2c) + -0xc),
               &local_24,0x24);
    (**(code **)(*(int *)pCVar24 + 0x30))(local_b8);
    (**(code **)(*(int *)pCVar24 + 0x28))(uVar5);
    goto LAB_1007f6ba;
  }
  if (param_4 == 0) {
    if ((*(uint *)((int)this + 0x24) & 0x40000) == 0) goto LAB_1007e702;
LAB_1007e7f9:
    local_98 = 1;
  }
  else {
    iVar6 = (**(code **)(*(int *)this + 0x60))();
    if (iVar6 == 0) goto LAB_1007e7f9;
LAB_1007e702:
    local_98 = 0;
  }
  pCVar13 = *(CObject **)((int)this + 0x6c);
  local_bc = (CMFCToolBarImages *)0x0;
  local_b8 = (CMFCToolBarImages *)0x0;
  pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,pCVar13);
  local_94 = pCVar7;
  FUN_10026c8e(pCVar13,extraout_EDX,&local_b4);
  if (pCVar7 != (CObject *)0x0) {
    if (*(int *)(pCVar7 + 0xd08) != 0) {
      pHVar8 = GetParent(*(HWND *)(pCVar7 + 0x20));
      pCVar9 = CWnd::FromHandle(pHVar8);
      local_28 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownListBox_10138a40,
                                    (CObject *)pCVar9);
      if (local_28 != (CObject *)0x0) {
        pCVar4 = CMFCVisualManager::GetInstance();
        local_94 = (CObject *)(**(code **)(*(int *)pCVar4 + 0x9c))(this,param_5,0);
        if (param_5 != 0) {
          pCVar4 = CMFCVisualManager::GetInstance();
          (**(code **)(*(int *)pCVar4 + 0x90))
                    (local_78,this,*local_8c,local_8c[1],local_8c[2],local_8c[3],&local_94);
          param_1 = local_78;
        }
        uVar5 = (**(code **)(*(int *)param_1 + 0x30))(local_94);
        (**(code **)(*(int *)local_28 + 0x20c))(param_1,this,param_5);
        (**(code **)(*(int *)param_1 + 0x30))(uVar5);
        goto LAB_1007f6ba;
      }
    }
    this_00 = *(CMFCToolBar **)(pCVar7 + 0xccc);
    if (((this_00 != (CMFCToolBar *)0x0) && (*(int *)(this_00 + 0xb04) != 0)) &&
       (local_bc = CMFCToolBar::GetLockedMenuImages(this_00), local_bc != (CMFCToolBarImages *)0x0))
    {
      local_28 = (CObject *)0x0;
      piVar10 = (int *)(**(code **)(*(int *)pCVar7 + 0x430))(local_c4);
      if ((local_b4 != *piVar10) || (iVar6 = 0, local_b0 != (CObject *)piVar10[1])) {
        local_28 = local_b0;
        iVar6 = local_b4;
      }
      CMFCToolBarImages::PrepareDrawImage(local_bc,local_d8,iVar6,local_28,0);
      local_a8 = local_bc;
    }
  }
  uVar22 = *(uint *)((int)this + 0x20);
  puVar11 = FUN_10037712();
  p_Var12 = CList<unsigned_int,unsigned_int>::Find
                      ((CList<unsigned_int,unsigned_int> *)(puVar11 + 0x58),uVar22,(__POSITION *)0x0
                      );
  local_28 = (CObject *)(uint)(p_Var12 != (__POSITION *)0x0);
  uVar22 = *(uint *)((int)this + 0x20);
  if ((uVar22 == 0x427c) || (uVar22 == 0x427d)) {
    local_28 = (CObject *)0x1;
  }
  local_9c = (CUserTool *)0x0;
  if ((DAT_101685b0 != (void *)0x0) && (*(int *)((int)this + 4) == 0)) {
    local_9c = (CUserTool *)FUN_1006a40b(DAT_101685b0,uVar22);
  }
  local_80 = CMFCTabCtrl::GetDocumentIcon(*(uint *)((int)this + 0x20));
  FUN_10037b18(local_e0);
  if ((*(int *)((int)this + 0x8c) != 0) && (*(int *)((int)this + 0xa4) == 0)) {
    param_5 = 1;
  }
  pCVar4 = CMFCVisualManager::GetInstance();
  local_a4 = (**(code **)(*(int *)pCVar4 + 0x9c))(this,param_5,local_98);
  pCVar4 = CMFCVisualManager::GetInstance();
  iVar6 = (**(code **)(*(int *)pCVar4 + 0x98))();
  local_90 = (uint)(iVar6 == 0);
  if ((param_5 != 0) && (param_7 == 0)) {
    pCVar4 = CMFCVisualManager::GetInstance();
    iVar6 = (**(code **)(*(int *)pCVar4 + 0x98))();
    if (iVar6 != 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x90))
                (local_78,this,*local_8c,local_8c[1],local_8c[2],local_8c[3],&local_a4);
      local_90 = 0;
      pCVar7 = local_94;
    }
  }
  if ((*(uint *)((int)this + 0x24) & 0x10000) != 0) {
    pCVar4 = CMFCVisualManager::GetInstance();
    iVar6 = (**(code **)(*(int *)pCVar4 + 0xb0))();
    if (iVar6 == 0) {
      local_90 = 1;
    }
  }
  iVar6 = *(int *)((int)this + 0x20);
  local_94 = (CObject *)0x0;
  if ((((iVar6 != 0) && (iVar6 != -1)) && (*(int *)((int)this + 0xa8) == 0)) &&
     ((pCVar7 != (CObject *)0x0 && (*(int *)(pCVar7 + 0xcd0) == iVar6)))) {
    local_94 = (CObject *)(**(code **)(*(int *)local_78 + 0x28))(&DAT_10166bc4);
  }
  local_74.left = *local_8c;
  local_74.top = local_8c[1];
  local_74.right = local_8c[2];
  local_74.bottom = local_8c[3];
  pCVar4 = CMFCVisualManager::GetInstance();
  iVar6 = (**(code **)(*(int *)pCVar4 + 0x2d0))();
  local_74.left = local_74.left + iVar6;
  pCVar4 = CMFCVisualManager::GetInstance();
  iVar6 = (**(code **)(*(int *)pCVar4 + 0x2d0))();
  local_74.right = iVar6 + local_b4 + local_74.left;
  local_44.left = local_74.left;
  local_44.top = local_74.top;
  local_44.bottom = local_74.bottom;
  local_44.right = local_74.right;
  pCVar4 = CMFCVisualManager::GetInstance();
  iVar6 = (**(code **)(*(int *)pCVar4 + 0x98))();
  if (iVar6 == 0) {
    InflateRect(&local_44,1,-1);
  }
  else {
    local_44.left = *local_8c;
    local_44.top = local_8c[1];
    local_44.right = local_8c[2];
    local_44.bottom = local_8c[3];
    pCVar4 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar4 + 0x2d8))(&local_24);
    local_44.left = local_44.left + local_24.left;
    local_44.top = local_44.top + local_24.top;
    local_44.bottom = local_44.bottom - local_24.bottom;
    local_44.right = local_74.right;
  }
  if (((DAT_101611ec != 0) &&
      (iVar6 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)((int)this + 0x20)), iVar6 != 0)) &&
     (pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,
                                   *(CObject **)((int)this + 0x6c)), pCVar13 != (CObject *)0x0)) {
    pHVar8 = GetParent(*(HWND *)(pCVar13 + 0x20));
    pCVar9 = CWnd::FromHandle(pHVar8);
    pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar9);
    if (pCVar13 != (CObject *)0x0) {
      FUN_1005a8d4((int)pCVar13);
    }
  }
  if ((param_5 == 0) && (pCVar4 = CMFCVisualManager::GetInstance(), *(int *)(pCVar4 + 0x78) != 0)) {
    local_c0 = (wchar_t *)0x1;
  }
  else {
    local_c0 = (wchar_t *)0x0;
  }
  iVar6 = CMFCToolBarButton::IsDrawImage(this);
  if ((iVar6 == 0) && (local_80 == (HICON__ *)0x0)) {
    uVar5 = *(undefined4 *)((int)this + 0xc);
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 4) = 1;
    if ((*(int *)((int)this + 0x38) < 0) &&
       (*(undefined4 *)((int)this + 4) = 0, *(int *)((int)this + 0x34) < 0)) {
      *(undefined4 *)((int)this + 0xc) = uVar5;
      *(undefined4 *)((int)this + 4) = uVar1;
    }
    pCVar3 = DAT_10166e6c;
    if (((*(int *)((int)this + 4) != 0) && (local_a8 != DAT_10166e6c)) &&
       (local_b8 = DAT_10166e6c, DAT_10166e6c != (CMFCToolBarImages *)0x0)) {
      CMFCToolBarImages::PrepareDrawImage(DAT_10166e6c,local_d8,0,0,0);
      local_a8 = pCVar3;
    }
  }
  local_7c = (int *)0x0;
  local_c8 = 0;
  local_cc = CRgn::vftable;
  local_8 = 0;
  pHVar14 = CreateRectRgnIndirect(&local_74);
  CMenu::Attach((CMenu *)&local_cc,(HMENU__ *)pHVar14);
  if ((local_90 != 0) && (param_7 == 0)) {
    CMFCToolBarButton::FillInterior(this,local_78,(CRect *)&local_44,param_5,1);
  }
  if ((((local_28 == (CObject *)0x0) && (iVar6 = CMFCToolBarButton::IsDrawImage(this), iVar6 != 0))
      && (local_a8 != (CMFCToolBarImages *)0x0)) || (local_80 != (HICON__ *)0x0)) {
    if (((((param_5 == 0) || (param_4 != 0)) ||
         (pCVar4 = CMFCVisualManager::GetInstance(), *(int *)(pCVar4 + 0x70) == 0)) ||
        ((DAT_10166c28 != 0 || (DAT_10166c24 != 0)))) ||
       (local_7c = (int *)0x1, (*(uint *)((int)this + 0x24) & 0x50000) != 0)) {
      local_7c = (int *)0x0;
    }
    CDC::SelectObject(local_78,(CRgn *)&local_cc);
    iVar6 = (int)(local_74.bottom + (-(int)local_b0 - local_74.top)) / 2;
    iVar23 = ((local_74.right - local_b4) - local_74.left) / 2;
    if ((((*(uint *)((int)this + 0x24) & 0x20000) == 0) &&
        ((*(uint *)((int)this + 0x24) & 0x40000) != 0)) && ((param_6 != 0 && (param_4 == 0)))) {
      local_24.left = iVar23 + local_74.left;
      local_24.right = local_b4 + local_24.left;
      local_24.top = local_74.top + iVar6;
      local_24.bottom = (LONG)(local_b0 + local_24.top);
      if (local_80 == (HICON__ *)0x0) {
        if (local_9c == (CUserTool *)0x0) {
          if (local_7c != (int *)0x0) {
            OffsetRect(&local_74,1,1);
            if (*(int *)((int)this + 4) == 0) {
              iVar15 = *(int *)((int)this + 0x34);
            }
            else {
              iVar15 = *(int *)((int)this + 0x38);
            }
            CMFCToolBarImages::Draw
                      (local_a8,local_78,local_74.left + iVar23,local_74.top + iVar6,iVar15,0,0,0,1,
                       0,0xff);
            OffsetRect(&local_74,-2,-2);
          }
          uVar22 = (uint)(local_98 != 0);
          if (*(int *)((int)this + 4) == 0) {
            iVar15 = *(int *)((int)this + 0x34);
          }
          else {
            iVar15 = *(int *)((int)this + 0x38);
          }
          iVar6 = iVar6 + local_74.top;
          iVar23 = iVar23 + local_74.left;
          goto LAB_1007eea9;
        }
LAB_1007ee04:
        local_24.top = iVar6 + local_74.top;
        local_24.left = iVar23 + local_74.left;
        CUserTool::DrawToolIcon(local_9c,local_78,(CRect *)&local_24);
      }
      else {
LAB_1007ede6:
        local_24.top = iVar6 + local_74.top;
        local_24.left = iVar23 + local_74.left;
        CMFCToolBarMenuButton::DrawDocumentIcon(this,local_78,(CRect *)&local_24,local_80);
      }
    }
    else {
      local_24.top = iVar6 + local_74.top;
      local_24.bottom = (LONG)(local_b0 + local_24.top);
      local_24.left = iVar23 + local_74.left;
      local_24.right = local_b4 + local_24.left;
      if (local_80 != (HICON__ *)0x0) goto LAB_1007ede6;
      if (local_9c != (CUserTool *)0x0) goto LAB_1007ee04;
      dVar2 = 1.0;
      iVar6 = local_74.top + iVar6;
      if (DAT_10166c84 != 0) {
        dVar2 = _DAT_10166c7c;
      }
      local_2c = local_24.left;
      if ((dVar2 != 1.0) && (DAT_10166e70 != 0)) {
        iVar23 = local_74.right - local_74.left;
        local_9c = *(CUserTool **)(local_a8 + 0x54);
        if ((iVar23 - *(int *)(local_a8 + 0x50)) / 2 < 0) {
          local_2c = 0;
        }
        else {
          local_9c = *(CUserTool **)(local_a8 + 0x54);
          local_2c = (iVar23 - *(int *)(local_a8 + 0x50)) / 2;
        }
        local_2c = local_24.left + local_2c;
        local_a0 = *(undefined4 *)(local_a8 + 0x50);
        if ((iVar23 - *(int *)(local_a8 + 0x54)) / 2 < 0) {
          iVar23 = 0;
        }
        else {
          local_a0 = *(undefined4 *)(local_a8 + 0x50);
          iVar23 = (iVar23 - *(int *)(local_a8 + 0x54)) / 2;
        }
        iVar6 = iVar6 + iVar23;
      }
      if (local_7c != (int *)0x0) {
        local_2c = local_2c + 1;
        if (*(int *)((int)this + 4) == 0) {
          iVar23 = *(int *)((int)this + 0x34);
        }
        else {
          iVar23 = *(int *)((int)this + 0x38);
        }
        CMFCToolBarImages::Draw(local_a8,local_78,local_2c,iVar6 + 1,iVar23,0,0,0,1,0,0xff);
        local_2c = local_2c + -2;
        iVar6 = iVar6 + -1;
      }
      if ((local_98 == 0) || (param_6 == 0)) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1;
      }
      iVar23 = local_2c;
      if (*(int *)((int)this + 4) == 0) {
        iVar15 = *(int *)((int)this + 0x34);
      }
      else {
        iVar15 = *(int *)((int)this + 0x38);
      }
LAB_1007eea9:
      CMFCToolBarImages::Draw(local_a8,local_78,iVar23,iVar6,iVar15,0,uVar22,0,0,(int)local_c0,0xff)
      ;
    }
    local_7c = (int *)0x1;
  }
  if ((DAT_1016885c != 0) || (local_7c == (int *)0x0)) {
    if (*(CWnd **)((int)this + 0x6c) == (CWnd *)0x0) {
      pCVar9 = AfxGetMainWnd();
      pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar9);
    }
    else {
      pCVar13 = DAT_10168578;
      if (DAT_10168578 == (CObject *)0x0) {
        pCVar13 = (CObject *)CWnd::GetTopLevelFrame(*(CWnd **)((int)this + 0x6c));
      }
    }
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar13);
    if (pCVar7 == (CObject *)0x0) {
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,pCVar13);
      if (pCVar7 == (CObject *)0x0) {
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,pCVar13);
        if ((pCVar7 != (CObject *)0x0) ||
           (pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,pCVar13
                                       ), pCVar7 != (CObject *)0x0)) {
          local_7c = (int *)(**(code **)(*(int *)pCVar7 + 0x1f0))(local_78,this,&local_74);
        }
      }
      else {
        local_7c = (int *)(**(code **)(*(int *)pCVar7 + 0x1d4))(local_78,this,&local_74);
      }
    }
    else {
      local_7c = (int *)(**(code **)(*(int *)pCVar7 + 0x1e8))(local_78,this,&local_74);
    }
  }
  CDC::SelectClipRgn(local_78,(CRgn *)0x0);
  local_28 = *(CObject **)((int)this + 0x24);
  if (((uint)local_28 & 0x10000) == 0) {
    if ((((param_7 == 0) && (local_7c != (int *)0x0)) && (param_5 != 0)) && (local_90 != 0)) {
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x88))
                (local_78,this,local_44.left,local_44.top,local_44.right,local_44.bottom,2);
    }
  }
  else {
    if (local_90 != 0) {
      if ((param_5 != 0) &&
         (pCVar4 = CMFCVisualManager::GetInstance(), *(int *)(pCVar4 + 0x80) != 0)) {
        *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 0x800000;
      }
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x88))
                (local_78,this,local_44.left,local_44.top,local_44.right,local_44.bottom,1);
      *(CObject **)((int)this + 0x24) = local_28;
    }
    if (local_7c == (int *)0x0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0xa4))
                (local_78,this,local_44.left,local_44.top,local_44.right,local_44.bottom,param_5,
                 *(undefined4 *)((int)this + 0xac));
    }
  }
  InflateRect(&local_74,1,0);
  local_80 = (HICON__ *)0xffffffff;
  if (local_7c == (int *)0x0) {
    iVar6 = *(int *)((int)this + 0x20);
    if (iVar6 == 0xf020) {
      local_80 = (HICON__ *)0x3;
    }
    else if (iVar6 == 0xf030) {
      local_80 = (HICON__ *)0x6;
    }
    else if (iVar6 == 0xf060) {
      local_80 = (HICON__ *)0x5;
    }
    else {
      if (iVar6 != 0xf120) goto LAB_1007f15a;
      local_80 = (HICON__ *)0x4;
    }
    local_24.left = local_74.left;
    local_24.top = local_74.top;
    local_24.right = local_74.right;
    local_24.bottom = local_74.bottom;
    pCVar4 = CMFCVisualManager::GetInstance();
    pCVar16 = CMFCVisualManager::GetInstance();
    iVar6 = (**(code **)(*(int *)pCVar4 + 0x2d0))();
    iVar23 = (**(code **)(*(int *)pCVar16 + 0x2d0))();
    InflateRect(&local_24,-iVar23,-iVar6);
    if ((param_7 == 0) && (local_90 != 0)) {
      CMFCToolBarButton::FillInterior(this,local_78,(CRect *)&local_44,param_5,1);
    }
    local_2c = 0;
    local_28 = (CObject *)0x0;
    CMenuImages::Draw(local_78,(IMAGES_IDS)local_80,(CRect *)&local_24,(uint)(local_98 != 0),
                      (CSize *)&local_2c);
    if (((param_5 != 0) && (param_7 == 0)) && (local_90 != 0)) {
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x88))
                (local_78,this,local_44.left,local_44.top,local_44.right,local_44.bottom,2);
    }
  }
LAB_1007f15a:
  local_54 = *local_8c;
  iStack_50 = local_8c[1];
  local_4c = local_8c[2];
  pCStack_48 = (CObject *)local_8c[3];
  pCVar4 = CMFCVisualManager::GetInstance();
  iVar6 = (**(code **)(*(int *)pCVar4 + 0x2d0))();
  local_54 = iVar6 + 2 + local_44.right;
  if (param_5 != 0) {
    pCVar4 = CMFCVisualManager::GetInstance();
    iVar6 = (**(code **)(*(int *)pCVar4 + 0x98))();
    if (iVar6 == 0) {
      local_24.left = local_44.left;
      local_24.top = local_44.top;
      local_24.bottom = local_44.bottom;
      if ((((*(uint *)((int)this + 0x24) & 0x10000) != 0) || (local_7c != (int *)0x0)) ||
         (local_80 != (HICON__ *)0xffffffff)) {
        local_24.left = local_54 + -1;
      }
      local_24.right = local_8c[2] + -1;
      pCVar4 = CMFCVisualManager::GetInstance();
      iVar6 = *(int *)pCVar4;
      if (param_7 == 0) {
        (**(code **)(iVar6 + 0x90))
                  (local_78,this,local_24.left,local_24.top,local_24.right,local_24.bottom,&local_a4
                  );
      }
      else {
LAB_1007f20a:
        local_a4 = (**(code **)(iVar6 + 0x94))(this);
      }
    }
    else if (param_7 != 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      iVar6 = *(int *)pCVar4;
      goto LAB_1007f20a;
    }
  }
  local_7c = FUN_10005e30((int *)(*(int *)((int)this + 0x2c) + -0x10));
  local_7c = local_7c + 4;
  local_8._0_1_ = 1;
  ppuVar17 = FUN_1000ad47();
  FUN_10005e00(&local_9c,(int *)ppuVar17);
  local_8._0_1_ = 2;
  iVar6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     ((int)this + 0x2c),L'\t',0);
  if (-1 < iVar6) {
    puVar18 = (undefined4 *)
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_7c,(int)&local_28);
    local_8._0_1_ = 3;
    FUN_10007c90(&local_7c,puVar18);
    local_8._0_1_ = 2;
    FUN_10001030((undefined4 *)(local_28 + -0x10));
    puVar18 = (undefined4 *)
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         ((int)this + 0x2c),(int)&local_28);
    local_8._0_1_ = 4;
    FUN_10007c90(&local_9c,puVar18);
    local_8._0_1_ = 2;
    FUN_10001030((undefined4 *)(local_28 + -0x10));
  }
  pCVar24 = local_78;
  local_90 = GetTextColor(*(HDC *)(local_78 + 8));
  local_54 = local_54 + 3;
  if (*(int *)((int)this + 0x14) == 0) {
    FUN_10006ce0(&local_c0,(short *)&DAT_10123cf8);
    local_8 = CONCAT31(local_8._1_3_,5);
    do {
      if (local_7c[-3] < 1) {
LAB_1007f325:
        local_81 = '\0';
      }
      else {
        ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                        *)&local_28,
                       (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                        *)&local_7c);
        local_88 = local_88 | 1;
        iVar6 = local_4c - local_54;
        piVar10 = (int *)CDC::GetTextExtent(pCVar24,local_ac);
        local_81 = '\x01';
        if (*piVar10 <= iVar6) goto LAB_1007f325;
      }
      if ((local_88 & 1) != 0) {
        local_88 = local_88 & 0xfffffffe;
        FUN_10001030((undefined4 *)(local_28 + -0x10));
      }
      if (local_81 == '\0') goto LAB_1007f37f;
      puVar18 = (undefined4 *)
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_7c,(int)&local_80);
      local_8._0_1_ = 6;
      FUN_10007c90(&local_7c,puVar18);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_10001030(local_80 + -4);
    } while( true );
  }
  goto LAB_1007f3a0;
LAB_1007f37f:
  ATL::CSimpleStringT<wchar_t,0>::Append
            ((CSimpleStringT<wchar_t,0> *)&local_7c,local_c0,*(int *)(local_c0 + -6));
  local_8._0_1_ = 2;
  FUN_10001030((undefined4 *)(local_c0 + -8));
LAB_1007f3a0:
  if ((DAT_10166c40 == 0) && (DAT_10166e54 == 0)) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_7c,L"&&"
               ,DAT_10168868);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_7c,L'&')
    ;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_7c,
               DAT_10168868,L"&&");
  }
  if (((local_98 != 0) && (param_5 == 0)) &&
     (pCVar4 = CMFCVisualManager::GetInstance(), *(int *)(pCVar4 + 0x74) != 0)) {
    (**(code **)(*(int *)local_78 + 0x30))(DAT_10166abc);
    local_24.left = local_54;
    local_24.top = iStack_50;
    local_24.right = local_4c;
    local_24.bottom = (LONG)pCStack_48;
    OffsetRect(&local_24,1,1);
    (**(code **)(*(int *)local_78 + 0x68))(local_7c,local_7c[-3],&local_24,0x24);
    pCVar24 = local_78;
  }
  (**(code **)(*(int *)pCVar24 + 0x30))(local_a4);
  (**(code **)(*(int *)pCVar24 + 0x68))(local_7c,local_7c[-3],&local_54,0x24);
  if (*(int *)(local_9c + -0xc) != 0) {
    local_24.left = local_54;
    local_24.top = iStack_50;
    local_24.right = (local_4c - local_e0[0]) + -3;
    local_24.bottom = (LONG)pCStack_48;
    if (((local_98 != 0) && (param_5 == 0)) &&
       (pCVar4 = CMFCVisualManager::GetInstance(), *(int *)(pCVar4 + 0x74) != 0)) {
      (**(code **)(*(int *)local_78 + 0x30))(DAT_10166abc);
      local_34._0_4_ = local_24.left;
      local_34._4_4_ = local_24.top;
      local_2c = local_24.right;
      local_28 = (CObject *)local_24.bottom;
      OffsetRect((LPRECT)local_34,1,1);
      (**(code **)(*(int *)local_78 + 0x68))
                (local_9c,*(undefined4 *)(local_9c + -0xc),local_34,0x26);
    }
    pCVar24 = local_78;
    (**(code **)(*(int *)local_78 + 0x30))(local_a4);
    (**(code **)(*(int *)pCVar24 + 0x68))(local_9c,*(undefined4 *)(local_9c + -0xc),&local_24,0x26);
  }
  if (((*(int *)((int)this + 0x20) == -1) || (*(int *)((int)this + 0x90) != 0)) ||
     (*(int *)((int)this + 0xa8) != 0)) {
    local_28 = (CObject *)(**(code **)(*(int *)pCVar24 + 0x28))(&DAT_10166bfc);
    if (local_28 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_64 = *local_8c;
    iStack_60 = local_8c[1];
    iStack_5c = local_8c[2];
    iStack_58 = local_8c[3];
    uVar19 = CWnd::GetExStyle(*(CWnd **)((int)this + 0x6c));
    psVar20 = (short *)&DAT_1012c6a4;
    if ((uVar19 & 0x400000) == 0) {
      psVar20 = (short *)&DAT_1012c6a0;
    }
    FUN_10006ce0(&local_88,psVar20);
    local_8 = CONCAT31(local_8._1_3_,7);
    if (*(int *)((int)this + 0xb4) != 0) {
      sVar21 = _wcslen(L"6");
      FUN_10002180(&local_88,&DAT_1012c69c,sVar21);
    }
    iVar6 = (**(code **)(*(int *)this + 0xec))();
    if (iVar6 != 0) {
      *(int *)((int)this + 0xd8) = *local_8c;
      *(int *)((int)this + 0xdc) = local_8c[1];
      *(int *)((int)this + 0xe0) = local_8c[2];
      *(int *)((int)this + 0xe4) = local_8c[3];
      piVar10 = (int *)CDC::GetTextExtent(local_78,local_ac);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xe0) - *piVar10;
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0xa8))
                (local_78,this,*(int *)((int)this + 0xd8),*(undefined4 *)((int)this + 0xdc),
                 *(undefined4 *)((int)this + 0xe0),*(undefined4 *)((int)this + 0xe4),param_5,
                 local_98);
    }
    pCVar24 = local_78;
    (**(code **)(*(int *)local_78 + 0x68))(local_88,*(undefined4 *)(local_88 - 0xc),&local_64,0x26);
    (**(code **)(*(int *)pCVar24 + 0x28))(local_28);
    local_8._0_1_ = 2;
    FUN_10001030((undefined4 *)(local_88 - 0x10));
  }
  if (local_94 != (CObject *)0x0) {
    (**(code **)(*(int *)pCVar24 + 0x28))(local_94);
  }
  (**(code **)(*(int *)pCVar24 + 0x30))(local_90);
  if (local_bc != (CMFCToolBarImages *)0x0) {
    CMFCToolBarImages::EndDrawImage(local_bc,local_d8);
  }
  if (local_b8 != (CMFCToolBarImages *)0x0) {
    CMFCToolBarImages::EndDrawImage(local_b8,local_d8);
  }
  FUN_10001030((undefined4 *)(local_9c + -0x10));
  FUN_10001030(local_7c + -4);
  local_8 = 0xffffffff;
  local_cc = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_cc);
LAB_1007f6ba:
  FUN_100f90cf();
  return;
}

