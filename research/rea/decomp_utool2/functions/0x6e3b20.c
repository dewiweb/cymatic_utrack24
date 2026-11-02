// rea decompile_all
// name: FUN_006e3b20
// address: 0x6e3b20
// body: available
// range: 0x6e3b20-0x6e3b75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006e3b20(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  uVar2 = FUN_004ae6c0();
  if (uVar2 <= param_1) {
    return -1;
  }
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0xa8)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xa0) + iVar3 * 4);
      iVar4 = *(int *)(*(int *)(in_ECX + 0xa0) + 4 + iVar3 * 4) - iVar1;
      if ((int)param_1 < iVar4) {
        return iVar1 + param_1;
      }
      iVar3 = iVar3 + 2;
      param_1 = param_1 - iVar4;
    } while (iVar3 < *(int *)(in_ECX + 0xa8));
  }
  return 0;
}

