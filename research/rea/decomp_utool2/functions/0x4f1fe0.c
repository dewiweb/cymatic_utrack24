// rea decompile_all
// name: FUN_004f1fe0
// address: 0x4f1fe0
// body: available
// range: 0x4f1fe0-0x4f26c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1fe0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 **ppuStack_108;
  undefined4 *puStack_104;
  undefined4 uStack_100;
  void *local_d0;
  void *local_b0;
  void *local_90;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705e20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006842b0();
  FUN_00684c50();
  FUN_00684310();
  FUN_00684c50();
  FUN_00683310();
  FUN_00684c50();
  FUN_0040e4d0();
  FUN_0040ef50();
  FUN_00684310();
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x4c))();
  FUN_00684c50();
  FUN_00562240();
  local_8 = 0;
  FUN_00683720();
  cVar3 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar3 == '\0') {
    cVar3 = FUN_00682580();
    if (cVar3 == '\0') {
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
  }
  FUN_00562240();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00683720();
  cVar3 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar3 == '\0') {
    cVar3 = FUN_00682580();
    if (cVar3 == '\0') {
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
  }
  FUN_00684c50();
  FUN_00562240();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00683720();
  FUN_00683770();
  FUN_00683770();
  cVar3 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar3 == '\0') {
    cVar3 = FUN_00682580();
    if (cVar3 == '\0') {
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
  }
  local_8._0_1_ = 3;
  piVar4 = (int *)FUN_006f6dd6();
  local_8._0_1_ = 2;
  (**(code **)(*piVar4 + 8))();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00637690();
  piVar4 = param_1 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0057f4a0();
  local_8._0_1_ = 7;
  puVar5 = (undefined4 *)FUN_00683640();
  local_8 = CONCAT31(local_8._1_3_,8);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_20 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_20)();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_14 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)();
    }
  }
  FUN_00472d90();
  ppuStack_108 = &puStack_104;
  FUN_0040e4d0();
  ppuStack_108 = &local_18;
  FUN_006830c0();
  FUN_0045c990();
  puVar2 = local_18;
  local_18 = local_14;
  piVar4 = puVar2 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0057f4a0();
  local_8._0_1_ = 9;
  local_14 = (undefined4 *)FUN_00683640();
  local_8 = CONCAT31(local_8._1_3_,10);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_20 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_20)();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar5 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar5)();
    }
  }
  uStack_100 = 0x4f2614;
  FUN_00472d90();
  FUN_0040e4d0(&ppuStack_108);
  FUN_006830c0(&local_18);
  FUN_006842b0();
  FUN_00684c50();
  puStack_104 = &uStack_100;
  ppuStack_108 = (undefined4 **)0x4f2660;
  FUN_0040e4d0();
  puStack_104 = (undefined4 *)0x4f266f;
  FUN_00684310();
  piVar4 = local_18 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FID_conflict__free(local_90);
  FID_conflict__free(local_d0);
  uStack_100 = 0x4f26b0;
  FID_conflict__free(local_b0);
  ExceptionList = local_10;
  return;
}

