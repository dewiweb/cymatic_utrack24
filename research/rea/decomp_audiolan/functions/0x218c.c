// rea decompile_all
// name: FUN_0000218c
// address: 0x218c
// body: available
// range: 0x218c-0x224b inclusive
// range: 0x2a58-0x2a5f inclusive
// range: 0x2acc-0x2ad3 inclusive
// range: 0x2bb8-0x2bbf inclusive
// range: 0x2c30-0x2c37 inclusive
// range: 0x2ca8-0x2caf inclusive
// range: 0x432c-0x4333 inclusive
// range: 0x43cc-0x43d3 inclusive
// range: 0x4bd0-0x4bd7 inclusive
// range: 0x1a414-0x1a417 inclusive
// range: 0x1a41c-0x1a41f inclusive
// range: 0x1a424-0x1a427 inclusive
// range: 0x1a42c-0x1a42f inclusive
// range: 0x1a434-0x1a437 inclusive
// range: 0x1a47c-0x1a47f inclusive
// range: 0x1e433c-0x1e4343 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2c34 to 0x2c7c FUN_00002c7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00002cf4) */
/* WARNING: Removing unreachable block (ram,0x00002cf8) */

undefined4 FUN_0000218c(uint *param_1,uint param_2,uint *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char extraout_r1;
  char extraout_r1_00;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint extraout_r1_01;
  uint extraout_r1_02;
  char extraout_r2;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  longlong lVar23;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  char acStack_40 [32];
  uint *puStack_20;
  uint uStack_1c;
  uint *puStack_18;
  
  if (param_2 == 0x6e) {
    param_3 = (uint *)*param_3;
    uVar19 = *param_1;
    uVar16 = param_1[8];
    if ((int)(uVar19 << 0x15) < 0) {
      *(char *)param_3 = (char)uVar16;
    }
    else if ((int)(uVar19 << 0x17) < 0) {
      *(short *)param_3 = (short)uVar16;
    }
    else if ((int)(uVar19 << 0x18) < 0) {
      *param_3 = uVar16;
      param_3[1] = (int)uVar16 >> 0x1f;
    }
    else {
      *param_3 = uVar16;
    }
    return 1;
  }
  if (param_2 == 0x70) {
    uVar16 = *param_3;
    *param_1 = *param_1 | 0x20;
    param_1[7] = 8;
    puStack_18 = (uint *)0x0;
    if ((int)(*param_1 << 0x14) < 0) {
      puVar17 = &LAB_00002cc0 + DAT_00002d44;
    }
    else {
      puVar17 = (undefined1 *)(DAT_00002d44 + 0x2cd4);
    }
    iVar3 = 0;
    for (; uVar16 != 0; uVar16 = uVar16 >> 4) {
      *(undefined1 *)((int)param_1 + iVar3 + 0x24) = puVar17[uVar16 & 0xf];
      iVar3 = iVar3 + 1;
    }
    bVar22 = (int)(*param_1 << 0x1c) < 0;
    if (bVar22) {
      puVar17 = puVar17 + 0x10;
    }
    uVar6 = FUN_00003e1c(param_1,iVar3,puVar17,bVar22);
    return uVar6;
  }
  if (((param_2 == 0x66) || (param_2 == 0x65)) || (param_2 == 0x67)) {
                    /* WARNING: Could not recover jumptable at 0x0001a47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*DAT_0001a480)();
    return uVar6;
  }
  if (param_2 != 0x61) {
    if ((bool)((byte)(*param_1 >> 7) & 1)) {
      param_2 = param_2 | 0x80;
    }
    puStack_20 = param_1;
    uStack_1c = param_2;
    puStack_18 = param_3;
    if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
      uVar6 = 0;
      puVar14 = (undefined *)0x2abc;
      if (param_2 == 0x75) {
        iVar3 = FUN_000029f0(*param_3,param_1,param_3,*param_1 >> 8);
      }
      else {
        iVar3 = FUN_000029da();
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          puVar14 = &DAT_00002ac0;
        }
        else if ((int)(*puStack_20 << 0x1e) < 0) {
          puVar14 = (undefined *)0x2ac4;
        }
        else {
          if (-1 < (int)(*puStack_20 << 0x1d)) goto LAB_00002a96;
          puVar14 = (undefined *)0x2ac8;
        }
        uVar6 = 1;
      }
LAB_00002a96:
      puVar4 = puStack_20;
      iVar11 = 0;
      while (iVar3 != 0) {
        iVar3 = FUN_00004b58();
        *(char *)((int)puVar4 + iVar11 + 0x24) = extraout_r1 + '0';
        iVar11 = iVar11 + 1;
      }
      uVar6 = FUN_00003e1c(puStack_20,iVar11,puVar14,uVar6);
      return uVar6;
    }
    if (param_2 == 0x6f) {
      uVar6 = FUN_00002c7c();
      return uVar6;
    }
    if (param_2 == 0x78) {
                    /* WARNING: Could not recover jumptable at 0x0001a414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*DAT_0001a418)();
      return uVar6;
    }
    if (((param_2 != 0xe9) && (param_2 != 0xe4)) && (param_2 != 0xf5)) {
      if (param_2 == 0xef) {
                    /* WARNING: Could not recover jumptable at 0x0001a41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_0001a420)();
        return uVar6;
      }
      if (param_2 == 0xf8) {
                    /* WARNING: Could not recover jumptable at 0x0001a424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_0001a428)();
        return uVar6;
      }
      if ((bool)((byte)(*param_1 >> 6) & 1)) {
        param_2 = param_2 | 0x80;
      }
      if (param_2 == 99) {
        *(char *)(param_1 + 9) = (char)*param_3;
        *(undefined1 *)((int)param_1 + 0x25) = 0;
        uVar6 = FUN_00004334(param_1,param_1 + 9,1,*param_1 >> 7);
        return uVar6;
      }
      if (param_2 == 0x73) {
                    /* WARNING: Could not recover jumptable at 0x0001a42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_0001a430)();
        return uVar6;
      }
      if (param_2 != 0xe3) {
        if (param_2 != 0xf3) {
          return 0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001a434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_0001a438)();
        return uVar6;
      }
      *(short *)(param_1 + 9) = (short)*param_3;
      *(undefined2 *)((int)param_1 + 0x26) = 0;
      uVar6 = FUN_000043d4(param_1,param_1 + 9,1);
      return uVar6;
    }
    uVar6 = 0;
    puVar14 = &DAT_00002c20;
    piVar10 = (int *)((int)param_3 + 7U & 0xfffffff8);
    iVar3 = *piVar10;
    iVar11 = piVar10[1];
    if (param_2 != 0xf5) {
      if (iVar11 < 0) {
        bVar22 = iVar3 != 0;
        iVar3 = -iVar3;
        iVar11 = -(uint)bVar22 - iVar11;
        puVar14 = &DAT_00002c24;
      }
      else if ((int)(*param_1 << 0x1e) < 0) {
        puVar14 = (undefined *)0x2c28;
      }
      else {
        if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00002bf6;
        puVar14 = &DAT_00002c2c;
      }
      uVar6 = 1;
    }
LAB_00002bf6:
    lVar23 = CONCAT44(iVar11,iVar3);
    iVar3 = 0;
    while (lVar23 != 0) {
      lVar23 = FUN_00003d18();
      *(char *)((int)param_1 + iVar3 + 0x24) = extraout_r2 + '0';
      iVar3 = iVar3 + 1;
    }
    uVar6 = FUN_00003e1c(puStack_20,iVar3,puVar14,uVar6);
    return uVar6;
  }
  puVar4 = (uint *)((int)param_3 + 7U & 0xfffffff8);
  puVar17 = auStack_48;
  uVar16 = puVar4[1];
  uVar19 = *puVar4;
  iVar3 = FUN_0016dd0c(uVar19,uVar16);
  if ((int)uVar16 < 0) {
    iVar11 = 0x2d;
  }
  else if ((int)(*param_1 << 0x1e) < 0) {
    iVar11 = 0x2b;
  }
  else {
    iVar11 = ((*param_1 & 7) >> 2) << 5;
  }
  auStack_48[0] = (char)iVar11;
  puStack_20 = (uint *)(uint)(iVar11 != 0);
  if ((iVar3 == 3) || (6 < iVar3)) {
    FUN_00004ea8(param_1,0x61);
    return 2;
  }
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar15 = param_1[7];
  }
  else {
    uVar15 = 0xd;
  }
  uStack_44 = (uVar16 & 0x7fffffff) >> 0x14;
  if ((int)uVar15 < 0xd) {
    uStack_1c = uVar16 >> 0x14;
    uVar5 = FUN_001e4334(0);
    uVar5 = uVar5 & 0xc00000;
    if ((int)uVar16 < 0) {
      uVar5 = (uVar5 * 5) / 2 & 0xc00000;
    }
    uVar5 = (int)uVar5 >> 0x16;
    if (1 < uVar5) {
      uVar5 = 0xffffffff;
    }
    uVar7 = uVar15 * 4;
    uVar13 = 0;
    if (uVar7 < 0x18) {
      uVar20 = 0x100000 >> (uVar7 & 0xff);
    }
    else {
      uVar20 = 0;
      uVar13 = 0x10000000 >> (uVar7 - 0x18 & 0xff);
    }
    uVar8 = uVar7 + 0xc;
    uVar12 = uVar16;
    if (0x1f < uVar8) {
      uVar8 = uVar7 - 0x14;
      uVar12 = uVar19;
    }
    uVar12 = uVar12 << (uVar8 & 0xff);
    if ((int)uVar5 < 1) {
      if ((uVar5 == 0) && (0x7fffffff < uVar12)) goto LAB_00004cb4;
    }
    else if (uVar12 != 0) {
LAB_00004cb4:
      bVar22 = CARRY4(uVar19,uVar13);
      uVar19 = uVar19 + uVar13;
      uVar16 = uVar16 + uVar20 + (uint)bVar22;
      if ((uVar5 == 0) && (uVar12 == 0x80000000)) {
        uVar19 = uVar19 & ~uVar13;
        uVar16 = uVar16 & ~uVar20;
      }
      if (uVar16 >> 0x14 != uStack_1c) {
        uStack_44 = uStack_44 + 1;
      }
    }
  }
  if ((int)(*param_1 << 0x14) < 0) {
    puVar9 = &LAB_00004ce8 + DAT_00004ea0;
  }
  else {
    puVar9 = (undefined1 *)(DAT_00004ea0 + 0x4cd5);
  }
  auStack_48[(int)puStack_20] = 0x30;
  auStack_48[(int)puStack_20 + 1] = puVar9[0x10];
  puStack_20 = (uint *)((int)puStack_20 + 2);
  if ((int)uStack_44 < 1) {
    acStack_40[0] = '0';
  }
  else {
    acStack_40[0] = '1';
  }
  iVar3 = 1;
  if (uStack_44 == 0) {
    if ((uVar16 & 0x7fffffff) != 0 || uVar19 != 0) {
      uStack_44 = DAT_00004ea4 + 1;
      goto LAB_00004d28;
    }
  }
  else {
    uStack_44 = uStack_44 + DAT_00004ea4;
LAB_00004d28:
  }
  if ((0 < (int)uVar15) || ((int)(*param_1 << 0x1c) < 0)) {
    acStack_40[1] = 0x2e;
    iVar3 = 2;
  }
  iVar21 = 0;
  iVar11 = iVar3;
  do {
    if ((int)uVar15 < 1) break;
    uVar15 = uVar15 - 1;
    acStack_40[iVar11] = puVar9[(uVar16 & 0xfffff) >> 0x10];
    iVar11 = iVar11 + 1;
    iVar21 = iVar21 + 1;
    uVar16 = uVar16 << 4;
  } while (iVar21 < 5);
  iVar21 = 0;
  do {
    if ((int)uVar15 < 1) break;
    uVar16 = uVar19 >> 0x1c;
    uVar19 = uVar19 << 4;
    iVar21 = iVar21 + 1;
    uVar15 = uVar15 - 1;
    acStack_40[iVar11] = puVar9[uVar16];
    iVar11 = iVar11 + 1;
  } while (iVar21 < 8);
  if (-1 < (int)(*param_1 << 0x1a)) {
    for (; (iVar3 < iVar11 && (acStack_40[iVar11 + -1] == '0')); iVar11 = iVar11 + -1) {
    }
    if ((0 < iVar11) && (acStack_40[iVar11 + -1] == '.')) {
      iVar11 = iVar11 + -1;
    }
  }
  if (0 < (int)uVar15) {
    acStack_40[iVar11] = '>';
    iVar11 = iVar11 + 1;
    uVar15 = uVar15 - 1;
  }
  acStack_40[iVar11] = puVar9[0x11];
  if ((int)uStack_44 < 0) {
    acStack_40[iVar11 + 1] = '-';
    uStack_44 = -uStack_44;
  }
  else {
    acStack_40[iVar11 + 1] = '+';
  }
  iVar3 = iVar11 + 2;
  if ((int)uStack_44 < 1000) {
    if (99 < (int)uStack_44) goto LAB_00004dee;
    if ((int)uStack_44 < 10) goto LAB_00004e12;
  }
  else {
    cVar2 = FUN_00003a1c();
    acStack_40[iVar11 + 2] = cVar2 + '0';
    iVar3 = iVar11 + 3;
    uStack_44 = extraout_r1_01;
LAB_00004dee:
    cVar2 = FUN_00003a1c(uStack_44,100);
    acStack_40[iVar3] = cVar2 + '0';
    iVar3 = iVar3 + 1;
    uStack_44 = extraout_r1_02;
  }
  cVar2 = FUN_00003a1c(uStack_44,10);
  acStack_40[iVar3] = cVar2 + '0';
  iVar3 = iVar3 + 1;
LAB_00004e12:
  FUN_00003a1c(uStack_44,10);
  acStack_40[iVar3] = extraout_r1_00 + '0';
  iVar3 = iVar3 + 1;
  param_1[6] = param_1[6] - (iVar3 + uVar15 + (int)puStack_20);
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_0000298c(param_1);
  }
  param_1[8] = param_1[8] + (int)puStack_20;
  while (bVar22 = puStack_20 != (uint *)0x0, puStack_20 = (uint *)((int)puStack_20 + -1), bVar22) {
    uVar1 = *puVar17;
    puVar17 = puVar17 + 1;
    (*(code *)param_1[1])(uVar1,param_1[2]);
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_0000298c(param_1);
  }
  pcVar18 = acStack_40;
  while (bVar22 = iVar3 != 0, iVar3 = iVar3 + -1, bVar22) {
    cVar2 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    if (cVar2 == '>') {
      param_1[8] = param_1[8] + uVar15;
      while (bVar22 = uVar15 != 0, uVar15 = uVar15 - 1, bVar22) {
        (*(code *)param_1[1])(0x30,param_1[2]);
      }
    }
    else {
      (*(code *)param_1[1])(cVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  FUN_000029b8(param_1);
  return 2;
}

