// rea decompile_all
// name: FUN_0068c210
// address: 0x68c210
// body: available
// range: 0x68c210-0x68c3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0068c210(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  TypeDescriptor *pTVar7;
  void *local_34 [3];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007213f0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0068c490(param_1);
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
  }
  if (iVar6 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  puVar5 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    LOCK();
    piVar4 = puVar5 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar5)(1,uVar2);
    }
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  if (*(int *)(param_1 + 8) < 1) {
    pTVar7 = &juce::TextDragAndDropTarget::RTTI_Type_Descriptor;
  }
  else {
    pTVar7 = &juce::FileDragAndDropTarget::RTTI_Type_Descriptor;
  }
  iVar3 = FUN_006f6dd6(iVar6,0,&juce::Component::RTTI_Type_Descriptor,pTVar7,0);
  if (iVar3 != 0) {
    cVar1 = FUN_006ceda0();
    if (cVar1 != '\0') {
      piVar4 = (int *)FUN_006cecc0();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xa0))();
      }
      cVar1 = FUN_006ceda0();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    FUN_0041b050(param_1);
    local_28 = *(int *)(param_1 + 0xc);
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_24 = *(undefined4 *)(param_1 + 0x10);
    local_20 = *(undefined4 *)(param_1 + 0x14);
    local_8 = 0;
    puVar5 = (undefined4 *)
             FUN_006e1ae0(local_1c,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14));
    local_24 = *puVar5;
    local_20 = puVar5[1];
    operator_new(0x24);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004a4970(iVar6,local_34);
    FUN_0063e270();
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_0040f7f0();
    FID_conflict__free(local_34[0]);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

