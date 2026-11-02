// rea decompile_all
// name: FUN_005dd7c0
// address: 0x5dd7c0
// body: available
// range: 0x5dd7c0-0x5de0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dd7c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_60;
  
  local_74 = -99;
  _memset(in_ECX,0,0x34);
  in_ECX[9] = *param_1;
  fVar9 = (float)*param_1 * 8.0;
  FUN_00436450();
  fVar14 = 2.0;
  FUN_00436450();
  fVar9 = fVar9 / fVar14 + 0.5;
  FUN_00436410();
  dVar13 = (double)param_2;
  in_ECX[8] = (int)(fVar9 - 1.0);
  dVar10 = ((double)((float)param_3 * 0.25) * 0.5) / dVar13;
  FUN_006f8470();
  iVar6 = (int)((dVar10 * 1.4426950216293335 - 5.965784072875977) *
                (double)(1 << ((char)(int)(fVar9 - 1.0) + 1U & 0x1f)) - (double)*param_1);
  in_ECX[7] = iVar6;
  dVar10 = ((double)(((float)param_2 + 0.25) * (float)param_3) * 0.5) / dVar13;
  FUN_006f8470();
  in_ECX[10] = ((int)((dVar10 * 1.4426950216293335 - 5.965784072875977) *
                      (double)(1 << ((char)in_ECX[8] + 1U & 0x1f)) + 0.5) - iVar6) + 1;
  iVar6 = FUN_004c554b();
  in_ECX[4] = iVar6;
  iVar6 = FUN_004c554b();
  in_ECX[5] = iVar6;
  iVar6 = FUN_004c554b();
  in_ECX[6] = iVar6;
  in_ECX[1] = in_EDX;
  *in_ECX = param_2;
  in_ECX[0xb] = param_3;
  in_ECX[0xc] = 0x3f800000;
  if (param_3 < 26000) {
    in_ECX[0xc] = 0;
  }
  else if (param_3 < 38000) {
    in_ECX[0xc] = 0x3f70a3d7;
  }
  else if (46000 < param_3) {
    in_ECX[0xc] = 0x3fa33333;
  }
  iVar6 = 0;
  iStack_6c = 0;
  do {
    iVar1 = iStack_6c + 1;
    dVar10 = (((double)iVar1 * 0.125 - 2.0) + 5.965784072875977) * 0.6931470036506653;
    FUN_006f7ee0();
    fVar8 = (float10)FUN_006f9790((dVar10 * 2.0 * dVar13) / (double)param_3 + 0.5);
    iVar4 = (int)fVar8;
    fVar9 = (float)(&DAT_00b938a0)[iStack_6c];
    if (iVar6 < iVar4) {
      fVar14 = ((float)(&DAT_00b938a4)[iStack_6c] - fVar9) / (float)(iVar4 - iVar6);
      if (3 < iVar4 - iVar6) {
        iVar3 = iVar6 + 2;
        do {
          if (param_2 <= iVar6) goto LAB_005ddb3d;
          *(float *)(in_ECX[4] + iVar6 * 4) = fVar9 + 100.0;
          if (param_2 <= iVar3 + -1) {
            iVar6 = iVar6 + 1;
            goto LAB_005ddb3d;
          }
          fVar12 = fVar14 + fVar14 + fVar9;
          *(float *)(in_ECX[4] + 4 + iVar6 * 4) = fVar14 + fVar9 + 100.0;
          if (param_2 <= iVar3) {
            iVar6 = iVar6 + 2;
            goto LAB_005ddb3d;
          }
          fVar15 = fVar14 + fVar12;
          *(float *)(in_ECX[4] + 8 + iVar6 * 4) = fVar12 + 100.0;
          if (param_2 <= iVar3 + 1) {
            iVar6 = iVar6 + 3;
            goto LAB_005ddb3d;
          }
          iVar3 = iVar3 + 4;
          fVar9 = fVar14 + fVar15;
          *(float *)(in_ECX[4] + 0xc + iVar6 * 4) = fVar15 + 100.0;
          iVar6 = iVar6 + 4;
        } while (iVar6 < iVar4 + -3);
      }
      for (; (iVar6 < iVar4 && (iVar6 < param_2)); iVar6 = iVar6 + 1) {
        *(float *)(in_ECX[4] + iVar6 * 4) = fVar9 + 100.0;
        fVar9 = fVar9 + fVar14;
      }
    }
LAB_005ddb3d:
    iStack_6c = iVar1;
  } while (iVar1 < 0x57);
  if (iVar6 < param_2) {
    if (3 < param_2 - iVar6) {
      do {
        *(undefined4 *)(in_ECX[4] + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -4 + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + 4 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + 8 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + 4 + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + 0xc + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + 8 + iVar6 * 4);
        iVar6 = iVar6 + 4;
      } while (iVar6 < param_2 + -3);
    }
    for (; iVar6 < param_2; iVar6 = iVar6 + 1) {
      *(undefined4 *)(in_ECX[4] + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -4 + iVar6 * 4);
    }
  }
  iStack_78 = 0;
  if (0 < param_2) {
    iVar1 = param_3 / (param_2 * 2);
    iVar4 = iVar1 * iVar1;
    local_60 = 0;
    iStack_70 = 0;
    iVar6 = 1;
    do {
      dVar10 = (double)((float)(local_60 * iStack_78) * 1.85e-08);
      FUN_006f7a30();
      dVar11 = (double)((float)iStack_70 * 0.00074);
      FUN_006f7a30();
      iStack_68 = *(int *)(in_EDX + 0x78) + local_74;
      fVar9 = (float)dVar10 * 2.24 + (float)dVar11 * 13.1 + (float)iStack_70 * 0.0001;
      if (iStack_68 < iStack_78) {
        iVar3 = iVar1 * local_74;
        fVar14 = *(float *)(in_EDX + 0x70);
        iVar7 = iVar4 * local_74;
        do {
          dVar10 = (double)((float)(iVar7 * local_74) * 1.85e-08);
          FUN_006f7a30();
          dVar11 = (double)((float)iVar3 * 0.00074);
          FUN_006f7a30();
          if (fVar9 - fVar14 <= (float)dVar10 * 2.24 + (float)dVar11 * 13.1 + (float)iVar3 * 0.0001)
          break;
          iStack_68 = iStack_68 + 1;
          iVar7 = iVar7 + iVar4;
          local_74 = local_74 + 1;
          iVar3 = iVar3 + iVar1;
        } while (iStack_68 < iStack_78);
      }
      if (iVar6 <= param_2) {
        iVar5 = iVar1 * iVar6;
        iVar3 = *(int *)(in_EDX + 0x7c);
        iVar7 = iVar4 * iVar6;
        do {
          if (iVar3 + iStack_78 <= iVar6) {
            dVar10 = (double)((float)(iVar7 * iVar6) * 1.85e-08);
            FUN_006f7a30();
            dVar11 = (double)((float)iVar5 * 0.00074);
            FUN_006f7a30();
            if (*(float *)(in_EDX + 0x74) + fVar9 <=
                (float)dVar10 * 2.24 + (float)dVar11 * 13.1 + (float)iVar5 * 0.0001) break;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + iVar4;
          iVar5 = iVar5 + iVar1;
        } while (iVar6 <= param_2);
      }
      *(int *)(in_ECX[6] + iStack_78 * 4) = local_74 * 0x10000 + -0x10001 + iVar6;
      iStack_78 = iStack_78 + 1;
      local_60 = local_60 + iVar4;
      iStack_70 = iStack_70 + iVar1;
    } while (iStack_78 < param_2);
  }
  iVar6 = 0;
  if (0 < param_2) {
    do {
      dVar10 = ((double)((float)iVar6 + 0.25) * 0.5 * (double)param_3) / dVar13;
      FUN_006f8470();
      *(int *)(in_ECX[5] + iVar6 * 4) =
           (int)((dVar10 * 1.4426950216293335 - 5.965784072875977) *
                 (double)(1 << ((char)in_ECX[8] + 1U & 0x1f)) + 0.5);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  iVar6 = FUN_005de0b0();
  in_ECX[2] = iVar6;
  iVar6 = FUN_004c554b();
  in_ECX[3] = iVar6;
  iVar6 = 0;
  do {
    uVar2 = FUN_004c554b();
    *(undefined4 *)(iVar6 + in_ECX[3]) = uVar2;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0xc);
  iVar6 = 0;
  if (0 < param_2) {
    do {
      dVar10 = (((double)iVar6 + 0.5) * (double)param_3) / (dVar13 + dVar13);
      FUN_006f8470();
      dVar10 = dVar10 * 1.4426950216293335 - 5.965784072875977;
      fVar14 = (float)(dVar10 + dVar10);
      fVar9 = 0.0;
      if (0.0 <= fVar14) {
        fVar9 = fVar14;
      }
      fVar14 = 16.0;
      if (fVar9 <= 16.0) {
        fVar14 = fVar9;
      }
      iVar1 = (int)fVar14;
      fVar14 = fVar14 - (float)iVar1;
      fVar9 = 1.0 - fVar14;
      *(float *)(*(int *)in_ECX[3] + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0x84 + iVar1 * 4) * fVar9 +
           *(float *)(in_ECX[1] + 0x88 + iVar1 * 4) * fVar14;
      *(float *)(*(int *)(in_ECX[3] + 4) + iVar6 * 4) =
           *(float *)(in_ECX[1] + 200 + iVar1 * 4) * fVar9 +
           *(float *)(in_ECX[1] + 0xcc + iVar1 * 4) * fVar14;
      *(float *)(*(int *)(in_ECX[3] + 8) + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0x10c + iVar1 * 4) * fVar9 +
           *(float *)(in_ECX[1] + 0x110 + iVar1 * 4) * fVar14;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  return;
}

