// rea decompile_all
// name: FUN_00514380
// address: 0x514380
// body: available
// range: 0x514380-0x51454e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514380(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 *extraout_ECX;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070904e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = in_ECX + 0x1c;
  *in_ECX = PopupMixer::vftable;
  *puVar1 = PopupMixer::vftable;
  in_ECX[0x4c] = PopupMixer::vftable;
  in_ECX[0x4d] = PopupMixer::vftable;
  in_ECX[0x4e] = PopupMixer::vftable;
  puVar5 = (undefined4 *)in_ECX[0x222];
  if (puVar5 != (undefined4 *)0x0) {
    in_ECX[0x222] = 0;
    (**(code **)*puVar5)(1,uVar3);
  }
  if ((undefined4 *)in_ECX[0x222] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x222])(1);
  }
  local_8 = 0;
  in_ECX[0x1fd] = ViewSelector::vftable;
  in_ECX[0x219] = ViewSelector::vftable;
  FUN_006e6350();
  in_ECX[0x219] = juce::Button::Listener::vftable;
  FUN_006ea0b0();
  FUN_00583950();
  FUN_00583950();
  FUN_006e4a60();
  FUN_00515f00();
  FUN_00471a50();
  FID_conflict__free((void *)in_ECX[0x5a]);
  FUN_00471bf0();
  FID_conflict__free((void *)in_ECX[0x57]);
  piVar4 = (int *)(in_ECX[0x52] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar5 = (undefined4 *)in_ECX[0x50];
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar5 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar5)(1);
      puVar5 = extraout_ECX;
    }
  }
  in_ECX[0x4e] = PresetSelector::Listener::vftable;
  in_ECX[0x4d] = DSPMixerPanel::Listener::vftable;
  in_ECX[0x4c] = juce::Button::Listener::vftable;
  *in_ECX = BasePopupComponent::vftable;
  *puVar1 = BasePopupComponent::vftable;
  FUN_0040e370(in_ECX,puVar5);
  if (DAT_00c8a5d4 != 0) {
    FUN_00415ff0(puVar1);
  }
  FUN_004eb130();
  *puVar1 = juce::ComponentListener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

