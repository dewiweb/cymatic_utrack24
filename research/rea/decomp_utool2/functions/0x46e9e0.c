// rea decompile_all
// name: FUN_0046e9e0
// address: 0x46e9e0
// body: available
// range: 0x46e9e0-0x46eab1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046e9e0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *in_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar4 = in_ECX[2];
  if (1 < iVar4) {
    pfVar3 = (float *)*in_ECX;
    iVar4 = iVar4 + -1;
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2] + fVar5;
    fVar9 = pfVar3[3] + fVar6;
    if (0 < iVar4) {
      pfVar3 = pfVar3 + iVar4 * 4;
      fVar8 = fVar7;
      fVar10 = fVar9;
      fVar11 = fVar5;
      fVar12 = fVar6;
      do {
        iVar4 = iVar4 + -1;
        fVar5 = *pfVar3;
        if (fVar11 <= *pfVar3) {
          fVar5 = fVar11;
        }
        fVar6 = pfVar3[1];
        if (fVar12 <= pfVar3[1]) {
          fVar6 = fVar12;
        }
        fVar7 = pfVar3[2] + *pfVar3;
        if (pfVar3[2] + *pfVar3 <= fVar8) {
          fVar7 = fVar8;
        }
        pfVar1 = pfVar3 + 3;
        pfVar2 = pfVar3 + 1;
        pfVar3 = pfVar3 + -4;
        fVar9 = *pfVar1 + *pfVar2;
        if (*pfVar1 + *pfVar2 <= fVar10) {
          fVar9 = fVar10;
        }
        fVar8 = fVar7;
        fVar10 = fVar9;
        fVar11 = fVar5;
        fVar12 = fVar6;
      } while (0 < iVar4);
    }
    *param_1 = fVar5;
    param_1[1] = fVar6;
    param_1[2] = fVar7 - fVar5;
    param_1[3] = fVar9 - fVar6;
    return;
  }
  if (iVar4 == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return;
  }
  pfVar3 = (float *)*in_ECX;
  *param_1 = *pfVar3;
  param_1[1] = pfVar3[1];
  param_1[2] = pfVar3[2];
  param_1[3] = pfVar3[3];
  return;
}

