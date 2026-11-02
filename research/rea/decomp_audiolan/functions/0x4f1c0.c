// rea decompile_all
// name: FUN_0004f1c0
// address: 0x4f1c0
// body: available
// range: 0x4f1c0-0x4f693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0004f3cc) */
/* WARNING: Removing unreachable block (ram,0x0004f3d8) */

int FUN_0004f1c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uStack_38;
  int *piStack_34;
  uint uStack_30;
  int iStack_2c;
  
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x124))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = param_1[0x35];
    if (param_1[0x34] != iVar2) {
      param_1[0x35] = iVar2 - (iVar2 - param_1[0x34] & 0xfffffffcU);
    }
    piVar3 = (int *)FUN_0008b5d4();
    iVar2 = (**(code **)(*piVar3 + 0x30))(piVar3,*(undefined4 *)(iVar1 + 8));
    if (iVar2 != 0) {
      (**(code **)(*(int *)param_1[0x30] + 0x108))((int *)param_1[0x30],0);
      (**(code **)(*(int *)param_1[0x30] + 0xd8))
                ((int *)param_1[0x30],*(undefined4 *)(param_1[1] + 0x48));
      (**(code **)(*(int *)param_1[0x30] + 0x20))((int *)param_1[0x30],0x10);
      (**(code **)(*(int *)param_1[0x30] + 0xe4))((int *)param_1[0x30],0xff);
      (**(code **)(*(int *)param_1[0x30] + 0x28))((int *)param_1[0x30],*(undefined4 *)(iVar2 + 4));
      (**(code **)(*(int *)param_1[0x30] + 0xe4))
                ((int *)param_1[0x30],*(undefined4 *)(param_1[1] + 0x44));
      (**(code **)(*(int *)param_1[0x30] + 0xa8))
                ((int *)param_1[0x30],param_1[0x35] - param_1[0x34] >> 2);
      (**(code **)(*(int *)param_1[0x30] + 0xa0))
                ((int *)param_1[0x30],*(undefined4 *)(iVar1 + 0x20));
      (**(code **)(*(int *)param_1[0x30] + 0xac))();
      piVar3 = *(int **)(iVar1 + 0x28);
      iVar2 = 0;
      iStack_2c = -1;
      if (*(int **)(iVar1 + 0x2c) != piVar3) {
        do {
          iVar14 = *piVar3;
          piVar4 = (int *)(**(code **)(*(int *)param_1[0x23] + 0x2c))((int *)param_1[0x23],iVar14);
          if (piVar4 == (int *)0x0) {
            return 0;
          }
          iVar5 = FUN_0016deb0(piVar4,DAT_0004f698,DAT_0004f694,0xffffffff);
          if (iVar5 != 0) {
            piVar6 = (int *)param_1[0x35];
            piVar13 = param_1 + 0x34;
            if (piVar6 == (int *)param_1[0x36]) {
              uVar8 = (int)piVar6 - *piVar13 >> 2;
              if (uVar8 < (uint)(param_1[0x36] - *piVar13 >> 2)) {
                param_1[0x35] = (int)(piVar6 + 1);
                if (piVar6 != (int *)0x0) {
                  *piVar6 = piVar6[-1];
                }
                *piVar6 = iVar5;
              }
              else {
                uStack_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
                if (uStack_30 < uVar8 + 1) {
                  uStack_30 = uVar8 + 1;
                }
                piVar7 = (int *)FUN_0010f82c(uStack_30 << 2,0);
                piVar12 = piVar7;
                for (piVar10 = (int *)*piVar13; piVar10 != piVar6; piVar10 = piVar10 + 1) {
                  if (piVar12 != (int *)0x0) {
                    *piVar12 = *piVar10;
                  }
                  piVar12 = piVar12 + 1;
                }
                piVar10 = (int *)((int)piVar7 + ((int)piVar6 - *piVar13 & 0xfffffffcU));
                if (piVar10 != (int *)0x0) {
                  *piVar10 = iVar5;
                }
                piVar12 = (int *)param_1[0x35];
                piVar10 = (int *)((int)piVar7 + ((int)piVar6 - *piVar13 & 0xfffffffcU));
                for (; piVar6 != piVar12; piVar6 = piVar6 + 1) {
                  piVar10 = piVar10 + 1;
                  if (piVar10 != (int *)0x0) {
                    *piVar10 = *piVar6;
                  }
                }
                iVar5 = *piVar13;
                iVar11 = param_1[0x35];
                FUN_0010fa20(iVar5,param_1[0x36] - iVar5 >> 2,0);
                param_1[0x36] = (int)(piVar7 + uStack_30);
                *piVar13 = (int)piVar7;
                param_1[0x35] = (int)(piVar7 + (iVar11 - iVar5 >> 2) + 1);
              }
            }
            else {
              param_1[0x35] = (int)(piVar6 + 1);
              if (piVar6 != (int *)0x0) {
                *piVar6 = iVar5;
              }
            }
          }
          if (*(int *)(iVar1 + 0x24) == iVar14) {
            iStack_2c = iVar2;
          }
          iVar14 = (**(code **)(*piVar4 + 0x2c))(piVar4,0);
          if ((iVar14 != 0) && (iVar14 = FUN_00154ddc(), iVar14 == -1)) {
            return 0;
          }
          iVar14 = (**(code **)(*(int *)param_1[0x30] + 0xb0))((int *)param_1[0x30],piVar4);
          if (iVar14 == 0) {
            return 0;
          }
          piVar3 = piVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (*(int **)(iVar1 + 0x2c) != piVar3);
        if (iStack_2c != -1) {
          iVar14 = (**(code **)(*(int *)param_1[0x30] + 0x4c))((int *)param_1[0x30],iStack_2c);
          iVar2 = 0;
          if (iVar14 != 0) {
            iVar2 = *(int *)(iVar1 + 0x34);
          }
          if (iVar14 == 0 || iVar2 == 0) {
            return iVar2;
          }
          iVar14 = *(int *)(iVar2 + 0xc);
          iVar2 = *(int *)(iVar2 + 0x10);
          uVar8 = (**(code **)(*(int *)param_1[0x30] + 0x9c))((int *)param_1[0x30]);
          uVar9 = DAT_0004f69c;
          if ((uint)(iVar2 - iVar14 >> 4) <= uVar8) {
            uStack_38 = DAT_0004f69c;
            FUN_001a0700(DAT_0004f6a0);
            piStack_34 = (int *)param_1[0x30];
            if (piStack_34 != (int *)0x0) {
              (**(code **)(*piStack_34 + 0xc0))();
            }
            FUN_001a0d18(DAT_0004f6a0);
            iVar1 = FUN_0004fb98(param_1,&uStack_38,iVar1);
            FUN_001bb864(&uStack_38);
            if (iVar1 == 1) {
              uStack_38 = uVar9;
              FUN_001a0700(DAT_0004f6a0);
              piStack_34 = (int *)param_1[0x30];
              if (piStack_34 != (int *)0x0) {
                (**(code **)(*piStack_34 + 0xc0))();
              }
              FUN_001a0d18(DAT_0004f6a0);
              uVar9 = (**(code **)(*param_1 + 0x110))(param_1,&uStack_38);
              FUN_001bb864(&uStack_38);
              (**(code **)(*(int *)param_1[0x30] + 0xe0))((int *)param_1[0x30],uVar9);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

