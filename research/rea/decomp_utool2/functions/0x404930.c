// rea decompile_all
// name: FUN_00404930
// address: 0x404930
// body: available
// range: 0x404930-0x404aca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404930(undefined4 param_1)

{
  double *pdVar1;
  int in_ECX;
  int iVar2;
  double *pdVar3;
  int in_EDX;
  int iVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar4 = 2;
  if (8 < in_ECX) {
    FUN_00404cb0(param_1);
    iVar4 = 8;
    if (0x20 < in_ECX) {
      iVar2 = 0x20;
      do {
        iVar4 = iVar2;
        FUN_00405180();
        iVar2 = iVar4 * 4;
      } while (iVar4 * 4 < in_ECX);
    }
  }
  if (iVar4 * 4 - in_ECX == 0) {
    iVar2 = 0;
    if (0 < iVar4) {
      pdVar3 = (double *)(in_EDX + iVar4 * 0x18);
      pdVar5 = (double *)(in_EDX + iVar4 * 8);
      pdVar1 = (double *)(iVar4 * 0x10 + in_EDX);
      do {
        dVar8 = *(double *)(in_EDX + iVar2 * 8);
        dVar13 = *pdVar5 + dVar8;
        dVar8 = dVar8 - *pdVar5;
        dVar6 = *(double *)(in_EDX + 8 + iVar2 * 8);
        dVar11 = pdVar5[1] + dVar6;
        dVar6 = dVar6 - pdVar5[1];
        dVar9 = *pdVar1 + *pdVar3;
        dVar12 = *pdVar1 - *pdVar3;
        dVar7 = pdVar1[1] + pdVar3[1];
        dVar10 = pdVar1[1] - pdVar3[1];
        *(double *)(in_EDX + iVar2 * 8) = dVar9 + dVar13;
        *(double *)(in_EDX + 8 + iVar2 * 8) = dVar7 + dVar11;
        iVar2 = iVar2 + 2;
        *pdVar1 = dVar13 - dVar9;
        pdVar1[1] = dVar11 - dVar7;
        pdVar1 = pdVar1 + 2;
        *pdVar5 = dVar8 - dVar10;
        pdVar5[1] = dVar12 + dVar6;
        pdVar5 = pdVar5 + 2;
        *pdVar3 = dVar10 + dVar8;
        pdVar3[1] = dVar6 - dVar12;
        pdVar3 = pdVar3 + 2;
      } while (iVar2 < iVar4);
      return;
    }
  }
  else {
    iVar2 = 0;
    if (0 < iVar4) {
      pdVar3 = (double *)(in_EDX + iVar4 * 8);
      do {
        dVar8 = *(double *)(in_EDX + iVar2 * 8);
        dVar6 = *(double *)(in_EDX + 8 + iVar2 * 8);
        dVar7 = *pdVar3;
        dVar9 = pdVar3[1];
        *(double *)(in_EDX + iVar2 * 8) = dVar8 + *pdVar3;
        *(double *)(in_EDX + 8 + iVar2 * 8) = pdVar3[1] + *(double *)(in_EDX + 8 + iVar2 * 8);
        iVar2 = iVar2 + 2;
        *pdVar3 = dVar8 - dVar7;
        pdVar3[1] = dVar6 - dVar9;
        pdVar3 = pdVar3 + 2;
      } while (iVar2 < iVar4);
    }
  }
  return;
}

