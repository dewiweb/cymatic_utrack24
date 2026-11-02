// rea decompile_all
// name: FUN_005fcb60
// address: 0x5fcb60
// body: available
// range: 0x5fcb60-0x5fcf1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fcb60(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int in_ECX;
  uint in_EDX;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  
  auVar17 = _DAT_00c24650;
  auVar18 = _DAT_00c24630;
  switch(param_1) {
  case 0:
    FUN_004c2c30(param_2);
    return;
  case 1:
    iVar16 = 0;
    if (0 < (int)in_EDX) {
      if ((7 < in_EDX) &&
         ((in_ECX + (in_EDX - 1) * 4 < param_2 || (param_2 + (in_EDX - 1) * 4 < in_ECX - 4U)))) {
        uVar13 = in_EDX & 0x80000007;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
        }
        piVar14 = (int *)(in_ECX + 0x10);
        do {
          iVar15 = piVar14[-4];
          iVar2 = piVar14[-3];
          iVar3 = piVar14[-2];
          iVar4 = piVar14[-3];
          iVar5 = piVar14[-2];
          iVar6 = piVar14[-1];
          piVar1 = (int *)(param_2 + iVar16 * 4);
          *piVar1 = piVar14[-4] - piVar14[-5];
          piVar1[1] = iVar4 - iVar15;
          piVar1[2] = iVar5 - iVar2;
          piVar1[3] = iVar6 - iVar3;
          iVar16 = iVar16 + 8;
          iVar15 = piVar14[1];
          iVar2 = piVar14[2];
          iVar3 = piVar14[3];
          iVar4 = *piVar14;
          iVar5 = piVar14[1];
          iVar6 = piVar14[2];
          piVar1 = (int *)((param_2 - in_ECX) + -0x20 + (int)(piVar14 + 8));
          *piVar1 = *piVar14 - piVar14[-1];
          piVar1[1] = iVar15 - iVar4;
          piVar1[2] = iVar2 - iVar5;
          piVar1[3] = iVar3 - iVar6;
          piVar14 = piVar14 + 8;
        } while (iVar16 < (int)(in_EDX - uVar13));
      }
      if (iVar16 < (int)in_EDX) {
        iVar15 = in_EDX - iVar16;
        piVar14 = (int *)(in_ECX + iVar16 * 4);
        do {
          *(int *)((int)piVar14 + (param_2 - in_ECX)) = *piVar14 - piVar14[-1];
          iVar15 = iVar15 + -1;
          piVar14 = piVar14 + 1;
        } while (iVar15 != 0);
        return;
      }
    }
    break;
  case 2:
    iVar16 = 0;
    if (0 < (int)in_EDX) {
      if ((7 < in_EDX) &&
         ((in_ECX + (in_EDX - 1) * 4 < param_2 || (param_2 + (in_EDX - 1) * 4 < in_ECX - 8U)))) {
        uVar13 = in_EDX & 0x80000007;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
        }
        piVar14 = (int *)(in_ECX + -8);
        do {
          iVar15 = piVar14[2];
          iVar2 = piVar14[3];
          iVar3 = piVar14[4];
          iVar4 = piVar14[3];
          iVar5 = piVar14[4];
          iVar6 = piVar14[5];
          lVar19 = SUB168(ZEXT416(1),0);
          iVar7 = piVar14[1];
          iVar8 = piVar14[2];
          iVar9 = piVar14[3];
          piVar1 = (int *)(param_2 + iVar16 * 4);
          *piVar1 = (piVar14[2] - (piVar14[1] << lVar19)) + *piVar14;
          piVar1[1] = (iVar4 - (iVar15 << lVar19)) + iVar7;
          piVar1[2] = (iVar5 - (iVar2 << lVar19)) + iVar8;
          piVar1[3] = (iVar6 - (iVar3 << lVar19)) + iVar9;
          iVar15 = piVar14[6];
          iVar2 = piVar14[7];
          iVar3 = piVar14[8];
          iVar4 = piVar14[7];
          iVar5 = piVar14[8];
          iVar6 = piVar14[9];
          iVar7 = piVar14[5];
          iVar8 = piVar14[6];
          iVar9 = piVar14[7];
          piVar1 = (int *)(param_2 + 0x10 + iVar16 * 4);
          *piVar1 = (piVar14[6] - (piVar14[5] << lVar19)) + piVar14[4];
          piVar1[1] = (iVar4 - (iVar15 << lVar19)) + iVar7;
          piVar1[2] = (iVar5 - (iVar2 << lVar19)) + iVar8;
          piVar1[3] = (iVar6 - (iVar3 << lVar19)) + iVar9;
          iVar16 = iVar16 + 8;
          piVar14 = piVar14 + 8;
        } while (iVar16 < (int)(in_EDX - uVar13));
      }
      if (iVar16 < (int)in_EDX) {
        piVar14 = (int *)(in_ECX + -8 + iVar16 * 4);
        do {
          *(int *)(param_2 + iVar16 * 4) = piVar14[2] + piVar14[1] * -2 + *piVar14;
          iVar16 = iVar16 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar16 < (int)in_EDX);
        return;
      }
    }
    break;
  case 3:
    iVar16 = 0;
    if (0 < (int)in_EDX) {
      if (((7 < in_EDX) && (1 < DAT_00c89e14)) &&
         ((in_ECX + (in_EDX - 1) * 4 < param_2 || (param_2 + (in_EDX - 1) * 4 < in_ECX - 0xcU)))) {
        uVar13 = in_EDX & 0x80000007;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
        }
        piVar14 = (int *)(in_ECX + -4);
        do {
          iVar15 = piVar14[1];
          iVar2 = piVar14[2];
          iVar3 = piVar14[3];
          lVar19 = SUB168(ZEXT416(1),0);
          auVar17 = pmulld(*(undefined1 (*) [16])(piVar14 + -1),auVar18);
          iVar4 = piVar14[-1];
          iVar5 = *piVar14;
          iVar6 = piVar14[1];
          iVar7 = piVar14[2];
          iVar8 = piVar14[3];
          iVar9 = piVar14[4];
          piVar1 = (int *)(param_2 + iVar16 * 4);
          *piVar1 = (((auVar17._0_4_ - (*piVar14 << lVar19)) - piVar14[-2]) - *piVar14) + piVar14[1]
          ;
          piVar1[1] = (((auVar17._4_4_ - (iVar15 << lVar19)) - iVar4) - iVar15) + iVar7;
          piVar1[2] = (((auVar17._8_4_ - (iVar2 << lVar19)) - iVar5) - iVar2) + iVar8;
          piVar1[3] = (((auVar17._12_4_ - (iVar3 << lVar19)) - iVar6) - iVar3) + iVar9;
          iVar15 = piVar14[5];
          iVar2 = piVar14[6];
          iVar3 = piVar14[7];
          auVar17 = pmulld(*(undefined1 (*) [16])(piVar14 + 3),auVar18);
          iVar4 = piVar14[3];
          iVar5 = piVar14[4];
          iVar6 = piVar14[5];
          iVar7 = piVar14[6];
          iVar8 = piVar14[7];
          iVar9 = piVar14[8];
          piVar1 = (int *)(param_2 + 0x10 + iVar16 * 4);
          *piVar1 = (((auVar17._0_4_ - (piVar14[4] << lVar19)) - piVar14[2]) - piVar14[4]) +
                    piVar14[5];
          piVar1[1] = (((auVar17._4_4_ - (iVar15 << lVar19)) - iVar4) - iVar15) + iVar7;
          piVar1[2] = (((auVar17._8_4_ - (iVar2 << lVar19)) - iVar5) - iVar2) + iVar8;
          piVar1[3] = (((auVar17._12_4_ - (iVar3 << lVar19)) - iVar6) - iVar3) + iVar9;
          iVar16 = iVar16 + 8;
          piVar14 = piVar14 + 8;
        } while (iVar16 < (int)(in_EDX - uVar13));
      }
      if (iVar16 < (int)in_EDX) {
        piVar14 = (int *)(in_ECX + -4 + iVar16 * 4);
        do {
          *(int *)(param_2 + iVar16 * 4) =
               (((piVar14[-1] * 3 + *piVar14 * -2) - piVar14[-2]) + piVar14[1]) - *piVar14;
          iVar16 = iVar16 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar16 < (int)in_EDX);
        return;
      }
    }
    break;
  case 4:
    iVar16 = 0;
    if (0 < (int)in_EDX) {
      if (((7 < in_EDX) && (1 < DAT_00c89e14)) &&
         ((in_ECX + (in_EDX - 1) * 4 < param_2 || (param_2 + (in_EDX - 1) * 4 < in_ECX - 0x10U)))) {
        uVar13 = in_EDX & 0x80000007;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
        }
        piVar14 = (int *)(in_ECX + -4);
        do {
          iVar15 = piVar14[1];
          iVar2 = piVar14[2];
          iVar3 = piVar14[3];
          lVar19 = SUB168(ZEXT416(2),0);
          auVar18 = pmulld(*(undefined1 (*) [16])(piVar14 + -1),auVar17);
          iVar4 = piVar14[-1];
          iVar5 = *piVar14;
          iVar6 = piVar14[1];
          iVar7 = piVar14[-2];
          iVar8 = piVar14[-1];
          iVar9 = *piVar14;
          iVar10 = piVar14[2];
          iVar11 = piVar14[3];
          iVar12 = piVar14[4];
          piVar1 = (int *)(param_2 + iVar16 * 4);
          *piVar1 = ((auVar18._0_4_ - (*piVar14 << lVar19)) - (piVar14[-2] << lVar19)) + piVar14[-3]
                    + piVar14[1];
          piVar1[1] = ((auVar18._4_4_ - (iVar15 << lVar19)) - (iVar4 << lVar19)) + iVar7 + iVar10;
          piVar1[2] = ((auVar18._8_4_ - (iVar2 << lVar19)) - (iVar5 << lVar19)) + iVar8 + iVar11;
          piVar1[3] = ((auVar18._12_4_ - (iVar3 << lVar19)) - (iVar6 << lVar19)) + iVar9 + iVar12;
          iVar15 = piVar14[5];
          iVar2 = piVar14[6];
          iVar3 = piVar14[7];
          auVar18 = pmulld(*(undefined1 (*) [16])(piVar14 + 3),auVar17);
          iVar4 = piVar14[3];
          iVar5 = piVar14[4];
          iVar6 = piVar14[5];
          iVar7 = piVar14[2];
          iVar8 = piVar14[3];
          iVar9 = piVar14[4];
          iVar10 = piVar14[6];
          iVar11 = piVar14[7];
          iVar12 = piVar14[8];
          piVar1 = (int *)(param_2 + 0x10 + iVar16 * 4);
          *piVar1 = ((auVar18._0_4_ - (piVar14[4] << lVar19)) - (piVar14[2] << lVar19)) + piVar14[1]
                    + piVar14[5];
          piVar1[1] = ((auVar18._4_4_ - (iVar15 << lVar19)) - (iVar4 << lVar19)) + iVar7 + iVar10;
          piVar1[2] = ((auVar18._8_4_ - (iVar2 << lVar19)) - (iVar5 << lVar19)) + iVar8 + iVar11;
          piVar1[3] = ((auVar18._12_4_ - (iVar3 << lVar19)) - (iVar6 << lVar19)) + iVar9 + iVar12;
          iVar16 = iVar16 + 8;
          piVar14 = piVar14 + 8;
        } while (iVar16 < (int)(in_EDX - uVar13));
      }
      if (iVar16 < (int)in_EDX) {
        piVar14 = (int *)(in_ECX + -8 + iVar16 * 4);
        do {
          *(int *)(param_2 + iVar16 * 4) =
               piVar14[-2] + piVar14[-1] * -4 + piVar14[1] * -4 + piVar14[2] + *piVar14 * 6;
          iVar16 = iVar16 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar16 < (int)in_EDX);
      }
    }
  }
  return;
}

