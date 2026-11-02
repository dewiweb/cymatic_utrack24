// rea decompile_all
// name: FUN_005bfc90
// address: 0x5bfc90
// body: available
// range: 0x5bfc90-0x5c008f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bfc90(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  double *pdVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  int local_28;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_00637f30();
  dVar12 = *(double *)(in_ECX + 0x10);
  LOCK();
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  UNLOCK();
  if (*(double *)(in_ECX + 0x18) != dVar12) {
    FUN_005bfba0();
    *(double *)(in_ECX + 0x18) = dVar12;
  }
  iVar5 = *(int *)(in_ECX + 0x24);
  local_28 = SUB84((double)param_1[2] * dVar12 + 6755399441055744.0,0);
  if (iVar5 < local_28 + 0xb) {
    iVar7 = *(int *)(in_ECX + 0xb8) % iVar5;
    iVar5 = local_28 + 0x23;
    *(int *)(in_ECX + 0xb8) = iVar7;
    FUN_00403320(*(undefined4 *)(in_ECX + 0x20),iVar5,1,1,0);
  }
  iVar8 = *(int *)(in_ECX + 0xb8) % iVar5;
  iVar9 = *(int *)(in_ECX + 0xbc);
  *(int *)(in_ECX + 0xb8) = iVar8;
  iVar8 = iVar9 + iVar8;
  dVar13 = dVar12;
  iVar7 = *(int *)(in_ECX + 0xfc);
  if (*(int *)*param_1 < *(int *)(in_ECX + 0xfc)) {
    iVar7 = *(int *)*param_1;
  }
  while (iVar9 < local_28 + 3) {
    local_14 = in_ECX + 0x20;
    iVar8 = iVar8 % iVar5;
    iVar9 = (local_28 + 3) - *(int *)(in_ECX + 0xbc);
    if (iVar5 - iVar8 < iVar9) {
      iVar9 = iVar5 - iVar8;
    }
    local_10 = iVar8;
    local_c = iVar9;
    (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&local_14);
    dVar13 = dVar12;
    if ((1.0001 < dVar12) && (iVar11 = iVar7 + -1, -1 < iVar11)) {
      iVar10 = iVar11 * 0x20;
      do {
        *(undefined1 *)(in_ECX + 0xb4) = 0;
        FUN_005bfa40(*(int *)(*(int *)(in_ECX + 0x2c) + iVar11 * 4) + iVar8 * 4,iVar9,
                     *(int *)(in_ECX + 0x108) + iVar10);
        iVar10 = iVar10 + -0x20;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    *(int *)(in_ECX + 0xbc) = *(int *)(in_ECX + 0xbc) + iVar9;
    iVar8 = iVar8 + iVar9;
    iVar9 = *(int *)(in_ECX + 0xbc);
  }
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      iVar9 = *param_1;
      iVar11 = param_1[1];
      *(undefined1 *)(iVar9 + 0x94) = 0;
      *(int *)(*(int *)(in_ECX + 0x100) + iVar8 * 4) =
           *(int *)(*(int *)(iVar9 + 0xc) + iVar8 * 4) + iVar11 * 4;
      *(undefined4 *)(*(int *)(in_ECX + 0x104) + iVar8 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x2c) + iVar8 * 4);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  iVar9 = (*(int *)(in_ECX + 0xb8) + 1) % iVar5;
  iVar8 = param_1[2];
  while (iVar8 = iVar8 + -1, -1 < iVar8) {
    dVar12 = *(double *)(in_ECX + 0xc0);
    iVar11 = 0;
    if (0 < iVar7) {
      do {
        iVar10 = *(int *)(*(int *)(in_ECX + 0x104) + iVar11 * 4);
        fVar2 = *(float *)(iVar10 + *(int *)(in_ECX + 0xb8) * 4);
        fVar3 = *(float *)(iVar10 + iVar9 * 4);
        pfVar4 = *(float **)(*(int *)(in_ECX + 0x100) + iVar11 * 4);
        piVar1 = (int *)(*(int *)(in_ECX + 0x100) + iVar11 * 4);
        *piVar1 = *piVar1 + 4;
        iVar11 = iVar11 + 1;
        *pfVar4 = (fVar3 - fVar2) * (float)dVar12 + fVar2;
      } while (iVar11 < iVar7);
    }
    dVar12 = *(double *)(in_ECX + 0xc0) + dVar13;
    *(double *)(in_ECX + 0xc0) = dVar12;
    if (1.0 <= dVar12) {
      iVar11 = *(int *)(in_ECX + 0xb8);
      iVar10 = *(int *)(in_ECX + 0xbc);
      do {
        iVar11 = iVar11 + 1;
        dVar12 = *(double *)(in_ECX + 0xc0) - 1.0;
        if (iVar5 <= iVar11) {
          iVar11 = 0;
        }
        iVar10 = iVar10 + -1;
        *(double *)(in_ECX + 0xc0) = dVar12;
        iVar9 = (iVar11 + 1) % iVar5;
      } while (1.0 <= dVar12);
      *(int *)(in_ECX + 0xb8) = iVar11;
      *(int *)(in_ECX + 0xbc) = iVar10;
    }
  }
  if (0.9999 <= dVar13) {
    if (((dVar13 <= 1.0001) && (0 < param_1[2])) && (iVar7 = iVar7 + -1, -1 < iVar7)) {
      iVar5 = iVar7 * 0x20;
      do {
        iVar9 = param_1[1] + param_1[2];
        iVar8 = *(int *)(*(int *)(*param_1 + 0xc) + iVar7 * 4);
        pdVar6 = (double *)(*(int *)(in_ECX + 0x108) + iVar5);
        if (param_1[2] < 2) {
          pdVar6[3] = pdVar6[2];
          dVar12 = *pdVar6;
        }
        else {
          dVar12 = (double)*(float *)(iVar8 + -8 + iVar9 * 4);
          pdVar6[3] = dVar12;
        }
        pdVar6[1] = dVar12;
        iVar5 = iVar5 + -0x20;
        iVar7 = iVar7 + -1;
        dVar12 = (double)*(float *)(iVar8 + -4 + iVar9 * 4);
        *pdVar6 = dVar12;
        pdVar6[2] = dVar12;
      } while (-1 < iVar7);
    }
  }
  else {
    iVar7 = iVar7 + -1;
    if (-1 < iVar7) {
      iVar5 = iVar7 * 0x20;
      do {
        iVar8 = *(int *)(in_ECX + 0x108);
        iVar9 = param_1[1];
        iVar11 = *param_1;
        *(undefined1 *)(iVar11 + 0x94) = 0;
        FUN_005bfa40(*(int *)(*(int *)(iVar11 + 0xc) + iVar7 * 4) + iVar9 * 4,param_1[2],
                     iVar8 + iVar5);
        iVar5 = iVar5 + -0x20;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      return;
    }
  }
  return;
}

