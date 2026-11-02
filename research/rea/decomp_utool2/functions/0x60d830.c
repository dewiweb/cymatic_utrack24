// rea decompile_all
// name: FUN_0060d830
// address: 0x60d830
// body: available
// range: 0x60d830-0x60d947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060d830(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::MidiKeyboardComponent::vftable;
  lpCriticalSection = (LPCRITICAL_SECTION)in_ECX[0x29];
  *in_ECX = juce::MidiKeyboardComponent::vftable;
  in_ECX[0x1d] = juce::MidiKeyboardComponent::vftable;
  in_ECX[0x24] = juce::MidiKeyboardComponent::vftable;
  EnterCriticalSection(lpCriticalSection);
  FUN_00415ff0(puVar1);
  LeaveCriticalSection(lpCriticalSection);
  FID_conflict__free((void *)in_ECX[0x51]);
  FID_conflict__free((void *)in_ECX[0x4e]);
  if ((undefined4 *)in_ECX[0x4d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x4d])(1);
  }
  if ((undefined4 *)in_ECX[0x4c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x4c])(1);
  }
  FID_conflict__free((void *)in_ECX[0x3f]);
  FID_conflict__free((void *)in_ECX[0x37]);
  FID_conflict__free((void *)in_ECX[0x34]);
  FID_conflict__free((void *)in_ECX[0x31]);
  in_ECX[0x24] = juce::Timer::vftable;
  FUN_0063eab0();
  in_ECX[0x1d] = juce::ChangeBroadcaster::vftable;
  FID_conflict__free((void *)in_ECX[0x21]);
  in_ECX[0x1e] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x1f] + 0xc) = 0;
  UNLOCK();
  puVar4 = (undefined4 *)in_ECX[0x1f];
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = puVar4 + 1;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar4)(1);
    }
  }
  *puVar1 = juce::MidiKeyboardStateListener::vftable;
  FUN_006ea0b0();
  return;
}

