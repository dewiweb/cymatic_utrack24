// rea decompile_all
// name: FUN_005c29b0
// address: 0x5c29b0
// body: available
// range: 0x5c29b0-0x5c2a1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005c29b0(uint param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar2 = FUN_005c28b0(param_1);
      return iVar2;
    }
    if (param_2 != 2) {
      return 0;
    }
    iVar2 = FUN_005c2910(param_1);
    return iVar2;
  }
  iVar2 = *(int *)(in_ECX + 0x24) + -1;
  if (-1 < iVar2) {
    iVar1 = *(int *)(in_ECX + 0x1c) + iVar2 * 0x28;
    do {
      if (*(byte *)(iVar1 + 2) == param_1) {
        if (*(int *)(iVar1 + 0x20) == 1) {
          return iVar1;
        }
        if (*(int *)(iVar1 + 0x20) == 3) {
          return iVar1;
        }
      }
      iVar1 = iVar1 + -0x28;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}

