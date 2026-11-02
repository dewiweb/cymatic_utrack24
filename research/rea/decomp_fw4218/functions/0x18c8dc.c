// rea decompile_all
// name: FUN_0018c8dc
// address: 0x18c8dc
// body: available
// range: 0x18c8dc-0x18cd57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0018c8dc(ushort *param_1,int param_2,undefined4 param_3,int param_4,int *param_5)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  int aiStack_ec [13];
  undefined1 auStack_b8 [8];
  ushort uStack_b0;
  undefined1 auStack_a8 [8];
  ushort uStack_a0;
  undefined1 auStack_40 [12];
  ushort *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  if (DAT_0018cd58 <= *param_1) {
    return (int *)0x0;
  }
  piVar9 = (int *)0x0;
  puStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  FUN_00171d94(auStack_40,param_3);
  iVar4 = FUN_001be9b0(auStack_40);
  uVar12 = DAT_0018cd5c;
  if (iVar4 != 0) {
    iVar4 = *param_5;
    iVar11 = param_5[1];
    uVar13 = param_5[2];
    if (iVar4 == 0 && iVar11 == 0) {
      iVar4 = 0;
      iVar11 = 0x48000000;
      uVar13 = DAT_0018cd5c;
    }
    piVar9 = *(int **)(param_1 + 2);
    if (piVar9 == (int *)0x0) {
      uVar15 = 0;
    }
    else {
      for (piVar3 = (int *)piVar9[0x41]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x41]) {
        piVar9 = piVar3;
      }
      uVar15 = 0;
      for (; piVar9 != (int *)0x0; piVar9 = (int *)FUN_0022c17c(param_1,piVar9)) {
        (**(code **)(*piVar9 + 0xac))(aiStack_ec + 9,piVar9);
        if (aiStack_ec[10] == iVar11 && aiStack_ec[9] == iVar4) {
          (**(code **)(*piVar9 + 0xac))(auStack_b8,piVar9);
          if ((uint)uStack_b0 == (uVar13 & 0xffff)) {
            FUN_00171ea4(auStack_40);
            return (int *)0x0;
          }
          (**(code **)(*piVar9 + 0xac))(auStack_b8,piVar9);
          if (uVar15 <= uStack_b0) {
            (**(code **)(*piVar9 + 0xac))(auStack_a8,piVar9);
            uVar15 = uStack_a0 + 1 & 0xfffeffff;
          }
        }
      }
    }
    if ((uVar13 & 0xffff) == uVar12) {
      uVar13 = uVar15;
    }
    aiStack_ec[4] = FUN_001beccc(auStack_40);
    iVar6 = iStack_28;
    uVar2 = *param_1;
    iVar5 = FUN_001c6b14(0x118,DAT_0018cd60);
    if ((iVar5 != 0) && (piVar9 = (int *)FUN_0019cf24(iVar5,0,param_2), piVar9 != (int *)0x0)) {
      FUN_00171828(piVar9 + 0x22,aiStack_ec[4]);
      piVar9[0x1a] = iVar6;
      *(ushort *)(piVar9 + 0x24) = uVar2;
      piVar9[0x1e] = iVar4;
      piVar9[0x1f] = iVar11;
      *(short *)(piVar9 + 0x20) = (short)uVar13;
      iVar11 = 0x18cae8;
      iVar4 = FUN_0014c62c(piVar9,0x1e,**(int **)(param_2 + 0x7c) + 0x548);
      if (iVar4 != 0) {
        iVar4 = 0;
        piVar9[0x42] = 0;
        piVar9[0x41] = 0;
        if (*(int *)(param_1 + 2) == 0) {
          *(int *)param_1 = *(int *)param_1 + 1;
          *(undefined1 *)(piVar9 + 0x43) = 1;
          piVar9[0x42] = 0;
          piVar9[0x41] = 0;
          *(int **)(param_1 + 2) = piVar9;
        }
        else {
          uVar12 = (uint)*(ushort *)(piVar9 + 0x24);
          iVar6 = *(int *)(param_1 + 2);
          iVar5 = 0;
          while( true ) {
            aiStack_ec[iVar5 + 1] = iVar6;
            uVar15 = (uint)*(ushort *)(iVar6 + 0x90);
            iVar7 = iVar5 + 1;
            bVar17 = uVar12 < uVar15;
            bVar16 = uVar12 == uVar15;
            if (!bVar17 && !bVar16) {
              uVar15 = 1;
            }
            if (bVar17) {
              uVar15 = 0;
            }
            if (bVar16) goto LAB_0018cd30;
            iVar8 = *(int *)(iVar6 + uVar15 * 4 + 0x104);
            if (iVar8 == 0) break;
            if (uVar15 != 0) {
              uVar13 = (uint)*(byte *)(iVar6 + 0x10c);
            }
            if (uVar15 != 0 && (uVar13 & 0x80) != 0) break;
            iVar6 = iVar8;
            iVar5 = iVar7;
            if (0x1f < iVar7) goto LAB_0018cd30;
          }
          *(int *)param_1 = *(int *)param_1 + 1;
          *(undefined1 *)(piVar9 + 0x43) = 0x81;
          piVar9[0x41] = 0;
          if (uVar15 == 0) {
            piVar9[0x42] = iVar6;
          }
          else {
            *(byte *)(iVar6 + 0x10c) = *(byte *)(iVar6 + 0x10c) & 0x7f;
            piVar9[0x42] = *(int *)(iVar6 + uVar15 * 4 + 0x104);
          }
          iVar8 = iVar5 + 2;
          iVar7 = 1;
          if (1 < iVar8) {
            iVar11 = 0x104;
          }
          *(int **)(iVar6 + uVar15 * 4 + 0x104) = piVar9;
          if (1 < iVar8) {
            do {
              if (iVar5 != 0) {
                if (*(int *)(aiStack_ec[iVar5] + 0x108) == aiStack_ec[iVar5 + 1]) {
                  uVar15 = 1;
                }
                else {
                  uVar15 = 0;
                }
              }
              iVar6 = aiStack_ec[iVar5 + 1];
              if (iVar6 != 0) {
                iVar4 = *(int *)(iVar6 + 0x104);
              }
              if (iVar6 != 0 && iVar4 != 0) {
                if (((byte)(*(byte *)(iVar4 + 0x10c) * '\x02') ==
                     (byte)(*(byte *)(iVar6 + 0x10c) * '\x02')) &&
                   ((*(byte *)(iVar6 + 0x10c) & 0x7f) != 0)) {
                  if ((*(byte *)(iVar4 + 0x10c) & 0x80) == 0) {
                    uVar14 = *(undefined4 *)(iVar4 + 0x108);
                  }
                  else {
                    uVar14 = 0;
                  }
                  *(undefined4 *)(iVar6 + 0x104) = uVar14;
                  *(int *)(iVar4 + 0x108) = iVar6;
                  *(byte *)(iVar4 + 0x10c) = *(byte *)(iVar4 + 0x10c) & 0x7f;
                  iVar6 = iVar4;
                }
              }
              aiStack_ec[iVar5 + 1] = iVar6;
              if ((((iVar6 != 0) && (bVar1 = *(byte *)(iVar6 + 0x10c), (bVar1 & 0x80) == 0)) &&
                  (iVar10 = *(int *)(iVar6 + 0x108), iVar4 = iVar10, iVar10 != 0)) &&
                 ((((*(byte *)(iVar10 + 0x10c) & 0x80) == 0 && (*(int *)(iVar10 + 0x108) != 0)) &&
                  (((*(byte *)(*(int *)(iVar10 + 0x108) + 0x10c) & 0x7f) == (bVar1 & 0x7f) &&
                   ((bVar1 & 0x7f) != 0)))))) {
                if (*(int *)(iVar10 + 0x104) == 0) {
                  *(byte *)(iVar6 + 0x10c) = bVar1 | 0x80;
                }
                else {
                  *(int *)(iVar6 + 0x108) = *(int *)(iVar10 + 0x104);
                }
                *(int *)(iVar10 + 0x104) = iVar6;
                iVar4 = *(byte *)(iVar10 + 0x10c) + 1;
                *(char *)(iVar10 + 0x10c) = (char)iVar4;
                iVar6 = iVar10;
              }
              aiStack_ec[iVar5 + 1] = iVar6;
              if (iVar5 == 0) {
                *(int *)(param_1 + 2) = aiStack_ec[1];
              }
              else {
                iVar4 = aiStack_ec[iVar5];
                *(int *)(iVar4 + iVar11 + uVar15 * 4) = iVar6;
              }
              iVar7 = iVar7 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar7 < iVar8);
          }
          if (piVar9 == (int *)0x0) {
LAB_0018cd30:
            (**(code **)(*piVar9 + 0x3c))(piVar9);
            piVar9 = (int *)0x0;
          }
        }
        goto LAB_0018cd44;
      }
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    piVar9 = (int *)0x0;
  }
LAB_0018cd44:
  FUN_00171ea4(auStack_40);
  return piVar9;
}

