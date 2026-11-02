// rea decompile_all
// name: FUN_00680060
// address: 0x680060
// body: available
// range: 0x680060-0x68046e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00680060(float *param_1)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  float *pfVar4;
  undefined4 *in_ECX;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  in_ECX[3] = 0;
  pfVar1 = (float *)*in_ECX;
  iVar2 = in_ECX[2];
  bVar3 = true;
  pfVar5 = pfVar1;
joined_r0x0068008d:
  while( true ) {
    while( true ) {
      pfVar4 = pfVar5;
      if (pfVar1 + iVar2 <= pfVar4) {
        return;
      }
      fVar9 = *pfVar4;
      pfVar5 = pfVar4 + 1;
      if (fVar9 != 100002.0) break;
      fVar9 = *pfVar5;
      fVar8 = param_1[1] * pfVar4[2] + *param_1 * fVar9 + param_1[2];
      *pfVar5 = fVar8;
      fVar9 = param_1[3] * fVar9 + param_1[4] * pfVar4[2] + param_1[5];
      pfVar4[2] = fVar9;
      if (bVar3) {
        in_ECX[5] = fVar9;
        bVar3 = false;
        in_ECX[4] = fVar8;
        in_ECX[3] = fVar8;
        in_ECX[6] = fVar9;
        pfVar5 = pfVar4 + 3;
      }
      else {
        fVar7 = fVar8;
        if ((float)in_ECX[3] <= fVar8) {
          fVar7 = (float)in_ECX[3];
        }
        if (fVar8 <= (float)in_ECX[4]) {
          fVar8 = (float)in_ECX[4];
        }
        in_ECX[3] = fVar7;
        fVar7 = fVar9;
        if ((float)in_ECX[5] <= fVar9) {
          fVar7 = (float)in_ECX[5];
        }
        if (fVar9 <= (float)in_ECX[6]) {
          fVar9 = (float)in_ECX[6];
        }
        in_ECX[4] = fVar8;
        in_ECX[5] = fVar7;
        in_ECX[6] = fVar9;
        pfVar5 = pfVar4 + 3;
      }
    }
    if (fVar9 == 100001.0) break;
    if (fVar9 != 100003.0) goto LAB_006802e3;
    fVar9 = *pfVar5;
    fVar8 = pfVar4[3];
    *pfVar5 = *param_1 * fVar9 + param_1[1] * pfVar4[2] + param_1[2];
    pfVar4[2] = pfVar4[2] * param_1[4] + fVar9 * param_1[3] + param_1[5];
    pfVar4[3] = *param_1 * fVar8 + pfVar4[4] * param_1[1] + param_1[2];
    fVar6 = pfVar4[4] * param_1[4] + fVar8 * param_1[3] + param_1[5];
    pfVar4[4] = fVar6;
    fVar9 = *pfVar5;
    fVar8 = pfVar4[3];
    fVar7 = pfVar4[2];
    if (fVar8 <= fVar9) {
      if ((float)in_ECX[3] <= fVar8) {
        fVar8 = (float)in_ECX[3];
      }
      if (fVar9 <= (float)in_ECX[4]) {
        fVar9 = (float)in_ECX[4];
      }
      in_ECX[3] = fVar8;
      in_ECX[4] = fVar9;
    }
    else {
      if ((float)in_ECX[3] <= fVar9) {
        fVar9 = (float)in_ECX[3];
      }
      if (fVar8 <= (float)in_ECX[4]) {
        fVar8 = (float)in_ECX[4];
      }
      in_ECX[3] = fVar9;
      in_ECX[4] = fVar8;
    }
    if (fVar6 <= fVar7) {
      if ((float)in_ECX[5] <= fVar6) {
        fVar6 = (float)in_ECX[5];
      }
      if (fVar7 <= (float)in_ECX[6]) {
        fVar7 = (float)in_ECX[6];
      }
      in_ECX[5] = fVar6;
      in_ECX[6] = fVar7;
      pfVar5 = pfVar4 + 5;
    }
    else {
      if ((float)in_ECX[5] <= fVar7) {
        fVar7 = (float)in_ECX[5];
      }
      if (fVar6 <= (float)in_ECX[6]) {
        fVar6 = (float)in_ECX[6];
      }
      in_ECX[5] = fVar7;
      in_ECX[6] = fVar6;
      pfVar5 = pfVar4 + 5;
    }
  }
  fVar9 = *pfVar5;
  *pfVar5 = param_1[1] * pfVar4[2] + *param_1 * fVar9 + param_1[2];
  fVar8 = param_1[3] * fVar9 + param_1[4] * pfVar4[2] + param_1[5];
  pfVar4[2] = fVar8;
  fVar9 = *pfVar5;
  pfVar5 = pfVar4 + 3;
  fVar7 = fVar9;
  if ((float)in_ECX[3] <= fVar9) {
    fVar7 = (float)in_ECX[3];
  }
  in_ECX[3] = fVar7;
  fVar7 = fVar8;
  if (fVar8 <= (float)in_ECX[6]) {
    fVar7 = (float)in_ECX[6];
  }
  in_ECX[6] = fVar7;
  goto LAB_0068044c;
