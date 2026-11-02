// rea decompile_all
// name: FUN_1006cfdb
// address: 0x1006cfdb
// body: available
// range: 0x1006cfdb-0x1006d031 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006d02d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1006cfdb(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  rsize_t rVar3;
  
  iVar1 = param_1 + param_2;
  if ((((-1 < param_1) && (-1 < param_2)) && (iVar1 <= *(int *)((int)this + 8))) &&
     ((param_1 <= iVar1 && (param_2 <= iVar1)))) {
    iVar2 = *(int *)((int)this + 8) - iVar1;
    if (iVar2 != 0) {
      rVar3 = iVar2 * 4;
      FUN_10004d70((void *)(*(int *)((int)this + 4) + param_1 * 4),rVar3,
                   (void *)(*(int *)((int)this + 4) + iVar1 * 4),rVar3);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

