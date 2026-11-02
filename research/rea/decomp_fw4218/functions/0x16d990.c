// rea decompile_all
// name: FUN_0016d990
// address: 0x16d990
// body: available
// range: 0x16d990-0x16dd37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16dd34 to 0x167108 FUN_00167108 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0016d990(int param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  ushort uVar15;
  undefined8 uVar16;
  
  iVar6 = param_1 + 0x4bc;
  bVar3 = false;
  uVar7 = *(undefined4 *)(param_2 + 0x48);
  uVar14 = 0;
  bVar4 = false;
  uVar15 = 0;
  if (*(short *)(param_2 + 0x12) != 0) {
    do {
      uVar8 = FUN_001bd87c(param_2 + 0xc,uVar15);
      iVar10 = *(int *)(param_1 + 0x4a4);
      if (*(int *)(param_1 + 0x4a4) != 0) {
        do {
          uVar16 = FUN_00172670(uVar8,iVar10);
          iVar12 = (int)((ulonglong)uVar16 >> 0x20);
          iVar9 = (int)uVar16;
          if (0 < iVar9) {
            iVar12 = 1;
          }
          if (iVar9 < 0) {
            iVar12 = 0;
          }
          if (iVar9 == 0) {
            if (iVar10 != 0) {
              if (((*(int *)(iVar10 + 0xc) != 0) &&
                  (iVar9 = FUN_0017222c(uVar7,*(undefined4 *)(iVar10 + 0x48)), iVar9 != 0)) &&
                 (*(char *)(*(int *)(iVar10 + 0xc) + 0xb1) == '\0')) {
                bVar3 = true;
                *(undefined1 *)(*(int *)(iVar10 + 0xc) + 0xb2) = 1;
              }
              goto LAB_0016dad8;
            }
            break;
          }
          iVar9 = *(int *)(iVar10 + iVar12 * 4 + 0x5c);
          if (iVar9 == 0) break;
          bVar2 = 0;
          if (iVar12 != 0) {
            bVar2 = *(byte *)(iVar10 + 100);
          }
          iVar10 = iVar9;
        } while (iVar12 == 0 || (bVar2 & 0x80) == 0);
      }
      uVar8 = FUN_001bd87c(param_2 + 0xc,uVar15);
      iVar9 = FUN_00161424(iVar6,uVar8);
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = *(int *)(iVar9 + 0x18);
      }
      if (iVar9 == 0 || iVar10 == 0) {
        uVar8 = FUN_001bd87c(param_2 + 0xc,uVar15);
        FUN_0016c114(param_1,param_2,uVar8);
      }
      else {
        if ((*(uint *)(iVar10 + 0xc) & 0x40000000) != 0) {
          bVar4 = true;
        }
        uVar11 = FUN_00160f08(iVar6);
        uVar14 = uVar14 | uVar11;
      }
LAB_0016dad8:
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ushort *)(param_2 + 0x12));
  }
  uVar15 = 0;
  if (*(short *)(param_2 + 0x1a) != 0) {
    do {
      uVar8 = FUN_001bd87c(param_2 + 0x14,uVar15);
      iVar10 = *(int *)(param_1 + 0x4a4);
      if (*(int *)(param_1 + 0x4a4) != 0) {
        do {
          uVar16 = FUN_00172670(uVar8,iVar10);
          iVar12 = (int)((ulonglong)uVar16 >> 0x20);
          iVar9 = (int)uVar16;
          if (0 < iVar9) {
            iVar12 = 1;
          }
          if (iVar9 < 0) {
            iVar12 = 0;
          }
          if (iVar9 == 0) {
            if (iVar10 != 0) {
              if (((*(int *)(iVar10 + 0xc) != 0) &&
                  (iVar9 = FUN_0017222c(uVar7,*(undefined4 *)(iVar10 + 0x48)), iVar9 != 0)) &&
                 (*(char *)(*(int *)(iVar10 + 0xc) + 0xb1) == '\0')) {
                bVar3 = true;
                *(undefined1 *)(*(int *)(iVar10 + 0xc) + 0xb2) = 1;
              }
              goto LAB_0016dc04;
            }
            break;
          }
          iVar9 = *(int *)(iVar10 + iVar12 * 4 + 0x5c);
          if (iVar9 == 0) break;
          bVar2 = 0;
          if (iVar12 != 0) {
            bVar2 = *(byte *)(iVar10 + 100);
          }
          iVar10 = iVar9;
        } while (iVar12 == 0 || (bVar2 & 0x80) == 0);
      }
      uVar8 = FUN_001bd87c(param_2 + 0x14,uVar15);
      iVar9 = FUN_00161424(iVar6,uVar8);
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = *(int *)(iVar9 + 0x18);
      }
      if (iVar9 == 0 || iVar10 == 0) {
        uVar8 = FUN_001bd87c(param_2 + 0x14,uVar15);
        FUN_0016c114(param_1,param_2,uVar8);
      }
      else {
        if ((*(uint *)(iVar10 + 0xc) & 0x40000000) != 0) {
          bVar4 = true;
        }
        uVar11 = FUN_00160f08(iVar6);
        uVar14 = uVar14 | uVar11;
      }
LAB_0016dc04:
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ushort *)(param_2 + 0x1a));
  }
  if ((bVar3) && (piVar13 = *(int **)(param_1 + 0x4f0), piVar13 != (int *)0x0)) {
    for (piVar5 = (int *)piVar13[1]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      piVar13 = piVar5;
    }
    while (piVar13 != (int *)0x0) {
      if (*(char *)((int)piVar13 + 0xb2) != '\0') {
        iVar10 = FUN_001511f8(param_2);
        if (iVar10 != 0) {
          (**(code **)(*piVar13 + 8))(piVar13,iVar10);
          FUN_0015223c(iVar10);
        }
        *(undefined1 *)((int)piVar13 + 0xb2) = 0;
      }
      if (piVar13 == (int *)0x0) {
        piVar13 = *(int **)(param_1 + 0x4f0);
        if (piVar13 == (int *)0x0) break;
        for (piVar5 = (int *)piVar13[1]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
          piVar13 = piVar5;
        }
      }
      else {
        pbVar1 = (byte *)(piVar13 + 3);
        piVar13 = (int *)piVar13[2];
        piVar5 = piVar13;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            piVar13 = piVar5;
            if (piVar13 == (int *)0x0) goto LAB_0016dd00;
            piVar5 = (int *)piVar13[1];
          } while ((int *)piVar13[1] != (int *)0x0);
        }
      }
    }
  }
LAB_0016dd00:
  if (uVar14 != 0) {
    FUN_00161340(iVar6,param_2);
  }
  if (!bVar4) {
    return;
  }
  FUN_00167108(param_3,1);
  return;
}

