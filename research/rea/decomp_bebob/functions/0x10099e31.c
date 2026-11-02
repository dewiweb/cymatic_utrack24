// rea decompile_all
// name: CMFCCustomizeButton::CreatePopupMenu
// address: 0x10099e31
// body: available
// range: 0x10099e31-0x1009a7ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009a1a0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    public: virtual class CMFCPopupMenu * __thiscall CMFCCustomizeButton::CreatePopupMenu(void)
   
   Library: Visual Studio 2010 Release */

CMFCPopupMenu * __thiscall CMFCCustomizeButton::CreatePopupMenu(CMFCCustomizeButton *this)

{
  CObject *this_00;
  CMFCToolBar *this_01;
  CMFCCustomizeButton *pCVar1;
  uint uVar2;
  CMFCPopupMenu *pCVar3;
  int iVar4;
  ulong uVar5;
  undefined **ppuVar6;
  HMODULE pHVar7;
  undefined4 *puVar8;
  CMFCToolBarMenuButton *pCVar9;
  HMENU__ *pHVar10;
  int *piVar11;
  CWnd *pCVar12;
  undefined4 uVar13;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  wchar_t *pwVar14;
  int iVar15;
  int local_14bc;
  uint local_14b8;
  CMFCPopupMenu *local_14b4;
  CMFCCustomizeButton *local_14b0;
  CObject *local_14ac;
  CMFCPopupMenu *local_14a8;
  wchar_t *local_14a4;
  wchar_t *local_14a0;
  CMFCToolBarMenuButton *local_149c;
  wchar_t *local_1498;
  CMFCPopupMenu local_1494 [332];
  int local_1348;
  CMFCToolBarMenuButton local_3d0 [180];
  undefined4 local_31c;
  CMFCToolBarMenuButton local_2e8 [232];
  CMFCToolBarMenuButton local_200 [232];
  CMFCToolBarMenuButton local_118 [28];
  CMFCToolBarMenuButton local_fc [228];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10114c11;
  local_10 = ExceptionList;
  uVar2 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14b0 = this;
  local_14 = uVar2;
  if (((DAT_10166e58 != 0) || (DAT_10166e54 != 0)) ||
     (pCVar3 = CMFCToolBarMenuButton::CreatePopupMenu((CMFCToolBarMenuButton *)this),
     local_14a8 = pCVar3, pCVar3 == (CMFCPopupMenu *)0x0)) goto LAB_1009a7a1;
  if (*(int *)(*(int *)(this + 0xf8) + 0xb04) != 0) {
    iVar4 = (**(code **)(*(int *)pCVar3 + 0x1c0))(uVar2);
    *(undefined4 *)(iVar4 + 0xccc) = *(undefined4 *)(this + 0xf8);
  }
  if ((*(int *)(this + 0x10c) == 0) ||
     (uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xf8)), (uVar5 & 0x400000) != 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  *(undefined4 *)(pCVar3 + 0xeb8) = uVar13;
  if ((*(int *)(this + 0xf8) == 0) ||
     (local_14a4 = (wchar_t *)0x0, *(int *)(*(int *)(this + 0xf8) + 0xb04) != 0)) {
    local_14a4 = (wchar_t *)0x1;
  }
  local_14ac = *(CObject **)(this + 0x114);
  local_14a0 = (wchar_t *)0x1;
joined_r0x10099f21:
  if (local_14ac != (CObject *)0x0) {
    if (local_14ac != (CObject *)0x0) {
      this_00 = *(CObject **)(local_14ac + 8);
      local_14ac = *(CObject **)local_14ac;
      if (((byte)this_00[0x24] & 1) != 0) goto code_r0x10099f48;
      goto LAB_10099f5c;
    }
    goto LAB_1009a1a0;
  }
LAB_1009a137:
  if (0 < *(int *)(local_14b0 + 0xe8)) {
    if (*(int *)(local_14b0 + 0x11c) != 0) {
      CMFCPopupMenu::InsertSeparator(local_14a8,-1);
    }
    if (*(int *)(*(int *)(local_14b0 + 0xf8) + 0xb54) == 0) {
      CMFCToolBarMenuButton::CMFCToolBarMenuButton
                (local_fc,*(uint *)(local_14b0 + 0xe8),(HMENU__ *)0x0,-1,
                 *(wchar_t **)(local_14b0 + 0xf4),0);
      local_8 = 0x14;
      CMFCPopupMenu::InsertItem(local_14a8,local_fc,-1);
      pCVar9 = local_fc;
    }
    else {
      local_14b4 = FUN_1000858a(0x10c4);
      local_8 = 4;
      if (local_14b4 == (CMFCPopupMenu *)0x0) {
        local_149c = (CMFCToolBarMenuButton *)0x0;
      }
      else {
        local_149c = (CMFCToolBarMenuButton *)CMFCPopupMenu::CMFCPopupMenu(local_14b4);
      }
      pCVar1 = local_14b0;
      local_8 = 0xffffffff;
      if (*(int *)(*(int *)(local_14b0 + 0xf8) + 0xb0) == 0) {
        ppuVar6 = FUN_1000ad47();
        FUN_10005e00(&local_1498,(int *)ppuVar6);
        local_8 = 10;
        CWnd::GetWindowTextW
                  (*(CWnd **)(pCVar1 + 0xf8),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_1498
                  );
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_1498
                  );
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_1498
                  );
        if (*(int *)(local_1498 + -6) == 0) {
          pHVar7 = (HMODULE)FUN_1000ac62();
          if (pHVar7 == (HMODULE)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_10006200(&local_1498,pHVar7,0x3ee8);
          }
          if (iVar4 == 0) goto LAB_1009a1a0;
        }
        ppuVar6 = FUN_1000ad47();
        FUN_10005e00(&local_14a0,(int *)ppuVar6);
        local_8._0_1_ = 0xb;
        CWnd::GetDlgCtrlID(*(CWnd **)(pCVar1 + 0xf8));
        FUN_100022f0(&local_14a0,L"%d");
        CMFCPopupMenu::CMFCPopupMenu(local_1494);
        local_8._0_1_ = 0xc;
        pCVar9 = (CMFCToolBarMenuButton *)
                 CMFCToolBarMenuButton::CMFCToolBarMenuButton
                           (local_fc,1,(HMENU__ *)0x0,-1,local_14a0,0);
        local_8._0_1_ = 0xd;
        CMFCPopupMenu::InsertItem(local_1494,pCVar9,-1);
        local_8._0_1_ = 0xc;
        CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_fc);
        iVar15 = 0;
        iVar4 = -1;
        pwVar14 = local_1498;
        pHVar10 = (HMENU__ *)(**(code **)(local_1348 + 0x438))();
        CMFCToolBarMenuButton::CMFCToolBarMenuButton
                  (local_200,0xffffffff,pHVar10,iVar4,pwVar14,iVar15);
        local_8._0_1_ = 0xe;
        CMFCPopupMenu::InsertItem((CMFCPopupMenu *)local_149c,local_200,-1);
        local_8._0_1_ = 0xc;
        CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_200);
        local_8 = CONCAT31(local_8._1_3_,0xb);
        CMFCPopupMenu::~CMFCPopupMenu(local_1494);
        FUN_10001030((undefined4 *)(local_14a0 + -8));
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_1498 + -8));
      }
      else {
        local_14a4 = *(wchar_t **)(*(int *)(*(int *)(local_14b0 + 0xf8) + 0xb0) + 0x28);
        while (local_14a4 != (wchar_t *)0x0) {
          if (local_14a4 == (wchar_t *)0x0) goto LAB_1009a1a0;
          pwVar14 = local_14a4 + 4;
          local_14a4 = *(wchar_t **)local_14a4;
          local_14ac = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                                          *(CObject **)pwVar14);
          if (((local_14ac != (CObject *)0x0) &&
              (iVar4 = (**(code **)(*(int *)local_14ac + 0x178))(), iVar4 != 0)) &&
             (*(int *)(local_14ac + 0xca0) != 0)) {
            ppuVar6 = FUN_1000ad47();
            FUN_10005e00(&local_1498,(int *)ppuVar6);
            local_8 = 5;
            CWnd::GetWindowTextW
                      ((CWnd *)local_14ac,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_1498);
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_1498);
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_1498);
            if (*(int *)(local_1498 + -6) == 0) {
              pHVar7 = (HMODULE)FUN_1000ac62();
              if (pHVar7 == (HMODULE)0x0) {
                iVar4 = 0;
              }
              else {
                iVar4 = FUN_10006200(&local_1498,pHVar7,0x3ee8);
              }
              if (iVar4 == 0) goto LAB_1009a1a0;
            }
            ppuVar6 = FUN_1000ad47();
            FUN_10005e00(&local_14a0,(int *)ppuVar6);
            local_8._0_1_ = 6;
            CWnd::GetDlgCtrlID((CWnd *)local_14ac);
            FUN_100022f0(&local_14a0,L"%d");
            CMFCPopupMenu::CMFCPopupMenu(local_1494);
            local_8._0_1_ = 7;
            pCVar9 = (CMFCToolBarMenuButton *)
                     CMFCToolBarMenuButton::CMFCToolBarMenuButton
                               (local_fc,1,(HMENU__ *)0x0,-1,local_14a0,0);
            local_8._0_1_ = 8;
            CMFCPopupMenu::InsertItem(local_1494,pCVar9,-1);
            local_8._0_1_ = 7;
            CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_fc);
            iVar15 = 0;
            iVar4 = -1;
            pwVar14 = local_1498;
            pHVar10 = (HMENU__ *)(**(code **)(local_1348 + 0x438))();
            CMFCToolBarMenuButton::CMFCToolBarMenuButton
                      (local_200,0xffffffff,pHVar10,iVar4,pwVar14,iVar15);
            local_8._0_1_ = 9;
            CMFCPopupMenu::InsertItem((CMFCPopupMenu *)local_149c,local_200,-1);
            local_8._0_1_ = 7;
            CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_200);
            local_8 = CONCAT31(local_8._1_3_,6);
            CMFCPopupMenu::~CMFCPopupMenu(local_1494);
            FUN_10001030((undefined4 *)(local_14a0 + -8));
            local_8 = 0xffffffff;
            FUN_10001030((undefined4 *)(local_1498 + -8));
          }
        }
      }
      CMFCToolBarMenuButton::CMFCToolBarMenuButton
                (local_2e8,*(uint *)(pCVar1 + 0xe8),(HMENU__ *)0x0,-1,*(wchar_t **)(pCVar1 + 0xf4),0
                );
      local_8 = 0xf;
      CMFCPopupMenu::InsertItem((CMFCPopupMenu *)local_149c,local_2e8,-1);
      ppuVar6 = FUN_1000ad47();
      FUN_10005e00(&local_14a0,(int *)ppuVar6);
      local_8 = CONCAT31(local_8._1_3_,0x10);
      pHVar7 = (HMODULE)FUN_1000ac62();
      if (pHVar7 == (HMODULE)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_10006200(&local_14a0,pHVar7,0x427a);
      }
      if (iVar4 == 0) goto LAB_1009a1a0;
      piVar11 = (int *)(**(code **)(*(int *)local_149c + 0x1c0))();
      iVar15 = 0;
      iVar4 = -1;
      pwVar14 = local_14a0;
      pHVar10 = (HMENU__ *)(**(code **)(*piVar11 + 0x438))();
      CMFCToolBarMenuButton::CMFCToolBarMenuButton
                (local_3d0,0xffffffff,pHVar10,iVar4,pwVar14,iVar15);
      local_31c = 1;
      local_8._0_1_ = 0x11;
      (**(code **)(*(int *)local_149c + 4))(1);
      this_01 = *(CMFCToolBar **)(pCVar1 + 0xf8);
      if (((this_01 != (CMFCToolBar *)0x0) && (*(int *)(this_01 + 0xb58) != 0)) &&
         (iVar4 = CMFCToolBar::CanHandleSiblings(this_01), iVar4 != 0)) {
        ppuVar6 = FUN_1000ad47();
        FUN_10005e00(&local_14a4,(int *)ppuVar6);
        local_8 = CONCAT31(local_8._1_3_,0x12);
        iVar4 = CMFCToolBar::IsOneRowWithSibling(*(CMFCToolBar **)(pCVar1 + 0xf8));
        if (iVar4 == 0) {
          pHVar7 = (HMODULE)FUN_1000ac62();
          if (pHVar7 != (HMODULE)0x0) {
            uVar2 = 0x4283;
            goto LAB_1009a64b;
          }
LAB_1009a642:
          iVar4 = 0;
        }
        else {
          pHVar7 = (HMODULE)FUN_1000ac62();
          if (pHVar7 == (HMODULE)0x0) goto LAB_1009a642;
          uVar2 = 0x4284;
LAB_1009a64b:
          iVar4 = FUN_10006200(&local_14a4,pHVar7,uVar2);
        }
        if (iVar4 == 0) {
LAB_1009a1a0:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        CMFCCustomizeMenuButton(local_118,0xffffffec,(HMENU__ *)0x0,-1,local_14a4,0);
        DAT_1016977c = *(undefined4 *)(pCVar1 + 0xf8);
        local_8._0_1_ = 0x13;
        local_18 = 1;
        CMFCPopupMenu::InsertItem(local_14a8,local_118,-1);
        local_8._0_1_ = 0x12;
        FUN_100d3eea(local_118);
        local_8._0_1_ = 0x11;
        FUN_10001030((undefined4 *)(local_14a4 + -8));
      }
      pCVar3 = local_14a8;
      CMFCPopupMenu::InsertItem(local_14a8,local_3d0,-1);
      CMFCPopupMenu::SetQuickMode(pCVar3);
      *(undefined4 *)(pCVar3 + 0x10b8) = 1;
      local_8 = CONCAT31(local_8._1_3_,0x10);
      CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_3d0);
      FUN_10001030((undefined4 *)(local_14a0 + -8));
      pCVar9 = local_2e8;
    }
    local_8 = 0xffffffff;
    CMFCToolBarMenuButton::~CMFCToolBarMenuButton(pCVar9);
  }
  if (*(CWnd **)(local_14b0 + 0xf8) != (CWnd *)0x0) {
    pCVar12 = CWnd::GetOwner(*(CWnd **)(local_14b0 + 0xf8));
    *(CWnd **)(local_14a8 + 0x124) = pCVar12;
  }
