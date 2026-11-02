// rea decompile_all
// name: FUN_00588940
// address: 0x588940
// body: available
// range: 0x588940-0x588f84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00588940(void)

{
  bool bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071376d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("Cymatic Audio uTool2",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_00636040(&local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)*puVar2 != '\0') {
    puVar2 = (undefined4 *)FUN_00458890();
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if (DVar3 != 0xffffffff) {
      bVar1 = true;
      goto LAB_005889c1;
    }
  }
  bVar1 = false;
LAB_005889c1:
  local_15 = !bVar1;
  local_8 = local_8 & 0xffffff00;
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (local_15 != '\0') {
    FUN_00636040(&local_1c);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00634890(&local_14);
    piVar7 = (int *)(local_14 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar7 = (int *)(local_1c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  if (*PTR_DAT_00c7ebcc != '\0') {
    puVar2 = (undefined4 *)FUN_00458890();
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      local_20 = 1;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      uVar4 = extraout_ECX;
      do {
        uVar10 = 0;
        uVar9 = 1;
        uVar5 = uVar4;
        uVar8 = uVar4;
        FUN_00637690(&local_28);
        FUN_006377c0(uVar4);
        FUN_00637730(uVar5);
        uVar4 = FUN_006377c0(uVar8);
        local_8._0_1_ = 3;
        piVar7 = (int *)(local_28 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        uVar5 = FUN_006377c0(local_28);
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_006e6f80(uVar5,uVar4,uVar9,uVar10);
        piVar7 = (int *)(local_48 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8._0_1_ = 7;
        piVar7 = (int *)(local_4c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FUN_006e6170(0x1000204,DAT_00c7ef90);
        FUN_0045c990("Email:");
        local_8._0_1_ = 8;
        FUN_0045c990(&DAT_00738bfb);
        local_8._0_1_ = 9;
        pcVar11 = "EMAIL";
        FUN_0045c990("EMAIL");
        local_8 = CONCAT31(local_8._1_3_,10);
        FUN_006d2650(&local_2c,&local_30,&local_34,pcVar11);
        piVar7 = (int *)(local_2c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_30 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8._0_1_ = 7;
        piVar7 = (int *)(local_34 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FUN_0045c990(&DAT_00746064);
        local_8._0_1_ = 0xb;
        FUN_006e6ce0(&local_38,0,&local_64,&local_58);
        local_8._0_1_ = 7;
        piVar7 = (int *)(local_38 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FUN_0045c990("View data");
        local_8._0_1_ = 0xc;
        FUN_006e6ce0(&local_3c,1,&local_7c,&local_70);
        local_8._0_1_ = 7;
        piVar7 = (int *)(local_3c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FUN_0045c990("Yes, send it");
        local_8._0_1_ = 0xd;
        FUN_006e6ce0(&local_40,2,&local_94,&local_88);
        local_8._0_1_ = 7;
        piVar7 = (int *)(local_40 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        iVar6 = FUN_006e5240();
        if (iVar6 == 0) {
LAB_00588eab:
          local_20 = 0;
        }
        else if (iVar6 == 1) {
          local_14 = &DAT_00bfe12c;
          local_8._0_1_ = 0xe;
          FUN_00634440(&local_14);
          piVar7 = (int *)(local_14 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar7);
            }
          }
        }
        else if (iVar6 == 2) {
          if (*PTR_DAT_00c7ebc4 == '\0') {
            FUN_00587e60();
          }
          else {
            FUN_0045c990("EMAIL");
            local_8._0_1_ = 0xf;
            FUN_0045c990("crashreport");
            local_8._0_1_ = 0x10;
            uVar4 = FUN_006d2610(&local_24,&local_1c);
            local_8._0_1_ = 0x11;
            FUN_00587ff0(uVar4);
            piVar7 = (int *)(local_24 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            piVar7 = (int *)(local_44 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            piVar7 = (int *)(local_1c + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar7);
              }
            }
          }
          goto LAB_00588eab;
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_006e6e30();
        uVar4 = extraout_ECX_00;
      } while (local_20 != 0);
      FUN_00635980();
    }
    else if (*PTR_DAT_00c7ebcc != '\0') {
      puVar2 = (undefined4 *)FUN_00458890();
      DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
      if (DVar3 != 0xffffffff) {
        FUN_00632db0();
      }
    }
  }
  AddVectoredExceptionHandler(1,FUN_00588f90);
  piVar7 = (int *)(local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

