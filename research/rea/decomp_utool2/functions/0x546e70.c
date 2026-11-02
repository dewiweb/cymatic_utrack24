// rea decompile_all
// name: FUN_00546e70
// address: 0x546e70
// body: available
// range: 0x546e70-0x54727f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00546e70(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char in_CL;
  undefined4 extraout_ECX;
  int *piVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar6;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  LPCRITICAL_SECTION local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f3f6;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  local_28 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  FUN_00410ea0(&local_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (in_CL != '\0') {
    local_34 = (void *)0x0;
    local_30 = 0;
    local_2c = 0;
    local_8._0_1_ = 3;
    FUN_0045c990(&DAT_0073d740,uVar2);
    local_8._0_1_ = 4;
    iVar3 = FUN_00635ea0(&local_34,3,0,&local_18);
    local_8._0_1_ = 3;
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    uVar4 = FUN_00636a10(&local_20);
    if (iVar3 == 0) {
      local_8._0_1_ = 0xb;
      uVar6 = extraout_ECX;
      FUN_00637690(uVar4);
      FUN_006377c0(uVar6);
      local_8._0_1_ = 0xd;
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_00621830("\nDo you confirm this folder deletion?");
      FUN_0045c990("Yes, delete the folder");
      local_8._0_1_ = 0xe;
      FUN_0045c990("No, cancel");
      local_8._0_1_ = 0xf;
      FUN_0045c990("Delete folder");
      local_8 = CONCAT31(local_8._1_3_,0x10);
      iVar3 = FUN_004ed1f0(&local_20,&local_1c,0);
      piVar5 = (int *)(local_24 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,0xd);
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    else {
      local_8._0_1_ = 5;
      uVar6 = extraout_ECX;
      FUN_00637690(uVar4);
      FUN_006377c0(uVar6);
      local_8._0_1_ = 7;
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_00621830("\nWarning! This folder is not empty!\n");
      FUN_00621830("\nDo you confirm this folder deletion?");
      FUN_0045c990("Yes, delete the folder and its content");
      local_8._0_1_ = 8;
      FUN_0045c990("No, cancel");
      local_8._0_1_ = 9;
      FUN_0045c990("Delete folder");
      local_8 = CONCAT31(local_8._1_3_,10);
      iVar3 = FUN_004ed1f0(&local_20,&local_24,0);
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,7);
      piVar5 = (int *)(local_24 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    piVar5 = (int *)(local_18 + -8);
    if (iVar3 == 0) {
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_0040f7f0();
      FID_conflict__free(local_34);
      goto LAB_005470ce;
    }
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0040f7f0();
    FID_conflict__free(local_34);
  }
  FUN_00633320();
  FUN_00548700();
LAB_005470ce:
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_1 + 1;
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

