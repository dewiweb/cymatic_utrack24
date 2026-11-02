// rea decompile_all
// name: FUN_100ab3ec
// address: 0x100ab3ec
// body: available
// range: 0x100ab3ec-0x100ab543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ab53f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100ab3ec(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)this + 0x20);
  iVar2 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)((int)this + 0x28);
  iVar4 = *(int *)((int)this + 0x2c);
  iVar8 = iVar1 + 4;
  bVar7 = (iVar3 + -4) - iVar8 <= *(int *)((int)this + 0x3c8);
  iVar8 = iVar8 - *(int *)((int)this + 0x3bc);
  local_1c = 0;
  if (0 < *(int *)((int)this + 1000)) {
    do {
      if ((local_1c < 0) || (*(int *)((int)this + 1000) <= local_1c)) {
LAB_100ab53f:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar5 = *(int **)(*(int *)((int)this + 0x3e4) + local_1c * 4);
      if (bVar7) {
        piVar5[2] = 1;
        piVar5[0x11] = piVar5[0x92] + -1;
      }
      iVar6 = piVar5[0x11];
      if ((iVar6 < 0) || (piVar5[0x92] <= iVar6)) goto LAB_100ab53f;
      local_18.right = *(int *)(piVar5[0x91] + iVar6 * 4) + piVar5[0x14] * 2 + iVar8;
      local_18.left = iVar8;
      local_18.top = iVar2 + 3;
      local_18.bottom = iVar4 + -4;
      (**(code **)(*piVar5 + 0x48))(param_1,&local_18);
      iVar8 = piVar5[0x1d] + 2;
      if ((local_18.right <= iVar1 + 8) || (iVar3 + -8 <= local_18.left)) {
        SetRectEmpty(&local_18);
        (**(code **)(*piVar5 + 0x48))(param_1,&local_18);
      }
      if (bVar7) {
        piVar5[2] = 1;
      }
      (**(code **)(*piVar5 + 0x5c))(param_1);
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)((int)this + 1000));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

