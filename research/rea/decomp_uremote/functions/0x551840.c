// rea decompile_all
// name: FUN_00551840
// address: 0x551840
// body: available
// range: 0x551840-0x551f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00551840(int param_1)

{
  undefined4 uVar1;
  uint local_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 *local_184;
  undefined4 *local_180;
  undefined4 *puStack_17c;
  uint uStack_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  uint local_14c;
  undefined1 *local_148;
  undefined2 local_142;
  undefined1 *local_140;
  ushort local_13c;
  ushort local_13a;
  ushort local_138;
  ushort local_136;
  uint local_134;
  undefined1 *local_130;
  ushort local_12a;
  undefined1 *local_128;
  undefined4 *local_124;
  int local_120;
  undefined1 *local_11c;
  ushort local_116;
  undefined1 *local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined1 *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f0 [8];
  uint local_e8;
  undefined1 *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  undefined1 local_b8 [32];
  undefined4 local_98;
  undefined1 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined4 *local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3427;
  local_10 = ExceptionList;
  uStack_178 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_17c = (undefined4 *)0x551885;
  FUN_00515830();
  if (*(int *)(local_14c + 0xb8) == 0) {
    if (*(int *)(local_14c + 0xcc) != 0) {
      if ((param_1 == 0) || (local_120 = *(int *)(param_1 + 0x28), local_120 != 0x10024303)) {
        local_98 = 0;
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        puStack_17c = (undefined4 *)0x0;
        local_180 = &local_90;
        local_94 = (undefined1 *)&local_184;
        local_130 = (undefined1 *)&local_184;
        local_184 = (undefined4 *)0x0;
        uStack_188 = 0;
        uStack_18c = (uint)*(ushort *)(local_14c + 0xec);
        uStack_190 = (uint)(param_1 == 0) * 4 + 0x80;
        local_194 = local_14c;
        FUN_00598630(1);
      }
      else {
        local_70 = *(undefined4 *)(param_1 + 0x88);
        local_6c = *(undefined4 *)(param_1 + 0x8c);
        local_68 = *(undefined4 *)(param_1 + 0x90);
        local_64 = *(undefined4 *)(param_1 + 0x94);
        local_124 = *(undefined4 **)(param_1 + 0xac);
        puStack_17c = (undefined4 *)local_50;
        local_180 = (undefined4 *)0x551ac1;
        local_78 = local_124;
        local_60 = local_70;
        local_5c = local_6c;
        local_58 = local_68;
        local_54 = local_64;
        local_15c = FUN_0054ff10();
        local_8 = 1;
        puStack_17c = (undefined4 *)local_80;
        local_180 = (undefined4 *)0x551ae6;
        local_158 = local_15c;
        local_164 = FUN_0054fed0();
        local_8._0_1_ = 2;
        puStack_17c = (undefined4 *)0x551b07;
        local_160 = local_164;
        puStack_17c = (undefined4 *)FUN_00501d60();
        local_180 = &local_60;
        local_74 = (undefined1 *)&local_184;
        local_128 = (undefined1 *)&local_184;
        local_184 = local_78;
        local_12a = *(ushort *)(param_1 + 0xc0);
        uStack_188 = 0x551b3f;
        uStack_188 = FUN_00501d60();
        uStack_18c = (uint)local_12a;
        uStack_190 = 0x81;
        local_194 = local_14c;
        FUN_00598630(1);
        local_8 = CONCAT31(local_8._1_3_,1);
        puStack_17c = (undefined4 *)0x551b73;
        FUN_00501900();
        local_8 = 0xffffffff;
        puStack_17c = (undefined4 *)0x551b82;
        FUN_00501900();
      }
      puStack_17c = (undefined4 *)0x0;
      local_180 = (undefined4 *)0x551c22;
      FUN_005560c0();
      goto LAB_00551ee6;
    }
    if (*(int *)(local_14c + 0xe0) == 0) goto LAB_00551ee6;
    local_194 = 0;
    if (param_1 == 0) {
LAB_00551e3e:
      local_108 = 0;
      local_100 = 0;
      local_fc = 0;
      local_f8 = 0;
      puStack_17c = (undefined4 *)&DAT_0095c868;
      local_180 = (undefined4 *)0x0;
      local_184 = &local_100;
      uStack_188 = 0;
      uStack_18c = 0;
      uStack_190 = 0;
      local_104 = (undefined1 *)&local_194;
      local_148 = (undefined1 *)&local_194;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_194._0_2_ = 0;
      FUN_00598870(1,local_14c,(param_1 == 0) * '\x04' + -0x80,*(undefined2 *)(local_14c + 0xec),0);
    }
    else {
      local_194 = *(uint *)(param_1 + 0x28);
      local_134 = local_194;
      if (local_194 != 0x303e0320) goto LAB_00551e3e;
      puStack_17c = (undefined4 *)0x551c75;
      FUN_00503bc0();
      puStack_17c = (undefined4 *)(param_1 + 0xf4);
      local_180 = (undefined4 *)0x551c8a;
      FUN_00552310();
      local_e0 = *(undefined4 *)(param_1 + 0x88);
      local_dc = *(undefined4 *)(param_1 + 0x8c);
      local_d8 = *(undefined4 *)(param_1 + 0x90);
      local_d4 = *(undefined4 *)(param_1 + 0x94);
      local_136 = *(ushort *)(param_1 + 0xc2);
      local_e8 = (uint)local_136;
      puStack_17c = (undefined4 *)local_c0;
      local_180 = (undefined4 *)0x551d12;
      local_d0 = local_e0;
      local_cc = local_dc;
      local_c8 = local_d8;
      local_c4 = local_d4;
      local_16c = FUN_0054ff10();
      local_8 = 3;
      puStack_17c = (undefined4 *)local_f0;
      local_180 = (undefined4 *)0x551d3a;
      local_168 = local_16c;
      local_174 = FUN_0054fed0();
      local_8._0_1_ = 4;
      local_138 = *(ushort *)(param_1 + 200);
      local_13a = *(ushort *)(param_1 + 0xc6);
      local_13c = *(ushort *)(param_1 + 0xc4);
      puStack_17c = (undefined4 *)local_b8;
      local_180 = (undefined4 *)0x551d95;
      local_170 = local_174;
      local_180 = (undefined4 *)FUN_00501d60();
      local_184 = &local_d0;
      uStack_188 = (uint)local_138;
      uStack_18c = (uint)local_13a;
      uStack_190 = (uint)local_13c;
      local_e4 = (undefined1 *)&local_194;
      local_140 = (undefined1 *)&local_194;
      local_194 = uStack_188;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_194._0_2_ = (undefined2)local_e8;
      local_142 = *(undefined2 *)(param_1 + 0xc0);
      uVar1 = FUN_00501d60();
      FUN_00598870(1,local_14c,0x81,local_142,uVar1);
      local_8 = CONCAT31(local_8._1_3_,3);
      puStack_17c = (undefined4 *)0x551e27;
      FUN_00501900();
      local_8 = 0xffffffff;
      puStack_17c = (undefined4 *)0x551e39;
      FUN_00501900();
    }
    puStack_17c = (undefined4 *)0x0;
    local_180 = (undefined4 *)0x551ee6;
    FUN_005560c0();
    goto LAB_00551ee6;
  }
  if (param_1 == 0) {
LAB_005519ac:
    local_48 = 0;
    puStack_17c = (undefined4 *)&DAT_0095c898;
    local_44 = (undefined1 *)&local_180;
    local_11c = (undefined1 *)&local_180;
    local_180 = (undefined4 *)0x0;
    local_184 = (undefined4 *)0x0;
    uStack_188 = (uint)*(ushort *)(local_14c + 0xec);
    uStack_18c = (uint)(param_1 == 0) * 4 + 0x80;
    uStack_190 = local_14c;
    local_194 = 1;
    FUN_00598410();
  }
  else {
    local_10c = *(int *)(param_1 + 0x28);
    if (local_10c != 0x10022104) goto LAB_005519ac;
    local_30 = *(undefined4 *)(param_1 + 0x88);
    local_2c = *(undefined4 *)(param_1 + 0x8c);
    local_28 = *(undefined4 *)(param_1 + 0x90);
    local_24 = *(undefined4 *)(param_1 + 0x94);
    local_110 = *(undefined4 *)(param_1 + 0xa4);
    puStack_17c = (undefined4 *)local_40;
    local_180 = (undefined4 *)0x551923;
    local_38 = local_110;
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
    local_154 = FUN_0054fed0();
    local_8 = 0;
    puStack_17c = &local_20;
    local_34 = (undefined1 *)&local_180;
    local_114 = (undefined1 *)&local_180;
    local_116 = *(ushort *)(param_1 + 0xc0);
    local_184 = (undefined4 *)0x551973;
    local_150 = local_154;
    local_184 = (undefined4 *)FUN_00501d60();
    uStack_188 = (uint)local_116;
    uStack_18c = 0x81;
    uStack_190 = local_14c;
    local_194 = 1;
    FUN_00598410();
    local_8 = 0xffffffff;
    puStack_17c = (undefined4 *)0x5519aa;
    FUN_00501900();
  }
  puStack_17c = (undefined4 *)0x0;
  local_180 = (undefined4 *)0x551a1d;
  FUN_005560c0();
LAB_00551ee6:
  puStack_17c = (undefined4 *)0x551efd;
  FUN_00515860();
  ExceptionList = local_10;
  return 1;
}

