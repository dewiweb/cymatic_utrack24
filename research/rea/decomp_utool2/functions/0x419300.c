// rea decompile_all
// name: FUN_00419300
// address: 0x419300
// body: available
// range: 0x419300-0x4194a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419300(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fcd90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = &DAT_00bfe12c;
  local_30 = &DAT_00bfe12c;
  local_2c = &DAT_00bfe12c;
  local_28 = &DAT_00bfe12c;
  local_24 = 0;
  local_22 = 0;
  local_20 = 3000;
  local_1c = 2;
  local_18 = 0;
  local_8 = 0;
  FUN_0045c990("Cymatic Audio uTool2",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_34 = (undefined1 *)local_14;
  FUN_0045c990("settings");
  local_30 = (undefined1 *)local_14;
  FUN_0045c990("Preferences");
  local_28 = (undefined1 *)local_14;
  local_14 = operator_new(0x2c);
  *local_14 = &DAT_00bfe12c;
  local_14[1] = &DAT_00bfe12c;
  local_14[2] = &DAT_00bfe12c;
  local_14[3] = &DAT_00bfe12c;
  *(undefined2 *)(local_14 + 4) = 0;
  *(undefined1 *)((int)local_14 + 0x12) = 0;
  local_14[5] = 3000;
  local_14[6] = 2;
  local_14[7] = 0;
  local_14[8] = 0;
  local_14[9] = 0;
  local_14[10] = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  if ((puVar1 != local_14) &&
     (*(undefined4 **)(in_ECX + 0x24) = local_14, puVar1 != (undefined4 *)0x0)) {
    FUN_00419be0(puVar1);
  }
  FUN_00462320(&local_34);
  local_8._0_1_ = 1;
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  FUN_006cb610(in_ECX + 0x28);
  local_8._0_1_ = 0;
  local_14 = operator_new(0x110);
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar2 = (undefined4 *)FUN_004195d0();
  puVar1 = *(undefined4 **)(in_ECX + 0x20);
  if ((puVar1 != puVar2) && (*(undefined4 **)(in_ECX + 0x20) = puVar2, puVar1 != (undefined4 *)0x0))
  {
    (**(code **)*puVar1)(1);
  }
  FUN_00419b00();
  ExceptionList = local_10;
  return;
}

