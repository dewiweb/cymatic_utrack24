// rea decompile_all
// name: FUN_00083ac0
// address: 0x83ac0
// body: available
// range: 0x83ac0-0x83e13 inclusive
// range: 0x83e3c-0x8408f inclusive
// range: 0x841f8-0x842b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00083c34) */
/* WARNING: Removing unreachable block (ram,0x00083b5c) */
/* WARNING: Removing unreachable block (ram,0x00083c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00083ac0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *local_84;
  undefined1 auStack_80 [64];
  int local_40 [5];
  int iStack_2c;
  undefined4 local_28;
  
  local_84 = _DAT_00083e14;
  uVar17 = 1;
  iStack_2c = param_1;
  local_28 = param_2;
  iVar4 = FUN_00042a00(param_2,s_I_ValidSamplingRates_00083e16 + 2,&local_84);
  puVar2 = DAT_00083e2c;
  if (iVar4 != 0) {
    uVar16 = 0;
    uVar7 = 0;
    do {
      while( true ) {
        if (1 < local_84[-3] + 1) {
          uVar5 = local_84[-1];
          if (0xfffffff1 < uVar5) {
            FUN_0010f7cc(8,DAT_00083e30,DAT_00083e30,uVar5,0xfffffff1);
          }
          puVar6 = puVar2;
          if (uVar5 != 0) {
            puVar6 = (undefined4 *)FUN_0010f82c(uVar5 + 0xe,0);
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
            }
            *puVar6 = 0;
            puVar6[1] = uVar5;
            puVar6[2] = uVar5;
            puVar11 = (undefined1 *)((int)puVar6 + uVar5 + 0xc);
            if (puVar11 != (undefined1 *)0x0) {
              *puVar11 = 0;
            }
          }
          FUN_00003628(puVar6 + 3,local_84,local_84[-1]);
          FUN_001da314(&local_84);
          local_84 = puVar6 + 3;
        }
        if (local_84 + -3 != puVar2) {
          local_84[-3] = 0xffffffff;
        }
        bVar1 = *(byte *)((int)local_84 + uVar16);
        if (9 < bVar1 - 0x30) break;
        uVar16 = uVar16 + 1;
      }
      if (uVar7 < uVar16) {
        if (1 < local_84[-3] + 1) {
          uVar5 = local_84[-1];
          if (0xfffffff1 < uVar5) {
            FUN_0010f7cc(8,DAT_00083e30,DAT_00083e30,uVar5,0xfffffff1);
          }
          puVar6 = puVar2;
          if (uVar5 != 0) {
            puVar6 = (undefined4 *)FUN_0010f82c(uVar5 + 0xe,0);
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
            }
            *puVar6 = 0;
            puVar6[1] = uVar5;
            puVar6[2] = uVar5;
            puVar11 = (undefined1 *)((int)puVar6 + uVar5 + 0xc);
            if (puVar11 != (undefined1 *)0x0) {
              *puVar11 = 0;
            }
          }
          FUN_00003628(puVar6 + 3,local_84,local_84[-1]);
          FUN_001da314(&local_84);
          local_84 = puVar6 + 3;
        }
        if (local_84 + -3 != puVar2) {
          local_84[-3] = 0xffffffff;
        }
        *(undefined1 *)((int)local_84 + uVar16) = 0;
        uVar7 = FUN_00003220((int)local_84 + uVar7,0,0);
        if (uVar7 < 8) {
          iVar4 = *(int *)(DAT_00083e34 + uVar7 * 4);
          piVar8 = (int *)*DAT_00083e38;
          piVar12 = (int *)DAT_00083e38[1];
          if ((int)piVar12 - (int)piVar8 >> 2 != 0) {
            if (piVar12 != piVar8) {
              do {
                if (*piVar8 == iVar4) goto LAB_00083d60;
                piVar8 = piVar8 + 1;
              } while (piVar12 != piVar8);
              goto LAB_00083f24;
            }
            iVar4 = 0xff;
          }
LAB_00083d60:
          if (iVar4 != 0xff) {
            piVar8 = *(int **)(param_1 + 0x18);
            piVar12 = (int *)(param_1 + 0x14);
            if (piVar8 == *(int **)(param_1 + 0x1c)) {
              uVar7 = (int)piVar8 - *piVar12 >> 2;
              if (uVar7 < (uint)((int)*(int **)(param_1 + 0x1c) - *piVar12 >> 2)) {
                *(int **)(param_1 + 0x18) = piVar8 + 1;
                if (piVar8 != (int *)0x0) {
                  *piVar8 = piVar8[-1];
                }
                piVar12 = piVar8 + -1;
                iVar14 = (int)piVar12 - (int)piVar8;
                if (0 < iVar14 >> 2) {
                  piVar13 = piVar8;
                  if (iVar14 * 0x20000000 < 0) {
                    piVar12 = piVar8 + -2;
                    piVar13 = piVar8 + -1;
                    *piVar13 = *piVar12;
                  }
                  for (iVar14 = iVar14 >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
                    piVar13[-1] = piVar12[-1];
                    piVar12 = piVar12 + -2;
                    piVar13 = piVar13 + -2;
                    *piVar13 = *piVar12;
                  }
                }
                *piVar8 = iVar4;
              }
              else {
                uVar5 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
                if (uVar5 < uVar7 + 1) {
                  uVar5 = uVar7 + 1;
                }
                piVar9 = (int *)FUN_0010f82c(uVar5 << 2,0);
                piVar15 = piVar9;
                for (piVar13 = (int *)*piVar12; piVar13 != piVar8; piVar13 = piVar13 + 1) {
                  if (piVar15 != (int *)0x0) {
                    *piVar15 = *piVar13;
                  }
                  piVar15 = piVar15 + 1;
                }
                piVar13 = (int *)(((int)piVar8 - *piVar12 & 0xfffffffcU) + (int)piVar9);
                if (piVar13 != (int *)0x0) {
                  *piVar13 = iVar4;
                }
                piVar15 = *(int **)(param_1 + 0x18);
                piVar13 = (int *)(((int)piVar8 - *piVar12 & 0xfffffffcU) + (int)piVar9);
                for (; piVar8 != piVar15; piVar8 = piVar8 + 1) {
                  piVar13 = piVar13 + 1;
                  if (piVar13 != (int *)0x0) {
                    *piVar13 = *piVar8;
                  }
                }
                iVar4 = *piVar12;
                iVar14 = *(int *)(param_1 + 0x18);
                FUN_0010fa20(iVar4,*(int *)(param_1 + 0x1c) - iVar4 >> 2,0);
                *(int **)(param_1 + 0x1c) = piVar9 + uVar5;
                *(int **)(param_1 + 0x18) = piVar9 + (iVar14 - iVar4 >> 2) + 1;
                *piVar12 = (int)piVar9;
              }
            }
            else {
              *(int **)(param_1 + 0x18) = piVar8 + 1;
              if (piVar8 != (int *)0x0) {
                *piVar8 = iVar4;
              }
            }
          }
        }
      }
LAB_00083f24:
      if (bVar1 == 0) goto code_r0x00083f34;
      uVar16 = uVar16 + 1;
      uVar7 = uVar16;
    } while( true );
  }
  FUN_000028a4(s_ERROR__AudioModeConfig__load__No_000840c8,s_I_ValidSamplingRates_00083e16 + 2);
LAB_00083f60:
  iVar4 = FUN_00048ef8(local_28,s_MidiIO_000840f0,local_40);
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  else {
    if (local_40[0] == 0) {
      uVar3 = 0;
    }
    else {
      if (local_40[0] != 1) {
        if (local_40[0] == 2) {
          *(undefined1 *)(param_1 + 9) = 2;
        }
        else if (local_40[0] == 3) {
          *(undefined1 *)(param_1 + 9) = 3;
        }
        else {
          *(undefined1 *)(param_1 + 9) = 0;
          FUN_000028a4(s_ERROR__AudioModeConfig__load__In_000840f8);
          uVar17 = 0;
        }
        goto LAB_00083fd4;
      }
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 9) = uVar3;
  }
LAB_00083fd4:
  iVar4 = FUN_00048ef8(local_28,s_DigitalIOFormat_0008412c,local_40);
  if (iVar4 == 0) {
    FUN_000028a4(s_ERROR__AudioModeConfig__readFrom_00084178,s_DigitalIOFormat_0008412c);
  }
  else {
    if (local_40[0] == 0) {
      uVar3 = 0;
    }
    else {
      if (local_40[0] != 1) {
        if (local_40[0] == 2) {
          *(undefined1 *)(param_1 + 8) = 2;
        }
        else if (local_40[0] == 3) {
          *(undefined1 *)(param_1 + 8) = 3;
        }
        else {
          *(undefined1 *)(param_1 + 8) = 0;
          FUN_000028a4(s_ERROR__AudioModeConfig__load__In_0008413c);
          uVar17 = 0;
        }
        goto LAB_0008404c;
      }
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 8) = uVar3;
  }
LAB_0008404c:
  iVar4 = FUN_00048ef8(local_28,s_AVInChannels_000841a8,local_40);
  if (iVar4 == 0) {
    FUN_000028a4(s_ERROR__AudioModeConfig__load__No_000840c8,s_AVInChannels_000841a8);
  }
  else if (local_40[0] - 2U < 0x1f) {
    *(int *)(param_1 + 0xc) = local_40[0];
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 8;
    FUN_000028a4(s_ERROR__AudioModeConfig__load__In_000841b8);
    uVar17 = 0;
  }
  iVar4 = FUN_00048ef8(local_28,s_AVOutChannels_000842b8,local_40);
  if (iVar4 == 0) {
    FUN_000028a4(s_ERROR__AudioModeConfig__load__No_000840c8,s_AVOutChannels_000842b8);
  }
  else if (local_40[0] - 2U < 0x1f) {
    *(int *)(param_1 + 0x10) = local_40[0];
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 8;
    FUN_000028a4(s_ERROR__AudioModeConfig__load__In_000842c8);
    uVar17 = 0;
  }
  FUN_000c49dc(auStack_80);
  iVar4 = FUN_000c3b64(auStack_80,local_28);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_000c4a24();
      FUN_0019f30c();
    }
    iVar4 = FUN_001a0808(0x40,1);
    uVar10 = 0;
    if (iVar4 != 0) {
      uVar10 = FUN_000c4754(iVar4,auStack_80);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar10;
  }
  FUN_000c4a24(auStack_80);
  FUN_001da314(&local_84);
  return uVar17;
code_r0x00083f34:
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) {
    FUN_000028a4(s_ERROR__AudioModeConfig__load__No_00084090);
    uVar17 = 0;
  }
  goto LAB_00083f60;
}

