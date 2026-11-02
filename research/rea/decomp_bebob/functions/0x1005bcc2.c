// rea decompile_all
// name: CMFCPopupMenu::ActivatePopupMenu
// address: 0x1005bcc2
// body: available
// range: 0x1005bcc2-0x1005be1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: static int __stdcall CMFCPopupMenu::ActivatePopupMenu(class CFrameWnd *,class
   CMFCPopupMenu *)
   
   Library: Visual Studio 2010 Release */

int CMFCPopupMenu::ActivatePopupMenu(CFrameWnd *param_1,CMFCPopupMenu *param_2)

{
  CObject *pCVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  undefined4 uVar6;
  CMFCShowAllButton local_fc [244];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xec;
  local_8 = 0x1005bcd1;
  if (param_2 != (CMFCPopupMenu *)0x0) {
    NotifyParentDlg(param_2,1);
  }
  if (param_1 != (CFrameWnd *)0x0) {
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)param_1);
    if (pCVar1 == (CObject *)0x0) {
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,(CObject *)param_1);
      if (pCVar1 == (CObject *)0x0) {
        pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,
                                    (CObject *)param_1);
        if (pCVar1 == (CObject *)0x0) {
          pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,
                                      (CObject *)param_1);
          if (pCVar1 == (CObject *)0x0) goto LAB_1005bd77;
          iVar2 = ShowPopupMenu(pCVar1,param_2);
        }
        else {
          iVar2 = ShowPopupMenu(pCVar1,param_2);
        }
      }
      else {
        iVar2 = ShowPopupMenu(pCVar1,param_2);
      }
    }
    else {
      iVar2 = CMDIFrameWndEx::ShowPopupMenu((CMDIFrameWndEx *)pCVar1,param_2);
    }
    if (iVar2 == 0) {
      if ((param_2 != (CMFCPopupMenu *)0x0) && (*(int *)(param_2 + 0xec0) == 0)) {
        CloseMenu(param_2,0);
      }
      goto LAB_1005be17;
    }
  }
LAB_1005bd77:
  if (param_2 != (CMFCPopupMenu *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)param_2 + 0x1c0))();
    pHVar4 = GetParent((HWND)piVar3[8]);
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar5);
    if ((((pCVar1 != (CObject *)0x0) && (*(int *)(pCVar1 + 0x148) != 0)) && (piVar3[0x33c] == 0)) &&
       ((piVar3[0x2f5] == 0 ||
        (pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCShowAllButton_10133738,
                                     *(CObject **)(piVar3[0x2f4] + 8)), pCVar1 == (CObject *)0x0))))
    {
      uVar6 = CMFCShowAllButton::CMFCShowAllButton(local_fc);
      local_8 = 0;
      (**(code **)(*piVar3 + 0x344))(uVar6,0xffffffff);
      local_8 = 0xffffffff;
      FUN_100b9d4a((CMFCToolBarMenuButton *)local_fc);
    }
    if (*(int *)(param_2 + 0xeb0) != 0) {
      DAT_1016843c = param_2;
    }
  }
LAB_1005be17:
  iVar2 = FUN_100f90cf();
  return iVar2;
}

