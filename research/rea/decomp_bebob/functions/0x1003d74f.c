// rea decompile_all
// name: CDockingManager::RemovePaneFromDockManager
// address: 0x1003d74f
// body: available
// range: 0x1003d74f-0x1003d7bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::RemovePaneFromDockManager(class CBasePane
   *,int,int,int,class CBasePane *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingManager::RemovePaneFromDockManager
          (CDockingManager *this,CBasePane *param_1,int param_2,int param_3,int param_4,
          CBasePane *param_5)

{
  __POSITION *p_Var1;
  CDockingManager *this_00;
  
  this_00 = this + 0x3c;
  if (param_4 == 0) {
    this_00 = this + 0x20;
  }
  p_Var1 = CObList::Find((CObList *)this_00,(CObject *)param_1,(__POSITION *)0x0);
  if (param_5 != (CBasePane *)0x0) {
    if (p_Var1 == (__POSITION *)0x0) {
      CObList::AddTail((CObList *)this_00,(CObject *)param_5);
    }
    else {
      CObList::InsertAfter((CObList *)this_00,p_Var1,(CObject *)param_5);
    }
  }
  if (p_Var1 != (__POSITION *)0x0) {
    CObList::RemoveAt((CObList *)this_00,p_Var1);
    if (param_2 != 0) {
      (**(code **)(*(int *)param_1 + 0x60))();
    }
    if (param_3 != 0) {
      (**(code **)(*(int *)this + 0x38))(0);
    }
  }
  return;
}

