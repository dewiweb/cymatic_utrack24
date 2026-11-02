// rea decompile_all
// name: FUN_00564380
// address: 0x564380
// body: available
// range: 0x564380-0x56469f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00564380(short param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4371;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_1) {
  case 1:
    local_18 = **(int **)(in_ECX + 0x88);
    (**(code **)(*(int *)(local_18 + 0xc + *(int *)(*(int *)(local_18 + 0xc) + 4)) + 8))(local_20);
    local_8 = 0;
    uVar1 = FUN_00501cb0();
    FUN_00501f30(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    uVar1 = 0;
    break;
  case 2:
    (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xc0))
              (local_28);
    local_8 = 1;
    uVar1 = FUN_00501cb0();
    FUN_00501f30(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    uVar1 = 0;
    break;
  case 3:
    (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xac))
              (local_30);
    local_8 = 2;
    uVar1 = FUN_00501cb0();
    FUN_00501f30(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    uVar1 = 0;
    break;
  case 4:
    (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xb0))
              (local_38);
    local_8 = 3;
    uVar1 = FUN_00501cb0();
    FUN_00501f30(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    uVar1 = 0;
    break;
  case 5:
    local_3c = **(int **)(in_ECX + 0x88);
    uVar1 = (**(code **)(*(int *)(local_3c + 0xc + *(int *)(*(int *)(local_3c + 0xc) + 4)) + 0x14))
                      (local_44);
    local_8 = 4;
    FUN_00501e80(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    uVar1 = 0;
    break;
  case 6:
    uVar1 = FUN_005a60a0(local_4c,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_8 = 5;
    FUN_00501e80(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    uVar1 = 0;
    break;
  default:
    for (local_14 = *(int *)(in_ECX + 0x164);
        (local_14 != 0 && (*(short *)(local_14 + 4) != param_1));
        local_14 = *(int *)(local_14 + 0xc)) {
    }
    if ((local_14 == 0) || (*(int *)(local_14 + 8) != 1)) {
      uVar1 = 2;
    }
    else {
      FUN_00501e80(local_14 + 0x10);
      uVar1 = 0;
    }
  }
  ExceptionList = local_10;
  return uVar1;
}

