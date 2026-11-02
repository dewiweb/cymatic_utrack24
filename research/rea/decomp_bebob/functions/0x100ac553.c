// rea decompile_all
// name: FUN_100ac553
// address: 0x100ac553
// body: available
// range: 0x100ac553-0x100ac5cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ac5c8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_100ac553(void *this,CDC *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_10 [8];
  int local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (0 < *(int *)((int)this + 1000)) {
    do {
      if ((iVar3 < 0) || (*(int *)((int)this + 1000) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = *(int **)(*(int *)((int)this + 0x3e4) + iVar3 * 4);
      iVar2 = (**(code **)(*piVar1 + 0x3c))(param_1);
      if (local_8 <= iVar2) {
        local_8 = (**(code **)(*piVar1 + 0x3c))(param_1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 1000));
  }
  iVar3 = CDC::GetTextExtent(param_1,local_10);
  return *(int *)(iVar3 + 4) + 7 + local_8;
}

