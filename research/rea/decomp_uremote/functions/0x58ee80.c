// rea decompile_all
// name: FUN_0058ee80
// address: 0x58ee80
// body: available
// range: 0x58ee80-0x58f436 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ee80(int param_1)

{
  char cVar1;
  undefined1 *puStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined1 auStack_144 [8];
  undefined4 uStack_13c;
  int *piStack_138;
  ushort *puStack_134;
  int *piStack_130;
  ushort *puStack_12c;
  uint uStack_128;
  int local_124;
  int local_120;
  int local_11c;
  uint local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined1 *local_dc;
  undefined4 *local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  undefined1 *local_c8;
  undefined1 *local_c4;
  int local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a0 [16];
  undefined2 local_90;
  undefined1 local_8c [32];
  ushort local_6c;
  int local_68;
  undefined1 local_64 [16];
  ushort local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  int local_3c;
  ushort local_38 [2];
  int local_34;
  undefined1 local_30 [16];
  ushort local_20;
  int local_1c;
  undefined2 local_18 [2];
  ushort local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d6450;
  local_10 = ExceptionList;
  uStack_128 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_118 = (uint)*(ushort *)(param_1 + 0xf0);
  switch(local_118) {
  case 0:
    local_d0 = *(int *)(param_1 + 0xf4);
    if (local_d0 != 0) {
      local_d4 = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)0x58ef0e;
      local_20 = FUN_0056f500();
      local_11c = *(int *)(local_114 + 4);
      puStack_12c = (ushort *)0x1;
      piStack_130 = (int *)0x58ef57;
      (**(code **)(*(int *)(local_11c + 0x28 + *(int *)(*(int *)(local_11c + 0x28) + 0xc)) + 0x148))
                ();
      piStack_130 = (int *)0x1;
      puStack_134 = (ushort *)0x0;
      piStack_138 = (int *)0x1;
      uStack_13c = 0x58ef6b;
      FUN_005628d0();
      local_1c = 0;
      local_14[0] = 0;
      local_18[0] = 0;
      piStack_130 = (int *)local_18;
      puStack_134 = local_14;
      piStack_138 = &local_1c;
      uStack_13c = 0x58ef98;
      cVar1 = FUN_00565630();
      if (cVar1 != '\0') {
        piStack_130 = (int *)0x58efab;
        FUN_0056ebe0();
        local_8 = 0;
        piStack_130 = (int *)(uint)local_14[0];
        puStack_134 = (ushort *)0x58efbf;
        FUN_0056f170();
        for (local_34 = 0; local_34 < (int)(uint)local_14[0]; local_34 = local_34 + 1) {
          piStack_130 = (int *)(local_34 * 0x18 + local_1c);
          puStack_134 = (ushort *)0x58efec;
          FUN_0056f320();
        }
        local_120 = *(int *)(local_114 + 4);
        local_d8 = *(undefined4 **)(*(int *)(local_114 + 4) + 0x88);
        local_dc = (undefined1 *)*local_d8;
        piStack_130 = (int *)local_30;
        puStack_134 = (ushort *)0x82;
        piStack_138 = (int *)(uint)local_20;
        local_b8 = (undefined1 *)&puStack_148;
        puStack_14c = (undefined1 *)&puStack_148;
        uStack_150 = 0x58f05f;
        (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))();
        local_bc = (undefined1 *)&puStack_158;
        (**(code **)(*(int *)(local_120 + 0x28 + *(int *)(*(int *)(local_120 + 0x28) + 0xc)) + 0x98)
        )(&puStack_158);
        puStack_158 = local_dc;
        FUN_0059b6a0();
        local_8 = 0xffffffff;
        piStack_130 = (int *)0x58f0bd;
        FUN_0056ec30();
      }
      if (local_1c != 0) {
        local_c0 = local_1c;
        piStack_130 = (int *)local_1c;
        puStack_134 = (ushort *)0x58f0d8;
        FUN_005b13e8();
      }
    }
    break;
  case 1:
    local_e0 = *(int *)(param_1 + 0xf4);
    if (local_e0 != 0) {
      local_e4 = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)0x58f116;
      local_54 = FUN_0056f500();
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_e8 = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)&local_50;
      piStack_130 = (int *)0x58f14c;
      FUN_0056f7b0();
      local_3c = 0;
      local_38[0] = 0;
      puStack_12c = local_38;
      piStack_130 = &local_3c;
      puStack_134 = (ushort *)&local_50;
      piStack_138 = (int *)0x58f173;
      cVar1 = FUN_005656e0();
      if (cVar1 != '\0') {
        puStack_12c = (ushort *)0x58f186;
        FUN_0056ebe0();
        local_8 = 1;
        puStack_12c = (ushort *)(uint)local_38[0];
        piStack_130 = (int *)0x58f19a;
        FUN_0056f170();
        for (local_68 = 0; local_68 < (int)(uint)local_38[0]; local_68 = local_68 + 1) {
          puStack_12c = (ushort *)(local_68 * 10 + local_3c);
          piStack_130 = (int *)0x58f1c7;
          FUN_0056f370();
        }
        local_124 = *(int *)(local_114 + 4);
        local_ec = *(undefined4 **)(*(int *)(local_114 + 4) + 0x88);
        local_f0 = *local_ec;
        puStack_12c = (ushort *)local_64;
        piStack_130 = (int *)0x83;
        puStack_134 = (ushort *)(uint)local_54;
        local_c4 = auStack_144;
        puStack_148 = auStack_144;
        puStack_14c = (undefined1 *)0x58f23a;
        (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))();
        local_c8 = (undefined1 *)&uStack_154;
        puStack_158 = (undefined1 *)&uStack_154;
        (**(code **)(*(int *)(local_124 + 0x28 + *(int *)(*(int *)(local_124 + 0x28) + 0xc)) + 0x98)
        )();
        uStack_154 = local_f0;
        puStack_158 = (undefined1 *)0x58f286;
        FUN_0059b6a0();
        local_8 = 0xffffffff;
        puStack_12c = (ushort *)0x58f298;
        FUN_0056ec30();
      }
      if (local_3c != 0) {
        local_cc = local_3c;
        puStack_12c = (ushort *)local_3c;
        piStack_130 = (int *)0x58f2b3;
        FUN_005b13e8();
      }
    }
    break;
  case 2:
    local_f4 = *(int *)(param_1 + 0xf4);
    if (local_f4 != 0) {
      local_f8 = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)0x58f2f1;
      local_90 = FUN_0056f500();
      local_fc = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)0x58f312;
      local_6c = FUN_0056f500();
      puStack_12c = (ushort *)0x58f321;
      FUN_005057a0();
      local_100 = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)local_8c;
      piStack_130 = (int *)0x58f342;
      FUN_0056f710();
      puStack_12c = (ushort *)local_8c;
      piStack_130 = (int *)(uint)local_6c;
      puStack_134 = (ushort *)0x1;
      piStack_138 = (int *)0x58f35e;
      FUN_005659e0();
    }
    break;
  case 3:
    local_104 = *(int *)(param_1 + 0xf4);
    if (local_104 != 0) {
      local_108 = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)0x58f399;
      local_b4 = FUN_0056f500();
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      local_10c = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)&local_b0;
      piStack_130 = (int *)0x58f3de;
      FUN_0056f7b0();
      puStack_12c = (ushort *)0x58f3e9;
      FUN_00503bc0();
      local_110 = *(undefined4 *)(param_1 + 0xf4);
      puStack_12c = (ushort *)local_a0;
      piStack_130 = (int *)0x58f40a;
      FUN_0056f750();
      puStack_12c = (ushort *)local_a0;
      piStack_130 = &local_b0;
      puStack_134 = (ushort *)0x58f426;
      FUN_00565a40();
    }
  }
  ExceptionList = local_10;
  return;
}

