// rea decompile_all
// name: FUN_00006c68
// address: 0x6c68
// body: available
// range: 0x6c68-0x6ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00006c68(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  param_1 = param_1 ^ param_4;
  if (param_3 == 0) {
    if (unaff_r5 == 0) {
      uVar11 = unaff_r4 >> 0x10;
      uVar12 = param_2 >> 0x10;
      uVar14 = unaff_r4 & ~(uVar11 << 0x10);
      param_2 = param_2 & ~(uVar12 << 0x10);
      uVar3 = uVar14 * uVar12;
      uVar14 = param_2 * uVar14;
      param_2 = uVar11 * param_2;
      uVar2 = uVar3 * 0x10000;
      uVar13 = uVar14 + uVar2;
      uVar1 = param_2 * 0x10000;
      uVar15 = uVar13 + uVar1;
      iVar5 = uVar11 * uVar12 + (uVar3 >> 0x10) + (uint)CARRY4(uVar14,uVar2) + (param_2 >> 0x10) +
              (uint)CARRY4(uVar13,uVar1);
      if (-1 < iVar5) {
        return CONCAT44(iVar5 * 2 + (uint)CARRY4(uVar15,uVar15),param_1) & 0xffffffff80000000;
      }
      return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
    }
    uVar14 = param_2 >> 0x10;
    uVar13 = unaff_r4 >> 0x10;
    param_2 = param_2 & ~(uVar14 << 0x10);
    uVar10 = unaff_r4 & ~(uVar13 << 0x10);
    uVar3 = uVar10 * param_2;
    uVar10 = uVar14 * uVar10;
    uVar2 = param_2 * uVar13 * 0x10000;
    uVar4 = uVar3 + uVar2;
    uVar15 = unaff_r5 >> 0x10;
    uVar1 = uVar10 * 0x10000;
    uVar6 = uVar4 + uVar1;
    uVar16 = unaff_r5 & ~(uVar15 << 0x10);
    uVar7 = uVar16 * param_2;
    uVar16 = uVar14 * uVar16;
    uVar11 = param_2 * uVar15 * 0x10000;
    uVar8 = uVar7 + uVar11;
    uVar12 = uVar16 * 0x10000;
    uVar9 = uVar8 + uVar12;
    uVar11 = uVar14 * uVar15 + (param_2 * uVar15 >> 0x10) + (uint)CARRY4(uVar7,uVar11) +
             (uVar16 >> 0x10) + (uint)CARRY4(uVar8,uVar12);
    uVar12 = uVar11 + uVar6;
    iVar5 = uVar14 * uVar13 + (param_2 * uVar13 >> 0x10) + (uint)CARRY4(uVar3,uVar2) +
            (uVar10 >> 0x10) + (uint)CARRY4(uVar4,uVar1) + (uint)CARRY4(uVar11,uVar6);
    if (-1 < iVar5) {
      return CONCAT44(iVar5 * 2 +
                      (uint)(CARRY4(uVar12,uVar12) || CARRY4(uVar12 * 2,(uint)CARRY4(uVar9,uVar9))),
                      param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
  }
  if (unaff_r5 == 0) {
    uVar14 = unaff_r4 >> 0x10;
    uVar13 = param_2 >> 0x10;
    uVar7 = unaff_r4 & ~(uVar14 << 0x10);
    param_2 = param_2 & ~(uVar13 << 0x10);
    uVar3 = param_2 * uVar7;
    param_2 = uVar14 * param_2;
    uVar2 = uVar7 * uVar13 * 0x10000;
    uVar4 = uVar3 + uVar2;
    uVar15 = param_3 >> 0x10;
    uVar1 = param_2 * 0x10000;
    uVar6 = uVar4 + uVar1;
    param_3 = param_3 & ~(uVar15 << 0x10);
    uVar8 = param_3 * uVar7;
    param_3 = uVar14 * param_3;
    uVar11 = uVar7 * uVar15 * 0x10000;
    uVar9 = uVar8 + uVar11;
    uVar12 = param_3 * 0x10000;
    uVar10 = uVar9 + uVar12;
    uVar12 = uVar14 * uVar15 + (uVar7 * uVar15 >> 0x10) + (uint)CARRY4(uVar8,uVar11) +
             (param_3 >> 0x10) + (uint)CARRY4(uVar9,uVar12);
    uVar11 = uVar12 + uVar6;
    iVar5 = uVar14 * uVar13 + (uVar7 * uVar13 >> 0x10) + (uint)CARRY4(uVar3,uVar2) +
            (param_2 >> 0x10) + (uint)CARRY4(uVar4,uVar1) + (uint)CARRY4(uVar12,uVar6);
    if (-1 < iVar5) {
      return CONCAT44(iVar5 * 2 +
                      (uint)(CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)CARRY4(uVar10,uVar10))
                            ),param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
  }
  uVar12 = param_2 >> 0x10;
  uVar14 = unaff_r4 >> 0x10;
  uVar8 = param_2 & ~(uVar12 << 0x10);
  uVar6 = unaff_r4 & ~(uVar14 << 0x10);
  uVar3 = uVar8 * uVar14;
  uVar8 = uVar6 * uVar8;
  uVar6 = uVar12 * uVar6;
  uVar2 = uVar3 * 0x10000;
  uVar9 = uVar8 + uVar2;
  uVar13 = param_3 >> 0x10;
  uVar1 = uVar6 * 0x10000;
  uVar10 = uVar9 + uVar1;
  uVar15 = unaff_r5 >> 0x10;
  uVar16 = param_3 & ~(uVar13 << 0x10);
  uVar7 = unaff_r5 & ~(uVar15 << 0x10);
  uVar4 = uVar16 * uVar15;
  uVar16 = uVar7 * uVar16;
  uVar7 = uVar13 * uVar7;
  uVar11 = uVar4 * 0x10000;
  uVar17 = uVar16 + uVar11;
  uVar15 = uVar13 * uVar15 + (uVar4 >> 0x10) + (uint)CARRY4(uVar16,uVar11);
  iVar5 = 0;
  uVar11 = uVar7 * 0x10000;
  uVar4 = uVar17 + uVar11;
  uVar13 = uVar15 + (uVar7 >> 0x10) + (uint)CARRY4(uVar17,uVar11);
  uVar11 = uVar10 + uVar13;
  uVar1 = uVar12 * uVar14 + (uVar3 >> 0x10) + (uint)CARRY4(uVar8,uVar2) + (uVar6 >> 0x10) +
          (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar10,uVar13);
  uVar14 = uVar11 + uVar4;
  uVar12 = uVar11 + uVar1 + (uint)CARRY4(uVar11,uVar4);
  bVar19 = param_3 <= param_2;
  param_2 = param_2 - param_3;
  bVar18 = param_2 == 0;
  uVar2 = 0;
  if (!bVar19) {
    uVar2 = 0xffffffff;
    iVar5 = unaff_r4 - unaff_r5;
  }
  if (!bVar18) {
    bVar19 = unaff_r4 <= unaff_r5;
    uVar15 = unaff_r5 - unaff_r4;
    bVar18 = uVar15 == 0;
  }
  uVar13 = param_2 >> 0x10;
  if (bVar18) {
    uVar2 = 0;
  }
  if (!bVar19) {
    iVar5 = iVar5 - param_2;
  }
  param_2 = param_2 & ~(uVar13 << 0x10);
  uVar3 = uVar15 >> 0x10;
  if (!bVar19) {
    uVar2 = ~uVar2;
  }
  uVar15 = uVar15 & ~(uVar3 << 0x10);
  uVar10 = param_2 * uVar3;
  param_2 = uVar15 * param_2;
  uVar15 = uVar13 * uVar15;
  uVar6 = uVar10 * 0x10000;
  uVar8 = param_2 + uVar6;
  uVar7 = uVar15 * 0x10000;
  uVar9 = uVar8 + uVar7;
  uVar13 = uVar13 * uVar3 + iVar5 + (uVar10 >> 0x10) + (uint)CARRY4(param_2,uVar6) +
           (uVar15 >> 0x10) + (uint)CARRY4(uVar8,uVar7);
  uVar15 = uVar12 + uVar13 + (uint)CARRY4(uVar14,uVar9);
  iVar5 = uVar1 + (CARRY4(uVar11,uVar1) || CARRY4(uVar11 + uVar1,(uint)CARRY4(uVar11,uVar4))) +
          uVar2 + (uint)(CARRY4(uVar12,uVar13) || CARRY4(uVar12 + uVar13,(uint)CARRY4(uVar14,uVar9))
                        );
  uVar2 = uVar14 + uVar9 | (uVar4 | uVar4 * 4) >> 2;
  if (-1 < iVar5) {
    return CONCAT44(iVar5 * 2 +
                    (uint)(CARRY4(uVar15,uVar15) || CARRY4(uVar15 * 2,(uint)CARRY4(uVar2,uVar2))),
                    param_1) & 0xffffffff80000000;
  }
  return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
}

