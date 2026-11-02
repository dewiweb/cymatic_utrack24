// rea decompile_all
// name: FUN_00504410
// address: 0x504410
// body: available
// range: 0x504410-0x5049ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00504410(void)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int *extraout_ECX;
  code *pcVar10;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_007078fb;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = "";
  local_8 = 0;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    puVar5 = (undefined4 *)FUN_00411300(&local_24);
    local_18 = (char *)*puVar5;
    *puVar5 = &DAT_00bfe12c;
    piVar9 = (int *)(local_24 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0054bb90(in_ECX + 0xf14);
    FUN_005021f0(*(undefined4 *)(in_ECX + 0x8c));
  }
  if (*(int *)(in_ECX + 0x90) != 0) {
    puVar5 = (undefined4 *)FUN_00410ea0(&local_24);
    pcVar1 = (char *)*puVar5;
    *puVar5 = local_18;
    piVar9 = (int *)(local_24 + -8);
    local_18 = pcVar1;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_00557c70(in_ECX + 0xf14);
    FUN_00501f50(*(undefined4 *)(in_ECX + 0x90));
  }
  bVar3 = 1;
  local_11 = 1;
  pcVar10 = GetFileAttributesW_exref;
  while( true ) {
    if (*(int *)(in_ECX + 0x8c) != 0) {
      iVar6 = FUN_0054b040(uVar4);
      if (iVar6 == 0) {
        if ((*(char *)(in_ECX + 0xf18) != '\0') && (*local_18 != '\0')) {
          puVar5 = (undefined4 *)FUN_00458890();
          uVar7 = (*pcVar10)(*puVar5);
          if ((uVar7 & 0x10) == 0) {
            FUN_00635980();
          }
        }
        *(undefined4 *)(in_ECX + 0xf10) = 4;
        local_11 = 0;
        FUN_0045c990("Saved");
        local_8._0_1_ = 3;
        FUN_006e4900(&local_20,0);
        local_8 = (uint)local_8._1_3_ << 8;
        piVar9 = (int *)(local_20 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        FUN_006e6170(0x1000280,DAT_00c7ef74);
        FUN_006e6170(0x1000281,DAT_00c7ef94);
        FUN_00503b80();
        pcVar10 = GetFileAttributesW_exref;
        bVar3 = local_11;
      }
      else if (iVar6 == 1) {
        FUN_0045c990("Please select the Playlist library directory");
        FUN_00411300(&local_28);
        local_8._0_1_ = 5;
        uVar8 = FUN_00636040(&local_24);
        local_8 = CONCAT31(local_8._1_3_,6);
        FUN_006e1bb0(&local_1c,uVar8,&PTR_DAT_00c7ed68,1,0);
        piVar9 = (int *)(local_24 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        piVar9 = (int *)(local_28 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_8._0_1_ = 10;
        piVar9 = (int *)(local_1c + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar9);
            piVar9 = extraout_ECX;
          }
        }
        cVar2 = FUN_006b7db0(9,piVar9);
        local_8 = (uint)local_8._1_3_ << 8;
        local_11 = local_11 & -(cVar2 != '\0');
        FUN_006e1b20();
        bVar3 = local_11;
      }
      else {
        bVar3 = local_11;
        if (iVar6 == 2) {
          FUN_0045c990(&DAT_00739e2c);
          local_8._0_1_ = 0xb;
          FUN_0045c990(
                      "Failed to save the Playlist project file.\n\nPlease check that the Playlist Name doesn\'t contain special characters."
                      );
          local_8._0_1_ = 0xc;
          FUN_0045c990("Playlist file saving error");
          local_8 = CONCAT31(local_8._1_3_,0xd);
          FUN_004ecce0(&local_24);
          piVar9 = (int *)(local_20 + -8);
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar9);
            }
          }
          piVar9 = (int *)(local_1c + -8);
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar9);
            }
          }
          piVar9 = (int *)(local_24 + -8);
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar9);
            }
          }
          local_11 = 0;
          goto LAB_00504960;
        }
      }
    }
    if (*(int *)(in_ECX + 0x90) != 0) break;
    if (bVar3 == 0) {
LAB_00504934:
      if (*(int *)(in_ECX + 0x8c) != 0) {
        FUN_00548700();
      }
      if (*(int *)(in_ECX + 0xab8) != 0) {
        FUN_00554c60();
      }
      FUN_00503b80();
      local_11 = 1;
LAB_00504960:
      piVar9 = (int *)(local_18 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar9);
          ExceptionList = local_10;
          return local_11;
        }
      }
      ExceptionList = local_10;
      return local_11;
    }
  }
  uVar8 = FUN_00410ea0(&local_28);
  local_8._0_1_ = 0xe;
  local_11 = FUN_00557e40(uVar8);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar9 = (int *)(local_28 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (((local_11 != 0) && (*(char *)(in_ECX + 0xf18) != '\0')) && (*local_18 != '\0')) {
    puVar5 = (undefined4 *)FUN_00458890();
    uVar4 = (*pcVar10)(*puVar5);
    if ((uVar4 & 0x10) == 0) {
      FUN_00635980();
    }
  }
  *(undefined4 *)(in_ECX + 0xf10) = 4;
  FUN_0045c990("Saved");
  local_8._0_1_ = 0x11;
  FUN_006e4900(&local_24,0);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar9 = (int *)(local_24 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_006e6170(0x1000280,DAT_00c7ef74);
  FUN_006e6170(0x1000281,DAT_00c7ef94);
  if ((*(int *)(in_ECX + 0xf10) == 1) || (*(int *)(in_ECX + 0xf10) == 4)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  FUN_004ea5c0(1,(**(char **)(in_ECX + 0xf14) != '\0' && 0 < *(int *)(in_ECX + 0xeec)) & bVar3);
  FUN_004ea730(1);
  FUN_004ea0c0();
  goto LAB_00504934;
}

