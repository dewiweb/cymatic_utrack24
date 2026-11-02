// rea decompile_all
// name: FUN_0060fb20
// address: 0x60fb20
// body: available
// range: 0x60fb20-0x60fc2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x60fc27 to 0x6ea0b0 FUN_006ea0b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060fb20(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *_Memory;
  
  puVar1 = in_ECX + 0x1d;
  *puVar1 = juce::AudioDeviceSelectorComponent::vftable;
  *in_ECX = juce::AudioDeviceSelectorComponent::vftable;
  in_ECX[0x1c] = juce::AudioDeviceSelectorComponent::vftable;
  in_ECX[0x1e] = juce::AudioDeviceSelectorComponent::vftable;
  in_ECX[0x1f] = juce::AudioDeviceSelectorComponent::vftable;
  FUN_00415ff0(puVar1);
  if ((undefined4 *)in_ECX[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x33])(1);
  }
  if ((undefined4 *)in_ECX[0x32] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x32])(1);
  }
  if ((undefined4 *)in_ECX[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x31])(1);
  }
  if ((undefined4 *)in_ECX[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x30])(1);
  }
  if ((undefined4 *)in_ECX[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2f])(1);
  }
  _Memory = (int *)(in_ECX[0x28] + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if ((undefined4 *)in_ECX[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x27])(1);
  }
  if ((undefined4 *)in_ECX[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x26])(1);
  }
  if ((undefined4 *)in_ECX[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x25])(1);
  }
  in_ECX[0x1f] = juce::Timer::vftable;
  FUN_0063eab0();
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  *puVar1 = juce::ChangeListener::vftable;
  in_ECX[0x1c] = juce::ComboBox::Listener::vftable;
  FUN_006ea0b0();
  return;
}

