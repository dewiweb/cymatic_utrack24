// rea decompile_all
// name: FUN_00056634
// address: 0x56634
// body: available
// range: 0x56634-0x56a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00056800) */
/* WARNING: Removing unreachable block (ram,0x0005680c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_00056634(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int local_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  iVar1 = (**(code **)(*param_1 + 0x124))(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_000b0f18();
    iVar3 = (**(code **)(*piVar2 + 0x30))(piVar2,*(undefined4 *)(iVar1 + 4));
    if (iVar3 != 0) {
      (**(code **)(*(int *)param_1[0x32] + 0x124))((int *)param_1[0x32],0);
      (**(code **)(*(int *)param_1[0x32] + 0x114))
                ((int *)param_1[0x32],*(undefined4 *)(param_1[1] + 0x48));
      (**(code **)(*(int *)param_1[0x32] + 0x20))((int *)param_1[0x32],0x10);
      (**(code **)(*(int *)param_1[0x32] + 0x28))((int *)param_1[0x32],*(undefined4 *)(iVar3 + 4));
      (**(code **)(*(int *)param_1[0x32] + 0xf4))
                ((int *)param_1[0x32],*(undefined4 *)(param_1[1] + 0x4c));
      (**(code **)(*(int *)param_1[0x32] + 0xfc))
                ((int *)param_1[0x32],*(undefined4 *)(param_1[1] + 0x50));
      (**(code **)(*(int *)param_1[0x32] + 0xa8))
                ((int *)param_1[0x32],param_1[0x35] - param_1[0x34] >> 2);
      (**(code **)(*(int *)param_1[0x32] + 0xa0))
                ((int *)param_1[0x32],*(undefined4 *)(iVar1 + 0x18));
      (**(code **)(*(int *)param_1[0x32] + 0xac))();
      piVar2 = *(int **)(iVar1 + 0x1c);
      iVar3 = 0;
      local_34 = -1;
      if (*(int **)(iVar1 + 0x20) != piVar2) {
        do {
          iVar14 = *piVar2;
          piVar4 = (int *)(**(code **)(*(int *)param_1[0x23] + 0x2c))((int *)param_1[0x23],iVar14);
          if (piVar4 == (int *)0x0) {
            return false;
          }
          iVar5 = FUN_001c7218(piVar4,DAT_00056a74,DAT_00056a70,0xffffffff);
          if (iVar5 != 0) {
            piVar6 = (int *)param_1[0x35];
            piVar13 = param_1 + 0x34;
            if (piVar6 == (int *)param_1[0x36]) {
              uVar9 = (int)piVar6 - *piVar13 >> 2;
              if (uVar9 < (uint)(param_1[0x36] - *piVar13 >> 2)) {
                param_1[0x35] = (int)(piVar6 + 1);
                if (piVar6 != (int *)0x0) {
                  *piVar6 = piVar6[-1];
                }
                *piVar6 = iVar5;
              }
              else {
                uVar7 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
                if (uVar7 < uVar9 + 1) {
                  uVar7 = uVar9 + 1;
                }
                piVar8 = (int *)FUN_00173860(uVar7 << 2,0);
                piVar12 = piVar8;
                for (piVar10 = (int *)*piVar13; piVar10 != piVar6; piVar10 = piVar10 + 1) {
                  if (piVar12 != (int *)0x0) {
                    *piVar12 = *piVar10;
                  }
                  piVar12 = piVar12 + 1;
                }
                piVar10 = (int *)((int)piVar8 + ((int)piVar6 - *piVar13 & 0xfffffffcU));
                if (piVar10 != (int *)0x0) {
                  *piVar10 = iVar5;
                }
                piVar12 = (int *)param_1[0x35];
                piVar10 = (int *)((int)piVar8 + ((int)piVar6 - *piVar13 & 0xfffffffcU));
                for (; piVar6 != piVar12; piVar6 = piVar6 + 1) {
                  piVar10 = piVar10 + 1;
                  if (piVar10 != (int *)0x0) {
                    *piVar10 = *piVar6;
                  }
                }
                iVar5 = *piVar13;
                iVar11 = param_1[0x35];
                FUN_00173a54(iVar5,param_1[0x36] - iVar5 >> 2,0);
                param_1[0x36] = (int)(piVar8 + uVar7);
                *piVar13 = (int)piVar8;
                param_1[0x35] = (int)(piVar8 + (iVar11 - iVar5 >> 2) + 1);
              }
              if (piVar4 == (int *)0x0) {
                return false;
              }
            }
            else {
              param_1[0x35] = (int)(piVar6 + 1);
              if (piVar6 != (int *)0x0) {
                *piVar6 = iVar5;
              }
            }
          }
          if (*(int *)(iVar1 + 0x28) == iVar14) {
            local_34 = iVar3;
          }
          iVar14 = (**(code **)(*piVar4 + 0x2c))(piVar4,0);
          if ((iVar14 != 0) && (iVar14 = FUN_001b2a1c(), iVar14 == -1)) {
            return false;
          }
          iVar14 = (**(code **)(*(int *)param_1[0x32] + 0xb0))((int *)param_1[0x32],piVar4);
          if (iVar14 == 0) {
            return false;
          }
          piVar2 = piVar2 + 1;
          iVar3 = iVar3 + 1;
        } while (*(int **)(iVar1 + 0x20) != piVar2);
      }
      iVar3 = *(int *)(iVar1 + 0x2c);
      if (iVar3 == 0) {
        return false;
      }
      iVar14 = *(int *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      uVar9 = (**(code **)(*(int *)param_1[0x32] + 0x9c))((int *)param_1[0x32]);
      if ((uint)(iVar3 - iVar14 >> 4) <= uVar9) {
        uStack_30 = DAT_00056a78;
        FUN_001f00bc(DAT_00056a7c);
        piStack_2c = (int *)param_1[0x32];
        if (piStack_2c != (int *)0x0) {
          (**(code **)(*piStack_2c + 0xc0))();
        }
        FUN_001f06d4(DAT_00056a7c);
        iVar1 = FUN_00055e84(param_1,&uStack_30,iVar1);
        FUN_00203c10(&uStack_30);
        if ((iVar1 == 1) && (local_34 != -1)) {
          iVar1 = (**(code **)(*(int *)param_1[0x32] + 0x4c))((int *)param_1[0x32],local_34);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

