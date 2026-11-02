// rea decompile_all
// name: FUN_1006d478
// address: 0x1006d478
// body: available
// range: 0x1006d478-0x1006d513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006d50f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1006d478(void *this,uint param_1,int param_2,int param_3)

{
  void *this_00;
  int iVar1;
  CMFCRibbonBaseElement *pCVar2;
  
  if (((param_3 != 0) ||
      (iVar1 = (**(code **)(*(int *)((int)this + 0xbec) + 0x100))(param_1), iVar1 == 0)) &&
     ((*(void **)((int)this + 0x718) == (void *)0x0 ||
      (pCVar2 = FUN_100ab8cf(*(void **)((int)this + 0x718),param_1,param_2),
      pCVar2 == (CMFCRibbonBaseElement *)0x0)))) {
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0x73c)) {
      do {
        if ((iVar1 < 0) || (*(int *)((int)this + 0x73c) <= iVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        this_00 = *(void **)(*(int *)((int)this + 0x738) + iVar1 * 4);
        if (((param_2 == 0) || (*(int *)((int)this_00 + 0xc) != 0)) &&
           (pCVar2 = FUN_100ab8cf(this_00,param_1,param_2), pCVar2 != (CMFCRibbonBaseElement *)0x0))
        {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 0x73c));
    }
    (**(code **)(*(int *)((int)this + 0x32c) + 0x100))(param_1);
  }
  return;
}

