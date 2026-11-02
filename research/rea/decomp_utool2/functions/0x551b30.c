// rea decompile_all
// name: FUN_00551b30
// address: 0x551b30
// body: available
// range: 0x551b30-0x552dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00551b30(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  LPCWSTR pWVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  wint_t wVar9;
  undefined4 *puVar10;
  DWORD DVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  LPCWSTR pWVar21;
  char *pcVar22;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  void *local_88;
  int local_84;
  int local_80;
  char *local_7c;
  void *local_78;
  int local_74;
  int local_70;
  uint local_6c;
  void *local_68;
  undefined4 local_64;
  int local_60;
  void *local_5c;
  int local_58;
  int local_54;
  char *local_50;
  uint local_4c;
  undefined4 *local_48;
  void *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  char local_1d;
  uint local_1c;
  char local_15;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00710c5a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (LPCWSTR)0x0;
  local_28 = 0;
  local_68 = (void *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_78 = (void *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_88 = (void *)0x0;
  local_84 = 0;
  local_80 = 0;
  local_7c = "";
  local_8 = 5;
  puVar10 = (undefined4 *)FUN_00635a10(&local_14);
  pcVar22 = (char *)*puVar10;
  *puVar10 = &DAT_00bfe12c;
  pWVar21 = local_14 + -4;
  local_7c = pcVar22;
  local_50 = pcVar22;
  if (pWVar21 != (LPCWSTR)&DAT_00bfe124) {
    LOCK();
    iVar18 = *(int *)pWVar21;
    *(int *)pWVar21 = *(int *)pWVar21 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      FID_conflict__free(pWVar21);
    }
  }
  if (*pcVar22 != '\0') {
    puVar10 = (undefined4 *)FUN_00458890();
    DVar11 = GetFileAttributesW((LPCWSTR)*puVar10);
    if ((DVar11 & 0x10) == 0) {
      FUN_00632db0();
    }
    local_50 = local_7c;
    pcVar22 = local_7c;
  }
  FUN_0045c990();
  local_8._0_1_ = 6;
  FUN_00635ea0(&local_68,7,0);
  local_8._0_1_ = 5;
  pWVar21 = local_14 + -4;
  if (pWVar21 != (LPCWSTR)&DAT_00bfe124) {
    LOCK();
    iVar18 = *(int *)pWVar21;
    *(int *)pWVar21 = *(int *)pWVar21 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      FID_conflict__free(pWVar21);
    }
  }
  if (local_60 < 1) goto LAB_00552c62;
  iVar18 = 0;
  do {
    local_14 = (LPCWSTR)FUN_0040f6b0(&local_8c);
    local_8._0_1_ = 7;
    pcVar22 = *(char **)local_14;
    if (*pcVar22 == '\0') {
      pWVar21 = L"";
    }
    else {
      FUN_0045d6b0();
      pcVar1 = pcVar22 + 1;
      do {
        cVar5 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar5 != '\0');
      FUN_00455850();
      *(int *)local_14 = local_24;
      pWVar21 = (LPCWSTR)(local_24 + ((uint)(pcVar22 + (4 - (int)pcVar1)) & 0xfffffffc));
      local_14 = pWVar21;
      FUN_0045e410();
    }
    DVar11 = GetFileAttributesW(pWVar21);
    if (((DVar11 & 0x10) == 0) || (DVar11 == 0xffffffff)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    local_1d = !bVar7;
    local_8._0_1_ = 5;
    piVar16 = (int *)(local_8c + -8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar13 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        FID_conflict__free(piVar16);
      }
    }
    if (local_1d != '\0') {
      FUN_0040f6b0(&local_90);
      local_8._0_1_ = 8;
      FUN_006360d0();
      local_8 = CONCAT31(local_8._1_3_,10);
      piVar16 = (int *)(local_90 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      FUN_0045c990();
      uVar19 = local_94;
      uVar20 = local_98;
      if (local_94 == local_98) {
        local_14 = (LPCWSTR)0x0;
      }
      else {
        local_14 = (LPCWSTR)FUN_0045c1e0(local_94);
      }
      piVar16 = (int *)(uVar20 - 8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      if (local_14 == (LPCWSTR)0x0) {
        local_14 = (LPCWSTR)FUN_0040f6b0(&local_9c);
        if (local_40 < local_3c + 1) {
          FUN_00409cf0();
        }
        iVar12 = local_3c + 1;
        puVar10 = (undefined4 *)((int)local_44 + local_3c * 4);
        iVar13 = local_9c;
        local_3c = iVar12;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *(undefined4 *)local_14;
          *(undefined1 **)local_14 = &DAT_00bfe12c;
        }
LAB_00552046:
        piVar16 = (int *)(iVar13 + -8);
        if (piVar16 != &DAT_00bfe124) {
LAB_00552053:
          LOCK();
          iVar13 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar13 == 0) {
            FID_conflict__free(piVar16);
          }
        }
      }
      else {
        FUN_0045c990();
        uVar20 = local_6c;
        if (uVar19 == local_6c) {
          local_14 = (LPCWSTR)0x0;
        }
        else {
          local_14 = (LPCWSTR)FUN_0045c1e0(uVar19);
        }
        piVar16 = (int *)(uVar20 - 8);
        if (piVar16 != &DAT_00bfe124) {
          LOCK();
          iVar13 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar13 == 0) {
            FID_conflict__free(piVar16);
          }
        }
        if (local_14 != (LPCWSTR)0x0) {
          FUN_0045c990();
          uVar20 = local_4c;
          if (uVar19 == local_4c) {
            local_14 = (LPCWSTR)0x0;
          }
          else {
            local_14 = (LPCWSTR)FUN_0045c1e0(uVar19);
          }
          piVar16 = (int *)(uVar20 - 8);
          if (piVar16 != &DAT_00bfe124) {
            LOCK();
            iVar13 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar13 == 0) {
              FID_conflict__free(piVar16);
            }
          }
          if (local_14 == (LPCWSTR)0x0) {
            local_14 = (LPCWSTR)FUN_0040f6b0(&local_34);
            if (local_84 < local_80 + 1) {
              FUN_00409cf0();
            }
            iVar12 = local_80 + 1;
            puVar10 = (undefined4 *)((int)local_88 + local_80 * 4);
            iVar13 = local_34;
            local_80 = iVar12;
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = *(undefined4 *)local_14;
              *(undefined1 **)local_14 = &DAT_00bfe12c;
            }
          }
          else {
            local_14 = L"洮摩";
            FUN_0044ec90();
            iVar13 = FUN_0045e120(uVar19);
            if (iVar13 != 0) goto LAB_00552066;
            FUN_0040f6b0(&local_30);
            FUN_004153b0();
            iVar13 = local_30;
          }
          goto LAB_00552046;
        }
        puVar10 = (undefined4 *)FUN_0040f6b0(&local_48);
        if (local_74 < local_70 + 1) {
          FUN_00409cf0();
        }
        iVar13 = local_70 + 1;
        puVar4 = (undefined4 *)((int)local_78 + local_70 * 4);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar10;
          *puVar10 = &DAT_00bfe12c;
        }
        piVar16 = local_48 + -2;
        local_70 = iVar13;
        if (piVar16 != &DAT_00bfe124) goto LAB_00552053;
      }
