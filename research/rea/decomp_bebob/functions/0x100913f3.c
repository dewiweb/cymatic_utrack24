// rea decompile_all
// name: CDockSite::AddRow
// address: 0x100913f3
// body: available
// range: 0x100913f3-0x10091487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10091454 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CDockingPanesRow * __thiscall CDockSite::AddRow(struct __POSITION *,int)
   
   Library: Visual Studio 2010 Release */

CDockingPanesRow * __thiscall CDockSite::AddRow(CDockSite *this,__POSITION *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  CDockingPanesRow *pCVar3;
  __POSITION *p_Var4;
  int local_8;
  
  local_8 = 0;
  p_Var4 = *(__POSITION **)(this + 0x120);
  while( true ) {
    if (p_Var4 == param_1) {
      ResizeDockSiteByOffset(this,param_2,1);
      pCVar3 = (CDockingPanesRow *)(**(code **)(*(int *)this + 0x26c))(this,local_8,param_2);
      if (pCVar3 != (CDockingPanesRow *)0x0) {
        if (param_1 == (__POSITION *)0x0) {
          CObList::AddTail((CObList *)(this + 0x11c),(CObject *)pCVar3);
        }
        else {
          p_Var4 = CObList::InsertBefore((CObList *)(this + 0x11c),param_1,(CObject *)pCVar3);
          (**(code **)(*(int *)this + 0x280))(p_Var4);
        }
      }
      return pCVar3;
    }
    if (p_Var4 == (__POSITION *)0x0) break;
    piVar1 = *(int **)(p_Var4 + 8);
    p_Var4 = *(__POSITION **)p_Var4;
    iVar2 = (**(code **)(*piVar1 + 0x58))();
    if (iVar2 != 0) {
      local_8 = local_8 + piVar1[3];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

