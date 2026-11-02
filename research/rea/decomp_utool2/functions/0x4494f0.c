// rea decompile_all
// name: FUN_004494f0
// address: 0x4494f0
// body: available
// range: 0x4494f0-0x44972d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004494f0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *in_ECX;
  int *piVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff2e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::ChangeListener::vftable;
  in_ECX[0x1d] = juce::ComboBox::Listener::vftable;
  puVar1 = in_ECX + 0x1e;
  *puVar1 = juce::Button::Listener::vftable;
  in_ECX[0x1f] = param_1;
  *in_ECX = juce::AudioDeviceSettingsPanel::vftable;
  in_ECX[0x1c] = juce::AudioDeviceSettingsPanel::vftable;
  in_ECX[0x1d] = juce::AudioDeviceSettingsPanel::vftable;
  *puVar1 = juce::AudioDeviceSettingsPanel::vftable;
  uVar8 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  in_ECX[0x20] = *param_2;
  in_ECX[0x21] = uVar8;
  in_ECX[0x22] = uVar4;
  in_ECX[0x23] = uVar5;
  *(undefined8 *)(in_ECX + 0x24) = *(undefined8 *)(param_2 + 4);
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
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  local_8._1_3_ = 0;
  uVar6 = local_8._1_3_;
  local_8._0_1_ = 0x14;
  local_8._1_3_ = 0;
  if ((char)param_3 != '\0') {
    puVar7 = operator_new(0xe0);
    local_8._0_1_ = 0x15;
    uVar8 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_006e3660(uVar8);
    *puVar7 = juce::TextButton::vftable;
    puVar7[0x1c] = juce::TextButton::vftable;
    local_8 = 0x17;
    puVar3 = (undefined4 *)in_ECX[0x33];
    if ((puVar3 != puVar7) && (in_ECX[0x33] = puVar7, puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    piVar9 = (int *)in_ECX[0x33];
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x28))(1);
      FUN_006e5050(piVar9,0xffffffff);
    }
    local_8._0_1_ = 0x14;
    local_8._1_3_ = 0;
    piVar9 = (int *)(param_3 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    uVar6 = local_8._1_3_;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004097d0(puVar1);
      uVar6 = local_8._1_3_;
    }
  }
  local_8._1_3_ = uVar6;
  (*(code *)**(undefined4 **)in_ECX[0x1f])();
  if (in_ECX + 0x1c != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1c);
  }
  ExceptionList = local_10;
  return;
}

