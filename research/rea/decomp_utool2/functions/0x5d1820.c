// rea decompile_all
// name: FUN_005d1820
// address: 0x5d1820
// body: available
// range: 0x5d1820-0x5d1a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d1820(int param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *in_ECX;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int in_EDX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar6 = 0;
  if (param_3 != 0) {
    iVar6 = param_2;
  }
  iVar11 = 0;
  if (param_3 != 0) {
    iVar11 = param_4;
  }
  puVar1 = (&PTR_DAT_00b89180)[*(int *)(in_EDX + iVar6 * 4)];
  puVar2 = (&PTR_DAT_00b89180)[*(int *)(in_EDX + iVar11 * 4)];
  iVar5 = *(int *)(param_1 + param_3 * 4);
  iVar11 = *(int *)(param_1 + iVar11 * 4);
  iVar6 = *(int *)(param_1 + iVar6 * 4);
  iVar12 = (int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2;
  iVar9 = iVar12 - ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2);
  iVar3 = iVar6 / 2 + iVar9;
  iVar12 = (iVar5 / 2 - ((int)((iVar11 >> 0x1f & 3U) + iVar11) >> 2)) + iVar12;
  iVar6 = iVar11 / 2 + iVar12;
  iVar7 = iVar9;
  iVar10 = 0;
  puVar14 = in_ECX;
  if (0 < iVar9) {
    for (; iVar10 = iVar9, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  iVar7 = 0;
  if (iVar10 < iVar3) {
    if (3 < iVar3 - iVar10) {
      iVar9 = iVar10 + 2;
      iVar13 = ((iVar3 - iVar10) - 4U >> 2) + 1;
      iVar7 = iVar13 * 4;
      iVar10 = iVar10 + iVar7;
      pfVar4 = (float *)(in_ECX + iVar9);
      pfVar8 = (float *)(puVar1 + 8);
      do {
        pfVar4[-2] = pfVar8[-2] * pfVar4[-2];
        pfVar4[-1] = pfVar8[-1] * pfVar4[-1];
        *pfVar4 = *pfVar8 * *pfVar4;
        pfVar4[1] = pfVar8[1] * pfVar4[1];
        iVar13 = iVar13 + -1;
        pfVar4 = pfVar4 + 4;
        pfVar8 = pfVar8 + 4;
      } while (iVar13 != 0);
    }
    if (iVar10 < iVar3) {
      pfVar4 = (float *)(puVar1 + iVar7 * 4);
      do {
        in_ECX[iVar10] = (float)in_ECX[iVar10] * *pfVar4;
        iVar10 = iVar10 + 1;
        pfVar4 = pfVar4 + 1;
      } while (iVar10 < iVar3);
    }
  }
  iVar11 = iVar11 / 2 + -1;
  if (iVar12 < iVar6) {
    if (3 < iVar6 - iVar12) {
      iVar7 = iVar12 + 2;
      iVar3 = ((iVar6 - iVar12) - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      iVar12 = iVar12 + iVar3 * 4;
      iVar11 = iVar11 + iVar3 * -4;
      pfVar4 = (float *)(in_ECX + iVar7);
      pfVar8 = (float *)(puVar2 + iVar10 + -8);
      do {
        pfVar4[-2] = pfVar8[2] * pfVar4[-2];
        pfVar4[-1] = pfVar8[1] * pfVar4[-1];
        *pfVar4 = *pfVar4 * *pfVar8;
        pfVar4[1] = pfVar8[-1] * pfVar4[1];
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
        pfVar8 = pfVar8 + -4;
      } while (iVar3 != 0);
    }
    if (iVar12 < iVar6) {
      pfVar4 = (float *)(puVar2 + iVar11 * 4);
      do {
        in_ECX[iVar12] = (float)in_ECX[iVar12] * *pfVar4;
        iVar12 = iVar12 + 1;
        pfVar4 = pfVar4 + -1;
      } while (iVar12 < iVar6);
    }
  }
  if (iVar12 < iVar5) {
    puVar14 = in_ECX + iVar12;
    for (iVar5 = iVar5 - iVar12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  return;
}

