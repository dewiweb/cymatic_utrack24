// rea decompile_all
// name: FUN_006e0590
// address: 0x6e0590
// body: available
// range: 0x6e0590-0x6e0680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e0590(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined **local_44 [2];
  undefined1 local_3c [8];
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_24;
  undefined1 *local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007280ff;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = &PTR_vftable_00c7ed4c;
  local_1c[0] = &DAT_00bfe12c;
  local_8 = 2;
  local_44[0] = &PTR_vftable_00c7ed4c;
  (**(code **)(PTR_vftable_00c7ed4c + 0x58))(local_3c,local_1c,local_14);
  if (in_ECX + -0x78 == 0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = (undefined4 *)FUN_0040de70(in_ECX + -0x78);
  }
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    local_34[1] = local_34[1] + 1;
    UNLOCK();
  }
  local_30 = param_2;
  local_2c = param_3;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00690820(param_1,local_44);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_34 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_34)(1);
    }
  }
  (**(code **)(*local_44[0] + 0x54))(local_3c);
  (**(code **)(*local_24 + 0x54))(local_1c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

