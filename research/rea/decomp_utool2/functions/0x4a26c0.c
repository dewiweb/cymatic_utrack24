// rea decompile_all
// name: FUN_004a26c0
// address: 0x4a26c0
// body: available
// range: 0x4a26c0-0x4a27cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a26c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070344f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(char *)(param_1 + 0x3d) != '\0') && (*(char *)(in_ECX + 0x70) == '\0')) {
    *(undefined1 *)(in_ECX + 0x70) = 1;
    iVar1 = FUN_004b1810(local_14);
    if (iVar1 != 0) {
      local_24[0] = &PTR_vftable_00c7ed4c;
      local_8 = 0;
      FUN_0045c990("_toolbarItem_");
      local_8 = 1;
      FUN_006e3f40(local_24,*(undefined4 *)(in_ECX + 0xc),0,1,0);
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      local_8 = 2;
      piVar2 = (int *)FUN_006f6dd6(*(undefined4 *)(in_ECX + 0xc),0,
                                   &juce::Component::RTTI_Type_Descriptor,
                                   &juce::ToolbarItemComponent::RTTI_Type_Descriptor,0);
      local_8 = 0xffffffff;
      if ((piVar2 != (int *)0x0) && (*(undefined1 *)((int)piVar2 + 0xf9) = 1, piVar2[0x39] == 1)) {
        (**(code **)(*piVar2 + 0x28))(0);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

