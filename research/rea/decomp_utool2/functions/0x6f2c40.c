// rea decompile_all
// name: FUN_006f2c40
// address: 0x6f2c40
// body: available
// range: 0x6f2c40-0x6f2cf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f2c40(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  if (0 < param_1) {
    piVar1 = (int *)*in_ECX;
    iVar3 = 0;
    iVar2 = piVar1[2];
    if (3 < iVar2) {
      iVar5 = iVar2;
      do {
        iVar2 = (iVar3 + 1 + iVar5) / 2;
        if (*(int *)(*(int *)(*piVar1 + iVar2 * 4) + 4) <= param_1) {
          iVar3 = iVar2;
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
      } while (3 < iVar2 - iVar3);
    }
    for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar5 = *(int *)(*piVar1 + iVar3 * 4);
      iVar6 = param_1 - *(int *)(iVar5 + 4);
      if ((-1 < iVar6) && ((iVar6 < *(int *)(iVar5 + 8) || (iVar3 == iVar2 + -1)))) {
        in_ECX[2] = iVar3;
        iVar4 = *(int *)(iVar5 + 0xc);
        if (iVar6 < *(int *)(iVar5 + 0xc)) {
          iVar4 = iVar6;
        }
        in_ECX[3] = iVar4;
        in_ECX[1] = *(int *)(iVar5 + 4) + iVar4;
      }
      piVar1 = (int *)*in_ECX;
    }
  }
  return;
}

