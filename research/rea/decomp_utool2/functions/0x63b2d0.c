// rea decompile_all
// name: FUN_0063b2d0
// address: 0x63b2d0
// body: available
// range: 0x63b2d0-0x63b39d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063b2d0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int **ppiVar2;
  int *in_ECX;
  int *local_38 [2];
  undefined1 local_30 [8];
  int *local_28 [2];
  undefined1 local_20 [8];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071f451;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    ppiVar2 = (int **)FUN_00636cf0(local_38,param_2,param_3);
  }
  else {
    local_28[0] = (int *)*param_3;
    (**(code **)(*local_28[0] + 0x58))(local_20,param_3 + 2,local_18);
    ppiVar2 = local_28;
  }
  *param_1 = *ppiVar2;
  param_1[2] = ppiVar2[2];
  param_1[3] = ppiVar2[3];
  *ppiVar2 = (int *)&PTR_vftable_00c7ed38;
  if (iVar1 != 0) {
    (**(code **)(*local_38[0] + 0x54))(local_30);
  }
  else {
    (**(code **)(*local_28[0] + 0x54))(local_20);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

