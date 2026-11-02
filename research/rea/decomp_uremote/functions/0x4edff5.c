// rea decompile_all
// name: FUN_004edff5
// address: 0x4edff5
// body: available
// range: 0x4edff5-0x4ee1b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004edff5(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_EDX;
  undefined4 local_20;
  undefined4 local_1c;
  int local_c;
  
  FUN_004f4b4e();
  iVar3 = FUN_004c0f4a(*(undefined4 *)(in_EAX + 0x10),*(undefined4 *)(in_EAX + 0x14));
  if (*(int *)(param_1 + 0x24) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(*(int *)(param_1 + 0x24) + 8);
  }
  iVar4 = local_c;
  if (iVar3 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = iVar3;
    iVar4 = FUN_004ede9c();
    if (iVar4 != local_c) {
      if (local_c != 0) {
        cVar1 = FUN_004ede16();
        if (cVar1 == '\0') {
          piVar5 = (int *)FUN_005cdbcf(extraout_EDX,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
        }
        else {
          piVar5 = (int *)FUN_005cdbcf(extraout_EDX,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
        }
        (**(code **)(*piVar5 + 0x10))();
      }
      FUN_004a4d78();
      cVar1 = FUN_004ede1f(iVar4);
      if (cVar1 != '\0') {
        FUN_004f77e9();
        FUN_004a4d78();
        FUN_004c08d2(iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(in_EAX + 0x10),
                     *(undefined4 *)(in_EAX + 0x14));
        cVar1 = FUN_004ede16();
        if (cVar1 == '\0') {
          piVar5 = (int *)FUN_005cdbcf(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
        }
        else {
          piVar5 = (int *)FUN_005cdbcf(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
        }
        (**(code **)(*piVar5 + 8))();
      }
    }
  }
  cVar1 = FUN_004ede1f(iVar4);
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_004c08d2(iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(in_EAX + 0x10),
                 *(undefined4 *)(in_EAX + 0x14));
    cVar1 = FUN_004ede16();
    if (cVar1 == '\0') {
      piVar5 = (int *)FUN_005cdbcf(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
      in_EAX = in_EAX + 0xc;
    }
    else {
      piVar5 = (int *)FUN_005cdbcf(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
    }
    (**(code **)(*piVar5 + 0xc))(in_EAX,local_20,local_1c);
    uVar2 = 1;
  }
  return uVar2;
}

