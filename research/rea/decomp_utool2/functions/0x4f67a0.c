// rea decompile_all
// name: FUN_004f67a0
// address: 0x4f67a0
// body: available
// range: 0x4f67a0-0x4f6869 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f67a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007062fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::Button::Listener::vftable;
  in_ECX[0x1d] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1e] = &DAT_00bfe12c;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *in_ECX = BaseListItem_WithCheckBoxButton::vftable;
  *puVar1 = BaseListItem_WithCheckBoxButton::vftable;
  in_ECX[0x1d] = BaseListItem_WithCheckBoxButton::vftable;
  in_ECX[0x1f] = param_1;
  in_ECX[0x20] = 0xffffffff;
  *(undefined1 *)((int)in_ECX + 0x85) = 0;
  FUN_004f7780();
  local_8 = CONCAT31(local_8._1_3_,3);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
  }
  (**(code **)(in_ECX[0x22] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x22,0xffffffff);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x38;
  ExceptionList = local_10;
  return;
}

