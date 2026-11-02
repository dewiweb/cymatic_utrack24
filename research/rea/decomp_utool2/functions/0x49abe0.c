// rea decompile_all
// name: FUN_0049abe0
// address: 0x49abe0
// body: available
// range: 0x49abe0-0x49ae31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049abe0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702a4a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063ea10(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[2] = juce::Button::Listener::vftable;
  in_ECX[3] = juce::Label::Listener::vftable;
  in_ECX[4] = juce::Value::Listener::vftable;
  *in_ECX = juce::Slider::Pimpl::vftable;
  in_ECX[2] = juce::Slider::Pimpl::vftable;
  in_ECX[3] = juce::Slider::Pimpl::vftable;
  in_ECX[4] = juce::Slider::Pimpl::vftable;
  in_ECX[5] = param_1;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  FUN_0063b600();
  local_8._0_1_ = 5;
  FUN_0063b600();
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_0063b600();
  *(undefined8 *)(in_ECX + 0x1e) = 0x4024000000000000;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x34] = 1;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *(undefined8 *)(in_ECX + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(in_ECX + 0x2e) = 0x3ff0000000000000;
  *(undefined8 *)(in_ECX + 0x30) = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 1;
  in_ECX[0x3e] = 0xffffffff;
  in_ECX[0x3f] = 0xfa;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 1;
  in_ECX[0x48] = &DAT_00bfe12c;
  in_ECX[0x49] = 7;
  in_ECX[0x4a] = 0x50;
  in_ECX[0x4b] = 0x14;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0x1000001;
  in_ECX[0x4e] = 0;
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  *(undefined2 *)((int)in_ECX + 0x13e) = 0x101;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x35] = 0x4071463b;
  in_ECX[0x36] = 0x410cbe4c;
  *(undefined1 *)(in_ECX + 0x37) = 1;
  ExceptionList = local_10;
  return;
}

