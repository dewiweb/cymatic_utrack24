// rea decompile_all
// name: FUN_0049d590
// address: 0x49d590
// body: available
// range: 0x49d590-0x49d790 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049d590(float *param_1)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  int iVar3;
  undefined4 extraout_ECX;
  float10 fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_18;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (((((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 9)) || ((iVar1 == 0xb || (iVar1 == 5)))) ||
     ((iVar1 == 8 &&
      ((*(int *)(in_ECX + 0x130) == 2 ||
       ((*(int *)(in_ECX + 0x130) == 1 && (*(char *)(in_ECX + 0x138) != '\0')))))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (iVar1 == 7) {
    fVar5 = (*(float *)(in_ECX + 0xec) - param_1[1]) + (*param_1 - *(float *)(in_ECX + 0xe8));
  }
  else if (bVar2) {
    fVar5 = *param_1 - *(float *)(in_ECX + 0xe8);
  }
  else {
    fVar5 = param_1[1] - *(float *)(in_ECX + 0xec);
  }
  uStack_18 = (double)CONCAT44(fVar5,(undefined4)uStack_18);
  iVar3 = 200;
  if (200 < *(int *)(in_ECX + 0xf4)) {
    iVar3 = *(int *)(in_ECX + 0xf4);
  }
  dVar7 = (double)iVar3;
  FUN_00411660();
  dVar6 = (double)fVar5;
  if (0.0 <= dVar6) {
    if (dVar6 <= dVar7) {
      dVar7 = dVar6;
    }
    if (dVar7 != 0.0) {
      FUN_006f9250();
      if ((((iVar1 != 1) && (iVar1 != 3)) && (iVar1 != 10)) &&
         (((iVar1 != 0xc && (iVar1 != 6)) && (iVar1 == 8)))) {
        FUN_0049b230();
      }
      fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))
                                 (*(undefined8 *)(in_ECX + 0x90));
      dVar7 = (double)(fVar4 + (float10)uStack_18);
      dVar6 = 0.0;
      if ((0.0 <= dVar7) && (dVar6 = 1.0, dVar7 <= 1.0)) {
        dVar6 = dVar7;
      }
      fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 0xc4))(dVar6);
      *(double *)(in_ECX + 0x90) = (double)fVar4;
      FUN_0048f340(1,extraout_ECX);
    }
  }
  return;
}

