// rea decompile_all
// name: FUN_004a2a70
// address: 0x4a2a70
// body: available
// range: 0x4a2a70-0x4a2dc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a2a70(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  float fVar4;
  undefined1 *puStack_74;
  TypeDescriptor *pTStack_70;
  TypeDescriptor *pTStack_6c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007034b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = *(int *)(in_ECX + 0x18);
  local_14 = *(float *)(in_ECX + 0x1c);
  local_18 = (float)iVar3;
  if (*(char *)(in_ECX + 0x110) != '\0') {
    puStack_74 = &stack0xffffff98;
    pTStack_6c = (TypeDescriptor *)0x1;
    pTStack_70 = (TypeDescriptor *)0x1003210;
    FUN_006e8e70();
    pTStack_6c = (TypeDescriptor *)0x4a2acd;
    FUN_00684c50();
    pTStack_6c = &juce::Toolbar::RTTI_Type_Descriptor;
    pTStack_70 = &juce::Component::RTTI_Type_Descriptor;
    puStack_74 = (undefined1 *)0x0;
    FUN_006f6dd6(*(undefined4 *)(in_ECX + 0xc));
    pTStack_6c = (TypeDescriptor *)0x4a2b76;
    FUN_00472db0();
    pTStack_6c = (TypeDescriptor *)0x4a2b84;
    (**(code **)(*(int *)*param_1 + 0x50))();
  }
  if ((*(int *)(in_ECX + 0xe4) != 0) && (*(char *)(in_ECX + 0x110) == '\0')) {
    puStack_74 = &stack0xffffff98;
    pTStack_6c = (TypeDescriptor *)0x1;
    pTStack_70 = (TypeDescriptor *)0x1003210;
    FUN_006e8e70();
    pTStack_6c = (TypeDescriptor *)0x4a2bb7;
    FUN_00684c50();
    iVar2 = (iVar3 + -3) / 2;
    iVar3 = 2;
    if (iVar2 < 2) {
      iVar3 = iVar2;
    }
    iVar2 = ((int)local_14 + -3) / 2;
    pTStack_70 = (TypeDescriptor *)2;
    if (iVar2 < 2) {
      pTStack_70 = (TypeDescriptor *)iVar2;
    }
    pTStack_6c = (TypeDescriptor *)((int)local_18 + iVar3 * -2);
    puStack_74 = (undefined1 *)0x4a2bfd;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_74);
    FUN_00677150();
    if (*(float *)(in_ECX + 0x10c) <= 0.0) {
      cVar1 = FUN_00692970();
      if (cVar1 == '\0') {
        fVar4 = (float)(int)local_18;
        local_24 = (float)(int)local_14;
        local_2c = (float)iVar3 + (float)iVar3;
        local_34 = fVar4 * 0.4;
        local_28 = local_24 * 0.5;
        param_1 = (undefined4 *)(fVar4 * 0.6);
        local_14 = fVar4 - local_2c;
        local_30 = local_28;
        local_1c = local_28;
        local_18 = local_28;
      }
      else {
        fVar4 = (float)(int)local_14;
        local_24 = (float)(int)local_18;
        local_28 = (float)iVar3 + (float)iVar3;
        local_2c = local_24 * 0.5;
        local_18 = fVar4 * 0.6;
        local_1c = fVar4 - local_28;
        local_34 = local_2c;
        local_30 = fVar4 * 0.4;
        param_1 = (undefined4 *)local_2c;
        local_14 = local_2c;
      }
      local_20 = local_24 * 0.2;
      local_24 = local_24 * 0.15;
      local_8 = 0;
      pTStack_6c = (TypeDescriptor *)&local_34;
      pTStack_70 = (TypeDescriptor *)0x4a2d50;
      FUN_006814d0();
      pTStack_6c = (TypeDescriptor *)&local_34;
      local_34 = (float)param_1;
      local_30 = local_18;
      local_2c = local_14;
      local_28 = local_1c;
      pTStack_70 = (TypeDescriptor *)0x4a2d9c;
      FUN_006814d0();
      pTStack_6c = (TypeDescriptor *)0x4a2da7;
      FUN_006839e0();
      pTStack_6c = (TypeDescriptor *)0x4a2daf;
      FID_conflict__free((void *)0x0);
    }
  }
  ExceptionList = local_10;
  return;
}

