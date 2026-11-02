// rea decompile_all
// name: FUN_005b4560
// address: 0x5b4560
// body: available
// range: 0x5b4560-0x5b48db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b4560(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_2c [2];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071926e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005b2a40();
  local_8 = 0;
  FUN_005b4070();
  local_8._0_1_ = 1;
  FUN_00633de0(&local_1c,DAT_00c8a8e8,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0045c990();
  iVar2 = local_24;
  if (local_1c == local_24) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0045c1e0(local_1c);
  }
  piVar3 = (int *)(iVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    FUN_00635a10(local_2c);
    local_8 = CONCAT31(local_8._1_3_,3);
    piVar3 = (int *)FUN_005b4070();
    iVar2 = *piVar3;
    *piVar3 = local_18;
    piVar3 = (int *)(local_24 + -8);
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
    local_8._0_1_ = 2;
    piVar3 = (int *)(local_2c[0] + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_00633de0(&local_14,DAT_00c8a8e8,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_0045c990();
    iVar2 = local_2c[0];
    if (local_14 == local_2c[0]) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0045c1e0(local_14);
    }
    piVar3 = (int *)(iVar2 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    else {
      FUN_0045c990();
      iVar2 = local_2c[0];
      if (local_14 == local_2c[0]) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0045c1e0(local_14);
      }
      piVar3 = (int *)(iVar2 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (iVar1 == 0) {
        uVar4 = 4;
      }
      else {
        FUN_0045c990();
        if (local_14 == local_2c[0]) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_0045c1e0(local_14);
        }
        piVar3 = (int *)(local_2c[0] + -8);
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
          uVar4 = 3;
        }
        else {
          FUN_0045c990();
          if (local_14 == local_24) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0045c1e0(local_14);
          }
          FUN_00637c10();
          if (iVar2 == 0) {
            uVar4 = 5;
          }
          else {
            uVar4 = 0;
          }
        }
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
  return uVar4;
}

