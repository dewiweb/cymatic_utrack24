// rea decompile_all
// name: FUN_1008e6cb
// address: 0x1008e6cb
// body: available
// range: 0x1008e6cb-0x1008e7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008e7a7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1008e6cb(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  puVar4 = *(undefined4 **)((int)this + 0x28);
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    puVar1 = (undefined4 *)*puVar4;
    piVar2 = (int *)puVar4[2];
    iVar5 = (**(code **)(*piVar2 + 0x178))();
    puVar4 = puVar1;
    if (((iVar5 != 0) || (param_1 == 0)) || (*(int *)((int)this + 4) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect((HWND)piVar2[8],&local_18);
      uVar3 = *(uint *)((int)this + 0x40);
      if (((uVar3 & 0x2000) == 0) && ((uVar3 & 0x8000) == 0)) {
        iVar5 = local_18.right - local_18.left;
      }
      else {
        iVar5 = local_18.bottom - local_18.top;
      }
      if (local_1c <= iVar5) {
        if (((uVar3 & 0x2000) == 0) && ((uVar3 & 0x8000) == 0)) {
          local_1c = local_18.right - local_18.left;
        }
        else {
          local_1c = local_18.bottom - local_18.top;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

