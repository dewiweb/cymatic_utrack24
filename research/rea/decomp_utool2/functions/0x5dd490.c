// rea decompile_all
// name: FUN_005dd490
// address: 0x5dd490
// body: available
// range: 0x5dd490-0x5dd620 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dd490(int param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  int iVar10;
  int in_EDX;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  
  iVar12 = 0;
  iVar4 = *in_ECX;
  fVar2 = *(float *)(in_ECX[1] + 0x1f0);
  if (0 < iVar4) {
    do {
      iVar9 = in_ECX[5];
      iVar13 = *(int *)(iVar9 + iVar12 * 4);
      fVar3 = *(float *)(param_1 + iVar12 * 4);
      while ((fVar6 = fVar3, iVar7 = iVar12 + 1, iVar7 < iVar4 &&
             (*(int *)(iVar9 + 4 + iVar12 * 4) == iVar13))) {
        fVar3 = *(float *)(param_1 + iVar7 * 4);
        iVar12 = iVar7;
        if (fVar3 <= fVar6) {
          fVar3 = fVar6;
        }
      }
      pfVar11 = (float *)(param_2 + iVar12 * 4);
      if (*pfVar11 <= fVar6 + 6.0 && fVar6 + 6.0 != *pfVar11) {
        iVar7 = in_ECX[10];
        iVar13 = iVar13 >> ((byte)in_ECX[8] & 0x1f);
        if (0x10 < iVar13) {
          iVar13 = 0x10;
        }
        iVar5 = in_ECX[9];
        iVar10 = (int)(((fVar6 + (fVar2 - param_4)) - 30.0) * 0.1);
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        iVar8 = 0;
        if (-1 < iVar13) {
          iVar8 = iVar13;
        }
        if (7 < iVar10) {
          iVar10 = 7;
        }
        pfVar11 = *(float **)(*(int *)(in_EDX + iVar8 * 4) + iVar10 * 4);
        fVar3 = pfVar11[1];
        iVar13 = (int)*pfVar11;
        iVar9 = (int)(((float)(*(int *)(iVar9 + iVar12 * 4) - in_ECX[7]) +
                      (*pfVar11 - 16.0) * (float)iVar5) - (float)(iVar5 >> 1));
        if (iVar13 < (int)fVar3) {
          pfVar11 = pfVar11 + iVar13 + 2;
          do {
            if ((0 < iVar9) &&
               (fVar14 = fVar6 + *pfVar11, pfVar1 = (float *)(param_3 + iVar9 * 4),
               *pfVar1 <= fVar14 && fVar14 != *pfVar1)) {
              *(float *)(param_3 + iVar9 * 4) = fVar14;
            }
            iVar9 = iVar9 + iVar5;
            if (iVar7 <= iVar9) break;
            iVar13 = iVar13 + 1;
            pfVar11 = pfVar11 + 1;
          } while (iVar13 < (int)fVar3);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar4);
  }
  return;
}

