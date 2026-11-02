// rea decompile_all
// name: FUN_0040a960
// address: 0x40a960
// body: available
// range: 0x40a960-0x40ab22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a960(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc258;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("Please wait...",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0045c990("Changing audio settings");
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_006e6f80(&local_14,&local_18,3,param_1);
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  in_ECX[0x58] = juce::Timer::vftable;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = juce::ChangeListener::vftable;
  *in_ECX = MyAudioDeviceSettingsPanel::WaitForChangeAlertWindow::vftable;
  in_ECX[0x1e] = MyAudioDeviceSettingsPanel::WaitForChangeAlertWindow::vftable;
  in_ECX[0x58] = MyAudioDeviceSettingsPanel::WaitForChangeAlertWindow::vftable;
  in_ECX[0x5d] = MyAudioDeviceSettingsPanel::WaitForChangeAlertWindow::vftable;
  FUN_005ced70();
  in_ECX[0x79] = &DAT_00bfe12c;
  local_8._0_1_ = 8;
  in_ECX[0x5e] = 0;
  FUN_0045c990(&DAT_00c0723c);
  local_8 = CONCAT31(local_8._1_3_,9);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_34 = 0x1b;
  local_30 = 0;
  local_2c = 0;
  FUN_006e6ce0(&param_1,1,&local_34,&local_28);
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

