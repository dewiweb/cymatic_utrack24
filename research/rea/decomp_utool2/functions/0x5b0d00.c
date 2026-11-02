// rea decompile_all
// name: FUN_005b0d00
// address: 0x5b0d00
// body: available
// range: 0x5b0d00-0x5b0dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0d00(void)

{
  undefined4 uVar1;
  int iVar2;
  int *_Memory;
  int local_28;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00718a1c;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = &PTR_vftable_00c7ed34;
  local_8 = 0;
  FUN_0045c990("ImportSplitAtMarkers",local_14);
  local_8._0_1_ = 2;
  uVar1 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FUN_006f6dd6(uVar1,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar2 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_006323b0(&local_28,local_24);
  _Memory = (int *)(local_28 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