LAB_00552066:
      piVar16 = (int *)(uVar19 - 8);
      local_8._0_1_ = 5;
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
    }
    pcVar22 = local_50;
  } while ((*(char *)(local_2c + 0x5c) == '\0') && (iVar18 = iVar18 + 1, iVar18 < local_60));
  if (0 < local_70) {
    iVar18 = local_24;
    if (local_70 == 1) {
      FUN_0045c990();
      FUN_0040f6b0(&local_6c);
      local_8 = 0xc;
      local_14 = (LPCWSTR)0x3;
      piVar16 = (int *)FUN_00636a10();
      iVar18 = local_24;
      local_8._0_1_ = 0xd;
      local_8._1_3_ = 0;
      local_28 = 7;
      local_14 = (LPCWSTR)0x7;
      if ((*piVar16 != local_24) && (iVar13 = FUN_0045c1e0(*piVar16), iVar13 != 0)) {
        piVar16 = (int *)FUN_00636a10();
        FUN_0040f6b0(&local_34);
        local_8._0_1_ = 0xf;
        local_8._1_3_ = 0;
        local_14 = (LPCWSTR)0x1f;
        piVar14 = (int *)FUN_006369b0();
        local_28 = 0x3f;
        if ((*piVar14 != *piVar16) && (iVar13 = FUN_0045c1e0(*piVar14), iVar13 != 0))
        goto LAB_0055218a;
      }
      local_15 = '\x01';
    }
    else {
LAB_0055218a:
      local_15 = '\0';
    }
    if ((local_28 & 0x20) != 0) {
      local_28 = local_28 & 0xffffffdf;
      piVar16 = (int *)(local_30 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
    }
    if ((local_28 & 0x10) != 0) {
      local_28 = local_28 & 0xffffffef;
      piVar16 = (int *)(local_34 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
    }
    if ((local_28 & 8) != 0) {
      local_28 = local_28 & 0xfffffff7;
      piVar16 = (int *)(local_4c - 8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
    }
    if ((local_28 & 4) != 0) {
      local_28 = local_28 & 0xfffffffb;
      piVar16 = local_48 + -2;
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
    }
    if ((local_28 & 2) != 0) {
      local_28 = local_28 & 0xfffffffd;
      piVar16 = (int *)(local_6c - 8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
    }
    local_8._0_1_ = 5;
    local_8._1_3_ = 0;
    if ((local_28 & 1) != 0) {
      local_28 = local_28 & 0xfffffffe;
      piVar16 = (int *)(iVar18 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar18 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(piVar16);
        }
      }
    }
    if (local_15 != '\0') {
      local_14 = L"";
      FUN_0040f6b0(&local_30);
      local_8._0_1_ = 0x11;
      FUN_00636040();
      local_8._0_1_ = 0x13;
      piVar16 = (int *)(local_30 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar18 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,0x14);
      puVar10 = (undefined4 *)FUN_00635a10(&local_34);
      local_14 = (LPCWSTR)*puVar10;
      *puVar10 = &DAT_00bfe12c;
      piVar16 = (int *)(local_34 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar18 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      local_8._0_1_ = 0x13;
      piVar16 = (int *)(local_4c - 8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar18 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      if ((char)*local_14 == '\0') {
LAB_005523c3:
        uVar15 = FUN_0040f6b0(&local_30);
        local_8 = CONCAT31(local_8._1_3_,0x16);
        FUN_00551820(param_1,uVar15);
        iVar18 = local_30;
      }
      else {
        puVar10 = (undefined4 *)FUN_00458890();
        DVar11 = GetFileAttributesW((LPCWSTR)*puVar10);
        if ((DVar11 & 0x10) != 0) goto LAB_005523c3;
        FUN_00636040();
        local_8 = CONCAT31(local_8._1_3_,0x15);
        FUN_00632db0();
        iVar18 = local_34;
      }
      piVar16 = (int *)(iVar18 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar18 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      piVar16 = (int *)(local_24 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar18 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      local_8._0_1_ = 5;
      pWVar21 = local_14 + -4;
      if (pWVar21 != (LPCWSTR)&DAT_00bfe124) {
        LOCK();
        iVar18 = *(int *)pWVar21;
        *(int *)pWVar21 = *(int *)pWVar21 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(pWVar21);
        }
      }
    }
  }
  if ((0 < local_80) && (iVar18 = 0, 0 < local_80)) {
    do {
      if (*(char *)(local_2c + 0x5c) != '\0') break;
      FUN_0040f6b0(&local_30);
      local_8._0_1_ = 0x17;
      FUN_00551710(param_1);
      local_8._0_1_ = 5;
      piVar16 = (int *)(local_30 + -8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < local_80);
  }
  if (local_3c < 1) goto LAB_00552c62;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_8._0_1_ = 0x18;
  uVar8 = (undefined1)local_8;
  local_8._0_1_ = 0x18;
  local_1d = '\0';
  local_24 = 0;
  uVar20 = local_28;
  if (0 < local_3c) {
LAB_005524f1:
    FUN_0040f6b0(&local_34);
    local_8 = CONCAT31(local_8._1_3_,0x19);
    puVar10 = (undefined4 *)FUN_00636a10();
    pbVar17 = &DAT_0073df44;
    do {
      while( true ) {
        bVar6 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        if (-1 < (char)bVar6) break;
        bVar6 = *pbVar17;
        while ((bVar6 & 0xc0) == 0x80) {
          pbVar2 = pbVar17 + 1;
          pbVar17 = pbVar17 + 1;
          bVar6 = *pbVar2;
        }
      }
    } while (bVar6 != 0);
    iVar18 = FUN_0045e120(*puVar10);
    local_15 = iVar18 == 0;
    piVar16 = (int *)(local_30 + -8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
    local_8._0_1_ = 0x18;
    piVar16 = (int *)(local_34 + -8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
    if (local_15 == '\0') {
      FUN_0040f6b0(&local_38);
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      local_14 = (LPCWSTR)(uVar20 | 0x40);
      local_48 = (undefined4 *)FUN_00636a10();
      uVar19 = uVar20 | 0xc0;
      local_8 = 0x1b;
      pbVar17 = &DAT_0073df20;
      do {
        while( true ) {
          bVar6 = *pbVar17;
          pbVar17 = pbVar17 + 1;
          if (-1 < (char)bVar6) break;
          bVar6 = *pbVar17;
          while ((bVar6 & 0xc0) == 0x80) {
            pbVar2 = pbVar17 + 1;
            pbVar17 = pbVar17 + 1;
            bVar6 = *pbVar2;
          }
        }
      } while (bVar6 != 0);
      local_6c = uVar19;
      iVar18 = FUN_0045e120(*local_48);
      if (iVar18 == 0) {
        FUN_0040f6b0(&local_28);
        local_8 = 0x1c;
        local_14 = (LPCWSTR)(uVar20 | 0x1c0);
        puVar10 = (undefined4 *)FUN_00636a10();
        uVar20 = local_6c;
        local_8 = 0x1d;
        pbVar17 = (byte *)*puVar10;
        uVar19 = local_6c | 0x300;
        iVar18 = 0;
LAB_005526d0:
        do {
          bVar6 = *pbVar17;
          pbVar17 = pbVar17 + 1;
          if ((char)bVar6 < '\0') {
            if ((*pbVar17 & 0xc0) == 0x80) {
              do {
                pbVar2 = pbVar17 + 1;
                pbVar17 = pbVar17 + 1;
              } while ((*pbVar2 & 0xc0) == 0x80);
              iVar18 = iVar18 + 1;
              goto LAB_005526d0;
            }
          }
          else if (bVar6 == 0) goto LAB_005526f4;
          iVar18 = iVar18 + 1;
        } while( true );
      }
      goto LAB_005527c5;
    }
    puVar10 = (undefined4 *)FUN_0040f6b0(&local_4c);
    if (local_58 < local_54 + 1) {
      FUN_00409cf0();
    }
    puVar4 = (undefined4 *)((int)local_5c + local_54 * 4);
    uVar19 = local_4c;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar10;
      *puVar10 = &DAT_00bfe12c;
    }
    goto LAB_005529bd;
  }
LAB_00552b28:
  local_8._0_1_ = uVar8;
  iVar18 = 0;
  if (0 < local_3c) {
    do {
      pcVar22 = local_50;
      if (*(char *)(local_2c + 0x5c) != '\0') break;
      piVar16 = (int *)FUN_0040f6b0(&local_1c);
      if ((undefined *)*piVar16 == PTR_DAT_00c7ed54) {
        iVar13 = 0;
      }
      else {
        iVar13 = FUN_0045c1e0(*piVar16);
      }
      piVar16 = (int *)(local_1c - 8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar12 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar12 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      if (iVar13 != 0) {
        FUN_0040f6b0(&stack0xffffff34,iVar18);
        FUN_00548e50();
        local_8._0_1_ = 0x25;
        if ((int)param_2[9] < 3) {
          operator_new(0x60);
          local_8._0_1_ = 0x26;
          if (param_2 != (undefined4 *)0x0) {
            LOCK();
            param_2[1] = param_2[1] + 1;
            UNLOCK();
          }
          iVar13 = FUN_00550540(param_1);
          local_8._0_1_ = 0x25;
          if (iVar13 != 0) {
            LOCK();
            *(int *)(iVar13 + 4) = *(int *)(iVar13 + 4) + 1;
            UNLOCK();
          }
          FUN_005514c0();
        }
        local_8._0_1_ = 0x18;
        if (param_2 != (undefined4 *)0x0) {
          LOCK();
          piVar16 = param_2 + 1;
          iVar13 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)*param_2)();
          }
        }
      }
      iVar18 = iVar18 + 1;
      pcVar22 = local_50;
    } while (iVar18 < local_3c);
  }
  local_8._0_1_ = 5;
  FUN_0040f7f0();
  FID_conflict__free(local_5c);
LAB_00552c62:
  if ((local_60 != 0) && (iVar18 = 0, 0 < local_60)) {
    do {
      pcVar22 = local_50;
      if (*(char *)(local_2c + 0x5c) != '\0') break;
      FUN_0040f6b0(&local_1c);
      local_8._0_1_ = 0x27;
      puVar10 = (undefined4 *)FUN_00458890();
      DVar11 = GetFileAttributesW((LPCWSTR)*puVar10);
      if (((DVar11 & 0x10) == 0) || (bVar7 = true, DVar11 == 0xffffffff)) {
        bVar7 = false;
      }
      local_8._0_1_ = 5;
      piVar16 = (int *)(local_1c - 8);
      if (piVar16 != &DAT_00bfe124) {
        LOCK();
        iVar13 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          FID_conflict__free(piVar16);
        }
      }
      if (bVar7) {
        FUN_0040f6b0(&local_38);
        local_8._0_1_ = 0x28;
        FUN_00551b30(param_1);
        local_8._0_1_ = 5;
        piVar16 = (int *)(local_38 + -8);
        if (piVar16 != &DAT_00bfe124) {
          LOCK();
          iVar13 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar13 == 0) {
            FID_conflict__free(piVar16);
          }
        }
      }
      iVar18 = iVar18 + 1;
      pcVar22 = local_50;
    } while (iVar18 < local_60);
  }
  piVar16 = (int *)(pcVar22 + -8);
  if (piVar16 != &DAT_00bfe124) {
    LOCK();
    iVar18 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      FID_conflict__free(piVar16);
    }
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)0x0);
  FUN_0040f7f0();
  FID_conflict__free(local_88);
  FUN_0040f7f0();
  FID_conflict__free(local_78);
  FUN_0040f7f0();
  FID_conflict__free(local_44);
  FUN_0040f7f0();
  FID_conflict__free(local_68);
  ExceptionList = local_10;
  return;
LAB_005526f4:
  if (iVar18 == 0xb) {
    FUN_0040f6b0(&local_90);
    local_8 = 0x1e;
    local_14 = (LPCWSTR)(uVar20 | 0x700);
    puVar10 = (undefined4 *)FUN_00636a10();
    local_14 = (LPCWSTR)*puVar10;
    uVar19 = uVar20 | 0xf00;
    FUN_0044ebd0();
    wVar9 = FUN_00426f70();
    iVar18 = FID_conflict___iswdigit_l(wVar9);
    if (iVar18 != 0) {
      FUN_0040f6b0(&local_98);
      local_8 = 0x20;
      local_14 = (LPCWSTR)(uVar20 | 0x1f00);
      puVar10 = (undefined4 *)FUN_00636a10();
      uVar19 = uVar20 | 0x3f00;
      local_14 = (LPCWSTR)*puVar10;
      FUN_0044ebd0();
      wVar9 = FUN_00426f70();
      iVar18 = FID_conflict___iswdigit_l(wVar9);
      local_15 = '\x01';
      if (iVar18 != 0) goto LAB_005527c9;
    }
  }
LAB_005527c5:
  local_15 = '\0';
LAB_005527c9:
  if ((uVar19 & 0x2000) != 0) {
    uVar19 = uVar19 & 0xffffdfff;
    piVar16 = (int *)(local_9c + -8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
  }
  if ((uVar19 & 0x1000) != 0) {
    uVar19 = uVar19 & 0xffffefff;
    piVar16 = (int *)(local_98 - 8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
  }
  if ((uVar19 & 0x800) != 0) {
    uVar19 = uVar19 & 0xfffff7ff;
    piVar16 = (int *)(local_94 - 8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
  }
  if ((uVar19 & 0x400) != 0) {
    uVar19 = uVar19 & 0xfffffbff;
    piVar16 = (int *)(local_90 + -8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
  }
  if ((uVar19 & 0x200) != 0) {
    uVar19 = uVar19 & 0xfffffdff;
    piVar16 = (int *)(local_8c + -8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
  }
  if ((uVar19 & 0x100) != 0) {
    uVar19 = uVar19 & 0xfffffeff;
    piVar16 = (int *)(local_28 - 8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
  }
  piVar16 = (int *)(local_a0 + -8);
  if (piVar16 != &DAT_00bfe124) {
    LOCK();
    iVar18 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      FID_conflict__free(piVar16);
    }
  }
  local_8._0_1_ = 0x18;
  local_8._1_3_ = 0;
  uVar20 = uVar19 & 0xffffff3f;
  piVar16 = (int *)(local_38 + -8);
  if (piVar16 != &DAT_00bfe124) {
    LOCK();
    iVar18 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      FID_conflict__free(piVar16);
    }
  }
  if (local_15 != '\0') {
    local_1d = '\x01';
    puVar10 = (undefined4 *)FUN_0040f6b0(&local_1c);
    if (local_58 < local_54 + 1) {
      FUN_00409cf0();
    }
    puVar4 = (undefined4 *)((int)local_5c + local_54 * 4);
    uVar19 = local_1c;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar10;
      *puVar10 = &DAT_00bfe12c;
    }
LAB_005529bd:
    local_54 = local_54 + 1;
    piVar16 = (int *)(uVar19 - 8);
    if (piVar16 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar16);
      }
    }
    FUN_00417910(local_24);
  }
  pcVar22 = local_50;
  local_24 = local_24 + 1;
  if (local_3c <= local_24) goto code_r0x005529f9;
  goto LAB_005524f1;
code_r0x005529f9:
  uVar8 = (undefined1)local_8;
  if (local_54 != 0) {
    local_14 = (LPCWSTR)0x0;
    local_8 = CONCAT31(local_8._1_3_,0x21);
    if (local_1d == '\0') {
      puVar10 = (undefined4 *)FUN_0055e400();
    }
    else {
      puVar10 = (undefined4 *)FUN_0055df50();
    }
    pWVar21 = (LPCWSTR)*puVar10;
    *puVar10 = 0;
    local_14 = pWVar21;
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar16 = param_2 + 1;
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)*param_2)();
      }
    }
    if (pWVar21 != (LPCWSTR)0x0) {
      local_8._0_1_ = 0x22;
      operator_new(0x60);
      local_8._0_1_ = 0x23;
      LOCK();
      *(int *)(pWVar21 + 2) = *(int *)(pWVar21 + 2) + 1;
      UNLOCK();
      param_2 = (undefined4 *)FUN_00550670(param_1,pWVar21);
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        param_2[1] = param_2[1] + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,0x24);
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        param_2[1] = param_2[1] + 1;
        UNLOCK();
      }
      FUN_005514c0();
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        piVar16 = param_2 + 1;
        iVar18 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)*param_2)();
        }
      }
      FUN_0040f7f0();
      FID_conflict__free((void *)0x0);
    }
    local_8._0_1_ = 0x18;
    uVar8 = (undefined1)local_8;
    if (pWVar21 != (LPCWSTR)0x0) {
      LOCK();
      pWVar3 = pWVar21 + 2;
      iVar18 = *(int *)pWVar3;
      *(int *)pWVar3 = *(int *)pWVar3 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (*(code *)**(undefined4 **)pWVar21)();
        uVar8 = (undefined1)local_8;
      }
    }
  }
  goto LAB_00552b28;
}

