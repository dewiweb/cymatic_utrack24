// rea decompile_all
// name: FUN_00605530
// address: 0x605530
// body: available
// range: 0x605530-0x605588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x605584 to 0x604c50 FUN_00604c50 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00605530(int param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 0:
    break;
  case 1:
    FUN_00607180();
    break;
  case 2:
    FUN_00605890();
    return;
  case 3:
    FUN_006056b0();
    return;
  case 4:
    FUN_00605600();
    return;
  default:
    if ((param_1 - 10U < (uint)(*(int **)(in_ECX + 0x7c))[2]) &&
       (*(int *)(**(int **)(in_ECX + 0x7c) + (param_1 - 10U) * 4) != 0)) {
      FUN_00604c50();
      return;
    }
  }
  return;
}

