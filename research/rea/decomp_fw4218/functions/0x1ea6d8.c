// rea decompile_all
// name: FUN_001ea6d8
// address: 0x1ea6d8
// body: available
// range: 0x1ea6d8-0x1eaaab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ea6d8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  
  puVar1 = param_2 + 0x4c;
  FUN_00025cca();
  iVar2 = FUN_001c6fe0();
  piVar8 = *(int **)(iVar2 * 4 + param_1 + 0x15c);
  iVar2 = param_2[1];
  while ((piVar8 != (int *)0x0 &&
         ((piVar8[1] != iVar2 || (iVar3 = FUN_000400ea(piVar8[4],puVar1), iVar3 == 0))))) {
    piVar8 = (int *)*piVar8;
  }
  if ((param_2[0x45] == *DAT_001eaaac) ||
     (puVar7 = (undefined4 *)(param_1 + 0x130), param_2[0x45] == *DAT_001eaab0)) {
    puVar7 = (undefined4 *)(param_1 + 0x13c);
  }
  do {
    puVar4 = puVar7;
    puVar7 = (undefined4 *)*puVar4;
    if (puVar7 == (undefined4 *)0x0) {
      if (-1 < (int)param_2[4]) {
        uVar5 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
        FUN_0002a1c6(0,DAT_001eaabc,puVar1,uVar5);
      }
      return DAT_001eaac0;
    }
  } while (puVar7 != param_2);
  *puVar4 = *puVar7;
  piVar12 = (int *)0x0;
  if (param_2[0xe] == 0) {
    piVar9 = *(int **)(param_1 + 0x130);
    if (piVar9 != (int *)0x0) {
      piVar11 = param_2 + 0x30;
      do {
        if (((undefined4 *)piVar9[0xe] == param_2) &&
           (piVar9[0xe] = (int)piVar12, piVar12 == (int *)0x0)) {
          piVar9[3] = param_2[3];
          piVar9[4] = param_2[4];
          piVar9[5] = param_2[5];
          piVar9[6] = param_2[6];
          piVar9[7] = param_2[7];
          piVar9[0x2a] = param_2[0x2a];
          piVar9[0x2b] = param_2[0x2b];
          piVar9[0x2c] = param_2[0x2c];
          piVar9[0x37] = piVar11[7];
          iVar2 = param_2[0x39];
          iVar3 = param_2[0x3a];
          iVar10 = param_2[0x3b];
          piVar9[0x38] = param_2[0x38];
          piVar9[0x39] = iVar2;
          piVar9[0x3a] = iVar3;
          piVar9[0x3b] = iVar10;
          piVar9[0x3c] = param_2[0x3c];
          *(undefined2 *)(piVar9 + 0x3d) = *(undefined2 *)(param_2 + 0x3d);
          piVar9[0x32] = piVar11[2];
          iVar2 = piVar11[3];
          piVar9[0x34] = piVar11[4];
          piVar9[0x33] = iVar2;
          *(char *)(piVar9 + 0x36) = (char)piVar11[6];
          *(short *)(piVar9 + 0x35) = (short)piVar11[5];
          *(undefined2 *)((int)piVar9 + 0xd6) = *(undefined2 *)((int)piVar11 + 0x16);
          *(undefined2 *)((int)piVar9 + 0x12e) = *(undefined2 *)((int)param_2 + 0x12e);
          piVar9[0x30] = *piVar11;
          *(undefined1 *)((int)piVar9 + 0xff) = *(undefined1 *)((int)param_2 + 0xff);
          piVar9[0x40] = param_2[0x40];
          piVar9[0x41] = param_2[0x41];
          *(undefined2 *)(piVar9 + 0x42) = *(undefined2 *)(param_2 + 0x42);
          iVar2 = param_2[0x43];
          piVar9[0x44] = param_2[0x44];
          piVar9[0x43] = iVar2;
          *piVar11 = 0;
          piVar11[7] = 0;
          piVar12 = piVar9;
          if (piVar9[0x37] != 0) {
            if (*DAT_001eaab4 != 0) {
              uVar5 = FUN_00025930((short)piVar9[0x8c]);
              FUN_0002a1c6(3,s_UpdateQuestionDuplicates_transfe_001eaac4,piVar9 + 0x4c,uVar5);
            }
            *(int **)(piVar9[0x37] + 0x328) = piVar9;
          }
          if ((piVar11[0xe] != 0) && (*DAT_001eaab4 != 0)) {
            FUN_0002a1c6(3,s_UpdateQuestionDuplicates_did_not_001eab04);
          }
          if (*(char *)((int)param_2 + 0xff) == '\x03') {
            if (*DAT_001eaab4 != 0) {
              uVar5 = FUN_00025930((short)piVar9[0x8c]);
              FUN_0002a1c6(3,s_UpdateQuestionDuplicates_transfe_001eab3c,piVar9 + 0x4c,uVar5);
            }
            *(undefined1 *)((int)param_2 + 0xff) = 0;
          }
          FUN_00044250(param_1,piVar9);
        }
        piVar9 = (int *)*piVar9;
      } while (piVar9 != (int *)0x0);
    }
  }
  else if (*DAT_001eaab4 != 0) {
    uVar5 = FUN_00025930(*(undefined2 *)(param_2[0xe] + 0x230));
    uVar6 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
    FUN_0002a1c6(3,DAT_001eaab8,param_2,puVar1,uVar6,param_2[0xe],param_2[0xe] + 0x130,uVar5);
  }
  param_2[4] = 0xffffffff;
  if (piVar8 != (int *)0x0) {
    for (piVar8 = (int *)piVar8[2]; piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
      if ((undefined4 *)piVar8[0x10] == param_2) {
        for (piVar12 = *(int **)(param_1 + 0x130); piVar12 != (int *)0x0; piVar12 = (int *)*piVar12)
        {
          if (((0 < piVar12[4]) && (piVar12[0xe] == 0)) &&
             (iVar2 = FUN_0003fb0c(piVar8 + 1,piVar12), iVar2 != 0)) {
            piVar8[0x10] = (int)piVar12;
            if (piVar12 != (int *)0x0) goto LAB_001ea998;
            goto LAB_001ea992;
          }
        }
        piVar8[0x10] = 0;
LAB_001ea992:
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
      }
LAB_001ea998:
    }
  }
  if (*(undefined4 **)(param_1 + 0x138) == param_2) {
    *(undefined4 *)(param_1 + 0x138) = *param_2;
  }
  if (*(undefined4 **)(param_1 + 0x134) == param_2) {
    *(undefined4 *)(param_1 + 0x134) = *param_2;
  }
  if (*(undefined4 **)(param_1 + 0x140) == param_2) {
    *(undefined4 *)(param_1 + 0x140) = *param_2;
  }
  if (*(undefined4 **)(param_1 + 0x144) == param_2) {
    uVar5 = FUN_00025930(*(undefined2 *)(param_2 + 0x8c));
    FUN_0002a1c6(0,_DAT_001eab7c,puVar1,uVar5);
    *(undefined4 *)(param_1 + 0x144) = *param_2;
  }
  *param_2 = 0;
  if (param_2[0x3e] != 0) {
    FUN_00025ca8();
    param_2[0x3e] = 0;
  }
  if (param_2[0x30] != 0) {
    FUN_001e5a8a();
    param_2[0x30] = 0;
  }
  if ((*(short *)((int)param_2 + 0x12e) != 0) && (param_2[0x8d] != 0)) {
    for (piVar8 = *(int **)(param_1 + 0x130); piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
      if ((*(short *)((int)piVar8 + 0x12e) != 0) && (piVar8[0x8d] != 0)) {
        if (piVar8 != (int *)0x0) goto LAB_001eaa68;
        break;
      }
    }
    if (*(int *)(param_1 + 0x27a4) == 0) {
      FUN_0002a1c6(0,s_mDNS_StopQuery_ERROR_LLQNAT_clie_001eab94);
    }
    else {
      if (*DAT_001eaab4 != 0) {
        FUN_0002a1c6(3,s___Stopping_LLQNAT_001eab7e + 2);
      }
      FUN_001ea568(param_1,param_1 + DAT_001eab90);
      *(undefined4 *)(param_1 + 0x27a4) = 0;
    }
LAB_001eaa68:
    if (*(char *)((int)param_2 + 0xff) == '\x03') {
      param_2[0x40] = 0;
      FUN_001f3f28(param_1,param_2);
      if (param_2[0x3e] != 0) {
        *(undefined4 *)((int)&DAT_00002304 + param_2[0x3e]) = 0;
        param_2[0x3e] = 0;
      }
    }
  }
  if (param_2[0x37] != 0) {
    FUN_000232a8(param_1);
    param_2[0x37] = 0;
  }
  return 0;
}

