// rea decompile_all
// name: FUN_1006f840
// address: 0x1006f840
// body: available
// range: 0x1006f840-0x1006fb98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006fb94 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1006f840(CMFCMenuBar *param_1)

{
  int iVar1;
  int *piVar2;
  HMENU pHVar3;
  uint uVar4;
  bool bVar5;
  HMENU__ *pHVar6;
  CRuntimeClass *this;
  CObject *pCVar7;
  AFX_MODULE_STATE *pAVar8;
  CMDIChildWnd *pCVar9;
  int iVar10;
  HMENU pHVar11;
  CObject *pCVar12;
  BOOL BVar13;
  CFrameWnd *pCVar14;
  CObject *local_20;
  CMDIFrameWnd *local_10;
  CObject *local_c;
  HMENU__ *local_8;
  
  local_8 = *(HMENU__ **)(param_1 + 0xcd4);
  if (local_8 != (HMENU__ *)0x0) {
    CMenuHash::SaveMenuBar((CMenuHash *)&DAT_10168048,local_8,(CMFCToolBar *)param_1);
  }
  local_20 = (CObject *)0x0;
  if (*(undefined4 **)(param_1 + 0xca0) != (undefined4 *)0x0) {
    this = (CRuntimeClass *)(**(code **)**(undefined4 **)(param_1 + 0xca0))();
    pCVar7 = CRuntimeClass::CreateObject(this);
    local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18,pCVar7);
    (**(code **)(*(int *)local_20 + 0x14))(*(undefined4 *)(param_1 + 0xca0));
  }
  pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                              *(CObject **)(param_1 + 0xcd0));
  if (DAT_101697f4 != (CMenuTearOffManager *)0x0) {
    CMenuTearOffManager::Reset(DAT_101697f4,(HMENU__ *)0x0);
  }
  iVar1 = *(int *)(param_1 + 0xcf8);
  bVar5 = false;
  local_c = (CObject *)0x0;
  CMFCMenuBar::SetMaximizeMode(param_1,0,(CWnd *)0x0,1);
  pAVar8 = AfxGetModuleState();
  piVar2 = *(int **)(*(int *)(pAVar8 + 4) + 0x5c);
  if (piVar2 != (int *)0x0) {
    local_10 = (CMDIFrameWnd *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_10127cb4,
                                  *(CObject **)(param_1 + 0xcd0));
    if ((local_10 != (CMDIFrameWnd *)0x0) &&
       (pCVar9 = CMDIFrameWnd::MDIGetActive(local_10,(int *)0x0), pCVar9 != (CMDIChildWnd *)0x0)) {
      pCVar9 = CMDIFrameWnd::MDIGetActive(local_10,(int *)0x0);
      iVar10 = (**(code **)(*(int *)pCVar9 + 0x168))();
      if (iVar10 != 0) {
        local_c = *(CObject **)(iVar10 + 0x28);
      }
    }
    local_10 = (CMDIFrameWnd *)(**(code **)(*piVar2 + 0x10))();
    while (local_10 != (CMDIFrameWnd *)0x0) {
      pCVar12 = (CObject *)(**(code **)(*piVar2 + 0x14))(&local_10);
      iVar10 = CObject::IsKindOf(pCVar12,(CRuntimeClass *)&PTR_s_CMultiDocTemplate_10134a2c);
      if ((iVar10 != 0) && (*(int *)(pCVar12 + 0x88) != 0)) {
        uVar4 = *(uint *)(pCVar12 + 0x54);
        if (uVar4 == 0) goto LAB_1006fb94;
        pAVar8 = AfxGetModuleState();
        pHVar3 = *(HMENU *)(pCVar12 + 0x88);
        pHVar11 = LoadMenuW(*(HINSTANCE *)(pAVar8 + 0xc),(LPCWSTR)(uVar4 & 0xffff));
        *(HMENU *)(pCVar12 + 0x88) = pHVar11;
        (**(code **)(*(int *)param_1 + 0x430))(pHVar11,0,0);
        CMenuHash::SaveMenuBar
                  ((CMenuHash *)&DAT_10168048,*(HMENU__ **)(pCVar12 + 0x88),(CMFCToolBar *)param_1);
        if (local_c == pCVar12) {
          local_8 = *(HMENU__ **)(pCVar12 + 0x88);
          bVar5 = true;
        }
        CMFCMenuBar::UpdateMDIChildrenMenus((CMultiDocTemplate *)pCVar12);
        if (pHVar3 != (HMENU)0x0) {
          BVar13 = IsMenu(pHVar3);
          if (BVar13 == 0) goto LAB_1006fb94;
          CMenuHash::RemoveMenu((CMenuHash *)&DAT_10168048,pHVar3);
          DestroyMenu(pHVar3);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xce4) != 0) {
    pAVar8 = AfxGetModuleState();
    pHVar3 = *(HMENU *)(param_1 + 0xcd8);
    pHVar11 = LoadMenuW(*(HINSTANCE *)(pAVar8 + 0xc),(LPCWSTR)(uint)*(ushort *)(param_1 + 0xce4));
    *(HMENU *)(param_1 + 0xcd8) = pHVar11;
    (**(code **)(*(int *)param_1 + 0x438))(pHVar11);
    (**(code **)(*(int *)param_1 + 0x430))(*(undefined4 *)(param_1 + 0xcd8),1,0);
    CMenuHash::SaveMenuBar
              ((CMenuHash *)&DAT_10168048,*(HMENU__ **)(param_1 + 0xcd8),(CMFCToolBar *)param_1);
    if (!bVar5) {
      local_8 = *(HMENU__ **)(param_1 + 0xcd8);
    }
    if (pCVar7 != (CObject *)0x0) {
      *(undefined4 *)(pCVar7 + 0x7c) = *(undefined4 *)(param_1 + 0xcd8);
      *(undefined4 *)(pCVar7 + 0x37c) = *(undefined4 *)(param_1 + 0xcd8);
    }
    pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,
                                 *(CObject **)(param_1 + 0xcd0));
    if (pCVar12 != (CObject *)0x0) {
      *(undefined4 *)(pCVar12 + 0x7c) = *(undefined4 *)(param_1 + 0xcd8);
    }
    if (pHVar3 != (HMENU)0x0) {
      BVar13 = IsMenu(pHVar3);
      if (BVar13 == 0) {
LAB_1006fb94:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      CMenuHash::RemoveMenu((CMenuHash *)&DAT_10168048,pHVar3);
      DestroyMenu(pHVar3);
    }
  }
  pHVar6 = local_8;
  iVar10 = CMenuHash::LoadMenuBar((CMenuHash *)&DAT_10168048,local_8,(CMFCToolBar *)param_1);
  if ((iVar10 != 0) && (*(HMENU__ **)(param_1 + 0xcd4) = pHVar6, iVar1 == 0)) {
    pCVar14 = CWnd::GetParentFrame((CWnd *)param_1);
    (**(code **)(*(int *)pCVar14 + 0x174))(1);
    InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(param_1 + 0x20));
  }
  if (pCVar7 != (CObject *)0x0) {
    (**(code **)(*(int *)pCVar7 + 0x1a0))(*(undefined4 *)(param_1 + 0xcd4));
  }
  if (iVar1 != 0) {
    CMFCMenuBar::RestoreMaximizeMode(param_1,1);
  }
  if (*(CMFCToolBarsMenuPropertyPage **)(param_1 + 0xd10) != (CMFCToolBarsMenuPropertyPage *)0x0) {
    CMFCToolBarsMenuPropertyPage::SelectMenu
              (*(CMFCToolBarsMenuPropertyPage **)(param_1 + 0xd10),(CDocTemplate *)local_c,0);
  }
  if (local_20 != (CObject *)0x0) {
    (**(code **)(*(int *)param_1 + 0x340))(local_20,0xffffffff);
    *(CObject **)(param_1 + 0xca0) = local_20;
    (**(code **)(*(int *)param_1 + 0x208))();
    (**(code **)(*(int *)param_1 + 0x2d4))(1);
  }
  return 1;
}

