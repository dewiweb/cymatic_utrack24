// rea decompile_all
// name: FUN_004b8ce0
// address: 0x4b8ce0
// body: available
// range: 0x4b8ce0-0x4b8eca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8ce0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  int in_ECX;
  float fVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_007042e6;
  local_1c = ExceptionList;
  local_24 = DAT_00c76070 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  param_6 = param_6 - param_2;
  param_5 = param_5 - param_1;
  fVar2 = param_6 * param_3 - param_4 * param_5;
  if (fVar2 == 0.0) {
    local_40 = param_2;
  }
  else {
    fVar2 = 1.0 / fVar2;
    fVar1 = param_6 * fVar2;
    param_4 = -param_4 * fVar2;
    param_5 = -param_5 * fVar2;
    param_6 = param_3 * fVar2;
    local_40 = -(param_4 * param_1) - param_6 * param_2;
    param_1 = -(fVar1 * param_1) - param_5 * param_2;
    param_3 = fVar1;
  }
  local_3c = param_4 * 0.0 + param_3;
  local_38 = param_6 * 0.0 + param_5;
  local_2c = param_5 * 0.0 + param_6;
  local_34 = local_40 * 0.0 + param_1 + 0.0;
  local_30 = param_3 * 0.0 + param_4;
  local_28 = param_1 * 0.0 + local_40 + 0.0;
  local_14 = 0;
  (**(code **)(*(int *)(in_ECX + 0xc) + 0x78))(*(undefined4 *)(in_ECX + 8),6,&local_3c,local_24);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

