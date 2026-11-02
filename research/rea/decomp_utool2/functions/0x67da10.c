// rea decompile_all
// name: FUN_0067da10
// address: 0x67da10
// body: available
// range: 0x67da10-0x67de09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0067da10(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *_Memory;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *in_ECX;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  int iStack_c4;
  int iStack_bc;
  int iStack_ac;
  int iStack_a8;
  int iStack_78;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  void *pvStack_18;
  
  *in_ECX = 0;
  in_ECX[1] = *param_1;
  in_ECX[2] = param_1[1];
  in_ECX[3] = param_1[2];
  iVar2 = param_1[3];
  in_ECX[4] = iVar2;
  in_ECX[5] = 0x20;
  in_ECX[6] = 0x41;
  *(undefined1 *)(in_ECX + 7) = 1;
  FID_conflict__free((void *)*in_ECX);
  iVar6 = 0;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  puVar7 = (undefined4 *)FUN_004c554b((iVar6 + 2) * 0x104);
  *in_ECX = (int)puVar7;
  iVar2 = in_ECX[4];
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    *puVar7 = 0;
    puVar7 = puVar7 + in_ECX[6];
  }
  iVar2 = in_ECX[1];
  iVar6 = in_ECX[2];
  iVar8 = (in_ECX[3] + in_ECX[1]) * 0x100;
  iVar3 = in_ECX[4];
  FUN_00679e40(param_2,param_3);
  cVar5 = FUN_00679520();
  while (cVar5 != '\0') {
    iStack_78 = SUB84((double)(fStack_5c * 256.0) + 6755399441055744.0,0);
    iStack_a8 = SUB84((double)(fStack_54 * 256.0) + 6755399441055744.0,0);
    if (iStack_78 != iStack_a8) {
      uVar11 = iStack_78 + iVar6 * -0x100;
      uVar15 = iStack_a8 + iVar6 * -0x100;
      iStack_ac = -1;
      uVar12 = uVar11;
      if ((int)uVar15 < (int)uVar11) {
        iStack_ac = 1;
        uVar12 = uVar15;
        uVar15 = uVar11;
      }
      if ((int)uVar12 < 0) {
        uVar12 = 0;
      }
      if (iVar3 << 8 < (int)uVar15) {
        uVar15 = iVar3 << 8;
      }
      if ((int)uVar12 < (int)uVar15) {
        dVar18 = (double)((fStack_58 - fStack_60) / (fStack_54 - fStack_5c));
        iStack_bc = (int)(0x100 / (longlong)((int)ABS(dVar18) + 1));
        if (iStack_bc < 1) {
          iStack_bc = 1;
        }
        else if (0x100 < iStack_bc) {
          iStack_bc = 0x100;
        }
        do {
          iVar13 = 0x100 - (uVar12 & 0xff);
          iVar16 = iStack_bc;
          if ((int)(uVar15 - uVar12) < iStack_bc) {
            iVar16 = uVar15 - uVar12;
          }
          if (iVar13 < iVar16) {
            iVar16 = iVar13;
          }
          iStack_a8 = SUB84((double)(int)(((iVar16 >> 1) - uVar11) + uVar12) * dVar18 +
                            (double)(fStack_60 * 256.0) + 6755399441055744.0,0);
          iStack_c4 = iStack_a8;
          iVar13 = iVar2 << 8;
          if ((iVar2 << 8 <= iStack_a8) && (iVar13 = iStack_c4, iVar8 <= iStack_a8)) {
            iVar13 = iVar8 + -1;
          }
          iStack_c4 = iVar13;
          piVar10 = (int *)(*in_ECX + in_ECX[6] * ((int)uVar12 >> 8) * 4);
          iVar13 = *piVar10;
          if (in_ECX[5] <= iVar13) {
            iVar14 = in_ECX[5] + 0x20;
            if (iVar14 != in_ECX[5]) {
              iVar1 = iVar14 * 2 + 1;
              in_ECX[5] = iVar14;
              iVar14 = 0;
              if (0 < in_ECX[4]) {
                iVar14 = in_ECX[4];
              }
              iVar9 = FUN_004c554b((iVar14 + 2) * iVar1 * 4);
              piVar10 = (int *)*in_ECX;
              iVar14 = in_ECX[6];
              iVar4 = in_ECX[4];
              iVar17 = iVar9;
              while (iVar4 = iVar4 + -1, -1 < iVar4) {
                FUN_004c2c30(iVar17,piVar10,*piVar10 * 8 + 4);
                piVar10 = piVar10 + iVar14;
                iVar17 = iVar17 + iVar1 * 4;
              }
              _Memory = (void *)*in_ECX;
              *in_ECX = iVar9;
              in_ECX[6] = iVar1;
              FID_conflict__free(_Memory);
            }
            piVar10 = (int *)(*in_ECX + in_ECX[6] * ((int)uVar12 >> 8) * 4);
          }
          uVar12 = uVar12 + iVar16;
          *piVar10 = *piVar10 + 1;
          piVar10[iVar13 * 2 + 1] = iStack_c4;
          piVar10[iVar13 * 2 + 2] = iVar16 * iStack_ac;
        } while ((int)uVar12 < (int)uVar15);
      }
    }
    cVar5 = FUN_00679520();
  }
  FUN_0067cf20(*(undefined1 *)(param_2 + 0x1c));
  FID_conflict__free(pvStack_18);
  return in_ECX;
}

