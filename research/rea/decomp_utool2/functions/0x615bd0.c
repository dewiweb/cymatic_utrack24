// rea decompile_all
// name: FUN_00615bd0
// address: 0x615bd0
// body: available
// range: 0x615bd0-0x615c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x615c2b to 0x615b40 FUN_00615b40 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615bd0(void)

{
  int in_ECX;
  
  *(undefined ***)(in_ECX + 0xb20) = &PTR_DAT_00c7eb4c;
  *(int *)(in_ECX + 0xb18) = in_ECX + 0x94;
  *(int *)(in_ECX + 0xb24) = in_ECX + 0x988;
  *(int *)(in_ECX + 0xb30) = in_ECX + 0xa7c;
  *(undefined ***)(in_ECX + 0xb2c) = &PTR_DAT_00c7cfa4;
  *(undefined **)(in_ECX + 0xb38) = &DAT_00c7eb60;
  *(undefined2 *)(in_ECX + 0x16b8) = 0;
  *(undefined4 *)(in_ECX + 0x16bc) = 0;
  *(undefined4 *)(in_ECX + 0x16b4) = 8;
  FUN_00615b40();
  return;
}

