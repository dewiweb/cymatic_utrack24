// rea decompile_all
// name: FUN_10005a70
// address: 0x10005a70
// body: available
// range: 0x10005a70-0x10005ad9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005a9f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10005a70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar1 = FUN_100046b0(&DAT_10164a28);
    if ((iVar1 != 0) || (DAT_10164a74 < 1)) {
      return 0xe0000001;
    }
    if (DAT_10164a74 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar1 = *(int *)(*DAT_10164a70 + 8);
    if (iVar1 != 0xd4) {
      if (iVar1 == 0xd5) {
        *(undefined4 *)(param_1 + 0x50) = 1;
        return 0;
      }
      if (iVar1 == 0xd6) {
        *(undefined4 *)(param_1 + 0x50) = 2;
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return 0;
}

