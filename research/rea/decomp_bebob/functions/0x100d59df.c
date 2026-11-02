// rea decompile_all
// name: CMFCToolBarsMenuPropertyPage::OnInitDialog
// address: 0x100d59df
// body: available
// range: 0x100d59df-0x100d6042 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d5c22 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarsMenuPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarsMenuPropertyPage::OnInitDialog(CMFCToolBarsMenuPropertyPage *this)

{
  int *piVar1;
  undefined4 *puVar2;
  LRESULT LVar3;
  AFX_MODULE_STATE *pAVar4;
  int iVar5;
  undefined **ppuVar6;
  HMODULE pHVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  CObject *pCVar10;
  CStringList local_48 [4];
  undefined4 *local_44;
  int *local_2c;
  CObject *local_28;
  int *local_24;
  int *local_20;
  WPARAM local_1c;
  undefined4 *local_18;
  CObject *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x100d59eb;
  CDialog::OnInitDialog((CDialog *)this);
  if (*(int *)(this + 0x53c) == 999) {
    LVar3 = SendMessageW(*(HWND *)(this + 0x3f4),0x146,0,0);
    *(LRESULT *)(this + 0x53c) = LVar3 + -1;
    CWnd::UpdateData((CWnd *)this,0);
  }
  iVar5 = *(int *)(this + 0x544);
  puVar2 = DAT_10166ec0;
  while ((iVar5 == 0 && (puVar2 != (undefined4 *)0x0))) {
    local_18 = (undefined4 *)*puVar2;
    local_28 = (CObject *)puVar2[2];
    if (local_28 == (CObject *)0x0) goto LAB_100d5c22;
    pCVar9 = CWnd::FromHandlePermanent(*(HWND__ **)(local_28 + 0x20));
    if (pCVar9 != (CWnd *)0x0) {
      pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1012aa4e_2_101611d0,local_28)
      ;
      *(CObject **)(this + 0x544) = pCVar10;
    }
    iVar5 = *(int *)(this + 0x544);
    puVar2 = local_18;
  }
  local_18 = puVar2;
  if (*(int *)(this + 0x544) == 0) {
    CWnd::EnableWindow((CWnd *)(this + 0x4bc),0);
    iVar5 = 0;
    pCVar9 = CWnd::GetDlgItem((CWnd *)this,0x40f0);
    CWnd::EnableWindow(pCVar9,iVar5);
    pHVar7 = (HMODULE)FUN_1000ac62();
    if (pHVar7 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(this + 0x530,pHVar7,0x3e87);
    }
    if (iVar5 == 0) goto LAB_100d5c22;
    CWnd::UpdateData((CWnd *)this,0);
  }
  else {
    local_24 = (int *)0xffffffff;
    *(CMFCToolBarsMenuPropertyPage **)(*(int *)(this + 0x544) + 0xd10) = this;
    *(int *)(this + 0x550) = (*(int **)(this + 0x544))[0x335];
    (**(code **)(**(int **)(this + 0x544) + 0x3b0))(0xffffffff);
    CMenuHash::SaveMenuBar
              ((CMenuHash *)&DAT_10168048,*(HMENU__ **)(this + 0x550),
               *(CMFCToolBar **)(this + 0x544));
    pAVar4 = AfxGetModuleState();
    local_2c = *(int **)(*(int *)(pAVar4 + 4) + 0x5c);
    if ((*(int *)(this + 0x560) != 0) && (local_2c != (int *)0x0)) {
      local_18 = (undefined4 *)(**(code **)(*local_2c + 0x10))();
      while (local_18 != (undefined4 *)0x0) {
        local_14[0] = (CObject *)(**(code **)(*local_2c + 0x14))(&local_18);
        iVar5 = CObject::IsKindOf(local_14[0],(CRuntimeClass *)&PTR_s_CMultiDocTemplate_10134a2c);
        if ((iVar5 != 0) && (*(int *)(local_14[0] + 0x88) != 0)) {
          local_20 = (int *)0x0;
          local_1c = 0;
          do {
            LVar3 = SendMessageW(*(HWND *)(this + 0x4dc),0x146,0,0);
            if (LVar3 <= (int)local_1c) break;
            LVar3 = SendMessageW(*(HWND *)(this + 0x4dc),0x150,local_1c,0);
            if ((LVar3 == 0) ||
               (local_20 = (int *)0x1, *(int *)(LVar3 + 0x54) != *(int *)(local_14[0] + 0x54))) {
              local_20 = (int *)0x0;
            }
            local_1c = local_1c + 1;
          } while (local_20 == (int *)0x0);
          if (local_20 == (int *)0x0) {
            ppuVar6 = FUN_1000ad47();
            FUN_10005e00(&local_28,(int *)ppuVar6);
            local_8 = 0;
            (**(code **)(*(int *)local_14[0] + 100))(&local_28,2);
            local_20 = (int *)SendMessageW(*(HWND *)(this + 0x4dc),0x143,0,(LPARAM)local_28);
            SendMessageW(*(HWND *)(this + 0x4dc),0x151,(WPARAM)local_20,(LPARAM)local_14[0]);
            if (*(int *)(local_14[0] + 0x88) == *(int *)(this + 0x550)) {
              local_24 = local_20;
            }
            local_8 = 0xffffffff;
            FUN_10001030((undefined4 *)(local_28 + -0x10));
          }
        }
      }
    }
    ppuVar6 = FUN_1000ad47();
    FUN_10005e00(&local_28,(int *)ppuVar6);
    local_8 = 1;
    pHVar7 = (HMODULE)FUN_1000ac62();
    if (pHVar7 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(&local_28,pHVar7,0x3eea);
    }
    if (iVar5 == 0) goto LAB_100d5c22;
    local_2c = (int *)SendMessageW(*(HWND *)(this + 0x4dc),0x143,0,(LPARAM)local_28);
    SendMessageW(*(HWND *)(this + 0x4dc),0x151,(WPARAM)local_2c,0);
    if (local_24 == (int *)0xffffffff) {
      *(undefined4 *)(this + 0x55c) = 1;
      local_24 = local_2c;
    }
    *(undefined4 *)(this + 0x554) = *(undefined4 *)(this + 0x550);
    SendMessageW(*(HWND *)(this + 0x4dc),0x14e,(WPARAM)local_24,0);
    ppuVar6 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar6);
    local_8 = CONCAT31(local_8._1_3_,2);
    pHVar7 = (HMODULE)FUN_1000ac62();
    if (pHVar7 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(local_14,pHVar7,0x42d6);
    }
    if (iVar5 == 0) goto LAB_100d5c22;
    SendMessageW(*(HWND *)(this + 0x3f4),0x14a,0xffffffff,(LPARAM)local_14[0]);
    pHVar7 = (HMODULE)FUN_1000ac62();
    if (pHVar7 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(local_14,pHVar7,0x42d7);
    }
    if (iVar5 == 0) goto LAB_100d5c22;
    SendMessageW(*(HWND *)(this + 0x3f4),0x14a,0xffffffff,(LPARAM)local_14[0]);
    pHVar7 = (HMODULE)FUN_1000ac62();
    if (pHVar7 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(local_14,pHVar7,0x42d8);
    }
    if (iVar5 == 0) goto LAB_100d5c22;
    SendMessageW(*(HWND *)(this + 0x3f4),0x14a,0xffffffff,(LPARAM)local_14[0]);
    pHVar7 = (HMODULE)FUN_1000ac62();
    if (pHVar7 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(local_14,pHVar7,0x42d9);
    }
    if (iVar5 == 0) goto LAB_100d5c22;
    SendMessageW(*(HWND *)(this + 0x3f4),0x14a,0xffffffff,(LPARAM)local_14[0]);
    pHVar7 = (HMODULE)FUN_1000ac62();
    if (pHVar7 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(local_14,pHVar7,0x42da);
    }
    if (iVar5 == 0) goto LAB_100d5c22;
    SendMessageW(*(HWND *)(this + 0x3f4),0x14a,0xffffffff,(LPARAM)local_14[0]);
    CWnd::UpdateData((CWnd *)this,0);
    OnSelchangeMenuList(this);
    FUN_10001030((undefined4 *)(local_14[0] + -0x10));
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_28 + -0x10));
  }
  ppuVar6 = FUN_1000ad47();
  FUN_10005e00(&local_28,(int *)ppuVar6);
  local_8 = 3;
  pHVar7 = (HMODULE)FUN_1000ac62();
  if (pHVar7 == (HMODULE)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_10006200(&local_28,pHVar7,0x3eec);
  }
  if (iVar5 != 0) {
    SendMessageW(*(HWND *)(this + 0x468),0x143,0,(LPARAM)local_28);
    SendMessageW(*(HWND *)(this + 0x468),0x14e,0,0);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_28 + -0x10));
    if (DAT_101688d8 == (CContextMenuManager *)0x0) {
      CWnd::ShowWindow((CWnd *)(this + 400),0);
      CWnd::ShowWindow((CWnd *)(this + 0x448),0);
      CWnd::ShowWindow((CWnd *)(this + 0x11c),0);
      CWnd::ShowWindow((CWnd *)(this + 0x2ec),0);
      CWnd::ShowWindow((CWnd *)(this + 0x360),0);
    }
    else {
      CStringList::CStringList(local_48,10);
      local_8 = 4;
      CContextMenuManager::GetMenuNames(DAT_101688d8,local_48);
      local_18 = local_44;
      while (local_18 != (undefined4 *)0x0) {
        piVar1 = local_18 + 2;
        local_18 = (undefined4 *)*local_18;
        local_2c = FUN_10005e30((int *)(*piVar1 + -0x10));
        local_2c = local_2c + 4;
        SendMessageW(*(HWND *)(this + 0x468),0x143,0,(LPARAM)local_2c);
        FUN_10001030(local_2c + -4);
      }
      LVar3 = SendMessageW(*(HWND *)(this + 0x468),0x146,0,0);
      CWnd::EnableWindow((CWnd *)(this + 400),(uint)(1 < LVar3));
      LVar3 = SendMessageW(*(HWND *)(this + 0x468),0x146,0,0);
      CWnd::EnableWindow((CWnd *)(this + 0x448),(uint)(1 < LVar3));
      local_8 = 0xffffffff;
      FUN_100541e5((undefined4 *)local_48);
    }
    pHVar8 = GetParent(*(HWND *)(this + 0x20));
    pCVar9 = CWnd::FromHandle(pHVar8);
    pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                                 (CObject *)pCVar9);
    if (pCVar10 != (CObject *)0x0) {
      if (((byte)pCVar10[0x148] & 1) == 0) {
        CWnd::ShowWindow((CWnd *)(this + 0x278),0);
      }
      if (((byte)pCVar10[0x148] & 4) == 0) {
        CWnd::ShowWindow((CWnd *)(this + 0xa8),0);
        CWnd::ShowWindow((CWnd *)(this + 0x3d4),0);
      }
      return 1;
    }
  }
LAB_100d5c22:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

