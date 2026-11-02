// rea decompile_all
// name: FUN_100b34a8
// address: 0x100b34a8
// body: available
// range: 0x100b34a8-0x100b3531 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b352d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100b34a8(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar3 = (int *)(**(code **)(*(int *)((int)this + 0xb8) + 0x54))(&local_c,param_1);
  iVar1 = *piVar3;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x25c)) {
    do {
      if ((iVar4 < 0) || (*(int *)((int)this + 0x25c) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar2 = *(int *)(*(int *)((int)this + 600) + iVar4 * 4);
      local_c = 0;
      local_8 = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar2 + 0x24) = 0;
    } while (iVar4 < *(int *)((int)this + 0x25c));
  }
  *(int *)((int)this + 0x74) = *(int *)((int)this + 0x6c) + iVar1;
  *(int *)((int)this + 0xd0) = *(int *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

