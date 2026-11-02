// rea decompile_all
// name: CMFCBaseTabCtrl::GetTabWndNoWrapper
// address: 0x100925f6
// body: available
// range: 0x100925f6-0x1009264b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10092640 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall CMFCBaseTabCtrl::GetTabWndNoWrapper(int)const 
   
   Library: Visual Studio 2010 Release */

CWnd * __thiscall CMFCBaseTabCtrl::GetTabWndNoWrapper(CMFCBaseTabCtrl *this,int param_1)

{
  int iVar1;
  CObject *pCVar2;
  CWnd *pCVar3;
  
  if ((param_1 < 0) || (*(int *)(this + 0x9c) <= param_1)) {
    pCVar3 = (CWnd *)0x0;
  }
  else {
    if (*(int *)(this + 0x90) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar1 = *(int *)(*(int *)(this + 0x8c) + param_1 * 4);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_10162750,
                                *(CObject **)(iVar1 + 0x20));
    if (pCVar2 == (CObject *)0x0) {
      pCVar3 = *(CWnd **)(iVar1 + 0x20);
    }
    else {
      pCVar3 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x3a8))();
    }
  }
  return pCVar3;
}

