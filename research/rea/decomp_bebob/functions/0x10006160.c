// rea decompile_all
// name: FUN_10006160
// address: 0x10006160
// body: available
// range: 0x10006160-0x100061f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPCLSID FUN_10006160(LPCLSID param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  LPCOLESTR lpsz;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1010e818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  lpsz = (LPCOLESTR)
         Ordinal_4(param_2,*(undefined4 *)(param_2 + -0xc),DAT_10163564 ^ (uint)&stack0xfffffffc);
  if (lpsz == (LPCOLESTR)0x0) {
    FUN_10001120();
  }
  CLSIDFromString(lpsz,param_1);
  Ordinal_6(lpsz);
  local_8 = 0xffffffff;
  piVar1 = (int *)(param_2 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(param_2 + -0x10) + 4))((undefined4 *)(param_2 + -0x10));
  }
  ExceptionList = local_10;
  return param_1;
}

