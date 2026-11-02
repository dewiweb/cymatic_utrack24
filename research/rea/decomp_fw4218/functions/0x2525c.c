// rea decompile_all
// name: FUN_0002525c
// address: 0x2525c
// body: available
// range: 0x2525c-0x254e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002525c(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  uVar3 = FUN_001e8284();
  *(undefined2 *)((int)param_2 + 0x12e) = uVar3;
  piVar7 = param_2 + 0x4c;
  if (param_2[0xe] == 0) {
    piVar5 = piVar7;
    FUN_00025cca();
    iVar8 = FUN_001c6fe0();
    piVar9 = *(int **)(iVar8 * 4 + param_1 + 0x15c);
    iVar8 = param_2[1];
    while ((piVar9 != (int *)0x0 &&
           ((piVar9[1] != iVar8 || (iVar10 = FUN_000400ea(piVar9[4],piVar5), iVar10 == 0))))) {
      piVar9 = (int *)*piVar9;
    }
    bVar2 = false;
    piVar4 = (int *)param_2[0x32];
    for (piVar5 = *(int **)(param_1 + 0x134); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
      if (piVar5 == param_2) {
        bVar1 = true;
        goto LAB_000252f0;
      }
    }
    bVar1 = false;
LAB_000252f0:
    param_2[0x32] = (int)param_3;
    if (piVar9 != (int *)0x0) {
      for (piVar5 = (int *)piVar9[2]; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
        iVar8 = FUN_000401cc(piVar5 + 1,param_2);
        if (iVar8 != 0) {
          if (*DAT_000254ec != 0) {
            iVar8 = piVar5[10];
            if (iVar8 != 0) {
              iVar8 = iVar8 + 8;
            }
            FUN_0002a1c6(3,DAT_000254f0,piVar5[8],iVar8);
          }
          bVar2 = true;
          break;
        }
      }
    }
    param_2[0x32] = (int)piVar4;
    if ((piVar9 != (int *)0x0) && (piVar9 = (int *)piVar9[2], piVar9 != (int *)0x0)) {
      do {
        iVar8 = FUN_000401cc(piVar9 + 1,param_2);
        if (iVar8 != 0) {
          if (bVar2) {
            if (*DAT_000254ec != 0) {
              piVar4 = param_3;
              if (param_3 != (int *)0x0) {
                piVar4 = param_3 + 2;
              }
              iVar8 = piVar9[10];
              if (iVar8 != 0) {
                iVar8 = iVar8 + 8;
              }
              FUN_0002a1c6(3,DAT_000254f4,piVar9[8],iVar8,piVar4);
            }
            if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30) + 1) {
              FUN_0002a1c6(0,DAT_000254f8,*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30),piVar4);
            }
            piVar9[0xc] = *(int *)(param_1 + 0xdc) + *DAT_000254fc * -0x3c;
            piVar9[0x11] = 4;
            piVar9[3] = 0;
            FUN_0004419c(param_1,piVar9);
            if (bVar1) {
              if (piVar9[0x10] != 0) {
                piVar4 = piVar7;
                FUN_0002a1c6(0,DAT_00025500,piVar9[0x10],param_2,piVar7);
                piVar9[0x10] = 0;
              }
              goto LAB_00025406;
            }
          }
          if (*DAT_000254ec != 0) {
            piVar4 = param_3;
            if (param_3 != (int *)0x0) {
              piVar4 = param_3 + 2;
            }
            iVar8 = piVar9[10];
            if (iVar8 != 0) {
              iVar8 = iVar8 + 8;
            }
            FUN_0002a1c6(3,DAT_00025504,piVar9[8],iVar8,piVar4,piVar9[0x10]);
          }
          piVar9[10] = (int)param_3;
        }
LAB_00025406:
        piVar9 = (int *)*piVar9;
      } while (piVar9 != (int *)0x0);
    }
    if (bVar2) {
      if (bVar1) {
        if (*DAT_000254ec != 0) {
          uVar6 = FUN_00025930((short)param_2[0x8c]);
          FUN_0002a1c6(3,DAT_00025508,param_2,piVar7,uVar6);
        }
      }
      else if ((param_2[0x91] == 0) || (param_2[0x2d] == 0)) {
        if (*DAT_000254ec != 0) {
          uVar6 = FUN_00025930((short)param_2[0x8c]);
          FUN_0002a1c6(3,DAT_00025510,param_2,piVar7,uVar6);
        }
        param_2[0x31] = 1;
        for (piVar7 = (int *)*param_2; piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
          if ((int *)piVar7[0xe] == param_2) {
            piVar7[0x31] = 1;
          }
        }
      }
      else if (*DAT_000254ec != 0) {
        uVar6 = FUN_00025930((short)param_2[0x8c]);
        FUN_0002a1c6(3,DAT_0002550c,param_2,piVar7,uVar6);
      }
    }
  }
  else {
    FUN_0002a1c6(0,DAT_000254e8,piVar7);
  }
  param_2[0x32] = (int)param_3;
  for (piVar7 = (int *)*param_2; piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
    if ((int *)piVar7[0xe] == param_2) {
      iVar10 = param_2[0x34];
      iVar8 = param_2[0x33];
      piVar7[0x32] = (int)param_3;
      piVar7[0x34] = iVar10;
      piVar7[0x33] = iVar8;
    }
  }
  return;
}

