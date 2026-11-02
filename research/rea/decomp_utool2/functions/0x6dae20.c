// rea decompile_all
// name: FUN_006dae20
// address: 0x6dae20
// body: available
// range: 0x6dae20-0x6dafe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006dae20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puStack_34;
  undefined4 *puStack_30;
  undefined1 *local_2c;
  undefined1 local_18 [4];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727a0a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (void *)0x0;
  local_2c = (undefined1 *)0x6dae58;
  local_14 = operator_new(0xd0);
  local_8 = 0;
  iVar3 = FUN_00495c00();
  local_8 = 0xffffffff;
  if (*(int *)(iVar3 + 0x9c) != 0x24) {
    *(undefined4 *)(iVar3 + 0x9c) = 0x24;
    FUN_006e6400(&puStack_34);
    FUN_006ce9f0(1);
  }
  iVar2 = param_1;
  puStack_34 = &stack0xffffffd8;
  *(undefined4 *)(iVar3 + 200) = 2;
  local_2c = (undefined1 *)0x0;
  puStack_30 = (undefined4 *)0x1001400;
  FUN_006e8e70();
  local_2c = (undefined1 *)0x1000281;
  puStack_30 = (undefined4 *)0x6daec7;
  FUN_006e6170();
  iVar1 = *(int *)(*(int *)(iVar2 + 0x78) + 0x18);
  if ((iVar1 == 2) || (iVar1 == 3)) {
    param_1 = DAT_00c8a948;
  }
  else {
    local_2c = (undefined1 *)0x1001500;
    puStack_30 = &param_1;
    puStack_34 = (undefined1 *)0x6daee9;
    FUN_006e8e70();
  }
  local_2c = (undefined1 *)0x1000280;
  puStack_30 = (undefined4 *)0x6daf09;
  FUN_006e6170();
  puStack_34 = &stack0xffffffd8;
  local_2c = (undefined1 *)0x0;
  puStack_30 = (undefined4 *)0x1001700;
  FUN_006e8e70();
  local_2c = (undefined1 *)0x1000282;
  puStack_30 = (undefined4 *)0x6daf27;
  FUN_006e6170();
  puStack_34 = &stack0xffffffd8;
  local_2c = (undefined1 *)0x0;
  puStack_30 = (undefined4 *)0x1001400;
  FUN_006e8e70();
  local_2c = (undefined1 *)0x1000201;
  puStack_30 = (undefined4 *)0x6daf45;
  FUN_006e6170();
  iVar1 = *(int *)(*(int *)(iVar2 + 0x78) + 0x18);
  if ((iVar1 == 2) || (iVar1 == 3)) {
    param_1 = 0x3f333333;
  }
  else {
    param_1 = 0x3f800000;
  }
  local_2c = &stack0xffffffd8;
  puStack_30 = (undefined4 *)0x0;
  puStack_34 = (undefined1 *)0x1001500;
  FUN_006e8e70(local_18);
  puStack_30 = (undefined4 *)0x6daf8c;
  FUN_006842b0();
  local_2c = (undefined1 *)0x1000200;
  puStack_30 = (undefined4 *)0x6daf98;
  FUN_006e6170();
  puStack_34 = &stack0xffffffd8;
  local_2c = (undefined1 *)0x0;
  puStack_30 = (undefined4 *)0x1001700;
  FUN_006e8e70();
  local_2c = (undefined1 *)0x1000205;
  puStack_30 = (undefined4 *)0x6dafb6;
  FUN_006e6170();
  puStack_34 = &stack0xffffffd8;
  local_2c = (undefined1 *)0x0;
  puStack_30 = (undefined4 *)0x1001600;
  FUN_006e8e70();
  local_2c = (undefined1 *)0x1000202;
  puStack_30 = (undefined4 *)0x6dafd4;
  FUN_006e6170();
  ExceptionList = local_10;
  return iVar3;
}

