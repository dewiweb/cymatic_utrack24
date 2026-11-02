// rea decompile_all
// name: FUN_00055564
// address: 0x55564
// body: available
// range: 0x55564-0x55cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00055564(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int extraout_r1;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  
  iVar2 = DAT_00055cdc;
  do {
    while( true ) {
      if ((char)param_1[0x4a] != '\0') {
        return;
      }
      *(undefined1 *)((int)param_1 + 0x126) = 0;
      FUN_000550c0(param_1);
      if ((char)param_1[0x49] != '\0') break;
      while (*(char *)((int)param_1 + 0x126) == '\0') {
        (**(code **)(*param_1 + 0x1c))(param_1,1000);
        FUN_001a0700();
        piVar8 = *(int **)param_1[0x52];
        if (piVar8 != (int *)param_1[0x52]) {
          do {
            if (*(int *)(piVar8[2] + 0x1c) == 0) {
              piVar9 = (int *)*piVar8;
            }
            else {
              piVar9 = (int *)*piVar8;
              if (piVar8 != (int *)param_1[0x52]) {
                *(int **)piVar8[1] = piVar9;
                *(int *)(*piVar8 + 4) = piVar8[1];
                param_1[0x53] = param_1[0x53] + -1;
                *piVar8 = param_1[0x4f];
                param_1[0x4f] = (int)piVar8;
              }
            }
            piVar8 = piVar9;
          } while (piVar9 != (int *)param_1[0x52]);
        }
        FUN_001a0d18(param_1 + 0x32);
      }
    }
    while (*(char *)((int)param_1 + 0x126) == '\0') {
      (**(code **)(*param_1 + 0x1c))(param_1,1000);
      uVar3 = FUN_0017bfc0();
      uVar20 = (uint)((ulonglong)uVar3 * (ulonglong)DAT_00055ce0 >> 0x26);
      iVar4 = 0;
      if (param_1[0x4b] != 0) {
        iVar4 = FUN_000623b4(param_1[0x4b],(int)((ulonglong)uVar3 * (ulonglong)DAT_00055ce0));
      }
      iVar10 = param_1[0x48];
      param_1[0x48] = 0;
      piStack_48 = (int *)0x0;
      puVar5 = (undefined4 *)FUN_0010f82c(0xc,0);
      piVar9 = (int *)FUN_0010f82c(0xc,0);
      puVar5[2] = piVar9;
      puVar5[1] = 1;
      piStack_50 = piVar9 + 3;
      *puVar5 = 0;
      *piVar9 = (int)piVar9;
      piVar9[1] = (int)piVar9;
      FUN_001a0700();
      piVar8 = *(int **)param_1[0x52];
      piStack_4c = piStack_50;
      if (piVar8 != (int *)param_1[0x52]) {
        do {
          piVar16 = (int *)piVar8[2];
          iVar13 = param_1[0x48];
          iVar15 = piVar16[6] + iVar4 + iVar10;
          piVar16[6] = iVar15;
          uVar3 = piVar16[4];
          uVar11 = piVar16[5];
          if (uVar11 < uVar3) {
            if ((uVar11 <= uVar20) && (uVar20 < uVar3)) goto LAB_0005577c;
LAB_00055b24:
            piVar17 = (int *)*piVar8;
          }
          else {
            if ((uVar20 < uVar11) && (uVar3 <= uVar20)) goto LAB_00055b24;
LAB_0005577c:
            if (uVar20 < uVar3) {
              iVar12 = DAT_00055ce4 - uVar3;
            }
            else {
              iVar12 = -uVar3;
            }
            iVar12 = uVar20 + iVar12;
            if (iVar12 == 0) {
              iVar12 = 1;
            }
            uVar11 = FUN_00006158((*piVar16 + iVar15 + iVar13) * 8,iVar12);
            uVar3 = (uint)((ulonglong)uVar11 * (ulonglong)DAT_00055ce0 >> 0x28);
            uVar19 = uVar3 + 1;
            if (uVar19 < 4) {
              uVar19 = 4;
            }
            else if (300 < uVar19) {
              uVar19 = 300;
            }
            FUN_000023ec(uVar3,DAT_00055ce0,(int)((ulonglong)uVar11 * (ulonglong)DAT_00055ce0));
            uVar6 = FUN_000023ec();
            lVar1 = (ulonglong)(uVar19 << 1) * (ulonglong)DAT_00055ce8;
            uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
            FUN_00006158(uVar6,uVar3 >> 1,uVar3,(int)lVar1);
            uVar3 = DAT_00055ce4;
            uVar14 = piVar16[4];
            iVar13 = uVar19 + (extraout_r1 -
                              (uint)((ulonglong)uVar19 * (ulonglong)DAT_00055ce8 >> 0x21));
            uVar11 = uVar14 + iVar13;
            if (DAT_00055ce4 < uVar11) {
              uVar11 = uVar11 + (((int)DAT_00055ce4 >> 0x17) - DAT_00055ce4);
            }
            piVar16[5] = uVar11;
            if (uVar11 < uVar14) {
              if (uVar11 <= uVar20) goto joined_r0x00055844;
              goto LAB_00055b24;
            }
            if (uVar20 < uVar11) {
joined_r0x00055844:
              if (uVar14 <= uVar20) goto LAB_00055b24;
            }
            uVar11 = uVar20 + iVar13;
            piVar16[4] = uVar20;
            piVar16[5] = uVar11;
            if (uVar3 < uVar11) {
              piVar16[5] = uVar11 + DAT_00055cec;
            }
            iVar13 = piVar16[7];
            bVar21 = iVar13 != 0;
            if (bVar21) {
              iVar13 = iVar13 + 1;
            }
            piVar16[6] = 0;
            if (bVar21) {
              piVar16[7] = iVar13;
            }
            iVar13 = *(int *)(piVar16[3] + -4);
            puVar7 = (undefined1 *)FUN_0019d000(param_1[0x4d],iVar13 + 0x18U & 0xffff);
            if (puVar7 == (undefined1 *)0x0) {
LAB_00055998:
              iVar13 = 0;
            }
            else {
              uVar3 = *(ushort *)(piVar16 + 2) | 0x20000000;
              if (piVar16[7] != 0) {
                uVar3 = *(ushort *)(piVar16 + 2) | 0x24000000;
              }
              *puVar7 = (char)(uVar3 >> 0x18);
              puVar7[1] = 0;
              puVar7[2] = (char)(uVar3 >> 8);
              puVar7[3] = (char)uVar3;
              puVar7[4] = (char)param_1[0x44];
              puVar7[5] = *(undefined1 *)((int)param_1 + 0x111);
              puVar7[6] = *(undefined1 *)((int)param_1 + 0x112);
              uVar6 = DAT_00055cf0;
              puVar7[7] = *(undefined1 *)((int)param_1 + 0x113);
              FUN_00003628(puVar7 + 8,uVar6,0x10);
              FUN_00003628(puVar7 + 0x18,piVar16[3],*(undefined4 *)(piVar16[3] + -4));
              *(undefined1 *)(param_1[0x4c] + 8) = 0;
              iVar15 = FUN_0019e1b0(param_1[0x4c],param_1[0x4d],param_1 + 0x45,
                                    *(undefined2 *)((int)param_1 + 0x11a));
              if (iVar15 != 0) goto LAB_00055998;
              iVar13 = iVar13 + 0x42;
            }
            param_1[0x48] = param_1[0x48] + iVar13;
            piVar17 = (int *)*piVar8;
            if (piVar8 != (int *)param_1[0x52]) {
              *(int *)piVar8[1] = *piVar8;
              *(int *)(*piVar8 + 4) = piVar8[1];
              param_1[0x53] = param_1[0x53] + -1;
              *piVar8 = param_1[0x4f];
              param_1[0x4f] = (int)piVar8;
            }
            if ((uint)piVar16[7] < 3) {
              puVar18 = puVar5;
              if (piStack_48 == (int *)0x0) {
                if (piStack_50 == piStack_4c) {
                  uVar3 = 1;
                  if (puVar5 != (undefined4 *)0x0) {
                    uVar11 = puVar5[1];
                    uVar3 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
                    if (uVar3 < uVar11 + 1) {
                      uVar3 = uVar11 + 1;
                    }
                  }
                  puVar18 = (undefined4 *)FUN_0010f82c(0xc,0);
                  uVar6 = FUN_0010f82c(uVar3 * 0xc,0);
                  puVar18[2] = uVar6;
                  *puVar18 = puVar5;
                  puVar18[1] = uVar3;
                  piStack_50 = (int *)puVar18[2];
                  piStack_4c = piStack_50 + uVar3 * 3;
                }
                piVar8 = piStack_50;
                piStack_50 = piStack_50 + 3;
              }
              else {
                piVar8 = piStack_48;
                piStack_48 = (int *)*piStack_48;
              }
              if (piVar8 + 2 != (int *)0x0) {
                piVar8[2] = (int)piVar16;
              }
              *piVar8 = (int)piVar9;
              piVar8[1] = piVar9[1];
              *(int **)piVar9[1] = piVar8;
              piVar9[1] = (int)piVar8;
              puVar5 = puVar18;
            }
            else if (piVar16 != (int *)0x0) {
              if (piVar16[3] != iVar2) {
                piVar8 = (int *)(piVar16[3] + -0xc);
                iVar13 = *piVar8;
                if ((iVar13 == -1) ||
                   ((piVar8 != DAT_00055cf4 && (*piVar8 = iVar13 + -1, iVar13 == 0)))) {
                  FUN_0010fa20(piVar16[3] + -0xc,*(int *)(piVar16[3] + -8) + 0xe,0);
                }
              }
              FUN_0019f30c(piVar16);
            }
          }
          piVar8 = piVar17;
        } while (piVar17 != (int *)param_1[0x52]);
      }
      for (piVar8 = (int *)*piVar9; piVar8 != piVar9; piVar8 = (int *)*piVar8) {
        piVar16 = (int *)param_1[0x4f];
        iVar4 = param_1[0x52];
        piVar17 = param_1 + 0x4e;
        if (piVar16 == (int *)0x0) {
          if (param_1[0x50] == param_1[0x51]) {
            uVar20 = 1;
            if (*piVar17 != 0) {
              uVar3 = *(uint *)(*piVar17 + 4);
              uVar20 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
              if (uVar20 < uVar3 + 1) {
                uVar20 = uVar3 + 1;
              }
            }
            piVar16 = (int *)FUN_0010f82c(0xc,0);
            iVar10 = FUN_0010f82c(uVar20 * 0xc,0);
            piVar16[2] = iVar10;
            *piVar16 = *piVar17;
            piVar16[1] = uVar20;
            *piVar17 = (int)piVar16;
            iVar10 = piVar16[2];
            param_1[0x50] = iVar10;
            param_1[0x51] = iVar10 + uVar20 * 0xc;
          }
          piVar16 = (int *)param_1[0x50];
          param_1[0x50] = (int)(piVar16 + 3);
        }
        else {
          param_1[0x4f] = *piVar16;
        }
        if (piVar16 + 2 != (int *)0x0) {
          piVar16[2] = piVar8[2];
        }
        *piVar16 = iVar4;
        piVar16[1] = *(int *)(iVar4 + 4);
        **(undefined4 **)(iVar4 + 4) = piVar16;
        *(int **)(iVar4 + 4) = piVar16;
        param_1[0x53] = param_1[0x53] + 1;
      }
      FUN_001a0d18();
      if (piVar9 != (int *)0x0) {
        piVar8 = (int *)*piVar9;
        while (piVar16 = piVar8, piVar16 != piVar9) {
          piVar8 = piVar9;
          if (piVar16 != piVar9) {
            piVar8 = (int *)*piVar16;
            *(int *)piVar16[1] = *piVar16;
            *(int *)(*piVar16 + 4) = piVar16[1];
            *piVar16 = (int)piStack_48;
            piStack_48 = piVar16;
          }
        }
        *piVar9 = (int)piStack_48;
        while (puVar5 != (undefined4 *)0x0) {
          puVar18 = (undefined4 *)*puVar5;
          FUN_0010fa20(puVar5[2],puVar5[1],0);
          FUN_0010fa20(puVar5,1,0);
          puVar5 = puVar18;
        }
      }
    }
  } while( true );
}

