// rea decompile_all
// name: FUN_0009a3c0
// address: 0x9a3c0
// body: available
// range: 0x9a3c0-0x9a97b inclusive
// range: 0x9a9c8-0x9aa37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009a3c0(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte local_38 [4];
  uint local_34 [2];
  int iStack_2c;
  int local_28;
  
  iVar13 = param_1 + param_2 * 0x38;
  local_34[0] = param_1 + 0x228;
  iVar12 = *(int *)(iVar13 + 0x26c);
  puVar11 = (uint *)(iVar13 + 0x248);
  if ((*(int *)(iVar13 + 0x254) != 0) || (*(int *)(iVar12 + 4) == 0)) {
    *(undefined1 *)(iVar13 + 0x270) = 1;
    return 1;
  }
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 1;
  local_38[0] = 0;
  iStack_2c = param_1;
  local_28 = param_2;
  do {
    pcVar8 = (char *)s_F0T__ERROR__storeTrackEvent__Inc_0009a983._1_4_;
    if (*(int *)(iVar12 + 4) == 0) goto LAB_0009a504;
    if (*(int *)(iVar12 + 4) != 0) {
      pbVar4 = *(byte **)(iVar12 + 0x10) + 1;
      uVar14 = (uint)**(byte **)(iVar12 + 0x10);
      if (*(byte **)(iVar12 + 0xc) <= pbVar4) {
        pbVar4 = *(byte **)(iVar12 + 8);
      }
      *(byte **)(iVar12 + 0x10) = pbVar4;
      FUN_00029894(iVar12 + 4);
    }
    iVar6 = DAT_0009a97c;
    uVar15 = uVar14 & 0x7f | uVar15 << 7;
  } while (((uVar14 & 0x80) != 0) && (uVar16 = uVar16 + 1, uVar16 < 5));
  if (uVar16 == 0) {
    return 0;
  }
  *(uint *)(iVar13 + 0x25c) = *(int *)(iVar13 + 0x25c) + uVar16;
  if (*(char *)(iVar13 + 0x264) == '\0') {
    *(uint *)(iVar13 + 0x24c) = *(int *)(iVar13 + 0x24c) + uVar15;
    uVar5 = FUN_00249f54();
    uVar5 = FUN_0024a000(uVar5,*(undefined4 *)(local_34[0] + 0x10));
    uVar5 = FUN_00249b8c(uVar5,*(undefined4 *)(iVar13 + 0x268));
    iVar6 = (int)((ulonglong)((longlong)iVar6 * (longlong)*(int *)(param_1 + 0x224)) >> 0x20);
    uVar7 = FUN_00249f24((iVar6 >> 5) - (iVar6 >> 0x1f));
    uVar5 = FUN_00249c78(uVar5,_DAT_0009a980);
    FUN_0024a000(uVar5,uVar7);
    uVar14 = FUN_00249ed0();
    *puVar11 = uVar14;
  }
  else {
    uVar5 = FUN_00249f54(uVar15);
    uVar5 = FUN_0024a000(uVar5,*(undefined4 *)(local_34[0] + 0x10));
    uVar5 = FUN_00249b8c(uVar5,*(undefined4 *)(iVar13 + 0x268));
    iVar6 = (int)((ulonglong)((longlong)iVar6 * (longlong)*(int *)(param_1 + 0x224)) >> 0x20);
    uVar7 = FUN_00249f24((iVar6 >> 5) - (iVar6 >> 0x1f));
    uVar5 = FUN_00249c78(uVar5,_DAT_0009a980);
    FUN_0024a000(uVar5,uVar7);
    uVar14 = FUN_00249ed0();
    *puVar11 = uVar14;
    *(uint *)(iVar13 + 0x24c) = uVar15;
    *(undefined1 *)(iVar13 + 0x264) = 0;
  }
  FUN_0009ad4c(param_1,local_28,local_38);
  if (local_38[0] < 0x80) {
    *(char *)(iVar13 + 600) = (char)*(undefined4 *)(iVar13 + 0x260);
LAB_0009a5dc:
    bVar2 = local_38[0];
    bVar3 = *(byte *)(iVar13 + 600);
    if (bVar3 != 0xff) {
      if (bVar3 < 0x80) {
        pcVar8 = s_F0T__ERROR__storeTrackEvent__Inc_0009a983 + 5;
LAB_0009a504:
        FUN_00002898(pcVar8);
        return 0;
      }
      goto LAB_0009a5f4;
    }
    uVar14 = 0;
    uVar16 = 1;
    uVar15 = 0;
    do {
      if (*(int *)(iVar12 + 4) == 0) {
        FUN_00002898(s_F0T__ERROR__storeTrackEvent__Inc_0009a983._1_4_);
        goto LAB_0009a6e8;
      }
      if (*(int *)(iVar12 + 4) != 0) {
        pbVar4 = *(byte **)(iVar12 + 0x10) + 1;
        uVar15 = (uint)**(byte **)(iVar12 + 0x10);
        if (*(byte **)(iVar12 + 0xc) <= pbVar4) {
          pbVar4 = *(byte **)(iVar12 + 8);
        }
        *(byte **)(iVar12 + 0x10) = pbVar4;
        FUN_00029894(iVar12 + 4);
      }
      uVar14 = uVar15 & 0x7f | uVar14 << 7;
    } while (((uVar15 & 0x80) != 0) && (uVar16 = uVar16 + 1, uVar16 < 5));
    if (uVar16 == 0) {
LAB_0009a6e8:
      FUN_00002898(DAT_0009a9c0,local_28);
      return 0;
    }
    uVar15 = 0;
    *(uint *)(iVar13 + 0x25c) = *(int *)(iVar13 + 0x25c) + uVar16;
    if (uVar14 != 0) {
      do {
        FUN_0009ad4c(param_1,local_28,local_38);
        if (bVar2 == 0x51) {
          *(byte *)((int)puVar11 + uVar15 + 0x10) = local_38[0];
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar14);
    }
    if (bVar2 != 0x51) {
      *(undefined4 *)(iVar13 + 0x250) = 0;
      *(undefined4 *)(iVar13 + 0x254) = 0x3fffffff;
      return 1;
    }
    uVar14 = uVar14 | 0x40000000;
LAB_0009a9f8:
    *(uint *)(iVar13 + 0x254) = uVar14;
  }
  else {
    *(byte *)(iVar13 + 600) = local_38[0];
    bVar3 = *(byte *)(iVar13 + 600);
    if (bVar3 != 0xf0 && bVar3 != 0xf7) {
      FUN_0009ad4c(param_1,local_28,local_38);
      goto LAB_0009a5dc;
    }
LAB_0009a5f4:
    uVar14 = (uint)(bVar3 >> 4);
    if (bVar3 - 0x80 < 0x70) {
      *(uint *)(iVar13 + 0x260) = (uint)bVar3;
    }
    if ((uVar14 - 8 < 4) || (uVar14 == 0xe)) {
LAB_0009a730:
      *(byte *)(iVar13 + 0x259) = local_38[0];
      FUN_0009ad4c(param_1,local_28,local_38);
      *(byte *)(iVar13 + 0x25a) = local_38[0];
      *(undefined4 *)(iVar13 + 0x254) = 3;
      return 1;
    }
    if (uVar14 != 0xc && uVar14 != 0xd) {
      if (uVar14 != 0xf) {
        return 1;
      }
      uVar14 = *(byte *)(iVar13 + 600) & 0xf;
      if ((uVar14 - 8 < 8) || (uVar14 == 6)) {
        uVar14 = 1;
        goto LAB_0009a9f8;
      }
      if (uVar14 != 1 && uVar14 != 3) {
        if (uVar14 != 2) {
          bVar1 = false;
          uVar14 = 0;
          local_34[0] = **(int **)(DAT_0009a9c4 + 4) - (*(int **)(DAT_0009a9c4 + 4))[1];
          uVar15 = 1;
          uVar16 = 0;
          while (*(int *)(iVar12 + 4) != 0) {
            if (*(int *)(iVar12 + 4) != 0) {
              pbVar4 = *(byte **)(iVar12 + 0x10) + 1;
              uVar16 = (uint)**(byte **)(iVar12 + 0x10);
              if (*(byte **)(iVar12 + 0xc) <= pbVar4) {
                pbVar4 = *(byte **)(iVar12 + 8);
              }
              *(byte **)(iVar12 + 0x10) = pbVar4;
              FUN_00029894(iVar12 + 4);
            }
            uVar14 = uVar16 & 0x7f | uVar14 << 7;
            if (((uVar16 & 0x80) == 0) || (uVar15 = uVar15 + 1, 4 < uVar15)) goto LAB_0009a82c;
          }
          FUN_00002898(s_F0T__ERROR__storeTrackEvent__Inc_0009a983._1_4_);
          uVar15 = 0;
          uVar14 = uVar15;
LAB_0009a82c:
          *(uint *)(iVar13 + 0x254) = uVar14;
          iVar12 = *(int *)(iVar13 + 0x25c) + uVar15;
          *(int *)(iVar13 + 0x25c) = iVar12;
          *(int *)(iVar13 + 0x250) = iVar12 + *(int *)(iVar13 + 0x23c);
          iVar12 = DAT_0009a9c4;
          if (*(int *)(iVar13 + 0x254) + 8U <= local_34[0]) {
            bVar1 = true;
            iVar6 = 0;
            local_34[0] = *puVar11;
            do {
              piVar9 = *(int **)(iVar12 + 4);
              if (piVar9[1] != *piVar9) {
                puVar10 = (undefined1 *)piVar9[5];
                if (puVar10 != (undefined1 *)0x0) {
                  *puVar10 = *(undefined1 *)((int)local_34 + iVar6);
                }
                puVar10 = puVar10 + 1;
                if ((undefined1 *)piVar9[3] <= puVar10) {
                  puVar10 = (undefined1 *)piVar9[2];
                }
                piVar9[5] = (int)puVar10;
                FUN_000298e0(piVar9 + 1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 4);
            iVar6 = 0;
            local_34[0] = *(uint *)(iVar13 + 0x254);
            do {
              piVar9 = *(int **)(iVar12 + 4);
              if (piVar9[1] != *piVar9) {
                puVar10 = (undefined1 *)piVar9[5];
                if (puVar10 != (undefined1 *)0x0) {
                  *puVar10 = *(undefined1 *)((int)local_34 + iVar6);
                }
                puVar10 = puVar10 + 1;
                if ((undefined1 *)piVar9[3] <= puVar10) {
                  puVar10 = (undefined1 *)piVar9[2];
                }
                piVar9[5] = (int)puVar10;
                FUN_000298e0(piVar9 + 1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 4);
          }
          iVar12 = DAT_0009a9c4;
          uVar14 = 0;
          if (*(int *)(iVar13 + 0x254) == 0) {
            return 1;
          }
          do {
            iVar6 = FUN_0009ad4c(param_1,local_28,local_38);
            if (iVar6 == 0) {
              FUN_001d0130(1);
            }
            else if ((bVar1) && (piVar9 = *(int **)(iVar12 + 4), piVar9[1] != *piVar9)) {
              pbVar4 = (byte *)piVar9[5];
              if (pbVar4 != (byte *)0x0) {
                *pbVar4 = local_38[0];
              }
              pbVar4 = pbVar4 + 1;
              if ((byte *)piVar9[3] <= pbVar4) {
                pbVar4 = (byte *)piVar9[2];
              }
              piVar9[5] = (int)pbVar4;
              FUN_000298e0(piVar9 + 1);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(iVar13 + 0x254));
          return 1;
        }
        goto LAB_0009a730;
      }
    }
    *(byte *)(iVar13 + 0x259) = local_38[0];
    *(undefined4 *)(iVar13 + 0x254) = 2;
  }
  return 1;
}

