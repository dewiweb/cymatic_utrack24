// rea decompile_all
// name: FUN_0050f250
// address: 0x50f250
// body: available
// range: 0x50f250-0x50f439 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050f250(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708901;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = DSPMixerPanel::vftable;
  in_ECX[0x1c] = DSPMixerPanel::vftable;
  in_ECX[0x1d] = DSPMixerPanel::vftable;
  in_ECX[0x1e] = DSPMixerPanel::vftable;
  in_ECX[0x1f] = DSPMixerPanel::vftable;
  in_ECX[0x20] = DSPMixerPanel::vftable;
  in_ECX[0x25] = DSPMixerPanel::vftable;
  in_ECX[0x26] = DSPMixerPanel::vftable;
  in_ECX[0x27] = DSPMixerPanel::vftable;
  in_ECX[0x28] = DSPMixerPanel::vftable;
  FUN_0050eee0(uVar1);
  FUN_00407640();
  FUN_004126f0();
  FID_conflict__free((void *)in_ECX[0x45a]);
  local_8 = 0;
  in_ECX[0x2a6] = juce::AudioSourcePlayer::vftable;
  FUN_005ce740(0);
  FID_conflict__free((void *)in_ECX[0x435]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x2a7));
  in_ECX[0x2a6] = juce::AudioIODeviceCallback::vftable;
  FUN_004e7d90();
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x206));
  FUN_00407640();
  FUN_00509ce0();
  FUN_006e4a60();
  in_ECX[0x14a] = juce::TextButton::vftable;
  in_ECX[0x166] = juce::TextButton::vftable;
  FUN_006e3470();
  in_ECX[0x112] = juce::TextButton::vftable;
  in_ECX[0x12e] = juce::TextButton::vftable;
  FUN_006e3470();
  FUN_00583950();
  FUN_00583950();
  FUN_006e2980();
  FUN_005101e0();
  in_ECX[0x28] = juce::ComboBox::Listener::vftable;
  in_ECX[0x27] = juce::Label::Listener::vftable;
  in_ECX[0x26] = ViewSelector::Listener::vftable;
  in_ECX[0x25] = juce::ChangeListener::vftable;
  in_ECX[0x20] = juce::Timer::vftable;
  FUN_0063eab0();
  in_ECX[0x1f] = juce::Slider::Listener::vftable;
  in_ECX[0x1e] = MyMixerAudioSource::Listener::vftable;
  in_ECX[0x1d] = juce::Button::Listener::vftable;
  in_ECX[0x1c] = DSPMViewport::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

