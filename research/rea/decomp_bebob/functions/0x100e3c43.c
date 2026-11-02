// rea decompile_all
// name: FUN_100e3c43
// address: 0x100e3c43
// body: available
// range: 0x100e3c43-0x100e3e61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e3e5d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_100e3c43(CDialog *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  LRESULT LVar6;
  int iVar7;
  CFrameWnd *pCVar8;
  CFrameWnd *pCVar9;
  undefined **ppuVar10;
  HMODULE pHVar11;
  WPARAM wParam;
  ulong uVar12;
  undefined4 uVar13;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100e3c4f;
  CDialog::OnInitDialog(param_1);
  puVar2 = DAT_10166ec0;
  if (*(int *)(param_1 + 900) == 0) {
    CWnd::EnableWindow((CWnd *)(param_1 + 400),0);
    CWnd::ShowWindow((CWnd *)(param_1 + 400),0);
    CWnd::ShowWindow((CWnd *)(param_1 + 0x204),0);
    CWnd::ShowWindow((CWnd *)(param_1 + 0x11c),0);
    puVar2 = DAT_10166ec0;
  }
  while (puVar2 != (undefined4 *)0x0) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_100e3e5d;
    puVar1 = (undefined4 *)*puVar2;
    pCVar5 = (CObject *)puVar2[2];
    if (pCVar5 == (CObject *)0x0) goto LAB_100e3e5d;
    pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar5 + 0x20));
    puVar2 = puVar1;
    if ((pCVar4 != (CWnd *)0x0) &&
       (iVar7 = CObject::IsKindOf(pCVar5,(CRuntimeClass *)&PTR_s_CMFCDropDownToolBar_10161600),
       iVar7 == 0)) {
      pCVar8 = CWnd::GetTopLevelFrame(*(CWnd **)(param_1 + 0x388));
      pCVar9 = CWnd::GetTopLevelFrame((CWnd *)pCVar5);
      if ((pCVar8 == pCVar9) &&
         ((iVar7 = (**(code **)(*(int *)pCVar5 + 0x3ec))(), iVar7 != 0 &&
          (*(int *)(pCVar5 + 0xb0c) == 0)))) {
        ppuVar10 = FUN_1000ad47();
        FUN_10005e00(local_14,(int *)ppuVar10);
        local_8 = 0;
        CWnd::GetWindowTextW
                  ((CWnd *)pCVar5,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
        if (*(int *)(local_14[0] + -0xc) == 0) {
          pHVar11 = (HMODULE)FUN_1000ac62();
          iVar7 = 0;
          if (pHVar11 != (HMODULE)0x0) {
            iVar7 = FUN_10006200(local_14,pHVar11,0x3ee8);
          }
          if (iVar7 == 0) goto LAB_100e3e5d;
        }
        wParam = SendMessageW(*(HWND *)(param_1 + 0x30c),0x180,0,local_14[0]);
        SendMessageW(*(HWND *)(param_1 + 0x30c),0x19a,wParam,(LPARAM)pCVar5);
        uVar12 = CWnd::GetExStyle((CWnd *)pCVar5);
        if ((uVar12 & 0x10000000) != 0) {
          CCheckListBox::SetCheck((CCheckListBox *)(param_1 + 0x2ec),wParam,1);
        }
        uVar13 = (**(code **)(*(int *)pCVar5 + 0x1c4))();
        FUN_100e8bbe(param_1 + 0x2ec,wParam,uVar13);
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_14[0] + -0x10));
      }
    }
  }
  pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                              (CObject *)pCVar4);
  if (pCVar5 != (CObject *)0x0) {
    if (((byte)pCVar5[0x148] & 2) == 0) {
      CWnd::ShowWindow((CWnd *)(param_1 + 0xa8),0);
    }
    LVar6 = SendMessageW(*(HWND *)(param_1 + 0x30c),0x18b,0,0);
    if (0 < LVar6) {
      SendMessageW(*(HWND *)(param_1 + 0x30c),0x186,0,0);
      CMFCToolBarsListPropertyPage::OnSelchangeToolbarList((CMFCToolBarsListPropertyPage *)param_1);
    }
    return 1;
  }
LAB_100e3e5d:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

