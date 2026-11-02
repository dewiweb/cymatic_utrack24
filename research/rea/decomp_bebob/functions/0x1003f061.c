// rea decompile_all
// name: FUN_1003f061
// address: 0x1003f061
// body: available
// range: 0x1003f061-0x1003f0d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f0d4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1003f061(void *this,uint param_1,int param_2)

{
  CObject *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == 0) break;
    iVar2 = *(int *)(iVar1 + 4);
    this_00 = *(CObject **)(iVar1 + 8);
    iVar1 = iVar2;
    if ((param_2 == 0) ||
       ((iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CPane_1012cc40), iVar2 == 0 &&
        (iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088),
        iVar2 == 0)))) {
      param_2 = 0;
      uVar3 = (**(code **)(*(int *)this_00 + 400))();
      if ((uVar3 == (param_1 & 0xf000)) || ((param_1 & 0xf000) == 0)) {
        BringWindowToTop(*(HWND *)(this_00 + 0x20));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

