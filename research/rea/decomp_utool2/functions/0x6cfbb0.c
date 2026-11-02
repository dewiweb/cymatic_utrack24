// rea decompile_all
// name: FUN_006cfbb0
// address: 0x6cfbb0
// body: available
// range: 0x6cfbb0-0x6cfc20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cfbb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    iVar1 = *(int *)(in_ECX + 0xc);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x30);
      if (iVar2 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(iVar1 + 0x28);
      }
      if (iVar3 != in_ECX) {
        iVar3 = FUN_00462660(in_ECX);
        if (0 < iVar3) {
          iVar4 = 0;
          if (((*(byte *)(in_ECX + 0x69) & 1) != 0) && (0 < iVar2)) {
            piVar5 = *(int **)(iVar1 + 0x28);
            do {
              if ((*(byte *)(*piVar5 + 0x69) & 1) != 0) break;
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar4 < iVar2);
          }
          FUN_006cfcc0(iVar3,iVar4);
        }
      }
    }
  }
  return;
}

