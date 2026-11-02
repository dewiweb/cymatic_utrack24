// rea decompile_all
// name: FUN_00622c00
// address: 0x622c00
// body: available
// range: 0x622c00-0x622c50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00622c00(uint param_1,uint param_2)

{
  int in_ECX;
  uint local_10;
  
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    local_10 = 0;
  }
  else {
    local_10 = param_1;
    if ((param_2 < 0x80000000) && ((0 < (int)param_2 || (*(uint *)(in_ECX + 8) < param_1)))) {
      *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 8);
      return 1;
    }
  }
  *(uint *)(in_ECX + 0xc) = local_10;
  return 1;
}

