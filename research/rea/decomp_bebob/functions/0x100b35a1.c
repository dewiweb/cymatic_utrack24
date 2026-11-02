// rea decompile_all
// name: FUN_100b35a1
// address: 0x100b35a1
// body: available
// range: 0x100b35a1-0x100b3680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b367c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100b35a1(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((param_1 <= param_2) && (-1 < param_1)) && (-1 < param_2)) {
    if (*(int *)((int)this + 0x25c) <= param_2) {
LAB_100b367c:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_20 = ((((*(int *)((int)this + 0x54) * -2 - *(int *)((int)this + 0x70)) +
                 *(int *)((int)this + 0x78)) - param_3) -
               ((*(int *)(*(int *)(*(int *)((int)this + 600) + param_2 * 4) + 0x24) -
                *(int *)((int)this + 0x70)) - *(int *)((int)this + 0x54))) / 2;
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_1c = param_1;
    do {
      if ((local_1c < 0) || (*(int *)((int)this + 0x25c) <= local_1c)) goto LAB_100b367c;
      iVar1 = *(int *)(*(int *)((int)this + 600) + local_1c * 4);
      local_18.left = *(LONG *)(iVar1 + 0x18);
      local_18.top = *(LONG *)(iVar1 + 0x1c);
      local_18.right = *(LONG *)(iVar1 + 0x20);
      local_18.bottom = *(LONG *)(iVar1 + 0x24);
      OffsetRect(&local_18,0,local_20);
      local_1c = local_1c + 1;
      *(LONG *)(iVar1 + 0x18) = local_18.left;
      *(LONG *)(iVar1 + 0x1c) = local_18.top;
      *(LONG *)(iVar1 + 0x20) = local_18.right;
      *(LONG *)(iVar1 + 0x24) = local_18.bottom;
    } while (local_1c <= param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

