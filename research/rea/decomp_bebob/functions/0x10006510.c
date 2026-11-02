// rea decompile_all
// name: FUN_10006510
// address: 0x10006510
// body: available
// range: 0x10006510-0x100065da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006566 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_10006510(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e8b3;
  local_10 = ExceptionList;
  uVar1 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10006340(this,param_3);
  local_8 = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  ppuVar2 = FUN_1000ad47();
  if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*ppuVar2 + 0xc))(uVar1);
  *(int *)((int)this + 0x54) = iVar3 + 0x10;
  *(undefined4 *)((int)this + 0x58) = param_2;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)((int)this + 0x94) = param_1;
  FUN_10004990((undefined4 *)((int)this + 0x98));
  *(undefined ***)((int)this + 0xfc) = CArray<unsigned_long,unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  _DAT_10164af0 = this;
  ExceptionList = local_10;
  return this;
}

