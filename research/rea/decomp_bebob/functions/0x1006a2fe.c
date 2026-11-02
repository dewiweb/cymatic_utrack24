// rea decompile_all
// name: FUN_1006a2fe
// address: 0x1006a2fe
// body: available
// range: 0x1006a2fe-0x1006a388 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a384 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_1006a2fe(void *this,CObject *param_1)

{
  int iVar1;
  int *this_00;
  __POSITION *p_Var2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  p_Var2 = CObList::Find((CObList *)((int)this + 4),param_1,(__POSITION *)0x0);
  uVar4 = 0;
  if (p_Var2 != (__POSITION *)0x0) {
    CObList::RemoveAt((CObList *)((int)this + 4),p_Var2);
    iVar1 = *(int *)(param_1 + 0x10);
    (**(code **)(*(int *)param_1 + 4))(1);
    puVar5 = DAT_10166ec0;
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) {
LAB_1006a384:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      this_00 = (int *)puVar5[2];
      puVar5 = (undefined4 *)*puVar5;
      if (this_00 == (int *)0x0) goto LAB_1006a384;
      iVar3 = FUN_1002605c(this_00,iVar1,0);
      if (-1 < iVar3) {
        do {
          (**(code **)(*this_00 + 0x34c))(iVar3);
          iVar3 = FUN_1002605c(this_00,iVar1,0);
        } while (-1 < iVar3);
        (**(code **)(*this_00 + 0x208))();
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

