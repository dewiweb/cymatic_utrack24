// rea decompile_all
// name: FUN_006ce360
// address: 0x6ce360
// body: available
// range: 0x6ce360-0x6ce620 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ce360(undefined4 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int in_ECX;
  float10 fVar5;
  float fVar6;
  undefined1 *puVar7;
  float local_54 [5];
  undefined4 local_40;
  undefined1 local_3c [8];
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  int *local_28;
  int *local_24;
  undefined1 local_20;
  uint local_1c;
  undefined **local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726914;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar3 = *(byte *)(in_ECX + 0x6a);
  local_14 = (int *)(CONCAT31(local_14._1_3_,bVar3) & 0xffffff01);
  local_18 = (undefined **)(CONCAT31(local_18._1_3_,bVar3 >> 1) & 0xffffff01);
  if (((bVar3 & 1) != 0) || ((bVar3 >> 1 & 1) != 0)) {
    *(byte *)(in_ECX + 0x6a) = bVar3 & 0xfc;
    FUN_006cf760(local_14,local_18);
  }
  if (*(int *)(in_ECX + 0x3c) == 0) {
    if ((*(char *)(in_ECX + 0x6c) == '\0') || (param_2 != '\0')) {
      FUN_006ce630(param_1);
    }
    else if (*(char *)(in_ECX + 0x6c) != -1) {
      FUN_006805c0(uVar4);
      FUN_006ce630(param_1);
      (**(code **)(*(int *)*param_1 + 0x40))();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    fVar5 = (float10)(**(code **)(*(int *)*param_1 + 0x10))();
    puVar7 = local_3c;
    FUN_006e6400(local_2c);
    FUN_004b0b50(puVar7);
    local_18 = juce::NativeImageType::vftable;
    local_1c = CONCAT31(local_1c._1_3_,~(*(byte *)(in_ECX + 0x68) >> 2)) & 0xffffff01;
    local_8 = 0;
    FUN_00673a00(&local_14,2 - (uint)((*(byte *)(in_ECX + 0x68) & 4) != 0),local_34,local_30,
                 local_1c);
    local_18 = juce::ImageType::vftable;
    local_8 = 1;
    local_28 = (int *)0x0;
    if (local_14 != (int *)0x0) {
      local_28 = (int *)(**(code **)(*local_14 + 4))();
    }
    local_20 = 0;
    local_8._0_1_ = 2;
    local_54[1] = 0.0;
    local_54[2] = 0.0;
    local_54[3] = 0.0;
    local_40 = 0;
    local_54[0] = (float)local_34 / (float)*(int *)(in_ECX + 0x18);
    local_54[4] = (float)local_30 / (float)*(int *)(in_ECX + 0x1c);
    local_24 = local_28;
    (**(code **)(*local_28 + 0xc))(local_54);
    FUN_006ce630(&local_28);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_24 != (int *)0x0) {
      (**(code **)*local_24)(1);
    }
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    local_54[0] = 1.0 / (float)fVar5;
    local_54[1] = 0.0;
    local_54[2] = 0.0;
    local_54[3] = 0.0;
    local_40 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    local_54[4] = local_54[0];
    (**(code **)(*(int *)*param_1 + 0x34))();
    (**(code **)(*(int *)*param_1 + 0xc))(local_54);
    if (param_2 == '\0') {
      fVar6 = (float)(int)(0xff - (uint)*(byte *)(in_ECX + 0x6c)) / 255.0;
    }
    else {
      fVar6 = 1.0;
    }
    (**(code **)**(undefined4 **)(in_ECX + 0x3c))(&local_14,param_1,(float)fVar5,fVar6);
    if (*(char *)(param_1 + 2) == '\0') {
      (**(code **)(*(int *)*param_1 + 0x38))();
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (local_14 != (int *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_14)(1);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

