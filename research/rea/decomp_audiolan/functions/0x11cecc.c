// rea decompile_all
// name: FUN_0011cecc
// address: 0x11cecc
// body: available
// range: 0x11cecc-0x11d2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011cecc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  piVar2 = (int *)FUN_0011be80(param_1,param_2);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2);
  if (iVar3 == 0) {
    return;
  }
  (**(code **)(*piVar2 + 0x84))(piVar2,param_4,*(undefined2 *)(iVar3 + 4));
  iVar12 = 0;
  if (0 < param_5) {
    uStack_40 = 9;
    uStack_38 = 3;
    uStack_3c = 8;
    do {
      psVar10 = (short *)(param_6 + iVar12 * 0xc);
      sVar1 = *psVar10;
      if (sVar1 == 1) {
        FUN_0010e7e0(auStack_50);
        FUN_0010e7e0(auStack_48);
        uVar11 = 0;
        while( true ) {
          piVar8 = *(int **)(param_1 + 0x20);
          if ((*(ushort *)(piVar8 + 0x5b) <= uVar11) ||
             (piVar4 = *(int **)(piVar8[0x5a] + uVar11 * 4), piVar4 == (int *)0x0)) break;
          if (piVar8 != (int *)0x0) {
            piVar8 = (int *)((int)piVar8 + *(int *)(*piVar8 + -0x18));
          }
          (**(code **)(*piVar4 + 0x28))(piVar4,piVar8,local_30,0);
          uVar11 = uVar11 + 1 & 0xfffeffff;
        }
        uVar11 = 0;
        while( true ) {
          piVar8 = *(int **)(param_1 + 0x20);
          if ((*(ushort *)(piVar8 + 0x5b) <= uVar11) ||
             (piVar4 = *(int **)(piVar8[0x5a] + uVar11 * 4), piVar4 == (int *)0x0)) break;
          if (piVar8 != (int *)0x0) {
            piVar8 = (int *)((int)piVar8 + *(int *)(*piVar8 + -0x18));
          }
          (**(code **)(*piVar4 + 0x28))(piVar4,piVar8,local_30,0);
          uVar11 = uVar11 + 1 & 0xfffeffff;
        }
        FUN_0015e89c(auStack_48);
        FUN_0015e89c(auStack_50);
        piVar8 = (int *)(**(code **)(*piVar2 + 0x78))
                                  (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
        FUN_0010e7f4(auStack_48);
        FUN_0010e7f4(auStack_50);
LAB_0011d1f8:
        if (piVar8 != (int *)0x0) {
          (**(code **)(*(int *)((int)piVar8 + *(int *)(*piVar8 + -0x38)) + 4))
                    (*(int *)(*piVar8 + -0x38) + (int)piVar8,param_1 + 4);
          puVar6 = (undefined2 *)FUN_0016d7a4(0x14,DAT_0011d2e0);
          if (puVar6 == (undefined2 *)0x0) {
            iVar9 = 0;
          }
          else {
            *puVar6 = 0;
            puVar6[1] = 0;
            iVar7 = FUN_0010e7e0(puVar6 + 2);
            *(undefined4 *)(iVar7 + 8) = 0;
            iVar9 = iVar7 + -4;
            *(undefined2 *)(iVar7 + 0xc) = 0;
          }
          (**(code **)(*(int *)((int)piVar8 + *(int *)(*piVar8 + -0x38)) + 0x14))
                    (*(int *)(*piVar8 + -0x38) + (int)piVar8,iVar9);
        }
      }
      else {
        if (sVar1 == 2) {
          if (psVar10[1] == 0x1011) {
            (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + 0x1a0) + 0x50))();
            piVar8 = (int *)(**(code **)(*piVar2 + 0x7c))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),DAT_0011d2d8,0);
          }
          else if (psVar10[1] == 0x1012) {
            uVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + 0x1a0) + 0x54))();
            *(undefined4 *)(iVar3 + 8) = uVar5;
            piVar8 = (int *)(**(code **)(*piVar2 + 0x7c))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),DAT_0011d2dc,0);
          }
          else {
            piVar8 = (int *)(**(code **)(*piVar2 + 0x7c))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
          }
          goto LAB_0011d1f8;
        }
        if (sVar1 == 4) {
          piVar8 = (int *)(**(code **)(*piVar2 + 0x80))
                                    (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
          goto LAB_0011d1f8;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_5);
  }
  *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + 1;
  return;
}

