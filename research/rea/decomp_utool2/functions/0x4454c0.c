// rea decompile_all
// name: FUN_004454c0
// address: 0x4454c0
// body: available
// range: 0x4454c0-0x445535 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004454c0(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  if (param_2 == 0x1000) {
    iVar2 = *(int *)(in_ECX + 0x28) + -1;
    if (-1 < iVar2) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x20) + iVar2 * 4);
      do {
        if (*piVar1 == param_1) {
          return iVar2;
        }
        piVar1 = piVar1 + -1;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x1c) + -1;
    if (-1 < iVar2) {
      while ((*(int *)(*(int *)(in_ECX + 0x14) + iVar2 * 4) != param_1 ||
             (*(int *)(*(int *)(in_ECX + 8) + iVar2 * 4) != param_2))) {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) {
          return -1;
        }
      }
      return iVar2;
    }
  }
  return -1;
}

