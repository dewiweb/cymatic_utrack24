// rea decompile_all
// name: FUN_001eb850
// address: 0x1eb850
// body: available
// range: 0x1eb850-0x1eb863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001eb850(int *param_1,int *param_2,int param_3)

{
  int iVar1;
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
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar17 = param_1[1];
  uVar19 = param_1[2];
  uVar21 = param_1[3];
  if (param_3 != 0) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    uVar18 = ((uVar19 ^ uVar21) & uVar17 ^ uVar21) + iVar1 + *param_1 + DAT_001ebcb4;
    uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar17;
    iVar3 = param_2[2];
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar2 + uVar21 + DAT_001ebcb8;
    uVar22 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar18;
    iVar4 = param_2[3];
    uVar19 = ((uVar18 ^ uVar17) & uVar22 ^ uVar17) + iVar3 + uVar19 + DAT_001ebcbc;
    uVar20 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar22;
    iVar5 = param_2[4];
    uVar17 = ((uVar22 ^ uVar18) & uVar20 ^ uVar18) + iVar4 + uVar17 + DAT_001ebcc0;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar20;
    iVar6 = param_2[5];
    uVar19 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + iVar5 + uVar18 + DAT_001ebcc4;
    uVar21 = (uVar19 >> 0x19 | uVar19 * 0x80) + uVar17;
    iVar7 = param_2[6];
    uVar19 = ((uVar17 ^ uVar20) & uVar21 ^ uVar20) + iVar6 + uVar22 + DAT_001ebcc8;
    uVar22 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
    iVar8 = param_2[7];
    uVar19 = ((uVar21 ^ uVar17) & uVar22 ^ uVar17) + iVar7 + uVar20 + DAT_001ebccc;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar22;
    iVar9 = param_2[8];
    uVar17 = ((uVar22 ^ uVar21) & uVar19 ^ uVar21) + iVar8 + uVar17 + DAT_001ebcd0;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar19;
    iVar10 = param_2[9];
    uVar21 = ((uVar19 ^ uVar22) & uVar17 ^ uVar22) + iVar9 + uVar21 + DAT_001ebcd4;
    uVar18 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar17;
    iVar11 = param_2[10];
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar10 + uVar22 + DAT_001ebcd8;
    uVar20 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar18;
    iVar12 = param_2[0xb];
    uVar19 = ((uVar18 ^ uVar17) & uVar20 ^ uVar17) + iVar11 + uVar19 + DAT_001ebcdc;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
    iVar13 = param_2[0xc];
    uVar17 = ((uVar20 ^ uVar18) & uVar19 ^ uVar18) + iVar12 + uVar17 + DAT_001ebce0;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar19;
    iVar14 = param_2[0xd];
    uVar21 = ((uVar19 ^ uVar20) & uVar17 ^ uVar20) + iVar13 + uVar18 + DAT_001ebce4;
    uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar17;
    iVar15 = param_2[0xe];
    uVar18 = ((uVar17 ^ uVar19) & uVar21 ^ uVar19) + iVar14 + uVar20 + DAT_001ebce8;
    uVar18 = (uVar18 >> 0x14 | uVar18 * 0x1000) + uVar21;
    iVar16 = param_2[0xf];
    uVar19 = ((uVar21 ^ uVar17) & uVar18 ^ uVar17) + iVar15 + uVar19 + DAT_001ec124;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar18;
    uVar17 = ((uVar18 ^ uVar21) & uVar19 ^ uVar21) + iVar16 + uVar17 + DAT_001ec128;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar19;
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar2 + uVar21 + DAT_001ec12c;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar17;
    uVar18 = ((uVar21 ^ uVar17) & uVar19 ^ uVar17) + iVar7 + uVar18 + DAT_001ec130;
    uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar21;
    uVar19 = ((uVar18 ^ uVar21) & uVar17 ^ uVar21) + iVar12 + uVar19 + DAT_001ec134;
    uVar19 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar18;
    uVar17 = ((uVar19 ^ uVar18) & uVar21 ^ uVar18) + iVar1 + uVar17 + DAT_001ec138;
    uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar19;
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar6 + uVar21 + DAT_001ec13c;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar17;
    uVar18 = ((uVar21 ^ uVar17) & uVar19 ^ uVar17) + iVar11 + uVar18 + DAT_001ec140;
    uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar21;
    uVar19 = ((uVar18 ^ uVar21) & uVar17 ^ uVar21) + iVar16 + uVar19 + DAT_001ec144;
    uVar20 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar18;
    uVar17 = ((uVar20 ^ uVar18) & uVar21 ^ uVar18) + iVar5 + uVar17 + DAT_001ec148;
    uVar22 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar20;
    uVar17 = ((uVar22 ^ uVar20) & uVar18 ^ uVar20) + iVar10 + uVar21 + DAT_001ec14c;
    uVar17 = (uVar17 >> 0x1b | uVar17 * 0x20) + uVar22;
    uVar19 = ((uVar17 ^ uVar22) & uVar20 ^ uVar22) + iVar15 + uVar18 + DAT_001ec150;
    uVar19 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar17;
    uVar21 = ((uVar19 ^ uVar17) & uVar22 ^ uVar17) + iVar4 + uVar20 + DAT_001ec154;
    uVar21 = (uVar21 >> 0x12 | uVar21 * 0x4000) + uVar19;
    uVar18 = ((uVar21 ^ uVar19) & uVar17 ^ uVar19) + iVar9 + uVar22 + DAT_001ec158;
    uVar22 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar21;
    uVar17 = ((uVar22 ^ uVar21) & uVar19 ^ uVar21) + iVar14 + uVar17 + DAT_001ec15c;
    uVar18 = (uVar17 >> 0x1b | uVar17 * 0x20) + uVar22;
    uVar17 = ((uVar18 ^ uVar22) & uVar21 ^ uVar22) + iVar3 + uVar19 + DAT_001ec160;
    uVar17 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
    uVar19 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + iVar8 + uVar21 + DAT_001ec164;
    uVar20 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar17;
    uVar19 = ((uVar20 ^ uVar17) & uVar18 ^ uVar17) + iVar13 + uVar22 + DAT_001ec168;
    uVar22 = (uVar19 >> 0xc | uVar19 * 0x100000) + uVar20;
    uVar19 = (uVar22 ^ uVar20 ^ uVar17) + iVar6 + uVar18 + DAT_001ec16c;
    uVar21 = (uVar19 >> 0x1c | uVar19 * 0x10) + uVar22;
    uVar17 = (uVar21 ^ uVar22 ^ uVar20) + iVar9 + uVar17 + DAT_001ec170;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar21;
    uVar19 = (uVar17 ^ uVar21 ^ uVar22) + iVar12 + uVar20 + DAT_001ec174;
    uVar20 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar19 = (uVar20 ^ uVar17 ^ uVar21) + iVar15 + uVar22 + DAT_001ec178;
    uVar22 = (uVar19 >> 9 | uVar19 * 0x800000) + uVar20;
    uVar19 = (uVar22 ^ uVar20 ^ uVar17) + iVar2 + uVar21 + DAT_001ec17c;
    uVar18 = (uVar19 >> 0x1c | uVar19 * 0x10) + uVar22;
    uVar17 = (uVar18 ^ uVar22 ^ uVar20) + iVar5 + uVar17 + DAT_001ec180;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar18;
    uVar19 = (uVar17 ^ uVar18 ^ uVar22) + iVar8 + uVar20 + DAT_001ec184;
    uVar19 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar21 = (uVar19 ^ uVar17 ^ uVar18) + iVar11 + uVar22 + DAT_001ec188;
    uVar20 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar19;
    uVar21 = (uVar20 ^ uVar19 ^ uVar17) + iVar14 + uVar18 + DAT_001ec18c;
    uVar18 = (uVar21 >> 0x1c | uVar21 * 0x10) + uVar20;
    uVar17 = (uVar18 ^ uVar20 ^ uVar19) + iVar1 + uVar17 + DAT_001ec190;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar18;
    uVar19 = (uVar17 ^ uVar18 ^ uVar20) + iVar4 + uVar19 + DAT_001ec194;
    uVar19 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar21 = (uVar19 ^ uVar17 ^ uVar18) + iVar7 + uVar20 + DAT_001ec198;
    uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar19;
    uVar18 = (uVar21 ^ uVar19 ^ uVar17) + iVar10 + uVar18 + DAT_001ec19c;
    uVar18 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar21;
    uVar17 = (uVar18 ^ uVar21 ^ uVar19) + iVar13 + uVar17 + DAT_001ec1a0;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar18;
    uVar19 = (uVar17 ^ uVar18 ^ uVar21) + iVar16 + uVar19 + DAT_001ec1a4;
    uVar19 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar21 = (uVar19 ^ uVar17 ^ uVar18) + iVar3 + uVar21 + DAT_001ec1a8;
    uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar1 + uVar18 + DAT_001ec1ac;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar8 + uVar17 + DAT_001ec1b0;
    uVar17 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar19 = ((~uVar21 | uVar17) ^ uVar18) + iVar15 + uVar19 + DAT_001ec1b4;
    uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar17;
    uVar21 = ((~uVar18 | uVar19) ^ uVar17) + iVar6 + uVar21 + DAT_001ec1b8;
    uVar21 = (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar13 + uVar18 + DAT_001ec1bc;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar4 + uVar17 + DAT_001ec1c0;
    uVar17 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar19 = ((~uVar21 | uVar17) ^ uVar18) + iVar11 + uVar19 + DAT_001ec1c4;
    uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar17;
    uVar21 = ((~uVar18 | uVar19) ^ uVar17) + iVar2 + uVar21 + DAT_001ec1c8;
    uVar21 = (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar9 + uVar18 + DAT_001ec1cc;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar16 + uVar17 + DAT_001ec1d0;
    uVar17 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar19 = ((~uVar21 | uVar17) ^ uVar18) + iVar7 + uVar19 + DAT_001ec1d4;
    uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar17;
    uVar21 = ((~uVar18 | uVar19) ^ uVar17) + iVar14 + uVar21 + DAT_001ec1d8;
    uVar21 = (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar5 + uVar18 + DAT_001ec268;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar12 + uVar17 + DAT_001ec26c;
    uVar20 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar17 = ((~uVar21 | uVar20) ^ uVar18) + iVar3 + uVar19 + DAT_001ec270;
    uVar19 = (uVar17 >> 0x11 | uVar17 * 0x8000) + uVar20;
    uVar17 = ((~uVar18 | uVar19) ^ uVar20) + iVar10 + uVar21 + DAT_001ec274;
    *param_1 = *param_1 + uVar18;
    param_1[1] = param_1[1] + (uVar17 >> 0xb | uVar17 * 0x200000) + uVar19;
    param_1[2] = param_1[2] + uVar19;
    param_1[3] = param_1[3] + uVar20;
    if (param_3 != 1) {
      FUN_001eb864();
    }
  }
  return;
}

