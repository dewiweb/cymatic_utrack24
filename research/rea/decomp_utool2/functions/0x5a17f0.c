// rea decompile_all
// name: FUN_005a17f0
// address: 0x5a17f0
// body: available
// range: 0x5a17f0-0x5a1a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a17f0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00716300;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = ImportHeadComponent::vftable;
  in_ECX[0x1c] = ImportHeadComponent::vftable;
  in_ECX[0x1d] = ImportHeadComponent::vftable;
  in_ECX[0x1e] = ImportHeadComponent::vftable;
  in_ECX[0x1f] = ImportHeadComponent::vftable;
  in_ECX[0x20] = ImportHeadComponent::vftable;
  local_8 = 0;
  local_14 = uVar1;
  puVar2 = (undefined4 *)FUN_0063bf80(local_24);
  (**(code **)(*(int *)*puVar2 + 0x14))(puVar2 + 2,uVar1);
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  local_8 = 0xffffffff;
  FUN_005b0d00();
  FUN_006e85c0();
  FUN_005b0e90();
  FUN_004f86a0();
  FUN_004f86a0();
  FUN_006e4a60();
  FUN_006e2980();
  FUN_006e4a60();
  in_ECX[0x66b] = juce::ToggleButton::vftable;
  in_ECX[0x687] = juce::ToggleButton::vftable;
  FUN_006e3470();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_0040f530();
  FUN_006e4a60();
  FUN_005aa4e0();
  FUN_006e4a60();
  FUN_00508010();
  FUN_006e4a60();
  in_ECX[0x51] = TableComponent::vftable;
  FUN_00407640();
  FUN_006ea0b0();
  FUN_004f9930();
  local_8 = 1;
  puVar2 = in_ECX + 0x20;
  *puVar2 = GlobalNotifierListener::vftable;
  iVar3 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  local_28 = puVar2;
  uVar1 = FUN_00447770(&local_28);
  if (uVar1 < *(uint *)(iVar3 + 0x14)) {
    FUN_00410320(uVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  *puVar2 = juce::ActionListener::vftable;
  in_ECX[0x1f] = PushButton::Listener::vftable;
  in_ECX[0x1e] = SessionSelectorComponent::Listener::vftable;
  in_ECX[0x1d] = FileSelector::Listener::vftable;
  in_ECX[0x1c] = TargetSelector::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

