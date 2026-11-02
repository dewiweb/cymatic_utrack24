// rea decompile_all
// name: FUN_00580d30
// address: 0x580d30
// body: available
// range: 0x580d30-0x5810e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00580d30(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  void *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  void *local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [8];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar10 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071293c;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  FUN_00684a80(DAT_00c7ebb8);
  cVar2 = FUN_005b1d30(uVar3);
  if (cVar2 == '\0') {
    param_1 = DAT_00c7ebb0;
    puVar4 = &param_1;
  }
  else {
    puVar4 = (undefined4 *)FUN_00684210(local_20);
  }
  FUN_00684c50(*puVar4);
  FUN_0057ca60();
  local_8 = 0;
  FUN_00683640(&local_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  if (*(char *)(puVar10 + 2) != '\0') {
    *(undefined1 *)(puVar10 + 2) = 0;
    (**(code **)(*(int *)*puVar10 + 0x34))();
  }
  (**(code **)(*(int *)*puVar10 + 0x68))(&local_14);
  FUN_00684c50(DAT_00c7ebb0);
  FUN_00562240(&local_64,1,0);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00683720(0x42100000,1);
  local_3c = 0x3f800000;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0x40800000;
  local_34 = ((float)*(int *)(in_ECX + 0x18) - 410.0) + (float)(undefined *)0x0;
  cVar2 = (**(code **)(*(int *)*puVar10 + 0x30))();
  if (cVar2 == '\0') {
    cVar2 = FUN_00682580();
    if (cVar2 == '\0') {
      (**(code **)(*(int *)*puVar10 + 0x5c))(&local_64,&local_3c);
    }
  }
  puVar4 = (undefined4 *)FUN_00562240(local_44,0,1);
  pvVar8 = (void *)*puVar4;
  *puVar4 = local_64;
  local_60 = puVar4[1];
  local_5c = puVar4[2];
  local_58 = puVar4[3];
  uStack_54 = puVar4[4];
  uStack_50 = puVar4[5];
  uStack_4c = puVar4[6];
  local_48 = *(undefined1 *)(puVar4 + 7);
  uVar7 = 0x580efc;
  local_64 = pvVar8;
  FID_conflict__free(local_44[0]);
  FUN_00683720(0x42100000,1);
  local_3c = 0x3f800000;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_34 = ((float)*(int *)(in_ECX + 0x18) - 146.0) + (float)(undefined *)0x0;
  cVar2 = (**(code **)(*(int *)*puVar10 + 0x30))();
  pvVar8 = local_44[0];
  if (cVar2 == '\0') {
    cVar2 = FUN_00682580();
    pvVar8 = local_44[0];
    if (cVar2 == '\0') {
      (**(code **)(*(int *)*puVar10 + 0x5c))(&local_64,&local_3c);
      pvVar8 = local_44[0];
    }
  }
  FUN_0057ca60();
  local_8._0_1_ = 4;
  uVar5 = FUN_00683640(&param_1);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (*(char *)(puVar10 + 2) != '\0') {
    *(undefined1 *)(puVar10 + 2) = 0;
    (**(code **)(*(int *)*puVar10 + 0x34))();
  }
  (**(code **)(*(int *)*puVar10 + 0x68))(uVar5);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  local_8._0_1_ = 3;
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = local_18 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_18)(1);
    }
  }
  FUN_0045c990("2.0.062");
  puVar10 = &param_1;
  local_8._0_1_ = 6;
  uVar9 = 0x58102d;
  uVar5 = FUN_00637690(puVar10);
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00472d90(10,0x42,0x20);
  FUN_00682290(uVar5,0x22,1,0x3f000000,uVar7,pvVar8,uVar9,puVar10);
  piVar6 = local_18 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = param_1 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FID_conflict__free(local_64);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = local_14 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

