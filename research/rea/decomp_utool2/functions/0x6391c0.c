// rea decompile_all
// name: FUN_006391c0
// address: 0x6391c0
// body: available
// range: 0x6391c0-0x6392fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006391c0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f18c;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = *(undefined1 *)(param_1 + 0x11);
  *in_ECX = juce::PropertySet::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = uVar2;
  in_ECX[8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 9));
  *(undefined1 *)(in_ECX + 0xf) = uVar2;
  puVar1 = in_ECX + 0x10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *puVar1 = juce::ChangeBroadcaster::vftable;
  FUN_0063ea10(uVar3);
  in_ECX[0x11] = juce::ChangeBroadcaster::ChangeBroadcasterCallback::vftable;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x13] = puVar1;
  in_ECX[0x17] = juce::Timer::vftable;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  local_8._0_1_ = 3;
  *in_ECX = juce::PropertiesFile::vftable;
  *puVar1 = juce::PropertiesFile::vftable;
  in_ECX[0x17] = juce::PropertiesFile::vftable;
  FUN_00639300(in_ECX + 0x1c);
  FUN_00462440(param_1);
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined2 *)(in_ECX + 0x25) = 0;
  FUN_006390d0();
  ExceptionList = local_10;
  return in_ECX;
}

