// rea decompile_all
// name: FUN_0068c490
// address: 0x68c490
// body: available
// range: 0x68c490-0x68c6e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0068c490(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  TypeDescriptor *pTVar6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  DAT_00c8a9c8 = DAT_00c8a9dc;
  iVar2 = FUN_006cf2f0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
  }
  iVar3 = iVar5;
  if (iVar2 != *(int *)(in_ECX + 0x28)) {
    *(int *)(in_ECX + 0x28) = iVar2;
    iVar3 = FUN_0068c6f0(iVar5);
    if (iVar3 != iVar5) {
      if (iVar5 != 0) {
        if (*(int *)(param_1 + 8) < 1) {
          piVar4 = (int *)FUN_006f6dd6(iVar5,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
          iVar2 = param_1 + 0xc;
        }
        else {
          piVar4 = (int *)FUN_006f6dd6(iVar5,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
          iVar2 = param_1;
        }
        (**(code **)(*piVar4 + 0x10))(iVar2);
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x24);
      if (puVar1 != (undefined4 *)0x0) {
        *(int *)(in_ECX + 0x24) = 0;
        LOCK();
        piVar4 = puVar1 + 1;
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar1)(1);
        }
      }
      if (*(int *)(param_1 + 8) < 1) {
        pTVar6 = &juce::TextDragAndDropTarget::RTTI_Type_Descriptor;
      }
      else {
        pTVar6 = &juce::FileDragAndDropTarget::RTTI_Type_Descriptor;
      }
      iVar2 = FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,pTVar6,0);
      if (iVar2 != 0) {
        FUN_0040dc80(iVar3);
        FUN_004b0b90(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x14));
        if (*(int *)(param_1 + 8) < 1) {
          piVar4 = (int *)FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
          (**(code **)(*piVar4 + 8))(param_1 + 0xc,uStack_18,uStack_14);
        }
        else {
          piVar4 = (int *)FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                       &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
          (**(code **)(*piVar4 + 8))(param_1,uStack_18,uStack_14);
        }
      }
    }
  }
  if (*(int *)(param_1 + 8) < 1) {
    pTVar6 = &juce::TextDragAndDropTarget::RTTI_Type_Descriptor;
  }
  else {
    pTVar6 = &juce::FileDragAndDropTarget::RTTI_Type_Descriptor;
  }
  iVar2 = FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,pTVar6,0);
  if (iVar2 != 0) {
    FUN_004b0b90(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 8) < 1) {
      piVar4 = (int *)FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::TextDragAndDropTarget::RTTI_Type_Descriptor,0);
      (**(code **)(*piVar4 + 0xc))(param_1 + 0xc,uStack_10,uStack_c);
      return 1;
    }
    piVar4 = (int *)FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::FileDragAndDropTarget::RTTI_Type_Descriptor,0);
    (**(code **)(*piVar4 + 0xc))(param_1,uStack_10,uStack_c);
    return 1;
  }
  return 0;
}

