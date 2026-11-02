// rea decompile_all
// name: FUN_00490210
// address: 0x490210
// body: available
// range: 0x490210-0x49039b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490210(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcbb6;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::DragAndDropContainer::DragImageComponent::vftable;
  in_ECX[0x1c] = juce::DragAndDropContainer::DragImageComponent::vftable;
  if (*(undefined4 **)(in_ECX[0x2b] + 4) == in_ECX) {
    *(undefined4 *)(in_ECX[0x2b] + 4) = 0;
  }
  if ((in_ECX[0x2c] != 0) && (*(int *)(in_ECX[0x2c] + 8) != 0)) {
    if (in_ECX[0x2c] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX[0x2c] + 8);
    }
    if (*(int *)(iVar4 + 0x44) != 0) {
      FUN_0048cf90(in_ECX);
    }
    local_8 = 0;
    if (in_ECX[0x2d] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(in_ECX[0x2d] + 8);
    }
    piVar6 = (int *)FUN_006f6dd6(uVar5,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::DragAndDropTarget::RTTI_Type_Descriptor,0,uVar3);
    local_8 = 0xffffffff;
    if (piVar6 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar6 + 4))(in_ECX + 0x22);
      if (cVar2 != '\0') {
        (**(code **)(*piVar6 + 0x10))(in_ECX + 0x22);
      }
    }
  }
  if (*(code **)(*(int *)in_ECX[0x2b] + 0x10) != FUN_006e4820) {
    (**(code **)(*(int *)in_ECX[0x2b] + 0x10))();
  }
  puVar1 = (undefined4 *)in_ECX[0x2d];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = puVar1 + 1;
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x2c];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = puVar1 + 1;
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x2a];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = puVar1 + 1;
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x26];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = puVar1 + 1;
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  (**(code **)(*(int *)in_ECX[0x22] + 0x54))(in_ECX + 0x24);
  in_ECX[0x1c] = juce::Timer::vftable;
  FUN_0063eab0();
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

