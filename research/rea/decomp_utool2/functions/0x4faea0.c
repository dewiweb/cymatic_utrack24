// rea decompile_all
// name: FUN_004faea0
// address: 0x4faea0
// body: available
// range: 0x4faea0-0x4faf39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4faf35 to 0x6ea0b0 FUN_006ea0b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004faea0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  
  puVar1 = in_ECX + 0x1c;
  *puVar1 = PopupEditorMultitrackSong::vftable;
  *in_ECX = PopupEditorMultitrackSong::vftable;
  in_ECX[0x4c] = PopupEditorMultitrackSong::vftable;
  puVar2 = (undefined4 *)in_ECX[0x4d];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x4d] = 0;
    (**(code **)*puVar2)(1);
  }
  uVar3 = 0;
  if ((undefined4 *)in_ECX[0x4d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x4d])(1);
    uVar3 = extraout_ECX;
  }
  in_ECX[0x4c] = MTSongEditor::Listener::vftable;
  *in_ECX = BasePopupComponent::vftable;
  *puVar1 = BasePopupComponent::vftable;
  FUN_0040e370(in_ECX,uVar3);
  if (DAT_00c8a5d4 != 0) {
    FUN_00415ff0(puVar1);
  }
  FUN_004eb130();
  *puVar1 = juce::ComponentListener::vftable;
  FUN_006ea0b0();
  return;
}

