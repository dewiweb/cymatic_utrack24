// rea decompile_all
// name: FUN_006c3e10
// address: 0x6c3e10
// body: available
// range: 0x6c3e10-0x6c4143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006c3e10(int *param_1,undefined4 **param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint uVar6;
  bool bVar7;
  undefined4 *local_48;
  void *local_44;
  int local_3c;
  undefined4 *local_38;
  void *local_34;
  int local_2c;
  undefined4 *local_28;
  void *local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 **local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00725a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = 0;
  operator_new(0x34);
  iVar1 = FUN_00460e00(&DAT_00c8aa4c);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_28 = (undefined4 *)*param_1;
  local_14 = 1;
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    local_28[1] = local_28[1] + 1;
    UNLOCK();
  }
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_8 = 1;
  FUN_006c57b0(in_ECX + 8);
  FUN_006c4570(in_ECX + 0x78,extraout_ECX);
  FUN_006c4950(&local_38,extraout_ECX_00);
  uVar6 = 0;
  local_8._0_1_ = 2;
  puVar4 = extraout_ECX_01;
  if (0 < *(int *)(in_ECX + 0x30)) {
    bVar7 = *(int *)(in_ECX + 0x30) != 0;
    do {
      if (bVar7) {
        uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + uVar6 * 4);
      }
      else {
        uVar2 = 0;
      }
      piVar3 = (int *)FUN_006f6dd6(uVar2,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::Drawable::RTTI_Type_Descriptor,0);
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xb4))(&local_48,param_2);
      local_8._0_1_ = 3;
      if (local_38 != (undefined4 *)0x0) {
        FUN_00461880(*puVar4,0xffffffff,0);
      }
      puVar4 = local_48;
      local_8._0_1_ = 2;
      if ((0 < local_3c) && (local_48 != (undefined4 *)0x0)) {
        local_18 = &local_48;
        uVar5 = FUN_00447770(&local_18);
        if (uVar5 < (uint)puVar4[0xb]) {
          FUN_00410320(uVar5);
        }
      }
      FID_conflict__free(local_44);
      puVar4 = local_48;
      if (local_48 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_48 + 1;
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_48)(1);
          puVar4 = extraout_ECX_02;
        }
      }
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)(in_ECX + 0x30);
    } while ((int)uVar6 < (int)*(uint *)(in_ECX + 0x30));
  }
  FUN_006c4400(&local_48,1,puVar4);
  local_8._0_1_ = 4;
  FUN_0069f310(in_ECX + 0x90,extraout_ECX_03);
  puVar4 = local_48;
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((0 < local_3c) && (local_48 != (undefined4 *)0x0)) {
    param_2 = &local_48;
    uVar6 = FUN_00447770(&param_2);
    if (uVar6 < (uint)puVar4[0xb]) {
      FUN_00410320(uVar6);
    }
  }
  FID_conflict__free(local_44);
  puVar4 = local_48;
  if (local_48 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_48 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_48)(1);
      puVar4 = extraout_ECX_04;
    }
  }
  FUN_006c4400(&local_48,0,puVar4);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0069f310(in_ECX + 0xa8,extraout_ECX_05);
  puVar4 = local_48;
  if ((0 < local_3c) && (local_48 != (undefined4 *)0x0)) {
    param_2 = &local_48;
    uVar6 = FUN_00447770(&param_2);
    if (uVar6 < (uint)puVar4[0xb]) {
      FUN_00410320(uVar6);
    }
  }
  FID_conflict__free(local_44);
  if (local_48 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_48 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_48)(1);
    }
  }
  puVar4 = local_38;
  if ((0 < local_2c) && (local_38 != (undefined4 *)0x0)) {
    param_2 = &local_38;
    uVar6 = FUN_00447770(&param_2);
    if (uVar6 < (uint)puVar4[0xb]) {
      FUN_00410320(uVar6);
    }
  }
  FID_conflict__free(local_34);
  if (local_38 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_38 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_38)(1);
    }
  }
  puVar4 = local_28;
  if ((0 < local_1c) && (local_28 != (undefined4 *)0x0)) {
    param_2 = &local_28;
    uVar6 = FUN_00447770(&param_2);
    if (uVar6 < (uint)puVar4[0xb]) {
      FUN_00410320(uVar6);
    }
  }
  FID_conflict__free(local_24);
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_28 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_28)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

