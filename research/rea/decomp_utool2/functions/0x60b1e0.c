// rea decompile_all
// name: FUN_0060b1e0
// address: 0x60b1e0
// body: available
// range: 0x60b1e0-0x60b2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060b1e0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071c500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = juce::AudioProcessorPlayer::vftable;
  in_ECX[1] = juce::AudioProcessorPlayer::vftable;
  FUN_0060afc0(0);
  in_ECX[0x60] = juce::MidiMessageCollector::vftable;
  in_ECX[0x61] = juce::MidiMessageCollector::vftable;
  FID_conflict__free((void *)in_ECX[0x6a]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 100));
  in_ECX[0x61] = juce::MidiInputCallback::vftable;
  in_ECX[0x60] = juce::MidiKeyboardStateListener::vftable;
  FID_conflict__free((void *)in_ECX[0x5d]);
  FID_conflict__free((void *)in_ECX[0x3b]);
  FID_conflict__free((void *)in_ECX[0x15]);
  FID_conflict__free((void *)in_ECX[0x10]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 3));
  in_ECX[1] = juce::MidiInputCallback::vftable;
  *in_ECX = juce::AudioIODeviceCallback::vftable;
  ExceptionList = local_10;
  return;
}

