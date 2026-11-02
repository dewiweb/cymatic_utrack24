// rea decompile_all
// name: FUN_004ede50
// address: 0x4ede50
// body: available
// range: 0x4ede50-0x4ede9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ede50(undefined4 param_1)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  
  cVar1 = FUN_004ede16();
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_005cdbcf(param_1,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
    in_EAX = in_EAX + 0xc;
  }
  else {
    piVar2 = (int *)FUN_005cdbcf(param_1,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
  }
  (**(code **)(*piVar2 + 4))(in_EAX);
  return;
}