LAB_1009a7a1:
  ExceptionList = local_10;
  pCVar3 = (CMFCPopupMenu *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pCVar3;
code_r0x10099f48:
  if (local_14a0 == (wchar_t *)0x0) {
    if (local_14ac == (CObject *)0x0) goto LAB_1009a137;
LAB_10099f5c:
    local_14a0 = (wchar_t *)0x0;
    iVar4 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420);
    if (iVar4 == 0) {
      if (*(uint *)(this_00 + 0x20) == 0) {
        local_149c = (CMFCToolBarMenuButton *)CMFCPopupMenu::InsertSeparator(local_14a8,-1);
      }
      else {
        if (local_14a4 == (wchar_t *)0x0) {
          if (*(int *)(this_00 + 4) == 0) {
            iVar4 = *(int *)(this_00 + 0x34);
          }
          else {
            iVar4 = *(int *)(this_00 + 0x38);
          }
        }
        else {
          iVar4 = -1;
        }
        pCVar9 = (CMFCToolBarMenuButton *)
                 CMFCToolBarMenuButton::CMFCToolBarMenuButton
                           (local_2e8,*(uint *)(this_00 + 0x20),(HMENU__ *)0x0,iVar4,
                            *(wchar_t **)(this_00 + 0x2c),*(int *)(this_00 + 4));
        local_8 = 0;
        local_149c = (CMFCToolBarMenuButton *)CMFCPopupMenu::InsertItem(local_14a8,pCVar9,-1);
        local_8 = 0xffffffff;
        CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_2e8);
      }
    }
    else {
      local_149c = (CMFCToolBarMenuButton *)
                   CMFCPopupMenu::InsertItem(local_14a8,(CMFCToolBarMenuButton *)this_00,-1);
    }
    if ((-1 < (int)local_149c) &&
       (local_149c = CMFCPopupMenu::GetMenuItem(local_14a8,(int)local_149c),
       local_149c != (CMFCToolBarMenuButton *)0x0)) {
      if (((*(int *)(*(int *)(local_149c + 0x2c) + -0xc) == 0) ||
          (iVar4 = CObject::IsKindOf(this_00,(CRuntimeClass *)
                                             &PTR_s_CMFCToolBarComboBoxButton_1013740f_1_101624b8),
          iVar4 != 0)) && (*(int *)(local_149c + 0x20) != 0)) {
        ppuVar6 = FUN_1000ad47();
        FUN_10005e00(&local_1498,(int *)ppuVar6);
        pCVar9 = local_149c;
        local_14b8 = *(uint *)(local_149c + 0x20);
        local_8 = 1;
        pHVar7 = (HMODULE)FUN_1000ac62();
        if (((pHVar7 != (HMODULE)0x0) &&
            (iVar4 = FUN_10006200(&local_1498,pHVar7,local_14b8), iVar4 != 0)) &&
           (iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_1498,L'\n',0), iVar4 != -1)) {
          puVar8 = (undefined4 *)
                   ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                             ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_1498,(int)&local_14bc);
          this_02 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                    (pCVar9 + 0x2c);
          local_8._0_1_ = 2;
          FUN_10007c90(this_02,puVar8);
          local_8._0_1_ = 1;
          FUN_10001030((undefined4 *)(local_14bc + -0x10));
          iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                            (this_02,L'\n',0);
          if (iVar4 != -1) {
            puVar8 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                               (this_02,(int)&local_14b4);
            local_8 = CONCAT31(local_8._1_3_,3);
            FUN_10007c90(this_02,puVar8);
            FUN_10001030((undefined4 *)(local_14b4 + -0x10));
          }
        }
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_1498 + -8));
      }
      *(int *)(local_149c + 8) = 1;
    }
  }
  goto joined_r0x10099f21;
}

