// rea decompile_all
// name: FUN_005e9500
// address: 0x5e9500
// body: available
// range: 0x5e9500-0x5e99fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e9500(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_20;
  int *local_1c;
  
  iVar9 = *(int *)(in_ECX + 0x68);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + 0x68);
  iVar6 = *(int *)(*(int *)(in_ECX + 0x40) + 4);
  iVar8 = *(int *)(iVar6 + 0x1c);
  fVar13 = (float10)FUN_006f9790(*(double *)(iVar1 + 0x70) + 0.5);
  iVar12 = (int)fVar13;
  local_1c = (int *)(iVar9 + 0xc + iVar12 * 4);
  iVar3 = ((int *)*local_1c)[1] + 7;
  iVar3 = (((int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3) + *(int *)*local_1c) * 8;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    iVar4 = *(int *)(iVar1 + 0x60);
    local_20 = *(int *)(iVar1 + 100);
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x68) * *(int *)(iVar1 + 0x60);
    local_20 = *(int *)(iVar1 + 0x68) * *(int *)(iVar1 + 100);
  }
  iVar2 = *(int *)(iVar8 + *(int *)(in_ECX + 0x1c) * 4);
  dVar14 = (double)*(int *)(iVar8 + 0xd2c) * *(double *)(iVar8 + 0xd30);
  iVar11 = (int)dVar14;
  if (*(int *)(iVar1 + 0x50) == 0) {
    if (*(int *)(iVar1 + 0x78) != 0) {
      return 0xffffffff;
    }
    *(int *)(iVar1 + 0x78) = in_ECX;
    return 0;
  }
  *(int *)(iVar1 + 0x78) = in_ECX;
  iVar5 = *(int *)(iVar1 + 0x5c);
  if (0 < iVar5) {
    if (*(int *)(in_ECX + 0x1c) != 0) {
      iVar5 = *(int *)(iVar1 + 0x68) * *(int *)(iVar1 + 0x5c);
    }
    iVar10 = *(int *)(iVar1 + 0x54) - iVar5;
    dVar16 = 15.0 / *(double *)(iVar8 + 0xd38);
    if ((int)dVar14 < iVar10 + iVar3) {
      for (; ((0 < iVar12 && (iVar5 < iVar3)) && ((int)dVar14 < iVar10 + iVar3));
          iVar3 = (((int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3) + *(int *)*local_1c) * 8) {
        iVar12 = iVar12 + -1;
        local_1c = local_1c + -1;
        iVar3 = ((int *)*local_1c)[1] + 7;
      }
    }
    else if ((iVar10 + iVar3 < (int)dVar14) && (iVar12 + 1 < 0xf)) {
      do {
        if ((iVar5 <= iVar3) || ((int)dVar14 <= iVar10 + iVar3)) break;
        iVar12 = iVar12 + 1;
        local_1c = local_1c + 1;
        iVar3 = ((int *)*local_1c)[1] + 7;
        iVar3 = (((int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3) + *(int *)*local_1c) * 8;
      } while (iVar12 < 0xe);
    }
    fVar13 = (float10)FUN_006f9790(((double)iVar12 - *(double *)(iVar1 + 0x70)) + 0.5);
    dVar18 = (double)(iVar2 >> 1);
    dVar17 = (double)*(int *)(iVar6 + 8);
    dVar15 = ((double)fVar13 / dVar18) * dVar17;
    dVar14 = -dVar16;
    if (-dVar16 <= dVar15) {
      dVar14 = dVar15;
    }
    if (dVar14 <= dVar16) {
      dVar16 = dVar14;
    }
    dVar14 = (dVar16 / dVar17) * dVar18 + *(double *)(iVar1 + 0x70);
    *(double *)(iVar1 + 0x70) = dVar14;
    fVar13 = (float10)FUN_006f9790(dVar14 + 0.5);
    iVar12 = (int)fVar13;
    local_1c = (int *)(iVar9 + 0xc + iVar12 * 4);
    iVar6 = ((int *)*local_1c)[1] + 7;
    iVar3 = (((int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3) + *(int *)*local_1c) * 8;
  }
  if ((0 < *(int *)(iVar1 + 0x60)) && (iVar3 < iVar4)) {
    iVar6 = (*(int *)(iVar1 + 0x58) - iVar4) + iVar3;
    while (iVar6 < 0) {
      iVar12 = iVar12 + 1;
      local_1c = local_1c + 1;
      if (0xe < iVar12) break;
      iVar6 = ((int *)*local_1c)[1] + 7;
      iVar3 = (((int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3) + *(int *)*local_1c) * 8;
      iVar6 = (*(int *)(iVar1 + 0x58) - iVar4) + iVar3;
    }
  }
  if (((0 < *(int *)(iVar1 + 100)) && (local_20 < iVar3)) &&
     (*(int *)(iVar8 + 0xd2c) < (*(int *)(iVar1 + 0x58) - local_20) + iVar3)) {
    piVar7 = (int *)(iVar9 + iVar12 * 4 + 0xc);
    do {
      piVar7 = piVar7 + -1;
      iVar12 = iVar12 + -1;
      if (iVar12 < 0) goto LAB_005e9884;
      iVar6 = ((int *)*piVar7)[1] + 7;
      iVar3 = (((int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3) + *(int *)*piVar7) * 8;
    } while (*(int *)(iVar8 + 0xd2c) < (*(int *)(iVar1 + 0x58) - local_20) + iVar3);
  }
  if (iVar12 < 0) {
LAB_005e9884:
    iVar6 = (*(int *)(iVar8 + 0xd2c) - *(int *)(iVar1 + 0x58)) + local_20;
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
    piVar7 = *(int **)(iVar9 + 0xc);
    if (iVar6 < ((int)(piVar7[1] + 7 + (piVar7[1] + 7 >> 0x1f & 7U)) >> 3) + *piVar7) {
      piVar7[1] = 0;
      piVar7[3] = piVar7[2] + iVar6;
      *piVar7 = iVar6;
      *(undefined1 *)(piVar7[2] + iVar6) = 0;
      piVar7 = *(int **)(iVar9 + 0xc);
      goto LAB_005e9945;
    }
  }
  else {
    iVar6 = (iVar4 - *(int *)(iVar1 + 0x58)) + 7;
    if (0xe < iVar12) {
      iVar12 = 0xe;
    }
    *(int *)(iVar1 + 0x7c) = iVar12;
    piVar7 = *(int **)(iVar9 + 0xc + iVar12 * 4);
    iVar8 = piVar7[1] + 7;
    for (iVar6 = ((int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3) +
                 (-((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) - *piVar7); 0 < iVar6;
        iVar6 = iVar6 + -1) {
      FUN_005eae90(*(undefined4 *)(iVar9 + 0xc + iVar12 * 4),0,8);
    }
    piVar7 = *(int **)(iVar9 + 0xc + iVar12 * 4);
LAB_005e9945:
    iVar3 = (((int)((piVar7[1] + 7 >> 0x1f & 7U) + piVar7[1] + 7) >> 3) + *piVar7) * 8;
  }
  if ((0 < *(int *)(iVar1 + 0x60)) || (0 < *(int *)(iVar1 + 100))) {
    if ((local_20 < 1) || (iVar3 <= local_20)) {
      if ((iVar4 < 1) || (iVar4 <= iVar3)) {
        if (iVar11 < *(int *)(iVar1 + 0x58)) {
          if ((0 < local_20) &&
             (iVar9 = (*(int *)(iVar1 + 0x58) - local_20) + iVar3, *(int *)(iVar1 + 0x58) = iVar9,
             iVar11 <= iVar9)) goto LAB_005e99c4;
        }
        else if ((0 < iVar4) &&
                (iVar9 = (*(int *)(iVar1 + 0x58) - iVar4) + iVar3, *(int *)(iVar1 + 0x58) = iVar9,
                iVar9 <= iVar11)) goto LAB_005e99c4;
        *(int *)(iVar1 + 0x58) = iVar11;
      }
      else {
        *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + (iVar3 - iVar4);
      }
    }
    else {
      *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + (iVar3 - local_20);
    }
  }
LAB_005e99c4:
  iVar9 = *(int *)(iVar1 + 0x5c);
  if (0 < iVar9) {
    if (*(int *)(in_ECX + 0x1c) != 0) {
      *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + (iVar3 - *(int *)(iVar1 + 0x68) * iVar9);
      return 0;
    }
    *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + (iVar3 - iVar9);
  }
  return 0;
}

