// rea decompile_all
// name: FUN_005cec70
// address: 0x5cec70
// body: available
// range: 0x5cec70-0x5ced68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cec70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071b3d1;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::PositionableAudioSource::vftable;
  puVar1 = in_ECX + 1;
  local_8 = 0;
  *puVar1 = juce::ChangeBroadcaster::vftable;
  FUN_0063ea10(uVar2);
  in_ECX[2] = juce::ChangeBroadcaster::ChangeBroadcasterCallback::vftable;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[4] = puVar1;
  *in_ECX = juce::AudioTransportSource::vftable;
  *puVar1 = juce::AudioTransportSource::vftable;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xd));
  in_ECX[0x13] = 0x3f800000;
  in_ECX[0x14] = 0x3f800000;
  *(undefined8 *)(in_ECX + 0x16) = 0x40e5888000000000;
  *(undefined1 *)(in_ECX + 0x15) = 0;
  *(undefined1 *)((int)in_ECX + 0x55) = 1;
  *(undefined8 *)(in_ECX + 0x18) = 0;
  in_ECX[0x1a] = 0x80;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)((int)in_ECX + 0x71) = 0;
  ExceptionList = local_10;
  return;
}

