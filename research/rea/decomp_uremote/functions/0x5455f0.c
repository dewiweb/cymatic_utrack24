// rea decompile_all
// name: FUN_005455f0
// address: 0x5455f0
// body: available
// range: 0x5455f0-0x545a32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005455f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int local_180;
  int local_17c;
  undefined1 local_134 [88];
  undefined1 local_dc [88];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d24b4;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005033e0(param_1 + 0x48);
  local_14 = FUN_0051f960(local_24);
  if (local_14 == 0) {
    local_14 = FUN_0051ad00(*(undefined4 *)(in_ECX + 0xc4),uVar1);
  }
  if (local_14 != 0) {
    FUN_005033e0(param_1 + 0x48);
    FUN_00503650(local_30);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(local_14 + 0xa0) = local_38;
    local_40 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(local_14 + 0x88) = local_40;
    local_48 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(local_14 + 0x90) = local_48;
    local_50 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(local_14 + 0x8c) = local_50;
    local_58 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(local_14 + 0x94) = local_58;
    local_60 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(local_14 + 0x9c) = local_60;
    local_68 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(local_14 + 0x98) = local_68;
    local_64 = local_68;
    local_5c = local_60;
    local_54 = local_58;
    local_4c = local_50;
    local_44 = local_48;
    local_3c = local_40;
    local_34 = local_38;
    FUN_005033e0(param_1 + 0x54);
    FUN_00503650(local_74);
    *(undefined4 *)(local_14 + 0xa4) = *(undefined4 *)(param_1 + 0x44);
    uVar2 = FUN_005462c0(local_7c);
    local_8 = 0;
    FUN_00501e80(uVar2);
    local_8 = 0xffffffff;
    FUN_00501900();
    uVar2 = FUN_00546300(local_84);
    local_8 = 1;
    FUN_00501e80(uVar2);
    local_8 = 0xffffffff;
    FUN_00501900();
    iVar3 = FUN_00546340(local_dc);
    local_8 = 2;
    FUN_0051e7d0(iVar3 + 0x48);
    local_8 = 0xffffffff;
    FUN_00506c20();
    *(byte *)(local_14 + 0xd8) = *(byte *)(local_14 + 0xd8) | 1;
    uVar2 = FUN_00546340(local_134);
    local_8 = 3;
    local_18 = FUN_00544c30(*(undefined4 *)(in_ECX + 0xc4),uVar2);
    local_8 = 0xffffffff;
    FUN_00506c20();
    if (local_18 != 0) {
      if (local_18 == 0) {
        local_17c = 0;
      }
      else {
        local_17c = local_18 + 0x28 + *(int *)(*(int *)(local_18 + 0x28) + 0xc);
      }
      if (local_14 == 0) {
        local_180 = 0;
      }
      else {
        local_180 = local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 0xc);
      }
      FUN_005382c0(1,in_ECX,(-(*(char *)(in_ECX + 200) != '\0') & 4U) + 0x81,local_180,local_17c);
      (**(code **)(*(int *)(local_18 + 0x28 + *(int *)(*(int *)(local_18 + 0x28) + 8)) + 4))();
    }
    (**(code **)(*(int *)(local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 8)) + 4))();
  }
  FUN_005560c0(0);
  ExceptionList = local_10;
  return;
}

