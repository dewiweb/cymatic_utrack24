// rea decompile_all
// name: FUN_001e378c
// address: 0x1e378c
// body: available
// range: 0x1e378c-0x1e38c7 inclusive
// range: 0x1e38d8-0x1e38df inclusive
// range: 0x1e39bc-0x1e39cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_001e378c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint extraout_r1;
  int iVar8;
  uint uVar9;
  uint extraout_r3;
  uint unaff_r5;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr9;
  
  bVar4 = (byte)(param_2 >> 3);
  uVar14 = DAT_001e38f8 & param_2 >> 4;
  bVar18 = uVar14 == 0;
  if (!bVar18) {
    bVar4 = (byte)(param_4 >> 3);
    unaff_r5 = DAT_001e38f8 & param_4 >> 4;
    bVar18 = unaff_r5 == 0;
  }
  bVar17 = (bool)(bVar4 & 1);
  if (!bVar18) {
    bVar18 = uVar14 == DAT_001e38f8;
  }
  if (!bVar18) {
    bVar18 = unaff_r5 == DAT_001e38f8;
  }
  if (bVar18) {
    if (uVar14 != DAT_001e38f8 && (DAT_001e38f8 & param_4 >> 4) != DAT_001e38f8) {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    FUN_001e3904();
    if (!bVar17) {
      coprocessor_function(0,0,4,in_cr0,in_cr1,in_cr9);
    }
    uVar14 = extraout_r1 ^ extraout_r3;
  }
  else {
    uVar7 = param_2 & ~(DAT_001e38f8 << 5) | 0x100000;
    uVar9 = param_4 & ~(DAT_001e38f8 << 5) | 0x100000;
    iVar15 = (uVar14 | (param_2 ^ param_4) >> 0x1f) + unaff_r5;
    lVar1 = (ulonglong)param_3 * (ulonglong)uVar7;
    uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar2 = (ulonglong)uVar9 * (ulonglong)param_1;
    uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
    iVar16 = iVar15 + -0x3fc0000;
    lVar5 = lVar1 + lVar2;
    uVar11 = (uint)((ulonglong)lVar5 >> 0x20);
    lVar3 = (ulonglong)uVar9 * (ulonglong)uVar7;
    uVar14 = (uint)lVar3;
    uVar13 = (uint)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20);
    lVar6 = lVar5 + CONCAT44(uVar14,uVar13);
    uVar9 = (uint)lVar6;
    uVar7 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar14 = (int)((ulonglong)lVar3 >> 0x20) +
             (uint)(CARRY4(uVar10,uVar12) ||
                   CARRY4(uVar10 + uVar12,(uint)CARRY4((uint)lVar2,(uint)lVar1))) +
             (uint)(CARRY4(uVar11,uVar14) ||
                   CARRY4(uVar11 + uVar14,(uint)CARRY4((uint)lVar5,uVar13)));
    if ((int)((ulonglong)param_3 * (ulonglong)param_1) != 0) {
      uVar9 = uVar9 | 1;
    }
    if ((uVar14 & 0x200) == 0) {
      uVar10 = uVar9 << 0xc;
      uVar14 = uVar14 * 0x1000 | uVar7 >> 0x14;
      uVar7 = uVar7 * 0x1000 | uVar9 >> 0x14;
      iVar8 = -4;
    }
    else {
      uVar10 = uVar9 << 0xb;
      uVar14 = uVar14 * 0x800 | uVar7 >> 0x15;
      uVar7 = uVar7 * 0x800 | uVar9 >> 0x15;
      iVar8 = -3;
    }
    uVar9 = iVar8 + (iVar16 >> 0x10);
    uVar14 = uVar14 + uVar9 * 0x100000 ^ iVar15 * -0x80000000;
    if (uVar10 != 0) {
      bVar4 = (byte)(uVar10 >> 0x1f);
      if ((uVar10 & 0x7fffffff) != 0) {
        uVar10 = 0;
      }
      uVar14 = uVar14 + CARRY4(uVar7,(uint)bVar4);
      uVar7 = uVar7 + bVar4 & ~(uVar10 >> 0x1f);
    }
    if (uVar9 < DAT_001e38fc) {
      return CONCAT44(uVar14,uVar7);
    }
    if (iVar16 < 0x4000000) {
      return (ulonglong)(uVar14 + 0x60000000 & 0x80000000) << 0x20;
    }
    uVar14 = uVar14 + 0xa0000000;
  }
  return (ulonglong)(uVar14 & 0x80000000 | 0x7ff00000) << 0x20;
}

