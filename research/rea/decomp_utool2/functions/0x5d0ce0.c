// rea decompile_all
// name: FUN_005d0ce0
// address: 0x5d0ce0
// body: available
// range: 0x5d0ce0-0x5d1121 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d0ce0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *in_EDX;
  int *local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b6aa;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *in_EDX;
  piVar2 = (int *)(iVar4 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_28 = in_EDX;
  puVar3 = (undefined4 *)FUN_006377c0(iVar4);
  FUN_0062a9c0(local_18,*puVar3,in_EDX);
  local_8 = 0;
  piVar2 = (int *)(local_20 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  iVar4 = FUN_0045d1e0(local_18[0],uVar1);
  piVar2 = param_1;
  local_24 = 0x7478746c;
  local_1c = iVar4 + 1;
  uVar1 = local_1c & 1;
  (**(code **)(*param_1 + 0x10))(&local_24,4);
  param_1 = (int *)(iVar4 + 0x15 + uVar1);
  (**(code **)(*piVar2 + 0x10))(&param_1,4);
  piVar6 = local_28;
  iVar4 = *local_28;
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 1;
  local_28 = (int *)FUN_005d1370();
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)param_1 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  (**(code **)(*piVar2 + 0x10))(&local_28,4);
  iVar4 = *piVar6;
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 2;
  local_28 = (int *)FUN_005d1370();
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)param_1 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  (**(code **)(*piVar2 + 0x10))(&local_28,4);
  iVar4 = *piVar6;
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 3;
  local_28 = (int *)FUN_005d1370();
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)param_1 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  (**(code **)(*piVar2 + 0x10))(&local_28,4);
  iVar4 = *piVar6;
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 4;
  local_28 = (int *)FUN_005d1370();
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)param_1 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_28 = (int *)((uint)local_28 & 0xffff);
  (**(code **)(*piVar2 + 0x10))(&local_28,2);
  iVar4 = *piVar6;
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 5;
  local_28 = (int *)FUN_005d1370();
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)param_1 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_28 = (int *)((uint)local_28 & 0xffff);
  (**(code **)(*piVar2 + 0x10))(&local_28,2);
  iVar4 = *piVar6;
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 6;
  local_28 = (int *)FUN_005d1370();
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)param_1 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_28 = (int *)((uint)local_28 & 0xffff);
  (**(code **)(*piVar2 + 0x10))(&local_28,2);
  iVar4 = *piVar6;
  piVar6 = (int *)(iVar4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 7;
  uVar1 = FUN_005d1370();
  local_8 = (uint)local_8._1_3_ << 8;
  piVar6 = (int *)((int)param_1 - 8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_28 = (int *)(uVar1 & 0xffff);
  (**(code **)(*piVar2 + 0x10))(&local_28,2);
  iVar4 = local_18[0];
  if (local_1c != 0) {
    iVar7 = FUN_00622a60(local_1c);
    if (iVar7 != 0) {
      FUN_004c2c30(iVar7,iVar4,local_1c);
    }
  }
  if ((*(byte *)(piVar2 + 7) & 1) != 0) {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    (**(code **)(*piVar2 + 0x10))(&param_1,1);
  }
  piVar2 = (int *)(local_18[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

