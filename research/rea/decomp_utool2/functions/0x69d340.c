// rea decompile_all
// name: FUN_0069d340
// address: 0x69d340
// body: available
// range: 0x69d340-0x69d451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069d340(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *_Memory;
  int local_2c [2];
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007225e1;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_2c[1] = 0;
  local_14 = uVar1;
  operator_new(0x34);
  iVar2 = FUN_00460e00(&DAT_00c8aa50);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_8 = 0;
  local_2c[1] = 1;
  puVar3 = (undefined4 *)FUN_0069de20(local_2c);
  local_24[0] = &PTR_vftable_00c7ed4c;
  local_1c[0] = *puVar3;
  *puVar3 = &DAT_00bfe12c;
  local_8 = 2;
  if (*param_1 != 0) {
    FUN_00461420(&DAT_00c8a9ac,local_24,0);
  }
  (**(code **)(*local_24[0] + 0x54))(local_1c,uVar1);
  _Memory = (int *)(local_2c[0] + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

