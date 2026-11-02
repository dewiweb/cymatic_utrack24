// rea decompile_all
// name: CMFCToolBarComboBoxButton::NotifyCommand
// address: 0x100d1318
// body: available
// range: 0x100d1318-0x100d16dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d1516 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarComboBoxButton::NotifyCommand(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarComboBoxButton::NotifyCommand(CMFCToolBarComboBoxButton *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  int iVar6;
  CObject *pCVar7;
  undefined **ppuVar8;
  WPARAM wParam;
  CObList local_4c [4];
  undefined4 *local_48;
  CObList local_30 [4];
  int *local_2c;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x100d1324;
  iVar6 = *(int *)(this + 0xb4);
  if (iVar6 == 0) {
    return 0;
  }
  if (*(int *)(iVar6 + 0x20) == 0) {
    return 0;
  }
  if (DAT_101624d4 != 0) {
    if (param_1 == 0) {
      return 1;
    }
    pHVar3 = GetParent(*(HWND *)(iVar6 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    if (pCVar4 != (CWnd *)0x0) {
      pHVar3 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      InvalidateRect(*(HWND *)(pCVar4 + 0x20),(RECT *)(this + 0x90),1);
      pHVar3 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      UpdateWindow(*(HWND *)(pCVar4 + 0x20));
    }
  }
  if (param_1 == 1) {
    if (*(int *)(this + 0xb0) == 0) {
      return 1;
    }
    ppuVar8 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar8);
    local_8 = 1;
    LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
    CComboBox::GetLBText
              (*(CComboBox **)(this + 0xb4),LVar5,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    CWnd::SetWindowTextW(*(CWnd **)(this + 0xb0),local_14[0]);
    FUN_10001030((undefined4 *)(local_14[0] + -8));
    return 1;
  }
  if (param_1 == 3) {
    pCVar4 = *(CWnd **)(this + 0xb0);
  }
  else {
    if (param_1 == 4) {
      return 1;
    }
    if (param_1 == 5) {
      CWnd::GetWindowTextW
                (*(CWnd **)(this + 0xb4),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0xb8)
                );
      if ((*(int *)(this + 0xb0) != 0) && (*(int *)(*(int *)(this + 0xb0) + 0x20) != 0)) {
        ppuVar8 = FUN_1000ad47();
        FUN_10005e00(&param_1,(int *)ppuVar8);
        local_8 = 2;
        CWnd::GetWindowTextW
                  (*(CWnd **)(this + 0xb0),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1);
        pCVar4 = *(CWnd **)(this + 0xb4);
        if ((pCVar4 != (CWnd *)0x0) && (*(HWND *)(pCVar4 + 0x20) != (HWND)0x0)) {
          LVar5 = SendMessageW(*(HWND *)(pCVar4 + 0x20),0x147,0,0);
          local_14[0] = (wchar_t *)(LVar5 + 1);
          wParam = SendMessageW(*(HWND *)(pCVar4 + 0x20),0x158,(WPARAM)local_14[0],param_1);
          if ((wParam != 0xffffffff) ||
             (wParam = SendMessageW(*(HWND *)(pCVar4 + 0x20),0x14c,(WPARAM)local_14[0],param_1),
             wParam != 0xffffffff)) {
            SendMessageW(*(HWND *)(pCVar4 + 0x20),0x14e,wParam,0);
          }
          CWnd::SetWindowTextW(pCVar4,(wchar_t *)param_1);
        }
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(param_1 + -0x10));
      }
      CObList::CObList(local_4c,10);
      local_8 = 3;
      iVar6 = FUN_1002643c(*(int *)(this + 0x20),local_4c);
      puVar2 = local_48;
      if (0 < iVar6) {
        while (puVar2 != (undefined4 *)0x0) {
          if (puVar2 == (undefined4 *)0x0) goto LAB_100d1516;
          puVar1 = puVar2 + 2;
          puVar2 = (undefined4 *)*puVar2;
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)
                                      &PTR_s_CMFCToolBarComboBoxButton_1013740f_1_101624b8,
                                      (CObject *)*puVar1);
          if ((pCVar7 != (CObject *)0x0) && (pCVar7 != (CObject *)this)) {
            if (*(CWnd **)(pCVar7 + 0xb4) != (CWnd *)0x0) {
              CWnd::SetWindowTextW(*(CWnd **)(pCVar7 + 0xb4),*(wchar_t **)(this + 0xb8));
            }
            FUN_10007c90(pCVar7 + 0xb8,(undefined4 *)(this + 0xb8));
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_1001e259(local_4c);
      return 1;
    }
    if (param_1 == 6) {
      return 1;
    }
    if (param_1 != 9) {
      return 0;
    }
    LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
    *(LRESULT *)(this + 0x74) = LVar5;
    if (LVar5 < 0) {
      return 0;
    }
    CComboBox::GetLBText
              (*(CComboBox **)(this + 0xb4),LVar5,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0xb8));
    if (*(CWnd **)(this + 0xb0) != (CWnd *)0x0) {
      CWnd::SetWindowTextW(*(CWnd **)(this + 0xb0),*(wchar_t **)(this + 0xb8));
    }
    CObList::CObList(local_30,10);
    local_8 = 0;
    iVar6 = FUN_1002643c(*(int *)(this + 0x20),local_30);
    if (0 < iVar6) {
      while (local_2c != (int *)0x0) {
        if (local_2c == (int *)0x0) {
LAB_100d1516:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        param_1 = *local_2c;
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)
                                    &PTR_s_CMFCToolBarComboBoxButton_1013740f_1_101624b8,
                                    (CObject *)local_2c[2]);
        local_2c = (int *)param_1;
        if ((pCVar7 != (CObject *)0x0) && (pCVar7 != (CObject *)this)) {
          iVar6 = 0;
          LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
          SelectItem((CMFCToolBarComboBoxButton *)pCVar7,LVar5,iVar6);
          iVar6 = *(int *)(pCVar7 + 0xb4);
          local_2c = (int *)param_1;
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
            pHVar3 = GetParent(*(HWND *)(iVar6 + 0x20));
            pCVar4 = CWnd::FromHandle(pHVar3);
            local_2c = (int *)param_1;
            if (pCVar4 != (CWnd *)0x0) {
              pHVar3 = GetParent(*(HWND *)(*(int *)(pCVar7 + 0xb4) + 0x20));
              pCVar4 = CWnd::FromHandle(pHVar3);
              InvalidateRect(*(HWND *)(pCVar4 + 0x20),(RECT *)(pCVar7 + 0x90),1);
              pHVar3 = GetParent(*(HWND *)(*(int *)(pCVar7 + 0xb4) + 0x20));
              pCVar4 = CWnd::FromHandle(pHVar3);
              UpdateWindow(*(HWND *)(pCVar4 + 0x20));
              local_2c = (int *)param_1;
            }
          }
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_30);
    pCVar4 = *(CWnd **)(this + 0xb0);
  }
  if (pCVar4 != (CWnd *)0x0) {
    CWnd::SetFocus(pCVar4);
  }
  return 1;
}

