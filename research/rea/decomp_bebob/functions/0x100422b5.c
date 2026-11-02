// rea decompile_all
// name: CDockingManager::BuildPanesMenu
// address: 0x100422b5
// body: available
// range: 0x100422b5-0x100428f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042752 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDockingManager::BuildPanesMenu(class CMenu &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingManager::BuildPanesMenu(CDockingManager *this,CMenu *param_1,int param_2)

{
  undefined4 *puVar1;
  CObject *pCVar2;
  BOOL BVar3;
  int iVar4;
  undefined **ppuVar5;
  LPCWSTR pWVar6;
  uint uVar7;
  UINT_PTR UVar8;
  int *piVar9;
  CWnd *pCVar10;
  bool bVar11;
  LPCWSTR *ppWVar12;
  HWND hWnd;
  UINT uCmd;
  CObList local_b8 [4];
  undefined4 *local_b4;
  CMap<unsigned_int,unsigned_int,int,int> *local_9c;
  LPCWSTR local_98;
  undefined4 *local_94;
  LPCWSTR local_90;
  LPCWSTR local_8c;
  int local_88;
  CDockingManager *local_84;
  HWND local_80;
  LPCWSTR local_7c;
  undefined4 local_78;
  undefined4 local_74;
  HWND__ *local_58;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x100422c4;
  local_84 = this;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x1bc));
  CObList::CObList(local_b8,10);
  local_8 = 0;
  FUN_1003df08(this,local_b8,1,(CRuntimeClass *)0x0,0);
  local_88 = 0;
  do {
    if ((local_88 == 1) && (param_2 != 0)) break;
    local_80 = (HWND)0x1;
    puVar1 = local_b4;
    while (puVar1 != (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_94 = (undefined4 *)*puVar1;
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)puVar1[2]);
      this = local_84;
      puVar1 = local_94;
      if ((((pCVar2 != (CObject *)0x0) &&
           (BVar3 = IsWindow(*(HWND *)(pCVar2 + 0x20)), this = local_84, puVar1 = local_94,
           BVar3 != 0)) &&
          (iVar4 = (**(code **)(*(int *)pCVar2 + 0x288))(), this = local_84, puVar1 = local_94,
          iVar4 != 0)) &&
         (iVar4 = (**(code **)(*(int *)pCVar2 + 0x1c4))(), this = local_84, puVar1 = local_94,
         iVar4 != 0)) {
        iVar4 = CObject::IsKindOf(pCVar2,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
        if (iVar4 == 0) {
          bVar11 = local_88 == 0;
        }
        else {
          bVar11 = local_88 == 1;
        }
        this = local_84;
        puVar1 = local_94;
        if (!bVar11) {
          ppuVar5 = FUN_1000ad47();
          FUN_10005e00(&local_90,(int *)ppuVar5);
          local_8 = CONCAT31(local_8._1_3_,1);
          (**(code **)(*(int *)pCVar2 + 0x28c))(&local_90);
          iVar4 = CObject::IsKindOf(pCVar2,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
          if ((iVar4 == 0) ||
             (iVar4 = CObject::IsKindOf(pCVar2,(CRuntimeClass *)
                                               &PTR_s_CMFCOutlookBar_10135f0e_2_101623c0),
             iVar4 != 0)) {
            iVar4 = CObject::IsKindOf(pCVar2,(CRuntimeClass *)&PTR_s_CMFCReBar_1012e7f8);
            if (iVar4 == 0) {
              ppWVar12 = &local_8c;
              uVar7 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
              iVar4 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                                ((CMap<unsigned_int,unsigned_int,int,int> *)(local_84 + 0x1bc),uVar7
                                 ,(int *)ppWVar12);
              if (iVar4 == 0) {
                if (((local_80 != (HWND)0x0) && (local_88 == 1)) &&
                   (iVar4 = GetMenuItemCount(*(HMENU *)(param_1 + 4)), 0 < iVar4)) {
                  AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
                }
                local_8c = local_90;
                UVar8 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
                AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,local_8c);
                local_80 = (HWND)0x0;
                uVar7 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
                piVar9 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                                   ((CMap<unsigned_int,unsigned_int,int,int> *)(local_84 + 0x1bc),
                                    uVar7);
                *piVar9 = (int)pCVar2;
              }
            }
            else {
              pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_1012e7f8,pCVar2);
              local_9c = (CMap<unsigned_int,unsigned_int,int,int> *)FUN_10096195(pCVar2);
              local_8c = (LPCWSTR)SendMessageW(*(HWND *)(local_9c + 0x20),0x40c,0,0);
              local_78 = *(undefined4 *)(pCVar2 + 0x2ac);
              local_7c = (LPCWSTR)0x0;
              local_74 = 0x230;
              if (local_8c != (LPCWSTR)0x0) {
                do {
                  SendMessageW(*(HWND *)(local_9c + 0x20),0x41c,(WPARAM)local_7c,(LPARAM)&local_78);
                  pCVar10 = CWnd::FromHandlePermanent(local_58);
                  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,
                                              (CObject *)pCVar10);
                  if ((pCVar2 != (CObject *)0x0) &&
                     (iVar4 = (**(code **)(*(int *)pCVar2 + 0x288))(), iVar4 != 0)) {
                    (**(code **)(*(int *)pCVar2 + 0x28c))(&local_90);
                    if ((local_80 != (HWND)0x0) &&
                       ((local_88 == 1 &&
                        (iVar4 = GetMenuItemCount(*(HMENU *)(param_1 + 4)), 0 < iVar4)))) {
                      AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
                    }
                    local_98 = local_90;
                    UVar8 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
                    AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,local_98);
                    local_80 = (HWND)0x0;
                    uVar7 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
                    piVar9 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                                       ((CMap<unsigned_int,unsigned_int,int,int> *)
                                        (local_84 + 0x1bc),uVar7);
                    *piVar9 = (int)pCVar2;
                  }
                  local_7c = (LPCWSTR)((int)local_7c + 1);
                } while (local_7c < local_8c);
              }
            }
          }
          else {
            pWVar6 = (LPCWSTR)(**(code **)(*(int *)pCVar2 + 0x3a4))();
            local_98 = pWVar6;
            if (pWVar6 != (LPCWSTR)0x0) {
              local_7c = (LPCWSTR)0x0;
              iVar4 = (**(code **)(*(int *)pWVar6 + 0x1a8))();
              if (0 < iVar4) {
                do {
                  pCVar2 = (CObject *)(**(code **)(*(int *)pWVar6 + 0x1ac))(local_7c);
                  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,pCVar2);
                  if ((pCVar2 != (CObject *)0x0) &&
                     (iVar4 = (**(code **)(*(int *)pCVar2 + 0x288))(), iVar4 != 0)) {
                    ppWVar12 = &local_8c;
                    uVar7 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
                    local_9c = (CMap<unsigned_int,unsigned_int,int,int> *)(local_84 + 0x1bc);
                    iVar4 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                                      (local_9c,uVar7,(int *)ppWVar12);
                    if (iVar4 == 0) {
                      (**(code **)(*(int *)pCVar2 + 0x28c))(&local_90);
                      if (((local_80 != (HWND)0x0) && (local_88 == 1)) &&
                         (iVar4 = GetMenuItemCount(*(HMENU *)(param_1 + 4)), 0 < iVar4)) {
                        AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
                      }
                      local_80 = (HWND)local_90;
                      UVar8 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
                      AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,(LPCWSTR)local_80);
                      local_80 = (HWND)0x0;
                      uVar7 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
                      piVar9 = CMap<unsigned_int,unsigned_int,int,int>::operator[](local_9c,uVar7);
                      *piVar9 = (int)pCVar2;
                    }
                  }
                  local_7c = (LPCWSTR)((int)local_7c + 1);
                  iVar4 = (**(code **)(*(int *)local_98 + 0x1a8))();
                  pWVar6 = local_98;
                } while ((int)local_7c < iVar4);
              }
            }
          }
          local_8 = local_8 & 0xffffff00;
          FUN_10001030((undefined4 *)(local_90 + -8));
          this = local_84;
          puVar1 = local_94;
        }
      }
    }
    local_88 = local_88 + 1;
  } while (local_88 < 2);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                              *(CObject **)(this + 0xe4));
  if ((pCVar2 != (CObject *)0x0) && (param_2 == 0)) {
    uCmd = 5;
    hWnd = *(HWND *)(pCVar2 + 0x110);
    while (local_80 = GetWindow(hWnd,uCmd), local_80 != (HWND)0x0) {
      pCVar10 = CWnd::FromHandle(local_80);
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,(CObject *)pCVar10
                                 );
      if ((pCVar2 != (CObject *)0x0) &&
         (pCVar10 = *(CWnd **)(pCVar2 + 0x434), this = local_84, pCVar10 != (CWnd *)0x0)) {
        ppuVar5 = FUN_1000ad47();
        FUN_10005e00(&local_7c,(int *)ppuVar5);
        local_8._0_1_ = 2;
        (**(code **)(*(int *)pCVar10 + 0x28c))(&local_7c);
        local_8c = local_7c;
        UVar8 = CWnd::GetDlgCtrlID(pCVar10);
        AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,local_8c);
        uVar7 = CWnd::GetDlgCtrlID(pCVar10);
        piVar9 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                           ((CMap<unsigned_int,unsigned_int,int,int> *)(local_84 + 0x1bc),uVar7);
        *piVar9 = (int)pCVar10;
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10001030((undefined4 *)(local_7c + -8));
        this = local_84;
      }
      uCmd = 2;
      hWnd = local_80;
    }
    local_80 = (HWND)0x0;
    puVar1 = *(undefined4 **)(this + 0x1a0);
    while (puVar1 != (undefined4 *)0x0) {
      local_94 = (undefined4 *)*puVar1;
      pCVar10 = CWnd::FromHandlePermanent((HWND__ *)puVar1[2]);
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)pCVar10)
      ;
      puVar1 = local_94;
      this = local_84;
      if (pCVar2 != (CObject *)0x0) {
        ppuVar5 = FUN_1000ad47();
        FUN_10005e00(&local_7c,(int *)ppuVar5);
        local_8._0_1_ = 3;
        (**(code **)(*(int *)pCVar2 + 0x28c))(&local_7c);
        local_8c = local_7c;
        UVar8 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
        AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,local_8c);
        uVar7 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
        piVar9 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                           ((CMap<unsigned_int,unsigned_int,int,int> *)(local_84 + 0x1bc),uVar7);
        *piVar9 = (int)pCVar2;
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10001030((undefined4 *)(local_7c + -8));
        puVar1 = local_94;
        this = local_84;
      }
    }
  }
  if (*(int *)(this + 0x1e8) != 0) {
    iVar4 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    if (0 < iVar4) {
      AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
    }
    AppendMenuW(*(HMENU *)(param_1 + 4),0,*(UINT_PTR *)(this + 0x1e8),*(LPCWSTR *)(this + 0x1ec));
  }
  local_8 = 0xffffffff;
  FUN_1001e259(local_b8);
  FUN_100f90cf();
  return;
}

