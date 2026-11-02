// rea decompile_all
// name: FUN_005b3890
// address: 0x5b3890
// body: available
// range: 0x5b3890-0x5b3bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005b3890(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int in_EDX;
  bool bVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071912f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005b2a40();
  local_8 = 0;
  FUN_005b4070();
  local_8._0_1_ = 1;
  FUN_005b4070(&local_20);
  local_8._0_1_ = 2;
  FUN_00633de0(&local_14,DAT_00c8a8e8,0);
  local_8._0_1_ = 3;
  FUN_00633de0(&local_30,DAT_00c8a8e8,0);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_14 != local_30) {
    iVar2 = FUN_00448730(local_14);
    if (iVar2 != 0) {
      bVar4 = false;
      goto LAB_005b3b20;
    }
  }
  FUN_0045c990();
  if (local_14 == local_34) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0045c1e0(local_14);
  }
  piVar3 = (int *)(local_34 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (iVar2 == 0) {
    bVar4 = true;
  }
  else {
    FUN_00635a10(&local_28);
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar3 = (int *)FUN_005b4070();
    iVar2 = *piVar3;
    *piVar3 = local_1c;
    piVar3 = (int *)(in_ECX + -8);
    local_1c = iVar2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)FUN_005b4070();
    iVar2 = *piVar3;
    *piVar3 = local_18;
    piVar3 = (int *)(in_EDX + -8);
    local_18 = iVar2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_00633de0(&local_24,DAT_00c8a8e8,0);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00633de0(&local_2c,DAT_00c8a8e8,0);
    if (local_24 == local_2c) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00448730(local_24);
    }
    bVar4 = iVar2 == 0;
    piVar3 = (int *)(local_2c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_24 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_28 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
LAB_005b3b20:
  piVar3 = (int *)(local_30 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_20 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return bVar4;
}

