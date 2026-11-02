// rea decompile_all
// name: CMDIClientAreaWnd::EnableMDITabbedGroups
// address: 0x100661c9
// body: available
// range: 0x100661c9-0x10066460 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066310 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::EnableMDITabbedGroups(int,class CMDITabInfo const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIClientAreaWnd::EnableMDITabbedGroups(CMDIClientAreaWnd *this,int param_1,CMDITabInfo *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  CObject *pCVar4;
  CWnd *this_00;
  CObject *pCVar5;
  undefined4 *puVar6;
  CMDIClientAreaWnd *pCVar7;
  undefined **local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  HWND__ *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100661d5;
  if (*(int *)(this + 0x287c) != 0) {
    EnableMDITabs(this,0,param_2);
  }
  CWnd::ShowWindow((CWnd *)(this + 0x74),0);
  local_1c = (HWND__ *)SendMessageW(*(HWND *)(this + 0x20),0x229,0,0);
  if ((*(int *)(this + 0x2908) != param_1) && (*(int *)(this + 0x2908) = param_1, param_1 == 0)) {
    puVar6 = *(undefined4 **)(this + 0x28d4);
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) goto LAB_10066310;
      local_18 = (undefined4 *)*puVar6;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)puVar6[2])
      ;
      CWnd::ShowWindow((CWnd *)pCVar4,0);
      local_14 = 0;
      iVar2 = (**(code **)(*(int *)pCVar4 + 0x1a8))();
      puVar6 = local_18;
      if (0 < iVar2) {
        do {
          this_00 = (CWnd *)(**(code **)(*(int *)pCVar4 + 0x1ac))(local_14);
          CWnd::ModifyStyle(this_00,0,DAT_101601d8 | 0x80000,0x24);
          local_14 = local_14 + 1;
          iVar2 = (**(code **)(*(int *)pCVar4 + 0x1a8))();
          puVar6 = local_18;
        } while (local_14 < iVar2);
      }
    }
  }
  *(int *)(this + 0x2878) = param_1;
  if (*(int *)(this + 0x2908) == 0) {
    iVar2 = IsKeepClientEdge(this);
    if (iVar2 == 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0,0x200,0);
    }
    if (DAT_10166c14 != 0) {
      pHVar3 = GetWindow(*(HWND *)(this + 0x20),5);
      pCVar4 = (CObject *)CWnd::FromHandle(pHVar3);
      local_38 = CList<CMDIChildWndEx*,CMDIChildWndEx*>::vftable;
      local_2c = 0;
      local_28 = 0;
      local_30 = 0;
      local_34 = 0;
      local_24 = 0;
      local_20 = 10;
      local_8 = 0;
      while (pCVar4 != (CObject *)0x0) {
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar4);
        if ((pCVar5 != (CObject *)0x0) &&
           (iVar2 = (**(code **)(*(int *)pCVar5 + 0x1d8))(), iVar2 != 0)) {
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)&local_38,(HWND__ *)pCVar5);
        }
        pHVar3 = GetWindow(*(HWND *)(pCVar4 + 0x20),2);
        pCVar4 = (CObject *)CWnd::FromHandle(pHVar3);
      }
      *(undefined4 *)(this + 0x2910) = 1;
      iVar2 = local_30;
      while (iVar2 != 0) {
        puVar6 = (undefined4 *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4);
        CWnd::SetWindowPos((CWnd *)*puVar6,(CWnd *)0x0,-1,-1,-1,-1,0x27);
      }
      *(undefined4 *)(this + 0x2910) = 0;
      UpdateTabs(this,0);
      local_8 = 0xffffffff;
      local_38 = CList<CMDIChildWndEx*,CMDIChildWndEx*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_38);
    }
  }
  else {
    pCVar7 = this + 0x28a4;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar7 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pCVar7 = pCVar7 + 4;
    }
    iVar2 = IsKeepClientEdge(this);
    if (iVar2 == 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0x200,0,0);
    }
    puVar6 = *(undefined4 **)(this + 0x28d4);
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) goto LAB_10066310;
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)*puVar1);
      CWnd::ShowWindow((CWnd *)pCVar4,8);
      ApplyParams(this,(CMFCTabCtrl *)pCVar4);
    }
    UpdateMDITabbedGroups(this,1);
    puVar6 = *(undefined4 **)(this + 0x28d4);
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) {
LAB_10066310:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)*puVar1);
      (**(code **)(*(int *)pCVar4 + 0x180))();
    }
    if (*(int *)(this + 0x2908) != 0) {
      SetActiveTab(this,local_1c);
    }
  }
  return;
}

