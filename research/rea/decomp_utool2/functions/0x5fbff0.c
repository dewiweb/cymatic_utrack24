// rea decompile_all
// name: FUN_005fbff0
// address: 0x5fbff0
// body: available
// range: 0x5fbff0-0x5fc1a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fbff0(float *param_1,uint param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *in_ECX;
  float *in_EDX;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = 0;
  if (param_2 != 0) {
    if (((7 < param_2) && ((in_EDX + (param_2 - 1) < param_1 || (param_1 + (param_2 - 1) < in_EDX)))
        ) && ((in_ECX + (param_2 - 1) < param_1 || (param_1 + (param_2 - 1) < in_ECX)))) {
      pfVar9 = in_EDX + 4;
      pfVar10 = param_1;
      do {
        uVar12 = uVar12 + 8;
        pfVar1 = pfVar9 + 8;
        piVar2 = (int *)((int)in_ECX + (-0x20 - (int)param_1) + (int)(pfVar10 + 8));
        iVar11 = piVar2[1];
        iVar4 = piVar2[2];
        iVar5 = piVar2[3];
        fVar6 = pfVar9[-3];
        fVar7 = pfVar9[-2];
        fVar8 = pfVar9[-1];
        *pfVar10 = (float)*piVar2 * pfVar9[-4];
        pfVar10[1] = (float)iVar11 * fVar6;
        pfVar10[2] = (float)iVar4 * fVar7;
        pfVar10[3] = (float)iVar5 * fVar8;
        piVar2 = (int *)((int)in_ECX + (-0x20 - (int)in_EDX) + (int)pfVar1);
        iVar11 = piVar2[1];
        iVar4 = piVar2[2];
        iVar5 = piVar2[3];
        fVar6 = pfVar9[1];
        fVar7 = pfVar9[2];
        fVar8 = pfVar9[3];
        pfVar3 = (float *)((int)param_1 + (-0x20 - (int)in_EDX) + (int)pfVar1);
        *pfVar3 = (float)*piVar2 * *pfVar9;
        pfVar3[1] = (float)iVar11 * fVar6;
        pfVar3[2] = (float)iVar4 * fVar7;
        pfVar3[3] = (float)iVar5 * fVar8;
        pfVar9 = pfVar1;
        pfVar10 = pfVar10 + 8;
      } while (uVar12 < (param_2 & 0xfffffff8));
    }
    if (uVar12 < param_2) {
      if (3 < param_2 - uVar12) {
        pfVar9 = in_EDX + uVar12 + 1;
        pfVar10 = param_1 + uVar12 + 2;
        do {
          pfVar10[-2] = (float)(int)in_ECX[uVar12] * pfVar9[-1];
          *(float *)((int)pfVar9 + ((int)param_1 - (int)in_EDX)) =
               (float)*(int *)((int)pfVar9 + ((int)in_ECX - (int)in_EDX)) * *pfVar9;
          *pfVar10 = (float)*(int *)((int)pfVar10 + ((int)in_ECX - (int)param_1)) * pfVar9[1];
          iVar11 = uVar12 + 3;
          uVar12 = uVar12 + 4;
          pfVar10[1] = (float)(int)in_ECX[iVar11] * pfVar9[2];
          pfVar9 = pfVar9 + 4;
          pfVar10 = pfVar10 + 4;
        } while (uVar12 < param_2 - 3);
      }
      if (uVar12 < param_2) {
        iVar11 = param_2 - uVar12;
        pfVar9 = in_EDX + uVar12;
        do {
          *(float *)((int)param_1 + (-4 - (int)in_EDX) + (int)(pfVar9 + 1)) =
               (float)*(int *)(((int)in_ECX - (int)in_EDX) + (int)pfVar9) * *pfVar9;
          iVar11 = iVar11 + -1;
          pfVar9 = pfVar9 + 1;
        } while (iVar11 != 0);
      }
    }
  }
  return;
}

