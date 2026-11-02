// rea decompile_all
// name: FUN_006e8840
// address: 0x6e8840
// body: available
// range: 0x6e8840-0x6e89b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e8840(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728c27;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006cfeb0(param_1);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::Label::Listener::vftable;
  puVar1 = in_ECX + 0x1f;
  *puVar1 = juce::Value::Listener::vftable;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_0063ea10(uVar2);
  *in_ECX = juce::ComboBox::vftable;
  in_ECX[0x1c] = juce::ComboBox::vftable;
  in_ECX[0x1e] = juce::ComboBox::vftable;
  *puVar1 = juce::ComboBox::vftable;
  in_ECX[0x20] = juce::ComboBox::vftable;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  local_8._0_1_ = 5;
  FUN_0063b600();
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = &DAT_00bfe12c;
  local_8._0_1_ = 9;
  FUN_00637250();
  local_8 = CONCAT31(local_8._1_3_,10);
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 8;
  in_ECX[0x32] = 0;
  FUN_0069abb0();
  if (puVar1 != (undefined4 *)0x0) {
    if (in_ECX[0x28] == 0) {
      param_1 = in_ECX + 0x25;
      FUN_00447220(&param_1);
    }
    FUN_004097d0(puVar1);
  }
  ExceptionList = local_10;
  return;
}

