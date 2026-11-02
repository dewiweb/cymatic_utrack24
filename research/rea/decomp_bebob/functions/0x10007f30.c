// rea decompile_all
// name: FUN_10007f30
// address: 0x10007f30
// body: available
// range: 0x10007f30-0x10008025 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_10007f30(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010ea20;
  local_10 = ExceptionList;
  uVar3 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(undefined4 *)((int)this + 0xc) = param_1[2];
  local_14 = this;
  FUN_10007dd0(&local_14,(LPCSTR)(param_1 + 3));
  local_8 = 0;
  iVar4 = Ordinal_4(local_14,*(undefined4 *)((int)local_14 + -0xc),uVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_10001120();
  }
  *(int *)((int)this + 0x10) = iVar4;
  FUN_10007dd0(&param_1,(LPCSTR)(puVar2 + 0xd));
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = Ordinal_4(param_1,param_1[-3]);
  if (iVar4 == 0) {
    iVar4 = FUN_10001120();
  }
  *(int *)((int)this + 0x14) = iVar4;
  local_8 = local_8 & 0xffffff00;
  piVar1 = param_1 + -1;
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 + -1 < 1) {
    (**(code **)(*(int *)param_1[-4] + 4))(param_1 + -4);
  }
  local_8 = 0xffffffff;
  piVar1 = (int *)((int)local_14 + -4);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)((int)local_14 + -0x10) + 4))((undefined4 *)((int)local_14 + -0x10));
  }
  ExceptionList = local_10;
  return this;
}

