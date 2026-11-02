// rea decompile_all
// name: CPaneContainerManager::ReplacePane
// address: 0x100c4a68
// body: available
// range: 0x100c4a68-0x100c4ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::ReplacePane(class CDockablePane *,class
   CDockablePane *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::ReplacePane
          (CPaneContainerManager *this,CDockablePane *param_1,CDockablePane *param_2)

{
  __POSITION *p_Var1;
  CPaneContainer *this_00;
  CPaneContainerManager *local_8;
  
  local_8 = this;
  p_Var1 = CObList::Find((CObList *)(this + 4),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var1 == (__POSITION *)0x0) {
    CObList::AddTail((CObList *)(this + 4),(CObject *)param_2);
  }
  else {
    local_8 = (CPaneContainerManager *)0x0;
    this_00 = (CPaneContainer *)(**(code **)(*(int *)this + 0x8c))(param_1,&local_8);
    if (this_00 != (CPaneContainer *)0x0) {
      CPaneContainer::SetPane(this_00,param_2,(int)local_8);
      CObList::InsertAfter((CObList *)(this + 4),p_Var1,(CObject *)param_2);
      CObList::RemoveAt((CObList *)(this + 4),p_Var1);
    }
  }
  return 1;
}

