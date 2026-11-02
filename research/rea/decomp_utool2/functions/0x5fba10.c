// rea decompile_all
// name: FUN_005fba10
// address: 0x5fba10
// body: available
// range: 0x5fba10-0x5fbd09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fba10(float *param_1,int param_2)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *in_ECX;
  uint uVar8;
  float **ppfVar9;
  uint *in_EDX;
  uint uVar10;
  float *pfVar11;
  double dVar12;
  double dVar13;
  float *local_120;
  int local_11c;
  double local_118 [32];
  uint local_14;
  
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffff0;
  uVar10 = 0;
  dVar13 = (double)*in_ECX;
  if (*in_EDX == 0) {
LAB_005fbcf7:
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
    return;
  }
  local_120 = param_1;
  pfVar11 = in_ECX + -2;
  local_11c = 0;
  do {
    uVar8 = 0;
    dVar12 = (double)-pfVar11[3];
    pfVar7 = pfVar11;
    if (3 < uVar10) {
      do {
        pdVar1 = local_118 + uVar8;
        iVar4 = uVar8 + 1;
        iVar5 = uVar8 + 2;
        iVar6 = uVar8 + 3;
        uVar8 = uVar8 + 4;
        dVar12 = (((dVar12 - (double)pfVar7[2] * *pdVar1) - (double)pfVar7[1] * local_118[iVar4]) -
                 (double)*pfVar7 * local_118[iVar5]) - (double)pfVar7[-1] * local_118[iVar6];
        pfVar7 = pfVar7 + -4;
      } while (uVar8 < uVar10 - 3);
    }
    if (uVar8 < uVar10) {
      pfVar7 = in_ECX + (uVar10 - uVar8);
      do {
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + -1;
        pdVar1 = local_118 + uVar8;
        uVar8 = uVar8 + 1;
        dVar12 = dVar12 - (double)fVar2 * *pdVar1;
      } while (uVar8 < uVar10);
    }
    dVar12 = dVar12 / dVar13;
    uVar8 = 0;
    local_118[uVar10] = dVar12;
    if (uVar10 >> 1 != 0) {
      ppfVar9 = &local_120 + uVar10 * 2;
      do {
        dVar3 = local_118[uVar8];
        local_118[uVar8] = dVar12 * *(double *)ppfVar9 + dVar3;
        uVar8 = uVar8 + 1;
        *(double *)ppfVar9 = dVar3 * dVar12 + *(double *)ppfVar9;
        ppfVar9 = ppfVar9 + -2;
      } while (uVar8 < uVar10 >> 1);
    }
    if ((uVar10 & 1) != 0) {
      local_118[uVar8] = local_118[uVar8] * dVar12 + local_118[uVar8];
    }
    uVar8 = 0;
    dVar13 = dVar13 * (1.0 - dVar12 * dVar12);
    pfVar7 = local_120;
    if (uVar10 + 1 < 4) {
LAB_005fbc52:
      pfVar7 = param_1 + local_11c + uVar8;
      do {
        pdVar1 = local_118 + uVar8;
        uVar8 = uVar8 + 1;
        *pfVar7 = (float)-*pdVar1;
        pfVar7 = pfVar7 + 1;
      } while (uVar8 <= uVar10);
    }
    else {
      do {
        *pfVar7 = (float)-local_118[uVar8];
        pfVar7[1] = (float)-local_118[uVar8 + 1];
        pfVar7[2] = (float)-local_118[uVar8 + 2];
        iVar4 = uVar8 + 3;
        uVar8 = uVar8 + 4;
        pfVar7[3] = (float)-local_118[iVar4];
        pfVar7 = pfVar7 + 4;
      } while (uVar8 <= uVar10 - 3);
      if (uVar8 <= uVar10) goto LAB_005fbc52;
    }
    *(double *)(param_2 + uVar10 * 8) = dVar13;
    if (dVar13 == 0.0) {
      *in_EDX = uVar10 + 1;
      goto LAB_005fbcf7;
    }
    local_120 = local_120 + 0x20;
    uVar10 = uVar10 + 1;
    pfVar11 = pfVar11 + 1;
    local_11c = local_11c + 0x20;
    if (*in_EDX <= uVar10) {
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}

