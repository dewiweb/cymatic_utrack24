// rea decompile_all
// name: FUN_00497a30
// address: 0x497a30
// body: available
// range: 0x497a30-0x497aa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00497a30(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x68) & 2) != 0) {
    if (*(int *)(in_ECX + 0xac) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(in_ECX + 0xac) + 8);
    }
    if (iVar3 == *(int *)(in_ECX + 0x84)) {
      uVar2 = FUN_006cecc0(0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::PopupMenu::HelperClasses::MenuWindow::RTTI_Type_Descriptor,0);
      iVar3 = FUN_006f6dd6(uVar2);
      if ((iVar3 != 0) && (cVar1 = FUN_00497e80(iVar3), cVar1 == '\0')) {
        return 0;
      }
      return 1;
    }
    if (*(int *)(in_ECX + 0x70) != 0) {
      FUN_004974d0(0);
      return 0;
    }
    FUN_004973b0(0,0);
  }
  return 0;
}

