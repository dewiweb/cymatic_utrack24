// rea decompile_all
// name: FUN_00054138
// address: 0x54138
// body: available
// range: 0x54138-0x54583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_00054138(int param_1,int param_2,int *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 unaff_r10;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_3c [4];
  int local_38 [3];
  uint local_2c;
  
  uVar12 = *(int *)(param_1 + 0x4c) - *param_3;
  if (0x800 < uVar12) {
    uVar12 = 0x800;
  }
  iVar4 = FUN_001dabd8(0,param_2 * *DAT_00054584 + *param_3 + *DAT_00054588,param_1 + 0x1061,uVar12)
  ;
  if (iVar4 != 0) {
    FUN_00002898(DAT_0005458c);
    *param_4 = 0;
    return (undefined4 *)0x0;
  }
  if (uVar12 != 0) {
    unaff_r10 = DAT_00054590;
  }
  uVar13 = 0xffffffff;
  uVar11 = 0;
  if (uVar12 != 0) {
LAB_000541c0:
    cVar1 = *(char *)(param_1 + uVar11 + 0x1061);
    if ((cVar1 != -1) && (uVar13 = uVar11, cVar1 == '>')) {
      if (uVar12 < uVar11 + 10) {
        *param_3 = *param_3 + uVar11;
        *param_4 = uVar11 != 0;
        return (undefined4 *)0x0;
      }
      local_2c = (uint)*(byte *)(uVar11 + 1 + param_1 + 0x1061);
      if (((local_2c == 0x41) || (local_2c == 0x43 || local_2c == 0x49)) ||
         (uVar5 = DAT_00054594, uVar9 = local_2c, local_2c == 0x52)) {
        iVar4 = uVar11 + 3;
        uVar9 = (uint)CONCAT11(*(undefined1 *)(uVar11 + 1 + param_1 + 0x1062),
                               *(undefined1 *)(iVar4 + param_1 + 0x1061));
        bVar15 = 0x7ff < uVar9;
        bVar14 = uVar9 == 0x800;
        if (uVar9 < 0x801) {
          bVar15 = uVar12 <= uVar9 + uVar11;
          bVar14 = uVar9 + uVar11 == uVar12;
        }
        uVar5 = DAT_0005459c;
        if (!bVar15 || bVar14) {
          local_38[0] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + param_1 + 0x1062),
                                                   *(undefined1 *)(iVar4 + param_1 + 0x1063)),
                                          *(undefined1 *)(iVar4 + param_1 + 0x1064)),
                                 *(undefined1 *)(DAT_000545a0 + uVar11 + 7 + param_1));
          iVar6 = FUN_00176c50(uVar11 + 8 + param_1 + 0x1061,uVar9 - 8);
          if (local_38[0] == iVar6) {
            uVar7 = uVar11 + 9;
            bVar14 = uVar12 == 0x7fffffff;
            uVar2 = uVar12;
            if (uVar12 < 0x80000000) {
              bVar14 = iVar4 == 0x7ffffff9;
              uVar2 = uVar7;
            }
            iVar4 = param_1 + uVar11 + 8 + 0x1061;
            if (uVar2 < 0x7fffffff || bVar14) {
              iVar10 = (uVar12 - uVar7) + 1;
              iVar6 = 1;
              if (1 < iVar10) {
                do {
                  if (*(char *)(param_1 + uVar7 + 0x1061) == '\0') goto LAB_000543d4;
                  iVar6 = iVar6 + 1;
                  uVar7 = uVar7 + 1;
                } while (iVar6 < iVar10);
              }
            }
            else {
              for (; uVar7 < uVar12; uVar7 = uVar7 + 1) {
                if (*(char *)(param_1 + uVar7 + 0x1061) == '\0') goto LAB_000543d4;
              }
            }
          }
          goto LAB_00054250;
        }
      }
      FUN_00002898(uVar5,uVar9);
    }
    goto LAB_00054250;
  }
LAB_00054570:
  uVar3 = 0;
LAB_00054574:
  *param_4 = uVar3;
  return (undefined4 *)0x0;
LAB_000543d4:
  iVar6 = uVar7 + param_1 + 0x1062;
  if (iVar6 != 0) {
    *param_3 = *param_3 + uVar11 + uVar9;
    if (local_2c == 0x41) {
      puVar8 = (undefined4 *)FUN_001f01c4(0x10,1);
      if (puVar8 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar8 = unaff_r10;
      iVar4 = FUN_00232964(puVar8 + 1,iVar4,auStack_3c);
      iVar4 = FUN_00232964(iVar4 + 4,iVar6,local_38);
      uVar5 = DAT_000545b0;
      *(undefined1 *)(iVar4 + 4) = 0x41;
      *(undefined4 *)(iVar4 + -8) = uVar5;
      return (undefined4 *)(iVar4 + -8);
    }
    if (local_2c == 0x43) {
      puVar8 = (undefined4 *)FUN_001f01c4(0x10,1);
      if (puVar8 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar8 = unaff_r10;
      iVar4 = FUN_00232964(puVar8 + 1,iVar4,auStack_3c);
      iVar4 = FUN_00232964(iVar4 + 4,iVar6,local_38);
      uVar5 = DAT_000545ac;
      *(undefined1 *)(iVar4 + 4) = 0x43;
      *(undefined4 *)(iVar4 + -8) = uVar5;
      return (undefined4 *)(iVar4 + -8);
    }
    if (local_2c == 0x49) {
      puVar8 = (undefined4 *)FUN_001f01c4(0x10,1);
      if (puVar8 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar8 = unaff_r10;
      iVar4 = FUN_00232964(puVar8 + 1,iVar4,auStack_3c);
      iVar4 = FUN_00232964(iVar4 + 4,iVar6,local_38);
      uVar5 = DAT_000545b4;
      *(undefined1 *)(iVar4 + 4) = 0x49;
      *(undefined4 *)(iVar4 + -8) = uVar5;
      return (undefined4 *)(iVar4 + -8);
    }
    if (local_2c == 0x52) {
      puVar8 = (undefined4 *)FUN_001f01c4(0x10,1);
      uVar5 = DAT_000545a4;
      if (puVar8 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar8 = unaff_r10;
      iVar4 = FUN_00232964(puVar8 + 1,iVar4,auStack_3c);
      iVar4 = FUN_00232964(iVar4 + 4,uVar5,local_38);
      uVar5 = DAT_000545a8;
      *(undefined1 *)(iVar4 + 4) = 0x52;
      *(undefined4 *)(iVar4 + -8) = uVar5;
      return (undefined4 *)(iVar4 + -8);
    }
  }
LAB_00054250:
  uVar11 = uVar11 + 1;
  if (uVar12 <= uVar11) goto code_r0x0005425c;
  goto LAB_000541c0;
code_r0x0005425c:
  if (-1 < (int)uVar13) {
    *param_3 = *param_3 + (*(int *)(param_1 + 0x54) + uVar13 & ~(*(int *)(param_1 + 0x54) - 1U));
    FUN_00002898(DAT_00054598,uVar13);
    uVar3 = 1;
    goto LAB_00054574;
  }
  goto LAB_00054570;
}

