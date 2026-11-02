// rea decompile_all
// name: FUN_004b8560
// address: 0x4b8560
// body: available
// range: 0x4b8560-0x4b85bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8560(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_ECX + 0x18);
  iVar2 = 0;
  if (0 < iVar4) {
    piVar3 = *(int **)(in_ECX + 0x10);
    do {
      iVar1 = *piVar3;
      if (iVar2 == 0) {
LAB_004b8598:
        iVar2 = iVar1;
      }
      else if ((*(int *)(iVar1 + 0x1c) <= *(int *)(iVar2 + 0x1c)) &&
              ((*(int *)(iVar1 + 0x1c) < *(int *)(iVar2 + 0x1c) ||
               (*(uint *)(iVar1 + 0x18) < *(uint *)(iVar2 + 0x18))))) goto LAB_004b8598;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar2 != 0) {
      *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) - *(int *)(iVar2 + 0x20);
      FUN_004bc900(iVar2,in_ECX);
    }
  }
  return;
}

