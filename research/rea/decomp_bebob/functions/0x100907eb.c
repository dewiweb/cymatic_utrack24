// rea decompile_all
// name: CDockSite::FindNextVisibleRow
// address: 0x100907eb
// body: available
// range: 0x100907eb-0x10090885 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CDockingPanesRow * __thiscall CDockSite::FindNextVisibleRow(struct __POSITION *
   &,int)
   
   Library: Visual Studio 2010 Release */

CDockingPanesRow * __thiscall
CDockSite::FindNextVisibleRow(CDockSite *this,__POSITION **param_1,int param_2)

{
  CDockingPanesRow *pCVar1;
  __POSITION *p_Var2;
  CObject **ppCVar3;
  int iVar4;
  
  if (*(int *)(this + 0x128) == 0) {
    *param_1 = (__POSITION *)0x0;
  }
  else {
    if (*param_1 == (__POSITION *)0x0) {
      if (param_2 == 0) {
        p_Var2 = *(__POSITION **)(this + 0x124);
      }
      else {
        p_Var2 = *(__POSITION **)(this + 0x120);
      }
      *param_1 = p_Var2;
    }
    else if (param_2 == 0) {
      CObList::GetPrev((CObList *)(this + 0x11c),param_1);
    }
    else {
      FUN_1001839d((int *)param_1);
    }
    p_Var2 = *param_1;
    while (p_Var2 != (__POSITION *)0x0) {
      p_Var2 = *param_1;
      if (param_2 == 0) {
        ppCVar3 = CObList::GetPrev((CObList *)(this + 0x11c),param_1);
      }
      else {
        ppCVar3 = (CObject **)FUN_1001839d((int *)param_1);
      }
      pCVar1 = (CDockingPanesRow *)*ppCVar3;
      iVar4 = (**(code **)(*(int *)pCVar1 + 0x58))();
      if (iVar4 != 0) {
        *param_1 = p_Var2;
        return pCVar1;
      }
      p_Var2 = *param_1;
    }
  }
  return (CDockingPanesRow *)0x0;
}

