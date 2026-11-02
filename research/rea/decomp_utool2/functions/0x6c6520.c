// rea decompile_all
// name: FUN_006c6520
// address: 0x6c6520
// body: available
// range: 0x6c6520-0x6c658e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6c658a to 0x6e3470 FUN_006e3470 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6520(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = juce::ToolbarButton::vftable;
  in_ECX[0x1c] = juce::ToolbarButton::vftable;
  if ((undefined4 *)in_ECX[0x44] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x44])(1);
  }
  if ((undefined4 *)in_ECX[0x43] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x43])(1);
  }
  *in_ECX = juce::ToolbarItemComponent::vftable;
  in_ECX[0x1c] = juce::ToolbarItemComponent::vftable;
  puVar1 = (undefined4 *)in_ECX[0x3b];
  if (puVar1 != (undefined4 *)0x0) {
    in_ECX[0x3b] = 0;
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)in_ECX[0x3b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x3b])(1);
  }
  FUN_006e3470();
  return;
}

