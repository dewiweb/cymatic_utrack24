// rea decompile_all
// name: CMFCToolBarComboBoxButton::OnChangeParentWnd
// address: 0x100d0ee6
// body: available
// range: 0x100d0ee6-0x100d1311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d0f2f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::OnChangeParentWnd(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarComboBoxButton::OnChangeParentWnd(CMFCToolBarComboBoxButton *this,CWnd *param_1)

{
  LPARAM *pLVar1;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  LRESULT LVar10;
  undefined **ppuVar11;
  HWND__ *pHVar12;
  int *piVar13;
  WPARAM wParam;
  undefined4 local_34;
  undefined4 *local_2c;
  WPARAM local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100d0ef2;
  CMFCToolBarButton::OnChangeParentWnd((CMFCToolBarButton *)this,param_1);
  iVar7 = *(int *)(this + 0xb4);
  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
    pHVar5 = GetParent(*(HWND *)(iVar7 + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    if (pCVar6 == (CWnd *)0x0) {
LAB_100d0f2f:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if (param_1 != (CWnd *)0x0) {
      if (pCVar6 == (CWnd *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(pCVar6 + 0x20);
      }
      if (iVar7 == *(int *)(param_1 + 0x20)) goto LAB_100d130a;
    }
    (**(code **)(**(int **)(this + 0xb4) + 0x60))();
    if (*(int **)(this + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb4) + 4))(1);
    }
    *(undefined4 *)(this + 0xb4) = 0;
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb0) + 0x60))();
      if (*(int **)(this + 0xb0) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xb0) + 4))(1);
      }
      *(undefined4 *)(this + 0xb0) = 0;
    }
  }
  if ((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    if ((DAT_10166e54 != 0) || (local_28 = 0, (*(uint *)(this + 0x24) & 0x40000) != 0)) {
      local_28 = 1;
    }
    local_24.left = *(LONG *)(this + 0x54);
    local_24.top = *(LONG *)(this + 0x58);
    local_24.right = *(LONG *)(this + 0x5c);
    local_24.bottom = *(LONG *)(this + 0x60);
    InflateRect(&local_24,-2,0);
    local_24.bottom = *(int *)(this + 0x78) + local_24.top;
    pCVar6 = (CWnd *)(**(code **)(*(int *)this + 0xd0))(param_1,&local_24);
    *(CWnd **)(this + 0xb4) = pCVar6;
    if (pCVar6 != (CWnd *)0x0) {
      if (*(int *)(pCVar6 + 0x20) != 0) {
        CWnd::EnableWindow(pCVar6,(uint)(local_28 == 0));
        RedrawWindow(*(HWND *)(*(int *)(this + 0xb4) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
      if ((DAT_101624d4 != 0) &&
         (uVar8 = CWnd::GetExStyle(*(CWnd **)(this + 0xb4)), ((byte)uVar8 & 3) == 2)) {
        local_34 = 0x50001080;
        uVar8 = CWnd::GetExStyle(*(CWnd **)(this + 0xb4));
        if ((uVar8 & 0x10000) != 0) {
          local_34 = 0x50011080;
        }
        iVar7 = (**(code **)(*(int *)this + 0xd4))(param_1,&local_24,local_34);
        *(int *)(this + 0xb0) = iVar7;
        if (iVar7 == 0) goto LAB_100d130a;
        SendMessageW(*(HWND *)(iVar7 + 0x20),0x30,DAT_10166bb8,1);
        pHVar5 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar5);
        pCVar6 = CWnd::GetOwner(pCVar6);
        if (pCVar6 == (CWnd *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(pCVar6 + 0x20);
        }
        *(undefined4 *)(*(int *)(this + 0xb0) + 0x54) = uVar9;
        pCVar6 = *(CWnd **)(this + 0xb0);
        if ((pCVar6 != (CWnd *)0x0) && (*(int *)(pCVar6 + 0x20) != 0)) {
          CWnd::EnableWindow(pCVar6,(uint)(local_28 == 0));
          RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
        }
      }
      AdjustRect(this);
      SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x30,DAT_10166bb8,1);
      LVar10 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
      if (LVar10 < 1) {
        SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x14b,0,0);
        local_2c = *(undefined4 **)(this + 0xdc);
        puVar4 = *(undefined4 **)(this + 0xc0);
        while (puVar4 != (undefined4 *)0x0) {
          if ((local_2c == (undefined4 *)0x0) || (puVar4 == (undefined4 *)0x0)) goto LAB_100d0f2f;
          puVar3 = (undefined4 *)*puVar4;
          piVar13 = FUN_10005e30((int *)(puVar4[2] + -0x10));
          wParam = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x143,0,
                                (LPARAM)(piVar13 + 4));
          pLVar1 = local_2c + 2;
          local_2c = (undefined4 *)*local_2c;
          SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x151,wParam,*pLVar1);
          FUN_10001030(piVar13);
          puVar4 = puVar3;
        }
        if (*(WPARAM *)(this + 0x74) != 0xffffffff) {
          SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x14e,*(WPARAM *)(this + 0x74),0);
        }
      }
      else {
        FUN_1005419f((int)(this + 0xbc));
        (**(code **)(*(int *)this + 0xe0))();
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
        local_28 = 0;
        LVar10 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
        if (0 < LVar10) {
          do {
            ppuVar11 = FUN_1000ad47();
            FUN_10005e00(&local_2c,(int *)ppuVar11);
            local_8 = 0;
            CComboBox::GetLBText
                      (*(CComboBox **)(this + 0xb4),local_28,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_2c);
            AddTail(this + 0xbc,&local_2c);
            pHVar12 = (HWND__ *)
                      SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x150,local_28,0);
            CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),pHVar12);
            local_8 = 0xffffffff;
            FUN_10001030(local_2c + -4);
            local_28 = local_28 + 1;
            LVar10 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
          } while ((int)local_28 < LVar10);
        }
        LVar10 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
        *(LRESULT *)(this + 0x74) = LVar10;
      }
      if (*(int *)(this + 0x74) != -1) {
        LVar10 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
        if (*(int *)(this + 0x74) < LVar10) {
          pCVar2 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (this + 0xb8);
          CComboBox::GetLBText(*(CComboBox **)(this + 0xb4),*(int *)(this + 0x74),pCVar2);
          CWnd::SetWindowTextW(*(CWnd **)(this + 0xb4),*(wchar_t **)pCVar2);
          if (*(CWnd **)(this + 0xb0) != (CWnd *)0x0) {
            CWnd::SetWindowTextW(*(CWnd **)(this + 0xb0),*(wchar_t **)pCVar2);
          }
        }
      }
    }
  }
LAB_100d130a:
  FUN_100f90cf();
  return;
}

