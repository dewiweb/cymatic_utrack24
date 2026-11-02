// rea decompile_all
// name: FUN_00405180
// address: 0x405180
// body: available
// range: 0x405180-0x405808 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405180(int param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  int in_ECX;
  int iVar3;
  double *pdVar4;
  int iVar5;
  int in_EDX;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double *local_40;
  double *local_20;
  double *local_14;
  
  iVar7 = 0;
  if (0 < in_EDX) {
    pdVar2 = (double *)(param_1 + in_EDX * 0x18);
    local_14 = (double *)(param_1 + in_EDX * 8);
    pdVar1 = (double *)(in_EDX * 0x10 + param_1);
    do {
      dVar12 = *(double *)(param_1 + iVar7 * 8);
      dVar10 = *(double *)(param_1 + 8 + iVar7 * 8);
      dVar23 = *local_14 + dVar12;
      dVar12 = dVar12 - *local_14;
      dVar17 = local_14[1] + dVar10;
      dVar10 = dVar10 - local_14[1];
      dVar13 = *pdVar1 + *pdVar2;
      dVar20 = *pdVar1 - *pdVar2;
      dVar11 = pdVar1[1] + pdVar2[1];
      dVar15 = pdVar1[1] - pdVar2[1];
      *(double *)(param_1 + iVar7 * 8) = dVar13 + dVar23;
      *(double *)(param_1 + 8 + iVar7 * 8) = dVar11 + dVar17;
      iVar7 = iVar7 + 2;
      *pdVar1 = dVar23 - dVar13;
      pdVar1[1] = dVar17 - dVar11;
      pdVar1 = pdVar1 + 2;
      *local_14 = dVar12 - dVar15;
      local_14[1] = dVar20 + dVar10;
      local_14 = local_14 + 2;
      *pdVar2 = dVar15 + dVar12;
      pdVar2[1] = dVar10 - dVar20;
      pdVar2 = pdVar2 + 2;
    } while (iVar7 < in_EDX);
  }
  dVar12 = param_2[2];
  iVar7 = in_EDX * 4;
  if (iVar7 < in_EDX * 5) {
    pdVar2 = (double *)(param_1 + in_EDX * 0x38);
    pdVar1 = (double *)(param_1 + in_EDX * 0x28);
    pdVar4 = (double *)(param_1 + in_EDX * 0x30);
    do {
      dVar10 = *(double *)(param_1 + iVar7 * 8);
      dVar21 = *pdVar1 + dVar10;
      dVar10 = dVar10 - *pdVar1;
      dVar11 = *(double *)(param_1 + 8 + iVar7 * 8);
      dVar20 = pdVar1[1] + dVar11;
      dVar11 = dVar11 - pdVar1[1];
      dVar17 = *pdVar4 + *pdVar2;
      dVar24 = *pdVar4 - *pdVar2;
      dVar15 = pdVar4[1] + pdVar2[1];
      dVar23 = pdVar4[1] - pdVar2[1];
      dVar13 = dVar24 + dVar11;
      dVar24 = dVar24 - dVar11;
      *(double *)(param_1 + iVar7 * 8) = dVar17 + dVar21;
      *(double *)(param_1 + 8 + iVar7 * 8) = dVar15 + dVar20;
      iVar7 = iVar7 + 2;
      *pdVar4 = dVar15 - dVar20;
      dVar11 = dVar10 - dVar23;
      pdVar4[1] = dVar21 - dVar17;
      pdVar4 = pdVar4 + 2;
      dVar23 = dVar23 + dVar10;
      *pdVar1 = (dVar11 - dVar13) * dVar12;
      pdVar1[1] = (dVar13 + dVar11) * dVar12;
      pdVar1 = pdVar1 + 2;
      *pdVar2 = (dVar24 - dVar23) * dVar12;
      pdVar2[1] = (dVar24 + dVar23) * dVar12;
      pdVar2 = pdVar2 + 2;
    } while (iVar7 < in_EDX * 5);
  }
  iVar7 = in_EDX * 8;
  if (iVar7 < in_ECX) {
    iVar5 = in_EDX * 0xc;
    local_40 = (double *)(param_1 + in_EDX * 0x48);
    local_14 = (double *)(param_1 + in_EDX * 0x68);
    pdVar2 = param_2 + 3;
    iVar9 = iVar7;
    do {
      dVar12 = pdVar2[1];
      dVar10 = param_2[3];
      dVar11 = pdVar2[2];
      dVar13 = param_2[2];
      iVar6 = in_EDX * -3 + iVar5;
      dVar17 = dVar12 - (dVar10 + dVar10) * dVar11;
      dVar15 = (dVar10 + dVar10) * dVar12 - dVar11;
      if (iVar9 < iVar6) {
        pdVar1 = (double *)(param_1 + (iVar9 + in_EDX * 3) * 8);
        local_20 = (double *)(param_1 + (iVar9 + in_EDX * 2) * 8);
        iVar3 = iVar9;
        pdVar4 = local_40;
        do {
          dVar20 = *(double *)(param_1 + 8 + iVar3 * 8);
          dVar16 = pdVar4[1] + dVar20;
          dVar20 = dVar20 - pdVar4[1];
          dVar23 = *(double *)(param_1 + iVar3 * 8);
          dVar18 = *pdVar4 + dVar23;
          dVar23 = dVar23 - *pdVar4;
          dVar24 = *local_20 + *pdVar1;
          dVar22 = *local_20 - *pdVar1;
          dVar21 = local_20[1] + pdVar1[1];
          dVar25 = local_20[1] - pdVar1[1];
          dVar19 = dVar18 - dVar24;
          dVar14 = dVar23 - dVar25;
          dVar25 = dVar25 + dVar23;
          *(double *)(param_1 + iVar3 * 8) = dVar24 + dVar18;
          dVar24 = dVar16 - dVar21;
          *(double *)(param_1 + 8 + iVar3 * 8) = dVar21 + dVar16;
          iVar3 = iVar3 + 2;
          dVar23 = dVar22 + dVar20;
          *local_20 = dVar13 * dVar19 - dVar10 * dVar24;
          dVar20 = dVar20 - dVar22;
          local_20[1] = dVar13 * dVar24 + dVar10 * dVar19;
          local_20 = local_20 + 2;
          *pdVar4 = dVar12 * dVar14 - dVar11 * dVar23;
          pdVar4[1] = dVar11 * dVar14 + dVar12 * dVar23;
          pdVar4 = pdVar4 + 2;
          *pdVar1 = dVar17 * dVar25 - dVar15 * dVar20;
          pdVar1[1] = dVar17 * dVar20 + dVar15 * dVar25;
          pdVar1 = pdVar1 + 2;
        } while (iVar3 < iVar6);
      }
      dVar12 = pdVar2[3];
      dVar11 = pdVar2[4];
      iVar6 = iVar6 + in_EDX * 4;
      dVar17 = dVar12 - (dVar13 + dVar13) * dVar11;
      dVar15 = (dVar13 + dVar13) * dVar12 - dVar11;
      if (iVar5 < iVar6) {
        pdVar1 = (double *)(param_1 + iVar5 * 8 + in_EDX * 0x18);
        pdVar4 = (double *)(param_1 + (iVar5 + in_EDX * 2) * 8);
        iVar3 = iVar5;
        pdVar8 = local_14;
        do {
          dVar20 = *(double *)(param_1 + 8 + iVar3 * 8);
          dVar16 = pdVar8[1] + dVar20;
          dVar20 = dVar20 - pdVar8[1];
          dVar23 = *(double *)(param_1 + iVar3 * 8);
          dVar18 = *pdVar8 + dVar23;
          dVar23 = dVar23 - *pdVar8;
          dVar24 = *pdVar4 + *pdVar1;
          dVar22 = *pdVar4 - *pdVar1;
          dVar21 = pdVar4[1] + pdVar1[1];
          dVar25 = pdVar4[1] - pdVar1[1];
          dVar19 = dVar18 - dVar24;
          dVar14 = dVar23 - dVar25;
          dVar25 = dVar25 + dVar23;
          *(double *)(param_1 + iVar3 * 8) = dVar24 + dVar18;
          dVar24 = dVar16 - dVar21;
          *(double *)(param_1 + 8 + iVar3 * 8) = dVar21 + dVar16;
          iVar3 = iVar3 + 2;
          *pdVar4 = -(dVar10 * dVar19) - dVar13 * dVar24;
          dVar23 = dVar22 + dVar20;
          dVar20 = dVar20 - dVar22;
          pdVar4[1] = dVar13 * dVar19 - dVar10 * dVar24;
          pdVar4 = pdVar4 + 2;
          *pdVar8 = dVar12 * dVar14 - dVar11 * dVar23;
          pdVar8[1] = dVar11 * dVar14 + dVar12 * dVar23;
          pdVar8 = pdVar8 + 2;
          *pdVar1 = dVar17 * dVar25 - dVar15 * dVar20;
          pdVar1[1] = dVar17 * dVar20 + dVar15 * dVar25;
          pdVar1 = pdVar1 + 2;
        } while (iVar3 < iVar6);
      }
      iVar9 = iVar9 + iVar7;
      iVar5 = iVar5 + iVar7;
      local_40 = local_40 + in_EDX * 8;
      local_14 = local_14 + in_EDX * 8;
      pdVar2 = pdVar2 + 4;
      param_2 = param_2 + 2;
    } while (iVar9 < in_ECX);
  }
  return;
}

