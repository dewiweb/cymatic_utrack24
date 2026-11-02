// rea decompile_all
// name: FUN_100b3533
// address: 0x100b3533
// body: available
// range: 0x100b3533-0x100b359f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b359b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100b3533(int param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x25c);
  while( true ) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      local_8 = (-*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x50) / 2) + -1 + local_8;
      if (local_8 < 0) {
        local_8 = 0;
      }
      return local_8;
    }
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x25c) <= iVar1)) break;
    iVar2 = *(int *)(*(int *)(param_1 + 600) + iVar1 * 4);
    BVar3 = IsRectEmpty((RECT *)(iVar2 + 0x18));
    if ((BVar3 == 0) && (iVar2 = *(int *)(iVar2 + 0x20), local_8 <= iVar2)) {
      local_8 = iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

