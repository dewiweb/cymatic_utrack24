// rea decompile_all
// name: FUN_005d83c0
// address: 0x5d83c0
// body: available
// range: 0x5d83c0-0x5d8812 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d83c0(int param_1,float *param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint in_ECX;
  int iVar5;
  float *pfVar6;
  int in_EDX;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *local_50;
  int local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  int local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  int local_c;
  
  iVar5 = in_ECX * in_EDX;
  iVar7 = 0;
  if (0 < in_EDX) {
    pfVar6 = (float *)(param_1 + iVar5 * 4);
    local_14 = (float *)(param_1 + iVar5 * 0xc);
    local_10 = (float *)(param_1 + iVar5 * 8);
    local_44 = (float *)in_EDX;
    do {
      fVar11 = *local_14;
      fVar10 = *pfVar6;
      fVar9 = *(float *)(param_1 + iVar7 * 4) + *local_10;
      param_2[iVar7 * 4] = fVar9 + fVar11 + fVar10;
      iVar2 = iVar7 * 4 + in_ECX * 2;
      param_2[in_ECX * 4 + iVar7 * 4 + -1] = fVar9 - (fVar11 + fVar10);
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + in_ECX;
      param_2[iVar2 + -1] = *(float *)(param_1 + iVar1) - *local_10;
      fVar11 = *local_14;
      local_10 = local_10 + in_ECX;
      local_14 = local_14 + in_ECX;
      param_2[iVar2] = fVar11 - *pfVar6;
      pfVar6 = pfVar6 + in_ECX;
      local_44 = (float *)((int)local_44 + -1);
    } while (local_44 != (float *)0x0);
  }
  if (1 < (int)in_ECX) {
    if (in_ECX != 2) {
      local_38 = 0;
      if (0 < in_EDX) {
        local_3c = param_2;
        local_44 = (float *)(param_1 + iVar5 * 0xc);
        local_40 = (float *)(param_1 + iVar5 * 4);
        local_50 = (float *)in_EDX;
        do {
          iVar7 = local_38 * 4 + in_ECX * 2;
          if (2 < (int)in_ECX) {
            local_24 = local_3c;
            local_34 = param_5;
            local_18 = local_40;
            pfVar3 = (float *)(param_3 + 4);
            local_1c = local_44;
            local_48 = (in_ECX - 3 >> 1) + 1;
            pfVar6 = param_2 + iVar7;
            local_30 = param_2 + iVar7 + in_ECX * 2;
            local_2c = param_2 + local_38 * 4 + in_ECX * 2;
            local_20 = (float *)(local_38 * 4 + param_1);
            local_14 = (float *)(param_1 + (local_38 + iVar5 * 2) * 4);
            do {
              pfVar4 = local_18 + 2;
              pfVar8 = local_14 + 2;
              fVar15 = pfVar3[-1] * local_18[1] + *pfVar4 * *pfVar3;
              fVar12 = pfVar3[-1] * *pfVar4 - *pfVar3 * local_18[1];
              fVar11 = *(float *)((param_4 - param_3) + (int)pfVar3);
              fVar10 = *(float *)((param_4 - (int)param_5) + (int)local_34);
              fVar13 = fVar10 * local_14[1] + fVar11 * *pfVar8;
              fVar17 = fVar10 * *pfVar8 - fVar11 * local_14[1];
              fVar11 = *(float *)(((int)param_5 - param_3) + (int)pfVar3);
              fVar10 = local_1c[2];
              fVar9 = local_1c[1] * *local_34 + fVar11 * fVar10;
              fVar14 = fVar10 * *local_34 - fVar11 * local_1c[1];
              fVar11 = local_20[2];
              fVar10 = local_20[1] + fVar13;
              fVar16 = fVar9 + fVar15;
              fVar9 = fVar9 - fVar15;
              fVar13 = local_20[1] - fVar13;
              fVar15 = fVar14 + fVar12;
              fVar12 = fVar12 - fVar14;
              fVar14 = fVar11 + fVar17;
              fVar11 = fVar11 - fVar17;
              local_24[1] = fVar10 + fVar16;
              local_24[2] = fVar14 + fVar15;
              pfVar6[-3] = fVar13 - fVar12;
              pfVar6[-2] = fVar9 - fVar11;
              local_2c[1] = fVar13 + fVar12;
              local_34 = local_34 + 2;
              pfVar3 = pfVar3 + 2;
              local_48 = local_48 + -1;
              local_2c[2] = fVar11 + fVar9;
              local_30[-3] = fVar10 - fVar16;
              local_30[-2] = fVar15 - fVar14;
              pfVar6 = pfVar6 + -2;
              local_30 = local_30 + -2;
              local_2c = local_2c + 2;
              local_24 = local_24 + 2;
              local_20 = local_20 + 2;
              local_1c = local_1c + 2;
              local_18 = pfVar4;
              local_14 = pfVar8;
            } while (local_48 != 0);
          }
          local_38 = local_38 + in_ECX;
          local_3c = local_3c + in_ECX * 4;
          local_40 = local_40 + in_ECX;
          local_44 = local_44 + in_ECX;
          local_50 = (float *)((int)local_50 + -1);
        } while (local_50 != (float *)0x0);
      }
      if ((in_ECX & 1) != 0) {
        return;
      }
    }
    iVar7 = (in_ECX - 1) + iVar5;
    if (0 < in_EDX) {
      pfVar6 = param_2 + in_ECX;
      pfVar3 = (float *)(param_1 + (iVar7 + iVar5 * 2) * 4);
      local_50 = (float *)(param_1 + iVar7 * 4);
      param_2 = param_2 + in_ECX * 3;
      pfVar4 = (float *)(param_1 + (iVar7 + iVar5) * 4);
      pfVar8 = (float *)(param_1 + (iVar7 - iVar5) * 4);
      local_c = in_EDX;
      do {
        fVar11 = *pfVar3;
        fVar10 = *local_50;
        local_50 = local_50 + in_ECX;
        pfVar3 = pfVar3 + in_ECX;
        fVar9 = (fVar10 - fVar11) * 0.70710677;
        fVar10 = (fVar10 + fVar11) * -0.70710677;
        pfVar6[-1] = *pfVar8 + fVar9;
        fVar11 = *pfVar8;
        pfVar8 = pfVar8 + in_ECX;
        param_2[-1] = fVar11 - fVar9;
        *pfVar6 = fVar10 - *pfVar4;
        fVar11 = *pfVar4;
        pfVar4 = pfVar4 + in_ECX;
        pfVar6 = pfVar6 + in_ECX * 4;
        *param_2 = fVar11 + fVar10;
        param_2 = param_2 + in_ECX * 4;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  return;
}

