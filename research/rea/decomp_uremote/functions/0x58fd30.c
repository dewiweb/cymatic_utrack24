// rea decompile_all
// name: FUN_0058fd30
// address: 0x58fd30
// body: available
// range: 0x58fd30-0x590609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_0058fd30(uint param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char *pcStack_180;
  char *pcStack_17c;
  char *pcStack_178;
  uint uStack_174;
  char *local_170;
  char *local_16c;
  int *local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  int local_158;
  uint local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int *local_118;
  undefined1 *local_114;
  int local_110;
  int *local_10c;
  int local_108;
  int local_104;
  undefined1 *local_100;
  undefined1 *local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  int local_dc;
  char *local_d8;
  undefined1 *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  short local_c8;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  short local_b0;
  char local_a8 [16];
  char *local_98;
  undefined1 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  short local_88;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  char local_40 [24];
  ushort local_28;
  int *local_24;
  ushort local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d6480;
  local_10 = ExceptionList;
  uStack_174 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(uint *)(in_ECX + 0x44) = param_1;
  local_11 = 1;
  local_124 = in_ECX;
  if ((param_1 & 1) != 0) {
    local_128 = *(int *)(in_ECX + 0x18);
    local_40[0] = '\x01';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = ' ';
    local_40[8] = -1;
    local_40[9] = -1;
    pcStack_178 = "Clock";
    pcStack_17c = local_40;
    pcStack_180 = (char *)0x58fdda;
    (**(code **)(*(int *)(local_128 + 0x28 + *(int *)(*(int *)(local_128 + 0x28) + 0xc)) + 0x2c))();
    local_12c = *(int *)(local_124 + 0x18);
    local_50 = 2;
    local_4c = 0x10000000;
    local_48 = 0xffff;
    pcStack_180 = "Separate streams";
    (**(code **)(*(int *)(local_12c + 0x28 + *(int *)(*(int *)(local_12c + 0x28) + 0xc)) + 0x2c))
              (&local_50);
    for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
      local_130 = (uint)local_18;
      if (local_130 == 0) {
        local_68 = 0x88000;
        local_134 = *(int *)(local_124 + 0x18);
        local_60 = 1;
        local_5c = 0x20000000;
        local_58 = 0;
        pcStack_178 = (char *)&local_60;
        pcStack_17c = "Clock";
        local_64 = (undefined1 *)&pcStack_180;
        local_f0 = (undefined1 *)&pcStack_180;
        pcStack_180 = (char *)0x88000;
        local_138 = (**(code **)(*(int *)(local_134 + 0x28 +
                                         *(int *)(*(int *)(local_134 + 0x28) + 0xc)) + 0xe4))();
        *(undefined4 *)(local_124 + 0x1c) = local_138;
        if (*(int *)(local_124 + 0x1c) == 0) {
          local_11 = 0;
        }
        else {
          *(undefined1 *)(local_124 + 0x4f) = 1;
          if (local_124 == 0) {
            local_13c = 0;
          }
          else {
            local_13c = local_124 + 8;
          }
          pcStack_178 = (char *)local_13c;
          pcStack_17c = (char *)0x58ff6f;
          (**(code **)(**(int **)(local_124 + 0x1c) + 0x14))();
        }
      }
      else if (local_130 == 1) {
        local_80 = 0x4000000c;
        local_140 = *(int *)(local_124 + 0x18);
        local_78 = 2;
        local_74 = 0x10000000;
        local_70 = 0;
        pcStack_178 = (char *)&local_78;
        pcStack_17c = "Sys";
        local_7c = (undefined1 *)&pcStack_180;
        local_f4 = (undefined1 *)&pcStack_180;
        pcStack_180 = (char *)0x4000000c;
        local_144 = (**(code **)(*(int *)(local_140 + 0x28 +
                                         *(int *)(*(int *)(local_140 + 0x28) + 0xc)) + 0xe4))();
        local_11 = local_11 & local_144 != 0;
      }
      else {
        pcStack_178 = "Ch";
        pcStack_17c = (char *)0x590025;
        FUN_00501870();
        local_8 = 0;
        pcStack_178 = (char *)(local_18 - 1);
        pcStack_17c = (char *)0x59003c;
        FUN_00502ce0();
        local_98 = (char *)0x8000000d;
        local_148 = *(int *)(local_124 + 0x18);
        local_90 = 2;
        local_8c = 0x10000000;
        local_88 = local_18 - 1;
        pcStack_178 = (char *)&local_90;
        pcStack_17c = (char *)0x590086;
        pcStack_17c = (char *)FUN_00501cb0();
        local_94 = (undefined1 *)&pcStack_180;
        local_f8 = (undefined1 *)&pcStack_180;
        pcStack_180 = local_98;
        local_14c = (**(code **)(*(int *)(local_148 + 0x28 +
                                         *(int *)(*(int *)(local_148 + 0x28) + 0xc)) + 0xe4))();
        local_11 = local_11 & local_14c != 0;
        local_8 = 0xffffffff;
        pcStack_178 = (char *)0x590102;
        FUN_00501900();
      }
    }
  }
  if ((param_1 & 2) != 0) {
    local_150 = *(int *)(local_124 + 0x18);
    local_a8[0] = '\x02';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\x10';
    local_a8[8] = -1;
    local_a8[9] = -1;
    pcStack_178 = "Separate streams";
    pcStack_17c = local_a8;
    pcStack_180 = (char *)0x59017f;
    (**(code **)(*(int *)(local_150 + 0x28 + *(int *)(*(int *)(local_150 + 0x28) + 0xc)) + 0x2c))();
    local_24 = (int *)0x0;
    for (local_28 = 0; local_28 < 0x11; local_28 = local_28 + 1) {
      local_154 = (uint)local_28;
      if (local_154 == 0) {
        local_c0 = 0x4008800c;
        local_158 = *(int *)(local_124 + 0x18);
        local_b8 = 2;
        local_b4 = 0x10000000;
        local_b0 = local_28 + 1;
        pcStack_178 = (char *)&local_b8;
        pcStack_17c = "Sys|Clock";
        local_bc = (undefined1 *)&pcStack_180;
        local_fc = (undefined1 *)&pcStack_180;
        pcStack_180 = (char *)0x4008800c;
        local_15c = (**(code **)(*(int *)(local_158 + 0x28 +
                                         *(int *)(*(int *)(local_158 + 0x28) + 0xc)) + 0x108))();
        *(undefined4 *)(local_124 + 0x20) = local_15c;
        if (*(int *)(local_124 + 0x20) == 0) {
          local_11 = 0;
        }
        else {
          if (local_124 == 0) {
            local_160 = 0;
          }
          else {
            local_160 = local_124 + 0xc;
          }
          pcStack_178 = (char *)local_160;
          pcStack_17c = (char *)0x5902bc;
          (**(code **)(**(int **)(local_124 + 0x20) + 0x14))();
          local_24 = *(int **)(local_124 + 0x20);
        }
      }
      else {
        pcStack_178 = "Ch";
        pcStack_17c = (char *)0x5902e0;
        FUN_00501870();
        local_8 = 1;
        pcStack_178 = (char *)(uint)local_28;
        pcStack_17c = (char *)0x5902f4;
        FUN_00502ce0();
        local_d8 = (char *)0x8000000d;
        local_164 = *(int *)(local_124 + 0x18);
        local_d0 = 2;
        local_cc = 0x10000000;
        local_c8 = local_28 + 1;
        pcStack_178 = (char *)&local_d0;
        pcStack_17c = (char *)0x59033e;
        pcStack_17c = (char *)FUN_00501cb0();
        local_d4 = (undefined1 *)&pcStack_180;
        local_100 = (undefined1 *)&pcStack_180;
        pcStack_180 = local_d8;
        local_168 = (int *)(**(code **)(*(int *)(local_164 + 0x28 +
                                                *(int *)(*(int *)(local_164 + 0x28) + 0xc)) + 0x108)
                           )();
        local_11 = local_11 & local_168 != (int *)0x0;
        local_8 = 0xffffffff;
        pcStack_178 = (char *)0x5903c0;
        local_24 = local_168;
        FUN_00501900();
      }
      if (local_24 != (int *)0x0) {
        pcStack_178 = (char *)local_124;
        pcStack_17c = (char *)0x5903da;
        (**(code **)(*local_24 + 4))();
      }
    }
  }
  if (local_124 == 0) {
    local_108 = 0;
  }
  else {
    local_108 = local_124 + 4;
  }
  local_104 = *(int *)(local_124 + 0x18);
  *(int *)(local_104 + 0x110) = local_108;
  if (local_124 == 0) {
    local_16c = (char *)0x0;
  }
  else {
    local_16c = (char *)(local_124 + 0x14);
  }
  local_e4 = 1;
  local_10c = *(int **)(*(int *)(local_124 + 0x18) + 0x88);
  local_110 = *local_10c;
  pcStack_178 = local_16c;
  local_e0 = (undefined1 *)&pcStack_17c;
  local_114 = (undefined1 *)&pcStack_17c;
  pcStack_17c = local_16c;
                    /* WARNING: Ignoring partial resolution of indirect */
  pcStack_17c._0_2_ = 1;
  pcStack_180 = (char *)0x5904db;
  local_dc = local_110;
  (**(code **)(*(int *)(local_110 + 0xc + *(int *)(*(int *)(local_110 + 0xc) + 4)) + 0x10c))();
  if (local_124 == 0) {
    local_170 = (char *)0x0;
  }
  else {
    local_170 = (char *)(local_124 + 0x10);
  }
  local_118 = *(int **)(*(int *)(local_124 + 0x18) + 0x88);
  local_11c = *local_118;
  pcStack_180 = local_170;
  local_e8 = local_11c;
  uVar1 = (**(code **)(*(int *)(local_11c + 0xc + *(int *)(*(int *)(local_11c + 0xc) + 4)) + 0x114))
                    ();
  *(undefined4 *)(local_124 + 0x24) = uVar1;
  if (*(int *)(local_124 + 0x24) != 0) {
    local_120 = *(int *)(local_124 + 0x24);
    local_ec = (**(code **)(*(int *)(local_120 + 4 + *(int *)(*(int *)(local_120 + 4) + 4)) + 0x24))
                         ();
    (*(code *)**(undefined4 **)(local_ec + 0x28 + *(int *)(*(int *)(local_ec + 0x28) + 8)))();
  }
  ExceptionList = local_10;
  return local_11;
}

