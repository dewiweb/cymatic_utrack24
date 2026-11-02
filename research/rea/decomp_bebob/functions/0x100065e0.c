// rea decompile_all
// name: FUN_100065e0
// address: 0x100065e0
// body: available
// range: 0x100065e0-0x100067c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006632 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000665e to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000668b to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100066b8 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100066e5 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10006712 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_100065e0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e912;
  local_10 = ExceptionList;
  uVar1 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = DEVICE_PROPS::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  ppuVar2 = FUN_1000ad47();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*ppuVar2 + 0xc))(uVar1);
  *(int *)((int)this + 0x2c) = iVar3 + 0x10;
  local_8 = 0;
  ppuVar2 = FUN_1000ad47();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*ppuVar2 + 0xc))();
  *(int *)((int)this + 0x30) = iVar3 + 0x10;
  local_8._0_1_ = 1;
  ppuVar2 = FUN_1000ad47();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*ppuVar2 + 0xc))();
  *(int *)((int)this + 0x34) = iVar3 + 0x10;
  local_8._0_1_ = 2;
  ppuVar2 = FUN_1000ad47();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*ppuVar2 + 0xc))();
  *(int *)((int)this + 0x38) = iVar3 + 0x10;
  local_8._0_1_ = 3;
  ppuVar2 = FUN_1000ad47();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*ppuVar2 + 0xc))();
  *(int *)((int)this + 0x3c) = iVar3 + 0x10;
  local_8._0_1_ = 4;
  ppuVar2 = FUN_1000ad47();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*ppuVar2 + 0xc))();
  *(int *)((int)this + 0x40) = iVar3 + 0x10;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  *(undefined4 *)((int)this + 0x20) = param_1[2];
  *(undefined4 *)((int)this + 0x24) = param_1[3];
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_10006450((void *)((int)this + 0x2c),(LPCSTR)(param_1 + 4));
  FUN_10006450((void *)((int)this + 0x30),(LPCSTR)(param_1 + 0xe));
  FUN_10006450((void *)((int)this + 0x34),(LPCSTR)(param_1 + 0x18));
  *(undefined4 *)((int)this + 0x28) = param_1[1];
  FUN_10006450((void *)((int)this + 0x3c),(LPCSTR)(param_1 + 0x2c));
  FUN_10006450((void *)((int)this + 0x38),(LPCSTR)(param_1 + 0x22));
  FUN_10006450((void *)((int)this + 0x40),(LPCSTR)(param_1 + 0x6c));
  ExceptionList = local_10;
  return this;
}

