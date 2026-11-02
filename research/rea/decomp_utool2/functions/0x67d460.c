// rea decompile_all
// name: FUN_0067d460
// address: 0x67d460
// body: available
// range: 0x67d460-0x67d758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0067d460(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Memory;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_30;
  int iStack_20;
  double local_18 [2];
  
  piVar8 = in_ECX + 1;
  *in_ECX = 0;
  FUN_0046e9e0(local_18);
  FUN_0046f710(piVar8);
  in_ECX[5] = param_1[2] * 2;
  iVar12 = param_1[2];
  in_ECX[4] = in_ECX[4] + 1;
  iVar2 = in_ECX[4];
  *(undefined1 *)(in_ECX + 7) = 1;
  iVar12 = iVar12 * 4 + 1;
  in_ECX[6] = iVar12;
  FID_conflict__free((void *)*in_ECX);
  iVar13 = 0;
  if (0 < iVar2) {
    iVar13 = iVar2;
  }
  puVar4 = (undefined4 *)FUN_004c554b((iVar13 + 2) * iVar12 * 4);
  *in_ECX = (int)puVar4;
  iVar12 = in_ECX[4];
  while (iVar12 = iVar12 + -1, -1 < iVar12) {
    *puVar4 = 0;
    puVar4 = puVar4 + in_ECX[6];
  }
  pfVar10 = (float *)*param_1;
  pfVar5 = pfVar10 + param_1[2] * 4;
  for (; pfVar10 != pfVar5; pfVar10 = pfVar10 + 4) {
    local_18[0] = (double)((pfVar10[2] + *pfVar10) * 256.0) + 6755399441055744.0;
    iStack_30 = SUB84((double)(pfVar10[1] * 256.0) + 6755399441055744.0,0);
    uVar7 = iStack_30 + in_ECX[2] * -0x100;
    iStack_30 = SUB84((double)((pfVar10[1] + pfVar10[3]) * 256.0) + 6755399441055744.0,0);
    uVar9 = iStack_30 + in_ECX[2] * -0x100;
    iStack_20 = SUB84((double)(*pfVar10 * 256.0) + 6755399441055744.0,0);
    if ((iStack_20 < local_18[0]._0_4_) && ((int)uVar7 < (int)uVar9)) {
      iVar12 = (int)uVar7 >> 8;
      if (iVar12 == (int)uVar9 >> 8) {
        uVar9 = uVar9 - uVar7;
      }
      else {
        FUN_0067ce10(iStack_20,local_18[0]._0_4_,iVar12,0xff - (uVar7 & 0xff));
        while (iVar12 = iVar12 + 1, iVar12 < (int)uVar9 >> 8) {
          iVar2 = *(int *)(*in_ECX + in_ECX[6] * iVar12 * 4);
          piVar8 = (int *)(*in_ECX + in_ECX[6] * iVar12 * 4);
          if (in_ECX[5] <= iVar2 + 1) {
            iVar13 = in_ECX[5] + 0x20;
            if (iVar13 != in_ECX[5]) {
              iVar1 = iVar13 * 2 + 1;
              in_ECX[5] = iVar13;
              iVar13 = 0;
              if (0 < in_ECX[4]) {
                iVar13 = in_ECX[4];
              }
              iVar6 = FUN_004c554b((iVar13 + 2) * iVar1 * 4);
              iVar13 = in_ECX[6];
              iVar3 = in_ECX[4];
              piVar8 = (int *)*in_ECX;
              iVar11 = iVar6;
              while (iVar3 = iVar3 + -1, -1 < iVar3) {
                FUN_004c2c30(iVar11,piVar8,*piVar8 * 8 + 4);
                piVar8 = piVar8 + iVar13;
                iVar11 = iVar11 + iVar1 * 4;
              }
              _Memory = (void *)*in_ECX;
              *in_ECX = iVar6;
              in_ECX[6] = iVar1;
              FID_conflict__free(_Memory);
            }
            piVar8 = (int *)(*in_ECX + in_ECX[6] * iVar12 * 4);
          }
          *piVar8 = iVar2 + 2;
          piVar8[iVar2 * 2 + 1] = iStack_20;
          piVar8[iVar2 * 2 + 2] = 0xff;
          piVar8[iVar2 * 2 + 3] = local_18[0]._0_4_;
          piVar8[iVar2 * 2 + 4] = -0xff;
        }
        uVar9 = uVar9 & 0xff;
      }
      FUN_0067ce10(iStack_20,local_18[0]._0_4_,iVar12,uVar9);
    }
  }
  FUN_0067cf20(1);
  return in_ECX;
}

