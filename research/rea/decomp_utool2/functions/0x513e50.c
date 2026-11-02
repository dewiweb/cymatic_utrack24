// rea decompile_all
// name: FUN_00513e50
// address: 0x513e50
// body: available
// range: 0x513e50-0x513fbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x513fb8 to 0x508480 FUN_00508480 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513e50(void)

{
  int in_ECX;
  
  FUN_004eb250();
  FUN_00684960(in_ECX + 0x148);
  FUN_006e9790(*(int *)(in_ECX + 0x7c) + 10,
               (int)((float)(*(int *)(in_ECX + 0x80) + 10) + *(float *)(in_ECX + 0x178) + 4.0 + 4.0)
               ,300,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x7c) + *(int *)(in_ECX + 0x84) + -0x30,
               *(undefined4 *)(in_ECX + 0x194),0x28,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x6ec) + -0x28,*(undefined4 *)(in_ECX + 0x194),0x28,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x5d4) + -0x78,*(undefined4 *)(in_ECX + 0x194),0x78,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 400),
               (int)((float)(*(int *)(in_ECX + 0x80) + 10) + *(float *)(in_ECX + 0x178) + 4.0),
               (*(int *)(in_ECX + 0x504) - *(int *)(in_ECX + 0x198)) - *(int *)(in_ECX + 400),0x1c);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x7c),*(int *)(in_ECX + 0x194) + 0x20,
               *(undefined4 *)(in_ECX + 0x84),
               ((*(int *)(in_ECX + 0x88) + *(int *)(in_ECX + 0x80)) - *(int *)(in_ECX + 0x194)) +
               -0x20);
  FUN_00508480();
  return;
}

