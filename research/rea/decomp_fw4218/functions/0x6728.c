// rea decompile_all
// name: FUN_00006728
// address: 0x6728
// body: available
// range: 0x6728-0x69ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_00006728(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  
  uVar10 = unaff_r4 >> 0x10;
  uVar9 = unaff_r5 >> 0x10;
  uVar12 = (uint)*(byte *)((unaff_r4 >> 0x18) + 0x6970);
  uVar23 = unaff_r5 & ~(uVar9 << 0x10);
  uVar19 = unaff_r4 & ~(uVar10 << 0x10);
  uVar1 = (uint)((byte)param_2 & 1) << 0x1f | param_3 >> 1;
  if ((bool)((byte)param_3 & 1)) {
    uVar3 = 0x80000000;
  }
  else {
    uVar3 = 0;
  }
  iVar13 = ((0x800000 - (uVar10 * uVar12 + uVar12)) * uVar12 >> 0x13) + 2;
  uVar20 = 0x20000000 - ((unaff_r4 >> 0xd) * iVar13 + iVar13);
  uVar12 = uVar20 >> 0x10;
  uVar22 = uVar12 * iVar13 + ((uVar20 & ~(uVar12 << 0x10)) * iVar13 >> 0x10) >> 6;
  uVar12 = uVar22 * (param_2 >> 0x10) >> 0x10;
  uVar4 = uVar1 - uVar12 * uVar9;
  uVar20 = uVar12 * uVar23;
  bVar24 = uVar20 * 0x10000 <= uVar3;
  uVar3 = uVar3 + uVar20 * -0x10000;
  uVar20 = uVar20 >> 0x10;
  bVar2 = uVar4 - uVar20 < (uint)bVar24;
  bVar25 = uVar20 < uVar4 || bVar2;
  uVar5 = uVar4 - (uVar20 + !bVar24);
  uVar14 = uVar12 * uVar19;
  if (uVar20 < uVar4 || bVar2) {
    bVar25 = uVar14 * 0x10000 <= uVar5;
  }
  uVar5 = uVar5 + uVar14 * -0x10000;
  uVar4 = ((param_2 >> 1) - (uVar10 * uVar12 + (uint)(uVar1 < uVar12 * uVar9))) -
          ((uVar14 >> 0x10) + (uint)!bVar25);
  uVar1 = uVar22 * (uVar4 >> 2) >> 0x10;
  uVar20 = uVar1 * uVar9;
  bVar24 = uVar20 * 0x80000 <= uVar3;
  uVar3 = uVar3 + uVar20 * -0x80000;
  uVar20 = uVar20 >> 0xd;
  bVar2 = uVar5 - uVar20 < (uint)bVar24;
  bVar25 = uVar20 < uVar5 || bVar2;
  uVar14 = uVar5 - (uVar20 + !bVar24);
  uVar15 = uVar10 * uVar1;
  if (uVar20 < uVar5 || bVar2) {
    bVar25 = uVar15 * 0x80000 <= uVar14;
  }
  uVar14 = uVar14 + uVar15 * -0x80000;
  uVar20 = uVar1 * uVar23;
  bVar26 = uVar20 * 8 <= uVar3;
  uVar5 = uVar20 >> 0x1d;
  bVar2 = uVar14 - uVar5 < (uint)bVar26;
  bVar24 = uVar5 < uVar14 || bVar2;
  uVar6 = uVar14 - (uVar5 + !bVar26);
  uVar16 = uVar1 * uVar19;
  if (uVar5 < uVar14 || bVar2) {
    bVar24 = uVar16 * 8 <= uVar6;
  }
  uVar6 = uVar6 + uVar16 * -8;
  uVar5 = ((uVar4 - ((uVar15 >> 0xd) + (uint)!bVar25)) - ((uVar16 >> 0x1d) + (uint)!bVar24)) *
          0x4000000 | uVar6 >> 6;
  uVar14 = uVar6 * 0x4000000 | uVar3 + uVar20 * -8 >> 6;
  uVar21 = uVar22 * (uVar5 >> 0xf);
  uVar20 = uVar20 * -0x20000000;
  uVar3 = uVar21 >> 0x10;
  uVar15 = uVar14 - uVar3 * uVar9;
  uVar4 = uVar3 * uVar23;
  bVar24 = uVar4 * 0x10000 <= uVar20;
  uVar20 = uVar20 + uVar4 * -0x10000;
  uVar4 = uVar4 >> 0x10;
  bVar2 = uVar15 - uVar4 < (uint)bVar24;
  bVar25 = uVar4 < uVar15 || bVar2;
  uVar6 = uVar15 - (uVar4 + !bVar24);
  uVar16 = uVar3 * uVar19;
  if (uVar4 < uVar15 || bVar2) {
    bVar25 = uVar16 * 0x10000 <= uVar6;
  }
  uVar6 = uVar6 + uVar16 * -0x10000;
  uVar14 = (uVar5 - (uVar10 * uVar3 + (uint)(uVar14 < uVar3 * uVar9))) -
           ((uVar16 >> 0x10) + (uint)!bVar25);
  uVar4 = uVar22 * (uVar14 >> 2) >> 0x10;
  uVar5 = uVar4 * uVar9;
  bVar24 = uVar5 * 0x80000 <= uVar20;
  uVar20 = uVar20 + uVar5 * -0x80000;
  uVar5 = uVar5 >> 0xd;
  bVar2 = uVar6 - uVar5 < (uint)bVar24;
  bVar25 = uVar5 < uVar6 || bVar2;
  uVar15 = uVar6 - (uVar5 + !bVar24);
  uVar16 = uVar10 * uVar4;
  if (uVar5 < uVar6 || bVar2) {
    bVar25 = uVar16 * 0x80000 <= uVar15;
  }
  uVar15 = uVar15 + uVar16 * -0x80000;
  uVar5 = uVar4 * uVar23;
  bVar26 = uVar5 * 8 <= uVar20;
  uVar6 = uVar5 >> 0x1d;
  bVar2 = uVar15 - uVar6 < (uint)bVar26;
  bVar24 = uVar6 < uVar15 || bVar2;
  uVar7 = uVar15 - (uVar6 + !bVar26);
  uVar17 = uVar4 * uVar19;
  if (uVar6 < uVar15 || bVar2) {
    bVar24 = uVar17 * 8 <= uVar7;
  }
  uVar7 = uVar7 + uVar17 * -8;
  uVar16 = ((uVar14 - ((uVar16 >> 0xd) + (uint)!bVar25)) - ((uVar17 >> 0x1d) + (uint)!bVar24)) *
           0x4000000 | uVar7 >> 6;
  uVar11 = uVar3 * 0x400000 + uVar4 * 0x200;
  uVar22 = uVar22 * (uVar16 >> 0xf);
  uVar7 = uVar7 * 0x4000000 | uVar20 + uVar5 * -8 >> 6;
  uVar5 = uVar5 * -0x20000000;
  uVar14 = uVar22 >> 0x10;
  uVar20 = uVar14 << 0x1c;
  uVar17 = uVar7 - uVar14 * uVar9;
  uVar6 = uVar14 * uVar23;
  bVar24 = uVar6 * 0x10000 <= uVar5;
  uVar15 = uVar6 >> 0x10;
  bVar2 = uVar17 - uVar15 < (uint)bVar24;
  bVar25 = uVar15 < uVar17 || bVar2;
  uVar8 = uVar17 - (uVar15 + !bVar24);
  uVar18 = uVar14 * uVar19;
  if (uVar15 < uVar17 || bVar2) {
    bVar25 = uVar18 * 0x10000 <= uVar8;
  }
  uVar8 = uVar8 + uVar18 * -0x10000;
  uVar22 = uVar22 >> 0x14;
  uVar17 = uVar11 + uVar22;
  uVar15 = ((uVar16 - (uVar10 * uVar14 + (uint)(uVar7 < uVar14 * uVar9))) -
           ((uVar18 >> 0x10) + (uint)!bVar25)) * 0x4000 | uVar8 >> 0x12;
  uVar14 = uVar8 * 0x4000 | uVar5 + uVar6 * -0x10000 >> 0x12;
  uVar5 = uVar6 * -0x40000000;
  uVar19 = uVar19 | uVar10 << 0x10;
  uVar23 = uVar23 | uVar9 << 0x10;
  bVar2 = uVar15 - uVar19 < (uint)(uVar23 <= uVar14);
  uVar10 = uVar15;
  if (uVar19 < uVar15 || bVar2) {
    uVar10 = uVar15 - (uVar19 + (uVar23 > uVar14));
    uVar14 = uVar14 - uVar23;
  }
  uVar6 = uVar6 * -0x80000000;
  bVar24 = CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)CARRY4(uVar5,uVar5));
  uVar9 = uVar14 * 2 + (uint)CARRY4(uVar5,uVar5);
  bVar25 = CARRY4(uVar10 * 2,(uint)bVar24);
  bVar26 = CARRY4(uVar10,uVar10) || bVar25;
  uVar5 = uVar10 * 2 + (uint)bVar24;
  bVar24 = bVar26 < (uVar19 < uVar5 || uVar5 - uVar19 < (uint)(uVar23 <= uVar9));
  if ((CARRY4(uVar10,uVar10) || bVar25) || bVar24) {
    uVar5 = uVar5 - (uVar19 + (uVar23 > uVar9));
    uVar9 = uVar9 - uVar23;
  }
  bVar27 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)CARRY4(uVar6,uVar6));
  uVar10 = uVar9 * 2 + (uint)CARRY4(uVar6,uVar6);
  bVar25 = CARRY4(uVar5 * 2,(uint)bVar27);
  bVar28 = CARRY4(uVar5,uVar5) || bVar25;
  uVar9 = uVar5 * 2 + (uint)bVar27;
  bVar27 = bVar28 < (uVar19 < uVar9 || uVar9 - uVar19 < (uint)(uVar23 <= uVar10));
  if ((CARRY4(uVar5,uVar5) || bVar25) || bVar27) {
    uVar9 = uVar9 - (uVar19 + (uVar23 > uVar10));
    uVar10 = uVar10 - uVar23;
  }
  if (uVar9 != 0 || uVar10 != 0) {
    uVar20 = uVar20 | 1;
  }
  uVar10 = (((uint)(uVar19 < uVar15 || bVar2) * 2 + (uint)(bVar26 || bVar24)) * 2 +
           (uint)(bVar28 || bVar27)) * 0x10000000;
  uVar9 = uVar17 + CARRY4(uVar20,uVar10);
  iVar13 = uVar12 * 0x10000 + uVar1 * 8 + (uVar21 >> 0x1a) +
           (uint)CARRY4(uVar3 * 0x400000,uVar4 * 0x200) + (uint)CARRY4(uVar11,uVar22) +
           (uint)CARRY4(uVar17,(uint)CARRY4(uVar20,uVar10));
  if (-1 < iVar13) {
    return CONCAT44(iVar13 * 2 +
                    (uint)(CARRY4(uVar9,uVar9) ||
                          CARRY4(uVar9 * 2,(uint)CARRY4(uVar20 + uVar10,uVar20 + uVar10))),
                    param_1 ^ param_4) & 0xffffffff80000000;
  }
  return CONCAT44(iVar13,param_1 ^ param_4) & 0xffffffff80000000;
}

