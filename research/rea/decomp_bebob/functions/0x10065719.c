// rea decompile_all
// name: CMDIClientAreaWnd::MoveWindowToTabGroup
// address: 0x10065719
// body: available
// range: 0x10065719-0x10065855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMDIClientAreaWnd::MoveWindowToTabGroup(class CMFCTabCtrl *,class
   CMFCTabCtrl *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMDIClientAreaWnd::MoveWindowToTabGroup
          (CMDIClientAreaWnd *this,CMFCTabCtrl *param_1,CMFCTabCtrl *param_2,int param_3)

{
  CMFCTabCtrl *pCVar1;
  CMFCTabCtrl *pCVar2;
  CObject *pCVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  WPARAM local_18;
  
  pCVar2 = param_2;
  pCVar1 = param_1;
  if (param_1 == (CMFCTabCtrl *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = *(WPARAM *)(param_1 + 0x20);
  }
  if (param_2 == (CMFCTabCtrl *)0x0) {
    param_2 = (CMFCTabCtrl *)0x0;
  }
  else {
    param_2 = *(CMFCTabCtrl **)(param_2 + 0x20);
  }
  param_1 = (CMFCTabCtrl *)param_3;
  if ((param_3 != -1) ||
     (param_1 = (CMFCTabCtrl *)(**(code **)(*(int *)pCVar1 + 0x208))(),
     param_1 != (CMFCTabCtrl *)0xffffffff)) {
    pCVar3 = (CObject *)(**(code **)(*(int *)pCVar1 + 0x1ac))(param_1);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar3);
    if (pCVar3 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0x1d0))(&param_3);
      (**(code **)(*(int *)pCVar1 + 0x194))(param_1,1);
      *(CMFCTabCtrl **)(pCVar3 + 0x118) = pCVar2;
      (**(code **)(*(int *)pCVar2 + 0x188))(pCVar3,param_3,0xffffffff,1);
      iVar4 = (**(code **)(*(int *)pCVar1 + 0x1a8))();
      if (iVar4 == 0) {
        RemoveTabGroup(this,pCVar1,1);
        UpdateMDITabbedGroups(this,1);
        (**(code **)(*(int *)pCVar2 + 0x180))();
      }
      else {
        AdjustMDIChildren(this,pCVar1);
      }
      AdjustMDIChildren(this,pCVar2);
      SetActiveTab(this,*(HWND__ **)(pCVar3 + 0x20));
      pCVar5 = CWnd::GetParentFrame((CWnd *)this);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar5)
      ;
      if (pCVar3 != (CObject *)0x0) {
        SendMessageW(*(HWND *)(pCVar3 + 0x20),DAT_101684d0,local_18,(LPARAM)param_2);
      }
      FUN_10001030((undefined4 *)(param_3 + -0x10));
      return 1;
    }
  }
  return 0;
}

