// rea decompile_all
// name: FUN_004ee2b0
// address: 0x4ee2b0
// body: available
// range: 0x4ee2b0-0x4ee69a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee2b0(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  float fVar3;
  undefined4 in_stack_ffffff6c;
  undefined4 in_stack_ffffff70;
  undefined4 uVar4;
  void *local_78 [8];
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  void *local_38;
  undefined4 local_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 local_1c;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar4 = 0x4ee2ed;
  FUN_00684c50();
  FUN_00472db0((float)(*(int *)(in_ECX + 0x1c) + -2));
  FUN_00684310(in_stack_ffffff6c,in_stack_ffffff70,uVar4);
  FUN_00684c50();
  FUN_00562240(local_78,2);
  local_8 = 0;
  local_30 = (float)*(int *)(in_ECX + 0x18);
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_1c = 0;
  local_20 = local_30;
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))(local_78);
  }
  if (0 < *(int *)(in_ECX + 0x84)) {
    fVar3 = (float)(*(int *)(in_ECX + 0x84) + -1) * 0.3926991;
    FUN_006842b0(&stack0xffffff78);
    FUN_00684c50();
    local_58 = (void *)0x0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_3c = 1;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00683a90((float)*(int *)(in_ECX + 0x1c) - 2.0,fVar3,fVar3 + 0.3926991);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
      local_30 = 1.0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_20 = 1.0;
      local_1c = 0;
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_58);
    }
    fVar3 = 5.8904862;
    param_1 = (undefined4 *)0x40bc7edd;
    if (1 < *(int *)(in_ECX + 0x84)) {
      if (*(int *)(in_ECX + 0x84) < 0x11) {
        fVar3 = 0.0;
      }
      local_38 = (void *)0x0;
      local_34 = 0;
      local_30 = 0.0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_20 = 0.0;
      local_1c = CONCAT31(local_1c._1_3_,1);
      local_8._0_1_ = 2;
      FUN_00683a90((float)*(int *)(in_ECX + 0x1c) - 2.0,fVar3,fVar3 + 0.3926991);
      FUN_006839e0();
      local_8 = CONCAT31(local_8._1_3_,1);
      FID_conflict__free(local_38);
    }
    iVar1 = *(int *)(in_ECX + 0x84);
    if ((2 < iVar1) && (iVar1 < 0x1f)) {
      if (iVar1 < 0x11) {
        local_14 = 0.3926991;
        param_1 = (undefined4 *)((float)(iVar1 + -1) * 0.3926991);
      }
      else {
        local_14 = (float)(iVar1 + -0x10) * 0.3926991;
      }
      FUN_00684c50();
      local_38 = (void *)0x0;
      local_34 = 0;
      local_30 = 0.0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_20 = 0.0;
      local_1c = CONCAT31(local_1c._1_3_,1);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00683a90((float)*(int *)(in_ECX + 0x1c) - 2.0,local_14,param_1);
      FUN_006839e0();
      FID_conflict__free(local_38);
    }
    FID_conflict__free(local_58);
  }
  FID_conflict__free(local_78[0]);
  ExceptionList = local_10;
  return;
}

