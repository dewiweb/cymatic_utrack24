// rea decompile_all
// name: FUN_0044bb40
// address: 0x44bb40
// body: available
// range: 0x44bb40-0x44bc52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044bb40(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined1 **ppuStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ff83a;
  local_10 = ExceptionList;
  uStack_24 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  ppuStack_2c = &local_14;
  local_8 = 0;
  uStack_30 = 0x44bb84;
  FUN_006e8060();
  piVar1 = in_ECX + 0x2b;
  *piVar1 = (int)juce::ListBoxModel::vftable;
  *in_ECX = (int)juce::AudioDeviceSettingsPanel::ChannelSelectorListBox::vftable;
  in_ECX[0x1c] = (int)juce::AudioDeviceSettingsPanel::ChannelSelectorListBox::vftable;
  *piVar1 = (int)juce::AudioDeviceSettingsPanel::ChannelSelectorListBox::vftable;
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  iVar5 = param_1[3];
  in_ECX[0x2c] = *param_1;
  in_ECX[0x2d] = iVar3;
  in_ECX[0x2e] = iVar4;
  in_ECX[0x2f] = iVar5;
  uVar2 = *(undefined8 *)(param_1 + 4);
  in_ECX[0x32] = param_2;
  *(undefined8 *)(in_ECX + 0x30) = uVar2;
  iVar3 = *param_3;
  in_ECX[0x33] = iVar3;
  piVar6 = (int *)(iVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  uStack_28 = 0x44bc07;
  FUN_0044bc60();
  if ((int *)in_ECX[0x1e] != piVar1) {
    in_ECX[0x1e] = (int)piVar1;
    FUN_006e6400(auStack_34);
    FUN_006ce9f0(1);
    uStack_28 = 0x44bc2a;
    FUN_006e7e60();
  }
  in_ECX[0x25] = 1;
  uStack_28 = 0x44bc3e;
  (**(code **)(*in_ECX + 0x84))();
  ExceptionList = local_10;
  return;
}

