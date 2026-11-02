// rea decompile_all
// name: FUN_001e9e00
// address: 0x1e9e00
// body: available
// range: 0x1e9e00-0x1ea209 inclusive
// range: 0x1ea2b0-0x1ea531 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e9e00(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 extraout_r1;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_54;
  
  iVar9 = param_2[0x46];
  puVar15 = param_2 + 0x4c;
  if (iVar9 != 0) {
    if (((iVar9 == 4) || (iVar9 == 6)) &&
       ((*(short *)(param_2 + 0x4b) == *DAT_001ea20c ||
        (*(short *)(param_2 + 0x4b) == *DAT_001ea210)))) goto LAB_001e9e5e;
    FUN_0002a1c6(0,DAT_001ea214,iVar9,(param_2[0x4b] & 0xff) << 8 | (param_2[0x4b] & 0xffff) >> 8,
                 puVar15);
    param_2[0x46] = 0;
  }
  *(undefined2 *)(param_2 + 0x4b) = *DAT_001ea218;
LAB_001e9e5e:
  *(undefined2 *)((int)param_2 + 0x12e) = *_DAT_001ea21c;
  if (*(int *)(param_1 + 0x148) == 0) {
    return DAT_001ea258;
  }
  uVar3 = FUN_00025d12(puVar15,param_2 + 0x8c);
  if (0x100 < uVar3) {
    uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
    FUN_0002a1c6(0,s_r__Attempt_to_start_query_with_i_001ea21d + 3,puVar15,uVar4);
    return DAT_001ea254;
  }
  if ((param_2[0x45] == *DAT_001ea25c) ||
     (puVar5 = (undefined4 *)(param_1 + 0x130), param_2[0x45] == *DAT_001ea260)) {
    puVar5 = (undefined4 *)(param_1 + 0x13c);
  }
  while (puVar8 = (undefined4 *)*puVar5, puVar8 != (undefined4 *)0x0) {
    puVar5 = puVar8;
    if (puVar8 == param_2) {
      uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
      FUN_0002a1c6(0,DAT_001ea264,puVar15,uVar4,param_2);
      return DAT_001ea268;
    }
  }
  *puVar5 = param_2;
  iVar9 = param_2[0x45];
  if ((((iVar9 != 0) && (iVar9 != *DAT_001ea25c)) && (iVar9 != *DAT_001ea26c)) &&
     (iVar9 != *DAT_001ea260)) {
    for (puVar5 = *(undefined4 **)(&DAT_00001fcc + param_1); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      if (puVar5[0x500] == iVar9) goto LAB_001e9f58;
    }
    uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
    FUN_0002a1c6(0,DAT_001ea270,param_2[0x45],puVar15,uVar4);
  }
