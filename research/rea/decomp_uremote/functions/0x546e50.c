// rea decompile_all
// name: FUN_00546e50
// address: 0x546e50
// body: available
// range: 0x546e50-0x5472ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00546e50(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_d0;
  int local_cc;
  undefined1 local_94 [12];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [12];
  undefined4 local_6c;
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
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2701;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(uint *)(param_1 + 0x10) & 0xff) == 0x19) {
    local_14 = param_1;
    FUN_005033e0(param_1 + 0x48);
    local_18 = FUN_0051f960(local_28);
    if (local_18 == 0) {
      local_18 = FUN_0051ad00(*(undefined4 *)(in_ECX + 0x7c),uVar1);
    }
    if (local_18 != 0) {
      FUN_005033e0(local_14 + 0x48);
      FUN_00503650(local_34);
      local_3c = *(undefined4 *)(local_14 + 0x28);
      *(undefined4 *)(local_18 + 0xa0) = local_3c;
      local_44 = *(undefined4 *)(local_14 + 0x2c);
      *(undefined4 *)(local_18 + 0x88) = local_44;
      local_4c = *(undefined4 *)(local_14 + 0x30);
      *(undefined4 *)(local_18 + 0x90) = local_4c;
      local_54 = *(undefined4 *)(local_14 + 0x34);
      *(undefined4 *)(local_18 + 0x8c) = local_54;
      local_5c = *(undefined4 *)(local_14 + 0x38);
      *(undefined4 *)(local_18 + 0x94) = local_5c;
      local_64 = *(undefined4 *)(local_14 + 0x3c);
      *(undefined4 *)(local_18 + 0x9c) = local_64;
      local_6c = *(undefined4 *)(local_14 + 0x40);
      *(undefined4 *)(local_18 + 0x98) = local_6c;
      local_68 = local_6c;
      local_60 = local_64;
      local_58 = local_5c;
      local_50 = local_54;
      local_48 = local_4c;
      local_40 = local_44;
      local_38 = local_3c;
      FUN_005033e0(local_14 + 0x54);
      FUN_00503650(local_78);
      *(undefined4 *)(local_18 + 0xa4) = *(undefined4 *)(local_14 + 0x44);
      uVar2 = FUN_005462c0(local_80);
      local_8 = 0;
      FUN_00501e80(uVar2);
      local_8 = 0xffffffff;
      FUN_00501900();
      uVar2 = FUN_00546300(local_88);
      local_8 = 1;
      FUN_00501e80(uVar2);
      local_8 = 0xffffffff;
      FUN_00501900();
      FUN_0051e7d0(local_14 + 0x70);
      *(byte *)(local_18 + 0xd8) = *(byte *)(local_18 + 0xd8) | 1;
      FUN_005033e0(local_14 + 0x48);
      FUN_00503650(local_94);
      FUN_005063a0(local_14 + 0x70);
      local_1c = FUN_00544d10(*(undefined4 *)(in_ECX + 0x7c),in_ECX + 0x80);
      if (local_1c != 0) {
        if (local_1c == 0) {
          local_cc = 0;
        }
        else {
          local_cc = local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 0xc);
        }
        if (local_18 == 0) {
          local_d0 = 0;
        }
        else {
          local_d0 = local_18 + 0x28 + *(int *)(*(int *)(local_18 + 0x28) + 0xc);
        }
        FUN_005382c0(1,in_ECX,(-(*(char *)(in_ECX + 0xf4) != '\0') & 4U) + 0x81,local_d0,local_cc);
        (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 8)) + 4))();
      }
      (**(code **)(*(int *)(local_18 + 0x28 + *(int *)(*(int *)(local_18 + 0x28) + 8)) + 4))();
    }
    FUN_005560c0(0);
  }
  else {
    FUN_005382c0(1,in_ECX,(-(*(char *)(in_ECX + 0xf4) != '\0') & 6U) + 0x80,0,0);
    FUN_005560c0(0);
  }
  FUN_00544580();
  ExceptionList = local_10;
  return;
}

