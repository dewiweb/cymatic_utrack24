// rea decompile_all
// name: FUN_00408010
// address: 0x408010
// body: available
// range: 0x408010-0x4082ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00408010(int param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  int iVar7;
  double *pdVar8;
  int in_ECX;
  int iVar9;
  double *pdVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  
  pdVar12 = (double *)*param_3;
  while (0 < param_2) {
    iVar9 = 0x100 - *(int *)(in_ECX + 0x1024);
    iVar7 = iVar9;
    if (param_2 < iVar9) {
      iVar7 = param_2;
    }
    iVar13 = 0xf5 - *(int *)(in_ECX + 0x1020);
    if ((iVar7 < iVar13) && (iVar13 = iVar9, param_2 < iVar9)) {
      iVar13 = param_2;
    }
    iVar11 = 0;
    iVar9 = in_ECX + (*(int *)(in_ECX + 0x1024) + 1) * 8;
    iVar7 = iVar9 + 0x800;
    if (3 < iVar13) {
      puVar6 = (undefined8 *)(param_1 + 8);
      puVar14 = (undefined8 *)(iVar9 + 0x810);
      do {
        puVar1 = puVar6 + 4;
        *(undefined8 *)(iVar9 + iVar11 * 8) = puVar6[-1];
        puVar14[-2] = puVar6[-1];
        *(undefined8 *)((iVar9 - param_1) + -0x20 + (int)puVar1) = *puVar6;
        *(undefined8 *)((iVar7 - param_1) + -0x20 + (int)puVar1) = *puVar6;
        *(undefined8 *)((iVar9 - iVar7) + -0x20 + (int)(puVar14 + 4)) = puVar6[1];
        *puVar14 = puVar6[1];
        *(undefined8 *)(iVar9 + 0x18 + iVar11 * 8) = puVar6[2];
        iVar11 = iVar11 + 4;
        puVar14[1] = puVar6[2];
        puVar6 = puVar1;
        puVar14 = puVar14 + 4;
      } while (iVar11 < iVar13 + -3);
    }
    if (iVar11 < iVar13) {
      iVar15 = iVar13 - iVar11;
      puVar6 = (undefined8 *)(param_1 + iVar11 * 8);
      do {
        puVar14 = puVar6 + 1;
        *(undefined8 *)((iVar9 - param_1) + -8 + (int)puVar14) = *puVar6;
        *(undefined8 *)((iVar7 - param_1) + -8 + (int)puVar14) = *puVar6;
        iVar15 = iVar15 + -1;
        puVar6 = puVar14;
      } while (iVar15 != 0);
    }
    *(int *)(in_ECX + 0x1020) = *(int *)(in_ECX + 0x1020) + iVar13;
    param_2 = param_2 - iVar13;
    param_1 = param_1 + iVar13 * 8;
    iVar7 = *(int *)(in_ECX + 0x1020);
    *(uint *)(in_ECX + 0x1024) = *(int *)(in_ECX + 0x1024) + iVar13 & 0xff;
    while (0xc < iVar7) {
      dVar16 = 0.0;
      dVar17 = *(double *)(in_ECX + 0x1038) * 673.0;
      iVar9 = 0x18;
      iVar7 = (int)dVar17;
      pdVar10 = (double *)(&DAT_00c8aba0 + iVar7 * 0x48);
      pdVar8 = (double *)(in_ECX + (*(int *)(in_ECX + 0x1028) + 1) * 8);
      dVar17 = dVar17 - (double)iVar7;
      do {
        pdVar2 = pdVar10 + -1;
        dVar4 = *pdVar10;
        pdVar3 = pdVar10 + -2;
        pdVar10 = pdVar10 + 3;
        dVar5 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        dVar16 = dVar16 + (*pdVar2 * dVar17 + *pdVar3 + dVar17 * dVar17 * dVar4) * dVar5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      *pdVar12 = dVar16;
      pdVar12 = pdVar12 + 1;
      *(int *)(in_ECX + 0x102c) = *(int *)(in_ECX + 0x102c) + 1;
      dVar16 = ((double)*(int *)(in_ECX + 0x102c) * *(double *)(in_ECX + 0x1008)) /
               *(double *)(in_ECX + 0x1010) + *(double *)(in_ECX + 0x1040);
      iVar9 = (int)dVar16;
      iVar13 = iVar9 - *(int *)(in_ECX + 0x1030);
      *(int *)(in_ECX + 0x1020) = *(int *)(in_ECX + 0x1020) - iVar13;
      *(int *)(in_ECX + 0x1030) = iVar9;
      iVar7 = *(int *)(in_ECX + 0x1020);
      *(uint *)(in_ECX + 0x1028) = *(int *)(in_ECX + 0x1028) + iVar13 & 0xff;
      *(double *)(in_ECX + 0x1038) = dVar16 - (double)iVar9;
    }
  }
  if (1000 < *(int *)(in_ECX + 0x102c)) {
    *(undefined4 *)(in_ECX + 0x102c) = 0;
    *(undefined4 *)(in_ECX + 0x1030) = 0;
    *(undefined8 *)(in_ECX + 0x1040) = *(undefined8 *)(in_ECX + 0x1038);
  }
  return (int)pdVar12 - *param_3 >> 3;
}

