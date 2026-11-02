// rea decompile_all
// name: FUN_00198c48
// address: 0x198c48
// body: available
// range: 0x198c48-0x19911b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x199118 to 0x15da00 FUN_0015da00 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00198c48(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int extraout_r3;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  int aiStack_bc [33];
  undefined1 auStack_38 [20];
  
  uVar12 = DAT_0019911c;
  bVar17 = *(char *)(param_1 + 0xcc) == '\x02';
LAB_00198c7c:
  *(short *)(param_1 + 0xd8) = *(short *)(param_1 + 0xd8) + 1;
  iVar3 = FUN_00198bcc(*(int *)(param_1 + 0xd4) + 0xa8);
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0xe) != '\x01')) {
LAB_00198e7c:
    uVar9 = *(uint *)(param_1 + 0xe0);
    if (uVar9 != 0) {
      for (uVar7 = *(uint *)(uVar9 + 0xc); uVar7 != 0; uVar7 = *(uint *)(uVar7 + 0xc)) {
        uVar9 = uVar7;
      }
      while (uVar9 != 0) {
        if (uVar9 == 0) {
          uVar13 = *(uint *)(param_1 + 0xe0);
          if (uVar13 != 0) {
            uVar7 = *(uint *)(uVar13 + 0xc);
          }
          if (uVar13 != 0 && uVar7 != 0) {
            do {
              uVar13 = uVar7;
              uVar7 = *(uint *)(uVar13 + 0xc);
            } while (*(uint *)(uVar13 + 0xc) != 0);
          }
        }
        else {
          uVar7 = (uint)*(byte *)(uVar9 + 0x14);
          uVar13 = *(uint *)(uVar9 + 0x10);
          uVar2 = uVar13;
          if ((*(byte *)(uVar9 + 0x14) & 0x80) == 0) {
            do {
              uVar13 = uVar2;
              if (uVar13 != 0) {
                uVar7 = *(uint *)(uVar13 + 0xc);
              }
              uVar2 = uVar7;
            } while (uVar13 != 0 && uVar7 != 0);
          }
        }
        uVar7 = FUN_001c6a78(uVar9);
        uVar9 = uVar13;
      }
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
LAB_00199048:
    if (*(char *)(param_1 + 0xcc) == '\0') {
LAB_001990d8:
      aiStack_bc[2] = 0;
      aiStack_bc[3] = 0;
      aiStack_bc[4] = 0;
      aiStack_bc[5] = uVar12;
      aiStack_bc[1] = 0;
      (**(code **)(**(int **)(param_1 + 0xd4) + 0x1bc))
                (*(int **)(param_1 + 0xd4),param_1 + 0xc0,DAT_00199124,0);
      FUN_0015da00(param_1,1);
      return;
    }
    *(undefined2 *)(param_1 + 0xd8) = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0xd4) + 0x110);
    do {
      if (iVar3 == 0) goto LAB_00199070;
      do {
        if ((bVar17) || ((*(byte *)(iVar3 + 0x60) & 1) == 0)) {
LAB_001990c8:
          *(int *)(param_1 + 0xd4) = iVar3;
          if ((bVar17) || ((*(byte *)(iVar3 + 0x60) & 1) == 0)) goto LAB_00198c7c;
          goto LAB_00199048;
        }
LAB_00199070:
        iVar5 = *(int *)(param_1 + 0xd4);
        if (iVar5 == *(int *)(param_1 + 0xd0)) {
          if (iVar3 != 0) goto LAB_001990c8;
          goto LAB_001990d8;
        }
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar5 + 0x114);
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x114);
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar5 + 0x108);
      *(int *)(param_1 + 0xd4) = iVar3;
      if (iVar3 == 0 || iVar3 == *(int *)(param_1 + 0xd0)) goto LAB_001990d8;
      iVar3 = *(int *)(iVar3 + 0x114);
    } while( true );
  }
  iVar5 = *(int *)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xe0) != 0) {
    while( true ) {
      iVar4 = FUN_00172670(iVar3,iVar5);
      bVar16 = iVar4 < 0;
      bVar18 = iVar4 == 0;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (bVar16) {
        iVar4 = 0;
      }
      if (bVar18) break;
      iVar8 = *(int *)(iVar5 + iVar4 * 4 + 0xc);
      if (iVar8 == 0) goto LAB_00198cf4;
      bVar1 = 0;
      if (iVar4 != 0) {
        bVar1 = *(byte *)(iVar5 + 0x14);
      }
      iVar5 = iVar8;
      if (iVar4 != 0 && (bVar1 & 0x80) != 0) goto LAB_00198cf4;
    }
    if (iVar5 != 0) goto LAB_00198e7c;
  }
