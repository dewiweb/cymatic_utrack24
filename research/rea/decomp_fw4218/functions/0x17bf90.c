// rea decompile_all
// name: FUN_0017bf90
// address: 0x17bf90
// body: available
// range: 0x17bf90-0x17c30f inclusive
// range: 0x17c380-0x17ca2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0017c81c) */
/* WARNING: Removing unreachable block (ram,0x0017c828) */
/* WARNING: Removing unreachable block (ram,0x0017c1a8) */
/* WARNING: Removing unreachable block (ram,0x0017c1b4) */
/* WARNING: Removing unreachable block (ram,0x0017c46c) */
/* WARNING: Removing unreachable block (ram,0x0017c478) */
/* WARNING: Removing unreachable block (ram,0x0017c638) */
/* WARNING: Removing unreachable block (ram,0x0017c644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0017bf90(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  undefined1 auStack_78 [8];
  int *local_70;
  uint local_6c;
  undefined1 auStack_68 [4];
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  int local_5c;
  int local_58;
  
  FUN_000b9cf4();
  FUN_000b8840();
  puVar8 = DAT_0017c314;
  pcVar1 = DAT_0017c310;
  if (*DAT_0017c310 == '\0') {
    *DAT_0017c314 = *DAT_0017c314 & 0xfffffffc | 2;
    *puVar8 = *puVar8 & 0xffffffcf | 0x20;
    *puVar8 = *puVar8 & 0xfffcffff;
    *puVar8 = *puVar8 & 0xff0fffff;
    puVar8[-0x800] = puVar8[-0x800] & 0xffffff00;
    puVar8[-0x7fc] = puVar8[-0x7fc] | 0x10000;
    puVar8[-0x7c0] = 0;
    *pcVar1 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x14) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  puVar2 = (undefined4 *)FUN_000b1210(auStack_78);
  *puVar2 = _DAT_0017c318;
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___AudioHWService_0017c31a + 2,auStack_78);
  if (iVar4 == 0) {
    FUN_00002898(_DAT_0017c334,*(undefined4 *)(param_1 + 4));
    FUN_000b1228(auStack_78);
    return -200;
  }
  iVar4 = (**(code **)(*local_70 + 0x50))(local_70,*(undefined4 *)(param_1 + 4));
  if (iVar4 == 0) {
    FUN_00002898(s___ERROR__AvPort__init___port__d__0017c336 + 2,*(undefined4 *)(param_1 + 4));
    FUN_000b1228(auStack_78);
    return -0xd6;
  }
  puVar2 = (undefined4 *)FUN_001f01c4(0x1c,1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00002898(DAT_0017c378,*(undefined4 *)(param_1 + 4));
    FUN_000b1228(auStack_78);
    return -0x35;
  }
  uVar3 = *DAT_0017c32c;
  uVar18 = DAT_0017c32c[1];
  puVar2[2] = param_1;
  puVar2[3] = param_1;
  puVar2[4] = iVar4;
  puVar2[5] = uVar3;
  puVar2[6] = uVar18;
  *puVar2 = DAT_0017c330;
  puVar2[1] = 0;
  local_5c = iVar4 + 0xc;
  FUN_0005b1b8(local_5c,puVar2);
  FUN_0005b1b8(iVar4 + 0x58,puVar2);
  FUN_0005b1b8(iVar4 + 0x9c,puVar2);
  puVar5 = *(undefined4 **)(param_1 + 0x24);
  piVar19 = (int *)(param_1 + 0x20);
  if (puVar5 == *(undefined4 **)(param_1 + 0x28)) {
    uVar13 = (int)puVar5 - *piVar19 >> 2;
    if (uVar13 < (uint)((int)*(undefined4 **)(param_1 + 0x28) - *piVar19 >> 2)) {
      *(undefined4 **)(param_1 + 0x24) = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = puVar5[-1];
      }
      *puVar5 = puVar2;
    }
    else {
      uVar12 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      uVar21 = uVar13 + 1;
      if (uVar13 + 1 <= uVar12) {
        uVar21 = uVar12;
      }
      puVar6 = (undefined4 *)FUN_00173860(uVar21 << 2,0);
      puVar9 = puVar6;
      for (puVar14 = (undefined4 *)*piVar19; puVar14 != puVar5; puVar14 = puVar14 + 1) {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = *puVar14;
        }
        puVar9 = puVar9 + 1;
      }
      puVar14 = (undefined4 *)(((int)puVar5 - *piVar19 & 0xfffffffcU) + (int)puVar6);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = puVar2;
      }
      puVar14 = *(undefined4 **)(param_1 + 0x24);
      puVar2 = (undefined4 *)(((int)puVar5 - *piVar19 & 0xfffffffcU) + (int)puVar6);
      for (; puVar5 != puVar14; puVar5 = puVar5 + 1) {
        puVar2 = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar5;
        }
      }
      iVar20 = *piVar19;
      iVar7 = *(int *)(param_1 + 0x24);
      FUN_00173a54(iVar20,*(int *)(param_1 + 0x28) - iVar20 >> 2,0);
      *(undefined4 **)(param_1 + 0x28) = puVar6 + uVar21;
      *(undefined4 **)(param_1 + 0x24) = puVar6 + (iVar7 - iVar20 >> 2) + 1;
      *piVar19 = (int)puVar6;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x24) = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = puVar2;
    }
  }
  iVar20 = 0;
  local_60 = DAT_0017c37c;
  do {
    iVar7 = FUN_001a7440(iVar4,iVar20);
    if (iVar20 == 0) {
      DAT_0017c314[*(int *)(param_1 + 4) + 4] =
           DAT_0017c314[*(int *)(param_1 + 4) + 4] & 0xffffff80 | 0x3e;
    }
    else if (iVar20 == 1) {
      puVar8 = DAT_0017c314 + *(int *)(param_1 + 4);
      uVar13 = puVar8[4] & 0xffff80ff | 0x3e00;
LAB_0017c3d4:
      puVar8[4] = uVar13;
    }
    else if (iVar20 == 2) {
      DAT_0017c314[*(int *)(param_1 + 4) + 4] =
           DAT_0017c314[*(int *)(param_1 + 4) + 4] & 0xff80ffff | 0x3e0000;
    }
    else if (iVar20 == 3) {
      puVar8 = DAT_0017c314 + *(int *)(param_1 + 4);
      uVar13 = puVar8[4] & 0x80ffffff | 0x3e000000;
      goto LAB_0017c3d4;
    }
    if (iVar7 != 0) {
      piVar19 = (int *)FUN_001f01c4(8,1);
      if (piVar19 != (int *)0x0) {
        *piVar19 = iVar7;
        *(undefined2 *)(piVar19 + 1) = 0;
      }
      piVar22 = DAT_0017ca2c;
      puVar2 = (undefined4 *)DAT_0017ca2c[1];
      if (puVar2 == (undefined4 *)DAT_0017ca2c[2]) {
        uVar13 = (int)puVar2 - *DAT_0017ca2c >> 2;
        if (uVar13 < (uint)(DAT_0017ca2c[2] - *DAT_0017ca2c >> 2)) {
          DAT_0017ca2c[1] = (int)(puVar2 + 1);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = puVar2[-1];
          }
          *puVar2 = piVar19;
        }
        else {
          local_6c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (local_6c < uVar13 + 1) {
            local_6c = uVar13 + 1;
          }
          puVar9 = (undefined4 *)FUN_00173860(local_6c << 2,0);
          puVar14 = puVar9;
          for (puVar5 = (undefined4 *)*piVar22; puVar5 != puVar2; puVar5 = puVar5 + 1) {
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar5;
            }
            puVar14 = puVar14 + 1;
          }
          puVar5 = (undefined4 *)(((int)puVar2 - *piVar22 & 0xfffffffcU) + (int)puVar9);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = piVar19;
          }
          puVar14 = (undefined4 *)piVar22[1];
          puVar5 = (undefined4 *)(((int)puVar2 - *piVar22 & 0xfffffffcU) + (int)puVar9);
          for (; puVar2 != puVar14; puVar2 = puVar2 + 1) {
            puVar5 = puVar5 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar2;
            }
          }
          iVar11 = *piVar22;
          iVar17 = piVar22[1];
          FUN_00173a54(iVar11,piVar22[2] - iVar11 >> 2,0);
          piVar22[2] = (int)(puVar9 + local_6c);
          piVar22[1] = (int)(puVar9 + (iVar17 - iVar11 >> 2) + 1);
          *piVar22 = (int)puVar9;
        }
      }
      else {
        DAT_0017ca2c[1] = (int)(puVar2 + 1);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = piVar19;
        }
      }
      puVar2 = (undefined4 *)FUN_001f01c4(0x1c,1);
      if (puVar2 == (undefined4 *)0x0) {
LAB_0017c7bc:
        FUN_00002898(DAT_0017ca38,*(undefined4 *)(param_1 + 4));
        FUN_000b1228(auStack_78);
        return -0x35;
      }
      uVar3 = *DAT_0017ca30;
      uVar18 = DAT_0017ca30[1];
      puVar2[1] = 0;
      puVar2[2] = param_1;
      *puVar2 = local_60;
      puVar2[5] = uVar3;
      puVar2[6] = uVar18;
      puVar2[3] = param_1;
      puVar2[4] = iVar7;
      local_58 = iVar7 + 0x50;
      FUN_0005b1b8(local_58,puVar2);
      piVar19 = *(int **)(param_1 + 0x30);
      piVar22 = (int *)(param_1 + 0x2c);
      if (piVar19 == *(int **)(param_1 + 0x34)) {
        uVar13 = (int)piVar19 - *piVar22 >> 2;
        if (uVar13 < (uint)((int)*(int **)(param_1 + 0x34) - *piVar22 >> 2)) {
          *(int **)(param_1 + 0x30) = piVar19 + 1;
          if (piVar19 != (int *)0x0) {
            *piVar19 = piVar19[-1];
          }
          *piVar19 = (int)puVar2;
        }
        else {
          local_6c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (local_6c < uVar13 + 1) {
            local_6c = uVar13 + 1;
          }
          piVar10 = (int *)FUN_00173860(local_6c << 2,0);
          piVar16 = piVar10;
          for (piVar15 = (int *)*piVar22; piVar15 != piVar19; piVar15 = piVar15 + 1) {
            if (piVar16 != (int *)0x0) {
              *piVar16 = *piVar15;
            }
            piVar16 = piVar16 + 1;
          }
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          if (piVar15 != (int *)0x0) {
            *piVar15 = (int)puVar2;
          }
          piVar16 = *(int **)(param_1 + 0x30);
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          for (; piVar19 != piVar16; piVar19 = piVar19 + 1) {
            piVar15 = piVar15 + 1;
            if (piVar15 != (int *)0x0) {
              *piVar15 = *piVar19;
            }
          }
          iVar11 = *piVar22;
          iVar17 = *(int *)(param_1 + 0x30);
          FUN_00173a54(iVar11,*(int *)(param_1 + 0x34) - iVar11 >> 2,0);
          *piVar22 = (int)piVar10;
          *(int **)(param_1 + 0x30) = piVar10 + (iVar17 - iVar11 >> 2) + 1;
          *(int **)(param_1 + 0x34) = piVar10 + local_6c;
        }
      }
      else {
        *(int **)(param_1 + 0x30) = piVar19 + 1;
        if (piVar19 != (int *)0x0) {
          *piVar19 = (int)puVar2;
        }
      }
      puVar2 = (undefined4 *)FUN_001f01c4(0x1c,1);
      if (puVar2 == (undefined4 *)0x0) goto LAB_0017c7bc;
      uVar3 = *DAT_0017ca34;
      uVar18 = DAT_0017ca34[1];
      puVar2[1] = 0;
      puVar2[2] = param_1;
      *puVar2 = local_60;
      puVar2[5] = uVar3;
      puVar2[6] = uVar18;
      puVar2[3] = param_1;
      puVar2[4] = iVar7;
      FUN_0005b1b8(local_58,puVar2);
      piVar19 = *(int **)(param_1 + 0x30);
      piVar22 = (int *)(param_1 + 0x2c);
      if (piVar19 == *(int **)(param_1 + 0x34)) {
        uVar13 = (int)piVar19 - *piVar22 >> 2;
        if (uVar13 < (uint)((int)*(int **)(param_1 + 0x34) - *piVar22 >> 2)) {
          *(int **)(param_1 + 0x30) = piVar19 + 1;
          if (piVar19 != (int *)0x0) {
            *piVar19 = piVar19[-1];
          }
          *piVar19 = (int)puVar2;
        }
        else {
          local_6c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (local_6c < uVar13 + 1) {
            local_6c = uVar13 + 1;
          }
          piVar10 = (int *)FUN_00173860(local_6c << 2,0);
          piVar16 = piVar10;
          for (piVar15 = (int *)*piVar22; piVar15 != piVar19; piVar15 = piVar15 + 1) {
            if (piVar16 != (int *)0x0) {
              *piVar16 = *piVar15;
            }
            piVar16 = piVar16 + 1;
          }
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          if (piVar15 != (int *)0x0) {
            *piVar15 = (int)puVar2;
          }
          piVar16 = *(int **)(param_1 + 0x30);
          piVar15 = (int *)(((int)piVar19 - *piVar22 & 0xfffffffcU) + (int)piVar10);
          for (; piVar19 != piVar16; piVar19 = piVar19 + 1) {
            piVar15 = piVar15 + 1;
            if (piVar15 != (int *)0x0) {
              *piVar15 = *piVar19;
            }
          }
          iVar11 = *piVar22;
          iVar17 = *(int *)(param_1 + 0x30);
          FUN_00173a54(iVar11,*(int *)(param_1 + 0x34) - iVar11 >> 2,0);
          *(int **)(param_1 + 0x34) = piVar10 + local_6c;
          *(int **)(param_1 + 0x30) = piVar10 + (iVar17 - iVar11 >> 2) + 1;
          *piVar22 = (int)piVar10;
        }
      }
      else {
        *(int **)(param_1 + 0x30) = piVar19 + 1;
        if (piVar19 != (int *)0x0) {
          *piVar19 = (int)puVar2;
        }
      }
      FUN_0005b1b8(iVar7 + 0x90,puVar2);
    }
    iVar20 = iVar20 + 1;
    if (3 < iVar20) {
      iVar20 = FUN_00179b38(param_1,iVar4);
      if (iVar20 != 0) {
        FUN_000b1228(auStack_78);
        return iVar20;
      }
      FUN_0007bce8(auStack_68);
      local_64 = *(undefined1 *)(local_5c + 0x24);
      local_63 = *(undefined1 *)(local_5c + 0x25);
      local_62 = *(undefined1 *)(local_5c + 0x26);
      local_61 = *(undefined1 *)(local_5c + 0x27);
      iVar20 = FUN_001b40a0(auStack_68);
      if ((iVar20 == 5) || (iVar20 == 6 || iVar20 == 7)) {
        FUN_001799a8(&local_60,param_1,iVar4);
        iVar4 = FUN_0017af1c(param_1,&local_60);
        if (iVar4 != 0) {
          FUN_00002898(DAT_0017ca3c,*(undefined4 *)(param_1 + 4));
          FUN_0007bd00(&local_5c);
          FUN_0007bd00(auStack_68);
          FUN_000b1228(auStack_78);
          return iVar4;
        }
        FUN_0007bd00(&local_5c);
      }
      FUN_0007bd00(auStack_68);
      FUN_000b1228(auStack_78);
      return 0;
    }
  } while( true );
}

