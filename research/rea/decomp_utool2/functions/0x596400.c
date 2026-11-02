// rea decompile_all
// name: FUN_00596400
// address: 0x596400
// body: available
// range: 0x596400-0x5966dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596400(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = DAT_00c8a5e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714ea7;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = PanelExportComponent::vftable;
  in_ECX[0x1c] = PanelExportComponent::vftable;
  in_ECX[0x1d] = PanelExportComponent::vftable;
  in_ECX[0x1e] = PanelExportComponent::vftable;
  in_ECX[0x1f] = PanelExportComponent::vftable;
  in_ECX[0x20] = PanelExportComponent::vftable;
  in_ECX[0x21] = PanelExportComponent::vftable;
  in_ECX[0x22] = PanelExportComponent::vftable;
  in_ECX[0x23] = PanelExportComponent::vftable;
  if (iVar4 != 0) {
    FUN_005b5d40(0x3000);
    if (DAT_00c8a5e4 != 0) {
      FUN_005b5d40(0x1000);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x683));
  puVar1 = (undefined4 *)in_ECX[0x68a];
  if (puVar1 != (undefined4 *)0x0) {
    in_ECX[0x68a] = 0;
    LOCK();
    piVar3 = puVar1 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x683));
  FUN_0041c990();
  FID_conflict__free((void *)in_ECX[0x9d3]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x9d0]);
  FUN_00407640();
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x9c7));
  piVar3 = (int *)(in_ECX[0x9c4] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_00599cb0();
  if ((undefined4 *)in_ECX[0x8f8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x8f8])(1);
  }
  FUN_004f86a0();
  FUN_004f86a0();
  FUN_005937a0();
  FUN_006e2980();
  FUN_006e4a60();
  in_ECX[0x79a] = juce::TextButton::vftable;
  in_ECX[0x7b6] = juce::TextButton::vftable;
  FUN_006e3470();
  in_ECX[0x762] = juce::TextButton::vftable;
  in_ECX[0x77e] = juce::TextButton::vftable;
  FUN_006e3470();
  in_ECX[0x72a] = juce::TextButton::vftable;
  in_ECX[0x746] = juce::TextButton::vftable;
  FUN_006e3470();
  FUN_0052dcd0();
  FUN_00518d80();
  FUN_005532c0();
  FUN_004f9930();
  FUN_004f9930();
  FUN_00592710();
  in_ECX[0x23] = juce::ComboBox::Listener::vftable;
  in_ECX[0x22] = PushButton::Listener::vftable;
  in_ECX[0x21] = ExportTask::Listener::vftable;
  in_ECX[0x20] = juce::ChangeListener::vftable;
  in_ECX[0x1f] = juce::Button::Listener::vftable;
  in_ECX[0x1e] = ProjectExplorer::Listener::vftable;
  in_ECX[0x1d] = ExportHeadComponent::Listener::vftable;
  local_8 = 0;
  puVar1 = in_ECX + 0x1c;
  *puVar1 = GlobalNotifierListener::vftable;
  iVar4 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  local_14 = puVar1;
  uVar2 = FUN_00447770(&local_14);
  if (uVar2 < *(uint *)(iVar4 + 0x14)) {
    FUN_00410320(uVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  *puVar1 = juce::ActionListener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

