// rea decompile_all
// name: FUN_0057fe20
// address: 0x57fe20
// body: available
// range: 0x57fe20-0x57fff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057fe20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007127af;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,uVar2);
  local_8 = 0xffffffff;
  iVar4 = FUN_006f6dd6(uVar3,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(iVar4 + 0x100) == 0) {
    operator_new(0x228);
    local_8 = 1;
    puVar5 = (undefined4 *)FUN_005ce300();
    local_8 = 2;
    uVar3 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                         &juce::JUCEApplication::RTTI_Type_Descriptor,0,uVar2);
    local_8 = 0xffffffff;
    iVar4 = FUN_006f6dd6(uVar3,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                         &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
    puVar1 = *(undefined4 **)(iVar4 + 0x100);
    if ((puVar1 != puVar5) &&
       (*(undefined4 **)(iVar4 + 0x100) = puVar5, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    local_8 = 3;
    uVar3 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                         &juce::JUCEApplication::RTTI_Type_Descriptor,0);
    local_8 = 0xffffffff;
    iVar4 = FUN_006f6dd6(uVar3,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                         &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x18;
    }
    local_8 = 4;
    uVar3 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                         &juce::JUCEApplication::RTTI_Type_Descriptor,0);
    local_8 = 0xffffffff;
    FUN_006f6dd6(uVar3,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                 &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
    if (iVar4 != 0) {
      FUN_004097d0(iVar4);
    }
  }
  local_8 = 5;
  uVar3 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,uVar2);
  local_8 = 0xffffffff;
  iVar4 = FUN_006f6dd6(uVar3,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  ExceptionList = local_10;
  return *(undefined4 *)(iVar4 + 0x100);
}

