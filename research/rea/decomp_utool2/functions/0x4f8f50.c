// rea decompile_all
// name: FUN_004f8f50
// address: 0x4f8f50
// body: available
// range: 0x4f8f50-0x4f9089 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8f50(void)

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
  puStack_c = &LAB_00706620;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = ExtDriveSelectorComponent::vftable;
  puVar1 = in_ECX + 0x1e;
  in_ECX[0x1c] = ExtDriveSelectorComponent::vftable;
  in_ECX[0x1d] = ExtDriveSelectorComponent::vftable;
  *puVar1 = ExtDriveSelectorComponent::vftable;
  in_ECX[0x1f] = ExtDriveSelectorComponent::vftable;
  if (iVar3 == 0) {
    operator_new(0x34);
    DAT_00c8a5e8 = FUN_005b6bb0();
  }
  FUN_00415ff0(in_ECX + 0x1c);
  FUN_004106d0(uVar2);
  FID_conflict__free((void *)in_ECX[0xf5]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xed));
  FUN_004f86a0();
  FUN_004f86a0();
  FUN_006e2980();
  in_ECX[0x1f] = PushButton::Listener::vftable;
  local_8 = 0;
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
  in_ECX[0x1d] = juce::ComboBox::Listener::vftable;
  in_ECX[0x1c] = PnPDetector::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

