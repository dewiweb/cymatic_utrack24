// rea decompile_all
// name: FUN_0068d0a0
// address: 0x68d0a0
// body: available
// range: 0x68d0a0-0x68d120 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0068d0a0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  
  for (iVar1 = DAT_00c8a678; iVar1 != *(int *)(in_ECX + 4); iVar1 = *(int *)(iVar1 + 0xc)) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  }
  piVar3 = (int *)FUN_006f6dd6(DAT_00c8a678,0,&juce::Component::RTTI_Type_Descriptor,
                               &juce::TextInputTarget::RTTI_Type_Descriptor,0);
  if (piVar3 != (int *)0x0) {
    if ((undefined **)*piVar3 == juce::TextEditor::vftable) {
      if ((((char)piVar3[9] == '\0') && ((*(byte *)((int)piVar3 + -7) & 0x10) == 0)) &&
         ((piVar3[-0x19] == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar2 = (*(code *)((undefined **)*piVar3)[1])();
    }
    if (cVar2 != '\0') {
      return piVar3;
    }
  }
  return (int *)0x0;
}

