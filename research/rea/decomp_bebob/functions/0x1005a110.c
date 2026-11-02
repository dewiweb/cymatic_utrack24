// rea decompile_all
// name: CFullScreenImpl::RestoreState
// address: 0x1005a110
// body: available
// range: 0x1005a110-0x1005a2cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFullScreenImpl::RestoreState(class CFrameWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFullScreenImpl::RestoreState(CFullScreenImpl *this,CFrameWnd *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  CObject *pCVar2;
  int *piVar3;
  CObject *pCVar4;
  CObject *pCVar5;
  int iVar6;
  BOOL BVar7;
  
  if (*(int *)(this + 0x34) == -1) {
    return;
  }
  pAVar1 = AfxGetModuleState();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1012f19c,*(CObject **)(pAVar1 + 4));
  if (pCVar2 == (CObject *)0x0) {
    return;
  }
  piVar3 = (int *)(**(code **)(**(int **)(this + 0x14) + 0x224))(0);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(this + 0x14);
  }
  (**(code **)(*piVar3 + 0x60))();
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))(1);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)param_1);
  CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,*(int *)(this + 0x20),*(int *)(this + 0x24),
                     *(int *)(this + 0x28) - *(int *)(this + 0x20),
                     *(int *)(this + 0x2c) - *(int *)(this + 0x24),4);
  SendMessageW(*(HWND *)(param_1 + 0x20),0xb,0,0);
  *(undefined4 *)(pCVar2 + 0xb8) = 0;
  if (pCVar4 == (CObject *)0x0) {
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,(CObject *)param_1);
    if (pCVar5 != (CObject *)0x0) {
      LoadState(pCVar2,(int)pCVar5,*(undefined4 *)(this + 0x3c));
    }
  }
  else {
    LoadState(pCVar2,(int)pCVar4,*(undefined4 *)(this + 0x3c));
  }
  SendMessageW(*(HWND *)(param_1 + 0x20),0xb,1,0);
  RedrawWindow(*(HWND *)(param_1 + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
  if (*(int *)(this + 0x1c) == 0) {
    if (pCVar4 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,(CObject *)param_1);
      if ((pCVar2 == (CObject *)0x0) || (piVar3 = *(int **)(pCVar2 + 0x1d0), piVar3 == (int *)0x0))
      goto LAB_1005a292;
      ShowPane(piVar3,1,0,0);
      iVar6 = (**(code **)(*piVar3 + 0x16c))();
      if (iVar6 == 0) goto LAB_1005a292;
LAB_1005a276:
      CWnd::SetFocus((CWnd *)pCVar2);
    }
    else {
      piVar3 = *(int **)(pCVar4 + 1000);
      if (piVar3 != (int *)0x0) {
        ShowPane(piVar3,1,0,0);
        iVar6 = (**(code **)(*piVar3 + 0x16c))();
        pCVar2 = pCVar4;
        if (iVar6 != 0) goto LAB_1005a276;
      }
    }
  }
  if ((pCVar4 != (CObject *)0x0) && (*(int *)(pCVar4 + 0x2d48) != 0)) {
    (**(code **)(*(int *)pCVar4 + 0x208))();
  }
LAB_1005a292:
  if ((((*(int *)(this + 0x30) != 0) && (iVar6 = *(int *)(*(int *)(this + 0x30) + 0xfc), iVar6 != 0)
       ) && (BVar7 = IsWindowVisible(*(HWND *)(iVar6 + 0x20)), BVar7 != 0)) &&
     (*(int *)(*(int *)(*(CFrameImpl **)(this + 0x30) + 0xfc) + 0x314) != 0)) {
    CFrameImpl::OnChangeVisualManager(*(CFrameImpl **)(this + 0x30));
  }
  return;
}

