// rea decompile_all
// name: CBasePane::GetParentTabWnd
// address: 0x1006be63
// body: available
// range: 0x1006be63-0x1006bee5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCBaseTabCtrl * __thiscall CBasePane::GetParentTabWnd(struct HWND__ * &)const 
   
   Library: Visual Studio 2010 Release */

CMFCBaseTabCtrl * __thiscall CBasePane::GetParentTabWnd(CBasePane *this,HWND__ **param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  CMFCBaseTabCtrl *pCVar4;
  CObject *pCVar5;
  
  pCVar5 = (CObject *)(this + 0x20);
  pHVar1 = GetParent(*(HWND *)pCVar5);
  pCVar2 = CWnd::FromHandle(pHVar1);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_10162750,
                              (CObject *)pCVar2);
  if (pCVar3 != (CObject *)0x0) {
    pCVar5 = pCVar3 + 0x20;
  }
  *param_1 = *(HWND__ **)pCVar5;
  pHVar1 = GetParent(*(HWND *)pCVar5);
  pCVar2 = CWnd::FromHandle(pHVar1);
  pCVar4 = (CMFCBaseTabCtrl *)
           AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_1012e24c,(CObject *)pCVar2);
  if (pCVar4 == (CMFCBaseTabCtrl *)0x0) {
    pHVar1 = GetParent(*(HWND *)pCVar5);
    pCVar2 = CWnd::FromHandle(pHVar1);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)pCVar2);
    if (pCVar5 != (CObject *)0x0) {
      pCVar4 = (CMFCBaseTabCtrl *)(**(code **)(*(int *)pCVar5 + 0x3a4))();
    }
  }
  return pCVar4;
}

