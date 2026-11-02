// rea decompile_all
// name: FUN_005abb40
// address: 0x5abb40
// body: available
// range: 0x5abb40-0x5abcda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005abb40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = DAT_00c8a5e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717edd;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = PanelSettingsComponent::ViewPane::vftable;
  in_ECX[0x1c] = PanelSettingsComponent::ViewPane::vftable;
  in_ECX[0x1d] = PanelSettingsComponent::ViewPane::vftable;
  in_ECX[0x1e] = PanelSettingsComponent::ViewPane::vftable;
  in_ECX[0x1f] = PanelSettingsComponent::ViewPane::vftable;
  if (iVar3 == 0) {
    operator_new(0x34);
    DAT_00c8a5e8 = FUN_005b6bb0();
  }
  FUN_00415ff0(in_ECX + 0x1d);
  FUN_004f98b0(uVar2);
  FUN_004e8db0();
  in_ECX[0x4db] = juce::ComponentListener::vftable;
  FUN_006ea0b0();
  FUN_004f9930();
  FID_conflict__free((void *)in_ECX[0x48d]);
  FUN_004f9930();
  FUN_0040f530();
  FUN_006e4a60();
  FUN_0040f530();
  FUN_0040f530();
  FUN_004f9930();
  FUN_00407640();
  FUN_006e4a60();
  FUN_004f9930();
  local_8 = 0;
  puVar1 = in_ECX + 0x1f;
  *puVar1 = GlobalNotifierListener::vftable;
  iVar3 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  local_14 = puVar1;
  uVar2 = FUN_00447770(&local_14);
  if (uVar2 < *(uint *)(iVar3 + 0x14)) {
    FUN_00410320(uVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  *puVar1 = juce::ActionListener::vftable;
  in_ECX[0x1e] = FileSelector::Listener::vftable;
  in_ECX[0x1d] = PnPDetector::Listener::vftable;
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

