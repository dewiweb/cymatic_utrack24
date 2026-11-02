// rea decompile_all
// name: FUN_005e4970
// address: 0x5e4970
// body: available
// range: 0x5e4970-0x5e4c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e4970(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int in_EDX;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar11 = 0.0;
  iVar5 = *in_ECX;
  dVar13 = 0.0;
  dVar12 = 0.0;
  dVar14 = 0.0;
  dVar10 = 0.0;
  iVar4 = in_ECX[in_EDX * 0xe + -0xd];
  if (0 < in_EDX) {
    piVar7 = in_ECX + 8;
    do {
      iVar6 = piVar7[-1];
      piVar1 = piVar7 + 5;
      dVar9 = (double)(((float)(*piVar1 + iVar6) * *(float *)(param_3 + 0x454)) / (float)(iVar6 + 1)
                      ) + 1.0;
      dVar11 = dVar11 + (double)piVar7[-6] * dVar9 + (double)*piVar7;
      dVar13 = dVar13 + (double)piVar7[-5] * dVar9 + (double)piVar7[1];
      piVar2 = piVar7 + 4;
      dVar12 = dVar12 + (double)piVar7[-4] * dVar9 + (double)piVar7[2];
      piVar3 = piVar7 + -2;
      piVar7 = piVar7 + 0xe;
      dVar14 = dVar14 + (double)*piVar3 * dVar9 + (double)*piVar2;
      dVar10 = dVar10 + (double)iVar6 * dVar9 + (double)*piVar1;
      in_EDX = in_EDX + -1;
    } while (in_EDX != 0);
  }
  iVar6 = *param_1;
  if (-1 < iVar6) {
    dVar10 = dVar10 + 1.0;
    dVar11 = dVar11 + (double)iVar5;
    dVar13 = dVar13 + (double)iVar6;
    dVar12 = dVar12 + (double)(iVar5 * iVar5);
    dVar14 = dVar14 + (double)(iVar6 * iVar5);
  }
  iVar6 = *param_2;
  if (-1 < iVar6) {
    dVar10 = dVar10 + 1.0;
    dVar11 = dVar11 + (double)iVar4;
    dVar13 = dVar13 + (double)iVar6;
    dVar12 = dVar12 + (double)(iVar4 * iVar4);
    dVar14 = dVar14 + (double)(iVar6 * iVar4);
  }
  dVar9 = dVar10 * dVar12 - dVar11 * dVar11;
  if (dVar9 <= 0.0) {
    *param_2 = 0;
    *param_1 = 0;
    return 1;
  }
  dVar10 = (dVar10 * dVar14 - dVar13 * dVar11) / dVar9;
  dVar9 = (dVar12 * dVar13 - dVar14 * dVar11) / dVar9;
  fVar8 = (float10)FUN_006f9790((double)iVar5 * dVar10 + dVar9 + 0.5);
  iVar6 = (int)fVar8;
  FUN_006f9790((double)iVar4 * dVar10 + dVar9 + 0.5);
  iVar5 = FUN_004e5970();
  *param_2 = iVar5;
  if (0x3ff < iVar6) {
    iVar6 = 0x3ff;
  }
  *param_1 = iVar6;
  if (0x3ff < iVar5) {
    *param_2 = 0x3ff;
  }
  if (iVar6 < 0) {
    *param_1 = 0;
  }
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  return 0;
}

