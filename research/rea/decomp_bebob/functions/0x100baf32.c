// rea decompile_all
// name: FUN_100baf32
// address: 0x100baf32
// body: available
// range: 0x100baf32-0x100bb117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100baf9f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100baf32(void *this,int *param_1)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x158)) {
    do {
      if ((iVar4 < 0) || (*(int *)((int)this + 0x158) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      (**(code **)(**(int **)(*(int *)((int)this + 0x154) + iVar4 * 4) + 0xc4))
                (*(undefined4 *)((int)this + 0x2c));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x158));
  }
  (**(code **)(*(int *)this + 0x70))(&local_18,1);
  iVar4 = (**(code **)(*(int *)this + 0x1ac))();
  if (iVar4 == 0) {
    local_10 = (**(code **)(*(int *)this + 0x1a0))();
    local_8 = 0;
    if ((*(int *)((int)this + 0x68) == 0) && (*(int *)((int)this + 100) == 0)) {
      local_c = 3;
      local_8 = 3;
      (**(code **)(*(int *)this + 0x1d8))(&local_c);
      local_8 = CMFCRibbonButton::GetGroupButtonExtraWidth(this);
      if (*(int *)((int)this + 0x90) != 0) {
        local_8 = local_8 + 6;
      }
    }
    else {
      dVar1 = 1.0;
      if (DAT_10166c84 != 0) {
        dVar1 = _DAT_10166c7c;
      }
      if (dVar1 == 1.0) {
        local_28 = 3;
        local_24 = 3;
        puVar2 = &local_28;
      }
      else {
        local_20 = 3;
        local_1c = 2;
        puVar2 = &local_20;
      }
      (**(code **)(*(int *)this + 0x1d8))(puVar2);
      if ((local_18 == 0) && (local_14 == 0)) {
        local_18 = 0x10;
        local_14 = 0x10;
        dVar1 = _DAT_10166c7c;
        if (DAT_10166c84 == 0) {
          dVar1 = 1.0;
        }
        if (dVar1 != 1.0) {
          uVar5 = FUN_100f8660(0x10,extraout_EDX);
          local_18 = (int)uVar5;
          uVar5 = FUN_100f8660(extraout_ECX,(int)(uVar5 >> 0x20));
          local_14 = (int)uVar5;
        }
      }
    }
    iVar4 = 0;
    iVar3 = (**(code **)(*(int *)this + 0x98))();
    if (iVar3 != 0) {
      iVar4 = *(int *)((int)this + 0xbc) / 2;
      if (*(int *)((int)this + 0x108) == 0) {
        iVar4 = (local_10 - iVar4) + -1;
      }
      else {
        iVar4 = iVar4 + 1 + local_10;
      }
    }
    *param_1 = iVar4 + *(int *)((int)this + 0xbc) * 2 + local_18 + local_8;
    local_14 = local_14 + *(int *)((int)this + 0xc0) * 2;
  }
  else {
    *param_1 = local_18;
  }
  param_1[1] = local_14;
  return;
}

