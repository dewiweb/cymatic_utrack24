// rea decompile_all
// name: CDockablePane::OnLButtonDblClk
// address: 0x1007b9b3
// body: available
// range: 0x1007b9b3-0x1007bb70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockablePane::OnLButtonDblClk(CDockablePane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  BOOL BVar5;
  CPaneContainer *pCVar6;
  tagPOINT local_10;
  CObject *local_8;
  
  local_10.x = param_3;
  local_10.y = param_4;
  ClientToScreen(*(HWND *)(this + 0x20),&local_10);
  iVar1 = FUN_1007ac48(this,local_10.x,local_10.y);
  if ((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)this + 0x1d8))(), iVar1 != 0)) {
    CWnd::Default((CWnd *)this);
    return;
  }
  local_8 = (CObject *)this;
  iVar1 = (**(code **)(*(int *)this + 0x168))();
  if (iVar1 != 0) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_1012e24c,(CObject *)pCVar3);
    if (pCVar4 != (CObject *)0x0) {
      pHVar2 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)pCVar3)
      ;
    }
  }
  pCVar4 = (CObject *)(**(code **)(*(int *)this + 0x224))(0);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,pCVar4);
  if (pCVar4 == (CObject *)0x0) {
    BVar5 = IsWindow(*(HWND *)(this + 0x33c));
    if (BVar5 == 0) {
      (**(code **)(*(int *)this + 700))();
      return;
    }
    pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x200));
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,
                                (CObject *)pCVar3);
    if ((pCVar4 != (CObject *)0x0) &&
       ((pCVar6 = CRecentDockSiteInfo::GetRecentPaneContainer
                            ((CRecentDockSiteInfo *)(this + 0x1d4),0),
        pCVar6 != (CPaneContainer *)0x0 ||
        (pCVar6 = CRecentDockSiteInfo::GetRecentTabContainer
                            ((CRecentDockSiteInfo *)(this + 0x1d4),0),
        pCVar6 != (CPaneContainer *)0x0)))) {
      (**(code **)(*(int *)this + 0x2c0))(this + 0x1d8,2);
      (**(code **)(*(int *)this + 700))();
      (**(code **)(*(int *)this + 0x23c))(0);
      pHVar2 = *(HWND *)(this + 0x20);
      iVar1 = (**(code **)(*(int *)this + 0x1d4))();
      (**(code **)(*(int *)pCVar4 + 0x24c))(local_8);
      BVar5 = IsWindow(pHVar2);
      if (BVar5 != 0) {
        (**(code **)(*(int *)this + 0x2c4))();
      }
      if (iVar1 == 0) {
        return;
      }
      CWnd::SetFocus((CWnd *)pCVar4);
      return;
    }
    CPane::OnLButtonDblClk((CPane *)this,param_1,param_3,param_4);
    return;
  }
  (**(code **)(*(int *)this + 700))();
  (**(code **)(*(int *)pCVar4 + 0x250))(local_8);
  return;
}

