// rea decompile_all
// name: FUN_0049bef0
// address: 0x49bef0
// body: available
// range: 0x49bef0-0x49c017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049bef0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 *puVar4;
  int *local_34 [2];
  undefined1 local_2c [8];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702bf8;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  local_14 = uVar2;
  if (iVar1 == *(int *)(in_ECX + 0x18)) {
    if ((*(int *)(in_ECX + 8) == 9) || (*(int *)(in_ECX + 8) == 10)) goto LAB_0049bffc;
    puVar3 = (undefined4 *)FUN_0063bf80(local_24);
    local_8 = 0;
    (**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2,uVar2);
    FUN_0049b400(0);
    puVar4 = local_1c;
  }
  else if (iVar1 == *(int *)(in_ECX + 0x28)) {
    puVar3 = (undefined4 *)FUN_0063bf80(local_24);
    local_8 = 1;
    (**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2);
    FUN_0049b650(0,1);
    puVar4 = local_1c;
  }
  else {
    if (iVar1 != *(int *)(in_ECX + 0x38)) goto LAB_0049bffc;
    puVar3 = (undefined4 *)FUN_0063bf80(local_34);
    local_8 = 2;
    (**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2);
    FUN_0049b870(0,1);
    puVar4 = local_2c;
    local_24[0] = local_34[0];
  }
  (**(code **)(*local_24[0] + 0x54))(puVar4);
LAB_0049bffc:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

