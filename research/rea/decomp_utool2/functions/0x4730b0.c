// rea decompile_all
// name: FUN_004730b0
// address: 0x4730b0
// body: available
// range: 0x4730b0-0x47319b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004730b0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int in_ECX;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  undefined4 *local_30;
  undefined1 local_2c [16];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00701a88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(in_ECX + 0x54);
  if (piVar1 == (int *)0x0) {
    local_38 = 0;
    local_34 = 0;
  }
  else {
    local_38 = piVar1[3];
    local_34 = piVar1[4];
  }
  local_30 = (undefined4 *)0x0;
  local_8 = 0;
  (**(code **)(*piVar1 + 0x10))(local_48,0,0,2,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  param_2 = (int *)*param_2;
  if (param_2 == (int *)0x0) {
    local_1c = 0;
    local_18 = 0;
  }
  else {
    local_1c = param_2[3];
    local_18 = param_2[4];
  }
  local_14 = (undefined4 *)0x0;
  local_8 = 2;
  (**(code **)(*param_2 + 0x10))(local_2c,0,0,0);
  FUN_00474890(local_2c,param_3,param_4,param_5,param_6);
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)*local_14)(1);
  }
  if (local_30 != (undefined4 *)0x0) {
    (**(code **)*local_30)(1);
  }
  ExceptionList = local_10;
  return;
}

