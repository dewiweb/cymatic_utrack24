// rea decompile_all
// name: FUN_0067d760
// address: 0x67d760
// body: available
// range: 0x67d760-0x67d946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0067d760(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *_Memory;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int *in_ECX;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  *in_ECX = 0;
  FUN_0046ef00(in_ECX + 1);
  iVar2 = in_ECX[4];
  in_ECX[5] = 0x20;
  in_ECX[6] = 0x41;
  *(undefined1 *)(in_ECX + 7) = 1;
  FID_conflict__free((void *)*in_ECX);
  iVar7 = 0;
  if (0 < iVar2) {
    iVar7 = iVar2;
  }
  puVar8 = (undefined4 *)FUN_004c554b((iVar7 + 2) * 0x104);
  *in_ECX = (int)puVar8;
  iVar2 = in_ECX[4];
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    *puVar8 = 0;
    puVar8 = puVar8 + in_ECX[6];
  }
  piVar12 = (int *)*param_1;
  piVar9 = piVar12 + param_1[2] * 4;
  for (; piVar12 != piVar9; piVar12 = piVar12 + 4) {
    iVar2 = *piVar12;
    iVar7 = piVar12[3];
    iVar3 = piVar12[2];
    iVar4 = *piVar12;
    iVar13 = piVar12[1] - in_ECX[2];
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      iVar5 = *(int *)(*in_ECX + in_ECX[6] * iVar13 * 4);
      piVar11 = (int *)(*in_ECX + in_ECX[6] * iVar13 * 4);
      if (in_ECX[5] <= iVar5 + 1) {
        iVar14 = in_ECX[5] + 0x20;
        if (iVar14 != in_ECX[5]) {
          iVar1 = iVar14 * 2 + 1;
          in_ECX[5] = iVar14;
          iVar14 = 0;
          if (0 < in_ECX[4]) {
            iVar14 = in_ECX[4];
          }
          iVar10 = FUN_004c554b((iVar14 + 2) * iVar1 * 4);
          iVar14 = in_ECX[6];
          iVar6 = in_ECX[4];
          piVar11 = (int *)*in_ECX;
          iVar15 = iVar10;
          while (iVar6 = iVar6 + -1, -1 < iVar6) {
            FUN_004c2c30(iVar15,piVar11,*piVar11 * 8 + 4);
            piVar11 = piVar11 + iVar14;
            iVar15 = iVar15 + iVar1 * 4;
          }
          _Memory = (void *)*in_ECX;
          *in_ECX = iVar10;
          in_ECX[6] = iVar1;
          FID_conflict__free(_Memory);
        }
        piVar11 = (int *)(*in_ECX + in_ECX[6] * iVar13 * 4);
      }
      iVar13 = iVar13 + 1;
      *piVar11 = iVar5 + 2;
      piVar11[iVar5 * 2 + 1] = iVar2 << 8;
      piVar11[iVar5 * 2 + 2] = 0xff;
      piVar11[iVar5 * 2 + 3] = (iVar3 + iVar4) * 0x100;
      piVar11[iVar5 * 2 + 4] = -0xff;
    }
  }
  FUN_0067cf20(1);
  return in_ECX;
}

