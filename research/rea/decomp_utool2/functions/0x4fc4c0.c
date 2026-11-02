// rea decompile_all
// name: FUN_004fc4c0
// address: 0x4fc4c0
// body: available
// range: 0x4fc4c0-0x4fca81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc4c0(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  DWORD DVar8;
  undefined4 uVar9;
  int in_ECX;
  int *piVar10;
  undefined4 extraout_ECX;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  char *local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706cb8;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 != in_ECX + 0x6f8U) {
    return;
  }
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x2514) = 1;
  local_24 = in_ECX;
  FUN_006e25d0(&local_1c,0);
  iVar2 = *(int *)(in_ECX + 0xd74);
  piVar11 = (int *)(iVar2 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  local_8._1_3_ = 0;
  uVar3 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uVar1 = *(undefined1 *)(in_ECX + 0xd78);
  local_18 = CONCAT31(local_18._1_3_,uVar1);
  local_14 = *(undefined4 *)(in_ECX + 0xd70);
  param_1 = param_1 & 0xffffff;
  if ((local_1c == iVar2) ||
     (iVar6 = FUN_00448730(local_1c,iVar2,uVar5), uVar3 = local_8._1_3_, iVar6 == 0))
  goto LAB_004fc655;
  cVar4 = FUN_005b4fa0();
  if (cVar4 == '\0') {
    FUN_0045c990(&DAT_0073974c);
    local_8._0_1_ = 2;
    FUN_0045c990("The Song Name contains invalid characters.");
    local_8._0_1_ = 3;
    FUN_0045c990("Song Name Error");
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_004ecce0(&local_20);
    piVar10 = (int *)(param_1 - 8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    piVar10 = (int *)(local_24 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    local_8._0_1_ = 1;
    piVar10 = (int *)(local_20 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar10);
      }
    }
  }
  else {
    FUN_0045c990(".songprj");
    local_8._0_1_ = 5;
    piVar10 = (int *)(local_1c + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    puVar7 = (undefined4 *)FUN_00637730(local_1c);
    FUN_00410a10(&local_2c);
    local_8._0_1_ = 7;
    FUN_00636040(&local_34);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00635a10(&local_20,*puVar7);
    piVar10 = (int *)(local_34 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    piVar10 = (int *)(local_2c + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    piVar10 = (int *)(local_3c + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    local_8._0_1_ = 0xd;
    piVar10 = (int *)(local_28 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    if (*local_20 == '\0') {
LAB_004fc881:
      if (*(int *)(local_24 + 0xd70) == 0) {
        local_18 = local_18 & 0xffffff00;
      }
      else {
        FUN_0045c990("Cancel");
        local_8._0_1_ = 0x12;
        FUN_0045c990(&DAT_007397f0);
        local_8._0_1_ = 0x13;
        FUN_0045c990("Rename");
        local_8._0_1_ = 0x14;
        FUN_0045c990("Do you want to rename the Song file or to create a copy?");
        local_8._0_1_ = 0x15;
        FUN_0045c990("Song Name Change");
        local_8._0_1_ = 0x16;
        iVar6 = FUN_004ed490(&local_28,&local_34,&local_38);
        FUN_00637c10();
        FUN_00637c10();
        FUN_00637c10();
        FUN_00637c10();
        FUN_00637c10();
        if (iVar6 == 0) {
          local_18 = CONCAT31(local_18._1_3_,1);
          local_14 = 3;
        }
        else if (iVar6 == 1) {
          local_18 = (uint)local_18._1_3_ << 8;
          local_14 = 0;
        }
        else {
          param_1 = CONCAT13(1,(undefined3)param_1);
        }
      }
    }
    else {
      puVar7 = (undefined4 *)FUN_00458890();
      DVar8 = GetFileAttributesW((LPCWSTR)*puVar7);
      if ((DVar8 & 0x10) != 0) goto LAB_004fc881;
      FUN_0045c990("Yes, overwrite existing content");
      local_8._0_1_ = 0xe;
      FUN_0045c990("No, cancel name change");
      local_8._0_1_ = 0xf;
      FUN_0045c990("Song Overwrite");
      uVar13 = 0;
      puVar12 = local_30;
      local_8._0_1_ = 0x10;
      piVar10 = &local_2c;
      uVar9 = extraout_ECX;
      FUN_00637690(&local_1c);
      FUN_006377c0(uVar9);
      local_8._0_1_ = 0x11;
      iVar6 = FUN_004ed1f0(piVar10,puVar12,uVar13);
      param_1._3_1_ = iVar6 == 1;
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
      if (param_1._3_1_ != '\0') {
        local_14 = 3;
      }
      param_1 = CONCAT13(param_1._3_1_,(undefined3)param_1) ^ 0x1000000;
    }
    local_8._0_1_ = 1;
    piVar10 = (int *)(local_20 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    if (param_1._3_1_ == '\0') {
      FUN_0045c990("Rename");
      local_8._0_1_ = 0x17;
      puVar7 = operator_new(0x14);
      local_8._0_1_ = 0x18;
      operator_new(0x10);
      piVar10 = (int *)(local_1c + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        *piVar10 = *piVar10 + 1;
        UNLOCK();
      }
      local_38 = FUN_00410c40(local_14,local_1c,local_18);
      operator_new(0x10);
      piVar10 = (int *)(iVar2 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        *piVar10 = *piVar10 + 1;
        UNLOCK();
      }
      uVar9 = FUN_00410c40(*(undefined4 *)(local_24 + 0xd70),iVar2,uVar1);
      puVar7[1] = local_24 + -0x7c;
      *puVar7 = MTSEUA::vftable;
      puVar7[2] = 0;
      puVar7[3] = uVar9;
      puVar7[4] = local_38;
      local_8._0_1_ = 0x17;
      FUN_005b7430(puVar7,&param_1);
      piVar10 = (int *)(param_1 - 8);
      uVar3 = local_8._1_3_;
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar10);
          uVar3 = local_8._1_3_;
        }
      }
      goto LAB_004fc655;
    }
  }
  FUN_006e4900((int *)(in_ECX + 0xd74),0);
  uVar3 = local_8._1_3_;
LAB_004fc655:
  local_8._1_3_ = uVar3;
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  piVar11 = (int *)(local_1c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  ExceptionList = local_10;
  return;
}

