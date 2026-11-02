// rea decompile_all
// name: FUN_00498ad0
// address: 0x498ad0
// body: available
// range: 0x498ad0-0x498cb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498ad0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  int in_ECX;
  bool bVar6;
  undefined4 uStack_38;
  TypeDescriptor *pTStack_34;
  TypeDescriptor *pTStack_30;
  int iStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070282c;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0xd8) != 0) && (*(int *)(*(int *)(in_ECX + 0xd8) + 8) != 0)) {
    local_8 = 0;
    if (*(int *)(in_ECX + 0xd8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 8);
    }
    iStack_2c = 0;
    pTStack_30 = &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor;
    pTStack_34 = &juce::Component::RTTI_Type_Descriptor;
    uStack_38 = 0;
    iVar3 = FUN_006f6dd6(uVar4);
    local_8 = 0xffffffff;
    if (*(char *)(iVar3 + 0x9c) != '\0') {
      *(undefined1 *)(iVar3 + 0x9c) = 0;
      if (*(int *)(iVar3 + 0x98) != 0) {
        *(undefined1 *)(*(int *)(iVar3 + 0x98) + 0x78) = 0;
        FUN_006e6400(&uStack_38);
        FUN_006ce9f0(1);
      }
      FUN_006e6400(&uStack_38);
      FUN_006ce9f0(1);
    }
  }
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iStack_2c = param_1;
    pTStack_30 = (TypeDescriptor *)0x498b9d;
    iVar3 = FUN_0040de70();
  }
  if (*(int *)(in_ECX + 0xd8) != iVar3) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xd8);
    *(int *)(in_ECX + 0xd8) = iVar3;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar2 + 1;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        iStack_2c = 1;
        pTStack_30 = (TypeDescriptor *)0x498bd7;
        (**(code **)*puVar2)();
      }
    }
  }
  if ((*(int *)(in_ECX + 0xd8) != 0) && (*(int *)(*(int *)(in_ECX + 0xd8) + 8) != 0)) {
    local_8 = 1;
    if (*(int *)(in_ECX + 0xd8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 8);
    }
    iStack_2c = 0;
    pTStack_30 = &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor;
    pTStack_34 = &juce::Component::RTTI_Type_Descriptor;
    uStack_38 = 0;
    iVar3 = FUN_006f6dd6(uVar4);
    local_8 = 0xffffffff;
    bVar6 = *(char *)(iVar3 + 0x94) != '\0';
    if ((bool)*(char *)(iVar3 + 0x9c) != bVar6) {
      *(bool *)(iVar3 + 0x9c) = bVar6;
      if (*(int *)(iVar3 + 0x98) != 0) {
        *(bool *)(*(int *)(iVar3 + 0x98) + 0x78) = bVar6;
        FUN_006e6400(&uStack_38);
        FUN_006ce9f0(1);
      }
      FUN_006e6400(&uStack_38);
      FUN_006ce9f0(1);
    }
    if (DAT_00c8a644 == 0) {
      iStack_2c = 0x498c84;
      DVar5 = timeGetTime();
      if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
        DAT_00c8a644 = DVar5;
      }
    }
    *(uint *)(in_ECX + 0xf4) = DAT_00c8a644;
  }
  ExceptionList = local_10;
  return;
}

