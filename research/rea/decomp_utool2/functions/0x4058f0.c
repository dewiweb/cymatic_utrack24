// rea decompile_all
// name: FUN_004058f0
// address: 0x4058f0
// body: available
// range: 0x4058f0-0x405a1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004058f0(int param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  int in_ECX;
  double *pdVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar5 = in_ECX >> 1;
  iVar2 = (param_1 * 2) / iVar5;
  *(ulonglong *)(in_EDX + 8) = *(ulonglong *)(in_EDX + 8) ^ 0x8000000000000000;
  if (2 < iVar5) {
    pdVar6 = param_2 + param_1;
    iVar4 = 2;
    pdVar3 = (double *)(in_EDX + (in_ECX + -2) * 8);
    do {
      dVar1 = *(double *)(in_EDX + iVar4 * 8);
      pdVar6 = pdVar6 + -iVar2;
      dVar9 = *(double *)(in_EDX + 8 + iVar4 * 8) + pdVar3[1];
      dVar8 = dVar1 - *pdVar3;
      param_2 = param_2 + iVar2;
      dVar7 = dVar9 * *param_2 + dVar8 * (0.5 - *pdVar6);
      dVar8 = dVar9 * (0.5 - *pdVar6) - dVar8 * *param_2;
      *(double *)(in_EDX + iVar4 * 8) = dVar1 - dVar7;
      *(double *)(in_EDX + 8 + iVar4 * 8) = dVar8 - *(double *)(in_EDX + 8 + iVar4 * 8);
      iVar4 = iVar4 + 2;
      pdVar3[1] = dVar8 - pdVar3[1];
      *pdVar3 = *pdVar3 + dVar7;
      pdVar3 = pdVar3 + -2;
    } while (iVar4 < iVar5);
  }
  *(ulonglong *)(in_EDX + 8 + iVar5 * 8) =
       *(ulonglong *)(in_EDX + 8 + iVar5 * 8) ^ 0x8000000000000000;
  return;
}

