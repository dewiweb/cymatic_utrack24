// rea decompile_all
// name: FUN_000dc300
// address: 0xdc300
// body: available
// range: 0xdc300-0xdd2a7 inclusive
// range: 0xdd2ac-0xddcef inclusive
// range: 0xddd44-0xde0c3 inclusive
// range: 0xde16c-0xde567 inclusive
// range: 0xde620-0xdf5eb inclusive
// range: 0xdf660-0xdfc27 inclusive
// range: 0xdfc80-0xdfcaf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000dc300(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_1c4 [24];
  undefined1 auStack_1ac [24];
  undefined1 auStack_194 [24];
  undefined4 local_17c;
  undefined4 local_178;
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
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int *local_ac;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_c == 0) {
    local_c = 0;
  }
  else {
    local_c = FUN_00137cac(local_c);
  }
  local_ec = local_c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0,local_ec);
  local_10 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_10 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_001448b4(local_10);
  }
  local_f0 = local_10;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,1,local_f0);
  local_14 = FUN_001c6b14(0x14,DAT_000dd2a8);
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_00127344(local_14);
  }
  local_f4 = local_14;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,2,local_f4);
  local_18 = FUN_001c6b14(0x18,DAT_000dd2a8);
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_001379b4(local_18);
  }
  local_f8 = local_18;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,3,local_f8);
  local_1c = FUN_001c6b14(0x14,DAT_000dd2a8);
  if (local_1c == 0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_000b4044(local_1c);
  }
  local_fc = local_1c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,4,local_fc);
  local_20 = FUN_001c6b14(0x1c,DAT_000dd2a8);
  if (local_20 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_0011a610(local_20,1);
  }
  local_100 = local_20;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,5,local_100);
  local_20 = FUN_001c6b14(0x1c,DAT_000dd2a8);
  if (local_20 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_0011a610(local_20,0);
  }
  local_104 = local_20;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,6,local_104);
  local_24 = FUN_001c6b14(0x18,DAT_000dd2a8);
  if (local_24 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_001273c4(local_24);
  }
  local_108 = local_24;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,7,local_108);
  local_28 = FUN_001c6b14(0x1c,DAT_000dd2a8);
  if (local_28 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_00137b00(local_28);
  }
  local_10c = local_28;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,8,local_10c);
  local_2c = FUN_001c6b14(0x14,DAT_000dd2a8);
  if (local_2c == 0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_000ec768(local_2c);
  }
  local_110 = local_2c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,9,local_110);
  local_30 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_30 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_0013a994(local_30);
  }
  local_114 = local_30;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,10,local_114);
  local_34 = FUN_001c6b14(0x30,DAT_000dd2a8);
  if (local_34 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_00057a68(local_34);
  }
  local_118 = local_34;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0xb,local_118);
  local_38 = FUN_001c6b14(0x14,DAT_000dd2a8);
  if (local_38 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_000d72e8(local_38);
  }
  local_11c = local_38;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0xc,local_11c);
  local_3c = FUN_001c6b14(0x30,DAT_000dd2a8);
  if (local_3c == 0) {
    local_3c = 0;
  }
  else {
    local_3c = FUN_0012d4ec(local_3c);
  }
  local_120 = local_3c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0xf,local_120);
  local_40 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_40 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_00132eb8(local_40);
  }
  local_124 = local_40;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x10,local_124);
  local_44 = FUN_001c6b14(0x44,DAT_000dd2a8);
  if (local_44 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_000b7414(local_44);
  }
  local_128 = local_44;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x11,local_128);
  local_48 = FUN_001c6b14(0x44,DAT_000dd2a8);
  if (local_48 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_000b7f68(local_48);
  }
  local_12c = local_48;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x12,local_12c);
  local_4c = FUN_001c6b14(0x24,DAT_000dd2a8);
  if (local_4c == 0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_000fc0f4(local_4c);
  }
  local_130 = local_4c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x13,local_130);
  local_50 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_50 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_000ec980(local_50);
  }
  local_134 = local_50;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0xd,local_134);
  local_54 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_54 == 0) {
    local_54 = 0;
  }
  else {
    local_54 = FUN_0011ad1c(local_54);
  }
  local_138 = local_54;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0xe,local_138);
  local_58 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_58 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_000bb25c(local_58);
  }
  local_13c = local_58;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x14,local_13c);
  local_5c = FUN_001c6b14(0x14,DAT_000dd2a8);
  if (local_5c == 0) {
    local_5c = 0;
  }
  else {
    local_5c = FUN_000b28e8(local_5c);
  }
  local_140 = local_5c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x15,local_140);
  local_60 = FUN_001c6b14(100,DAT_000dd2a8);
  if (local_60 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_000ce78c(local_60);
  }
  local_144 = local_60;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x16,local_144);
  local_64 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_64 == 0) {
    local_64 = 0;
  }
  else {
    local_64 = FUN_0013f64c(local_64);
  }
  local_148 = local_64;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x17,local_148);
  local_68 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_68 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_0012870c(local_68);
  }
  local_14c = local_68;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x18,local_14c);
  local_6c = FUN_001c6b14(0x88,DAT_000dd2a8);
  if (local_6c == 0) {
    local_6c = 0;
  }
  else {
    local_6c = FUN_00122378(local_6c);
  }
  local_150 = local_6c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x19,local_150);
  local_70 = FUN_001c6b14(0x88,DAT_000dd2a8);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_00128530(local_70);
  }
  local_154 = local_70;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x1a,local_154);
  local_74 = FUN_001c6b14(0x2c,DAT_000dd2a8);
  if (local_74 == 0) {
    local_74 = 0;
  }
  else {
    local_74 = FUN_000ed284(local_74);
  }
  local_158 = local_74;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x1b,local_158);
  local_78 = FUN_001c6b14(0x18,DAT_000dd2a8);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = FUN_00138290(local_78);
  }
  local_15c = local_78;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x1c,local_15c);
  local_7c = FUN_001c6b14(0x18,DAT_000dd2a8);
  if (local_7c == 0) {
    local_7c = 0;
  }
  else {
    local_7c = FUN_00138168(local_7c);
  }
  local_160 = local_7c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x1d,local_160);
  local_80 = FUN_001c6b14(0x44,DAT_000dd2a8);
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_0006cc30(local_80);
  }
  local_164 = local_80;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x1e,local_164);
  local_84 = FUN_001c6b14(0x18,DAT_000dd2a8);
  if (local_84 == 0) {
    local_84 = 0;
  }
  else {
    local_84 = FUN_000ceea4(local_84);
  }
  local_168 = local_84;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x21,local_168);
  local_88 = FUN_001c6b14(0x5c,DAT_000dd2a8);
  if (local_88 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_000b7a90(local_88);
  }
  local_16c = local_88;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x20,local_16c);
  local_8c = FUN_001c6b14(0x74,DAT_000dd2a8);
  if (local_8c == 0) {
    local_8c = 0;
  }
  else {
    local_8c = FUN_0009c348(local_8c);
  }
  local_170 = local_8c;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x1f,local_170);
  local_90 = FUN_001c6b14(0x90,DAT_000dd2a8);
  if (local_90 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_00065e64(local_90);
  }
  local_174 = local_90;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x22,local_174);
  local_94 = FUN_001c6b14(0x20,DAT_000dd2a8);
  if (local_94 == 0) {
    local_94 = 0;
  }
  else {
    local_94 = FUN_00071b88(local_94);
  }
  local_178 = local_94;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x23,local_178);
  local_98 = FUN_001c6b14(0x14,DAT_000dd2a8);
  if (local_98 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = FUN_000d81b4(local_98);
  }
  local_17c = local_98;
  uVar1 = FUN_0011eda0();
  FUN_000a1128(uVar1,0x24,local_17c);
  uVar1 = FUN_0022f7d4(auStack_9c);
  FUN_00234d00(auStack_194,uVar1);
  uVar1 = FUN_0022f7d4(auStack_a0);
  FUN_00234d00(auStack_1ac,uVar1);
  uVar1 = FUN_0022f7d4(auStack_a4);
  FUN_00234d00(auStack_1c4,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,1);
  FUN_00234cd0(auStack_1ac,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_1ac,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x14,1);
  FUN_00234cd0(auStack_1ac,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x13,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x14,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x15,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x16,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x17,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x18,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x10,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0xb,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0xc,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x12,auStack_1ac);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x18,auStack_1ac);
  FUN_00234e08(auStack_194,auStack_1ac);
  uVar1 = FUN_000a0ebc(auStack_a8,0x23,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1a,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x11,auStack_194);
  FUN_00234e08(auStack_194,auStack_1ac);
  uVar1 = FUN_000a0ebc(auStack_a8,6,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,8,auStack_194);
  FUN_00234e08(auStack_194,auStack_1ac);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1b,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1d,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0xe,auStack_194);
  FUN_002349c0(auStack_194);
  FUN_00234e08(auStack_194,auStack_1ac);
  uVar1 = FUN_000a0ebc(auStack_a8,7,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,10,auStack_194);
  FUN_002349c0(auStack_194);
  FUN_00234e08(auStack_194,auStack_1ac);
  uVar1 = FUN_000a0ebc(auStack_a8,10,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,9,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,0,1);
  FUN_00234cd0(auStack_1c4,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,2,1);
  FUN_00234cd0(auStack_1c4,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,3,1);
  FUN_00234cd0(auStack_1c4,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,4,1);
  FUN_00234cd0(auStack_1c4,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,5,1);
  FUN_00234cd0(auStack_1c4,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,7,1);
  FUN_00234cd0(auStack_1c4,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_1c4,uVar1);
  FUN_00234e08(auStack_194,auStack_1c4);
  uVar1 = FUN_000a0ebc(auStack_a8,0xf,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x10,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,8,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0xb,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0xc,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x11,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x13,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1b,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1d,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,5,auStack_194);
  FUN_002349c0(auStack_194);
  FUN_00234e08(auStack_194,auStack_1c4);
  uVar1 = FUN_000a0ebc(auStack_a8,8,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0xb,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0xc,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x21,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x20,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x12,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,6,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,0,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,2,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,3,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,6,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,10,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0xb,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x16,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x18,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,7,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,2,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,3,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1b,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1d,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,1,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0xd,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,2,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,0,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,2,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,3,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,5,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x15,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x19,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1b,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1c,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x1a,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x22,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0xf,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1b,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1d,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,3,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,0,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,9,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,2,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,3,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,6,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_000a0ebc(auStack_a8,0xe,0);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,4,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,0x19,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x1b,auStack_194);
  FUN_002349c0(auStack_194);
  uVar1 = FUN_000a0ebc(auStack_a8,0x1a,1);
  FUN_00234cd0(auStack_194,uVar1);
  uVar1 = FUN_0011eda0();
  FUN_000a0db0(uVar1,0x1c,auStack_194);
  FUN_000697a8();
  FUN_00069498();
  FUN_00069468();
  uVar1 = FUN_000f8ee0();
  FUN_000f7688(uVar1,_DAT_000ddcf0);
  local_ac = (int *)FUN_000923c8();
  piVar2 = (int *)(**(code **)(*local_ac + 0x10))(local_ac);
  if (piVar2 == (int *)0x0) {
    FUN_00002898(s__ERROR__UIControl_uTrack24__init_000ddcf3 + 1);
    FUN_00234dd0(auStack_1c4);
    FUN_00234dd0(auStack_1ac);
    FUN_00234dd0(auStack_194);
    uVar1 = 0;
  }
  else {
    (**(code **)(*piVar2 + 0xc))(piVar2,0xc9,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0xc))(piVar2,0xca,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0xc))(piVar2,0xcb,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0xc))(piVar2,0xcc,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0xc))(piVar2,0xcd,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0xc))(piVar2,0xce,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0xc))(piVar2,0xcf,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0xc))(piVar2,0xd0,local_8 + 0x1d0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xcf,1,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xcd,1,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xd0,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xce,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xc9,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xca,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xcb,0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0xcc,0);
    local_b0 = FUN_001c6b14(0x1b8,DAT_000dd2a8);
    if (local_b0 == 0) {
      local_b0 = 0;
    }
    else {
      local_b0 = FUN_000a0c38(local_b0,s_StartUp_state_000ddd34,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x300) = local_b0;
    FUN_001ae054(local_8 + 300,local_b0);
    local_b4 = FUN_001c6b14(0x288,DAT_000dd2a8);
    if (local_b4 == 0) {
      local_b4 = 0;
    }
    else {
      local_b4 = FUN_000d366c(local_b4,s_Recording_state_000de0c4,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 800) = local_b4;
    FUN_001ae054(local_8 + 300,local_b4);
    local_b8 = FUN_001c6b14(0x1fc,DAT_000dd2a8);
    if (local_b8 == 0) {
      local_b8 = 0;
    }
    else {
      local_b8 = FUN_000e83b4(local_b8,s_Player_Idle_State_000de0d4,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x310) = local_b8;
    FUN_001ae054(local_8 + 300,local_b8);
    local_bc = FUN_001c6b14(0xb4,DAT_000dd2a8);
    if (local_bc == 0) {
      local_bc = 0;
    }
    else {
      local_bc = FUN_0010adb8(local_bc,s_Playlist_Idle_State_000de0e8,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x314) = local_bc;
    FUN_001ae054(local_8 + 300,local_bc);
    local_c0 = FUN_001c6b14(0xb0,DAT_000dd2a8);
    if (local_c0 == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = FUN_000a0630(local_c0,s_Player_Playing_state_000de0fc,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x324) = local_c0;
    FUN_001ae054(local_8 + 300,local_c0);
    local_c4 = FUN_001c6b14(0xb4,DAT_000dd2a8);
    if (local_c4 == 0) {
      local_c4 = 0;
    }
    else {
      local_c4 = FUN_000f3bb4(local_c4,s_Playing_Loop_state_000de114,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x328) = local_c4;
    FUN_001ae054(local_8 + 300,local_c4);
    local_c8 = FUN_001c6b14(0xb4,DAT_000dd2a8);
    if (local_c8 == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = FUN_000f2bb8(local_c8,s_Playing_Head_state_000de128,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x32c) = local_c8;
    FUN_001ae054(local_8 + 300,local_c8);
    local_cc = FUN_001c6b14(0xa8,DAT_000dd2a8);
    if (local_cc == 0) {
      local_cc = 0;
    }
    else {
      local_cc = FUN_0011d8a4(local_cc,s_Player_Prepare_State_000de13c,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x318) = local_cc;
    FUN_001ae054(local_8 + 300,local_cc);
    local_c0 = FUN_001c6b14(0xb0,DAT_000dd2a8);
    if (local_c0 == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = FUN_000a0630(local_c0,s_Playlist_Playing_state_000de154,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x330) = local_c0;
    FUN_001ae054(local_8 + 300,local_c0);
    local_c4 = FUN_001c6b14(0xb4,DAT_000dd2a8);
    if (local_c4 == 0) {
      local_c4 = 0;
    }
    else {
      local_c4 = FUN_000f3bb4(local_c4,s_Playlist_Play_Loop_state_000de568,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x334) = local_c4;
    FUN_001ae054(local_8 + 300,local_c4);
    local_c8 = FUN_001c6b14(0xb4,DAT_000dd2a8);
    if (local_c8 == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = FUN_000f2bb8(local_c8,s_Playlist_Play_Head_state_000de584,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x338) = local_c8;
    FUN_001ae054(local_8 + 300,local_c8);
    local_cc = FUN_001c6b14(0xa8,DAT_000dd2a8);
    if (local_cc == 0) {
      local_cc = 0;
    }
    else {
      local_cc = FUN_0011d8a4(local_cc,s_Playlist_Play_Prepare_State_000de5a0,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x33c) = local_cc;
    FUN_001ae054(local_8 + 300,local_cc);
    local_d0 = FUN_001c6b14(0x98,_DAT_000de5bc);
    if (local_d0 == 0) {
      local_d0 = 0;
    }
    else {
      local_d0 = FUN_0011c9ec(local_d0,s____Interface_Mode_state_000de5bd + 3,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x30c) = local_d0;
    FUN_001ae054(local_8 + 300,local_d0);
    local_d4 = FUN_001c6b14(0x1d8,_DAT_000de5bc);
    if (local_d4 == 0) {
      local_d4 = 0;
    }
    else {
      local_d4 = FUN_000d0f68(local_d4,s_Disk_check_state_000de5d8,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x304) = local_d4;
    FUN_001ae054(local_8 + 300,local_d4);
    local_d8 = FUN_001c6b14(0x98,_DAT_000de5bc);
    if (local_d8 == 0) {
      local_d8 = 0;
    }
    else {
      local_d8 = FUN_00129968(local_d8,s_Firmware_Update_state_000de5ec,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x308) = local_d8;
    FUN_001ae054(local_8 + 300,local_d8);
    local_dc = FUN_001c6b14(0xa0,_DAT_000de5bc);
    if (local_dc == 0) {
      local_dc = 0;
    }
    else {
      local_dc = FUN_001423c4(local_dc,s_Prepare_PreRecording_State_000de604,local_8 + 300,
                              *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    *(int *)(local_8 + 0x31c) = local_dc;
    FUN_001ae054(local_8 + 300,local_dc);
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x300),*(undefined4 *)(local_8 + 0x304),0
                 ,0,10,0x51,*(undefined4 *)(local_8 + 0x300));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x300),*(undefined4 *)(local_8 + 0x30c),0
                 ,0,10,0x53,*(undefined4 *)(local_8 + 0x300));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x30c),*(undefined4 *)(local_8 + 0x300),0
                 ,0,10,0x54,*(undefined4 *)(local_8 + 0x30c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x304),*(undefined4 *)(local_8 + 0x310),0
                 ,0,10,0xe,*(undefined4 *)(local_8 + 0x304));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x314),
                 DAT_000df5ec,0,10,2,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x314),
                 DAT_000df5f0,0,10,0x1f,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x318),0
                 ,DAT_000df5f8,4,DAT_000df5f4,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x318),0
                 ,0,10,0x46,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x318),
                 DAT_000df5fc,0,10,0x1e,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x318),0
                 ,DAT_000df600,5,400,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x318),0
                 ,0,10,0x45,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x318),
                 DAT_000df604,0,10,0x22,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x318),
                 DAT_000df608,0,10,0x23,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x31c),0
                 ,0,10,0x28,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x31c),
                 DAT_000df60c,0,10,0x2b,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x31c),
                 DAT_000df614,DAT_000df610,10,0x43,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x31c),
                 DAT_000df614,DAT_000df618,5,400,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),
                 DAT_000df604,0,10,0x22,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),0
                 ,0,4,DAT_000df5f4,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),
                 DAT_000df608,0,10,0x23,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),0
                 ,0,10,2,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),0
                 ,0,10,0x1e,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),0
                 ,0,10,0x46,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df61c,0,10,0x20,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),0
                 ,0,10,0x45,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x33c),0
                 ,DAT_000df600,5,400,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x31c),
                 DAT_000df614,DAT_000df620,10,0x43,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x318),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df624,0,10,0x25,*(undefined4 *)(local_8 + 0x318));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x33c),*(undefined4 *)(local_8 + 0x314),
                 DAT_000df628,0,10,0x25,*(undefined4 *)(local_8 + 0x33c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x318),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df62c,0,10,0x26,*(undefined4 *)(local_8 + 0x318));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x318),*(undefined4 *)(local_8 + 0x324),
                 DAT_000df630,0,10,0x27,*(undefined4 *)(local_8 + 0x318));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x33c),*(undefined4 *)(local_8 + 0x330),
                 DAT_000df630,0,10,0x27,*(undefined4 *)(local_8 + 0x33c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x33c),*(undefined4 *)(local_8 + 0x314),
                 DAT_000df62c,0,10,0x26,*(undefined4 *)(local_8 + 0x33c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x31c),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df634,0,10,0x2a,*(undefined4 *)(local_8 + 0x31c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x31c),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df634,0,10,0x29,*(undefined4 *)(local_8 + 0x31c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x31c),*(undefined4 *)(local_8 + 800),
                 DAT_000df638,0,10,0x50,*(undefined4 *)(local_8 + 0x31c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x324),*(undefined4 *)(local_8 + 0x318),0
                 ,0,10,0x44,*(undefined4 *)(local_8 + 0x324));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x330),*(undefined4 *)(local_8 + 0x33c),0
                 ,0,10,0x44,*(undefined4 *)(local_8 + 0x330));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x324),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df63c,0,10,0x3c,*(undefined4 *)(local_8 + 0x324));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x330),*(undefined4 *)(local_8 + 0x314),
                 DAT_000df63c,0,10,0x3c,*(undefined4 *)(local_8 + 0x330));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x328),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df63c,0,10,0x3c,*(undefined4 *)(local_8 + 0x328));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x32c),*(undefined4 *)(local_8 + 0x310),
                 DAT_000df63c,0,10,0x3c,*(undefined4 *)(local_8 + 0x32c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x334),*(undefined4 *)(local_8 + 0x314),
                 DAT_000df63c,0,10,0x3c,*(undefined4 *)(local_8 + 0x334));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x338),*(undefined4 *)(local_8 + 0x314),
                 DAT_000df63c,0,10,0x3c,*(undefined4 *)(local_8 + 0x338));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x324),*(undefined4 *)(local_8 + 0x328),0
                 ,0,10,0x41,*(undefined4 *)(local_8 + 0x324));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x330),*(undefined4 *)(local_8 + 0x334),0
                 ,0,10,0x41,*(undefined4 *)(local_8 + 0x330));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x328),*(undefined4 *)(local_8 + 0x324),0
                 ,0,10,0x4c,*(undefined4 *)(local_8 + 0x328));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x334),*(undefined4 *)(local_8 + 0x330),0
                 ,0,10,0x4c,*(undefined4 *)(local_8 + 0x334));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x324),*(undefined4 *)(local_8 + 0x32c),0
                 ,0,10,0x42,*(undefined4 *)(local_8 + 0x324));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x330),*(undefined4 *)(local_8 + 0x338),0
                 ,0,10,0x42,*(undefined4 *)(local_8 + 0x330));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x32c),*(undefined4 *)(local_8 + 0x324),0
                 ,0,10,0x4d,*(undefined4 *)(local_8 + 0x32c));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x338),*(undefined4 *)(local_8 + 0x330),0
                 ,0,10,0x4d,*(undefined4 *)(local_8 + 0x338));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 800),*(undefined4 *)(local_8 + 0x310),
                 _DAT_000df640,0,10,0x49,*(undefined4 *)(local_8 + 800));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x304),*(undefined4 *)(local_8 + 0x308),0
                 ,0,10,0x1a,*(undefined4 *)(local_8 + 0x304));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x310),*(undefined4 *)(local_8 + 0x308),0
                 ,0,10,0x1a,*(undefined4 *)(local_8 + 0x310));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x300),*(undefined4 *)(local_8 + 0x308),0
                 ,0,10,0x1a,*(undefined4 *)(local_8 + 0x300));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x314),*(undefined4 *)(local_8 + 0x308),0
                 ,0,10,0x1a,*(undefined4 *)(local_8 + 0x314));
    FUN_000e1a0c(local_8 + 0x130,*(undefined4 *)(local_8 + 0x30c),*(undefined4 *)(local_8 + 0x308),0
                 ,0,10,0x1a,*(undefined4 *)(local_8 + 0x30c));
    local_e0 = (int *)FUN_001c6b14(0xe4,_DAT_000de5bc);
    if (local_e0 == (int *)0x0) {
      local_e0 = (int *)0x0;
    }
    else {
      local_e0 = (int *)FUN_00140ffc(local_e0,s__Settings_overlay_machine_000df643 + 1,
                                     *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    piVar2 = local_e0;
    (**(code **)(*local_e0 + 0x34))(local_e0);
    FUN_001adb38(local_8 + 300,piVar2);
    FUN_001054e4(local_8 + 0x150,piVar2,0,DAT_000dfc2c,4,DAT_000dfc28);
    FUN_001054e4(local_8 + 0x150,piVar2,0,0,10,1);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,4,DAT_000dfc30);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,4,DAT_000dfc28);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x43);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,4,DAT_000dfc34);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,4,DAT_000df5f4);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,5,400);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x36);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x53);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0xf);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x54);
    local_e4 = (int *)FUN_001c6b14(0xac,_DAT_000dfc38);
    if (local_e4 == (int *)0x0) {
      local_e4 = (int *)0x0;
    }
    else {
      local_e4 = (int *)FUN_0013be24(local_e4,s____Browser_overlay_machine_000dfc39 + 3,
                                     *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    piVar2 = local_e4;
    (**(code **)(*local_e4 + 0x34))(local_e4);
    FUN_001adb38(local_8 + 300,piVar2);
    FUN_001054e4(local_8 + 0x150,piVar2,0,_DAT_000dfc54,4,DAT_000dfc34);
    FUN_001054e4(local_8 + 0x150,piVar2,0,0,10,0);
    FUN_001054e4(local_8 + 0x150,piVar2,0,0,10,4);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,4,DAT_000dfc30);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,4,DAT_000dfc34);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,5);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x1f);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x34);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x43);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0xf);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,4,DAT_000dfc28);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x3c);
    local_e8 = (int *)FUN_001c6b14(0xac,_DAT_000dfc38);
    if (local_e8 == (int *)0x0) {
      local_e8 = (int *)0x0;
    }
    else {
      local_e8 = (int *)FUN_00129724(local_e8,s__Channel_Focus_overlay_machine_000dfc57 + 1,
                                     *(undefined4 *)(local_8 + 0x18c),local_8 + 0x1dc);
    }
    piVar2 = local_e8;
    (**(code **)(*local_e8 + 0x34))(local_e8);
    FUN_001adb38(local_8 + 300,piVar2);
    FUN_001054e4(local_8 + 0x150,piVar2,0,DAT_000dfc7c,4,DAT_000dfc78);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x3c);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0xc);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x53);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0x54);
    FUN_00105648(local_8 + 0x150,piVar2,0,0,10,0xf);
    FUN_00234dd0(auStack_1c4);
    FUN_00234dd0(auStack_1ac);
    FUN_00234dd0(auStack_194);
    uVar1 = 1;
  }
  return uVar1;
}

