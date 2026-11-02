// rea decompile_all
// name: FUN_005d6810
// address: 0x5d6810
// body: available
// range: 0x5d6810-0x5d6b5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d6810(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int in_EDX;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  
  iVar8 = (int)*(double *)(in_EDX + 0x50);
  piVar3 = *(int **)(in_ECX + 0x1c);
  fVar12 = (float)*(double *)(in_EDX + 0x50) - (float)iVar8;
  if (param_1 == 0) {
    iVar8 = 0xf;
    piVar9 = piVar3 + 0x339;
    do {
      piVar9[-0xf] = *piVar3;
      *piVar9 = piVar3[1];
      iVar8 = iVar8 + -1;
      piVar9 = piVar9 + 1;
    } while (iVar8 != 0);
    return;
  }
  iVar8 = iVar8 * 0xf0;
  piVar9 = (int *)(iVar8 + param_1);
  iVar11 = piVar9[1];
  iVar6 = piVar9[2];
  iVar7 = piVar9[3];
  piVar3[0x30c] = *piVar9;
  piVar3[0x30d] = iVar11;
  piVar3[0x30e] = iVar6;
  piVar3[0x30f] = iVar7;
  piVar9 = (int *)(iVar8 + 0x10 + param_1);
  iVar11 = piVar9[1];
  iVar6 = piVar9[2];
  iVar7 = piVar9[3];
  piVar3[0x310] = *piVar9;
  piVar3[0x311] = iVar11;
  piVar3[0x312] = iVar6;
  piVar3[0x313] = iVar7;
  piVar9 = (int *)(iVar8 + 0x20 + param_1);
  iVar11 = piVar9[1];
  iVar6 = piVar9[2];
  iVar7 = piVar9[3];
  piVar3[0x314] = *piVar9;
  piVar3[0x315] = iVar11;
  piVar3[0x316] = iVar6;
  piVar3[0x317] = iVar7;
  *(undefined8 *)(piVar3 + 0x318) = *(undefined8 *)(iVar8 + 0x30 + param_1);
  piVar3[0x31a] = *(int *)(iVar8 + 0x38 + param_1);
  piVar9 = (int *)(iVar8 + 0x3c + param_1);
  iVar11 = piVar9[1];
  iVar6 = piVar9[2];
  iVar7 = piVar9[3];
  piVar3[0x31b] = *piVar9;
  piVar3[0x31c] = iVar11;
  piVar3[0x31d] = iVar6;
  piVar3[0x31e] = iVar7;
  piVar9 = (int *)(iVar8 + 0x4c + param_1);
  iVar11 = piVar9[1];
  iVar6 = piVar9[2];
  iVar7 = piVar9[3];
  piVar3[799] = *piVar9;
  piVar3[800] = iVar11;
  piVar3[0x321] = iVar6;
  piVar3[0x322] = iVar7;
  piVar9 = (int *)(iVar8 + 0x5c + param_1);
  iVar11 = piVar9[1];
  iVar6 = piVar9[2];
  iVar7 = piVar9[3];
  piVar3[0x323] = *piVar9;
  piVar3[0x324] = iVar11;
  piVar3[0x325] = iVar6;
  piVar3[0x326] = iVar7;
  *(undefined8 *)(piVar3 + 0x327) = *(undefined8 *)(iVar8 + 0x6c + param_1);
  piVar3[0x329] = *(int *)(iVar8 + 0x74 + param_1);
  piVar9 = piVar3 + 0x2fd;
  if (*(int *)(in_EDX + 0x1c) != 0) {
    pfVar10 = (float *)(param_1 + 0x168 + iVar8);
    iVar8 = 0xf;
    do {
      fVar4 = pfVar10[-0x3c] * (1.0 - fVar12) + *pfVar10 * fVar12;
      fVar5 = fVar4 * 1000.0;
      piVar9[-0xf] = (int)((fVar5 / (float)*(int *)(in_ECX + 8)) * (float)*piVar3);
      *piVar9 = (int)((fVar5 / (float)*(int *)(in_ECX + 8)) * (float)piVar3[1]);
      piVar9[-0x1e] = (int)fVar4;
      pfVar2 = pfVar10 + -0x2d;
      pfVar1 = pfVar10 + 0xf;
      pfVar10 = pfVar10 + 1;
      fVar4 = (*pfVar2 * (1.0 - fVar12) + *pfVar1 * fVar12) * 1000.0;
      piVar9[0x2d] = (int)((fVar4 / (float)*(int *)(in_ECX + 8)) * (float)*piVar3);
      piVar9[0x3c] = (int)((fVar4 / (float)*(int *)(in_ECX + 8)) * (float)piVar3[1]);
      piVar9 = piVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return;
  }
  iVar11 = 0xf;
  fVar4 = *(float *)(iVar8 + 0x94 + param_1) * (1.0 - fVar12) +
          *(float *)(iVar8 + 0x184 + param_1) * fVar12;
  fVar5 = fVar4 * 1000.0;
  do {
    piVar9[-0xf] = (int)((fVar5 / (float)*(int *)(in_ECX + 8)) * (float)*piVar3);
    *piVar9 = (int)((fVar5 / (float)*(int *)(in_ECX + 8)) * (float)piVar3[1]);
    piVar9[-0x1e] = (int)fVar4;
    iVar11 = iVar11 + -1;
    piVar9 = piVar9 + 1;
  } while (iVar11 != 0);
  iVar11 = 0xf;
  fVar12 = (*(float *)(iVar8 + 0xd0 + param_1) * (1.0 - fVar12) +
           *(float *)(iVar8 + 0x1c0 + param_1) * fVar12) * 1000.0;
  piVar9 = piVar3 + 0x339;
  do {
    piVar9[-0xf] = (int)((fVar12 / (float)*(int *)(in_ECX + 8)) * (float)*piVar3);
    *piVar9 = (int)((fVar12 / (float)*(int *)(in_ECX + 8)) * (float)piVar3[1]);
    iVar11 = iVar11 + -1;
    piVar9 = piVar9 + 1;
  } while (iVar11 != 0);
  return;
}

