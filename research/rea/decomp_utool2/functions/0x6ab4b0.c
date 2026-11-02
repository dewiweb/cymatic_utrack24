// rea decompile_all
// name: FUN_006ab4b0
// address: 0x6ab4b0
// body: available
// range: 0x6ab4b0-0x6ab6e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ab4b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  
  *in_ECX = juce::LookAndFeel::vftable;
  in_ECX[1] = juce::LookAndFeel::vftable;
  in_ECX[2] = juce::LookAndFeel::vftable;
  in_ECX[3] = juce::LookAndFeel::vftable;
  in_ECX[4] = juce::LookAndFeel::vftable;
  in_ECX[5] = juce::LookAndFeel::vftable;
  in_ECX[6] = juce::LookAndFeel::vftable;
  in_ECX[7] = juce::LookAndFeel::vftable;
  in_ECX[8] = juce::LookAndFeel::vftable;
  in_ECX[9] = juce::LookAndFeel::vftable;
  in_ECX[10] = juce::LookAndFeel::vftable;
  in_ECX[0xb] = juce::LookAndFeel::vftable;
  in_ECX[0xc] = juce::LookAndFeel::vftable;
  in_ECX[0xd] = juce::LookAndFeel::vftable;
  in_ECX[0xe] = juce::LookAndFeel::vftable;
  in_ECX[0xf] = juce::LookAndFeel::vftable;
  in_ECX[0x10] = juce::LookAndFeel::vftable;
  in_ECX[0x11] = juce::LookAndFeel::vftable;
  in_ECX[0x12] = juce::LookAndFeel::vftable;
  in_ECX[0x13] = juce::LookAndFeel::vftable;
  in_ECX[0x14] = juce::LookAndFeel::vftable;
  in_ECX[0x15] = juce::LookAndFeel::vftable;
  in_ECX[0x16] = juce::LookAndFeel::vftable;
  in_ECX[0x17] = juce::LookAndFeel::vftable;
  in_ECX[0x18] = juce::LookAndFeel::vftable;
  in_ECX[0x19] = juce::LookAndFeel::vftable;
  in_ECX[0x1a] = juce::LookAndFeel::vftable;
  in_ECX[0x1b] = juce::LookAndFeel::vftable;
  if (in_ECX[0x1c] != 0) {
    *(undefined4 *)(in_ECX[0x1c] + 8) = 0;
  }
  piVar3 = (int *)(in_ECX[0x22] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[0x21] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[0x20] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FID_conflict__free((void *)in_ECX[0x1d]);
  puVar2 = (undefined4 *)in_ECX[0x1c];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  in_ECX[0x1b] = juce::ExtraLookAndFeelBaseClasses::LassoComponentMethods::vftable;
  in_ECX[0x1a] = juce::ExtraLookAndFeelBaseClasses::AudioDeviceSelectorComponentMethods::vftable;
  in_ECX[0x19] = juce::ExtraLookAndFeelBaseClasses::KeyMappingEditorComponentMethods::vftable;
  in_ECX[0x18] = juce::StretchableLayoutResizerBar::LookAndFeelMethods::vftable;
  in_ECX[0x17] = juce::ProgressBar::LookAndFeelMethods::vftable;
  in_ECX[0x16] = juce::ConcertinaPanel::LookAndFeelMethods::vftable;
  in_ECX[0x15] = juce::Toolbar::LookAndFeelMethods::vftable;
  in_ECX[0x14] = juce::CallOutBox::LookAndFeelMethods::vftable;
  in_ECX[0x13] = juce::TableHeaderComponent::LookAndFeelMethods::vftable;
  in_ECX[0x12] = juce::GroupComponent::LookAndFeelMethods::vftable;
  in_ECX[0x11] = juce::FilenameComponent::LookAndFeelMethods::vftable;
  in_ECX[0x10] = juce::PropertyComponent::LookAndFeelMethods::vftable;
  in_ECX[0xf] = juce::TabbedButtonBar::LookAndFeelMethods::vftable;
  in_ECX[0xe] = juce::TooltipWindow::LookAndFeelMethods::vftable;
  in_ECX[0xd] = juce::DocumentWindow::LookAndFeelMethods::vftable;
  in_ECX[0xc] = juce::ResizableWindow::LookAndFeelMethods::vftable;
  in_ECX[0xb] = juce::Slider::LookAndFeelMethods::vftable;
  in_ECX[10] = juce::Label::LookAndFeelMethods::vftable;
  in_ECX[9] = juce::ComboBox::LookAndFeelMethods::vftable;
  in_ECX[8] = juce::PopupMenu::LookAndFeelMethods::vftable;
  in_ECX[7] = juce::AlertWindow::LookAndFeelMethods::vftable;
  in_ECX[6] = juce::BubbleComponent::LookAndFeelMethods::vftable;
  in_ECX[5] = juce::TreeView::LookAndFeelMethods::vftable;
  in_ECX[4] = juce::FileBrowserComponent::LookAndFeelMethods::vftable;
  in_ECX[3] = juce::TextEditor::LookAndFeelMethods::vftable;
  in_ECX[2] = juce::ImageButton::LookAndFeelMethods::vftable;
  in_ECX[1] = juce::Button::LookAndFeelMethods::vftable;
  *in_ECX = juce::ScrollBar::LookAndFeelMethods::vftable;
  return;
}

