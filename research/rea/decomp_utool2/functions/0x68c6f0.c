// rea decompile_all
// name: FUN_0068c6f0
// address: 0x68c6f0
// body: available
// range: 0x68c6f0-0x68c791 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0068c6f0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int in_EDX;
  TypeDescriptor *pTVar4;
  
  do {
    if (in_ECX == 0) {
      return 0;
    }
    if (*(int *)(in_EDX + 8) < 1) {
      pTVar4 = &juce::TextDragAndDropTarget::RTTI_Type_Descriptor;
    }
    else {
      pTVar4 = &juce::FileDragAndDropTarget::RTTI_Type_Descriptor;
    }
    iVar2 = FUN_006f6dd6(in_ECX,0,&juce::Component::RTTI_Type_Descriptor,pTVar4,0);
    if (iVar2 != 0) {
      if (in_ECX == param_1) {
        return in_ECX;
      }
      if (*(int *)(in_EDX + 8) < 1) {
        piVar3 = (int *)FUN_006f6dd6(in_ECX,0,&juce::Component::RTTI_Type_Descriptor,
                                     &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
      }
      else {
        piVar3 = (int *)FUN_006f6dd6(in_ECX,0,&juce::Component::RTTI_Type_Descriptor,
                                     &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
      }
      cVar1 = (**(code **)(*piVar3 + 4))();
      if (cVar1 != '\0') {
        return in_ECX;
      }
    }
    in_ECX = *(int *)(in_ECX + 0xc);
  } while( true );
}