LAB_00198cf4:
  iVar5 = FUN_001c6b14(0x18,DAT_00199120);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = FUN_001726d4(iVar5,iVar3);
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  piVar14 = (int *)(param_1 + 0xdc);
  if (*(int *)(param_1 + 0xe0) == 0) {
    *piVar14 = *piVar14 + 1;
    *(undefined1 *)(iVar5 + 0x14) = 1;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(int *)(param_1 + 0xe0) = iVar5;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xe0);
    iVar8 = 0;
    do {
      aiStack_bc[iVar8 + 1] = iVar4;
      iVar15 = iVar8 + 1;
      uVar19 = FUN_00172670(iVar5,iVar4);
      uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
      iVar6 = (int)uVar19;
      iVar11 = extraout_r3;
      if (0 < iVar6) {
        iVar11 = 1;
      }
      if (iVar6 < 0) {
        iVar11 = 0;
      }
      if (iVar6 == 0) break;
      iVar6 = *(int *)(iVar4 + iVar11 * 4 + 0xc);
      if (iVar6 == 0) {
LAB_00198d84:
        *piVar14 = *piVar14 + 1;
        *(undefined1 *)(iVar5 + 0x14) = 0x81;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (iVar11 == 0) {
          *(int *)(iVar5 + 0x10) = iVar4;
        }
        else {
          *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) & 0x7f;
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + iVar11 * 4 + 0xc);
        }
        iVar4 = iVar4 + iVar11 * 4;
        iVar6 = iVar8 + 2;
        iVar15 = 1;
        *(int *)(iVar4 + 0xc) = iVar5;
        if (1 < iVar6) {
          do {
            if (iVar8 != 0) {
              iVar4 = aiStack_bc[iVar8 + 1];
              if (*(int *)(aiStack_bc[iVar8] + 0x10) == iVar4) {
                iVar11 = 1;
              }
              else {
                iVar11 = 0;
              }
            }
            iVar5 = aiStack_bc[iVar8 + 1];
            if (iVar5 != 0) {
              iVar4 = *(int *)(iVar5 + 0xc);
            }
            if (iVar5 != 0 && iVar4 != 0) {
              if (((byte)(*(byte *)(iVar4 + 0x14) * '\x02') ==
                   (byte)(*(byte *)(iVar5 + 0x14) * '\x02')) &&
                 ((*(byte *)(iVar5 + 0x14) & 0x7f) != 0)) {
                if ((*(byte *)(iVar4 + 0x14) & 0x80) == 0) {
                  uVar12 = *(undefined4 *)(iVar4 + 0x10);
                }
                else {
                  uVar12 = 0;
                }
                *(undefined4 *)(iVar5 + 0xc) = uVar12;
                *(int *)(iVar4 + 0x10) = iVar5;
                *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) & 0x7f;
                iVar5 = iVar4;
              }
            }
            aiStack_bc[iVar8 + 1] = iVar5;
            if ((((iVar5 != 0) && (bVar1 = *(byte *)(iVar5 + 0x14), (bVar1 & 0x80) == 0)) &&
                (iVar10 = *(int *)(iVar5 + 0x10), iVar4 = iVar10, iVar10 != 0)) &&
               ((((*(byte *)(iVar10 + 0x14) & 0x80) == 0 && (*(int *)(iVar10 + 0x10) != 0)) &&
                (((*(byte *)(*(int *)(iVar10 + 0x10) + 0x14) & 0x7f) == (bVar1 & 0x7f) &&
                 ((bVar1 & 0x7f) != 0)))))) {
              if (*(int *)(iVar10 + 0xc) == 0) {
                *(byte *)(iVar5 + 0x14) = bVar1 | 0x80;
              }
              else {
                *(int *)(iVar5 + 0x10) = *(int *)(iVar10 + 0xc);
              }
              *(int *)(iVar10 + 0xc) = iVar5;
              iVar4 = *(byte *)(iVar10 + 0x14) + 1;
              *(char *)(iVar10 + 0x14) = (char)iVar4;
              iVar5 = iVar10;
            }
            aiStack_bc[iVar8 + 1] = iVar5;
            if (iVar8 == 0) {
              *(int *)(param_1 + 0xe0) = aiStack_bc[1];
            }
            else {
              iVar4 = iVar11 * 4 + 0xc;
              *(int *)(aiStack_bc[iVar8] + iVar4) = iVar5;
            }
            iVar15 = iVar15 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar15 < iVar6);
        }
        break;
      }
      if (iVar11 != 0) {
        uVar9 = (uint)*(byte *)(iVar4 + 0x14);
      }
      if (iVar11 != 0 && (uVar9 & 0x80) != 0) goto LAB_00198d84;
      iVar4 = iVar6;
      iVar8 = iVar15;
    } while (iVar15 < 0x20);
  }
  piVar14 = *(int **)(param_1 + 0xd4);
  FUN_0017274c(auStack_38,iVar3,0);
  (**(code **)(*piVar14 + 0x1bc))(piVar14,param_1 + 0xc0,DAT_00199124,1);
  return;
}

