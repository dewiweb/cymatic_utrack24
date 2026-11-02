// rea decompile_all
// name: FUN_005474a0
// address: 0x5474a0
// body: available
// range: 0x5474a0-0x547ae4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005474a0(undefined4 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *extraout_ECX;
  int *_Memory;
  int *piVar6;
  undefined4 extraout_ECX_00;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar7;
  void *local_44;
  int local_3c;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  LPCRITICAL_SECTION local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f514;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  local_2c = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  FUN_00410ea0(&local_18);
  iVar5 = local_18;
  local_8._0_1_ = 2;
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  FUN_005436f0(local_18,uVar2);
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (local_11 == '\0') {
LAB_005478f5:
    local_8._0_1_ = uVar1;
    FUN_00633320();
    FUN_00548700();
    FUN_0040f7f0();
    FID_conflict__free(local_44);
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 == &DAT_00bfe124) goto LAB_00547938;
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
  }
  else {
    if (local_3c == 0) {
      local_38 = (void *)0x0;
      local_34 = 0;
      local_30 = 0;
      local_8._0_1_ = 0xb;
      FUN_0045c990(&DAT_0073d5b4);
      local_8._0_1_ = 0xc;
      iVar5 = FUN_00635ea0(&local_38,7,0,&local_28);
      local_8._0_1_ = 0xb;
      piVar6 = (int *)(local_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      uVar3 = FUN_00636a10(&local_24);
      if (iVar5 == 0) {
        local_8._0_1_ = 0x13;
        uVar7 = extraout_ECX_00;
        FUN_00637690(uVar3);
        FUN_006377c0(uVar7);
        local_8._0_1_ = 0x15;
        piVar6 = (int *)(local_24 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        FUN_00621830("\nDo you confirm this folder deletion?");
        FUN_0045c990("Yes, delete the folder");
        local_8._0_1_ = 0x16;
        FUN_0045c990("No, cancel");
        local_8._0_1_ = 0x17;
        FUN_0045c990("Delete folder");
        local_8 = CONCAT31(local_8._1_3_,0x18);
        iVar5 = FUN_004ed1f0(&local_24,&local_20,0);
        local_11 = iVar5 == 0;
        piVar6 = (int *)(local_28 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        piVar6 = (int *)(local_24 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        local_8._0_1_ = 0x15;
        piVar6 = (int *)(local_20 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        FUN_00637c10();
      }
      else {
        local_8._0_1_ = 0xd;
        uVar7 = extraout_ECX_00;
        FUN_00637690(uVar3);
        FUN_006377c0(uVar7);
        local_8._0_1_ = 0xf;
        piVar6 = (int *)(local_24 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        FUN_00621830("\nWarning! This folder is not empty!\n");
        FUN_00621830("\nDo you confirm this folder deletion?");
        FUN_0045c990("Yes, delete the folder and its content");
        local_8._0_1_ = 0x10;
        FUN_0045c990("No, cancel");
        local_8._0_1_ = 0x11;
        FUN_0045c990("Delete folder");
        local_8 = CONCAT31(local_8._1_3_,0x12);
        iVar5 = FUN_004ed1f0(&local_24,&local_20,0);
        local_11 = iVar5 == 0;
        piVar6 = (int *)(local_28 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        piVar6 = (int *)(local_24 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        local_8._0_1_ = 0xf;
        piVar6 = (int *)(local_20 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        FUN_00637c10();
      }
      if (local_11 == '\0') {
        local_8._0_1_ = 3;
        FUN_0040f7f0();
        FID_conflict__free(local_38);
        uVar1 = (undefined1)local_8;
        goto LAB_005478f5;
      }
      FUN_0040f7f0();
      FID_conflict__free(local_38);
    }
    else {
      uVar3 = FUN_00636a10(&local_24);
      local_8._0_1_ = 4;
      piVar6 = extraout_ECX;
      FUN_00637690(uVar3);
      uVar3 = 0x54755b;
      FUN_006377c0(piVar6);
      local_8._0_1_ = 6;
      _Memory = (int *)(local_24 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar4 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar4 == 0) {
          uVar3 = 0x54757e;
          FID_conflict__free(_Memory);
          piVar6 = _Memory;
        }
      }
      uVar3 = FUN_00636260(&local_28,&DAT_0073d3e0,uVar3,piVar6);
      local_8._0_1_ = 7;
      FUN_00636ec0(uVar3);
      local_8._0_1_ = 6;
      piVar6 = (int *)(local_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      FUN_00621830("\n\nDeleting this folder will break these Playlists.\n");
      FUN_00621830("\nDo you confirm this folder deletion?");
      FUN_0045c990("Yes, delete the folder and its content");
      local_8._0_1_ = 8;
      FUN_0045c990("No, cancel");
      local_8._0_1_ = 9;
      FUN_0045c990("Delete folder");
      local_8 = CONCAT31(local_8._1_3_,10);
      iVar4 = FUN_004ed1f0(&local_24,&local_28,0);
      local_11 = iVar4 == 0;
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_24 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8._0_1_ = 6;
      piVar6 = (int *)(local_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (local_11 == '\0') {
        local_8._0_1_ = 3;
        piVar6 = (int *)(local_1c + -8);
        uVar1 = (undefined1)local_8;
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
            uVar1 = (undefined1)local_8;
          }
        }
        goto LAB_005478f5;
      }
      piVar6 = (int *)(local_1c + -8);
      local_18 = iVar5;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    FUN_0040f7f0();
    FID_conflict__free(local_44);
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 == &DAT_00bfe124) goto LAB_00547938;
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
  }
  if (iVar5 == 0) {
    FID_conflict__free(piVar6);
  }
LAB_00547938:
  LeaveCriticalSection(lpCriticalSection);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

