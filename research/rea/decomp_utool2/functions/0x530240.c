// rea decompile_all
// name: FUN_00530240
// address: 0x530240
// body: available
// range: 0x530240-0x530426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00530240(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  undefined4 uStack_38;
  TypeDescriptor *pTStack_34;
  TypeDescriptor *pTStack_30;
  TypeDescriptor *pTStack_2c;
  uint uStack_28;
  uint uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070cc31;
  local_10 = ExceptionList;
  uStack_24 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x68) == 0) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
  }
  uStack_28 = 0;
  pTStack_2c = &TVITargetBase::RTTI_Type_Descriptor;
  pTStack_30 = &juce::Component::RTTI_Type_Descriptor;
  pTStack_34 = (TypeDescriptor *)0x0;
  iVar2 = FUN_006f6dd6();
  local_8 = 0xffffffff;
  if (iVar2 == 0) goto LAB_005303f4;
  local_8 = 1;
  if (*(int *)(in_ECX + 0x68) == 0) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
  }
  uStack_28 = 0;
  pTStack_2c = &TVITargetBase::RTTI_Type_Descriptor;
  pTStack_30 = &juce::Component::RTTI_Type_Descriptor;
  pTStack_34 = (TypeDescriptor *)0x0;
  iVar2 = FUN_006f6dd6();
  local_8 = 0xffffffff;
  iVar2 = *(int *)(iVar2 + 0x178);
  uStack_28 = 0x5302e9;
  uStack_28 = FUN_0052ff90();
  uStack_28 = uStack_28 & 0xff;
  pTStack_2c = (TypeDescriptor *)0x5302f2;
  (**(code **)(iVar2 + 0x28))();
  local_8 = 2;
  if (*(int *)(in_ECX + 0x68) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
  }
  pTStack_2c = (TypeDescriptor *)0x0;
  pTStack_30 = &TVITargetBase::RTTI_Type_Descriptor;
  pTStack_34 = &juce::Component::RTTI_Type_Descriptor;
  uStack_38 = 0;
  iVar2 = FUN_006f6dd6(uVar3);
  if ((*(byte *)(iVar2 + 0x1e0) & 2) == 0) {
    local_8 = 3;
    if (*(int *)(in_ECX + 0x68) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
    }
    pTStack_2c = (TypeDescriptor *)0x0;
    pTStack_30 = &TVITargetBase::RTTI_Type_Descriptor;
    pTStack_34 = &juce::Component::RTTI_Type_Descriptor;
    uStack_38 = 0;
    iVar2 = FUN_006f6dd6(uVar3);
    local_8 = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x264) = 0;
    FUN_006e6400(&uStack_38);
    FUN_006ce9f0(1);
    if ((*(byte *)(iVar2 + 0x1e1) & 0x10) != 0) {
      *(byte *)(iVar2 + 0x1e1) = *(byte *)(iVar2 + 0x1e1) & 0xef;
      iVar2 = *(int *)(iVar2 + 0x184);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x69) & 0x10) != 0) goto LAB_005303b0;
        if (*(int *)(iVar2 + 0xc) != 0) {
          pTStack_2c = (TypeDescriptor *)0x5303a5;
          cVar1 = FUN_006e6320();
          if (cVar1 == '\0') goto LAB_005303b0;
        }
      }
      pTStack_2c = (TypeDescriptor *)0x5303b0;
      FUN_006cc240();
    }
LAB_005303b0:
    *(undefined4 *)(in_ECX + 0x58) = 0;
  }
  local_8 = 4;
  if (*(int *)(in_ECX + 0x68) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
  }
  pTStack_2c = (TypeDescriptor *)0x0;
  pTStack_30 = &TVITargetBase::RTTI_Type_Descriptor;
  pTStack_34 = &juce::Component::RTTI_Type_Descriptor;
  uStack_38 = 0;
  piVar4 = (int *)FUN_006f6dd6(uVar3);
  local_8 = 0xffffffff;
  pTStack_2c = (TypeDescriptor *)0x5303f4;
  (**(code **)(*piVar4 + 0x84))();
LAB_005303f4:
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uStack_28 = 0x53040f;
      FUN_00530240();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x14));
  }
  ExceptionList = local_10;
  return;
}

