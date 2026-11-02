// rea decompile_all
// name: FUN_0052f570
// address: 0x52f570
// body: available
// range: 0x52f570-0x52f77e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f570(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070cb65;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x68) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
  }
  iVar1 = FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,
                       &TVITargetBase::RTTI_Type_Descriptor);
  if (iVar1 == 0) goto LAB_0052f65a;
  if (param_1 == 0) {
    piVar2 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_8 = 2;
    uVar4 = DAT_00c7ef94;
    if (*(int *)(in_ECX + 0x68) == 0) goto LAB_0052f633;
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
  }
  else {
    piVar2 = (int *)(*(int *)(in_ECX + 100) + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_8 = 1;
    uVar4 = *(undefined4 *)(in_ECX + 0x60);
    if (*(int *)(in_ECX + 0x68) == 0) {
LAB_0052f633:
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
    }
  }
  FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,&TVITargetBase::RTTI_Type_Descriptor,0
               ,uVar4);
  local_8 = 0xffffffff;
  FUN_0052e7d0(uVar4);
LAB_0052f65a:
  if ((*(int *)(in_ECX + 0x3c) == 0) || (*(int *)(*(int *)(in_ECX + 0x3c) + 0x44) == 0)) {
    *(int *)(in_ECX + 0x58) = param_1;
    local_8 = 5;
    if (*(int *)(in_ECX + 0x68) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
    }
    iVar1 = FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,
                         &TVITargetBase::RTTI_Type_Descriptor);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_8 = 6;
    if (*(int *)(in_ECX + 0x68) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
    }
    FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,&TVITargetBase::RTTI_Type_Descriptor
                );
  }
  else {
    *(undefined4 *)(in_ECX + 0x58) = 0;
    local_8 = 3;
    if (*(int *)(in_ECX + 0x68) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
    }
    iVar1 = FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,
                         &TVITargetBase::RTTI_Type_Descriptor);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_8 = 4;
    if (*(int *)(in_ECX + 0x68) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
    }
    FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,&TVITargetBase::RTTI_Type_Descriptor
                );
    param_1 = *(int *)(in_ECX + 0x58);
  }
  local_8 = 0xffffffff;
  FUN_0052e890(param_1);
  ExceptionList = local_10;
  return;
}

