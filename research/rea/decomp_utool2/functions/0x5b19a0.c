// rea decompile_all
// name: FUN_005b19a0
// address: 0x5b19a0
// body: available
// range: 0x5b19a0-0x5b1d29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b19a0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00718cbe;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcVar4 = "SetVersion";
  local_8 = 0;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"SetVersion",uVar1);
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "TargetDeviceConfiguration";
  local_8 = 1;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"TargetDeviceConfiguration",
                       uVar1);
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "AudioFileLibraryPath";
  local_8 = 2;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"AudioFileLibraryPath");
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "ProjectLibraryPath2";
  local_8 = 3;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"ProjectLibraryPath2");
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "ImportFileSplitSize";
  local_8 = 4;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"ImportFileSplitSize");
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "ImportSplitAtMarkers";
  local_8 = 5;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"ImportSplitAtMarkers");
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "FixedDriveListDefined";
  local_8 = 6;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"FixedDriveListDefined");
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "AudioSettings";
  local_8 = 7;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"AudioSettings");
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  pcVar4 = "ShowOnlyTakes";
  local_8 = 8;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"ShowOnlyTakes");
  local_8 = 0xffffffff;
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_0062e210(pcVar4);
  ExceptionList = local_10;
  return;
}

