// rea decompile_all
// name: FUN_006c4150
// address: 0x6c4150
// body: available
// range: 0x6c4150-0x6c43f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c4150(undefined4 **param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  undefined4 **_Memory;
  undefined1 local_38 [8];
  undefined4 *local_30;
  void *local_2c;
  int local_24;
  undefined4 *local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00725a63;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = *param_1;
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    local_20[1] = local_20[1] + 1;
    UNLOCK();
  }
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  piVar3 = (int *)FUN_006c5860(&param_1);
  piVar6 = (int *)(*piVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *piVar3;
  UNLOCK();
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  _Memory = param_1 + -2;
  if (_Memory != (undefined4 **)&DAT_00bfe124) {
    LOCK();
    puVar2 = *_Memory;
    *_Memory = (undefined4 *)((int)*_Memory + -1);
    UNLOCK();
    if (puVar2 == (undefined4 *)0x0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_006c44c0(&local_30,1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0069f360(in_ECX + 0x90);
  puVar2 = local_30;
  if ((0 < local_24) && (local_30 != (undefined4 *)0x0)) {
    param_1 = &local_30;
    uVar4 = FUN_00447770(&param_1);
    if (uVar4 < (uint)puVar2[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_2c);
  if (local_30 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_30 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_30)(1);
    }
  }
  FUN_006c44c0(&local_30,0);
  local_8._0_1_ = 2;
  FUN_0069f360(in_ECX + 0xa8);
  puVar2 = local_30;
  local_8 = (uint)local_8._1_3_ << 8;
  if ((0 < local_24) && (local_30 != (undefined4 *)0x0)) {
    param_1 = &local_30;
    uVar4 = FUN_00447770(&param_1);
    if (uVar4 < (uint)puVar2[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_2c);
  if (local_30 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_30 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_30)(1);
    }
  }
  uVar5 = FUN_006c4720(local_38);
  local_8._0_1_ = 3;
  FUN_006c4e00(uVar5);
  FUN_0069e440();
  uVar5 = FUN_006c4980(&local_30);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_006b3200(in_ECX,uVar5);
  puVar2 = local_30;
  if ((0 < local_24) && (local_30 != (undefined4 *)0x0)) {
    param_1 = &local_30;
    uVar4 = FUN_00447770(&param_1);
    if (uVar4 < (uint)puVar2[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_2c);
  if (local_30 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_30 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_30)(1);
    }
  }
  puVar2 = local_20;
  if ((0 < local_14) && (local_20 != (undefined4 *)0x0)) {
    param_1 = &local_20;
    uVar4 = FUN_00447770(&param_1);
    if (uVar4 < (uint)puVar2[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_1c);
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_20 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_20)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