LAB_001e9f58:
  *param_2 = 0;
  uVar4 = FUN_00025cca(puVar15);
  param_2[1] = uVar4;
  FUN_00025cca(puVar15);
  uVar4 = FUN_001c6fe0();
  uVar4 = FUN_000236d4(param_1,puVar15,param_2[1],uVar4);
  param_2[2] = uVar4;
  param_2[3] = *(undefined4 *)(param_1 + 0xdc);
  FUN_001c6ed0(*DAT_001ea274 + 2);
  param_2[5] = 0;
  param_2[4] = extraout_r1;
  uVar4 = *(undefined4 *)(param_1 + 0x110);
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[6] = uVar4;
  *(undefined1 *)(param_2 + 0x2e) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  uVar4 = FUN_00027500(param_1,param_2);
  param_2[0xd] = uVar4;
  uVar4 = 0;
  if (param_2[0x91] != 0) {
    uVar4 = FUN_00044644(param_1,puVar15,*(undefined2 *)(param_2 + 0x8c),param_2[0x45]);
  }
  param_2[0x2d] = uVar4;
  puVar5 = param_2 + 0x46;
  puVar8 = param_2 + 0x4c;
  for (puVar11 = *(undefined4 **)(param_1 + 0x130);
      (puVar11 != (undefined4 *)0x0 && (puVar11 != param_2)); puVar11 = (undefined4 *)*puVar11) {
    if ((puVar11[0x45] == param_2[0x45]) &&
       ((((puVar11[0x46] == 0 && (param_2[0x46] == 0)) ||
         ((iVar9 = FUN_001e5b3c(puVar11 + 0x46,puVar5), iVar9 != 0 &&
          (*(short *)(puVar11 + 0x4b) == *(short *)(param_2 + 0x4b))))) &&
        ((*(short *)(puVar11 + 0x8c) == *(short *)(param_2 + 0x8c) &&
         (*(short *)((int)puVar11 + 0x232) == *(short *)((int)param_2 + 0x232))))))) {
      if ((puVar11[0x8d] == 0) || (*(short *)((int)puVar11 + 0x12e) == 0)) {
        iVar9 = 0;
      }
      else {
        iVar9 = 1;
      }
      if ((param_2[0x8d] == 0) || (*(short *)((int)param_2 + 0x12e) == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = 1;
      }
      if (((iVar9 == iVar6) &&
          (((puVar11[0xd] == 0 || (param_2[0xd] != 0)) && (puVar11[0x2d] == param_2[0x2d])))) &&
         ((puVar11[1] == param_2[1] && (iVar9 = FUN_000400ea(puVar11 + 0x4c,puVar8), iVar9 != 0))))
      goto LAB_001ea0cc;
    }
  }
  puVar11 = (undefined4 *)0x0;
LAB_001ea0cc:
  param_2[0xe] = puVar11;
  param_2[0xf] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = *(undefined4 *)(param_1 + 0xdc);
  param_2[0x2c] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  *(undefined1 *)(param_2 + 0x36) = 0;
  param_2[0x37] = 0;
  puVar5 = DAT_001ea278;
  uVar4 = DAT_001ea278[1];
  uVar10 = DAT_001ea278[2];
  uVar12 = DAT_001ea278[3];
  param_2[0x38] = *DAT_001ea278;
  param_2[0x39] = uVar4;
  param_2[0x3a] = uVar10;
  param_2[0x3b] = uVar12;
  puVar2 = DAT_001ea218;
  param_2[0x3c] = puVar5[4];
  *(undefined2 *)(param_2 + 0x3d) = *puVar2;
  param_2[0x3e] = 0;
  *(undefined1 *)((int)param_2 + 0xfe) = 0;
  *(undefined1 *)((int)param_2 + 0xff) = 1;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined2 *)(param_2 + 0x42) = 0;
  uVar4 = *DAT_001ea27c;
  uVar10 = DAT_001ea27c[1];
  param_2[0x44] = uVar10;
  param_2[0x43] = uVar4;
  param_2[0x34] = uVar10;
  param_2[0x33] = uVar4;
  *(undefined2 *)((int)param_2 + 0xd6) = 0;
  *(undefined2 *)(param_2 + 0x35) = 0;
  param_2[0x2f] = 0;
  if (*(char *)((int)param_2 + 0x24d) == '\0') {
    *(undefined1 *)((int)param_2 + 0xb9) = 0;
  }
  else {
    *(undefined1 *)((int)param_2 + 0xb9) = 3;
    FUN_00025cca();
    iVar6 = FUN_001c6fe0();
    iVar9 = param_2[1];
    puVar5 = puVar15;
    for (piVar13 = *(int **)(iVar6 * 4 + param_1 + 0x15c); piVar13 != (int *)0x0;
        piVar13 = (int *)*piVar13) {
      if ((piVar13[1] == iVar9) && (iVar6 = FUN_000400ea(piVar13[4],puVar5), iVar6 != 0)) {
        if (piVar13 == (int *)0x0) goto LAB_001ea2b6;
        piVar13 = (int *)piVar13[2];
        goto LAB_001ea190;
      }
    }
    piVar13 = (int *)0x0;
LAB_001ea190:
    if (piVar13 != (int *)0x0) {
      do {
        iVar9 = FUN_000401cc(piVar13 + 1,param_2);
        if (iVar9 != 0) {
          if (*_DAT_001ea280 != 0) {
            uVar4 = FUN_00028288(piVar13 + 1,piVar13[9] + 4,param_1 + 0x37);
            FUN_0002a1c6(3,s____mDNS_PurgeBeforeResolve__Flus_001ea281 + 3,uVar4);
          }
          iVar9 = param_1;
          if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30) + 1) {
            FUN_0002a1c6(0,DAT_001ea2ac);
          }
          piVar13[0xc] = *(int *)(param_1 + 0xdc) + *DAT_001ea274 * -0x3c;
          piVar13[0x11] = 4;
          piVar13[3] = 0;
          FUN_0004419c(iVar9,piVar13);
        }
        piVar13 = (int *)*piVar13;
      } while (piVar13 != (int *)0x0);
    }
  }
