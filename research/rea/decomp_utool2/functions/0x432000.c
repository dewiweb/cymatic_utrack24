// rea decompile_all
// name: FUN_00432000
// address: 0x432000
// body: available
// range: 0x432000-0x432054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00432000(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 1:
    if ((((param_2 != 3) && (param_2 != 2)) && (param_2 != 5)) &&
       ((param_2 != 6 && (param_2 != 10)))) {
      return 0;
    }
switchD_0043200c_caseD_6:
    return 1;
  case 2:
    return 2;
  case 3:
  case 4:
  case 5:
    FUN_00430660();
    return 1;
  case 6:
    goto switchD_0043200c_caseD_6;
  default:
    return 0;
  }
}

