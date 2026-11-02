// rea decompile_all
// name: FUN_10007e90
// address: 0x10007e90
// body: available
// range: 0x10007e90-0x10007f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_10007e90(void *this,undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e9e8;
  local_10 = ExceptionList;
  uVar2 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  FUN_10007dd0(&param_1,(LPCSTR)(param_1 + 2));
  local_8 = 0;
  iVar3 = Ordinal_4(param_1,param_1[-3],uVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_10001120();
  }
  *(int *)((int)this + 0xc) = iVar3;
  local_8 = 0xffffffff;
  piVar1 = param_1 + -1;
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(*(int *)param_1[-4] + 4))(param_1 + -4);
  }
  ExceptionList = local_10;
  return this;
}

