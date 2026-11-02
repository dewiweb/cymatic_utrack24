// rea decompile_all
// name: FUN_005d5e10
// address: 0x5d5e10
// body: available
// range: 0x5d5e10-0x5d62e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d5e10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int in_EDX;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_c;
  
  iVar13 = *(int *)(in_ECX + 0x1c);
  puVar2 = (undefined4 *)FUN_004c554b(0xb18);
  *(undefined4 **)(iVar13 + 0x620 + in_EDX * 4) = puVar2;
  puVar9 = (undefined4 *)param_2[3];
  puVar11 = puVar2;
  for (iVar5 = 0x2c6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)(iVar13 + 0x14) <= in_EDX) {
    *(int *)(iVar13 + 0x14) = in_EDX + 1;
  }
  iVar5 = 0;
  local_c = 0;
  puVar2[2] = param_2[2];
  *(undefined4 *)(iVar13 + 0x520 + in_EDX * 4) = *param_2;
  if (*(int *)(iVar13 + 0xd5c) == 0) {
    if (0 < (int)puVar2[3]) {
      iVar8 = 0;
      puVar7 = puVar2 + 6;
      do {
        if (*(int *)(iVar8 + param_2[6]) != 0) {
          *puVar7 = *puVar7 | 1;
        }
        if (*(int *)(iVar8 + 4 + param_2[6]) != 0) {
          *puVar7 = *puVar7 | 2;
        }
        if (*(int *)(iVar8 + 8 + param_2[6]) != 0) {
          *puVar7 = *puVar7 | 4;
        }
        if (*(int *)(iVar8 + 0xc + param_2[6]) != 0) {
          *puVar7 = *puVar7 | 8;
        }
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar5 < (int)puVar2[3]);
    }
    iVar5 = *(int *)(iVar13 + 0x18);
    iVar8 = 0;
    if (0 < iVar5) {
      piVar3 = (int *)(iVar13 + 0x720);
      do {
        if (*piVar3 == param_2[4]) goto LAB_005d605c;
        iVar8 = iVar8 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar8 < iVar5);
    }
    *(int *)(iVar13 + 0x18) = iVar5 + 1;
    iVar8 = iVar5;
LAB_005d605c:
    puVar2[5] = iVar8;
    *(undefined4 *)(iVar13 + 0x720 + iVar8 * 4) = param_2[4];
    local_14 = (int *)0x0;
    if (0 < (int)puVar2[3]) {
      do {
        iVar5 = (int)local_14 << 4;
        local_18 = 4;
        local_1c = puVar2 + local_c + 0x46;
        do {
          if (*(int *)(iVar5 + param_2[6]) != 0) {
            iVar8 = *(int *)(iVar13 + 0x18);
            iVar6 = 0;
            if (0 < iVar8) {
              piVar3 = (int *)(iVar13 + 0x720);
              do {
                if (*piVar3 == *(int *)(iVar5 + param_2[6])) goto LAB_005d60d4;
                iVar6 = iVar6 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar6 < iVar8);
            }
            *(int *)(iVar13 + 0x18) = iVar8 + 1;
            iVar6 = iVar8;
LAB_005d60d4:
            local_c = local_c + 1;
            *local_1c = iVar6;
            local_1c = local_1c + 1;
            *(undefined4 *)(iVar13 + 0x720 + iVar6 * 4) = *(undefined4 *)(iVar5 + param_2[6]);
          }
          iVar5 = iVar5 + 4;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        local_14 = (int *)((int)local_14 + 1);
      } while ((int)local_14 < (int)puVar2[3]);
    }
  }
  else {
    if (0 < (int)puVar2[3]) {
      iVar8 = 0;
      puVar7 = puVar2 + 6;
      do {
        if (*(int *)(iVar8 + param_2[7]) != 0) {
          *puVar7 = *puVar7 | 1;
        }
        if (*(int *)(iVar8 + 4 + param_2[7]) != 0) {
          *puVar7 = *puVar7 | 2;
        }
        if (*(int *)(iVar8 + 8 + param_2[7]) != 0) {
          *puVar7 = *puVar7 | 4;
        }
        if (*(int *)(iVar8 + 0xc + param_2[7]) != 0) {
          *puVar7 = *puVar7 | 8;
        }
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar5 < (int)puVar2[3]);
    }
    iVar5 = *(int *)(iVar13 + 0x18);
    iVar8 = 0;
    if (0 < iVar5) {
      piVar3 = (int *)(iVar13 + 0x720);
      do {
        if (*piVar3 == param_2[5]) goto LAB_005d5f14;
        iVar8 = iVar8 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar8 < iVar5);
    }
    *(int *)(iVar13 + 0x18) = iVar5 + 1;
    iVar8 = iVar5;
LAB_005d5f14:
    puVar2[5] = iVar8;
    *(undefined4 *)(iVar13 + 0x720 + iVar8 * 4) = param_2[5];
    local_1c = (int *)0x0;
    if (0 < (int)puVar2[3]) {
      do {
        iVar5 = (int)local_1c << 4;
        local_18 = 4;
        local_14 = puVar2 + local_c + 0x46;
        do {
          if (*(int *)(iVar5 + param_2[7]) != 0) {
            iVar8 = *(int *)(iVar13 + 0x18);
            iVar6 = 0;
            if (0 < iVar8) {
              piVar3 = (int *)(iVar13 + 0x720);
              do {
                if (*piVar3 == *(int *)(iVar5 + param_2[7])) goto LAB_005d5f84;
                iVar6 = iVar6 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar6 < iVar8);
            }
            *(int *)(iVar13 + 0x18) = iVar8 + 1;
            iVar6 = iVar8;
LAB_005d5f84:
            local_c = local_c + 1;
            *local_14 = iVar6;
            local_14 = local_14 + 1;
            *(undefined4 *)(iVar13 + 0x720 + iVar6 * 4) = *(undefined4 *)(iVar5 + param_2[7]);
          }
          iVar5 = iVar5 + 4;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        local_1c = (int *)((int)local_1c + 1);
      } while ((int)local_1c < (int)puVar2[3]);
    }
  }
  dVar14 = *(double *)(iVar13 + 0xd98) * 1000.0;
  iVar5 = *(int *)(iVar13 + param_1 * 4);
  dVar16 = (double)*(int *)(in_ECX + 8) * 0.5;
  iVar8 = iVar5 >> 1;
  dVar15 = dVar16;
  if (dVar14 <= dVar16) {
    dVar15 = dVar14;
  }
  dVar14 = (double)iVar8;
  *(int *)(*(int *)(iVar13 + 0x420 + param_1 * 4) + 0x45c) = (int)((dVar15 / dVar16) * dVar14);
  if (param_2[1] == 1) {
    if (*(int *)(iVar13 + 0xd5c) == 0) {
      iVar6 = *(int *)(iVar13 + 0xb98);
    }
    else {
      iVar6 = *(int *)(iVar13 + 0xbb4);
    }
    dVar15 = dVar16;
    if ((double)iVar6 * 1000.0 <= dVar16) {
      dVar15 = (double)iVar6 * 1000.0;
    }
  }
  else if (param_2[1] == 2) {
    dVar15 = 250.0;
  }
  if (*(int *)(iVar13 + 0x520 + in_EDX * 4) == 2) {
    iVar5 = 0;
    param_1 = 0;
    if (0 < *(int *)(iVar13 + 0xc)) {
      puVar9 = (undefined4 *)(iVar13 + 0x220);
      do {
        if (iVar5 != 0) break;
        piVar3 = (int *)*puVar9;
        iVar6 = 0;
        if (0 < *piVar3) {
          piVar4 = piVar3 + 0x111;
          iVar10 = iVar5;
          do {
            iVar5 = iVar10;
            if (iVar10 != 0) break;
            if ((*piVar4 == in_EDX) && (iVar12 = *(int *)(in_ECX + 4), piVar1 = piVar3, 0 < iVar12))
            {
              do {
                iVar5 = iVar10 + 1;
                if (piVar1[1] != iVar6) {
                  iVar5 = iVar10;
                }
                iVar12 = iVar12 + -1;
                iVar10 = iVar5;
                piVar1 = piVar1 + 1;
              } while (iVar12 != 0);
            }
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + 1;
            iVar10 = iVar5;
          } while (iVar6 < *piVar3);
        }
        param_1 = param_1 + 1;
        puVar9 = puVar9 + 1;
      } while (param_1 < *(int *)(iVar13 + 0xc));
    }
    iVar13 = puVar2[2];
    iVar8 = iVar5 * iVar8;
    iVar5 = (int)(((dVar15 / dVar16) * dVar14 * (double)iVar5) / (double)iVar13 + 0.9) * iVar13;
    puVar2[1] = iVar5;
    if (iVar5 - iVar8 != 0 && iVar8 <= iVar5) {
      puVar2[1] = (iVar8 / iVar13) * iVar13;
    }
  }
  else {
    iVar13 = puVar2[2];
    iVar6 = (int)(((dVar15 / dVar16) * dVar14) / (double)iVar13 + 0.9) * iVar13;
    puVar2[1] = iVar6;
    if (iVar6 - iVar8 != 0 && iVar8 <= iVar6) {
      puVar2[1] = (int)(CONCAT44(iVar5 >> 0x1f,iVar8) / (longlong)iVar13) * iVar13;
    }
  }
  if (puVar2[1] == 0) {
    puVar2[1] = iVar13;
  }
  return;
}

