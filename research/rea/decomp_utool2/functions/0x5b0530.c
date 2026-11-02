// rea decompile_all
// name: FUN_005b0530
// address: 0x5b0530
// body: available
// range: 0x5b0530-0x5b05fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005b0530(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *_Memory;
  undefined4 in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007188c0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00637690(in_ECX);
  uVar7 = 0;
  uVar6 = *puVar3;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uVar4 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,uVar6,0,uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  iVar5 = FUN_006f6dd6(uVar4,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar5 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  uVar1 = FUN_0062e490(uVar6,uVar7);
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar5 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return uVar1;
}

