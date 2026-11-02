// rea decompile_all
// name: FUN_004bb650
// address: 0x4bb650
// body: available
// range: 0x4bb650-0x4bb743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb650(undefined4 *param_1,char param_2)

{
  int in_ECX;
  undefined4 uVar1;
  undefined4 in_XMM1_Da;
  undefined4 uVar2;
  undefined4 in_XMM2_Da;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00704638;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = *param_1;
  uStack_20 = param_1[1];
  uStack_1c = param_1[2];
  uStack_18 = param_1[3];
  local_8 = 0;
  (**(code **)(*(int *)(in_ECX + 0x18) + 0x78))(*(undefined4 *)(in_ECX + 0x14),4,&local_24,local_14)
  ;
  local_8 = 1;
  (**(code **)(*(int *)(in_ECX + 0x10) + 100))(*(undefined4 *)(in_ECX + 0xc),0);
  local_8 = 2;
  (**(code **)(*(int *)(in_ECX + 8) + 0x68))(*(undefined4 *)(in_ECX + 4),in_XMM1_Da,in_XMM2_Da);
  if (param_2 == '\0') {
    uVar1 = 0xbf800000;
    uVar2 = 0x3f800000;
  }
  else {
    uVar1 = 0x3f800000;
    uVar2 = 0;
  }
  local_8 = 3;
  (**(code **)(*(int *)(in_ECX + 0x20) + 0x68))(*(undefined4 *)(in_ECX + 0x1c),uVar2,uVar1);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

