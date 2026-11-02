// rea decompile_all
// name: FUN_0040a170
// address: 0x40a170
// body: available
// range: 0x40a170-0x40a3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a170(undefined4 param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined3 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc1e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::ChangeListener::vftable;
  in_ECX[0x1d] = juce::ComboBox::Listener::vftable;
  puVar1 = in_ECX + 0x1e;
  *puVar1 = juce::Button::Listener::vftable;
  *in_ECX = MyAudioDeviceSettingsPanel::vftable;
  in_ECX[0x1c] = MyAudioDeviceSettingsPanel::vftable;
  in_ECX[0x1d] = MyAudioDeviceSettingsPanel::vftable;
  *puVar1 = MyAudioDeviceSettingsPanel::vftable;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = param_1;
  *(undefined8 *)(in_ECX + 0x22) = *param_2;
  in_ECX[0x24] = *(undefined4 *)(param_2 + 1);
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  local_8._1_3_ = 0;
  uVar4 = local_8._1_3_;
  local_8._0_1_ = 0x13;
  local_8._1_3_ = 0;
  *(undefined1 *)(in_ECX + 0x1f) = 1;
  if ((char)param_3 != '\0') {
    puVar5 = operator_new(0xe0);
    local_8._0_1_ = 0x14;
    uVar6 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_006e3660(uVar6);
    *puVar5 = juce::TextButton::vftable;
    puVar5[0x1c] = juce::TextButton::vftable;
    local_8 = 0x16;
    puVar3 = (undefined4 *)in_ECX[0x31];
    if ((puVar3 != puVar5) && (in_ECX[0x31] = puVar5, puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    piVar7 = (int *)in_ECX[0x31];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x28))(1);
      FUN_006e5050(piVar7,0xffffffff);
    }
    local_8._0_1_ = 0x13;
    local_8._1_3_ = 0;
    piVar7 = (int *)(param_3 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    uVar4 = local_8._1_3_;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004097d0(puVar1);
      uVar4 = local_8._1_3_;
    }
  }
  local_8._1_3_ = uVar4;
  (*(code *)**(undefined4 **)in_ECX[0x21])();
  if (in_ECX + 0x1c != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1c);
  }
  ExceptionList = local_10;
  return;
}

