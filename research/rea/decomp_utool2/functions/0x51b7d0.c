// rea decompile_all
// name: FUN_0051b7d0
// address: 0x51b7d0
// body: available
// range: 0x51b7d0-0x51b9f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0051b7d0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  int local_20;
  int local_1c [2];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00709d7c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c[1] = 0;
  FUN_0051b500(&local_14);
  local_8 = 1;
  FUN_005bd870(in_ECX[0x12],uVar2);
  iVar1 = DAT_00c8a8e8;
  local_8._0_1_ = 2;
  piVar3 = (int *)(DAT_00c8a8e8 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  FUN_00637730(iVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar3 = (int *)(local_1c[0] + -8);
  local_1c[1] = 1;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
      piVar3 = extraout_ECX;
    }
  }
  if (*local_14 != '\0') {
    FUN_00634140(piVar3);
    puVar4 = (undefined4 *)FUN_00637730(piVar3);
    uVar5 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar5;
    piVar3 = (int *)(local_1c[0] + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  iVar1 = in_ECX[0x10];
  if (iVar1 < 0x7003) {
    if (iVar1 == 0x7002) goto LAB_0051b9c1;
    if (iVar1 == 0x1003) {
      if (*(int *)(in_ECX[0x1e] + 0xc) == 0) goto LAB_0051b9c1;
      if (in_ECX[0x12] == 2) {
        FUN_005403c0(&local_20);
        local_8 = CONCAT31(local_8._1_3_,3);
        uVar5 = extraout_ECX_00;
        FUN_00634140(extraout_ECX_00);
        puVar4 = (undefined4 *)FUN_00637730(uVar5);
        uVar5 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar5;
        FUN_00637c10();
        FUN_00637c10();
        goto LAB_0051b9c1;
      }
    }
    else if (iVar1 != 0x1006) goto LAB_0051b949;
    FUN_00637b90(param_1);
  }
  else {
    if (iVar1 == 0x7005) goto LAB_0051b9c1;
LAB_0051b949:
    (**(code **)(*in_ECX + 0x80))(local_1c);
    local_8 = CONCAT31(local_8._1_3_,4);
    uVar5 = extraout_ECX_01;
    FUN_00634140(extraout_ECX_01);
    puVar4 = (undefined4 *)FUN_00637730(uVar5);
    uVar5 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar5;
    piVar3 = (int *)(local_20 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_1c[0] + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
LAB_0051b9c1:
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

