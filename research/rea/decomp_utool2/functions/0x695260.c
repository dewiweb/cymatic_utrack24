// rea decompile_all
// name: FUN_00695260
// address: 0x695260
// body: available
// range: 0x695260-0x6955d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00695260(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar5;
  int *piVar6;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721d91;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(in_ECX + 0x94) == '\0') && ((*(byte *)(in_ECX + 0x69) & 0x10) == 0)) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      cVar1 = FUN_006e6320(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      if (cVar1 == '\0') goto LAB_006952ad;
    }
    uVar2 = 0;
  }
  else {
LAB_006952ad:
    uVar2 = 1;
  }
  local_14 = CONCAT31(local_14._1_3_,uVar2) ^ 1;
  if (*(int *)(in_ECX + 0x128) == 0) {
    uVar3 = FUN_00637250();
    local_8 = 0;
    FUN_006d13b0(0x1003,uVar3,local_14,0);
    local_8 = 0xffffffff;
    piVar6 = param_1 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    uVar3 = FUN_00637250();
    local_8 = 1;
    FUN_006d13b0(0x1004,uVar3,*(int *)(in_ECX + 0xf4) != *(int *)(in_ECX + 0xf8),0);
    local_8 = 0xffffffff;
    piVar6 = param_1 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  uVar3 = FUN_00637250();
  local_8 = 2;
  FUN_006d13b0(0x1005,uVar3,local_14,0);
  local_8 = 0xffffffff;
  piVar6 = param_1 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  uVar3 = FUN_00637250();
  local_8 = 3;
  FUN_006d13b0(0x1002,uVar3,local_14,0);
  local_8 = 0xffffffff;
  piVar6 = param_1 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
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
  piVar6 = param_1 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if ((0 < param_1[2]) && (*(char *)(*(int *)(*param_1 + -4 + param_1[2] * 4) + 0x26) == '\0')) {
    FUN_006a0850();
    local_8 = 6;
    FUN_006a06e0(extraout_ECX_00);
    local_8 = 0xffffffff;
    FUN_004abe20();
  }
  iVar4 = 0;
  if (*(char *)(in_ECX + 0x94) == '\0') {
    iVar4 = in_ECX + 0xa4;
  }
  if (iVar4 != 0) {
    uVar3 = FUN_00637250();
    local_8 = 7;
    uVar5 = *(int *)(in_ECX + 0xe8) - 1;
    if (uVar5 < *(uint *)(in_ECX + 200)) {
      iVar4 = *(int *)(*(int *)(in_ECX + 0xc0) + uVar5 * 4);
    }
    else {
      iVar4 = 0;
    }
    FUN_006d13b0(0x1008,uVar3,CONCAT31((int3)((uint)iVar4 >> 8),iVar4 != 0),0);
    local_8 = 0xffffffff;
    piVar6 = (int *)(in_ECX + 0x9c);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    uVar3 = FUN_00637250();
    local_8 = 8;
    if (*(uint *)(in_ECX + 0xe8) < *(uint *)(in_ECX + 200)) {
      iVar4 = *(int *)(*(int *)(in_ECX + 0xc0) + *(uint *)(in_ECX + 0xe8) * 4);
    }
    else {
      iVar4 = 0;
    }
    FUN_006d13b0(0x1009,uVar3,iVar4 != 0,0);
    piVar6 = (int *)(local_14 - 8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

