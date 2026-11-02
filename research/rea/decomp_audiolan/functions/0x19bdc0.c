// rea decompile_all
// name: FUN_0019bdc0
// address: 0x19bdc0
// body: available
// range: 0x19bdc0-0x19c1e3 inclusive
// range: 0x19c28c-0x19c49f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019bdc0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int local_1c;
  
  iVar21 = *param_1;
  uVar18 = param_1[2];
  uVar15 = param_1[3];
  uVar14 = param_1[1];
  local_1c = 1;
  if (1 < param_3 + 1) {
    do {
      iVar4 = *param_2;
      uVar1 = iVar4 + iVar21 + ((uVar18 ^ uVar15) & uVar14 ^ uVar15) + DAT_0019c1e4;
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar14;
      iVar21 = param_2[1];
      uVar15 = iVar21 + uVar15 + ((uVar14 ^ uVar18) & uVar1 ^ uVar18) + DAT_0019c1e8;
      uVar16 = (uVar15 >> 0x14 | uVar15 * 0x1000) + uVar1;
      iVar2 = param_2[2];
      uVar18 = iVar2 + uVar18 + ((uVar1 ^ uVar14) & uVar16 ^ uVar14) + DAT_0019c1ec;
      iVar19 = param_2[3];
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar16;
      uVar14 = iVar19 + uVar14 + ((uVar16 ^ uVar1) & uVar18 ^ uVar1) + DAT_0019c1f0;
      iVar22 = param_2[4];
      uVar15 = (uVar14 >> 10 | uVar14 * 0x400000) + uVar18;
      uVar14 = iVar22 + uVar1 + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) + DAT_0019c1f4;
      uVar20 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar15;
      iVar5 = param_2[5];
      uVar14 = iVar5 + uVar16 + ((uVar15 ^ uVar18) & uVar20 ^ uVar18) + DAT_0019c1f8;
      uVar1 = (uVar14 >> 0x14 | uVar14 * 0x1000) + uVar20;
      iVar6 = param_2[6];
      uVar18 = iVar6 + uVar18 + ((uVar20 ^ uVar15) & uVar1 ^ uVar15) + DAT_0019c1fc;
      iVar7 = param_2[7];
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar1;
      uVar14 = iVar7 + uVar15 + ((uVar1 ^ uVar20) & uVar18 ^ uVar20) + DAT_0019c200;
      uVar15 = (uVar14 >> 10 | uVar14 * 0x400000) + uVar18;
      iVar8 = param_2[8];
      uVar14 = iVar8 + uVar20 + ((uVar18 ^ uVar1) & uVar15 ^ uVar1) + DAT_0019c204;
      uVar20 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar15;
      iVar9 = param_2[9];
      uVar14 = iVar9 + uVar1 + ((uVar15 ^ uVar18) & uVar20 ^ uVar18) + DAT_0019c208;
      iVar17 = param_2[10];
      uVar16 = (uVar14 >> 0x14 | uVar14 * 0x1000) + uVar20;
      uVar18 = iVar17 + uVar18 + ((uVar20 ^ uVar15) & uVar16 ^ uVar15) + DAT_0019c20c;
      iVar10 = param_2[0xb];
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar16;
      uVar14 = iVar10 + uVar15 + ((uVar16 ^ uVar20) & uVar18 ^ uVar20) + DAT_0019c210;
      uVar15 = (uVar14 >> 10 | uVar14 * 0x400000) + uVar18;
      iVar11 = param_2[0xc];
      uVar14 = iVar11 + uVar20 + ((uVar18 ^ uVar16) & uVar15 ^ uVar16) + DAT_0019c214;
      uVar1 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar15;
      iVar12 = param_2[0xd];
      uVar14 = iVar12 + uVar16 + ((uVar15 ^ uVar18) & uVar1 ^ uVar18) + DAT_0019c218;
      uVar16 = (uVar14 >> 0x14 | uVar14 * 0x1000) + uVar1;
      iVar13 = param_2[0xe];
      uVar18 = iVar13 + uVar18 + ((uVar1 ^ uVar15) & uVar16 ^ uVar15) + DAT_0019c21c;
      uVar20 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar16;
      iVar3 = param_2[0xf];
      uVar18 = iVar3 + uVar15 + ((uVar16 ^ uVar1) & uVar20 ^ uVar1) + DAT_0019c220;
      uVar14 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar20;
      uVar18 = iVar21 + uVar1 + ((uVar14 ^ uVar20) & uVar16 ^ uVar20) + DAT_0019c224;
      uVar1 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar14;
      uVar18 = iVar6 + uVar16 + ((uVar1 ^ uVar14) & uVar20 ^ uVar14) + DAT_0019c228;
      uVar16 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar1;
      uVar18 = iVar10 + uVar20 + ((uVar16 ^ uVar1) & uVar14 ^ uVar1) + DAT_0019c22c;
      uVar18 = (uVar18 >> 0x12 | uVar18 * 0x4000) + uVar16;
      uVar14 = iVar4 + uVar14 + ((uVar18 ^ uVar16) & uVar1 ^ uVar16) + DAT_0019c230;
      uVar15 = (uVar14 >> 0xc | uVar14 * 0x100000) + uVar18;
      uVar14 = iVar5 + uVar1 + ((uVar15 ^ uVar18) & uVar16 ^ uVar18) + DAT_0019c234;
      uVar14 = (uVar14 >> 0x1b | uVar14 * 0x20) + uVar15;
      uVar1 = iVar17 + uVar16 + ((uVar14 ^ uVar15) & uVar18 ^ uVar15) + DAT_0019c238;
      uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar14;
      uVar18 = iVar3 + uVar18 + ((uVar1 ^ uVar14) & uVar15 ^ uVar14) + DAT_0019c23c;
      uVar18 = (uVar18 >> 0x12 | uVar18 * 0x4000) + uVar1;
      uVar15 = iVar22 + uVar15 + ((uVar18 ^ uVar1) & uVar14 ^ uVar1) + DAT_0019c240;
      uVar15 = (uVar15 >> 0xc | uVar15 * 0x100000) + uVar18;
      uVar14 = iVar9 + uVar14 + ((uVar15 ^ uVar18) & uVar1 ^ uVar18) + DAT_0019c244;
      uVar14 = (uVar14 >> 0x1b | uVar14 * 0x20) + uVar15;
      uVar1 = uVar1 + iVar13 + ((uVar14 ^ uVar15) & uVar18 ^ uVar15) + DAT_0019c248;
      uVar16 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar14;
      uVar18 = iVar19 + uVar18 + ((uVar16 ^ uVar14) & uVar15 ^ uVar14) + DAT_0019c24c;
      uVar18 = (uVar18 >> 0x12 | uVar18 * 0x4000) + uVar16;
      uVar15 = iVar8 + uVar15 + ((uVar18 ^ uVar16) & uVar14 ^ uVar16) + DAT_0019c250;
      uVar15 = (uVar15 >> 0xc | uVar15 * 0x100000) + uVar18;
      uVar14 = iVar12 + uVar14 + ((uVar15 ^ uVar18) & uVar16 ^ uVar18) + DAT_0019c254;
      uVar1 = (uVar14 >> 0x1b | uVar14 * 0x20) + uVar15;
      uVar14 = iVar2 + uVar16 + ((uVar1 ^ uVar15) & uVar18 ^ uVar15) + DAT_0019c258;
      uVar16 = (uVar14 >> 0x17 | uVar14 * 0x200) + uVar1;
      uVar18 = iVar7 + uVar18 + ((uVar16 ^ uVar1) & uVar15 ^ uVar1) + DAT_0019c25c;
      uVar18 = (uVar18 >> 0x12 | uVar18 * 0x4000) + uVar16;
      uVar14 = iVar11 + uVar15 + ((uVar18 ^ uVar16) & uVar1 ^ uVar16) + DAT_0019c260;
      uVar15 = (uVar14 >> 0xc | uVar14 * 0x100000) + uVar18;
      uVar14 = iVar5 + uVar1 + (uVar15 ^ uVar18 ^ uVar16) + DAT_0019c264;
      uVar1 = (uVar14 >> 0x1c | uVar14 * 0x10) + uVar15;
      uVar14 = iVar8 + uVar16 + (uVar1 ^ uVar15 ^ uVar18) + DAT_0019c268;
      uVar16 = (uVar14 >> 0x15 | uVar14 * 0x800) + uVar1;
      uVar18 = iVar10 + uVar18 + (uVar16 ^ uVar1 ^ uVar15) + DAT_0019c26c;
      uVar18 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar16;
      uVar14 = uVar15 + iVar13 + (uVar18 ^ uVar16 ^ uVar1) + DAT_0019c270;
      uVar15 = (uVar14 >> 9 | uVar14 * 0x800000) + uVar18;
      uVar14 = iVar21 + uVar1 + (uVar15 ^ uVar18 ^ uVar16) + DAT_0019c274;
      uVar1 = (uVar14 >> 0x1c | uVar14 * 0x10) + uVar15;
      uVar14 = iVar22 + uVar16 + (uVar1 ^ uVar15 ^ uVar18) + DAT_0019c278;
      uVar16 = (uVar14 >> 0x15 | uVar14 * 0x800) + uVar1;
      uVar18 = iVar7 + uVar18 + (uVar16 ^ uVar1 ^ uVar15) + DAT_0019c27c;
      uVar18 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar16;
      uVar14 = iVar17 + uVar15 + (uVar18 ^ uVar16 ^ uVar1) + DAT_0019c280;
      uVar15 = (uVar14 >> 9 | uVar14 * 0x800000) + uVar18;
      uVar14 = iVar12 + uVar1 + (uVar15 ^ uVar18 ^ uVar16) + DAT_0019c284;
      uVar1 = (uVar14 >> 0x1c | uVar14 * 0x10) + uVar15;
      uVar14 = iVar4 + uVar16 + (uVar1 ^ uVar15 ^ uVar18) + DAT_0019c288;
      uVar16 = (uVar14 >> 0x15 | uVar14 * 0x800) + uVar1;
      uVar18 = iVar19 + uVar18 + (uVar16 ^ uVar1 ^ uVar15) + DAT_0019c4a0;
      uVar18 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar16;
      uVar14 = iVar6 + uVar15 + (uVar18 ^ uVar16 ^ uVar1) + DAT_0019c4a4;
      uVar15 = (uVar14 >> 9 | uVar14 * 0x800000) + uVar18;
      uVar14 = iVar9 + uVar1 + (uVar15 ^ uVar18 ^ uVar16) + DAT_0019c4a8;
      uVar14 = (uVar14 >> 0x1c | uVar14 * 0x10) + uVar15;
      uVar1 = iVar11 + uVar16 + (uVar14 ^ uVar15 ^ uVar18) + DAT_0019c4ac;
      uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar14;
      uVar18 = uVar18 + iVar3 + (uVar1 ^ uVar14 ^ uVar15) + DAT_0019c4b0;
      uVar18 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar1;
      uVar15 = iVar2 + uVar15 + (uVar18 ^ uVar1 ^ uVar14) + DAT_0019c4b4;
      uVar15 = (uVar15 >> 9 | uVar15 * 0x800000) + uVar18;
      uVar14 = iVar4 + uVar14 + ((~uVar1 | uVar15) ^ uVar18) + DAT_0019c4b8;
      uVar14 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar15;
      uVar1 = iVar7 + uVar1 + ((~uVar18 | uVar14) ^ uVar15) + DAT_0019c4bc;
      uVar1 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar14;
      uVar18 = iVar13 + uVar18 + ((~uVar15 | uVar1) ^ uVar14) + DAT_0019c4c0;
      uVar18 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar1;
      uVar15 = iVar5 + uVar15 + ((~uVar14 | uVar18) ^ uVar1) + DAT_0019c4c4;
      uVar15 = (uVar15 >> 0xb | uVar15 * 0x200000) + uVar18;
      uVar14 = iVar11 + uVar14 + ((~uVar1 | uVar15) ^ uVar18) + DAT_0019c4c8;
      uVar14 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar15;
      uVar1 = iVar19 + uVar1 + ((~uVar18 | uVar14) ^ uVar15) + DAT_0019c4cc;
      uVar1 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar14;
      uVar18 = iVar17 + uVar18 + ((~uVar15 | uVar1) ^ uVar14) + DAT_0019c4d0;
      uVar18 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar1;
      uVar15 = iVar21 + uVar15 + ((~uVar14 | uVar18) ^ uVar1) + DAT_0019c4d4;
      uVar15 = (uVar15 >> 0xb | uVar15 * 0x200000) + uVar18;
      uVar14 = iVar8 + uVar14 + ((~uVar1 | uVar15) ^ uVar18) + DAT_0019c4d8;
      uVar14 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar15;
      uVar1 = iVar3 + uVar1 + ((~uVar18 | uVar14) ^ uVar15) + DAT_0019c4dc;
      uVar16 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar14;
      uVar18 = iVar6 + uVar18 + ((~uVar15 | uVar16) ^ uVar14) + DAT_0019c4e0;
      uVar18 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar16;
      uVar15 = iVar12 + uVar15 + ((~uVar14 | uVar18) ^ uVar16) + DAT_0019c4e4;
      uVar1 = (uVar15 >> 0xb | uVar15 * 0x200000) + uVar18;
      uVar14 = iVar22 + uVar14 + ((~uVar16 | uVar1) ^ uVar18) + DAT_0019c4e8;
      uVar14 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar1;
      uVar15 = iVar10 + uVar16 + ((~uVar18 | uVar14) ^ uVar1) + DAT_0019c4ec;
      uVar15 = (uVar15 >> 0x16 | uVar15 * 0x400) + uVar14;
      uVar18 = iVar2 + uVar18 + ((~uVar1 | uVar15) ^ uVar14) + DAT_0019c4f0;
      uVar18 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar15;
      uVar1 = iVar9 + uVar1 + ((~uVar14 | uVar18) ^ uVar15) + DAT_0019c4f4;
      iVar21 = *param_1 + uVar14;
      *param_1 = iVar21;
      param_2 = param_2 + 0x10;
      uVar14 = param_1[1] + (uVar1 >> 0xb | uVar1 * 0x200000) + uVar18;
      param_1[1] = uVar14;
      uVar18 = param_1[2] + uVar18;
      param_1[2] = uVar18;
      uVar15 = param_1[3] + uVar15;
      param_1[3] = uVar15;
      local_1c = local_1c + 1;
    } while (local_1c < param_3 + 1);
  }
  return;
}

