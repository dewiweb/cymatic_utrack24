// rea decompile_all
// name: FUN_000e7464
// address: 0xe7464
// body: available
// range: 0xe7464-0xe7a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000e7464(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  ushort *puVar14;
  ushort *puVar15;
  code *pcVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  int iVar21;
  char *local_30;
  undefined4 local_2c [2];
  
  iVar2 = FUN_000b9aac();
  iVar3 = FUN_00084950();
  iVar4 = DAT_000e7a28;
  piVar19 = *(int **)(iVar3 + 0x38);
  iVar21 = DAT_000e7a28 + 0xe8;
  iVar3 = DAT_000e7a28 + 0x158;
  param_1[6] = DAT_000e7a28 + 0x16c;
  param_1[5] = iVar3;
  param_1[4] = iVar4 + 0x144;
  param_1[1] = iVar4 + 0xc0;
  *param_1 = iVar4;
  param_1[2] = iVar4 + 0xd4;
  param_1[3] = iVar21;
  iVar4 = FUN_0010e7e0(param_1 + 7);
  iVar4 = FUN_0010e7e0(iVar4 + 8);
  iVar4 = FUN_0010e7e0(iVar4 + 8);
  iVar4 = FUN_0010e7e0(iVar4 + 8);
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  *(undefined1 *)(iVar4 + 0x34) = 0;
  *(char *)(iVar4 + 0x35) = (char)iVar4 + -0x18;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar3 = FUN_0010f82c(0x30,0);
  piVar5[2] = iVar3;
  *piVar5 = *(int *)(iVar4 + 0x1c);
  piVar5[1] = 1;
  *(int *)(iVar4 + 0x1c) = (int)piVar5;
  puVar6 = (undefined1 *)piVar5[2];
  *(undefined1 **)(iVar4 + 0x24) = puVar6;
  *(undefined1 **)(iVar4 + 0x28) = puVar6 + 0x30;
  *(undefined1 **)(iVar4 + 0x24) = puVar6 + 0x30;
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *puVar6 = 0;
  *(undefined1 **)(iVar4 + 0x2c) = puVar6;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(int *)(*(int *)(iVar4 + 0x2c) + 8) = *(int *)(iVar4 + 0x2c);
  *(int *)(*(int *)(iVar4 + 0x2c) + 0xc) = *(int *)(iVar4 + 0x2c);
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(undefined4 *)(iVar4 + 0x50) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x7c) = 0;
  iVar3 = FUN_0010e7e0(iVar4 + 0x84);
  iVar21 = iVar3 + -0xb8;
  FUN_000b97ac(iVar2,iVar21);
  iVar4 = *(int *)(*(int *)(iVar2 + 0x208) + 8);
  if (iVar4 != *(int *)(iVar2 + 0x208)) {
    do {
      puVar17 = *(undefined4 **)(iVar3 + -0x30);
      piVar5 = (int *)(iVar3 + -0x34);
      puVar20 = (undefined4 *)(iVar4 + 0x10);
      if (puVar17 == *(undefined4 **)(iVar3 + -0x2c)) {
        uVar1 = (int)puVar17 - *piVar5 >> 2;
        if (uVar1 < (uint)((int)*(undefined4 **)(iVar3 + -0x2c) - *piVar5 >> 2)) {
          *(undefined4 **)(iVar3 + -0x30) = puVar17 + 1;
          if (puVar17 != (undefined4 *)0x0) {
            *puVar17 = puVar17[-1];
          }
          puVar12 = puVar17 + -1;
          iVar11 = (int)puVar12 - (int)puVar17;
          if (0 < iVar11 >> 2) {
            puVar18 = puVar17;
            if (iVar11 * 0x20000000 < 0) {
              puVar12 = puVar17 + -2;
              puVar18 = puVar17 + -1;
              *puVar18 = *puVar12;
            }
            for (iVar11 = iVar11 >> 3; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar18[-1] = puVar12[-1];
              puVar12 = puVar12 + -2;
              puVar18 = puVar18 + -2;
              *puVar18 = *puVar12;
            }
          }
          *puVar17 = *puVar20;
        }
        else {
          uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar7 < uVar1 + 1) {
            uVar7 = uVar1 + 1;
          }
          puVar8 = (undefined4 *)FUN_0010f82c(uVar7 << 2,0);
          puVar18 = puVar8;
          for (puVar12 = (undefined4 *)*piVar5; puVar12 != puVar17; puVar12 = puVar12 + 1) {
            if (puVar18 != (undefined4 *)0x0) {
              *puVar18 = *puVar12;
            }
            puVar18 = puVar18 + 1;
          }
          puVar12 = (undefined4 *)(((int)puVar17 - *piVar5 & 0xfffffffcU) + (int)puVar8);
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = *puVar20;
          }
          puVar12 = *(undefined4 **)(iVar3 + -0x30);
          puVar20 = (undefined4 *)(((int)puVar17 - *piVar5 & 0xfffffffcU) + (int)puVar8);
          for (; puVar17 != puVar12; puVar17 = puVar17 + 1) {
            puVar20 = puVar20 + 1;
            if (puVar20 != (undefined4 *)0x0) {
              *puVar20 = *puVar17;
            }
          }
          iVar11 = *piVar5;
          iVar13 = *(int *)(iVar3 + -0x30);
          FUN_0010fa20(iVar11,*(int *)(iVar3 + -0x2c) - iVar11 >> 2,0);
          *(undefined4 **)(iVar3 + -0x2c) = puVar8 + uVar7;
          *(undefined4 **)(iVar3 + -0x30) = puVar8 + (iVar13 - iVar11 >> 2) + 1;
          *piVar5 = (int)puVar8;
        }
      }
      else {
        *(undefined4 **)(iVar3 + -0x30) = puVar17 + 1;
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = *puVar20;
        }
      }
      iVar11 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar11 = *(int *)(iVar4 + 4);
        while (iVar13 = iVar11, iVar4 == *(int *)(iVar13 + 0xc)) {
          iVar4 = iVar13;
          iVar11 = *(int *)(iVar13 + 4);
        }
        if (*(int *)(iVar4 + 0xc) != iVar13) {
          iVar4 = iVar13;
        }
      }
      else {
        do {
          iVar4 = iVar11;
          iVar11 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != *(int *)(iVar2 + 0x208));
  }
  uVar9 = (**(code **)(*piVar19 + 0xa8))
                    (piVar19,*(int *)(iVar2 + 300) - *(int *)(iVar2 + 0x128) & 0xffff,iVar3 + -0xb4)
  ;
  *(undefined4 *)(iVar3 + -0x20) = uVar9;
  uVar9 = (**(code **)(*piVar19 + 0xa4))(piVar19,2,DAT_000e7a2c);
  *(undefined4 *)(iVar3 + -0x1c) = uVar9;
  uVar9 = (**(code **)(*piVar19 + 0xa8))(piVar19,*(uint *)(iVar2 + 0x20c) & 0xffff,iVar3 + -0xb4);
  *(undefined4 *)(iVar3 + -0x18) = uVar9;
  uVar9 = (**(code **)(*piVar19 + 0xa4))(piVar19,0x12,DAT_000e7a30);
  *(undefined4 *)(iVar3 + -0x14) = uVar9;
  uVar9 = (**(code **)(*piVar19 + 0xa4))(piVar19,10,DAT_000e7a34);
  *(undefined4 *)(iVar3 + -0xc) = uVar9;
  uVar9 = (**(code **)(*piVar19 + 0xa4))(piVar19,2,DAT_000e7a38);
  *(undefined4 *)(iVar3 + -0x10) = uVar9;
  puVar17 = (undefined4 *)*DAT_000e7a3c;
  FUN_00159b14(&local_30,iVar2);
  FUN_001da408(local_2c,puVar17 + 6);
  iVar4 = (**(code **)*puVar17)(puVar17);
  if (iVar4 == 0) {
    piVar5 = (int *)FUN_0010eeb8(piVar19,*(undefined2 *)(puVar17 + 4),puVar17[2],
                                 *(undefined1 *)(puVar17 + 3),0,DAT_000e7a4c,local_2c[0]);
    *(int **)(iVar3 + -0x28) = piVar5;
    (**(code **)(*(int *)((int)piVar5 + *(int *)(*piVar5 + -0x1ec)) + 0xb8))
              ((int)piVar5 + *(int *)(*piVar5 + -0x1ec),iVar3 + -0xb0);
    (**(code **)(*piVar19 + 0x20))(piVar19,local_30);
    piVar5 = (int *)((int)*(int **)(iVar3 + -0x28) + *(int *)(**(int **)(iVar3 + -0x28) + -0x1ec));
    pcVar16 = *(code **)(*piVar5 + 0xe4);
  }
  else {
    iVar4 = FUN_0006f6b4();
    piVar10 = (int *)FUN_0010ef54(*(undefined4 *)(iVar4 + 4),1,0,0x7000000,local_2c[0]);
    *(int **)(iVar3 + -0x28) = piVar10;
    piVar5 = (int *)((int)piVar10 + *(int *)(*piVar10 + -0x1ec));
    pcVar16 = *(code **)(*(int *)((int)piVar10 + *(int *)(*piVar10 + -0x1ec)) + 0xe4);
    local_30 = s_Audio_000e7a40;
  }
  (*pcVar16)(piVar5,local_30);
  piVar5 = (int *)(**(code **)(**(int **)(iVar3 + -0x28) + 0x1e4))();
  *(int **)(iVar3 + -0x24) = piVar5;
  puVar14 = (ushort *)(uint)*(byte *)(iVar2 + 0x251);
  puVar15 = puVar14;
  if (puVar14 < &SupervisorCall) {
    puVar15 = (ushort *)(DAT_000e7a48 + (int)puVar14 * 2);
  }
  if (puVar14 < &SupervisorCall) {
    puVar15 = (ushort *)(uint)*puVar15;
  }
  if ((ushort *)0x7 < puVar14) {
    puVar15 = (ushort *)0x0;
  }
  (**(code **)(*piVar5 + 0x30))(piVar5,puVar15);
  (**(code **)(**(int **)(iVar3 + -0x28) + 0x1ec))(*(int **)(iVar3 + -0x28),iVar3 + -0xac);
  FUN_000e3780(iVar3 + -0xa0);
  FUN_000e4aec(iVar21);
  (**(code **)(*piVar19 + 0xe0))(piVar19);
  piVar5 = (int *)(**(code **)(*piVar19 + 0x114))(piVar19,iVar3 + -0xa4);
  *(int **)(iVar3 + -4) = piVar5;
  (**(code **)(*piVar5 + 0x30))(piVar5,1000,0);
  FUN_001da44c(local_2c);
  FUN_001da44c(&local_30);
  return iVar21;
}

