// rea decompile_all
// name: FUN_00050f68
// address: 0x50f68
// body: available
// range: 0x50f68-0x5129b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00050f68(uint param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  piVar12 = (int *)(param_1 + 0x38);
  uVar15 = param_1;
  pbVar11 = DAT_0005129c;
  if (*DAT_0005129c != 0xff) {
    do {
      iVar9 = DAT_000512a0;
      puVar10 = *(uint **)(param_1 + 0x3c);
      uVar13 = *(uint *)(pbVar11 + 4);
      uVar14 = *(uint *)(pbVar11 + 8);
      uVar15 = uVar15 & 0xffffff00 | (uint)*pbVar11;
      if (puVar10 == *(uint **)(param_1 + 0x40)) {
        iVar8 = (int)((ulonglong)
                      ((longlong)DAT_000512a0 *
                      (longlong)((int)*(uint **)(param_1 + 0x40) - *piVar12)) >> 0x20);
        iVar2 = (int)((ulonglong)((longlong)DAT_000512a0 * (longlong)((int)puVar10 - *piVar12)) >>
                     0x20);
        uVar3 = (iVar2 >> 1) - (iVar2 >> 0x1f);
        if (uVar3 < (uint)((iVar8 >> 1) - (iVar8 >> 0x1f))) {
          *(uint **)(param_1 + 0x3c) = puVar10 + 3;
          if (puVar10 != (uint *)0x0) {
            *puVar10 = puVar10[-3];
            puVar10[1] = puVar10[-2];
            puVar10[2] = puVar10[-1];
          }
          puVar6 = puVar10 + -3;
          if (0xb < (int)puVar6 - (int)puVar10) {
            iVar9 = (int)((ulonglong)((longlong)iVar9 * (longlong)((int)puVar6 - (int)puVar10)) >>
                         0x20);
            uVar3 = (iVar9 >> 1) - (iVar9 >> 0x1f);
            puVar7 = puVar10;
            if ((uVar3 & 1) != 0) {
              puVar6 = puVar10 + -6;
              puVar7 = puVar10 + -3;
              *puVar7 = *puVar6;
              puVar10[-2] = puVar10[-5];
              puVar10[-1] = puVar10[-4];
            }
            for (iVar9 = (int)uVar3 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              uVar3 = puVar6[-2];
              uVar16 = puVar6[-1];
              puVar7[-3] = puVar6[-3];
              puVar7[-2] = uVar3;
              puVar7[-1] = uVar16;
              uVar3 = puVar6[-5];
              uVar16 = puVar6[-4];
              puVar7[-6] = puVar6[-6];
              puVar7[-5] = uVar3;
              puVar7[-4] = uVar16;
              puVar6 = puVar6 + -6;
              puVar7 = puVar7 + -6;
            }
          }
          *puVar10 = uVar15;
          puVar10[1] = uVar13;
          puVar10[2] = uVar14;
        }
        else {
          uVar16 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar16 < uVar3 + 1) {
            uVar16 = uVar3 + 1;
          }
          puVar4 = (uint *)FUN_00173860(uVar16 * 0xc,0);
          puVar7 = puVar4;
          iVar9 = DAT_000512a0;
          for (puVar6 = (uint *)*piVar12; DAT_000512a0 = iVar9, puVar6 != puVar10;
              puVar6 = puVar6 + 3) {
            if (puVar7 != (uint *)0x0) {
              uVar3 = puVar6[1];
              uVar17 = puVar6[2];
              *puVar7 = *puVar6;
              puVar7[1] = uVar3;
              puVar7[2] = uVar17;
            }
            puVar7 = puVar7 + 3;
            iVar9 = DAT_000512a0;
          }
          iVar2 = (int)((ulonglong)((longlong)iVar9 * (longlong)((int)puVar10 - *piVar12)) >> 0x20);
          puVar6 = puVar4 + ((iVar2 >> 1) - (iVar2 >> 0x1f)) * 3;
          if (puVar6 != (uint *)0x0) {
            *puVar6 = uVar15;
            puVar6[1] = uVar13;
            puVar6[2] = uVar14;
          }
          puVar7 = *(uint **)(param_1 + 0x3c);
          iVar2 = (int)((ulonglong)((longlong)iVar9 * (longlong)((int)puVar10 - *piVar12)) >> 0x20);
          puVar6 = puVar4 + ((iVar2 >> 1) - (iVar2 >> 0x1f)) * 3;
          for (; puVar10 != puVar7; puVar10 = puVar10 + 3) {
            puVar5 = puVar6 + 3;
            if (puVar5 != (uint *)0x0) {
              uVar15 = puVar10[1];
              uVar13 = puVar10[2];
              *puVar5 = *puVar10;
              puVar6[4] = uVar15;
              puVar6[5] = uVar13;
            }
            puVar6 = puVar5;
          }
          iVar2 = *piVar12;
          iVar8 = (int)((ulonglong)((longlong)iVar9 * (longlong)(*(int *)(param_1 + 0x3c) - iVar2))
                       >> 0x20);
          lVar1 = (longlong)iVar9 * (longlong)(*(int *)(param_1 + 0x40) - iVar2);
          iVar9 = (int)((ulonglong)lVar1 >> 0x20);
          FUN_00173a54(iVar2,(iVar9 >> 1) - (iVar9 >> 0x1f),0,(int)lVar1);
          *piVar12 = (int)puVar4;
          *(uint **)(param_1 + 0x3c) = puVar4 + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 3 + 3;
          *(uint **)(param_1 + 0x40) = puVar4 + uVar16 * 3;
        }
      }
      else {
        *(uint **)(param_1 + 0x3c) = puVar10 + 3;
        if (puVar10 != (uint *)0x0) {
          *puVar10 = uVar15;
          puVar10[1] = uVar13;
          puVar10[2] = uVar14;
        }
      }
      pbVar11 = pbVar11 + 0xc;
      uVar15 = (uint)(char)*pbVar11;
    } while (uVar15 != 0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x50) = 10;
  *(undefined4 *)(param_1 + 0x54) = 0xc;
  *(undefined4 *)(param_1 + 0x58) = 6;
  FUN_000962a8(param_1,0,&DAT_00001f40,0x100,DAT_000512b0,DAT_000512ac,0x100,DAT_000512a8,
               DAT_000512a4);
  iVar9 = DAT_000512c4;
  FUN_000962a8(param_1,&DAT_00001f40,DAT_000512c4,0x100,DAT_000512c0,DAT_000512bc,0x100,DAT_000512b8
               ,DAT_000512b4);
  FUN_000962a8(param_1,iVar9,iVar9 << 1,0x100,DAT_000512cc,DAT_000512c8,0x100,DAT_000512cc,
               DAT_000512c8);
  return;
}

