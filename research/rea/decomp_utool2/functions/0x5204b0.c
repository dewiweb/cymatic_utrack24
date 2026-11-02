// rea decompile_all
// name: FUN_005204b0
// address: 0x5204b0
// body: available
// range: 0x5204b0-0x520b0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005204b0(int *param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  DWORD DVar8;
  int *piVar9;
  undefined *in_ECX;
  int *piVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *pcVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piStack_90;
  undefined **ppuStack_8c;
  int *local_88;
  char **local_84;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  char *local_28;
  undefined *local_24;
  undefined *local_20;
  char *local_1c;
  undefined1 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a7cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_2c = (undefined1 *)0x0;
  local_18 = (undefined1 *)0x0;
  local_84 = (char **)0x5204f4;
  local_24 = in_ECX;
  FUN_0053f5c0();
  puVar12 = local_20;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (local_20 == PTR_DAT_00c7ed54) goto LAB_0052074e;
  local_84 = (char **)local_20;
  local_88 = (int *)0x52051d;
  iVar5 = FUN_0045c1e0();
  if (iVar5 == 0) goto LAB_0052074e;
  if ((undefined *)*param_1 == PTR_DAT_00c7ed54) {
LAB_00520788:
    pcVar11 = "";
    local_1c = "";
    local_8._0_1_ = 1;
    do {
      local_84 = (char **)0x0;
      local_88 = &local_3c;
      ppuStack_8c = (undefined **)0x5207a4;
      local_88 = (int *)FUN_00636a10();
      ppuStack_8c = &local_20;
      piStack_90 = &local_38;
      local_28 = (char *)FUN_00410ad0();
      local_2c = (undefined1 *)&piStack_90;
      local_8._0_1_ = 3;
      uVar14 = extraout_ECX;
      uVar7 = FUN_00636a10(&local_34);
      local_8._0_1_ = 4;
      uVar13 = extraout_ECX_00;
      FUN_00637690(uVar7);
      FUN_006377c0(uVar13);
      FUN_00637730(uVar14);
      piStack_90 = (int *)FUN_006377c0();
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_006e1bb0();
      piVar10 = (int *)(local_30 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x52083a;
          FID_conflict__free(piVar10);
        }
      }
      piVar10 = (int *)(local_34 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x52085d;
          FID_conflict__free(piVar10);
        }
      }
      piVar10 = (int *)(local_38 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x520880;
          FID_conflict__free(piVar10);
        }
      }
      local_8._0_1_ = 10;
      piVar10 = (int *)(local_3c + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x5208a7;
          FID_conflict__free(piVar10);
        }
      }
      local_84 = (char **)0x5;
      local_88 = (int *)0x5208b5;
      cVar3 = FUN_006b7db0();
      if (cVar3 == '\0') {
        FUN_006e1b20();
        piVar10 = (int *)(pcVar11 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_84 = (char **)0x520b05;
            FID_conflict__free(piVar10);
          }
        }
        uVar4 = 0;
        goto LAB_00520750;
      }
      local_84 = (char **)0x5208c9;
      puVar6 = (undefined4 *)FUN_006e19a0();
      pcVar2 = (char *)*puVar6;
      *puVar6 = pcVar11;
      piVar10 = (int *)(local_40 + -8);
      local_1c = pcVar2;
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x5208f2;
          FID_conflict__free(piVar10);
        }
      }
      pcVar11 = pcVar2;
      if (*pcVar2 == '\0') {
LAB_0052096b:
        local_11 = '\0';
      }
      else {
        puVar6 = (undefined4 *)FUN_00458890();
        local_84 = (char **)0x52090d;
        DVar8 = GetFileAttributesW((LPCWSTR)*puVar6);
        pcVar11 = local_1c;
        if ((DVar8 & 0x10) != 0) goto LAB_0052096b;
        local_84 = (char **)0x52091d;
        piVar10 = (int *)FUN_00636a10();
        local_8._0_1_ = 0xb;
        local_2c = (undefined1 *)((uint)local_18 | 1);
        local_84 = (char **)0x52093b;
        local_18 = local_2c;
        piVar9 = (int *)FUN_00636a10();
        local_18 = (undefined1 *)((uint)local_18 | 2);
        if (*piVar9 != *piVar10) {
          local_84 = (char **)*piVar9;
          local_88 = (int *)0x520958;
          iVar5 = FUN_00448730();
          pcVar11 = local_1c;
          if (iVar5 != 0) goto LAB_0052096b;
        }
        local_11 = '\x01';
        pcVar11 = local_1c;
      }
      if (((uint)local_18 & 2) != 0) {
        local_18 = (undefined1 *)((uint)local_18 & 0xfffffffd);
        piVar10 = (int *)(local_44 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_84 = (char **)0x52099d;
            FID_conflict__free(piVar10);
          }
        }
      }
      local_8 = 10;
      if (((uint)local_18 & 1) != 0) {
        local_18 = (undefined1 *)((uint)local_18 & 0xfffffffe);
        piVar10 = (int *)(local_48 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_84 = (char **)0x5209d5;
            FID_conflict__free(piVar10);
          }
        }
      }
      local_8._0_1_ = 1;
      FUN_006e1b20();
    } while (local_11 == '\0');
    local_84 = (char **)0x5209fa;
    FUN_00636040();
    local_8._0_1_ = 0xc;
    local_84 = (char **)0x520a0d;
    local_11 = FUN_0053f320();
    local_8._0_1_ = 1;
    piVar10 = (int *)(local_48 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_84 = (char **)0x520a34;
        FID_conflict__free(piVar10);
      }
    }
    if (local_11 != '\0') {
      local_84 = (char **)0x520a52;
      FUN_005406f0();
      if (*(int *)(*(int *)(*(int *)(local_24 + 0x78) + 0xc) + 0x30) == 2) {
        local_84 = (char **)0x520a6d;
        FUN_00636040();
        local_8._0_1_ = 0xd;
        local_84 = (char **)0x520a7c;
        piVar10 = (int *)FUN_00636040();
        iVar5 = *param_1;
        *param_1 = *piVar10;
        *piVar10 = iVar5;
        FUN_0040ea50();
      }
      else {
        local_84 = (char **)0x520aa0;
        piVar10 = (int *)FUN_00636040();
        iVar5 = *param_1;
        *param_1 = *piVar10;
        *piVar10 = iVar5;
      }
      FUN_0040ea50();
      FUN_00548700();
      puVar12 = local_20;
    }
    piVar10 = (int *)(pcVar11 + -8);
    if (piVar10 == &DAT_00bfe124) goto LAB_0052074e;
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
  }
  else {
    local_84 = (char **)*param_1;
    local_88 = (int *)0x520549;
    iVar5 = FUN_0045c1e0();
    if (iVar5 == 0) goto LAB_00520788;
    local_18 = &DAT_00bfe12c;
    local_8._0_1_ = 0xe;
    iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x78) + 0xc) + 0x30);
    if (iVar5 == 1) {
      local_84 = (char **)0x520613;
      FUN_00541a70();
      local_8._0_1_ = 0x11;
      local_88 = (int *)DAT_00c8a8e8;
      ppuStack_8c = &local_24;
      piStack_90 = (int *)0x520631;
      FUN_00634090();
      local_8 = CONCAT31(local_8._1_3_,0x12);
      local_84 = &local_28;
      local_88 = (int *)0x520648;
      puVar6 = (undefined4 *)FUN_00635a10();
      puVar1 = (undefined1 *)*puVar6;
      *puVar6 = local_18;
      piVar10 = (int *)(local_28 + -8);
      local_18 = puVar1;
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x520672;
          FID_conflict__free(piVar10);
        }
      }
      piVar10 = (int *)(local_24 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x520695;
          FID_conflict__free(piVar10);
        }
      }
      pcVar11 = local_1c;
