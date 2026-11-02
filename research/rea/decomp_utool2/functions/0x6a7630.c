// rea decompile_all
// name: FUN_006a7630
// address: 0x6a7630
// body: available
// range: 0x6a7630-0x6a7765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a7630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  int local_3c;
  int local_38;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_3;
  puStack_c = &LAB_0072321f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 1;
  local_8 = 0;
  FUN_006d91a0(param_1,&local_5c,param_3,param_4);
  FUN_006d79e0(&local_3c);
  local_24 = (float)local_3c;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = (float)local_38;
  FUN_00680060(&local_2c);
  uVar2 = param_2;
  uVar3 = extraout_ECX;
  FUN_006842b0(&param_3);
  local_24 = (float)param_3;
  local_20 = 2;
  local_1c = 0;
  local_18 = 1.4013e-45;
  FUN_006411a0(uVar2,uVar3);
  FUN_006d8fd0(param_1,param_2,&local_5c,uVar1,param_4);
  FUN_006d94c0(param_1,param_2,uVar1,param_4);
  FID_conflict__free(local_5c);
  ExceptionList = local_10;
  return;
}

