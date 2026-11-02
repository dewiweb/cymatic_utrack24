// rea decompile_all
// name: FUN_00498e60
// address: 0x498e60
// body: available
// range: 0x498e60-0x498fa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498e60(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fc352;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0xd8) != 0) && (*(int *)(*(int *)(in_ECX + 0xd8) + 8) != 0)) {
    local_8 = 0;
    if (*(int *)(in_ECX + 0xd8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 8);
    }
    iVar2 = FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                         &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0,
                         uVar1);
    if (((*(char *)(iVar2 + 0x94) != '\0') && (*(int *)(iVar2 + 0x74) != 0)) &&
       (*(char *)(iVar2 + 0x97) == '\0')) {
      local_8 = 1;
      if (*(int *)(in_ECX + 0xd8) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 8);
      }
      iVar2 = FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0,
                           uVar1);
      local_8 = 0xffffffff;
      if ((*(int *)(iVar2 + 0x80) != 0) &&
         (iVar2 = FUN_004adf20(), *(char *)(*(int *)(iVar2 + 0x80) + 0x79) == '\0')) {
        ExceptionList = local_10;
        return;
      }
      local_8 = 2;
      if (*(int *)(in_ECX + 0xd8) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 8);
      }
      iVar2 = FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0,
                           uVar1);
      local_8 = 0xffffffff;
      FUN_004974d0(iVar2 + 0x70);
    }
  }
  ExceptionList = local_10;
  return;
}

