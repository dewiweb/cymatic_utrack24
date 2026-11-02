// rea decompile_all
// name: FUN_100b0e3c
// address: 0x100b0e3c
// body: available
// range: 0x100b0e3c-0x100b0f78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b0f74 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Variable defined which should be unmapped: param_2 */

undefined4 * __thiscall FUN_100b0e3c(int param_1,undefined4 *param_2,int param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  HMODULE pHVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_3 + 0x168);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&param_3,(int *)ppuVar1);
  if (iVar4 == -3) {
    pHVar3 = (HMODULE)FUN_1000ac62();
    if ((pHVar3 == (HMODULE)0x0) || (iVar4 = FUN_10006200(&param_3,pHVar3,0x42d3), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
LAB_100b0eaa:
    piVar5 = (int *)(param_3 + -0x10);
    piVar2 = FUN_10005e30(piVar5);
    *param_2 = piVar2 + 4;
    FUN_10001030(piVar5);
    return param_2;
  }
  if (iVar4 < -2) {
    if (iVar4 < 0) goto LAB_100b0f33;
  }
  else if (iVar4 < 0) {
    if (*(int *)(param_1 + 0x2cc) == 1) {
      Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&param_3,0x42d4);
    }
    else {
      Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&param_3,0x42d5);
    }
    goto LAB_100b0eaa;
  }
  if (iVar4 < *(int *)(param_1 + 0x2b4)) {
    piVar2 = FUN_10005e30((int *)(*(int *)(*(int *)(param_1 + 0x2b0) + iVar4 * 4) + -0x10));
    *param_2 = piVar2 + 4;
    FUN_10001030((undefined4 *)(param_3 + -0x10));
    return param_2;
  }
LAB_100b0f33:
  FUN_10006ce0(param_2,(short *)&PTR_1011d390);
  FUN_10001030((undefined4 *)(param_3 + -0x10));
  return param_2;
}

