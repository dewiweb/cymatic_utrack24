// rea decompile_all
// name: CDockablePane::ReplacePane
// address: 0x1007a3f6
// body: available
// range: 0x1007a3f6-0x1007a465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockablePane::ReplacePane(class CDockablePane *,enum
   AFX_DOCK_METHOD,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockablePane::ReplacePane
          (CDockablePane *this,CDockablePane *param_1,AFX_DOCK_METHOD param_2,int param_3)

{
  int *piVar1;
  CPaneDivider *pCVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x224))(0);
  if (piVar1 == (int *)0x0) {
    if (((*(int *)(this + 0x33c) == 0) ||
        (pCVar2 = GetDefaultPaneDivider(this), pCVar2 == (CPaneDivider *)0x0)) ||
       (iVar3 = (**(code **)(*(int *)pCVar2 + 0x278))(this,param_1), iVar3 == 0)) {
      return 0;
    }
    if (param_3 == 0) {
      param_1 = (CDockablePane *)0x0;
    }
    CBasePane::RemovePaneFromDockManager
              ((CBasePane *)this,(CBasePane *)this,0,0,0,(CBasePane *)param_1);
  }
  else {
    (**(code **)(*piVar1 + 0x17c))(this,param_1);
  }
  return 1;
}

