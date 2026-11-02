// rea decompile_all
// name: FUN_00503da0
// address: 0x503da0
// body: available
// range: 0x503da0-0x5043c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503da0(char *param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 *local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  char *local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00707888;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 != (char *)(in_ECX + 0x57c)) {
    return;
  }
  pcVar9 = "";
  local_1c = "";
  local_8 = 0;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  if (*(int *)(in_ECX + 0x10) != 0) {
    puVar4 = (undefined4 *)FUN_00410ea0(&param_1);
    pcVar9 = (char *)*puVar4;
    *puVar4 = &DAT_00bfe12c;
    piVar7 = (int *)(param_1 + -8);
    local_1c = pcVar9;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  pcVar10 = pcVar9;
  if (*(int *)(in_ECX + 0x14) != 0) {
    puVar4 = (undefined4 *)FUN_0040eb90(&param_1);
    pcVar10 = (char *)*puVar4;
    *puVar4 = pcVar9;
    piVar7 = (int *)(param_1 + -8);
    local_1c = pcVar10;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  FUN_006e25d0(&param_1,0);
  pcVar9 = param_1;
  local_8._0_1_ = 1;
  if (((*pcVar10 == '\0') || (param_1 == pcVar10)) ||
     (iVar5 = FUN_00448730(param_1,pcVar10,uVar3), iVar5 == 0)) goto LAB_0050436f;
  cVar2 = FUN_005b4fa0();
  if (cVar2 == '\0') {
    FUN_0045c990(&DAT_00739da4);
    local_8._0_1_ = 2;
    FUN_0045c990("The Playlist Name contains invalid characters.");
    local_8._0_1_ = 3;
    FUN_0045c990("Playlist Name Error");
    local_8._0_1_ = 4;
    FUN_004ecce0(local_20);
    FUN_00637c10();
    FUN_00637c10();
    local_8._0_1_ = 1;
    FUN_00637c10();
  }
  else {
    puVar8 = &DAT_00bfe12c;
    local_18 = &DAT_00bfe12c;
    local_8._0_1_ = 5;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 5;
    if (*(int *)(local_14 + 0x10) != 0) {
      FUN_0045c990(".playlistprj");
      local_8._0_1_ = 6;
      piVar7 = (int *)(pcVar9 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      puVar4 = (undefined4 *)FUN_00637730(pcVar9);
      FUN_00411300(local_28);
      local_8._0_1_ = 8;
      FUN_00636040(local_2c);
      local_8._0_1_ = 9;
      puVar4 = (undefined4 *)FUN_00635a10(&local_30,*puVar4);
      puVar8 = (undefined1 *)*puVar4;
      *puVar4 = &DAT_00bfe12c;
      local_18 = puVar8;
      FUN_0040ea50();
      FUN_0040ea50();
      FUN_0040ea50();
      FUN_00637c10();
      local_8._0_1_ = 5;
      FUN_00637c10();
      uVar1 = (undefined1)local_8;
    }
    local_8._0_1_ = uVar1;
    if (*(int *)(local_14 + 0x14) != 0) {
      FUN_0045c990(".playlistprj");
      local_8._0_1_ = 10;
      piVar7 = (int *)(pcVar9 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      local_30 = (undefined4 *)FUN_00637730(pcVar9);
      FUN_00410ea0(local_24);
      local_8._0_1_ = 0xc;
      FUN_00636040(local_28);
      local_8._0_1_ = 0xd;
      puVar4 = (undefined4 *)FUN_00635a10(local_2c,*local_30);
      local_18 = (undefined1 *)*puVar4;
      *puVar4 = puVar8;
      FUN_0040ea50();
      FUN_0040ea50();
      FUN_0040ea50();
      FUN_00637c10();
      local_8._0_1_ = 5;
      FUN_00637c10();
    }
    cVar2 = FUN_00636aa0();
    iVar5 = local_14;
    if (cVar2 == '\0') {
      if (*(int *)(local_14 + 0xe94) == 0) {
        FUN_00637b90(&param_1);
        *(undefined1 *)(iVar5 + 0xe9c) = 0;
      }
      else {
        FUN_0045c990("Cancel");
        local_8._0_1_ = 0x15;
        FUN_0045c990(&DAT_00739f94);
        local_8._0_1_ = 0x16;
        FUN_0045c990("Rename");
        local_8._0_1_ = 0x17;
        FUN_0045c990("Do you want to rename the Playlist file or to create a copy?");
        local_8._0_1_ = 0x18;
        FUN_0045c990("Playlist Name Change");
        local_8._0_1_ = 0x19;
        iVar6 = FUN_004ed490(local_20,local_2c,&local_30);
        FUN_00637c10();
        FUN_00637c10();
        FUN_00637c10();
        FUN_00637c10();
        local_8._0_1_ = 5;
        FUN_00637c10();
        if (iVar6 == 0) {
          FUN_00637b90(&param_1);
          *(undefined1 *)(iVar5 + 0xe9c) = 1;
          if (*(int *)(iVar5 + 0xe94) != 0) {
            *(undefined4 *)(iVar5 + 0xe94) = 3;
            FUN_0045c990("Modified");
            local_8 = CONCAT31(local_8._1_3_,0x1b);
            FUN_006e4900(&local_30,0);
            goto LAB_0050430d;
          }
          goto LAB_00504345;
        }
        if (iVar6 == 1) {
          FUN_00637b90(&param_1);
          *(undefined1 *)(iVar5 + 0xe9c) = 0;
          FUN_00503bf0(0);
        }
      }
    }
    else {
      FUN_0045c990("Yes, overwrite existing content");
      local_8._0_1_ = 0xe;
      FUN_0045c990("No, cancel name change");
      local_8._0_1_ = 0xf;
      FUN_0045c990("Playlist Overwrite");
      uVar13 = 0;
      puVar8 = local_28;
      local_8._0_1_ = 0x10;
      puVar12 = local_24;
      uVar11 = extraout_ECX;
      FUN_00637690(&param_1);
      FUN_006377c0(uVar11);
      local_8._0_1_ = 0x11;
      iVar6 = FUN_004ed1f0(puVar12,puVar8,uVar13);
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
      local_8._0_1_ = 5;
      FUN_00637c10();
      iVar5 = local_14;
      if (iVar6 == 1) {
        FUN_00637b90(&param_1);
        if (*(int *)(iVar5 + 0xe94) != 0) {
          *(undefined4 *)(iVar5 + 0xe94) = 3;
          FUN_0045c990("Modified");
          local_8 = CONCAT31(local_8._1_3_,0x13);
          FUN_006e4900(local_28,0);
LAB_0050430d:
          local_8._0_1_ = 5;
          FUN_00637c10();
          FUN_006e6170(0x1000280,DAT_00c7ebb0);
          FUN_006e6170(0x1000281,DAT_00c7ef94);
        }
LAB_00504345:
        FUN_00503b80();
      }
    }
    local_8._0_1_ = 1;
    FUN_0040ea50();
    in_ECX = local_14;
  }
  FUN_006e4900(in_ECX + 0xe98,0);
LAB_0050436f:
  piVar7 = (int *)(pcVar9 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = (int *)(pcVar10 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

