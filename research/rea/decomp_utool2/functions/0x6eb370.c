// rea decompile_all
// name: FUN_006eb370
// address: 0x6eb370
// body: available
// range: 0x6eb370-0x6eb3ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006eb370(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = *(int **)(*(int *)(in_ECX + 0x70) + 0x24);
  iVar3 = piVar2[5] + -1;
  if (-1 < iVar3) {
    piVar1 = piVar2 + 3;
    puVar4 = (undefined4 *)(*piVar1 + iVar3 * 4);
    do {
      piVar2 = (int *)*puVar4;
      if (*piVar2 == param_1) {
        piVar2 = *(int **)(*piVar1 + iVar3 * 4);
        if ((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 7) & 8) == 0)) {
          return CONCAT31((int3)((uint)piVar2 >> 8),1);
        }
        break;
      }
      puVar4 = puVar4 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return (uint)piVar2 & 0xffffff00;
}

