// rea decompile_all
// name: FUN_00434200
// address: 0x434200
// body: available
// range: 0x434200-0x43424c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434248 to 0x434470 FUN_00434470 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00434200(void)

{
  undefined4 *in_ECX;
  int in_EDX;
  
  if (DAT_00c8a62c == in_EDX) {
    *in_ECX = FUN_00434530;
    in_ECX[2] = FUN_00434500;
    in_ECX[3] = FUN_00434590;
    in_ECX[1] = &LAB_004344e0;
    return;
  }
  if (DAT_00c8a630 == in_EDX) {
    *in_ECX = FUN_00434640;
    in_ECX[2] = FUN_00434610;
    in_ECX[3] = FUN_004346a0;
    in_ECX[1] = &LAB_004345f0;
    return;
  }
  FUN_00434470();
  return;
}

