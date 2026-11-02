// rea decompile_all
// name: CBasePane::GetParentTabbedPane
// address: 0x1006bee6
// body: available
// range: 0x1006bee6-0x1006bf36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CBaseTabbedPane * __thiscall CBasePane::GetParentTabbedPane(void)const 
   
   Library: Visual Studio 2010 Release */

CBaseTabbedPane * __thiscall CBasePane::GetParentTabbedPane(CBasePane *this)

{
  int iVar1;
  CMFCBaseTabCtrl *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  HWND__ *local_8;
  
  local_8 = (HWND__ *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x168))();
  if (((iVar1 != 0) && (pCVar2 = GetParentTabWnd(this,&local_8), local_8 != (HWND__ *)0x0)) &&
     (pCVar2 != (CMFCBaseTabCtrl *)0x0)) {
    pHVar3 = GetParent(*(HWND *)(pCVar2 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)pCVar4);
    return (CBaseTabbedPane *)pCVar5;
  }
  return (CBaseTabbedPane *)0x0;
}

