// rea decompile_all
// name: CMDIClientAreaWnd::OnMDINext
// address: 0x10063e68
// body: available
// range: 0x10063e68-0x10063fd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063ef1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnMDINext(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CMDIClientAreaWnd::OnMDINext(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  long lVar1;
  CMDIClientAreaWnd *pCVar2;
  int iVar3;
  int iVar4;
  HWND__ *pHVar5;
  uint uVar6;
  bool bVar7;
  CObject *pCVar8;
  int local_8;
  
  if ((*(int *)(this + 0x2908) == 0) && (*(int *)(this + 0x287c) == 0)) {
    lVar1 = CWnd::Default((CWnd *)this);
  }
  else {
    bVar7 = param_2 == 0;
    if (*(int *)(this + 0x2908) == 0) {
      pCVar2 = this + 0x74;
    }
    else {
      pCVar2 = (CMDIClientAreaWnd *)FUN_10062d9c((int)this);
    }
    if (*(int *)(this + 0x2908) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = (long)CObList::Find((CObList *)(this + 0x28d0),(CObject *)pCVar2,(__POSITION *)0x0);
    }
    if (*(int *)(this + 0x2908) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)(this + 0x28dc);
      if (param_2 == 0) goto LAB_10063ef1;
    }
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x208))();
    if (bVar7) {
      iVar3 = iVar3 + 1;
    }
    else {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 < 0) {
      if (0 < local_8) {
        if (param_2 == 0) goto LAB_10063ef1;
        param_2 = *(int *)(param_2 + 4);
        iVar3 = param_2;
        if (param_2 == 0) {
          iVar3 = *(int *)(this + 0x28d8);
        }
        pCVar2 = (CMDIClientAreaWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                    *(CObject **)(iVar3 + 8));
      }
      if (pCVar2 == (CMDIClientAreaWnd *)0x0) goto LAB_10063ef1;
      iVar3 = (**(code **)(*(int *)pCVar2 + 0x1a8))();
      iVar3 = iVar3 + -1;
    }
    iVar4 = (**(code **)(*(int *)pCVar2 + 0x1a8))();
    if (iVar4 <= iVar3) {
      if (0 < local_8) {
        if (param_2 == 0) goto LAB_10063ef1;
        iVar3 = *(int *)param_2;
        AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,*(CObject **)(param_2 + 8));
        if (iVar3 == 0) {
          pCVar8 = *(CObject **)(*(int *)(this + 0x28d4) + 8);
        }
        else {
          pCVar8 = *(CObject **)(iVar3 + 8);
        }
        pCVar2 = (CMDIClientAreaWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,pCVar8);
      }
      if (pCVar2 == (CMDIClientAreaWnd *)0x0) {
LAB_10063ef1:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar3 = 0;
    }
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x1ac))(iVar3);
    if (iVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar3 + 0x20);
    }
    if (uVar6 != param_1) {
      pHVar5 = (HWND__ *)0x0;
      if (iVar3 != 0) {
        pHVar5 = *(HWND__ **)(iVar3 + 0x20);
      }
      SetActiveTab(this,pHVar5);
    }
    lVar1 = 0;
  }
  return lVar1;
}

