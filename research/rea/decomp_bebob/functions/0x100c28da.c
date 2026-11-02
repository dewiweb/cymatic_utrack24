// rea decompile_all
// name: CBaseTabbedPane::StoreRecentDockSiteInfo
// address: 0x100c28da
// body: available
// range: 0x100c28da-0x100c292f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c292b to 0x10079574 CDockablePane::StoreRecentDockSiteInfo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CBaseTabbedPane::StoreRecentDockSiteInfo(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CBaseTabbedPane::StoreRecentDockSiteInfo(CBaseTabbedPane *this)

{
  int iVar1;
  CObject *pCVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1a8))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      pCVar2 = (CObject *)(**(code **)(**(int **)(this + 0x358) + 0x1ac))(iVar3);
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar2);
      if (pCVar2 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar2 + 0x37c))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  CDockablePane::StoreRecentDockSiteInfo((CDockablePane *)this);
  return;
}

