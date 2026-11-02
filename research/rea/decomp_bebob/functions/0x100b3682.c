// rea decompile_all
// name: FUN_100b3682
// address: 0x100b3682
// body: available
// range: 0x100b3682-0x100b370d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b3709 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100b3682(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 <= param_2) && (iVar2 = 0, -1 < param_1)) && (iVar3 = param_1, -1 < param_2)) {
    do {
      if ((iVar3 < 0) || (*(int *)((int)this + 0x25c) <= iVar3)) goto LAB_100b3709;
      iVar1 = *(int *)(*(int *)((int)this + 600) + iVar3 * 4);
      iVar1 = *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x18);
      if (iVar2 <= iVar1) {
        iVar2 = iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= param_2);
    do {
      if ((param_1 < 0) || (*(int *)((int)this + 0x25c) <= param_1)) {
LAB_100b3709:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar1 = *(int *)(*(int *)((int)this + 600) + param_1 * 4);
      iVar3 = *(int *)(iVar1 + 0x18);
      *(int *)(iVar1 + 0x18) = iVar3;
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
      *(int *)(iVar1 + 0x20) = iVar3 + iVar2;
      param_1 = param_1 + 1;
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
    } while (param_1 <= param_2);
  }
  return;
}