LAB_001ea2b6:
  if (param_2[0xe] != 0) {
    param_2[0xd] = *(undefined4 *)(param_2[0xe] + 0x34);
  }
  param_2[0x11] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x1a] = 0;
  param_2[0x1d] = 0;
  param_2[0x20] = 0;
  param_2[0x23] = 0;
  param_2[0x26] = 0;
  if ((param_2[2] != 0) && (*DAT_001ea534 != 0)) {
    uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
    FUN_0002a1c6(3,DAT_001ea538,param_2[2] - *(int *)(param_1 + 0xdc),puVar15,uVar4);
  }
  if ((param_2[0x45] == *DAT_001ea53c) || (param_2[0x45] == *DAT_001ea540)) {
    if (*(int *)(param_1 + 0x140) == 0) {
      *(int *)(param_1 + 0x140) = (int)param_2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x134) == 0) {
      *(undefined4 **)(param_1 + 0x134) = param_2;
    }
    if (*(short *)((int)param_2 + 0x12e) == 0) {
      if (*(char *)(param_2 + 0x93) != '\0') {
        piVar14 = (int *)0x0;
        local_54 = -1;
        iVar9 = FUN_00024984();
        for (piVar13 = *(int **)(&DAT_00001fe8 + param_1); piVar13 != (int *)0x0;
            piVar13 = (int *)*piVar13) {
          iVar6 = (int)(piVar13 + 3);
          iVar7 = FUN_00024984();
          if ((iVar7 <= iVar9) && (local_54 <= iVar7)) {
            iVar16 = local_54;
            uVar4 = thunk_FUN_0004488c(puVar15,iVar9 - iVar7);
            iVar6 = FUN_000400ea(uVar4,iVar6);
            if ((iVar6 != 0) && (iVar16 != iVar7)) {
              piVar14 = piVar13;
              local_54 = iVar7;
            }
          }
        }
        if (*DAT_001ea534 != 0) {
          if (piVar14 == (int *)0x0) {
            uVar4 = 5;
          }
          else {
            uVar4 = *(undefined4 *)((int)piVar14 + 0x10c);
          }
          FUN_0002a1c6(3,DAT_001ea560,puVar15,piVar14,uVar4);
        }
        if (piVar14 == (int *)0x0) {
          iVar9 = 5;
        }
        else {
          iVar9 = *(int *)((int)piVar14 + 0x10c);
        }
        iVar9 = *DAT_001ea544 * iVar9 + *(int *)(param_1 + 0xdc);
        if (iVar9 == 0) {
          iVar9 = 1;
        }
        param_2[0x2f] = iVar9;
      }
    }
    else {
      iVar9 = FUN_000444a4(param_1,param_2);
      if (*(char *)(param_2 + 0x93) != '\0') {
        iVar6 = *(int *)(param_1 + 0xdc) + *DAT_001ea544 * iVar9;
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        param_2[0x2f] = iVar6;
      }
      iVar6 = param_2[0xe];
      if (iVar6 == 0) {
        iVar6 = FUN_000286a8(param_1,param_2);
        piVar13 = DAT_001ea534;
        param_2[0x32] = iVar6;
        if (*piVar13 != 0) {
          if (iVar6 == 0) {
            uVar3 = (uint)*DAT_001ea548;
          }
          else {
            uVar3 = *(uint *)(iVar6 + 0x1c);
          }
          uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
          iVar6 = param_2[0x32];
          if (iVar6 != 0) {
            iVar6 = iVar6 + 8;
          }
          FUN_0002a1c6(3,DAT_001ea550,param_2,puVar15,uVar4,iVar9,iVar6,
                       (uVar3 & 0xff) << 8 | (uVar3 & 0xffff) >> 8);
        }
      }
      else {
        uVar4 = *(undefined4 *)(iVar6 + 0xcc);
        param_2[0x34] = *(undefined4 *)(iVar6 + 0xd0);
        param_2[0x33] = uVar4;
        piVar13 = DAT_001ea534;
        iVar6 = *(int *)(iVar6 + 200);
        param_2[0x32] = iVar6;
        if (*piVar13 != 0) {
          if (iVar6 == 0) {
            uVar3 = (uint)*DAT_001ea548;
          }
          else {
            uVar3 = *(uint *)(iVar6 + 0x1c);
          }
          uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
          iVar6 = param_2[0x32];
          if (iVar6 != 0) {
            iVar6 = iVar6 + 8;
          }
          FUN_0002a1c6(3,DAT_001ea54c,param_2,param_2[0xe],puVar15,uVar4,iVar9,iVar6,
                       (uVar3 & 0xff) << 8 | (uVar3 & 0xffff) >> 8);
        }
      }
      FUN_0001c6c0(param_1,param_2,0);
      if ((param_2[0x8d] != 0) && (*(int *)(param_1 + 0x27a4) == 0)) {
        *(undefined1 *)(param_1 + 0x2794) = 1;
        uVar1 = *(undefined2 *)(param_1 + 0x18);
        *(undefined2 *)(param_1 + DAT_001ea554 + 0x14) = uVar1;
        *(undefined2 *)(param_1 + 0x2798) = uVar1;
        *(undefined4 *)(param_1 + 0x27a0) = DAT_001ea558;
        *(undefined4 *)(param_1 + 0x27a4) = 1;
        FUN_001e9c84(param_1,param_1 + DAT_001ea55c);
      }
    }
    if (param_2[0x2f] != 0) {
      if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30) + 1) {
        FUN_0002a1c6(0,DAT_001ea564);
      }
      if (0 < *(int *)(param_1 + 300) - param_2[0x2f]) {
        *(undefined4 *)(param_1 + 300) = param_2[0x2f];
      }
    }
    FUN_00044250(param_1,param_2);
  }
  return 0;
}

