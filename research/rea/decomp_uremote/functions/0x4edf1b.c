// rea decompile_all
// name: FUN_004edf1b
// address: 0x4edf1b
// body: available
// range: 0x4edf1b-0x4edf87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004edf1b(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  undefined4 extraout_EDX;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(in_ECX + 8) + 8);
  }
  if (iVar3 != 0) {
    iVar3 = in_ECX + 0xc;
    cVar1 = FUN_004ede16();
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_005cdbcf(extraout_EDX,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
      uVar5 = *(undefined4 *)(in_ECX + 0x20);
      iVar3 = in_ECX + 0x18;
      uVar4 = *(undefined4 *)(in_ECX + 0x1c);
    }
    else {
      piVar2 = (int *)FUN_005cdbcf(extraout_EDX,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
      uVar5 = *(undefined4 *)(in_ECX + 0x20);
      uVar4 = *(undefined4 *)(in_ECX + 0x1c);
    }
    (**(code **)(*piVar2 + 0x14))(iVar3,uVar4,uVar5);
  }
  return;
}

