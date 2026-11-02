// rea decompile_all
// name: FUN_00405810
// address: 0x405810
// body: available
// range: 0x405810-0x4058ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405810(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int in_ECX;
  double *pdVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar6 = in_ECX >> 1;
  iVar3 = ((int)param_1 * 2) / iVar6;
  iVar5 = 2;
  if (2 < iVar6) {
    param_1 = param_2 + (int)param_1;
    pdVar4 = (double *)(in_EDX + (in_ECX + -2) * 8);
    do {
      dVar1 = *(double *)(in_EDX + iVar5 * 8);
      dVar2 = *(double *)(in_EDX + 8 + iVar5 * 8);
      dVar9 = dVar1 - *pdVar4;
      dVar7 = dVar2 + pdVar4[1];
      param_1 = param_1 + -iVar3;
      param_2 = param_2 + iVar3;
      dVar8 = dVar9 * (0.5 - *param_1) - dVar7 * *param_2;
      dVar7 = dVar9 * *param_2 + dVar7 * (0.5 - *param_1);
      *(double *)(in_EDX + iVar5 * 8) = dVar1 - dVar8;
      *(double *)(in_EDX + 8 + iVar5 * 8) = dVar2 - dVar7;
      iVar5 = iVar5 + 2;
      *pdVar4 = dVar8 + *pdVar4;
      pdVar4[1] = pdVar4[1] - dVar7;
      pdVar4 = pdVar4 + -2;
    } while (iVar5 < iVar6);
  }
  return;
}

