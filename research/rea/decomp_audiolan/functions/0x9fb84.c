// rea decompile_all
// name: FUN_0009fb84
// address: 0x9fb84
// body: available
// range: 0x9fb84-0xa08f3 inclusive
// range: 0xa0934-0xa10f3 inclusive
// range: 0xa111c-0xa14cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0009fb84(int *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *******pppppppiVar3;
  int *******pppppppiVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 **ppuVar10;
  int *******pppppppiVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int ***********pppppppppppiVar15;
  int iVar16;
  undefined1 ***pppuVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int **********ppppppppppiVar22;
  int ***********pppppppppppiVar23;
  int *unaff_r10;
  int ************ppppppppppppiVar24;
  int *unaff_r11;
  bool bVar25;
  int ***********local_158;
  int ************local_154;
  undefined4 local_150;
  int ***********local_14c;
  int ***********local_148;
  undefined4 local_144;
  int **********local_140;
  undefined4 local_13c;
  int ***********local_138;
  undefined4 local_134;
  undefined4 local_130;
  int ***********local_12c;
  int *******local_128;
  uint local_124;
  int local_120;
  undefined4 local_11c;
  int local_118;
  undefined1 *local_114;
  undefined1 *local_110;
  int local_10c;
  int *******local_108;
  undefined1 local_104;
  undefined1 local_103;
  int **********local_100;
  undefined4 local_fc;
  int local_f8;
  int ************local_f4;
  int ************local_f0;
  int ************local_ec;
  int *******local_e8;
  undefined2 local_e4 [2];
  int local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 *local_d4;
  undefined1 *local_d0;
  undefined1 *local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  int local_ac;
  undefined1 local_a8;
  uint local_a4 [2];
  int ************local_9c;
  int ************local_98;
  int *******local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int ************local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  int **********local_78;
  int ************local_74;
  undefined1 **local_70;
  uint local_6c;
  int ************local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int ************local_40;
  int ************local_3c;
  uint local_34;
  uint local_30;
  undefined1 **local_2c [2];
  
  iVar5 = 0;
  if (param_1[0x4d] != 0) {
    iVar5 = param_1[0x4e];
  }
  uVar6 = DAT_000a08f4;
  if (param_1[0x4d] == 0 || iVar5 == 0) {
LAB_0009fce8:
    FUN_000028a4(uVar6);
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0xbc))(param_1);
  iVar5 = FUN_0004669c(uVar6,0);
  pppppppiVar3 = DAT_000a0914;
  pppppppiVar11 = DAT_000a0910;
  uVar6 = DAT_000a08f8;
  if (iVar5 == 0) goto LAB_0009fce8;
  local_9c = *(int *************)(param_2 + 4);
  piVar21 = *(int **)param_1[0x5a];
  bVar25 = piVar21 != (int *)param_1[0x5a];
  if (bVar25) {
    unaff_r11 = &local_58;
  }
  local_ec = (int ************)DAT_000a08fc;
  if (bVar25) {
    unaff_r10 = &local_50;
  }
  local_64 = (int ************)DAT_000a0900;
  local_f0 = (int ************)DAT_000a0904;
  local_74 = (int ************)DAT_000a0908;
  local_80 = (int ************)DAT_000a090c;
  if (bVar25) {
LAB_0009fc24:
    iVar5 = piVar21[0x16];
    iVar16 = *(int *)(piVar21[0x16] + 4);
    while (iVar16 != 0) {
      if (*(int *************)(iVar16 + 0x10) < local_9c) {
        iVar16 = *(int *)(iVar16 + 0xc);
      }
      else {
        iVar5 = iVar16;
        iVar16 = *(int *)(iVar16 + 8);
      }
    }
    iVar16 = piVar21[0x16];
    iVar20 = *(int *)(piVar21[0x16] + 4);
    while (iVar20 != 0) {
      if (local_9c < *(int *************)(iVar20 + 0x10)) {
        iVar16 = iVar20;
        iVar20 = *(int *)(iVar20 + 8);
      }
      else {
        iVar20 = *(int *)(iVar20 + 0xc);
      }
    }
    local_50 = iVar5;
    unaff_r10[1] = iVar16;
    local_54 = local_4c;
    local_58 = iVar5;
    iVar16 = 0;
    if (iVar5 != local_4c) {
      do {
        iVar16 = iVar16 + 1;
        iVar20 = *(int *)(iVar5 + 0xc);
        if (*(int *)(iVar5 + 0xc) == 0) {
          for (iVar20 = *(int *)(iVar5 + 4); iVar5 == *(int *)(iVar20 + 0xc);
              iVar20 = *(int *)(iVar20 + 4)) {
            iVar5 = iVar20;
          }
          if (*(int *)(iVar5 + 0xc) != iVar20) {
            iVar5 = iVar20;
          }
        }
        else {
          do {
            iVar5 = iVar20;
            iVar20 = *(int *)(iVar5 + 8);
          } while (*(int *)(iVar5 + 8) != 0);
        }
      } while (iVar5 != unaff_r11[1]);
    }
    if (iVar16 == 0) goto LAB_000a00b4;
    local_150 = (int ************)piVar21[0x16];
    pppppppppppiVar23 = ((int ************)piVar21[0x16])[1];
    while (pppppppppppiVar23 != (int ***********)0x0) {
      if (pppppppppppiVar23[4] < local_9c) {
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[3];
      }
      else {
        local_150 = (int ************)pppppppppppiVar23;
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[2];
      }
    }
    local_14c = (int ***********)piVar21[0x16];
    pppppppppppiVar23 = ((int ************)piVar21[0x16])[1];
    while (ppppppppppppiVar24 = local_150, pppppppppppiVar23 != (int ***********)0x0) {
      if (local_9c < pppppppppppiVar23[4]) {
        local_14c = pppppppppppiVar23;
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[2];
      }
      else {
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[3];
      }
    }
    while (ppppppppppppiVar24 != (int ************)local_14c) {
      pppppppppppiVar23 = ppppppppppppiVar24[3];
      if (ppppppppppppiVar24[3] == (int ***********)0x0) {
        pppppppppppiVar23 = ppppppppppppiVar24[1];
        while (pppppppppppiVar15 = pppppppppppiVar23,
              ppppppppppppiVar24 == (int ************)pppppppppppiVar15[3]) {
          ppppppppppppiVar24 = (int ************)pppppppppppiVar15;
          pppppppppppiVar23 = (int ***********)pppppppppppiVar15[1];
        }
        if (ppppppppppppiVar24[3] != pppppppppppiVar15) {
          ppppppppppppiVar24 = (int ************)pppppppppppiVar15;
        }
      }
      else {
        do {
          ppppppppppppiVar24 = (int ************)pppppppppppiVar23;
          pppppppppppiVar23 = ppppppppppppiVar24[2];
        } while (ppppppppppppiVar24[2] != (int ***********)0x0);
      }
    }
    local_138 = local_14c;
    local_12c = (int ***********)local_150;
    FUN_001d0bd8(&local_140,piVar21 + 0x12,&local_12c,&local_138);
    ppppppppppppiVar24 = (int ************)piVar21[4];
    if (piVar21[0x17] == 0) {
      *(undefined1 *)((int)param_1 + (int)ppppppppppppiVar24 + 0x188) = 0;
      local_158 = (int ***********)pppppppiVar3;
      local_154 = (int ************)CONCAT22((short)((uint)local_154 >> 0x10),0x100);
      local_14c = (int ***********)((uint)local_14c & 0xff00);
      local_148 = (int ***********)((uint)local_148 & 0xffff0000);
      local_144 = (int ************)0x0;
      local_140 = (int **********)0x0;
      local_13c = 0;
      local_134 = (int ************)((uint)local_134 & 0xffff0000);
      local_130 = (int ************)pppppppiVar11;
      local_124 = 0;
      local_12c = (int ***********)0x0;
      local_128 = (int *******)((uint)local_128 & 0xffffff00);
      local_120 = 0;
      local_11c = 0;
      local_138 = (int ***********)0x0;
      local_150 = ppppppppppppiVar24;
      (**(code **)(*param_1 + 0xcc))(param_1,&local_158);
      local_158 = (int ***********)pppppppiVar3;
      FUN_0010fa20(local_124,(int)(local_11c - local_124) >> 1,0);
      FUN_001da314(&local_130);
      if (piVar21 != (int *)param_1[0x5a]) {
        *(int *)piVar21[1] = *piVar21;
        *(int *)(*piVar21 + 4) = piVar21[1];
        param_1[0x5b] = param_1[0x5b] + -1;
        FUN_001da314(piVar21 + 0x19);
        iVar5 = piVar21[0x16];
        piVar14 = piVar21 + 0x12;
        if (iVar5 != 0) {
          local_100 = *(int ***********)(iVar5 + 8);
          local_fc = iVar5;
          FUN_001d0bd8(&local_104,piVar14,&local_100,&local_fc);
          iVar5 = piVar21[0x16];
          *(int *)(iVar5 + 0xc) = piVar21[0x13];
          piVar21[0x13] = iVar5;
          piVar7 = (int *)*piVar14;
          while (piVar7 != (int *)0x0) {
            *piVar14 = *piVar7;
            FUN_0010fa20(piVar7[2],piVar7[1],0);
            FUN_0010fa20(piVar7,1,0);
            piVar7 = (int *)*piVar14;
          }
        }
        piVar21[2] = (int)pppppppiVar3;
        FUN_0010fa20(piVar21[0xf],piVar21[0x11] - piVar21[0xf] >> 1,0);
        FUN_001da314(piVar21 + 0xc);
        *piVar21 = param_1[0x57];
        param_1[0x57] = (int)piVar21;
      }
    }
    else {
      local_154 = (int ************)(piVar21 + 0xf);
      FUN_0006c348(local_154,(uint)local_9c & 0xff);
      local_14c = (int ***********)CONCAT22(local_14c._2_2_,0x400);
      local_13c = 0;
      local_140 = (int **********)0x0;
      local_150 = local_ec;
      local_144 = (int ************)0x0;
      local_14c = (int ***********)CONCAT31(local_14c._1_3_,1);
      local_148 = (int ***********)ppppppppppppiVar24;
      FUN_0006c618(&local_144,local_154);
      (**(code **)(*param_1 + 0xcc))(param_1,&local_150);
      iVar5 = (**(code **)(*param_1 + 0xe0))(param_1);
      if (iVar5 != 0) {
        local_134 = (int ************)CONCAT22((short)((uint)local_134 >> 0x10),0xe00);
        local_138 = (int ***********)local_64;
        local_12c = (int ***********)local_9c;
        local_128 = (int *******)0x0;
        local_124 = CONCAT31(local_124._1_3_,1);
        local_130 = ppppppppppppiVar24;
        (**(code **)(*param_1 + 0xcc))(param_1,&local_138);
      }
      local_150 = local_f0;
      FUN_0010fa20(local_144,(int)(local_13c - (int)local_144) >> 1,0);
    }
    goto LAB_000a05d4;
  }
