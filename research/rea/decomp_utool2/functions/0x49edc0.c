// rea decompile_all
// name: FUN_0049edc0
// address: 0x49edc0
// body: available
// range: 0x49edc0-0x49eec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049edc0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702fb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00688370(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x28] = juce::Timer::vftable;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *in_ECX = juce::Slider::Pimpl::PopupDisplayComponent::vftable;
  in_ECX[0x28] = juce::Slider::Pimpl::PopupDisplayComponent::vftable;
  in_ECX[0x2d] = param_1;
  iVar2 = FUN_006e9580();
  (**(code **)(*(int *)(iVar2 + 0x2c) + 0x24))(in_ECX + 0x2e,param_1);
  in_ECX[0x2f] = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_006d1c90(1);
  iVar2 = FUN_006e9580();
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x2c) + 0x28);
  if (pcVar1 == FUN_006dad30) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = (*pcVar1)(param_1);
  }
  in_ECX[0x22] = uVar3;
  iVar2 = FUN_006e9580();
  if (in_ECX[0xd] != iVar2) {
    in_ECX[0xd] = iVar2;
    FUN_006e9490();
  }
  ExceptionList = local_10;
  return;
}

