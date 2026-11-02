// rea decompile_all
// name: FUN_006cb570
// address: 0x6cb570
// body: available
// range: 0x6cb570-0x6cb5e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cb570(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(in_ECX + 0x3c);
  piVar4 = piVar2 + *(int *)(in_ECX + 0x44);
  if (piVar2 != piVar4) {
    while (param_1 != *piVar2) {
      piVar2 = piVar2 + 1;
      if (piVar2 == piVar4) {
        return;
      }
    }
    iVar3 = (int)piVar2 - *(int *)(in_ECX + 0x3c) >> 2;
    if (-1 < iVar3) {
      iVar1 = -1;
      if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
        iVar1 = *(int *)(in_ECX + 0x44);
        if (0 < iVar1) {
          piVar4 = (int *)(*(int *)(in_ECX + 0x3c) + (iVar1 + -1) * 4);
          do {
            if ((*(byte *)(*piVar4 + 0x69) & 1) == 0) break;
            iVar1 = iVar1 + -1;
            piVar4 = piVar4 + -1;
          } while (0 < iVar1);
        }
        iVar1 = iVar1 + -1;
      }
      FUN_004af320(iVar3,iVar1);
    }
  }
  return;
}

