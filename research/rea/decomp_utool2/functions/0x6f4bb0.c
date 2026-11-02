// rea decompile_all
// name: FUN_006f4bb0
// address: 0x6f4bb0
// body: available
// range: 0x6f4bb0-0x6f4d45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f4bb0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729cb2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = param_1;
  local_2c = *(int *)*in_ECX;
  glGetIntegerv(0x8ca6,&local_40,local_14);
  local_28 = local_40;
  glGetIntegerv(0xba2,&local_24);
  local_8 = 0;
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa4))(0x8d40,piVar1[4]);
    glDisable(0xb71);
    glDisable(0xbe2);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_006f3df0(param_2[2],param_2[3],local_44,extraout_ECX,0);
    glViewport(0,0,*(undefined4 *)(*in_ECX + 4),*(undefined4 *)(*in_ECX + 8));
    local_54 = *param_2;
    local_50 = param_2[1];
    local_4c = local_38;
    local_48 = local_34;
    FUN_006f34d0(param_2,&local_54,*(undefined4 *)(*in_ECX + 4),*(undefined4 *)(*in_ECX + 8),1);
    if ((local_3c != 0) && (local_30 == *(int *)(*(int *)ThreadLocalStoragePointer + 0xc))) {
      glDeleteTextures(1,&local_3c);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
    }
  }
  local_8 = 3;
  (**(code **)(local_2c + 0xa4))(0x8d40,local_28);
  glViewport(local_24,local_20,local_1c,local_18);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

