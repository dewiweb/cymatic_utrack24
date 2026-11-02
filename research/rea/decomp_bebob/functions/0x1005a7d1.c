// rea decompile_all
// name: CMFCPopupMenu::GetMenuItem
// address: 0x1005a7d1
// body: available
// range: 0x1005a7d1-0x1005a7e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a7e1 to 0x100261ef FUN_100261ef (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCToolBarMenuButton * __thiscall CMFCPopupMenu::GetMenuItem(int)const 
   
   Library: Visual Studio 2010 Release */

CMFCToolBarMenuButton * __thiscall CMFCPopupMenu::GetMenuItem(CMFCPopupMenu *this,int param_1)

{
  void *this_00;
  CMFCToolBarMenuButton *pCVar1;
  
  this_00 = (void *)(**(code **)(*(int *)this + 0x1c0))();
  pCVar1 = (CMFCToolBarMenuButton *)FUN_100261ef(this_00,param_1);
  return pCVar1;
}

