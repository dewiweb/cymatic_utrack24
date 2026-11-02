// rea decompile_all
// name: FUN_0019b398
// address: 0x19b398
// body: available
// range: 0x19b398-0x19b3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019b398(int *param_1,int *param_2,int param_3)

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
    uVar18 = ((uVar19 ^ uVar21) & uVar17 ^ uVar21) + iVar1 + *param_1 + DAT_0019b7fc;
    uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar17;
    iVar3 = param_2[2];
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar2 + uVar21 + DAT_0019b800;
    uVar22 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar18;
    iVar4 = param_2[3];
    uVar19 = ((uVar18 ^ uVar17) & uVar22 ^ uVar17) + iVar3 + uVar19 + DAT_0019b804;
    uVar20 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar22;
    iVar5 = param_2[4];
    uVar17 = ((uVar22 ^ uVar18) & uVar20 ^ uVar18) + iVar4 + uVar17 + DAT_0019b808;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar20;
    iVar6 = param_2[5];
    uVar19 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + iVar5 + uVar18 + DAT_0019b80c;
    uVar21 = (uVar19 >> 0x19 | uVar19 * 0x80) + uVar17;
    iVar7 = param_2[6];
    uVar19 = ((uVar17 ^ uVar20) & uVar21 ^ uVar20) + iVar6 + uVar22 + DAT_0019b810;
    uVar22 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
    iVar8 = param_2[7];
    uVar19 = ((uVar21 ^ uVar17) & uVar22 ^ uVar17) + iVar7 + uVar20 + DAT_0019b814;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar22;
    iVar9 = param_2[8];
    uVar17 = ((uVar22 ^ uVar21) & uVar19 ^ uVar21) + iVar8 + uVar17 + DAT_0019b818;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar19;
    iVar10 = param_2[9];
    uVar21 = ((uVar19 ^ uVar22) & uVar17 ^ uVar22) + iVar9 + uVar21 + DAT_0019b81c;
    uVar18 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar17;
    iVar11 = param_2[10];
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar10 + uVar22 + DAT_0019b820;
    uVar20 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar18;
    iVar12 = param_2[0xb];
    uVar19 = ((uVar18 ^ uVar17) & uVar20 ^ uVar17) + iVar11 + uVar19 + DAT_0019b824;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
    iVar13 = param_2[0xc];
    uVar17 = ((uVar20 ^ uVar18) & uVar19 ^ uVar18) + iVar12 + uVar17 + DAT_0019b828;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar19;
    iVar14 = param_2[0xd];
    uVar21 = ((uVar19 ^ uVar20) & uVar17 ^ uVar20) + iVar13 + uVar18 + DAT_0019b82c;
    uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar17;
    iVar15 = param_2[0xe];
    uVar18 = ((uVar17 ^ uVar19) & uVar21 ^ uVar19) + iVar14 + uVar20 + DAT_0019b830;
    uVar18 = (uVar18 >> 0x14 | uVar18 * 0x1000) + uVar21;
    iVar16 = param_2[0xf];
    uVar19 = ((uVar21 ^ uVar17) & uVar18 ^ uVar17) + iVar15 + uVar19 + DAT_0019bc6c;
    uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar18;
    uVar17 = ((uVar18 ^ uVar21) & uVar19 ^ uVar21) + iVar16 + uVar17 + DAT_0019bc70;
    uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar19;
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar2 + uVar21 + DAT_0019bc74;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar17;
    uVar18 = ((uVar21 ^ uVar17) & uVar19 ^ uVar17) + iVar7 + uVar18 + DAT_0019bc78;
    uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar21;
    uVar19 = ((uVar18 ^ uVar21) & uVar17 ^ uVar21) + iVar12 + uVar19 + DAT_0019bc7c;
    uVar19 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar18;
    uVar17 = ((uVar19 ^ uVar18) & uVar21 ^ uVar18) + iVar1 + uVar17 + DAT_0019bc80;
    uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar19;
    uVar21 = ((uVar17 ^ uVar19) & uVar18 ^ uVar19) + iVar6 + uVar21 + DAT_0019bc84;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar17;
    uVar18 = ((uVar21 ^ uVar17) & uVar19 ^ uVar17) + iVar11 + uVar18 + DAT_0019bc88;
    uVar18 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar21;
    uVar19 = ((uVar18 ^ uVar21) & uVar17 ^ uVar21) + iVar16 + uVar19 + DAT_0019bc8c;
    uVar20 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar18;
    uVar17 = ((uVar20 ^ uVar18) & uVar21 ^ uVar18) + iVar5 + uVar17 + DAT_0019bc90;
    uVar22 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar20;
    uVar17 = ((uVar22 ^ uVar20) & uVar18 ^ uVar20) + iVar10 + uVar21 + DAT_0019bc94;
    uVar17 = (uVar17 >> 0x1b | uVar17 * 0x20) + uVar22;
    uVar19 = ((uVar17 ^ uVar22) & uVar20 ^ uVar22) + iVar15 + uVar18 + DAT_0019bc98;
    uVar19 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar17;
    uVar21 = ((uVar19 ^ uVar17) & uVar22 ^ uVar17) + iVar4 + uVar20 + DAT_0019bc9c;
    uVar21 = (uVar21 >> 0x12 | uVar21 * 0x4000) + uVar19;
    uVar18 = ((uVar21 ^ uVar19) & uVar17 ^ uVar19) + iVar9 + uVar22 + DAT_0019bca0;
    uVar22 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar21;
    uVar17 = ((uVar22 ^ uVar21) & uVar19 ^ uVar21) + iVar14 + uVar17 + DAT_0019bca4;
    uVar18 = (uVar17 >> 0x1b | uVar17 * 0x20) + uVar22;
    uVar17 = ((uVar18 ^ uVar22) & uVar21 ^ uVar22) + iVar3 + uVar19 + DAT_0019bca8;
    uVar17 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
    uVar19 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + iVar8 + uVar21 + DAT_0019bcac;
    uVar20 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar17;
    uVar19 = ((uVar20 ^ uVar17) & uVar18 ^ uVar17) + iVar13 + uVar22 + DAT_0019bcb0;
    uVar22 = (uVar19 >> 0xc | uVar19 * 0x100000) + uVar20;
    uVar19 = (uVar22 ^ uVar20 ^ uVar17) + iVar6 + uVar18 + DAT_0019bcb4;
    uVar21 = (uVar19 >> 0x1c | uVar19 * 0x10) + uVar22;
    uVar17 = (uVar21 ^ uVar22 ^ uVar20) + iVar9 + uVar17 + DAT_0019bcb8;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar21;
    uVar19 = (uVar17 ^ uVar21 ^ uVar22) + iVar12 + uVar20 + DAT_0019bcbc;
    uVar20 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar19 = (uVar20 ^ uVar17 ^ uVar21) + iVar15 + uVar22 + DAT_0019bcc0;
    uVar22 = (uVar19 >> 9 | uVar19 * 0x800000) + uVar20;
    uVar19 = (uVar22 ^ uVar20 ^ uVar17) + iVar2 + uVar21 + DAT_0019bcc4;
    uVar18 = (uVar19 >> 0x1c | uVar19 * 0x10) + uVar22;
    uVar17 = (uVar18 ^ uVar22 ^ uVar20) + iVar5 + uVar17 + DAT_0019bcc8;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar18;
    uVar19 = (uVar17 ^ uVar18 ^ uVar22) + iVar8 + uVar20 + DAT_0019bccc;
    uVar19 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar21 = (uVar19 ^ uVar17 ^ uVar18) + iVar11 + uVar22 + DAT_0019bcd0;
    uVar20 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar19;
    uVar21 = (uVar20 ^ uVar19 ^ uVar17) + iVar14 + uVar18 + DAT_0019bcd4;
    uVar18 = (uVar21 >> 0x1c | uVar21 * 0x10) + uVar20;
    uVar17 = (uVar18 ^ uVar20 ^ uVar19) + iVar1 + uVar17 + DAT_0019bcd8;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar18;
    uVar19 = (uVar17 ^ uVar18 ^ uVar20) + iVar4 + uVar19 + DAT_0019bcdc;
    uVar19 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar21 = (uVar19 ^ uVar17 ^ uVar18) + iVar7 + uVar20 + DAT_0019bce0;
    uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar19;
    uVar18 = (uVar21 ^ uVar19 ^ uVar17) + iVar10 + uVar18 + DAT_0019bce4;
    uVar18 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar21;
    uVar17 = (uVar18 ^ uVar21 ^ uVar19) + iVar13 + uVar17 + DAT_0019bce8;
    uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar18;
    uVar19 = (uVar17 ^ uVar18 ^ uVar21) + iVar16 + uVar19 + DAT_0019bcec;
    uVar19 = (uVar19 >> 0x10 | uVar19 * 0x10000) + uVar17;
    uVar21 = (uVar19 ^ uVar17 ^ uVar18) + iVar3 + uVar21 + DAT_0019bcf0;
    uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar1 + uVar18 + DAT_0019bcf4;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar8 + uVar17 + DAT_0019bcf8;
    uVar17 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar19 = ((~uVar21 | uVar17) ^ uVar18) + iVar15 + uVar19 + DAT_0019bcfc;
    uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar17;
    uVar21 = ((~uVar18 | uVar19) ^ uVar17) + iVar6 + uVar21 + DAT_0019bd00;
    uVar21 = (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar13 + uVar18 + DAT_0019bd04;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar4 + uVar17 + DAT_0019bd08;
    uVar17 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar19 = ((~uVar21 | uVar17) ^ uVar18) + iVar11 + uVar19 + DAT_0019bd0c;
    uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar17;
    uVar21 = ((~uVar18 | uVar19) ^ uVar17) + iVar2 + uVar21 + DAT_0019bd10;
    uVar21 = (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar9 + uVar18 + DAT_0019bd14;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar16 + uVar17 + DAT_0019bd18;
    uVar17 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar19 = ((~uVar21 | uVar17) ^ uVar18) + iVar7 + uVar19 + DAT_0019bd1c;
    uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar17;
    uVar21 = ((~uVar18 | uVar19) ^ uVar17) + iVar14 + uVar21 + DAT_0019bd20;
    uVar21 = (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
    uVar18 = ((~uVar17 | uVar21) ^ uVar19) + iVar5 + uVar18 + DAT_0019bdb0;
    uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
    uVar17 = ((~uVar19 | uVar18) ^ uVar21) + iVar12 + uVar17 + DAT_0019bdb4;
    uVar20 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
    uVar17 = ((~uVar21 | uVar20) ^ uVar18) + iVar3 + uVar19 + DAT_0019bdb8;
    uVar19 = (uVar17 >> 0x11 | uVar17 * 0x8000) + uVar20;
    uVar17 = ((~uVar18 | uVar19) ^ uVar20) + iVar10 + uVar21 + DAT_0019bdbc;
    *param_1 = *param_1 + uVar18;
    param_1[1] = param_1[1] + (uVar17 >> 0xb | uVar17 * 0x200000) + uVar19;
    param_1[2] = param_1[2] + uVar19;
    param_1[3] = param_1[3] + uVar20;
    if (param_3 != 1) {
      FUN_0019b3ac();
    }
  }
  return;
}

