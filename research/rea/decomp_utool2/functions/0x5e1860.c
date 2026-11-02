// rea decompile_all
// name: FUN_005e1860
// address: 0x5e1860
// body: available
// range: 0x5e1860-0x5e1c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_005e1860(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  double *pdVar20;
  double *pdVar21;
  float *pfVar22;
  int in_ECX;
  int iVar23;
  double *pdVar24;
  int in_EDX;
  int iVar25;
  float *pfVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double local_240 [30];
  double local_150;
  undefined4 uStack_144;
  double local_140 [32];
  undefined4 uStack_3c;
  uint local_18;
  
  uVar16 = DAT_00c76070 ^ (uint)&stack0xfffffff0;
  uStack_3c = 0x5e1895;
  uStack_144 = 0x5e18a2;
  iVar25 = 0x21;
  iVar17 = param_1 + -0x21;
  pfVar22 = (float *)(in_ECX + 0x8c);
  do {
    iVar25 = iVar25 + -1;
    pfVar22 = pfVar22 + -1;
    iVar17 = iVar17 + 1;
    dVar29 = 0.0;
    if (iVar25 < param_1) {
      iVar23 = iVar25;
      if (3 < iVar17) {
        pfVar19 = (float *)(in_ECX + 8);
        iVar18 = ((param_1 - iVar25) - 4U >> 2) + 1;
        iVar23 = iVar25 + iVar18 * 4;
        pfVar26 = pfVar22;
        do {
          pfVar1 = pfVar19 + -2;
          pfVar2 = pfVar26 + -2;
          pfVar3 = pfVar19 + -1;
          pfVar4 = pfVar26 + -1;
          fVar13 = *pfVar26;
          fVar14 = *pfVar19;
          pfVar5 = pfVar26 + 1;
          pfVar26 = pfVar26 + 4;
          pfVar6 = pfVar19 + 1;
          pfVar19 = pfVar19 + 4;
          dVar29 = dVar29 + (double)*pfVar1 * (double)*pfVar2 + (double)*pfVar3 * (double)*pfVar4 +
                   (double)fVar14 * (double)fVar13 + (double)*pfVar6 * (double)*pfVar5;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      if (iVar23 < param_1) {
        pfVar19 = (float *)(in_ECX + (iVar23 - iVar25) * 4);
        do {
          iVar18 = iVar23 * 4;
          iVar23 = iVar23 + 1;
          fVar13 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          dVar29 = (double)*(float *)(in_ECX + iVar18) * (double)fVar13 + dVar29;
        } while (iVar23 < param_1);
      }
    }
    local_140[iVar25] = dVar29;
  } while (iVar25 != 0);
  local_18 = 0;
  pdVar21 = &local_150;
  dVar29 = local_140[0] * 1.0000000001;
  do {
    dVar28 = -pdVar21[3];
    if (dVar29 < local_140[0] * 1e-09 + 1e-10) {
      _memset(local_240 + local_18,0,local_18 * -8 + 0x100);
      break;
    }
    iVar17 = 0;
    if (3 < (int)local_18) {
      pdVar20 = local_240 + 2;
      iVar25 = (local_18 - 4 >> 2) + 1;
      iVar17 = iVar25 * 4;
      pdVar24 = pdVar21;
      do {
        pdVar7 = pdVar24 + 2;
        pdVar8 = pdVar20 + -2;
        pdVar9 = pdVar24 + 1;
        pdVar10 = pdVar20 + -1;
        dVar27 = *pdVar24;
        dVar15 = *pdVar20;
        pdVar11 = pdVar24 + -1;
        pdVar12 = pdVar20 + 1;
        pdVar24 = pdVar24 + -4;
        pdVar20 = pdVar20 + 4;
        dVar28 = (((dVar28 - *pdVar7 * *pdVar8) - *pdVar9 * *pdVar10) - dVar27 * dVar15) -
                 *pdVar11 * *pdVar12;
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
    }
    if (iVar17 < (int)local_18) {
      pdVar20 = local_140 + (local_18 - iVar17);
      do {
        pdVar24 = local_240 + iVar17;
        iVar17 = iVar17 + 1;
        dVar27 = *pdVar20;
        pdVar20 = pdVar20 + -1;
        dVar28 = dVar28 - *pdVar24 * dVar27;
      } while (iVar17 < (int)local_18);
    }
    dVar28 = dVar28 / dVar29;
    local_240[local_18] = dVar28;
    iVar17 = 0;
    if (0 < (int)local_18 / 2) {
      pdVar20 = local_240 + (local_18 - 1);
      do {
        dVar27 = local_240[iVar17];
        local_240[iVar17] = dVar28 * *pdVar20 + dVar27;
        iVar17 = iVar17 + 1;
        *pdVar20 = dVar27 * dVar28 + *pdVar20;
        pdVar20 = pdVar20 + -1;
      } while (iVar17 < (int)local_18 / 2);
    }
    if ((local_18 & 1) != 0) {
      local_240[iVar17] = local_240[iVar17] * dVar28 + local_240[iVar17];
    }
    local_18 = local_18 + 1;
    pdVar21 = pdVar21 + 1;
    dVar29 = dVar29 * (1.0 - dVar28 * dVar28);
  } while ((int)local_18 < 0x20);
  dVar29 = 0.99;
  iVar17 = 4;
  pdVar21 = local_240 + 2;
  do {
    pdVar21[-2] = dVar29 * pdVar21[-2];
    dVar28 = dVar29 * 0.99 * 0.99;
    pdVar21[-1] = pdVar21[-1] * dVar29 * 0.99;
    dVar29 = dVar28 * 0.99;
    *pdVar21 = dVar28 * *pdVar21;
    dVar28 = dVar29 * 0.99;
    pdVar21[1] = pdVar21[1] * dVar29;
    dVar29 = dVar28 * 0.99;
    pdVar21[2] = dVar28 * pdVar21[2];
    dVar28 = dVar29 * 0.99;
    pdVar21[3] = pdVar21[3] * dVar29;
    dVar27 = dVar28 * 0.99;
    pdVar21[4] = pdVar21[4] * dVar28;
    dVar29 = dVar27 * 0.99;
    pdVar21[5] = pdVar21[5] * dVar27;
    iVar17 = iVar17 + -1;
    pdVar21 = pdVar21 + 8;
  } while (iVar17 != 0);
  iVar17 = 4;
  pfVar22 = (float *)(in_EDX + 8);
  pdVar21 = local_240 + 2;
  do {
    pfVar22[-2] = (float)pdVar21[-2];
    pfVar22[-1] = (float)pdVar21[-1];
    *pfVar22 = (float)*pdVar21;
    pfVar22[1] = (float)pdVar21[1];
    pfVar22[2] = (float)pdVar21[2];
    pfVar22[3] = (float)pdVar21[3];
    pfVar22[4] = (float)pdVar21[4];
    pfVar22[5] = (float)pdVar21[5];
    iVar17 = iVar17 + -1;
    pfVar22 = pfVar22 + 8;
    pdVar21 = pdVar21 + 8;
  } while (iVar17 != 0);
  __security_check_cookie(uVar16 ^ (uint)&stack0xfffffff0);
  return;
}

