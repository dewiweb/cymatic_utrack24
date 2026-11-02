// rea decompile_all
// name: FUN_00404cb0
// address: 0x404cb0
// body: available
// range: 0x404cb0-0x40517b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404cb0(int param_1)

{
  int iVar1;
  int in_ECX;
  double *in_EDX;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar6 = *in_EDX - in_EDX[2];
  dVar17 = *in_EDX + in_EDX[2];
  dVar4 = in_EDX[1] - in_EDX[3];
  dVar14 = in_EDX[1] + in_EDX[3];
  dVar7 = in_EDX[4] + in_EDX[6];
  dVar11 = in_EDX[4] - in_EDX[6];
  dVar5 = in_EDX[5] + in_EDX[7];
  dVar8 = in_EDX[5] - in_EDX[7];
  *in_EDX = dVar7 + dVar17;
  in_EDX[4] = dVar17 - dVar7;
  in_EDX[1] = dVar5 + dVar14;
  in_EDX[5] = dVar14 - dVar5;
  dVar14 = in_EDX[8] - in_EDX[10];
  dVar15 = in_EDX[8] + in_EDX[10];
  in_EDX[2] = dVar6 - dVar8;
  in_EDX[6] = dVar8 + dVar6;
  dVar6 = in_EDX[9] - in_EDX[0xb];
  dVar17 = in_EDX[9] + in_EDX[0xb];
  in_EDX[3] = dVar11 + dVar4;
  dVar8 = in_EDX[0xc] + in_EDX[0xe];
  dVar18 = in_EDX[0xc] - in_EDX[0xe];
  in_EDX[7] = dVar4 - dVar11;
  dVar4 = *(double *)(param_1 + 0x10);
  dVar7 = in_EDX[0xd] + in_EDX[0xf];
  dVar11 = in_EDX[0xd] - in_EDX[0xf];
  dVar5 = dVar18 + dVar6;
  in_EDX[8] = dVar8 + dVar15;
  in_EDX[0xd] = dVar15 - dVar8;
  in_EDX[0xc] = dVar7 - dVar17;
  dVar8 = dVar14 - dVar11;
  in_EDX[9] = dVar7 + dVar17;
  in_EDX[10] = (dVar8 - dVar5) * dVar4;
  dVar18 = dVar18 - dVar6;
  dVar11 = dVar11 + dVar14;
  in_EDX[0xb] = (dVar5 + dVar8) * dVar4;
  in_EDX[0xf] = (dVar18 + dVar11) * dVar4;
  in_EDX[0xe] = (dVar18 - dVar11) * dVar4;
  if (0x10 < in_ECX) {
    pdVar2 = in_EDX + 0x14;
    iVar1 = (in_ECX - 0x11U >> 4) + 1;
    pdVar3 = (double *)(param_1 + 0x10);
    do {
      dVar4 = *(double *)(param_1 + 0x10);
      dVar5 = pdVar3[2];
      dVar6 = *(double *)(param_1 + 0x18);
      dVar7 = pdVar3[3];
      dVar9 = (dVar6 + dVar6) * dVar5 - dVar7;
      dVar8 = pdVar2[-4] - pdVar2[-2];
      dVar17 = dVar5 - (dVar6 + dVar6) * dVar7;
      dVar12 = pdVar2[-4] + pdVar2[-2];
      dVar10 = pdVar2[-1] + pdVar2[-3];
      dVar11 = pdVar2[-3] - pdVar2[-1];
      dVar14 = pdVar2[3] + pdVar2[1];
      dVar19 = pdVar2[1] - pdVar2[3];
      dVar15 = pdVar2[2] + *pdVar2;
      dVar16 = *pdVar2 - pdVar2[2];
      dVar13 = dVar12 - dVar15;
      dVar18 = dVar8 - dVar19;
      dVar19 = dVar19 + dVar8;
      pdVar2[-4] = dVar15 + dVar12;
      dVar15 = dVar10 - dVar14;
      pdVar2[-3] = dVar14 + dVar10;
      dVar8 = dVar16 + dVar11;
      *pdVar2 = dVar4 * dVar13 - dVar6 * dVar15;
      dVar11 = dVar11 - dVar16;
      pdVar2[1] = dVar4 * dVar15 + dVar6 * dVar13;
      pdVar2[-2] = dVar5 * dVar18 - dVar7 * dVar8;
      pdVar2[-1] = dVar7 * dVar18 + dVar5 * dVar8;
      pdVar2[2] = dVar17 * dVar19 - dVar9 * dVar11;
      pdVar2[3] = dVar17 * dVar11 + dVar9 * dVar19;
      dVar5 = pdVar3[4];
      dVar7 = pdVar3[5];
      dVar17 = dVar5 - (dVar4 + dVar4) * dVar7;
      dVar10 = pdVar2[6] + pdVar2[4];
      dVar8 = pdVar2[4] - pdVar2[6];
      dVar18 = (dVar4 + dVar4) * dVar5 - dVar7;
      dVar14 = pdVar2[0xb] + pdVar2[9];
      dVar9 = pdVar2[7] + pdVar2[5];
      dVar11 = pdVar2[5] - pdVar2[7];
      dVar16 = pdVar2[9] - pdVar2[0xb];
      dVar15 = pdVar2[10] + pdVar2[8];
      dVar13 = pdVar2[8] - pdVar2[10];
      dVar12 = dVar10 - dVar15;
      pdVar2[4] = dVar15 + dVar10;
      dVar10 = dVar9 - dVar14;
      pdVar2[5] = dVar14 + dVar9;
      dVar14 = dVar13 + dVar11;
      dVar11 = dVar11 - dVar13;
      pdVar2[9] = dVar4 * dVar12 - dVar6 * dVar10;
      dVar15 = dVar8 - dVar16;
      pdVar2[8] = -(dVar6 * dVar12) - dVar4 * dVar10;
      dVar16 = dVar16 + dVar8;
      pdVar2[6] = dVar5 * dVar15 - dVar7 * dVar14;
      pdVar2[7] = dVar7 * dVar15 + dVar5 * dVar14;
      pdVar2[10] = dVar17 * dVar16 - dVar18 * dVar11;
      pdVar2[0xb] = dVar17 * dVar11 + dVar18 * dVar16;
      pdVar2 = pdVar2 + 0x10;
      iVar1 = iVar1 + -1;
      pdVar3 = pdVar3 + 4;
      param_1 = param_1 + 0x10;
    } while (iVar1 != 0);
  }
  return;
}

