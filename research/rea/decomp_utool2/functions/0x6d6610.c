// rea decompile_all
// name: FUN_006d6610
// address: 0x6d6610
// body: available
// range: 0x6d6610-0x6d6840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d6610(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *local_78;
  int *local_74;
  float *pfStack_70;
  uint uStack_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  void *local_4c;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072752a;
  local_10 = ExceptionList;
  uStack_6c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  iStack_14 = 0;
  local_30 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  if (((*(byte *)(param_1 + 0x69) & 0x10) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    pfStack_70 = (float *)0x6d6657;
    FUN_006e6320();
  }
  pfStack_70 = (float *)0x0;
  local_74 = (int *)0x0;
  local_78 = (int *)0x0;
  FUN_006842b0(&stack0xffffff80);
  FUN_006840c0();
  local_8 = 0;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 0:
    local_20 = 0;
    iStack_18 = param_3;
    local_5c = (float)param_4;
    local_30 = 0;
    iStack_28 = param_3;
    iStack_24 = 1;
    local_54 = local_5c * 0.85;
    iStack_1c = (int)local_54;
    iStack_14 = param_4 - iStack_1c;
    iStack_2c = param_4 + -1;
    goto switchD_006d66bb_default;
  case 1:
    iStack_18 = param_3;
    iStack_28 = param_3;
    iStack_24 = 1;
    local_54 = (float)param_4 * 0.15;
    param_4 = (int)local_54;
    break;
  case 2:
    iStack_28 = 1;
    local_60 = (float)param_3;
    local_58 = local_60 * 0.85;
    local_20 = (int)local_58;
    iStack_18 = param_3 - local_20;
    local_30 = param_3 + -1;
    iStack_14 = param_4;
    iStack_24 = param_4;
    goto LAB_006d67bc;
  case 3:
    iStack_28 = 1;
    local_58 = (float)param_3 * 0.15;
    iStack_18 = (int)local_58;
    iStack_24 = param_4;
    break;
  default:
    goto switchD_006d66bb_default;
  }
  local_30 = 0;
  local_20 = 0;
  iStack_14 = param_4;
LAB_006d67bc:
  iStack_1c = 0;
  iStack_2c = 0;
switchD_006d66bb_default:
  pfStack_70 = &local_60;
  local_74 = (int *)0x6d67d8;
  FUN_00683ff0();
  pfStack_70 = (float *)0x2;
  local_74 = (int *)0x2;
  local_78 = &local_40;
  FUN_0040e510();
  local_74 = &local_40;
  pfStack_70 = (float *)0x0;
  local_78 = (int *)0x6d67f5;
  (**(code **)(*(int *)*param_2 + 0x54))();
  FUN_006e8e70(&local_78);
  FUN_00684c50();
  local_78 = (int *)0x0;
  local_40 = local_30;
  iStack_3c = iStack_2c;
  iStack_38 = iStack_28;
  iStack_34 = iStack_24;
  (**(code **)(*(int *)*param_2 + 0x54))();
  FID_conflict__free(local_4c);
  ExceptionList = local_10;
  return;
}

