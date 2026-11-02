// rea decompile_all
// name: FUN_0016bcc0
// address: 0x16bcc0
// body: available
// range: 0x16bcc0-0x16c03f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016bcc0(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *unaff_r4;
  int iVar10;
  ushort uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  
  iVar10 = 0;
  bVar3 = false;
  if ((*(byte *)(param_2 + 0x4c) & 0x10) == 0) {
    uVar11 = 0;
    *(int *)(param_1 + 0x79c) = *(int *)(param_1 + 0x79c) + 1;
    uVar7 = *(undefined4 *)(param_2 + 0x48);
    if (*(short *)(param_2 + 0x12) != 0) {
      do {
        uVar8 = FUN_001bd87c(param_2 + 0xc,uVar11);
        unaff_r4 = *(int **)(param_1 + 0x4a4);
        piVar5 = unaff_r4;
        if (unaff_r4 != (int *)0x0) {
          do {
            unaff_r4 = piVar5;
            iVar6 = FUN_00172670(uVar8,unaff_r4);
            bVar12 = iVar6 < 0;
            bVar13 = iVar6 == 0;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (bVar12) {
              iVar6 = 0;
            }
            if (bVar13) {
              if (unaff_r4 != (int *)0x0) {
                iVar6 = unaff_r4[3];
              }
              if (((unaff_r4 != (int *)0x0 && iVar6 != 0) &&
                  (iVar6 = FUN_0017222c(uVar7,unaff_r4[0x12]), iVar6 != 0)) &&
                 (*(char *)(unaff_r4[3] + 0xb1) == '\0')) {
                bVar3 = true;
                *(undefined1 *)(unaff_r4[3] + 0xb2) = 1;
              }
              break;
            }
            if ((int *)unaff_r4[iVar6 + 0x17] == (int *)0x0) break;
            bVar2 = 0;
            if (iVar6 != 0) {
              bVar2 = *(byte *)(unaff_r4 + 0x19);
            }
            piVar5 = (int *)unaff_r4[iVar6 + 0x17];
          } while (iVar6 == 0 || (bVar2 & 0x80) == 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(param_2 + 0x12));
    }
    uVar11 = 0;
    if (*(short *)(param_2 + 0x1a) != 0) {
      do {
        uVar8 = FUN_001bd87c(param_2 + 0x14,uVar11);
        unaff_r4 = *(int **)(param_1 + 0x4a4);
        piVar5 = unaff_r4;
        if (unaff_r4 != (int *)0x0) {
          do {
            unaff_r4 = piVar5;
            uVar14 = FUN_00172670(uVar8,unaff_r4);
            iVar9 = (int)((ulonglong)uVar14 >> 0x20);
            iVar6 = (int)uVar14;
            if (0 < iVar6) {
              iVar9 = 1;
            }
            if (iVar6 < 0) {
              iVar9 = 0;
            }
            if (iVar6 == 0) {
              iVar6 = 0;
              if (unaff_r4 != (int *)0x0) {
                iVar6 = unaff_r4[3];
              }
              if (((unaff_r4 != (int *)0x0 && iVar6 != 0) &&
                  (iVar6 = FUN_0017222c(uVar7,unaff_r4[0x12]), iVar6 != 0)) &&
                 (*(char *)(unaff_r4[3] + 0xb1) == '\0')) {
                bVar3 = true;
                *(undefined1 *)(unaff_r4[3] + 0xb2) = 1;
              }
              break;
            }
            if ((int *)unaff_r4[iVar9 + 0x17] == (int *)0x0) break;
            bVar2 = 0;
            if (iVar9 != 0) {
              bVar2 = *(byte *)(unaff_r4 + 0x19);
            }
            piVar5 = (int *)unaff_r4[iVar9 + 0x17];
          } while (iVar9 == 0 || (bVar2 & 0x80) == 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(param_2 + 0x1a));
    }
  }
  else {
    *(int *)(param_1 + 0x798) = *(int *)(param_1 + 0x798) + 1;
    iVar6 = *(int *)(param_1 + 0x4f0);
    if (iVar6 == 0) {
      return 1;
    }
    for (iVar9 = *(int *)(iVar6 + 4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
      iVar6 = iVar9;
    }
    if (iVar6 == 0) {
      return 1;
    }
    do {
      if (*(char *)(iVar6 + 0xb1) == '\0') {
        bVar3 = true;
        *(undefined1 *)(iVar6 + 0xb2) = 1;
      }
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x4f0);
        if (iVar6 == 0) break;
        for (iVar9 = *(int *)(iVar6 + 4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
          iVar6 = iVar9;
        }
      }
      else {
        pbVar1 = (byte *)(iVar6 + 0xc);
        iVar6 = *(int *)(iVar6 + 8);
        iVar9 = iVar6;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            iVar6 = iVar9;
            if (iVar6 == 0) goto LAB_0016bf4c;
            iVar9 = *(int *)(iVar6 + 4);
          } while (*(int *)(iVar6 + 4) != 0);
        }
      }
    } while (iVar6 != 0);
  }
LAB_0016bf4c:
  if (bVar3) {
    unaff_r4 = *(int **)(param_1 + 0x4f0);
  }
  if (bVar3 && unaff_r4 != (int *)0x0) {
    piVar5 = (int *)unaff_r4[1];
    while (piVar4 = piVar5, piVar4 != (int *)0x0) {
      unaff_r4 = piVar4;
      piVar5 = (int *)piVar4[1];
    }
    if (unaff_r4 != (int *)0x0) {
      do {
        if (*(char *)((int)unaff_r4 + 0xb2) != '\0') {
          iVar6 = FUN_001511f8(param_2);
          if (iVar6 != 0) {
            iVar10 = (**(code **)(*unaff_r4 + 8))(unaff_r4,iVar6);
            FUN_0015223c(iVar6);
          }
          *(undefined1 *)((int)unaff_r4 + 0xb2) = 0;
        }
        if (unaff_r4 == (int *)0x0) {
          unaff_r4 = *(int **)(param_1 + 0x4f0);
          if (unaff_r4 == (int *)0x0) break;
          for (piVar5 = (int *)unaff_r4[1]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
            unaff_r4 = piVar5;
          }
        }
        else {
          pbVar1 = (byte *)(unaff_r4 + 3);
          unaff_r4 = (int *)unaff_r4[2];
          piVar5 = unaff_r4;
          if ((*pbVar1 & 0x80) == 0) {
            do {
              unaff_r4 = piVar5;
              if (unaff_r4 == (int *)0x0) goto LAB_0016c02c;
              piVar5 = (int *)unaff_r4[1];
            } while ((int *)unaff_r4[1] != (int *)0x0);
          }
        }
      } while (unaff_r4 != (int *)0x0);
LAB_0016c02c:
      if (iVar10 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

