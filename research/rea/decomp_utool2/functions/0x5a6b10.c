// rea decompile_all
// name: FUN_005a6b10
// address: 0x5a6b10
// body: available
// range: 0x5a6b10-0x5a6d69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a6b10(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = DAT_00c8a5e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717756;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = PanelImportComponent::vftable;
  in_ECX[0x1c] = PanelImportComponent::vftable;
  in_ECX[0x1d] = PanelImportComponent::vftable;
  in_ECX[0x1e] = PanelImportComponent::vftable;
  in_ECX[0x1f] = PanelImportComponent::vftable;
  in_ECX[0x20] = PanelImportComponent::vftable;
  in_ECX[0x21] = PanelImportComponent::vftable;
  in_ECX[0x22] = PanelImportComponent::vftable;
  if (iVar4 != 0) {
    FUN_005b5d40(0x2000);
    if (DAT_00c8a5e4 != 0) {
      FUN_005b5d40(0x1000);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x86d));
  puVar2 = (undefined4 *)in_ECX[0x874];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x874] = 0;
    LOCK();
    piVar1 = puVar2 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x86d));
  FUN_0041c990();
  FID_conflict__free((void *)in_ECX[0xb1a]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0xb17]);
  if ((undefined4 *)in_ECX[0xb15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xb15])(1);
  }
  FUN_006e4a60();
  in_ECX[0xaa9] = juce::TextButton::vftable;
  in_ECX[0xac5] = juce::TextButton::vftable;
  FUN_006e3470();
  in_ECX[0xa71] = juce::ToggleButton::vftable;
  in_ECX[0xa8d] = juce::ToggleButton::vftable;
  FUN_006e3470();
  in_ECX[0xa39] = juce::TextButton::vftable;
  in_ECX[0xa55] = juce::TextButton::vftable;
  FUN_006e3470();
  FUN_004f86a0();
  FUN_005a4dd0();
  FUN_0052dcd0();
  FUN_005532c0();
  FUN_004f9930();
  FUN_004f9930();
  FUN_005a17f0();
  in_ECX[0x22] = PushButton::Listener::vftable;
  in_ECX[0x21] = ImportTask::Listener::vftable;
  in_ECX[0x20] = TargetExplorer::Listener::vftable;
  in_ECX[0x1f] = juce::ChangeListener::vftable;
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  in_ECX[0x1d] = ImportHeadComponent::Listener::vftable;
  local_8 = 0;
  puVar2 = in_ECX + 0x1c;
  *puVar2 = GlobalNotifierListener::vftable;
  iVar4 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  local_14 = puVar2;
  uVar3 = FUN_00447770(&local_14);
  if (uVar3 < *(uint *)(iVar4 + 0x14)) {
    FUN_00410320(uVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  *puVar2 = juce::ActionListener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

