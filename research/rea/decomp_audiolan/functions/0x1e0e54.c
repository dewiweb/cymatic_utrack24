// rea decompile_all
// name: FUN_001e0e54
// address: 0x1e0e54
// body: available
// range: 0x1e0e54-0x1e1357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001e0e54(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iStack_2c = param_3;
  uStack_30 = param_2;
  uStack_34 = param_1;
  if ((int)(param_2 - param_1) < 0x66) {
    return;
  }
  while (param_3 != 0) {
    iVar7 = (int)((ulonglong)((longlong)DAT_001e1358 * (longlong)(int)(param_2 - param_1)) >> 0x20);
    uVar2 = *(ushort *)(param_1 + 4);
    uVar8 = param_1 + ((iVar7 >> 1) - (iVar7 >> 0x1f)) * 6;
    uVar3 = *(ushort *)(uVar8 + 4);
    uVar12 = uVar8;
    uVar4 = uVar3;
    uVar14 = param_1;
    if (uVar2 < uVar3) {
      uVar12 = param_1;
      uVar4 = uVar2;
      uVar14 = uVar8;
      uVar2 = uVar3;
    }
    if ((*(ushort *)(param_2 - 2) <= uVar2) && (uVar14 = uVar12, uVar4 < *(ushort *)(param_2 - 2)))
    {
      uVar14 = param_2 - 6;
    }
    FUN_0016d9dc(&iStack_74,uVar14);
    uVar3 = (ushort)uStack_70;
    uVar12 = param_2;
    uVar14 = param_1;
    while( true ) {
      for (; uVar8 = uVar12, *(ushort *)(uVar14 + 4) < uVar3; uVar14 = uVar14 + 6) {
      }
      do {
        uVar12 = uVar8 - 6;
        puVar1 = (ushort *)(uVar8 - 2);
        uVar8 = uVar12;
      } while (uVar3 < *puVar1);
      if (uVar12 <= uVar14) break;
      FUN_0016d9dc(&uStack_80,uVar14);
      FUN_0016d9dc(uVar14,uVar12);
      FUN_0016d9dc(uVar12,&uStack_80);
      uVar14 = uVar14 + 6;
    }
    param_3 = param_3 / 2;
    FUN_001e0e54(uVar14,param_2,param_3);
    param_2 = uVar14;
    if ((int)(uVar14 - param_1) < 0x66) {
      return;
    }
  }
  iStack_7c = param_2 - param_1;
  uStack_4c = param_2;
  if (0xb < iStack_7c) {
    iVar6 = (int)((ulonglong)((longlong)DAT_001e1358 * (longlong)iStack_7c) >> 0x20);
    iVar6 = iVar6 - (iVar6 >> 0x1f);
    iVar7 = (iVar6 + -2) / 2;
    while( true ) {
      FUN_0016d9dc(&iStack_74,param_1 + iVar7 * 6);
      iVar10 = iVar7;
      while( true ) {
        iVar11 = iVar10 * 2;
        iVar13 = iVar11 + 2;
        if (iVar6 <= iVar13) break;
        iVar9 = param_1 + iVar13 * 6;
        if (*(ushort *)(iVar9 + 4) < *(ushort *)(iVar9 + -2)) {
          iVar13 = iVar11 + 1;
        }
        FUN_0016d9dc(param_1 + iVar10 * 6,param_1 + iVar13 * 6);
        iVar10 = iVar13;
      }
      if (iVar13 == iVar6) {
        FUN_0016d9dc(param_1 + iVar10 * 6,param_1 + iVar13 * 6 + -6);
        iVar10 = iVar11 + 1;
      }
      iStack_84 = iStack_74;
      uStack_80 = uStack_70;
      uVar5 = uStack_80;
      uStack_80._0_2_ = (ushort)uStack_70;
      uVar3 = (ushort)uStack_80;
      uStack_80 = uVar5;
      while ((iVar11 = (iVar10 + -1) / 2, iVar7 < iVar10 &&
             (*(ushort *)(param_1 + iVar11 * 6 + 4) < uVar3))) {
        FUN_0016d9dc(param_1 + iVar10 * 6);
        iVar10 = iVar11;
      }
      FUN_0016d9dc(param_1 + iVar10 * 6,&iStack_84);
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
    }
  }
  if (uStack_4c < param_2) {
    iVar7 = (int)((ulonglong)((longlong)DAT_001e1358 * (longlong)iStack_7c) >> 0x20);
    iVar7 = iVar7 - (iVar7 >> 0x1f);
    uVar12 = uStack_4c;
    do {
      if (*(ushort *)(uVar12 + 4) < *(ushort *)(param_1 + 4)) {
        FUN_0016d9dc(&iStack_54,uVar12);
        FUN_0016d9dc(uVar12,param_1);
        uVar5 = uStack_50;
        iVar6 = iStack_54;
        iVar10 = 0;
        iVar11 = 2;
        if (2 < iVar7) {
          do {
            iVar9 = param_1 + iVar11 * 6;
            iVar13 = iVar10 * 6;
            iVar10 = iVar11;
            if (*(ushort *)(iVar9 + 4) < *(ushort *)(iVar9 + -2)) {
              iVar10 = iVar11 + -1;
            }
            FUN_0016d9dc(param_1 + iVar13,param_1 + iVar10 * 6);
            iVar11 = iVar10 * 2 + 2;
          } while (iVar11 < iVar7);
        }
        if (iVar11 == iVar7) {
          FUN_0016d9dc(param_1 + iVar10 * 6,param_1 + iVar11 * 6 + -6);
          iVar10 = iVar11 + -1;
        }
        iStack_60 = iVar6;
        uStack_5c = uVar5;
        uStack_5c._0_2_ = (ushort)uVar5;
        uVar3 = (ushort)uStack_5c;
        uStack_5c = uVar5;
        while ((iVar6 = (iVar10 + -1) / 2, 0 < iVar10 &&
               (*(ushort *)(param_1 + iVar6 * 6 + 4) < uVar3))) {
          FUN_0016d9dc(param_1 + iVar10 * 6);
          iVar10 = iVar6;
        }
        FUN_0016d9dc(param_1 + iVar10 * 6,&iStack_60);
      }
      uVar12 = uVar12 + 6;
    } while (uVar12 < param_2);
  }
  uVar12 = uStack_4c;
  if (iStack_7c < 0xc) {
    return;
  }
  do {
    if (param_1 != uVar12) {
      iVar7 = uVar12 - 6;
      FUN_0016d9dc(&uStack_78,iVar7);
      FUN_0016d9dc(iVar7,param_1);
      uVar5 = uStack_78;
      iVar6 = (int)((ulonglong)((longlong)DAT_001e1358 * (longlong)(int)(iVar7 - param_1)) >> 0x20);
      iVar7 = 0;
      iVar6 = iVar6 - (iVar6 >> 0x1f);
      iVar10 = 2;
      iStack_7c = iStack_74;
      if (2 < iVar6) {
        do {
          iVar13 = param_1 + iVar10 * 6;
          iVar11 = iVar7 * 6;
          iVar7 = iVar10;
          if (*(ushort *)(iVar13 + 4) < *(ushort *)(iVar13 + -2)) {
            iVar7 = iVar10 + -1;
          }
          FUN_0016d9dc(param_1 + iVar11,param_1 + iVar7 * 6);
          iVar10 = iVar7 * 2 + 2;
        } while (iVar10 < iVar6);
      }
      if (iVar10 == iVar6) {
        FUN_0016d9dc(param_1 + iVar7 * 6,param_1 + iVar10 * 6 + -6);
        iVar7 = iVar10 + -1;
      }
      uStack_64 = uVar5;
      iStack_60 = iStack_7c;
      iVar6 = iStack_60;
      iStack_60._0_2_ = (ushort)iStack_7c;
      uVar3 = (ushort)iStack_60;
      iStack_60 = iVar6;
      while ((iVar6 = (iVar7 + -1) / 2, 0 < iVar7 && (*(ushort *)(param_1 + iVar6 * 6 + 4) < uVar3))
            ) {
        FUN_0016d9dc(param_1 + iVar7 * 6);
        iVar7 = iVar6;
      }
      FUN_0016d9dc(param_1 + iVar7 * 6,&uStack_64);
    }
    uVar12 = uVar12 - 6;
  } while (0xb < (int)(uVar12 - param_1));
  return;
}

