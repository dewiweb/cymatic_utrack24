// rea decompile_all
// name: FUN_100aac10
// address: 0x100aac10
// body: available
// range: 0x100aac10-0x100aacf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100aaced to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_100aac10(int param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  wchar_t *pwVar4;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100aac1c;
  iVar3 = 0;
  if (*(int *)(param_1 + 0xb4) != 1 && -1 < *(int *)(param_1 + 0xb4) + -1) {
    do {
      if ((iVar3 < 0) || (*(int *)(param_1 + 0xb4) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + iVar3 * 4);
      ppuVar2 = FUN_1000ad47();
      FUN_10005e00(local_14,(int *)ppuVar2);
      local_8 = 0;
      if (iVar3 < 9) {
        pwVar4 = L"%d";
LAB_100aac84:
        FUN_100022f0(local_14,pwVar4);
      }
      else {
        if (iVar3 < 0x12) {
          pwVar4 = L"0%d";
          goto LAB_100aac84;
        }
        if (iVar3 + -0x12 < 0x1a) {
          FUN_100022f0(local_14,L"%c%c");
        }
      }
      (**(code **)(*piVar1 + 0x14))(local_14[0],0);
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_14[0] + -0x10));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xb4) + -1);
  }
  return;
}

