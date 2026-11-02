// rea decompile_all
// name: FUN_005ada10
// address: 0x5ada10
// body: available
// range: 0x5ada10-0x5adaf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5adaee to 0x6ea0b0 FUN_006ea0b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ada10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PanelSupportComponent::vftable;
  in_ECX[0x1c] = PanelSupportComponent::vftable;
  in_ECX[0x1d] = PanelSupportComponent::vftable;
  FUN_005b7fb0();
  FUN_00587a80();
  in_ECX[0x21e] = NewsComponent::Listener::vftable;
  FUN_006ea0b0();
  FID_conflict__free((void *)in_ECX[0x1fa]);
  FUN_006e3470();
  FUN_006e3470();
  FUN_006e3470();
  FUN_006e3470();
  FUN_006e3470();
  in_ECX[0x1e] = AboutBox::vftable;
  in_ECX[0x3a] = AboutBox::vftable;
  FUN_006e3d10();
  FUN_004f3d00();
  FUN_004f3d00();
  in_ECX[0x3a] = juce::Button::Listener::vftable;
  FUN_006ea0b0();
  in_ECX[0x1d] = juce::ComponentListener::vftable;
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  FUN_006ea0b0();
  return;
}

