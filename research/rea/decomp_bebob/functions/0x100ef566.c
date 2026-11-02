// rea decompile_all
// name: FUN_100ef566
// address: 0x100ef566
// body: available
// range: 0x100ef566-0x100ef5d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ef5d4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100ef566(void *this,void *param_1)

{
  int iVar1;
  __POSITION *p_Var2;
  int iVar3;
  int iVar4;
  
  FUN_1005419f((int)param_1);
  iVar3 = 0;
  iVar4 = (*(int *)((int)this + 0x50c) - *(int *)((int)this + 0x374)) + -1;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)((int)this + 0x374) + 1 + iVar3;
      if ((iVar1 < 0) || (*(int *)((int)this + 0x50c) <= iVar1)) {
LAB_100ef5d4:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      p_Var2 = CObList::FindIndex((CObList *)((int)this + 0x44c),
                                  *(int *)(*(int *)((int)this + 0x508) + iVar1 * 4));
      if (p_Var2 == (__POSITION *)0x0) goto LAB_100ef5d4;
      AddTail(param_1,(undefined4 *)(*(int *)(p_Var2 + 8) + 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