LAB_0052069f:
      local_8._0_1_ = 0xe;
      piVar10 = (int *)(pcVar11 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x5206bc;
          FID_conflict__free(piVar10);
        }
      }
    }
    else if (iVar5 == 2) {
      local_84 = (char **)0x520586;
      FUN_00636040();
      local_8._0_1_ = 0xf;
      local_84 = (char **)0x520595;
      FUN_00636a10();
      local_8 = CONCAT31(local_8._1_3_,0x10);
      local_84 = &local_24;
      local_88 = (int *)0x5205ac;
      puVar6 = (undefined4 *)FUN_00635a10();
      puVar1 = (undefined1 *)*puVar6;
      *puVar6 = local_18;
      piVar10 = (int *)(local_24 + -8);
      local_18 = puVar1;
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x5205d5;
          FID_conflict__free(piVar10);
        }
      }
      piVar10 = (int *)(local_1c + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (char **)0x5205f8;
          FID_conflict__free(piVar10);
        }
      }
      pcVar11 = local_28;
      goto LAB_0052069f;
    }
    if (local_18 != PTR_DAT_00c7ed54) {
      local_84 = (char **)local_18;
      local_88 = (int *)0x5206db;
      iVar5 = FUN_0045c1e0();
      if (iVar5 != 0) {
        piVar10 = (int *)(local_18 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          *piVar10 = *piVar10 + 1;
          UNLOCK();
        }
        local_84 = (char **)0x5206ff;
        cVar3 = FUN_005b5020();
        if (cVar3 != '\0') {
          local_84 = (char **)0x520715;
          cVar3 = FUN_0053f320();
          if (cVar3 != '\0') {
            local_84 = (char **)0x520726;
            FUN_005406f0();
            FUN_00548700();
          }
        }
      }
    }
    piVar10 = (int *)(local_18 + -8);
    if (piVar10 == &DAT_00bfe124) goto LAB_0052074e;
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
  }
  if (iVar5 == 0) {
    local_84 = (char **)0x52074b;
    FID_conflict__free(piVar10);
  }
LAB_0052074e:
  uVar4 = 1;
LAB_00520750:
  piVar10 = (int *)(puVar12 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (char **)0x52076e;
      FID_conflict__free(piVar10);
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

