// rea decompile_all
// name: FUN_00249728
// address: 0x249728
// body: available
// range: 0x249728-0x249873 inclusive
// range: 0x2498a4-0x249923 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_00249728(uint param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  char cVar15;
  undefined8 in_d29;
  
  uVar11 = param_2 + 0x100000;
  cVar15 = SBORROW4(uVar11,0x200000);
  if (0x1fffff < (int)uVar11) {
    uVar12 = (param_2 >> 0x14) + 0xfd;
    uVar11 = param_2 & ~((param_2 >> 0x14) << 0x14) | 0x100000;
    if ((bool)((byte)uVar12 & 1)) {
      iVar6 = (int)param_1 >> 0x1f;
      param_1 = param_1 << 1;
      uVar11 = uVar11 * 2 - iVar6;
    }
    uVar5 = uVar11 << 10 | param_1 >> 0x16;
    uVar10 = param_1 * 0x400;
    uVar7 = (uint)*(byte *)(((uVar11 & 0x3fffff) >> 0x10) + 0x249864);
    lVar3 = (ulonglong)(0xc0000000 - ((uVar11 & 0x3fffff) >> 6) * uVar7 * uVar7) * (ulonglong)uVar7;
    uVar11 = (uint)lVar3 >> 0x17 | (int)((ulonglong)lVar3 >> 0x20) << 9;
    lVar3 = (ulonglong)uVar5 * (ulonglong)(uVar11 * uVar11);
    iVar6 = (int)lVar3;
    lVar3 = (ulonglong)(0xc0000000 - ((int)((ulonglong)lVar3 >> 0x20) + (uint)(iVar6 != 0))) *
            (ulonglong)uVar11 + ((ulonglong)(uint)-iVar6 * (ulonglong)uVar11 >> 0x20);
    uVar9 = (uint)lVar3 >> 0xf | (int)((ulonglong)lVar3 >> 0x20) << 0x11;
    uVar7 = (uint)((ulonglong)uVar9 * (ulonglong)uVar9 >> 0x20);
    uVar11 = (uint)(((ulonglong)uVar9 * (ulonglong)uVar9 & 0xffffffff) * (ulonglong)uVar5 >> 0x20);
    uVar8 = (uint)((ulonglong)uVar10 * (ulonglong)uVar7 >> 0x20);
    lVar3 = (ulonglong)uVar5 * (ulonglong)uVar7 +
            (ulonglong)CONCAT14(CARRY4(uVar8,uVar11),uVar8 + uVar11);
    iVar6 = (int)lVar3;
    uVar1 = (ulonglong)(0xc0000000 - ((int)((ulonglong)lVar3 >> 0x20) + (uint)(iVar6 != 0))) *
            (ulonglong)uVar9 + ((ulonglong)(uint)-iVar6 * (ulonglong)uVar9 >> 0x20);
    uVar11 = (uint)(uVar1 >> 0x20);
    uVar7 = (uint)((uVar1 & 0xffffffff) * (ulonglong)uVar11 >> 0x20);
    uVar2 = (ulonglong)uVar11 * (ulonglong)uVar11 +
            (ulonglong)CONCAT14(CARRY4(uVar7,uVar7),uVar7 * 2);
    uVar7 = (uint)(uVar2 >> 0x20);
    uVar8 = (uint)((uVar2 & 0xffffffff) * (ulonglong)uVar5 >> 0x20);
    uVar9 = (uint)((ulonglong)uVar10 * (ulonglong)uVar7 >> 0x20);
    lVar3 = (ulonglong)uVar5 * (ulonglong)uVar7 +
            (ulonglong)CONCAT14(CARRY4(uVar8,uVar9),uVar8 + uVar9);
    iVar6 = (int)lVar3;
    uVar9 = 0x30000000 - ((int)((ulonglong)lVar3 >> 0x20) + (uint)(iVar6 != 0));
    uVar7 = (uint)((ulonglong)(uint)-iVar6 * (ulonglong)uVar11 >> 0x20);
    uVar8 = (uint)((ulonglong)uVar9 * (uVar1 & 0xffffffff) >> 0x20);
    uVar1 = (ulonglong)uVar9 * (ulonglong)uVar11 +
            (ulonglong)CONCAT14(CARRY4(uVar8,uVar7),uVar8 + uVar7);
    uVar11 = (uint)(uVar1 >> 0x20);
    uVar7 = (uint)((uVar1 & 0xffffffff) * (ulonglong)uVar5 >> 0x20);
    uVar10 = (uint)((ulonglong)uVar11 * (ulonglong)uVar10 >> 0x20);
    lVar3 = (ulonglong)uVar11 * (ulonglong)uVar5 +
            (ulonglong)CONCAT14(CARRY4(uVar10,uVar7),uVar10 + uVar7);
    lVar4 = lVar3 + 0x20;
    uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar11 = uVar10 >> 6;
    uVar10 = (uint)lVar4 >> 6 | uVar10 * 0x4000000;
    if (((int)lVar3 - 0x1bU & 0x3f) < 0xb) {
      uVar5 = (uint)((ulonglong)uVar10 * (ulonglong)uVar10);
      iVar6 = (int)((ulonglong)uVar10 * (ulonglong)uVar10 >> 0x20) + uVar10 * uVar11 * 2 +
              param_1 * -0x100000;
      if (iVar6 < 0) {
        if ((int)(iVar6 + uVar11 + (uint)CARRY4(uVar5,uVar10)) < 0) {
          bVar14 = 0xfffffffe < uVar10;
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 + bVar14;
        }
      }
      else if (-1 < (int)(iVar6 - (uVar11 + (uVar5 < uVar10)))) {
        bVar14 = uVar10 == 0;
        uVar10 = uVar10 - 1;
        uVar11 = uVar11 - bVar14;
      }
    }
    return CONCAT44(uVar11 + ((uVar12 >> 1) + 0x180) * 0x100000,uVar10);
  }
  cVar13 = '\0';
  if ((uVar11 & 0x7fffffff) >> 0x15 == 0) {
    if ((bool)((byte)((uVar11 & 0x7fffffff) >> 0x14) & 1)) {
      return (ulonglong)(param_2 & 0x80000000) << 0x20;
    }
    FUN_002495bc();
    if (cVar13 != cVar15) {
      VectorFloatToUnsignedFixed(in_d29,0x10,0xf5);
    }
  }
  return (ulonglong)DAT_00249924 << 0x20;
}

