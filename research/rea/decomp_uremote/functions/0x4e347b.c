// rea decompile_all
// name: FUN_004e347b
// address: 0x4e347b
// body: available
// range: 0x4e347b-0x4e34b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e347b(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004c2024();
  puVar1[2] = juce::ComponentListener::vftable;
  puVar1[3] = juce::MarkerList::Listener::vftable;
  *puVar1 = juce::RelativeCoordinatePositionerBase::vftable;
  puVar1[2] = juce::RelativeCoordinatePositionerBase::vftable;
  puVar1[3] = juce::RelativeCoordinatePositionerBase::vftable;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  return;
}

