// rea decompile_all
// name: CPane::SetDockState
// address: 0x100881e4
// body: available
// range: 0x100881e4-0x10088267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPane::SetDockState(class CDockingManager *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPane::SetDockState(CPane *this,CDockingManager *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  tagRECT *ptVar5;
  
  if (*(int *)(this + 0x298) == 0) {
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0x28))(*(undefined4 *)(this + 0x1e8),1);
    if (piVar2 != (int *)0x0) {
      ptVar5 = (tagRECT *)(this + 0x208);
      uVar3 = (**(code **)(*piVar2 + 0x2a8))();
      CDockingManager::DockPane(param_1,(CBasePane *)this,uVar3,ptVar5);
    }
    if (*(int *)(this + 0xac) != 0) {
      iVar1 = **(int **)(this + 0xac);
      uVar4 = (**(code **)(*(int *)this + 0x1a8))(1,0);
      (**(code **)(iVar1 + 0x29c))(this,uVar4);
      if (*(int **)(this + 0xb0) != (int *)0x0) {
        FUN_1008dd5a(*(int **)(this + 0xb0));
      }
    }
  }
  return;
}

