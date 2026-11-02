// rea decompile_all
// name: FUN_10006340
// address: 0x10006340
// body: available
// range: 0x10006340-0x10006449 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_10006340(void *this,int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e877;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = DEVICE_PROPS::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  piVar1 = FUN_10005e30((int *)(*(int *)(param_1 + 0x2c) + -0x10));
  *(int **)((int)this + 0x2c) = piVar1 + 4;
  local_8 = 0;
  piVar1 = FUN_10005e30((int *)(*(int *)(param_1 + 0x30) + -0x10));
  *(int **)((int)this + 0x30) = piVar1 + 4;
  local_8._0_1_ = 1;
  piVar1 = FUN_10005e30((int *)(*(int *)(param_1 + 0x34) + -0x10));
  *(int **)((int)this + 0x34) = piVar1 + 4;
  local_8._0_1_ = 2;
  piVar1 = FUN_10005e30((int *)(*(int *)(param_1 + 0x38) + -0x10));
  *(int **)((int)this + 0x38) = piVar1 + 4;
  local_8._0_1_ = 3;
  piVar1 = FUN_10005e30((int *)(*(int *)(param_1 + 0x3c) + -0x10));
  *(int **)((int)this + 0x3c) = piVar1 + 4;
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar1 = FUN_10005e30((int *)(*(int *)(param_1 + 0x40) + -0x10));
  *(int **)((int)this + 0x40) = piVar1 + 4;
  ExceptionList = local_10;
  return this;
}

