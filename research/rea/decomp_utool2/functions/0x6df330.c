// rea decompile_all
// name: FUN_006df330
// address: 0x6df330
// body: available
// range: 0x6df330-0x6df40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006df330(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727f67;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006e8060(param_1,in_ECX);
  puVar2 = in_ECX + 0x2b;
  *puVar2 = juce::ListBoxModel::vftable;
  in_ECX[0x2c] = juce::TableHeaderComponent::Listener::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *in_ECX = juce::TableListBox::vftable;
  in_ECX[0x1c] = juce::TableListBox::vftable;
  *puVar2 = juce::TableListBox::vftable;
  in_ECX[0x2c] = juce::TableListBox::vftable;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  *(undefined1 *)(in_ECX + 0x30) = 1;
  in_ECX[0x1e] = puVar2;
  puVar2 = operator_new(0xbc);
  local_8._0_1_ = 3;
  FUN_006992d0(uVar1);
  *puVar2 = juce::TableListBox::Header::vftable;
  puVar2[0x1c] = juce::TableListBox::Header::vftable;
  puVar2[0x2e] = in_ECX;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00697830(puVar2);
  ExceptionList = local_10;
  return;
}

