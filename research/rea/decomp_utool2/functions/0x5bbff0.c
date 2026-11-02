// rea decompile_all
// name: FUN_005bbff0
// address: 0x5bbff0
// body: available
// range: 0x5bbff0-0x5bc3ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bbff0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  int in_XMM3_Da;
  int local_24;
  int local_20;
  int local_1c [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00719fa5;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = in_XMM3_Da;
  FUN_00635a10(&local_14,&DAT_00748fd8);
  local_8._0_1_ = 1;
  uVar3 = FUN_00637690(&local_14);
  local_8._0_1_ = 2;
  FUN_005ba670(uVar3);
  local_8._0_1_ = 1;
  piVar4 = (int *)(local_1c[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990(".songprj",uVar2);
  local_8._0_1_ = 3;
  uVar3 = FUN_00637690(local_1c);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00635ea0(in_ECX + 0x24,2,1,uVar3);
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = (int *)(local_1c[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)FUN_00635a10(&local_24,"uTrack24");
  iVar1 = *piVar4;
  *piVar4 = local_14;
  piVar4 = (int *)(local_24 + -8);
  local_14 = iVar1;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  uVar3 = FUN_00637690(&local_14);
  local_8._0_1_ = 5;
  FUN_005ba670(uVar3);
  local_8._0_1_ = 1;
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990(".songprj");
  local_8._0_1_ = 6;
  uVar3 = FUN_00637690(local_1c);
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00635ea0(in_ECX + 0x30,2,1,uVar3);
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = (int *)(local_1c[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)FUN_00635a10(&local_24,"uTrackX32");
  iVar1 = *piVar4;
  *piVar4 = local_14;
  piVar4 = (int *)(local_24 + -8);
  local_14 = iVar1;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  uVar3 = FUN_00637690(&local_14);
  local_8._0_1_ = 8;
  FUN_005ba670(uVar3);
  local_8._0_1_ = 1;
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990(".songprj");
  local_8._0_1_ = 9;
  uVar3 = FUN_00637690(&local_20);
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_00635ea0(in_ECX + 0x3c,2,1,uVar3);
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

