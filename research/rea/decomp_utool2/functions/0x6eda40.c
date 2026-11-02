// rea decompile_all
// name: FUN_006eda40
// address: 0x6eda40
// body: available
// range: 0x6eda40-0x6eddd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eda40(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_1c;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729265;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((((*(int *)(in_ECX + 200) == *(int *)(in_ECX + 0xdc)) &&
        (*(int *)(in_ECX + 0xcc) == *(int *)(in_ECX + 0xe0))) &&
       (*(int *)(in_ECX + 0xd0) == *(int *)(in_ECX + 0xe4))) &&
      (*(int *)(in_ECX + 0xc4) == *(int *)(in_ECX + 0xd8))) || (*(char *)(in_ECX + 0xa4) != '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  uVar2 = FUN_00637250(uVar1);
  local_8 = 0;
  FUN_006d13b0(0x1003,uVar2,uVar3,0);
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  uVar3 = FUN_00637250(uVar1);
  local_8 = 1;
  piVar5 = (int *)(**(code **)(*(int *)(in_ECX + 0x78) + 8))(local_18);
  FUN_006d13b0(0x1004,uVar3,*piVar5 != piVar5[1],0);
  local_8 = 0xffffffff;
  piVar5 = param_1 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  uVar3 = FUN_00637250();
  local_8 = 2;
  FUN_006d13b0(0x1005,uVar3,*(char *)(in_ECX + 0xa4) == '\0',0);
  local_8 = 0xffffffff;
  piVar5 = param_1 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  uVar3 = FUN_00637250();
  local_8 = 3;
  FUN_006d13b0(0x1002,uVar3,*(char *)(in_ECX + 0xa4) == '\0',0);
  local_8 = 0xffffffff;
  piVar5 = param_1 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if ((0 < param_1[2]) && (*(char *)(*(int *)(*param_1 + -4 + param_1[2] * 4) + 0x26) == '\0')) {
    FUN_006a0850();
    local_8 = 4;
    FUN_006a06e0(extraout_ECX);
    local_8 = 0xffffffff;
    FUN_004abe20();
  }
  uVar3 = FUN_00637250();
  local_8 = 5;
  FUN_006d13b0(0x1006,uVar3,1,0);
  local_8 = 0xffffffff;
  piVar5 = param_1 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if ((0 < param_1[2]) && (*(char *)(*(int *)(*param_1 + -4 + param_1[2] * 4) + 0x26) == '\0')) {
    FUN_006a0850();
    local_8 = 6;
    FUN_006a06e0(extraout_ECX_00);
    local_8 = 0xffffffff;
    FUN_004abe20();
  }
  uVar3 = FUN_00637250();
  local_8 = 7;
  iVar4 = *(int *)(in_ECX + 0x7c);
  uVar1 = *(int *)(iVar4 + 0x5c) - 1;
  if (uVar1 < *(uint *)(iVar4 + 0x3c)) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x34) + uVar1 * 4);
  }
  else {
    iVar4 = 0;
  }
  FUN_006d13b0(0x1008,uVar3,CONCAT31((int3)((uint)iVar4 >> 8),iVar4 != 0),0);
  local_8 = 0xffffffff;
  param_1 = param_1 + -2;
  if (param_1 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(param_1);
    }
  }
  uVar3 = FUN_00637250();
  local_8 = 8;
  iVar4 = *(int *)(in_ECX + 0x7c);
  if (*(uint *)(iVar4 + 0x5c) < *(uint *)(iVar4 + 0x3c)) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x34) + *(uint *)(iVar4 + 0x5c) * 4);
  }
  else {
    iVar4 = 0;
  }
  FUN_006d13b0(0x1009,uVar3,iVar4 != 0,0);
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

