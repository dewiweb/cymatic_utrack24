// rea decompile_all
// name: FUN_100915c5
// address: 0x100915c5
// body: available
// range: 0x100915c5-0x10091692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009168e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100915c5(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  CDockingPanesRow *pCVar2;
  int iVar3;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_24 = (**(code **)(*(int *)this + 0x160))();
  puVar1 = *(undefined4 **)((int)this + 0x120);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)((int)this + 0x20),&local_18);
      *param_1 = local_18.right - local_18.left;
      param_1[1] = local_18.bottom - local_18.top;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    pCVar2 = (CDockingPanesRow *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x58))();
    param_1 = local_1c;
    if (iVar3 != 0) {
      local_20 = *(int *)(pCVar2 + 0xc);
      (**(code **)(*(int *)pCVar2 + 0x18))(&local_2c,param_2,param_3);
      iVar3 = local_28;
      if (local_24 == 0) {
        iVar3 = local_2c;
      }
      param_1 = local_1c;
      if ((iVar3 != local_20) && (0 < iVar3)) {
        CDockSite::ResizeRow(this,pCVar2,iVar3,0);
        param_1 = local_1c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

