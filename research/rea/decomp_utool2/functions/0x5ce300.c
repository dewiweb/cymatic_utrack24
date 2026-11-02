// rea decompile_all
// name: FUN_005ce300
// address: 0x5ce300
// body: available
// range: 0x5ce300-0x5ce5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ce300(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071b36a;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = juce::ChangeBroadcaster::vftable;
  FUN_0063ea10(uVar2);
  in_ECX[1] = juce::ChangeBroadcaster::ChangeBroadcasterCallback::vftable;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[3] = in_ECX;
  local_8 = 1;
  *in_ECX = juce::AudioDeviceManager::vftable;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  FUN_005ced70();
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 2;
  in_ECX[0x2c] = &DAT_00bfe12c;
  in_ECX[0x2d] = 0;
  in_ECX[0x32] = 4;
  in_ECX[0x33] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x3a] = 4;
  in_ECX[0x3b] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x3c) = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3d] = 0;
  *(undefined1 *)(in_ECX + 0x3e) = 1;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = in_ECX + 0x44;
  in_ECX[0x43] = 0;
  *(undefined1 *)(in_ECX + 100) = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6e] = &DAT_00bfe12c;
  in_ECX[0x6f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x70));
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x76));
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  *(undefined8 *)(in_ECX + 0x82) = 0;
  in_ECX[0x84] = 0;
  *(undefined8 *)(in_ECX + 0x86) = 0;
  in_ECX[0x88] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x13);
  puVar3 = operator_new(0x10);
  puVar3[1] = juce::MidiInputCallback::vftable;
  puVar3[2] = juce::AudioIODeviceType::Listener::vftable;
  *puVar3 = juce::AudioDeviceManager::CallbackHandler::vftable;
  puVar3[1] = juce::AudioDeviceManager::CallbackHandler::vftable;
  puVar3[2] = juce::AudioDeviceManager::CallbackHandler::vftable;
  puVar3[3] = in_ECX;
  puVar1 = (undefined4 *)in_ECX[0x88];
  if ((puVar1 != puVar3) && (in_ECX[0x88] = puVar3, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_10;
  return;
}

