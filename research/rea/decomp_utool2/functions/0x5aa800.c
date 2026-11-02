// rea decompile_all
// name: FUN_005aa800
// address: 0x5aa800
// body: available
// range: 0x5aa800-0x5aa8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aa800(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717d3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::ComponentListener::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *in_ECX = PanelSettingsComponent::ViewPane::AudioViewContent::vftable;
  *puVar1 = PanelSettingsComponent::ViewPane::AudioViewContent::vftable;
  in_ECX[0x1d] = param_1;
  uVar2 = FUN_0057fe20();
  FUN_004e8e50(puVar1,uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined1 *)(in_ECX + 0x46) = 0;
  if (in_ECX[0x40] != 0) {
    FUN_0040aff0();
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
  }
  (**(code **)(in_ECX[0x1e] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x1e,0xffffffff);
  if ((*(char *)(in_ECX + 0x46) == '\0') && (in_ECX[7] != in_ECX[0x25] + 0x1e)) {
    FUN_006e9790(in_ECX[4],in_ECX[5],in_ECX[6],in_ECX[0x25] + 0x1e);
    FUN_005aa8f0();
  }
  ExceptionList = local_10;
  return;
}

