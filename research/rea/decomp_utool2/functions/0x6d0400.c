// rea decompile_all
// name: FUN_006d0400
// address: 0x6d0400
// body: available
// range: 0x6d0400-0x6d0523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6d051f to 0x6ea0b0 FUN_006ea0b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d0400(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  *in_ECX = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x1c] = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x1e] = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x1f] = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x20] = juce::FileSearchPathListComponent::vftable;
  FUN_006c7bd0();
  FUN_006c7bd0();
  in_ECX[0xc0] = juce::TextButton::vftable;
  in_ECX[0xdc] = juce::TextButton::vftable;
  FUN_006e3470();
  in_ECX[0x88] = juce::TextButton::vftable;
  in_ECX[0xa4] = juce::TextButton::vftable;
  FUN_006e3470();
  in_ECX[0x50] = juce::TextButton::vftable;
  in_ECX[0x6c] = juce::TextButton::vftable;
  FUN_006e3470();
  FUN_006e7fa0();
  piVar2 = (int *)(in_ECX[0x24] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x21]);
  in_ECX[0x20] = juce::ListBoxModel::vftable;
  in_ECX[0x1f] = juce::Button::Listener::vftable;
  in_ECX[0x1e] = juce::FileDragAndDropTarget::vftable;
  piVar2 = (int *)(in_ECX[0x1d] + -8);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  in_ECX[0x1c] = juce::TooltipClient::vftable;
  FUN_006ea0b0();
  return;
}

