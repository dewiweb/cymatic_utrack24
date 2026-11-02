// rea decompile_all
// name: FUN_100affd3
// address: 0x100affd3
// body: available
// range: 0x100affd3-0x100b0033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b002f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100affd3(void *this,undefined4 param_1)

{
  CObject *pCVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x16c);
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return;
    }
    if ((iVar2 < 0) || (*(int *)((int)this + 0x16c) <= iVar2)) break;
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                *(CObject **)(*(int *)((int)this + 0x168) + iVar2 * 4));
    if ((pCVar1 != (CObject *)0x0) && (*(int *)(pCVar1 + 0x168) == -3)) {
      *(undefined4 *)(pCVar1 + 0x70) = param_1;
      (**(code **)(*(int *)pCVar1 + 0x118))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

