// rea decompile_all
// name: FUN_0049d340
// address: 0x49d340
// body: available
// range: 0x49d340-0x49d58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049d340(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  int in_ECX;
  float *pfVar6;
  float *extraout_EDX;
  float10 fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar4 = *(int *)(in_ECX + 0x18);
  pfVar6 = param_1;
  if ((((iVar4 != 0) && (iVar4 != 2)) && (iVar4 != 9)) && ((iVar4 != 0xb && (iVar4 != 5)))) {
    pfVar6 = param_1 + 1;
  }
  dVar11 = 1.0;
  if (iVar4 == 5) {
LAB_0049d4a5:
    fVar8 = *param_1 - *(float *)(in_ECX + 0xe0);
  }
  else {
    if (((iVar4 != 6) && (iVar4 != 8)) &&
       (((iVar4 != 0 && (((iVar4 != 1 && (iVar4 != 2)) && (iVar4 != 3)))) ||
        (*(char *)(in_ECX + 0x13f) != '\0')))) {
      if (iVar4 == 7) {
        fVar8 = *param_1;
        fVar1 = *(float *)(in_ECX + 0xe4);
        fVar2 = *(float *)(in_ECX + 0xe0);
        fVar3 = param_1[1];
        fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))
                                   (*(undefined8 *)(in_ECX + 0x98));
        dVar11 = 1.0;
        dVar10 = (1.0 / (double)*(int *)(in_ECX + 0xfc)) *
                 (double)((fVar1 - fVar3) + (fVar8 - fVar2)) + (double)fVar7;
      }
      else {
        dVar10 = (double)(*pfVar6 - (float)*(int *)(in_ECX + 0xf0)) /
                 (double)*(int *)(in_ECX + 0xf4);
        cVar5 = FUN_0049b1f0();
        if (cVar5 != '\0') {
          dVar10 = dVar11 - dVar10;
        }
      }
      goto LAB_0049d559;
    }
    if (((iVar4 == 5) || (iVar4 == 0)) ||
       ((iVar4 == 2 ||
        ((iVar4 == 8 && (cVar5 = FUN_0049b230(), param_1 = extraout_EDX, cVar5 != '\0'))))))
    goto LAB_0049d4a5;
    fVar8 = *(float *)(in_ECX + 0xe4) - param_1[1];
  }
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))(*(undefined8 *)(in_ECX + 0x98));
  dVar10 = (1.0 / (double)*(int *)(in_ECX + 0xfc)) * (double)fVar8 + (double)fVar7;
  if (*(int *)(in_ECX + 0x18) == 8) {
    FUN_006c8640();
    FUN_006c8640();
  }
  dVar11 = 1.0;
LAB_0049d559:
  dVar9 = 0.0;
  if ((0.0 <= dVar10) && (dVar9 = dVar11, dVar10 <= dVar11)) {
    dVar9 = dVar10;
  }
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 0xc4))(dVar9);
  *(double *)(in_ECX + 0x90) = (double)fVar7;
  return;
}