LAB_006802e3:
  if (fVar9 == 100004.0) {
    fVar9 = *pfVar5;
    fVar8 = pfVar4[3];
    fVar7 = pfVar4[5];
    *pfVar5 = *param_1 * fVar9 + param_1[1] * pfVar4[2] + param_1[2];
    pfVar4[2] = pfVar4[2] * param_1[4] + fVar9 * param_1[3] + param_1[5];
    pfVar4[3] = *param_1 * fVar8 + pfVar4[4] * param_1[1] + param_1[2];
    pfVar4[4] = pfVar4[4] * param_1[4] + fVar8 * param_1[3] + param_1[5];
    pfVar4[5] = *param_1 * fVar7 + pfVar4[6] * param_1[1] + param_1[2];
    pfVar4[6] = pfVar4[6] * param_1[4] + fVar7 * param_1[3] + param_1[5];
    fVar9 = *pfVar5;
    fVar8 = pfVar4[3];
    fVar7 = pfVar4[2];
    fVar6 = pfVar4[4];
    if (fVar8 <= fVar9) {
      if ((float)in_ECX[3] <= fVar8) {
        fVar8 = (float)in_ECX[3];
      }
      if (fVar9 <= (float)in_ECX[4]) {
        fVar9 = (float)in_ECX[4];
      }
      in_ECX[3] = fVar8;
      in_ECX[4] = fVar9;
    }
    else {
      if ((float)in_ECX[3] <= fVar9) {
        fVar9 = (float)in_ECX[3];
      }
      if (fVar8 <= (float)in_ECX[4]) {
        fVar8 = (float)in_ECX[4];
      }
      in_ECX[3] = fVar9;
      in_ECX[4] = fVar8;
    }
    if (fVar6 <= fVar7) {
      if ((float)in_ECX[5] <= fVar6) {
        fVar6 = (float)in_ECX[5];
      }
      if (fVar7 <= (float)in_ECX[6]) {
        fVar7 = (float)in_ECX[6];
      }
      in_ECX[5] = fVar6;
      in_ECX[6] = fVar7;
    }
    else {
      if ((float)in_ECX[5] <= fVar7) {
        fVar7 = (float)in_ECX[5];
      }
      if (fVar6 <= (float)in_ECX[6]) {
        fVar6 = (float)in_ECX[6];
      }
      in_ECX[5] = fVar7;
      in_ECX[6] = fVar6;
    }
    fVar9 = pfVar4[5];
    fVar8 = pfVar4[6];
    fVar7 = fVar9;
    if ((float)in_ECX[3] <= fVar9) {
      fVar7 = (float)in_ECX[3];
    }
    pfVar5 = pfVar4 + 7;
    in_ECX[3] = fVar7;
    fVar7 = fVar8;
    if (fVar8 <= (float)in_ECX[6]) {
      fVar7 = (float)in_ECX[6];
    }
    in_ECX[6] = fVar7;
LAB_0068044c:
    if ((float)in_ECX[5] <= fVar8) {
      fVar8 = (float)in_ECX[5];
    }
    if (fVar9 <= (float)in_ECX[4]) {
      fVar9 = (float)in_ECX[4];
    }
    in_ECX[5] = fVar8;
    in_ECX[4] = fVar9;
  }
  goto joined_r0x0068008d;
}

