// rea decompile_all
// name: FUN_006dcf80
// address: 0x6dcf80
// body: available
// range: 0x6dcf80-0x6dd342 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dcf80(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,char param_8,float param_9,
                 undefined4 param_10,undefined4 *param_11)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined1 local_20 [8];
  double local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (double)(ulonglong)local_18._0_4_;
  uVar10 = 0;
  uVar9 = param_11;
  param_11 = (undefined4 *)
             FUN_006f6dd6(param_11,0,&juce::DirectoryContentsDisplayComponent::RTTI_Type_Descriptor,
                          &juce::Component::RTTI_Type_Descriptor,0,
                          DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar2 = param_1;
  if (param_9._0_1_ != '\0') {
    if (param_11 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_006ab460(&param_1,0x1000540);
    }
    else {
      uVar10 = 0x6dcfec;
      puVar3 = (undefined4 *)FUN_006e8e70(&param_9,0x1000540,0);
    }
    FUN_00684a80(*puVar3);
  }
  uVar5 = DAT_00c7ef90;
  FUN_00684c50(DAT_00c7ef90);
  iVar7 = param_3;
  if ((param_5 == (int *)0x0) || (*param_5 == 0)) {
    if (param_8 == '\0') {
      if (*(int *)(in_ECX + 0x84) == 0) {
        puVar4 = (undefined4 *)FUN_006a6da0();
        puVar3 = *(undefined4 **)(in_ECX + 0x84);
        if ((puVar3 != puVar4) &&
           (*(undefined4 **)(in_ECX + 0x84) = puVar4, puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
      }
      piVar6 = *(int **)(in_ECX + 0x84);
    }
    else {
      if (*(int *)(in_ECX + 0x80) == 0) {
        puVar4 = (undefined4 *)FUN_006a6da0();
        puVar3 = *(undefined4 **)(in_ECX + 0x80);
        if ((puVar3 != puVar4) &&
           (*(undefined4 **)(in_ECX + 0x80) = puVar4, puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
      }
      piVar6 = *(int **)(in_ECX + 0x80);
    }
    iVar7 = param_3;
    if (piVar6 != (int *)0x0) {
      puVar3 = &local_30;
      param_9 = 4.09179e-43;
      local_30 = 0x40000000;
      local_2c = 0x40000000;
      local_28 = (double)CONCAT44((float)param_3 - 4.0,0x41e00000);
      uVar5 = (**(code **)(*piVar6 + 0xb8))(local_20,puVar3);
      uVar10 = 0x6dd11b;
      uVar5 = FUN_00677570(local_48,uVar5,puVar3);
      FUN_006c5e40(puVar2,uVar5);
      iVar7 = param_3;
    }
  }
  else {
    uVar10 = 0x1c;
    uVar9 = 2;
    FUN_00676a00(param_5,2,2,0x1c,param_3 + -4,0x124,uVar5);
  }
  if (param_11 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x6dd159;
    puVar4 = (undefined4 *)FUN_006ab460(&param_11,0x1000541);
  }
  else {
    puVar3 = &param_9;
    uVar10 = 0x6dd146;
    puVar4 = (undefined4 *)FUN_006e8e70(puVar3,0x1000541,0);
  }
  FUN_00684c50(*puVar4);
  puVar4 = &param_11;
  param_9 = (float)param_3 * 0.7;
  (**(code **)(*(int *)*puVar2 + 0x6c))(puVar4);
  uVar5 = FUN_00683640(puVar4);
  local_8 = 0;
  if (*(char *)(puVar2 + 2) != '\0') {
    *(undefined1 *)(puVar2 + 2) = 0;
    (**(code **)(*(int *)*puVar2 + 0x34))();
  }
  uVar11 = 0x6dd1b5;
  (**(code **)(*(int *)*puVar2 + 0x68))(uVar5);
  local_8 = 0xffffffff;
  if (param_11 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_11 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      uVar11 = 1;
      puVar3 = (undefined4 *)0x6dd1d9;
      (**(code **)*param_11)(1);
    }
  }
  if ((param_2 < 0x1c3) || (param_8 != '\0')) {
    FUN_00472d90(0,param_2 + -0x20,iVar7);
    uVar8 = 0x21;
    uVar5 = param_4;
  }
  else {
    local_18 = (double)((float)param_2 * 0.7) + 6755399441055744.0;
    iVar1 = local_18._0_4_;
    local_28 = (double)((float)param_2 * 0.8) + 6755399441055744.0;
    FUN_00472d90(0,local_18._0_4_ + -0x20,iVar7);
    FUN_00682290(param_4,0x21,1,0,uVar9,uVar10,puVar3,uVar11);
    FUN_00684bc0();
    puVar3 = (undefined4 *)0x6dd28b;
    uVar11 = DAT_00c7ef80;
    FUN_00684c50(DAT_00c7ef80);
    iVar7 = (int)local_28;
    FUN_00472d90(0,((int)local_28 - iVar1) + -8,param_3);
    FUN_00682290(param_6,0x22,1,0,uVar9,uVar10,puVar3,uVar11);
    FUN_00472d90(0,(param_2 - iVar7) + -8,param_3);
    uVar8 = 0x22;
    uVar5 = param_7;
  }
  FUN_00682290(uVar5,uVar8,1,0,uVar9,uVar10,puVar3,uVar11);
  ExceptionList = local_10;
  return;
}

