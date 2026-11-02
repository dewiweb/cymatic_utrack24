// rea decompile_all
// name: FUN_100067d0
// address: 0x100067d0
// body: available
// range: 0x100067d0-0x10006867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000680d to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall FUN_100067d0(void *this,LPCSTR param_1,int *param_2)

{
  int iVar1;
  HMODULE pHVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  iVar1 = (**(code **)(*param_2 + 0xc))(DAT_10163564 ^ (uint)&stack0xfffffffc);
  *(int *)this = iVar1 + 0x10;
  local_8 = 0;
  if ((param_1 == (LPCSTR)0x0) || (((uint)param_1 & 0xffff0000) != 0)) {
    FUN_10006450(this,param_1);
  }
  else {
    pHVar2 = (HMODULE)FUN_1000ac62();
    if (pHVar2 != (HMODULE)0x0) {
      FUN_10006200(this,pHVar2,(uint)param_1 & 0xffff);
    }
  }
  ExceptionList = local_10;
  return this;
}