LAB_000a00cc:
  piVar21 = *(int **)param_1[0x60];
  if (piVar21 != (int *)param_1[0x60]) {
LAB_000a00e4:
    local_88 = piVar21[0x19];
    iVar5 = *(int *)(piVar21[0x19] + 4);
    while (iVar5 != 0) {
      if (*(int *************)(iVar5 + 0x10) < local_9c) {
        iVar5 = *(int *)(iVar5 + 0xc);
      }
      else {
        local_88 = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
    }
    local_5c = piVar21[0x19];
    iVar5 = *(int *)(piVar21[0x19] + 4);
    while (iVar5 != 0) {
      if (local_9c < *(int *************)(iVar5 + 0x10)) {
        local_5c = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
      else {
        iVar5 = *(int *)(iVar5 + 0xc);
      }
    }
    local_60 = local_88;
    iVar5 = 0;
    iVar16 = local_88;
    while (iVar16 != local_5c) {
      iVar5 = iVar5 + 1;
      iVar20 = *(int *)(iVar16 + 0xc);
      if (*(int *)(iVar16 + 0xc) == 0) {
        for (iVar20 = *(int *)(iVar16 + 4); iVar16 == *(int *)(iVar20 + 0xc);
            iVar20 = *(int *)(iVar20 + 4)) {
          iVar16 = iVar20;
        }
        if (*(int *)(iVar16 + 0xc) != iVar20) {
          iVar16 = iVar20;
        }
      }
      else {
        do {
          iVar16 = iVar20;
          iVar20 = *(int *)(iVar16 + 8);
        } while (*(int *)(iVar16 + 8) != 0);
      }
    }
    if (iVar5 == 0) goto LAB_000a05c4;
    local_158 = (int ***********)piVar21[0x19];
    pppppppppppiVar23 = ((int ************)piVar21[0x19])[1];
    while (pppppppppppiVar23 != (int ***********)0x0) {
      if (pppppppppppiVar23[4] < local_9c) {
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[3];
      }
      else {
        local_158 = pppppppppppiVar23;
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[2];
      }
    }
    local_154 = (int ************)piVar21[0x19];
    pppppppppppiVar23 = ((int ************)piVar21[0x19])[1];
    while (ppppppppppppiVar24 = (int ************)local_158,
          pppppppppppiVar23 != (int ***********)0x0) {
      if (local_9c < pppppppppppiVar23[4]) {
        local_154 = (int ************)pppppppppppiVar23;
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[2];
      }
      else {
        pppppppppppiVar23 = (int ***********)pppppppppppiVar23[3];
      }
    }
    while (ppppppppppppiVar24 != local_154) {
      pppppppppppiVar23 = ppppppppppppiVar24[3];
      if (ppppppppppppiVar24[3] == (int ***********)0x0) {
        pppppppppppiVar23 = ppppppppppppiVar24[1];
        while (pppppppppppiVar15 = pppppppppppiVar23,
              ppppppppppppiVar24 == (int ************)pppppppppppiVar15[3]) {
          ppppppppppppiVar24 = (int ************)pppppppppppiVar15;
          pppppppppppiVar23 = (int ***********)pppppppppppiVar15[1];
        }
        if (ppppppppppppiVar24[3] != pppppppppppiVar15) {
          ppppppppppppiVar24 = (int ************)pppppppppppiVar15;
        }
      }
      else {
        do {
          ppppppppppppiVar24 = (int ************)pppppppppppiVar23;
          pppppppppppiVar23 = ppppppppppppiVar24[2];
        } while (ppppppppppppiVar24[2] != (int ***********)0x0);
      }
    }
    local_134 = (int ************)local_158;
    local_12c = (int ***********)local_154;
    FUN_001d0bd8(&local_13c,piVar21 + 0x15,&local_134,&local_12c);
    bVar1 = *(byte *)((int)piVar21 + 0xe);
    ppppppppppppiVar24 = (int ************)(uint)bVar1;
    if (piVar21[0x1a] == 0) {
      *(undefined1 *)((int)param_1 + (int)ppppppppppppiVar24 + 0x188) = 0;
      uVar9 = (uint)local_150 >> 0x18;
      local_150._0_3_ = CONCAT12(bVar1,0x200);
      local_150 = (int ************)CONCAT13((char)uVar9,(undefined3)local_150);
      local_154 = (int ************)DAT_000a091c;
      local_158 = (int ***********)DAT_000a091c;
      local_14c = (int ***********)0x0;
      local_148 = (int ***********)0x0;
      local_144 = (int ************)0x0;
      local_140 = (int **********)0x0;
      local_13c = 0;
      local_134 = (int ************)((uint)local_134 & 0xffff0000);
      local_124 = 0;
      local_130 = (int ************)pppppppiVar11;
      local_12c = (int ***********)pppppppiVar11;
      local_128 = pppppppiVar11;
      local_120 = 0;
      local_110 = (undefined1 *)0x0;
      local_11c = 0;
      local_118 = 0;
      local_114 = (undefined1 *)0x0;
      local_10c = 0;
      local_138 = (int ***********)0x0;
      (**(code **)(*param_1 + 0xcc))(param_1,&local_154);
      local_154 = (int ************)local_158;
      FUN_0010fa20(local_118,(int)local_110 - local_118 >> 1,0);
      FUN_001da314(&local_128);
      FUN_001da314(&local_12c);
      FUN_001da314(&local_130);
      FUN_0010fa20(local_14c,(int)local_144 - (int)local_14c >> 1,0);
      if (piVar21 != (int *)param_1[0x60]) {
        piVar14 = piVar21 + 0x15;
        *(int *)piVar21[1] = *piVar21;
        *(int *)(*piVar21 + 4) = piVar21[1];
        param_1[0x61] = param_1[0x61] + -1;
        iVar5 = piVar21[0x19];
        if (iVar5 != 0) {
          local_fc = *(int *)(iVar5 + 8);
          local_f8 = iVar5;
          FUN_001d0bd8(local_e4,piVar14,&local_fc,&local_f8);
          iVar5 = piVar21[0x19];
          *(int *)(iVar5 + 0xc) = piVar21[0x16];
          piVar21[0x16] = iVar5;
          piVar7 = (int *)*piVar14;
          while (piVar7 != (int *)0x0) {
            *piVar14 = *piVar7;
            FUN_0010fa20(piVar7[2],piVar7[1],0);
            FUN_0010fa20(piVar7,1,0);
            piVar7 = (int *)*piVar14;
          }
        }
        piVar21[2] = (int)local_158;
        FUN_0010fa20(piVar21[0x11],piVar21[0x13] - piVar21[0x11] >> 1,0);
        FUN_001da314(piVar21 + 0xd);
        FUN_001da314(piVar21 + 0xc);
        FUN_001da314(piVar21 + 0xb);
        FUN_0010fa20(piVar21[4],piVar21[6] - piVar21[4] >> 1,0);
        *piVar21 = param_1[0x5d];
        param_1[0x5d] = (int)piVar21;
      }
    }
    else {
      local_158 = (int ***********)(piVar21 + 0x11);
      FUN_0006c348(local_158,(uint)local_9c & 0xff);
      local_134 = (int ************)CONCAT22(local_134._2_2_,0x500);
      local_124 = 0;
      local_138 = (int ***********)DAT_000a0918;
      local_12c = (int ***********)0x0;
      local_128 = (int *******)0x0;
      local_134 = (int ************)CONCAT31(local_134._1_3_,1);
      local_130 = ppppppppppppiVar24;
      FUN_0006c618(&local_12c,local_158);
      (**(code **)(*param_1 + 0xcc))(param_1,&local_138);
      iVar5 = (**(code **)(*param_1 + 0xe0))(param_1);
      if (iVar5 != 0) {
        local_154 = (int ************)CONCAT22((short)((uint)local_154 >> 0x10),0xe00);
        local_158 = (int ***********)local_64;
        local_14c = (int ***********)local_9c;
        local_148 = (int ***********)0x0;
        local_144 = (int ************)CONCAT31(local_144._1_3_,1);
        local_150 = ppppppppppppiVar24;
        (**(code **)(*param_1 + 0xcc))(param_1,&local_158);
      }
      local_138 = (int ***********)local_f0;
      FUN_0010fa20(local_12c,(int)(local_124 - (int)local_12c) >> 1,0);
    }
  }
LAB_000a05d4:
  FUN_00154f7c(param_2,0);
  FUN_001550c8(param_2);
  local_a4[0] = 0;
  FUN_00155144(&local_90,param_2);
  if (*(int *)(local_90 + -4) == 0) {
    FUN_00155080(&local_124,param_2);
    if (*(int *)(local_124 - 4) == 0) {
      (**(code **)(*param_1 + 0xec))(param_1);
      FUN_001da314(&local_124);
      FUN_001da314(&local_90);
      return;
    }
    FUN_00155038(param_2);
    FUN_000a65fc(&local_158);
    uVar6 = FUN_00056158(&local_120,&local_124);
    iVar5 = FUN_000a6240(&local_158,uVar6);
    FUN_00056e64(&local_120);
    if (iVar5 != 1) {
      FUN_000028a4(DAT_000a0930);
      FUN_001da314(&local_128);
      FUN_001da314(&local_13c);
      FUN_001da314(&local_144);
      FUN_001da314(&local_14c);
      FUN_001da314(&local_150);
      FUN_001da314(&local_124);
      FUN_001da314(&local_90);
      return;
    }
    local_6c = *(uint *)(param_2 + 0xc);
    FUN_001da4a8(&local_90,&local_124);
    uVar9 = FUN_000394dc(local_13c);
    pppppppppppiVar23 = local_138;
    local_e8 = (int *******)((uint)local_148 >> 0x10);
    bVar1 = local_134._1_1_;
    local_98 = local_130;
    FUN_0018e28c(local_144,local_a4);
    local_8c = (uint)local_140 & 0xffff;
    local_48 = (uint)local_12c & 0xff;
    FUN_001da314(&local_128);
    FUN_001da314(&local_13c);
    FUN_001da314(&local_144);
    FUN_001da314(&local_14c);
    FUN_001da314(&local_150);
    FUN_001da314(&local_124);
  }
  else {
    uVar8 = FUN_000034d0();
    uVar9 = 4;
    if (*(uint *)(local_90 + -4) < 4) {
      uVar9 = *(uint *)(local_90 + -4);
    }
    uVar19 = uVar9;
    if (uVar8 <= uVar9) {
      uVar19 = uVar8;
    }
    iVar5 = FUN_0000339c(local_90,&DAT_000a0920,uVar19);
    if (iVar5 == 0 && uVar9 == uVar8) {
      FUN_000a1c50(param_1,param_2,&local_90);
      goto LAB_000a0ce4;
    }
    uVar8 = FUN_000034d0();
    uVar9 = 4;
    if (*(uint *)(local_90 + -4) < 4) {
      uVar9 = *(uint *)(local_90 + -4);
    }
    uVar19 = uVar9;
    if (uVar8 <= uVar9) {
      uVar19 = uVar8;
    }
    iVar5 = FUN_0000339c(local_90,&DAT_000a0928,uVar19);
    if (iVar5 == 0 && uVar9 == uVar8) {
      FUN_0007e3e4();
      uVar6 = FUN_0005508c();
      iVar5 = FUN_001536c0(uVar6,&local_90,&local_158);
      if (iVar5 == 0) {
        (**(code **)(*param_1 + 0xec))(param_1);
        FUN_0007e430(&local_158);
        goto LAB_000a0ce4;
      }
      FUN_001da408(&local_120,&local_128);
      FUN_00155038(param_2,local_120);
      FUN_001da314(&local_120);
      uVar9 = FUN_000394dc(local_12c);
      pppppppppppiVar23 = local_138;
      local_e8 = (int *******)(local_13c >> 0x10);
      bVar1 = local_130._1_1_;
      local_98 = local_134;
      FUN_0018e28c(local_140,local_a4);
      local_8c = local_13c & 0xffff;
      local_48 = (uint)local_130 >> 0x10 & 0xff;
      FUN_0007e430(&local_158);
    }
    else {
      FUN_000a65fc(&local_158);
      iVar5 = FUN_00155afc(param_1[0x4e],&local_90,&local_158);
      if (iVar5 == 0) {
        (**(code **)(*param_1 + 0xec))(param_1);
        FUN_001da314(&local_128);
        FUN_001da314(&local_13c);
        FUN_001da314(&local_144);
        FUN_001da314(&local_14c);
        FUN_001da314(&local_150);
        goto LAB_000a0ce4;
      }
      FUN_00155038(param_2,local_128);
      uVar9 = FUN_000394dc(local_13c);
      pppppppppppiVar23 = local_138;
      local_e8 = (int *******)((uint)local_148 >> 0x10);
      bVar1 = local_134._1_1_;
      local_98 = local_130;
      FUN_0018e28c(local_144,local_a4);
      local_8c = (uint)local_140 & 0xffff;
      local_48 = (uint)local_12c & 0xff;
      FUN_001da314(&local_128);
      FUN_001da314(&local_13c);
      FUN_001da314(&local_144);
      FUN_001da314(&local_14c);
      FUN_001da314(&local_150);
    }
    local_6c = *(uint *)(param_2 + 8);
  }
  if (uVar9 == 4) {
    FUN_000028a4(DAT_000a10f8);
    FUN_001da314(&local_90);
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0xbc))(param_1);
  ppppppppppppiVar24 = (int ************)FUN_0004669c(uVar6,0);
  if (ppppppppppppiVar24 != (int ************)pppppppppppiVar23) {
    FUN_000028a4(DAT_000a10f4,pppppppppppiVar23);
    FUN_00154f7c(param_2,0xe);
    FUN_001550c8(param_2);
    FUN_001da314(&local_90);
    return;
  }
  if ((local_48 == 0) && (param_1[0x67] != (uint)bVar1)) {
    FUN_000028a4(DAT_000a10fc,(uint)bVar1);
    FUN_00154f7c(param_2,0xf);
    FUN_001550c8(param_2);
    FUN_001da314(&local_90);
    return;
  }
  piVar21 = *(int **)param_1[0x5a];
  if (piVar21 != (int *)param_1[0x5a]) {
    do {
      ppppppppppppiVar24 = *(int *************)(piVar21[0x19] + -4);
      if (ppppppppppppiVar24 == *(int *************)(local_90 + -4)) {
        local_150 = ppppppppppppiVar24;
        puVar13 = &local_150;
        if (*(int *************)(local_90 + -4) < ppppppppppppiVar24) {
          puVar13 = &local_144;
        }
        local_144 = *(int *************)(local_90 + -4);
        iVar5 = FUN_0000339c(piVar21[0x19],local_90,*puVar13);
        if (((((iVar5 == 0) && (*(int *)(piVar21[0x19] + -4) == *(int *)(local_90 + -4))) &&
             (piVar14 = piVar21 + 2, *(byte *)(piVar21 + 5) == uVar9)) &&
            (((int ************)piVar21[7] == local_98 && (piVar21[10] == local_a4[0])))) &&
           (*(ushort *)(piVar21 + 0xb) == local_8c)) break;
      }
      piVar14 = (int *)0x0;
      piVar21 = (int *)*piVar21;
    } while (piVar21 != (int *)param_1[0x5a]);
    if (piVar14 != (int *)0x0) {
      FUN_00154f7c(param_2,(char)piVar14[0x18]);
      FUN_001d1308(&local_158,piVar14 + 0x10,&local_9c);
      FUN_0006c3f8(piVar14 + 0xd,local_6c & 0xff,(uint)local_9c & 0xff);
      local_148 = (int ***********)piVar14[2];
      local_14c = (int ***********)CONCAT22(local_14c._2_2_,0x400);
      local_144 = (int ************)0x0;
      local_13c = 0;
      local_14c = (int ***********)CONCAT31(local_14c._1_3_,1);
      local_150 = local_ec;
      local_140 = (int **********)0x0;
      FUN_0006c618(&local_144,piVar14 + 0xd);
      (**(code **)(*param_1 + 0xcc))(param_1,&local_150);
      iVar5 = (**(code **)(*param_1 + 0xe0))(param_1);
      if (iVar5 != 0) {
        local_128 = *(int ********)(param_2 + 0x18);
        local_130 = (int ************)piVar14[2];
        local_134 = (int ************)CONCAT22((short)((uint)local_134 >> 0x10),0xe00);
        local_138 = (int ***********)local_64;
        local_12c = (int ***********)local_9c;
        local_124 = local_124 & 0xffffff00;
        (**(code **)(*param_1 + 0xcc))(param_1,&local_138);
      }
      local_150 = local_f0;
      FUN_0010fa20(local_144,(int)(local_13c - (int)local_144) >> 1,0);
      FUN_001da314(&local_90);
      return;
    }
  }
  local_158 = (int ***********)(**(code **)(*param_1 + 0xc4))(param_1);
  pppppppiVar4 = local_e8;
  ppppppppppppiVar24 = *(int *************)(param_1[0x4d] + 0x150);
  iVar5 = (**(code **)(*param_1 + 0xdc))(param_1);
  if ((iVar5 == 0) && ((local_a4[0] & 0xf0) != 0xe0)) {
    FUN_000028a4(DAT_000a1100);
  }
  else {
    ppppppppppiVar22 = (int **********)0x0;
    do {
      if (((code *)((int)param_1 + (int)ppppppppppiVar22))[0x188] == (code)0x0) {
        ((code *)((int)param_1 + (int)ppppppppppiVar22))[0x188] = (code)0x1;
        local_40 = local_98;
        local_44 = local_8c;
        local_30 = (uint)pppppppiVar4 & 0xffff;
        local_78 = (int **********)((uint)local_158 & 0xffff);
        local_158 = (int ***********)&local_148;
        local_3c = ppppppppppppiVar24;
        local_34 = uVar9;
        ppuVar10 = (undefined1 **)FUN_000034d0(s__RTP_Decoder_000a1107 + 1);
        if (ppuVar10 != (undefined1 **)0x0) {
          pppuVar17 = local_2c;
          if ((undefined1 **)0x80 < ppuVar10) {
            pppuVar17 = &local_70;
          }
          local_70 = ppuVar10;
          local_2c[0] = (undefined1 **)0x80;
          iVar5 = FUN_001da28c(&local_94,*pppuVar17,ppuVar10);
          pppppppiVar11 = (int *******)(iVar5 + 0xc);
        }
        local_94 = pppppppiVar11;
        FUN_00003628(pppppppiVar11,s__RTP_Decoder_000a1107 + 1,ppuVar10);
        uVar9 = local_48;
        iVar5 = param_1[0x66];
        uVar2 = *(undefined1 *)((int)param_1 + 0x19a);
        local_98 = (int ************)&local_94;
        local_150 = (int ************)(**(code **)(*param_1 + 0xd8))(param_1);
        local_154 = (int ************)(**(code **)(*param_1 + 0xe0))(param_1);
        local_144 = (int ************)CONCAT22((short)((uint)local_144 >> 0x10),0x100);
        local_148 = (int ***********)pppppppiVar3;
        local_13c = CONCAT31(local_13c._1_3_,(char)local_34);
        local_13c = CONCAT22((short)local_30,(undefined2)local_13c);
        local_138 = (int ***********)CONCAT22(local_138._2_2_,(short)local_78);
        local_134 = local_40;
        local_130 = local_3c;
        local_12c = (int ***********)DAT_000a1114;
        local_124 = CONCAT22(local_124._2_2_,(short)local_44);
        local_140 = ppppppppppiVar22;
        iVar16 = FUN_001da408(local_158 + 10,local_98);
        *(char *)(iVar16 + 4) = (char)iVar5;
        *(char *)(iVar16 + 5) = (char)uVar9;
        *(undefined1 *)(iVar16 + 6) = uVar2;
        *(char *)(iVar16 + 7) = (char)local_150;
        *(char *)(iVar16 + 8) = (char)local_154;
        *(undefined4 *)(iVar16 + 0xc) = 0;
        *(undefined4 *)(iVar16 + 0x10) = 0;
        *(undefined4 *)(iVar16 + 0x14) = 0;
        *(uint *)(iVar16 + -8) = local_a4[0];
        *(undefined1 *)(iVar16 + -0x24) = 1;
        FUN_001da314(&local_94);
        FUN_0006c3f8(&local_114,local_6c & 0xff,(uint)local_9c & 0xff);
        local_108 = pppppppiVar3;
        local_104 = (undefined1)local_144;
        local_103 = local_144._1_1_;
        local_100 = local_140;
        local_fc = CONCAT31(local_fc._1_3_,(undefined1)local_13c);
        local_fc = CONCAT22(local_13c._2_2_,(undefined2)local_fc);
        local_f8 = CONCAT22(local_f8._2_2_,local_138._0_2_);
        local_f4 = local_134;
        local_f0 = local_130;
        local_ec = (int ************)local_12c;
        local_e4[0] = (undefined2)local_124;
        if (*(int *)(local_120 + -0xc) == -1) {
          uVar6 = *(undefined4 *)(local_120 + -4);
          local_e0 = FUN_001da28c(&local_e0,uVar6,uVar6);
          local_e0 = local_e0 + 0xc;
          FUN_00003628(local_e0,local_120,uVar6);
        }
        else {
          local_e0 = local_120;
          piVar21 = (int *)(local_120 + -0xc);
          if (piVar21 != DAT_000a1118) {
            *piVar21 = *piVar21 + 1;
          }
        }
        local_d4 = (undefined1 *)0x0;
        local_dc = (undefined1)local_11c;
        local_db = local_11c._1_1_;
        local_d0 = (undefined1 *)0x0;
        local_da = local_11c._2_1_;
        local_cc = (undefined1 *)0x0;
        local_d9 = local_11c._3_1_;
        local_d8 = (undefined1)local_118;
        iVar5 = (int)local_110 - (int)local_114 >> 1;
        iVar16 = 1;
        if (iVar5 != 0) {
          iVar16 = iVar5;
        }
        local_d4 = (undefined1 *)FUN_0010f82c(iVar16 << 1,0);
        puVar18 = local_d4;
        for (puVar12 = local_114; puVar12 != local_110; puVar12 = puVar12 + 2) {
          if (puVar18 != (undefined1 *)0x0) {
            *puVar18 = *puVar12;
            puVar18[1] = puVar12[1];
          }
          puVar18 = puVar18 + 2;
        }
        local_cc = local_d4 + iVar16 * 2;
        local_d0 = local_d4 + ((int)local_110 - (int)local_114 & 0xfffffffe);
        local_e8 = local_128;
        local_c8 = (undefined4 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_b4 = 0;
        local_b0 = 0;
        local_bc = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_c4 = 0;
        puVar13 = (undefined4 *)FUN_0010f82c(0xc,0);
        uVar6 = FUN_0010f82c(0x14,0);
        puVar13[2] = uVar6;
        *puVar13 = local_c8;
        puVar13[1] = 1;
        local_b8 = (undefined1 *)puVar13[2];
        local_bc = local_b8 + 0x14;
        local_c0 = local_b8 + 0x14;
        *(undefined4 *)(local_b8 + 8) = 0;
        *(undefined4 *)(local_b8 + 0xc) = 0;
        *local_b8 = 0;
        *(undefined4 *)(local_b8 + 4) = 0;
        *(undefined1 **)(local_b8 + 8) = local_b8;
        *(undefined1 **)(local_b8 + 0xc) = local_b8;
        local_c8 = puVar13;
        if (*(int *)(local_90 + -0xc) == -1) {
          uVar6 = *(undefined4 *)(local_90 + -4);
          local_ac = FUN_001da28c(&local_ac,uVar6,uVar6);
          local_ac = local_ac + 0xc;
          FUN_00003628(local_ac,local_90,uVar6);
        }
        else {
          local_ac = local_90;
          piVar21 = (int *)(local_90 + -0xc);
          if (piVar21 != DAT_000a1118) {
            *piVar21 = *piVar21 + 1;
          }
        }
        local_a8 = 0;
        FUN_001d1308(&local_150,&local_c8,&local_9c);
        local_98 = (int ************)param_1[0x5a];
        piVar21 = param_1 + 0x56;
        pppppppppppiVar23 = (int ***********)param_1[0x57];
        if (pppppppppppiVar23 == (int ***********)0x0) {
          pppppppppppiVar23 = (int ***********)param_1[0x58];
          if (pppppppppppiVar23 == (int ***********)param_1[0x59]) {
            uVar9 = 1;
            if (*piVar21 != 0) {
              uVar8 = *(uint *)(*piVar21 + 4);
              uVar9 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
              if (uVar9 < uVar8 + 1) {
                uVar9 = uVar8 + 1;
              }
            }
            piVar14 = (int *)FUN_0010f82c(0xc,0);
            iVar5 = FUN_0010f82c(uVar9 * 0x6c,0);
            piVar14[2] = iVar5;
            *piVar14 = *piVar21;
            piVar14[1] = uVar9;
            *piVar21 = (int)piVar14;
            pppppppppppiVar23 = (int ***********)piVar14[2];
            param_1[0x58] = (int)pppppppppppiVar23;
            param_1[0x59] = (int)(pppppppppppiVar23 + uVar9 * 0x1b);
          }
          param_1[0x58] = (int)(pppppppppppiVar23 + 0x1b);
        }
        else {
          param_1[0x57] = (int)*pppppppppppiVar23;
        }
        pppppppppppiVar15 = pppppppppppiVar23 + 2;
        if (pppppppppppiVar15 != (int ***********)0x0) {
          *pppppppppppiVar15 = (int **********)local_80;
          *(undefined1 *)(pppppppppppiVar23 + 3) = local_104;
          *pppppppppppiVar15 = (int **********)local_74;
          *(undefined1 *)((int)pppppppppppiVar23 + 0xd) = local_103;
          *pppppppppppiVar15 = (int **********)pppppppiVar3;
          pppppppppppiVar23[4] = local_100;
          *(undefined1 *)(pppppppppppiVar23 + 5) = (undefined1)local_fc;
          *(undefined2 *)((int)pppppppppppiVar23 + 0x16) = local_fc._2_2_;
          *(undefined2 *)(pppppppppppiVar23 + 6) = (undefined2)local_f8;
          pppppppppppiVar23[7] = (int **********)local_f4;
          pppppppppppiVar23[8] = (int **********)local_f0;
          pppppppppppiVar23[9] = (int **********)local_ec;
          *(undefined2 *)(pppppppppppiVar23 + 0xb) = local_e4[0];
          iVar5 = FUN_001da408(pppppppppppiVar23 + 0xc,&local_e0);
          *(undefined1 *)(iVar5 + 4) = local_dc;
          *(undefined1 *)(iVar5 + 5) = local_db;
          *(undefined1 *)(iVar5 + 6) = local_da;
          *(undefined1 *)(iVar5 + 7) = local_d9;
          *(undefined1 *)(iVar5 + 8) = local_d8;
          local_70 = &local_d4;
          *(undefined4 *)(iVar5 + 0xc) = 0;
          *(undefined4 *)(iVar5 + 0x10) = 0;
          *(undefined4 *)(iVar5 + 0x14) = 0;
          local_78 = (int **********)((int)local_d0 - (int)local_d4 >> 1);
          local_74 = (int ************)0x1;
          pppppppppppiVar15 = (int ***********)&local_74;
          if (local_78 != (int **********)0x0) {
            pppppppppppiVar15 = &local_78;
          }
          local_14c = (int ***********)*pppppppppppiVar15;
          puVar18 = (undefined1 *)FUN_0010f82c((int)local_14c << 1,0);
          *(int *)(iVar5 + 0xc) = (int)puVar18;
          for (puVar12 = local_d4; puVar12 != local_d0; puVar12 = puVar12 + 2) {
            if (puVar18 != (undefined1 *)0x0) {
              *puVar18 = *puVar12;
              puVar18[1] = puVar12[1];
            }
            puVar18 = puVar18 + 2;
          }
          puVar18 = *local_70;
          puVar12 = local_70[1];
          iVar16 = *(int *)(iVar5 + 0xc);
          *(int *)(iVar5 + 0x14) = iVar16 + (int)local_14c * 2;
          *(uint *)(iVar5 + 0x10) = ((int)puVar12 - (int)puVar18 & 0xfffffffeU) + iVar16;
          *(int ********)(iVar5 + -8) = local_e8;
          iVar5 = FUN_001dbffc(iVar5 + 0x18,&local_c8);
          iVar5 = FUN_001da408(iVar5 + 0x1c,&local_ac);
          *(undefined1 *)(iVar5 + 4) = local_a8;
        }
        *pppppppppppiVar23 = (int **********)local_98;
        pppppppppppiVar23[1] = (int **********)local_98[1];
        *local_98[1] = (int **********)pppppppppppiVar23;
        local_98[1] = pppppppppppiVar23;
        param_1[0x5b] = param_1[0x5b] + 1;
        FUN_00154f7c(param_2,0);
        (**(code **)(*param_1 + 0xcc))(param_1,&local_148);
        iVar5 = (**(code **)(*param_1 + 0xe0))(param_1);
        if (iVar5 != 0) {
          local_70 = *(undefined1 ***)(param_2 + 0x18);
          local_7c = 0;
          local_7b = 0xe;
          local_80 = local_64;
          local_74 = local_9c;
          local_6c = local_6c & 0xffffff00;
          local_78 = ppppppppppiVar22;
          (**(code **)(*param_1 + 0xcc))(param_1,&local_80);
        }
        FUN_001da314(&local_ac);
        iVar5 = FUN_0016134c(&local_c8);
        *(int ********)(iVar5 + -0x40) = pppppppiVar3;
        FUN_0010fa20(*(int *)(iVar5 + -0xc),*(int *)(iVar5 + -4) - *(int *)(iVar5 + -0xc) >> 1,0);
        FUN_001da314(iVar5 + -0x18);
        local_148 = (int ***********)pppppppiVar3;
        FUN_0010fa20(local_114,local_10c - (int)local_114 >> 1,0);
        FUN_001da314(&local_120);
        goto LAB_000a0ce4;
      }
      ppppppppppiVar22 = (int **********)((int)ppppppppppiVar22 + 1);
    } while (ppppppppppiVar22 < DataAbort);
    FUN_000028a4(_DAT_000a1104);
  }
LAB_000a0ce4:
  FUN_001da314(&local_90);
  return;
LAB_000a00b4:
  piVar21 = (int *)*piVar21;
  if (piVar21 == (int *)param_1[0x5a]) goto LAB_000a00cc;
  goto LAB_0009fc24;
LAB_000a05c4:
  piVar21 = (int *)*piVar21;
  if (piVar21 == (int *)param_1[0x60]) goto LAB_000a05d4;
  goto LAB_000a00e4;
}

