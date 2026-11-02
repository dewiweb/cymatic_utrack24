// rea decompile_all
// name: FUN_004fd0c0
// address: 0x4fd0c0
// body: available
// range: 0x4fd0c0-0x4fd2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4fd2e7 to 0x6ea0b0 FUN_006ea0b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd0c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  
  *in_ECX = MTSongEditor::vftable;
  in_ECX[0x1c] = MTSongEditor::vftable;
  in_ECX[0x1f] = MTSongEditor::vftable;
  in_ECX[0x20] = MTSongEditor::vftable;
  in_ECX[0x21] = MTSongEditor::vftable;
  in_ECX[0x22] = MTSongEditor::vftable;
  in_ECX[0x23] = MTSongEditor::vftable;
  in_ECX[0x24] = MTSongEditor::vftable;
  FUN_004fa230();
  FUN_004f9930();
  FUN_004f86a0();
  FUN_0040f530();
  FUN_004f9930();
  FUN_004f9930();
  FUN_00533c30();
  FUN_004f9930();
  FUN_004f55c0();
  FUN_004f9930();
  piVar3 = (int *)(in_ECX[0x37e] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[0x37c] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_006e2980();
  FUN_006e4a60();
  FUN_006e2980();
  FUN_006e4a60();
  FUN_006e2980();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  in_ECX[0x122] = TableComponent::vftable;
  FUN_00407640();
  FUN_006ea0b0();
  FUN_004f9930();
  FUN_005b7490();
  if ((undefined4 *)in_ECX[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x26])(1);
  }
  in_ECX[0x24] = FileSelector::Listener::vftable;
  in_ECX[0x23] = PushButton::Listener::vftable;
  in_ECX[0x22] = AudioFileBrowser::Listener::vftable;
  in_ECX[0x21] = TrackList::Listener::vftable;
  in_ECX[0x20] = juce::ComboBox::Listener::vftable;
  in_ECX[0x1f] = juce::Label::Listener::vftable;
  in_ECX[0x1c] = juce::DragAndDropContainer::vftable;
  puVar2 = (undefined4 *)in_ECX[0x1d];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x1d] = 0;
    (**(code **)*puVar2)(1);
  }
  if ((undefined4 *)in_ECX[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1d])(1);
  }
  FUN_006ea0b0();
  return;
}

