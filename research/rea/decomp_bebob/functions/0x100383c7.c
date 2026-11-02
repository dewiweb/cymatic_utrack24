// rea decompile_all
// name: FUN_100383c7
// address: 0x100383c7
// body: available
// range: 0x100383c7-0x1003845f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003845b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100383c7(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_8;
  
  piVar5 = *(int **)((int)this + 0x100);
  if (piVar5 != (int *)0x0) {
    iVar4 = 1;
    do {
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = (int *)piVar5[2];
      piVar5 = (int *)*piVar5;
      local_8 = 1;
      iVar2 = FUN_100b954e((int)piVar1);
      if ((iVar2 == 9) && (*(int *)((int)this + 0x88) != 0)) {
        local_8 = 0;
      }
      iVar2 = iVar4;
      if (((DAT_10166e54 != 0) && (iVar3 = FUN_100b954e((int)piVar1), iVar3 != 0x14)) &&
         (iVar3 = FUN_100b954e((int)piVar1), iVar3 != 0x13)) {
        iVar2 = 0;
      }
      piVar1[4] = iVar2;
      (**(code **)(*piVar1 + 0x10))(param_1,1,1,local_8,iVar2 == 0);
      piVar1[8] = -1;
    } while (piVar5 != (int *)0x0);
  }
  return;
}

