// rea decompile_all
// name: FUN_00482a00
// address: 0x482a00
// body: available
// range: 0x482a00-0x482a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482a00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 8);
  for (piVar7 = *(int **)(in_ECX + 8); piVar7 != (int *)(iVar1 * 0x10 + iVar2); piVar7 = piVar7 + 4)
  {
    iVar3 = *piVar7;
    iVar11 = piVar7[1];
    iVar4 = piVar7[2];
    iVar8 = piVar7[3] + iVar11;
    for (; iVar11 < iVar8; iVar11 = iVar11 + 1) {
      piVar9 = (int *)*param_1;
      iVar10 = piVar9[2] * iVar11 + *piVar9;
      param_1[1] = iVar10;
      iVar5 = piVar9[3];
      iVar6 = param_1[2];
      piVar9 = (int *)(iVar5 * iVar3 + iVar10);
      iVar10 = iVar4;
      do {
        *piVar9 = iVar6;
        iVar10 = iVar10 + -1;
        piVar9 = (int *)((int)piVar9 + iVar5);
      } while (0 < iVar10);
    }
  }
  return;
}

