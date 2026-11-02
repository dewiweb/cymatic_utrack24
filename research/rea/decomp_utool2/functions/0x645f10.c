// rea decompile_all
// name: FUN_00645f10
// address: 0x645f10
// body: available
// range: 0x645f10-0x645f69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x645f62 to 0x64a1c0 FUN_0064a1c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00645f10(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_00648870(param_1,0);
  iVar1 = *(int *)(in_ECX + 0xd4);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0xd8);
    *(int *)(in_ECX + 0xd8) = iVar1;
  }
  FUN_00647010();
  *(int *)(in_ECX + 0x138) = *(int *)(in_ECX + 0x138) + 1;
  if ((*(uint *)(in_ECX + 0x134) != 0) && (*(uint *)(in_ECX + 0x134) <= *(uint *)(in_ECX + 0x138)))
  {
    FUN_0064a1c0();
    return;
  }
  return;
}

