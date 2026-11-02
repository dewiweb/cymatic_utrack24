// rea decompile_all
// name: FUN_00406de0
// address: 0x406de0
// body: available
// range: 0x406de0-0x4070d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00406de0(int param_1,int param_2,undefined4 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  double *pdVar8;
  byte bVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_1c = *param_3;
  iVar11 = *(int *)(in_ECX + 0x14) * param_2;
  param_2 = 0;
  local_14 = in_ECX;
  if (iVar11 < 1) {
    return 0;
  }
  do {
    local_10 = *(int *)(in_ECX + 0x5c);
    iVar10 = *(int *)(in_ECX + 0x2c) - local_10;
    if (iVar11 < local_10) {
      *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) - iVar11;
      if (*(int *)(in_ECX + 0x40) < 0) {
        FUN_004070e0(&param_1,*(int *)(in_ECX + 0x54) + iVar10 * 8,iVar11);
      }
      else {
        bVar9 = (byte)*(int *)(in_ECX + 0x40);
        FUN_004c2c30(*(int *)(in_ECX + 0x54) + (iVar10 >> (bVar9 & 0x1f)) * 8,param_1,
                     (iVar11 >> (bVar9 & 0x1f)) << 3);
      }
      FUN_00407220(iVar10 - *(int *)(in_ECX + 0x24),&local_1c,iVar11,&param_2);
      return param_2;
    }
    local_c = iVar11 - local_10;
    *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x2c);
    if (*(int *)(in_ECX + 0x40) < 0) {
      FUN_004070e0(&param_1,*(int *)(in_ECX + 0x54) + iVar10 * 8,local_10);
      iVar11 = *(int *)(in_ECX + 0x2c);
    }
    else {
      bVar9 = (byte)*(int *)(in_ECX + 0x40);
      iVar11 = (local_10 >> (bVar9 & 0x1f)) * 8;
      FUN_004c2c30(*(int *)(in_ECX + 0x54) + (iVar10 >> (bVar9 & 0x1f)) * 8,param_1,iVar11);
      param_1 = param_1 + iVar11;
      iVar11 = *(int *)(in_ECX + 0x2c) >> ((byte)*(undefined4 *)(in_ECX + 0x40) & 0x1f);
    }
    iVar12 = *(int *)(in_ECX + 0x28) << 3;
    FUN_004c2c30(*(int *)(in_ECX + 0x54) + iVar11 * 8,*(undefined4 *)(in_ECX + 0x50),iVar12);
    FUN_004c2c30(*(undefined4 *)(in_ECX + 0x50),
                 *(int *)(in_ECX + 0x54) + (iVar11 - *(int *)(in_ECX + 0x28)) * 8,iVar12);
    FUN_004042c0(*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(**(int **)(in_ECX + 8) + 0x14),
                 *(undefined4 *)(**(int **)(in_ECX + 8) + 0x18));
    if (0 < *(int *)(in_ECX + 0x40)) {
      FUN_004073b0();
    }
    iVar11 = *(int *)(in_ECX + 4);
    if (*(char *)(iVar11 + 0x30) == '\0') {
      pdVar5 = *(double **)(in_ECX + 0x54);
      iVar12 = 2;
      pdVar6 = *(double **)(iVar11 + 0x48);
      local_18 = **(int **)(in_ECX + 0x10);
      *pdVar5 = *pdVar5 * *pdVar6;
      pdVar5[1] = pdVar6[1] * pdVar5[1];
      if (2 < *(int *)(local_18 + 4)) {
        pdVar8 = pdVar5 + 3;
        do {
          dVar2 = pdVar6[iVar12];
          iVar12 = iVar12 + 2;
          dVar3 = pdVar8[-1];
          dVar4 = *(double *)(((int)pdVar6 - (int)pdVar5) + (int)pdVar8);
          pdVar8[-1] = dVar2 * dVar3 -
                       *(double *)(((int)pdVar6 - (int)pdVar5) + (int)pdVar8) * *pdVar8;
          *pdVar8 = dVar2 * *pdVar8 + dVar3 * dVar4;
          pdVar8 = pdVar8 + 2;
          in_ECX = local_14;
        } while (iVar12 < *(int *)(local_18 + 4));
      }
    }
    else {
      pdVar5 = *(double **)(in_ECX + 0x54);
      iVar12 = 2;
      pdVar6 = *(double **)(iVar11 + 0x48);
      iVar11 = **(int **)(in_ECX + 0x10);
      *pdVar5 = *pdVar5 * *pdVar6;
      pdVar5[1] = pdVar6[1] * pdVar5[1];
      if (2 < *(int *)(iVar11 + 4)) {
        pdVar8 = pdVar5 + 2;
        do {
          pdVar1 = pdVar8 + 2;
          iVar12 = iVar12 + 2;
          *pdVar8 = *pdVar8 * *(double *)((int)pdVar6 + (-0x10 - (int)pdVar5) + (int)pdVar1);
          pdVar8[1] = *(double *)((int)pdVar6 + (-0x10 - (int)pdVar5) + (int)pdVar1) * pdVar8[1];
          pdVar8 = pdVar1;
        } while (iVar12 < *(int *)(iVar11 + 4));
      }
    }
    if (0 < *(int *)(in_ECX + 0x44)) {
      iVar11 = *(int *)(in_ECX + 0x20) >> ((byte)*(int *)(in_ECX + 0x44) & 0x1f);
      *(double *)(*(int *)(in_ECX + 0x54) + 8) =
           *(double *)(*(int *)(*(int *)(in_ECX + 4) + 0x48) + iVar11 * 8) *
           *(double *)(*(int *)(in_ECX + 0x54) + iVar11 * 8);
    }
    FUN_004042c0(*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(**(int **)(in_ECX + 0x10) + 0x14),
                 *(undefined4 *)(**(int **)(in_ECX + 0x10) + 0x18));
    FUN_00407220(iVar10 - *(int *)(in_ECX + 0x24),&local_1c,local_10,&param_2);
    uVar7 = *(undefined4 *)(in_ECX + 0x54);
    *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 0x58);
    *(undefined4 *)(in_ECX + 0x58) = uVar7;
    iVar11 = local_c;
  } while (0 < local_c);
  return param_2;
}

