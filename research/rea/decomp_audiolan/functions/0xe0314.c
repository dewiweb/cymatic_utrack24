// rea decompile_all
// name: FUN_000e0314
// address: 0xe0314
// body: available
// range: 0xe0314-0xe12d3 inclusive
// range: 0xe12f0-0xe1483 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000e0d64) */
/* WARNING: Removing unreachable block (ram,0x000e0d70) */
/* WARNING: Removing unreachable block (ram,0x000e0858) */
/* WARNING: Removing unreachable block (ram,0x000e0864) */
/* WARNING: Removing unreachable block (ram,0x000e1354) */
/* WARNING: Removing unreachable block (ram,0x000e1360) */

int * FUN_000e0314(undefined4 param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  undefined1 *puVar21;
  int *piVar22;
  uint *puVar23;
  undefined1 *puVar24;
  uint *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 *local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined1 *local_44;
  undefined4 local_40;
  uint local_38;
  undefined4 local_30;
  
  piVar9 = (int *)FUN_000dabbc();
  iVar11 = DAT_000e12d4;
  piVar9[0x11] = DAT_000e12d4 + 0x58;
  *piVar9 = iVar11;
  piVar9[0x12] = 0;
  piVar9[0x13] = 0;
  piVar9[0x14] = 0;
  piVar9[0x15] = 0;
  piVar9[0x16] = 0;
  piVar9[0x17] = 0;
  piVar9[0x18] = 0;
  piVar9[0x19] = 0;
  piVar9[0x1a] = 0;
  piVar9[0x1b] = param_2;
  piVar9[0x1c] = 0;
  piVar9[0x1d] = 0;
  piVar9[0x1e] = 0;
  piVar9[0x1f] = 0;
  piVar9[0x20] = 0;
  piVar9[0x21] = 0;
  piVar9[0x22] = 0;
  piVar9[0x23] = 0;
  piVar9[0x24] = 0;
  piVar9[0x25] = 0;
  local_40 = DAT_000e12d8;
  piVar9[0x26] = 0;
  uVar8 = DAT_000e12dc;
  piVar9[0x27] = 0;
  uVar19 = 0;
  do {
    local_90 = (uint *)((uint)local_90 & 0xffff0000);
    local_94 = local_40;
    local_84 = 0;
    local_88 = (local_88 >> 8 & 0xff) << 8;
    local_70 = uVar8;
    local_80 = 0;
    local_7c = local_7c & 0xffffff00;
    local_74 = 0;
    local_64 = 0;
    piVar22 = piVar9 + 0x12;
    local_68 = 0;
    local_60 = 0;
    local_5c = local_5c & 0xff000000;
    local_78 = 0;
    local_6c = uVar8;
    puVar10 = (undefined4 *)piVar9[0x13];
    local_8c = uVar19;
    if (puVar10 == (undefined4 *)piVar9[0x14]) {
      uVar13 = piVar9[0x14] - *piVar22;
      iVar17 = (int)((longlong)(int)uVar13 * (longlong)DAT_000e12e0 + ((ulonglong)uVar13 << 0x20) >>
                    0x20);
      uVar13 = (int)puVar10 - *piVar22;
      iVar11 = (int)((longlong)(int)uVar13 * (longlong)DAT_000e12e0 + ((ulonglong)uVar13 << 0x20) >>
                    0x20);
      local_54 = &local_94;
      if ((uint)((iVar11 >> 5) - (iVar11 >> 0x1f)) < (uint)((iVar17 >> 5) - (iVar17 >> 0x1f))) {
        piVar9[0x13] = (int)(puVar10 + 0xf);
        if (puVar10 != (undefined4 *)0x0) {
          FUN_000e82c8(puVar10,puVar10 + -0xf);
        }
        puVar16 = puVar10;
        puVar14 = puVar10 + -0xf;
        puVar15 = local_54;
        while (puVar3 = puVar14, puVar2 = puVar16, local_54 = puVar15, puVar10 != puVar3) {
          puVar16 = puVar2 + -0xf;
          puVar14 = puVar3 + -0xf;
          if (puVar16 != puVar14) {
            *(undefined1 *)(puVar2 + -0xe) = *(undefined1 *)(puVar3 + -0xe);
            *(undefined1 *)((int)puVar2 + -0x37) = *(undefined1 *)((int)puVar3 + -0x37);
            puVar2[-0xd] = puVar3[-0xd];
            *(undefined1 *)(puVar2 + -0xc) = *(undefined1 *)(puVar3 + -0xc);
            *(undefined2 *)((int)puVar2 + -0x2e) = *(undefined2 *)((int)puVar3 + -0x2e);
            *(undefined2 *)(puVar2 + -0xb) = *(undefined2 *)(puVar3 + -0xb);
            *(undefined2 *)((int)puVar2 + -0x2a) = *(undefined2 *)((int)puVar3 + -0x2a);
            *(undefined1 *)(puVar2 + -10) = *(undefined1 *)(puVar3 + -10);
            *(undefined1 *)((int)puVar2 + -0x27) = *(undefined1 *)((int)puVar3 + -0x27);
            *(undefined1 *)((int)puVar2 + -0x26) = *(undefined1 *)((int)puVar3 + -0x26);
            *(undefined1 *)((int)puVar2 + -0x25) = *(undefined1 *)((int)puVar3 + -0x25);
            *(undefined1 *)(puVar2 + -9) = *(undefined1 *)(puVar3 + -9);
            *(undefined2 *)(puVar2 + -7) = *(undefined2 *)(puVar3 + -7);
            *(undefined2 *)((int)puVar2 + -0x1a) = *(undefined2 *)((int)puVar3 + -0x1a);
            FUN_001da4a8(puVar2 + -6,puVar3 + -6);
            FUN_001da4a8(puVar2 + -5,puVar3 + -5);
            FUN_0006c618(puVar2 + -4,puVar3 + -4);
            *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(puVar3 + -1);
            *(undefined1 *)((int)puVar2 + -3) = *(undefined1 *)((int)puVar3 + -3);
            *(undefined1 *)((int)puVar2 + -2) = *(undefined1 *)((int)puVar3 + -2);
            puVar2[-8] = puVar3[-8];
            puVar15 = local_54;
          }
        }
        if (puVar10 != puVar15) {
          *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar15 + 1);
          *(undefined1 *)((int)puVar10 + 5) = *(undefined1 *)((int)puVar15 + 5);
          puVar10[2] = local_8c;
          *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar15 + 3);
          *(undefined2 *)((int)puVar10 + 0xe) = *(undefined2 *)((int)puVar15 + 0xe);
          *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar15 + 4);
          *(undefined2 *)((int)puVar10 + 0x12) = *(undefined2 *)((int)puVar15 + 0x12);
          *(undefined1 *)(puVar10 + 5) = *(undefined1 *)(puVar15 + 5);
          *(undefined1 *)((int)puVar10 + 0x15) = *(undefined1 *)((int)puVar15 + 0x15);
          *(undefined1 *)((int)puVar10 + 0x16) = *(undefined1 *)((int)puVar15 + 0x16);
          *(undefined1 *)((int)puVar10 + 0x17) = *(undefined1 *)((int)puVar15 + 0x17);
          *(undefined1 *)(puVar10 + 6) = *(undefined1 *)(puVar15 + 6);
          *(undefined2 *)(puVar10 + 8) = *(undefined2 *)(puVar15 + 8);
          *(undefined2 *)((int)puVar10 + 0x22) = *(undefined2 *)((int)puVar15 + 0x22);
          FUN_001da4a8(puVar10 + 9,puVar15 + 9);
          FUN_001da4a8(puVar10 + 10,puVar15 + 10);
          FUN_0006c618(puVar10 + 0xb,puVar15 + 0xb);
          *(undefined1 *)(puVar10 + 0xe) = *(undefined1 *)(puVar15 + 0xe);
          *(undefined1 *)((int)puVar10 + 0x39) = *(undefined1 *)((int)puVar15 + 0x39);
          *(undefined1 *)((int)puVar10 + 0x3a) = *(undefined1 *)((int)puVar15 + 0x3a);
          puVar10[7] = local_78;
        }
      }
      else {
        iVar11 = (int)((longlong)(int)uVar13 * (longlong)DAT_000e12e0 + ((ulonglong)uVar13 << 0x20)
                      >> 0x20);
        uVar13 = (iVar11 >> 5) - (iVar11 >> 0x1f);
        uVar28 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        local_48 = uVar13 + 1;
        if (uVar13 + 1 <= uVar28) {
          local_48 = uVar28;
        }
        iVar17 = FUN_0010f82c(local_48 * 0x3c,0);
        iVar11 = iVar17;
        for (puVar15 = (undefined4 *)*piVar22; puVar15 != puVar10; puVar15 = puVar15 + 0xf) {
          if (iVar11 != 0) {
            FUN_000e82c8(iVar11,puVar15);
          }
          iVar11 = iVar11 + 0x3c;
        }
        lVar1 = (longlong)((int)puVar10 - *piVar22) * (longlong)DAT_000e12e0 +
                ((ulonglong)(uint)((int)puVar10 - *piVar22) << 0x20);
        iVar11 = (int)((ulonglong)lVar1 >> 0x20);
        iVar11 = iVar17 + ((iVar11 >> 5) - (iVar11 >> 0x1f)) * 0x3c;
        if (iVar11 != 0) {
          FUN_000e82c8(iVar11,local_54,(int)lVar1);
        }
        puVar15 = (undefined4 *)piVar9[0x13];
        iVar11 = (int)((longlong)((int)puVar10 - *piVar22) * (longlong)DAT_000e12e0 +
                       ((ulonglong)(uint)((int)puVar10 - *piVar22) << 0x20) >> 0x20);
        iVar11 = iVar17 + ((iVar11 >> 5) - (iVar11 >> 0x1f)) * 0x3c;
        for (; puVar10 != puVar15; puVar10 = puVar10 + 0xf) {
          iVar11 = iVar11 + 0x3c;
          if (iVar11 != 0) {
            FUN_000e82c8(iVar11,puVar10);
          }
        }
        puVar10 = (undefined4 *)*piVar22;
        puVar15 = (undefined4 *)piVar9[0x13];
        uVar13 = (int)puVar15 - (int)puVar10;
        iVar11 = (int)((longlong)(int)uVar13 * (longlong)DAT_000e12e0 + ((ulonglong)uVar13 << 0x20)
                      >> 0x20);
        for (; puVar10 != puVar15; puVar10 = puVar10 + 0xf) {
          (**(code **)*puVar10)(puVar10);
        }
        uVar13 = piVar9[0x14] - *piVar22;
        lVar1 = (longlong)(int)uVar13 * (longlong)DAT_000e12e0 + ((ulonglong)uVar13 << 0x20);
        iVar18 = (int)((ulonglong)lVar1 >> 0x20);
        FUN_0010fa20(*piVar22,(iVar18 >> 5) - (iVar18 >> 0x1f),0,(int)lVar1);
        *piVar22 = iVar17;
        piVar9[0x13] = iVar17 + ((iVar11 >> 5) - (iVar11 >> 0x1f)) * 0x3c + 0x3c;
        piVar9[0x14] = iVar17 + local_48 * 0x3c;
      }
    }
    else {
      piVar9[0x13] = (int)(puVar10 + 0xf);
      if (puVar10 != (undefined4 *)0x0) {
        FUN_000e82c8();
      }
    }
    local_94 = local_40;
    FUN_0010fa20(local_68,(int)(local_60 - local_68) >> 1,0);
    iVar11 = FUN_001da44c(&local_6c);
    FUN_001da44c(iVar11 + -4);
    puVar10 = (undefined4 *)piVar9[0x20];
    piVar22 = piVar9 + 0x1f;
    if (puVar10 == (undefined4 *)piVar9[0x21]) {
      uVar13 = (int)puVar10 - *piVar22 >> 2;
      if (uVar13 < (uint)(piVar9[0x21] - *piVar22 >> 2)) {
        piVar9[0x20] = (int)(puVar10 + 1);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = puVar10[-1];
        }
        *puVar10 = 0;
      }
      else {
        local_50 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_50 < uVar13 + 1) {
          local_50 = uVar13 + 1;
        }
        puVar14 = (undefined4 *)FUN_0010f82c(local_50 << 2,0);
        puVar16 = puVar14;
        for (puVar15 = (undefined4 *)*piVar22; puVar15 != puVar10; puVar15 = puVar15 + 1) {
          if (puVar16 != (undefined4 *)0x0) {
            *puVar16 = *puVar15;
          }
          puVar16 = puVar16 + 1;
        }
        puVar15 = (undefined4 *)(((int)puVar10 - *piVar22 & 0xfffffffcU) + (int)puVar14);
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = 0;
        }
        puVar16 = (undefined4 *)piVar9[0x20];
        puVar15 = (undefined4 *)(((int)puVar10 - *piVar22 & 0xfffffffcU) + (int)puVar14);
        for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
          puVar15 = puVar15 + 1;
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = *puVar10;
          }
        }
        iVar11 = *piVar22;
        iVar17 = piVar9[0x20];
        FUN_0010fa20(iVar11,piVar9[0x21] - iVar11 >> 2,0);
        piVar9[0x21] = (int)(puVar14 + local_50);
        piVar9[0x20] = (int)(puVar14 + (iVar17 - iVar11 >> 2) + 1);
        *piVar22 = (int)puVar14;
      }
    }
    else {
      piVar9[0x20] = (int)(puVar10 + 1);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0;
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 0x10);
  uVar19 = 0;
  local_38 = DAT_000e12e4;
  do {
    local_84 = CONCAT22((short)((uint)local_84 >> 0x10),0x100);
    local_70 = 0;
    local_88 = local_38;
    local_7c = (local_7c >> 8 & 0xff) << 8;
    local_78 = local_78 & 0xffff0000;
    local_74 = 0;
    local_6c = 0;
    local_64 = local_64 & 0xffff0000;
    local_60 = uVar8;
    local_54 = (undefined4 *)0x0;
    piVar22 = piVar9 + 0x15;
    local_5c = 0;
    local_58 = local_58 & 0xffffff00;
    local_50 = 0;
    local_4c = 0;
    local_68 = 0;
    puVar12 = (uint *)piVar9[0x16];
    local_80 = uVar19;
    if (puVar12 == (uint *)piVar9[0x17]) {
      uVar13 = (int)puVar12 - *piVar22 >> 6;
      local_90 = &local_88;
      if (uVar13 < (uint)(piVar9[0x17] - *piVar22 >> 6)) {
        piVar9[0x16] = (int)(puVar12 + 0x10);
        if (puVar12 != (uint *)0x0) {
          FUN_000e8110(puVar12,puVar12 + -0x10);
        }
        puVar20 = puVar12;
        puVar23 = puVar12 + -0x10;
        puVar25 = local_90;
        while (puVar5 = puVar23, puVar4 = puVar20, local_90 = puVar25, puVar12 != puVar5) {
          puVar20 = puVar4 + -0x10;
          puVar23 = puVar5 + -0x10;
          if (puVar20 != puVar23) {
            *(char *)(puVar4 + -0xf) = (char)puVar5[-0xf];
            *(undefined1 *)((int)puVar4 + -0x3b) = *(undefined1 *)((int)puVar5 + -0x3b);
            puVar4[-0xe] = puVar5[-0xe];
            *(char *)(puVar4 + -0xd) = (char)puVar5[-0xd];
            *(undefined2 *)((int)puVar4 + -0x32) = *(undefined2 *)((int)puVar5 + -0x32);
            *(short *)(puVar4 + -0xc) = (short)puVar5[-0xc];
            puVar4[-0xb] = puVar5[-0xb];
            puVar4[-10] = puVar5[-10];
            puVar4[-9] = puVar5[-9];
            *(short *)(puVar4 + -7) = (short)puVar5[-7];
            FUN_001da4a8(puVar4 + -6,puVar5 + -6);
            *(char *)(puVar4 + -5) = (char)puVar5[-5];
            *(undefined1 *)((int)puVar4 + -0x13) = *(undefined1 *)((int)puVar5 + -0x13);
            *(undefined1 *)((int)puVar4 + -0x12) = *(undefined1 *)((int)puVar5 + -0x12);
            *(undefined1 *)((int)puVar4 + -0x11) = *(undefined1 *)((int)puVar5 + -0x11);
            *(char *)(puVar4 + -4) = (char)puVar5[-4];
            FUN_0006c618(puVar4 + -3,puVar5 + -3);
            puVar4[-8] = puVar5[-8];
            puVar25 = local_90;
          }
        }
        if (puVar12 != puVar25) {
          *(char *)(puVar12 + 1) = (char)puVar25[1];
          *(undefined1 *)((int)puVar12 + 5) = *(undefined1 *)((int)puVar25 + 5);
          puVar12[2] = local_80;
          *(char *)(puVar12 + 3) = (char)puVar25[3];
          *(undefined2 *)((int)puVar12 + 0xe) = *(undefined2 *)((int)puVar25 + 0xe);
          *(short *)(puVar12 + 4) = (short)puVar25[4];
          puVar12[5] = local_74;
          puVar12[6] = local_70;
          puVar12[7] = local_6c;
          *(short *)(puVar12 + 9) = (short)puVar25[9];
          FUN_001da4a8(puVar12 + 10,puVar25 + 10);
          *(char *)(puVar12 + 0xb) = (char)puVar25[0xb];
          *(undefined1 *)((int)puVar12 + 0x2d) = *(undefined1 *)((int)puVar25 + 0x2d);
          *(undefined1 *)((int)puVar12 + 0x2e) = *(undefined1 *)((int)puVar25 + 0x2e);
          *(undefined1 *)((int)puVar12 + 0x2f) = *(undefined1 *)((int)puVar25 + 0x2f);
          *(char *)(puVar12 + 0xc) = (char)puVar25[0xc];
          FUN_0006c618(puVar12 + 0xd,puVar25 + 0xd);
          puVar12[8] = local_68;
        }
      }
      else {
        local_48 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_48 < uVar13 + 1) {
          local_48 = uVar13 + 1;
        }
        iVar17 = FUN_0010f82c(local_48 << 6,0);
        iVar11 = iVar17;
        for (puVar25 = (uint *)*piVar22; puVar25 != puVar12; puVar25 = puVar25 + 0x10) {
          if (iVar11 != 0) {
            FUN_000e8110(iVar11,puVar25);
          }
          iVar11 = iVar11 + 0x40;
        }
        iVar11 = ((int)puVar12 - *piVar22 & 0xffffffc0U) + iVar17;
        if (iVar11 != 0) {
          FUN_000e8110(iVar11,local_90);
        }
        puVar25 = (uint *)piVar9[0x16];
        iVar11 = ((int)puVar12 - *piVar22 & 0xffffffc0U) + iVar17;
        for (; puVar12 != puVar25; puVar12 = puVar12 + 0x10) {
          iVar11 = iVar11 + 0x40;
          if (iVar11 != 0) {
            FUN_000e8110(iVar11,puVar12);
          }
        }
        puVar15 = (undefined4 *)piVar9[0x16];
        puVar10 = (undefined4 *)*piVar22;
        iVar11 = (int)puVar15 - (int)puVar10;
        for (; puVar10 != puVar15; puVar10 = puVar10 + 0x10) {
          (**(code **)*puVar10)(puVar10);
        }
        FUN_0010fa20(*piVar22,piVar9[0x17] - *piVar22 >> 6,0);
        piVar9[0x17] = iVar17 + local_48 * 0x40;
        piVar9[0x16] = iVar17 + (iVar11 >> 6) * 0x40 + 0x40;
        *piVar22 = iVar17;
      }
    }
    else {
      piVar9[0x16] = (int)(puVar12 + 0x10);
      if (puVar12 != (uint *)0x0) {
        FUN_000e8110();
      }
    }
    local_88 = local_38;
    FUN_0010fa20(local_54,local_4c - (int)local_54 >> 1,0);
    FUN_001da44c(&local_60);
    puVar10 = (undefined4 *)piVar9[0x23];
    piVar22 = piVar9 + 0x22;
    if (puVar10 == (undefined4 *)piVar9[0x24]) {
      uVar13 = (int)puVar10 - *piVar22 >> 2;
      if (uVar13 < (uint)(piVar9[0x24] - *piVar22 >> 2)) {
        piVar9[0x23] = (int)(puVar10 + 1);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = puVar10[-1];
        }
        *puVar10 = 0;
      }
      else {
        local_8c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_8c < uVar13 + 1) {
          local_8c = uVar13 + 1;
        }
        puVar14 = (undefined4 *)FUN_0010f82c(local_8c << 2,0);
        puVar16 = puVar14;
        for (puVar15 = (undefined4 *)*piVar22; puVar15 != puVar10; puVar15 = puVar15 + 1) {
          if (puVar16 != (undefined4 *)0x0) {
            *puVar16 = *puVar15;
          }
          puVar16 = puVar16 + 1;
        }
        puVar15 = (undefined4 *)(((int)puVar10 - *piVar22 & 0xfffffffcU) + (int)puVar14);
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = 0;
        }
        puVar16 = (undefined4 *)piVar9[0x23];
        puVar15 = (undefined4 *)(((int)puVar10 - *piVar22 & 0xfffffffcU) + (int)puVar14);
        for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
          puVar15 = puVar15 + 1;
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = *puVar10;
          }
        }
        iVar11 = *piVar22;
        iVar17 = piVar9[0x23];
        FUN_0010fa20(iVar11,piVar9[0x24] - iVar11 >> 2,0);
        *piVar22 = (int)puVar14;
        piVar9[0x23] = (int)(puVar14 + (iVar17 - iVar11 >> 2) + 1);
        piVar9[0x24] = (int)(puVar14 + local_8c);
      }
    }
    else {
      piVar9[0x23] = (int)(puVar10 + 1);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0;
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 0x10);
  uVar19 = 0;
  local_30 = DAT_000e12e8;
  do {
    local_9c = 0;
    local_9b = 2;
    local_94 = 0;
    local_80 = local_80 & 0xffff0000;
    local_a0 = local_30;
    local_9a = (undefined1)uVar19;
    local_98 = 0;
    local_90 = (uint *)0x0;
    local_8c = 0;
    local_88 = 0;
    local_70 = 0;
    local_7c = uVar8;
    local_78 = uVar8;
    local_74 = uVar8;
    local_6c = 0;
    local_5c = 0;
    piVar22 = piVar9 + 0x18;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_84 = 0;
    puVar21 = (undefined1 *)piVar9[0x19];
    if (puVar21 == (undefined1 *)piVar9[0x1a]) {
      iVar17 = (int)((ulonglong)((longlong)DAT_000e12ec * (longlong)(piVar9[0x1a] - *piVar22)) >>
                    0x20);
      iVar11 = (int)((ulonglong)((longlong)DAT_000e12ec * (longlong)((int)puVar21 - *piVar22)) >>
                    0x20);
      uVar13 = (iVar11 >> 5) - (iVar11 >> 0x1f);
      if (uVar13 < (uint)((iVar17 >> 5) - (iVar17 >> 0x1f))) {
        piVar9[0x19] = (int)(puVar21 + 0x4c);
        local_44 = (undefined1 *)&local_a0;
        if (puVar21 != (undefined1 *)0x0) {
          local_44 = (undefined1 *)&local_a0;
          FUN_0010ddec(puVar21,puVar21 + -0x4c);
        }
        puVar26 = puVar21;
        puVar24 = puVar21 + -0x4c;
        puVar27 = local_44;
        while (puVar7 = puVar24, puVar6 = puVar26, local_44 = puVar27, puVar21 != puVar7) {
          puVar26 = puVar6 + -0x4c;
          puVar24 = puVar7 + -0x4c;
          if (puVar26 != puVar24) {
            puVar6[-0x48] = puVar7[-0x48];
            puVar6[-0x47] = puVar7[-0x47];
            puVar6[-0x46] = puVar7[-0x46];
            FUN_001dd810(puVar6 + -0x44,puVar7 + -0x44);
            *(undefined2 *)(puVar6 + -0x38) = *(undefined2 *)(puVar7 + -0x38);
            *(undefined2 *)(puVar6 + -0x36) = *(undefined2 *)(puVar7 + -0x36);
            *(undefined4 *)(puVar6 + -0x34) = *(undefined4 *)(puVar7 + -0x34);
            *(undefined2 *)(puVar6 + -0x2c) = *(undefined2 *)(puVar7 + -0x2c);
            FUN_001da4a8(puVar6 + -0x28,puVar7 + -0x28);
            FUN_001da4a8(puVar6 + -0x24,puVar7 + -0x24);
            FUN_001da4a8(puVar6 + -0x20,puVar7 + -0x20);
            *(undefined4 *)(puVar6 + -0x1c) = *(undefined4 *)(puVar7 + -0x1c);
            puVar6[-0x18] = puVar7[-0x18];
            puVar6[-0x17] = puVar7[-0x17];
            puVar6[-0x16] = puVar7[-0x16];
            puVar6[-0x15] = puVar7[-0x15];
            FUN_0006c618(puVar6 + -0x10,puVar7 + -0x10);
            *(undefined4 *)(puVar6 + -4) = *(undefined4 *)(puVar7 + -4);
            *(undefined4 *)(puVar6 + -0x14) = *(undefined4 *)(puVar7 + -0x14);
            *(undefined4 *)(puVar6 + -0x30) = *(undefined4 *)(puVar7 + -0x30);
            puVar27 = local_44;
          }
        }
        if (puVar21 != puVar27) {
          puVar21[4] = puVar27[4];
          puVar21[5] = puVar27[5];
          puVar21[6] = puVar27[6];
          FUN_001dd810(puVar21 + 8,puVar27 + 8);
          *(undefined2 *)(puVar21 + 0x14) = *(undefined2 *)(puVar27 + 0x14);
          *(undefined2 *)(puVar21 + 0x16) = *(undefined2 *)(puVar27 + 0x16);
          *(uint *)(puVar21 + 0x18) = local_88;
          *(undefined2 *)(puVar21 + 0x20) = *(undefined2 *)(puVar27 + 0x20);
          FUN_001da4a8(puVar21 + 0x24,puVar27 + 0x24);
          FUN_001da4a8(puVar21 + 0x28,puVar27 + 0x28);
          FUN_001da4a8(puVar21 + 0x2c,puVar27 + 0x2c);
          *(uint *)(puVar21 + 0x30) = local_70;
          puVar21[0x34] = puVar27[0x34];
          puVar21[0x35] = puVar27[0x35];
          puVar21[0x36] = puVar27[0x36];
          puVar21[0x37] = puVar27[0x37];
          FUN_0006c618(puVar21 + 0x3c,puVar27 + 0x3c);
          *(uint *)(puVar21 + 0x48) = local_58;
          *(uint *)(puVar21 + 0x38) = local_68;
          *(undefined4 *)(puVar21 + 0x1c) = local_84;
        }
      }
      else {
        local_38 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_38 < uVar13 + 1) {
          local_38 = uVar13 + 1;
        }
        local_44 = (undefined1 *)&local_a0;
        iVar17 = FUN_0010f82c(local_38 * 0x4c,0);
        iVar11 = iVar17;
        for (puVar27 = (undefined1 *)*piVar22; puVar27 != puVar21; puVar27 = puVar27 + 0x4c) {
          if (iVar11 != 0) {
            FUN_0010ddec(iVar11,puVar27);
          }
          iVar11 = iVar11 + 0x4c;
        }
        iVar11 = (int)((ulonglong)((longlong)DAT_000e12ec * (longlong)((int)puVar21 - *piVar22)) >>
                      0x20);
        iVar11 = iVar17 + ((iVar11 >> 5) - (iVar11 >> 0x1f)) * 0x4c;
        if (iVar11 != 0) {
          FUN_0010ddec(iVar11,local_44);
        }
        puVar27 = (undefined1 *)piVar9[0x19];
        iVar11 = (int)((ulonglong)((longlong)DAT_000e12ec * (longlong)((int)puVar21 - *piVar22)) >>
                      0x20);
        iVar11 = iVar17 + ((iVar11 >> 5) - (iVar11 >> 0x1f)) * 0x4c;
        for (; puVar21 != puVar27; puVar21 = puVar21 + 0x4c) {
          iVar11 = iVar11 + 0x4c;
          if (iVar11 != 0) {
            FUN_0010ddec(iVar11,puVar21);
          }
        }
        puVar10 = (undefined4 *)*piVar22;
        puVar15 = (undefined4 *)piVar9[0x19];
        iVar11 = (int)((ulonglong)((longlong)DAT_000e12ec * (longlong)((int)puVar15 - (int)puVar10))
                      >> 0x20);
        for (; puVar10 != puVar15; puVar10 = puVar10 + 0x13) {
          (**(code **)*puVar10)(puVar10);
        }
        lVar1 = (longlong)DAT_000e12ec * (longlong)(piVar9[0x1a] - *piVar22);
        iVar18 = (int)((ulonglong)lVar1 >> 0x20);
        FUN_0010fa20(*piVar22,(iVar18 >> 5) - (iVar18 >> 0x1f),0,(int)lVar1);
        *piVar22 = iVar17;
        piVar9[0x19] = iVar17 + ((iVar11 >> 5) - (iVar11 >> 0x1f)) * 0x4c + 0x4c;
        piVar9[0x1a] = iVar17 + local_38 * 0x4c;
      }
    }
    else {
      piVar9[0x19] = (int)(puVar21 + 0x4c);
      if (puVar21 != (undefined1 *)0x0) {
        FUN_0010ddec();
      }
    }
    local_a0 = local_30;
    FUN_0010fa20(local_64,(int)(local_5c - local_64) >> 1,0);
    iVar11 = FUN_001da44c(&local_74);
    iVar11 = FUN_001da44c(iVar11 + -4);
    iVar11 = FUN_001da44c(iVar11 + -4);
    FUN_0010fa20(*(int *)(iVar11 + -0x1c),*(int *)(iVar11 + -0x14) - *(int *)(iVar11 + -0x1c) >> 1,0
                );
    piVar22 = piVar9 + 0x25;
    puVar10 = (undefined4 *)piVar9[0x26];
    if (puVar10 == (undefined4 *)piVar9[0x27]) {
      uVar13 = (int)puVar10 - *piVar22 >> 2;
      if (uVar13 < (uint)(piVar9[0x27] - *piVar22 >> 2)) {
        piVar9[0x26] = (int)(puVar10 + 1);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = puVar10[-1];
        }
        *puVar10 = 0;
      }
      else {
        uVar28 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (uVar28 < uVar13 + 1) {
          uVar28 = uVar13 + 1;
        }
        puVar14 = (undefined4 *)FUN_0010f82c(uVar28 << 2,0);
        puVar16 = puVar14;
        for (puVar15 = (undefined4 *)*piVar22; puVar15 != puVar10; puVar15 = puVar15 + 1) {
          if (puVar16 != (undefined4 *)0x0) {
            *puVar16 = *puVar15;
          }
          puVar16 = puVar16 + 1;
        }
        puVar15 = (undefined4 *)(((int)puVar10 - *piVar22 & 0xfffffffcU) + (int)puVar14);
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = 0;
        }
        puVar16 = (undefined4 *)piVar9[0x26];
        puVar15 = (undefined4 *)(((int)puVar10 - *piVar22 & 0xfffffffcU) + (int)puVar14);
        for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
          puVar15 = puVar15 + 1;
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = *puVar10;
          }
        }
        iVar11 = *piVar22;
        iVar17 = piVar9[0x26];
        FUN_0010fa20(iVar11,piVar9[0x27] - iVar11 >> 2,0);
        piVar9[0x27] = (int)(puVar14 + uVar28);
        piVar9[0x26] = (int)(puVar14 + (iVar17 - iVar11 >> 2) + 1);
        *piVar22 = (int)puVar14;
      }
    }
    else {
      piVar9[0x26] = (int)(puVar10 + 1);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0;
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 0x10);
  puVar10 = (undefined4 *)FUN_0006120c();
  (**(code **)*puVar10)(puVar10,piVar9 + 0x11);
  return piVar9;
}

