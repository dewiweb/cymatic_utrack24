// rea decompile_all
// name: CPaneDivider::AddRecentPane
// address: 0x10071540
// body: available
// range: 0x10071540-0x100715ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall CPaneDivider::AddRecentPane(class CDockablePane
   *)
   
   Library: Visual Studio 2010 Release */

CDockablePane * __thiscall CPaneDivider::AddRecentPane(CPaneDivider *this,CDockablePane *param_1)

{
  CPaneContainer *pCVar1;
  CPaneContainer *pCVar2;
  CDockablePane *pCVar3;
  
  pCVar1 = CRecentDockSiteInfo::GetRecentPaneContainer((CRecentDockSiteInfo *)(param_1 + 0x1d4),1);
  pCVar2 = CRecentDockSiteInfo::GetRecentTabContainer((CRecentDockSiteInfo *)(param_1 + 0x1d4),1);
  if (pCVar1 == (CPaneContainer *)0x0) {
    if (pCVar2 == (CPaneContainer *)0x0) {
      return (CDockablePane *)0x0;
    }
    pCVar3 = (CDockablePane *)(**(code **)(**(int **)(this + 0x158) + 0x20))(param_1,pCVar2);
  }
  else {
    pCVar3 = (CDockablePane *)(**(code **)(**(int **)(this + 0x158) + 0x20))(param_1,pCVar1);
  }
  (**(code **)(*(int *)this + 0x28c))();
  return pCVar3;
}

