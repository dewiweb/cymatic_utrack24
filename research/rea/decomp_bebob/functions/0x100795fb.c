// rea decompile_all
// name: CDockablePane::StoreRecentTabRelatedInfo
// address: 0x100795fb
// body: available
// range: 0x100795fb-0x10079685 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::StoreRecentTabRelatedInfo(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::StoreRecentTabRelatedInfo(CDockablePane *this)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  int *piVar5;
  CPaneDivider *this_00;
  
  iVar1 = (**(code **)(*(int *)this + 0x168))();
  if (iVar1 != 0) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_1012e24c,(CObject *)pCVar3);
    if (pCVar4 != (CObject *)0x0) {
      pHVar2 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)pCVar3);
      if (pCVar4 != (CObject *)0x0) {
        piVar5 = (int *)(**(code **)(*(int *)this + 0x224))(0);
        this_00 = GetDefaultPaneDivider((CDockablePane *)pCVar4);
        if (piVar5 == (int *)0x0) {
          if (this_00 != (CPaneDivider *)0x0) {
            CPaneDivider::StoreRecentTabRelatedInfo(this_00,this,(CDockablePane *)pCVar4);
          }
        }
        else {
          (**(code **)(*piVar5 + 0x1e0))(this,pCVar4);
        }
      }
    }
  }
  return;
}

