// rea decompile_all
// name: FUN_0011c594
// address: 0x11c594
// body: available
// range: 0x11c594-0x11c9f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011c594(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  piVar2 = (int *)FUN_0012ac8c(*(int *)(param_1 + 0x24) + 0x90);
  if (piVar2 == (int *)0x0) {
    return;
  }
  while (iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2), iVar3 != param_2) {
    piVar2 = (int *)FUN_0012ab60(*(int *)(param_1 + 0x24) + 0x90,piVar2);
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2);
  if (iVar3 == 0) {
    return;
  }
  (**(code **)(*piVar2 + 0x84))(piVar2,param_4,*(undefined2 *)(iVar3 + 4));
  iVar11 = 0;
  if (0 < param_5) {
    do {
      psVar10 = (short *)(param_6 + iVar11 * 0xc);
      sVar1 = *psVar10;
      if (sVar1 == 1) {
        FUN_0010e7e0(auStack_48);
        FUN_0010e7e0(auStack_40);
        uVar5 = 0;
        while( true ) {
          piVar6 = *(int **)(param_1 + 0x20);
          if ((*(ushort *)(piVar6 + 0x5b) <= uVar5) ||
             (piVar4 = *(int **)(piVar6[0x5a] + uVar5 * 4), piVar4 == (int *)0x0)) break;
          if (piVar6 != (int *)0x0) {
            piVar6 = (int *)((int)piVar6 + *(int *)(*piVar6 + -0x18));
          }
          (**(code **)(*piVar4 + 0x14))(piVar4,piVar6,local_30,0);
          uVar5 = uVar5 + 1 & 0xfffeffff;
        }
        uVar5 = 0;
        while( true ) {
          piVar6 = *(int **)(param_1 + 0x20);
          if ((*(ushort *)(piVar6 + 0x5b) <= uVar5) ||
             (piVar4 = *(int **)(piVar6[0x5a] + uVar5 * 4), piVar4 == (int *)0x0)) break;
          if (piVar6 != (int *)0x0) {
            piVar6 = (int *)((int)piVar6 + *(int *)(*piVar6 + -0x18));
          }
          (**(code **)(*piVar4 + 0x14))(piVar4,piVar6,local_30,0);
          uVar5 = uVar5 + 1 & 0xfffeffff;
        }
        FUN_0015e89c(auStack_40);
        FUN_0015e89c(auStack_48);
        piVar6 = (int *)(**(code **)(*piVar2 + 0x78))
                                  (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
        FUN_0010e7f4(auStack_40);
        FUN_0010e7f4(auStack_48);
LAB_0011c95c:
        if (piVar6 != (int *)0x0) {
          (**(code **)(*(int *)((int)piVar6 + *(int *)(*piVar6 + -0x38)) + 4))
                    (*(int *)(*piVar6 + -0x38) + (int)piVar6,param_1 + 4);
          puVar7 = (undefined2 *)FUN_0016d7a4(0x14,DAT_0011c9fc);
          if (puVar7 == (undefined2 *)0x0) {
            iVar9 = 0;
          }
          else {
            *puVar7 = 0;
            puVar7[1] = 0;
            iVar8 = FUN_0010e7e0(puVar7 + 2);
            *(undefined4 *)(iVar8 + 8) = 0;
            iVar9 = iVar8 + -4;
            *(undefined2 *)(iVar8 + 0xc) = 0;
          }
          (**(code **)(*(int *)((int)piVar6 + *(int *)(*piVar6 + -0x38)) + 0x14))
                    (*(int *)(*piVar6 + -0x38) + (int)piVar6,iVar9);
        }
      }
      else {
        if (sVar1 == 2) {
          uVar5 = (uint)(ushort)psVar10[1];
          bVar12 = uVar5 == 0x600;
          if (!bVar12) {
            uVar5 = uVar5 + 0xff0;
          }
          if (bVar12 || uVar5 == 0x2000) {
            piVar6 = (int *)(**(code **)(*piVar2 + 0x7c))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
          }
          else {
            piVar6 = (int *)(**(code **)(*piVar2 + 0x7c))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
          }
          goto LAB_0011c95c;
        }
        if (sVar1 == 4) {
          if (psVar10[1] == 0x502) {
            piVar6 = (int *)(**(code **)(*piVar2 + 0x80))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
          }
          else if (psVar10[1] == 0x1011) {
            piVar6 = (int *)(**(code **)(*piVar2 + 0x80))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],
                                       *(undefined4 *)(iVar3 + 0xc));
          }
          else {
            piVar6 = (int *)(**(code **)(*piVar2 + 0x80))
                                      (piVar2,*(undefined4 *)(psVar10 + 4),psVar10[1],0);
          }
          goto LAB_0011c95c;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_5);
  }
  *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + 1;
  return;
}

