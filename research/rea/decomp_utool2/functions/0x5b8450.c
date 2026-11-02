// rea decompile_all
// name: FUN_005b8450
// address: 0x5b8450
// body: available
// range: 0x5b8450-0x5ba166 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b8450(void)

{
  undefined4 **ppuVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *in_ECX;
  int *piVar11;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  undefined4 **extraout_ECX_06;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 **local_b0;
  undefined4 **local_ac;
  undefined4 **ppuStack_a8;
  undefined4 **local_a4;
  undefined4 *local_6c;
  undefined4 local_68;
  int local_64;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  char *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00719b10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  local_a4 = (undefined4 **)0x5b84d6;
  local_48 = in_ECX;
  FUN_0045c990();
  local_a4 = (undefined4 **)0x5b84ef;
  FUN_0045c990();
  local_a4 = (undefined4 **)0x5b8508;
  FUN_0045c990();
  local_a4 = (undefined4 **)0x5b8523;
  FUN_00462320();
  cVar5 = FUN_005ba600();
  if (cVar5 == '\0') goto LAB_005ba14a;
  local_a4 = (undefined4 **)0x5b853d;
  FUN_005ba4e0();
  local_8 = 1;
  FUN_00627bf0();
  local_8 = 3;
  piVar11 = (int *)(local_28 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5b8571;
      FID_conflict__free(piVar11);
    }
  }
  pcVar12 = local_1c;
  piVar11 = (int *)(local_1c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  LOCK();
  iVar8 = in_ECX[6];
  in_ECX[6] = local_1c;
  UNLOCK();
  piVar11 = (int *)(iVar8 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5b85a8;
      FID_conflict__free(piVar11);
    }
  }
  piVar11 = (int *)(PTR_DAT_00c7ed54 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  LOCK();
  iVar8 = in_ECX[7];
  in_ECX[7] = PTR_DAT_00c7ed54;
  UNLOCK();
  piVar11 = (int *)(iVar8 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5b85e5;
      FID_conflict__free(piVar11);
    }
  }
  if (*pcVar12 != '\0') {
    puVar6 = (undefined4 *)FUN_00458890();
    local_a4 = (undefined4 **)0x5b8604;
    DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
    if (DVar7 != 0xffffffff) {
      local_a4 = (undefined4 **)&stack0xffffff60;
      ppuStack_a8 = (undefined4 **)0x5b8617;
      FUN_00636a10();
      local_a4 = (undefined4 **)0x5b8624;
      FUN_006377c0();
      local_8 = 4;
      local_a4 = (undefined4 **)0x5b8636;
      FUN_00636040();
      local_8 = 5;
      local_a4 = (undefined4 **)&local_20;
      ppuStack_a8 = (undefined4 **)0x5b864c;
      FUN_00635a10();
      _local_8 = CONCAT31(uStack_7,6);
      puVar6 = (undefined4 *)FUN_005b4ba0();
      uVar2 = in_ECX[7];
      in_ECX[7] = *puVar6;
      *puVar6 = uVar2;
      piVar11 = (int *)(local_24 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          local_a4 = (undefined4 **)0x5b8684;
          FID_conflict__free(piVar11);
        }
      }
      piVar11 = (int *)(local_20 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          local_a4 = (undefined4 **)0x5b86a7;
          FID_conflict__free(piVar11);
        }
      }
      piVar11 = (int *)(local_18 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          local_a4 = (undefined4 **)0x5b86ca;
          FID_conflict__free(piVar11);
        }
      }
      local_8 = 3;
      piVar11 = (int *)(local_2c + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          local_a4 = (undefined4 **)0x5b86f1;
          FID_conflict__free(piVar11);
        }
      }
    }
  }
  FUN_00627bf0();
  local_8 = 7;
  FUN_005b06a0();
  local_8 = 3;
  piVar11 = (int *)(local_24 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5b872f;
      FID_conflict__free(piVar11);
    }
  }
  local_a4 = (undefined4 **)0x5b873d;
  FUN_005ba220();
  _local_8 = CONCAT31(uStack_7,8);
  FUN_005b0900();
  piVar11 = (int *)(local_2c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5b8768;
      FID_conflict__free(piVar11);
    }
  }
  local_14 = "";
  pcVar12 = "";
  local_18 = "";
  local_6c = (undefined4 *)0x0;
  local_68 = 0;
  local_64 = 0;
  local_8 = 0xb;
  local_a4 = (undefined4 **)0x5b87a4;
  FUN_0045c990();
  local_8 = 0xc;
  local_a4 = (undefined4 **)0x0;
  ppuStack_a8 = (undefined4 **)0x1;
  local_ac = &local_6c;
  local_b0 = (undefined4 **)0x5b87bf;
  FUN_00635ea0();
  local_8 = 0xb;
  piVar11 = (int *)(local_24 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5b87e3;
      FID_conflict__free(piVar11);
    }
  }
  local_20 = 0;
  if (0 < local_64) {
    do {
      local_a4 = (undefined4 **)&local_34;
      ppuStack_a8 = (undefined4 **)0x5b8801;
      FUN_0040f6b0();
      _local_8 = CONCAT31(uStack_7,0xd);
      local_a4 = (undefined4 **)0x5b8810;
      piVar11 = (int *)FUN_00636a10();
      local_28 = "SongLib";
      local_2c = *piVar11;
      do {
        iVar8 = FUN_00443260();
        local_24 = iVar8;
        iVar9 = FUN_00443260();
        if ((iVar8 - iVar9 != 0) && (iVar8 = (iVar8 - iVar9 >> 0x1f & 0xfffffffeU) + 1, iVar8 != 0))
        goto LAB_005b884c;
      } while (local_24 != 0);
      iVar8 = 0;
LAB_005b884c:
      piVar11 = (int *)(local_30 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          local_a4 = (undefined4 **)0x5b886c;
          FID_conflict__free(piVar11);
        }
      }
      local_8 = 0xb;
      piVar11 = (int *)(local_34 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          local_a4 = (undefined4 **)0x5b8893;
          FID_conflict__free(piVar11);
        }
      }
      if (iVar8 == 0) {
        local_a4 = &local_38;
        ppuStack_a8 = (undefined4 **)0x5b88aa;
        puVar6 = (undefined4 *)FUN_0040f6b0();
        pcVar3 = (char *)*puVar6;
        *puVar6 = local_14;
        puVar6 = local_38;
        pcVar13 = pcVar12;
        local_14 = pcVar3;
LAB_005b8958:
        piVar11 = puVar6 + -2;
        pcVar12 = pcVar13;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b8975;
            FID_conflict__free(piVar11);
          }
        }
      }
      else {
        local_a4 = (undefined4 **)&local_40;
        ppuStack_a8 = (undefined4 **)0x5b88c5;
        FUN_0040f6b0();
        _local_8 = CONCAT31(uStack_7,0xe);
        local_a4 = (undefined4 **)0x5b88d4;
        piVar11 = (int *)FUN_00636a10();
        local_a4 = (undefined4 **)*piVar11;
        ppuStack_a8 = (undefined4 **)0x5b88e9;
        local_2c = FUN_00448730();
        piVar11 = (int *)(local_3c + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b890f;
            FID_conflict__free(piVar11);
          }
        }
        local_8 = 0xb;
        piVar11 = (int *)(local_40 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b8936;
            FID_conflict__free(piVar11);
          }
        }
        if (local_2c == 0) {
          local_a4 = &local_44;
          ppuStack_a8 = (undefined4 **)0x5b894c;
          puVar6 = (undefined4 *)FUN_0040f6b0();
          pcVar13 = (char *)*puVar6;
          *puVar6 = pcVar12;
          puVar6 = local_44;
          local_18 = pcVar13;
          goto LAB_005b8958;
        }
      }
      local_20 = local_20 + 1;
      in_ECX = local_48;
    } while (local_20 < local_64);
  }
  if (*local_14 == '\0') {
LAB_005b89ab:
    if (*pcVar12 != '\0') {
      puVar6 = (undefined4 *)FUN_00458890();
      local_a4 = (undefined4 **)0x5b89c7;
      DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
      pcVar12 = local_18;
      if (DVar7 != 0xffffffff) goto LAB_005b89d3;
    }
  }
  else {
    puVar6 = (undefined4 *)FUN_00458890();
    local_a4 = (undefined4 **)0x5b89a6;
    DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
    if (DVar7 == 0xffffffff) goto LAB_005b89ab;
LAB_005b89d3:
    local_a4 = (undefined4 **)0x5b89e4;
    FUN_0045c990();
    local_8 = 0xf;
    local_a4 = (undefined4 **)0x5b89fc;
    FUN_005ba670();
    local_8 = 0xb;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8a20;
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(local_14 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    local_a4 = (undefined4 **)0x5b8a50;
    FUN_005bbff0();
    local_a4 = (undefined4 **)0x5b8a61;
    FUN_0045c990();
    local_8 = 0x10;
    local_a4 = (undefined4 **)0x5b8a7b;
    FUN_005ba670();
    local_8 = 0xb;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8a9f;
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(pcVar12 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    local_a4 = (undefined4 **)0x5b8ac7;
    FUN_005bbd50();
    local_a4 = (undefined4 **)0x5b8ad8;
    FUN_0045c990();
    local_8 = 0x11;
    local_a4 = (undefined4 **)0x5b8af2;
    FUN_005ba670();
    local_8 = 0xb;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8b16;
        FID_conflict__free(piVar11);
      }
    }
    DAT_00c8a5e0 = 1;
    local_a4 = (undefined4 **)0x5b8b31;
    FUN_0045c990();
    local_8 = 0x12;
    local_a4 = (undefined4 **)0x5b8b4b;
    FUN_005ba670();
    local_8 = 0xb;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8b6f;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x24);
    ppuVar1 = (undefined4 **)(in_ECX + 0x21);
    local_b0 = (undefined4 **)(in_ECX + 0x18);
    local_a4 = (undefined4 **)0x3e99999a;
    local_ac = ppuVar1;
    FUN_005bba40(in_ECX + 9,1);
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x27);
    local_b0 = (undefined4 **)(in_ECX + 0x1b);
    local_a4 = (undefined4 **)0x3e9eb852;
    local_ac = ppuVar1;
    FUN_005bba40(in_ECX + 0xc,3);
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x2a);
    local_b0 = (undefined4 **)(in_ECX + 0x1e);
    local_a4 = (undefined4 **)0x3ea3d70a;
    local_ac = ppuVar1;
    FUN_005bba40(in_ECX + 0xf,4);
    local_60 = (void *)0x0;
    local_5c = 0;
    local_58 = 0;
    uVar14 = 0;
    local_8 = 0x13;
    uVar4 = local_8;
    local_8 = 0x13;
    if (0 < (int)in_ECX[0x1a]) {
      do {
        local_a4 = &local_48;
        ppuStack_a8 = (undefined4 **)0x5b8c35;
        FUN_0062dea0();
        local_8 = 0x14;
        if (uVar14 < (uint)in_ECX[0x1a]) {
          local_a4 = (undefined4 **)in_ECX[0x18];
          ppuStack_a8 = *(undefined4 ***)((int)local_a4 + uVar14 * 4);
        }
        else {
          ppuStack_a8 = (undefined4 **)0x0;
          local_a4 = (undefined4 **)extraout_ECX;
        }
        local_ac = (undefined4 **)0x5b8c55;
        FUN_0062d4f0();
        local_8 = 0x13;
        piVar11 = local_48 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b8c79;
            FID_conflict__free(piVar11);
          }
        }
        uVar14 = uVar14 + 1;
        uVar4 = local_8;
      } while ((int)uVar14 < (int)in_ECX[0x1a]);
    }
    local_8 = uVar4;
    uVar14 = 0;
    if (0 < (int)in_ECX[0x1d]) {
      do {
        local_a4 = &local_48;
        ppuStack_a8 = (undefined4 **)0x5b8ca5;
        FUN_0062dea0();
        local_8 = 0x15;
        if (uVar14 < (uint)in_ECX[0x1d]) {
          local_a4 = (undefined4 **)in_ECX[0x1b];
          ppuStack_a8 = *(undefined4 ***)((int)local_a4 + uVar14 * 4);
        }
        else {
          ppuStack_a8 = (undefined4 **)0x0;
          local_a4 = (undefined4 **)extraout_ECX_00;
        }
        local_ac = (undefined4 **)0x5b8cc5;
        FUN_0062d4f0();
        local_8 = 0x13;
        piVar11 = local_48 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b8ce9;
            FID_conflict__free(piVar11);
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)in_ECX[0x1d]);
    }
    uVar14 = 0;
    if (0 < (int)in_ECX[0x20]) {
      do {
        local_a4 = &local_48;
        ppuStack_a8 = (undefined4 **)0x5b8d1b;
        FUN_0062dea0();
        local_8 = 0x16;
        if (uVar14 < (uint)in_ECX[0x20]) {
          local_a4 = (undefined4 **)in_ECX[0x1e];
          ppuStack_a8 = *(undefined4 ***)((int)local_a4 + uVar14 * 4);
        }
        else {
          ppuStack_a8 = (undefined4 **)0x0;
          local_a4 = (undefined4 **)extraout_ECX_01;
        }
        local_ac = (undefined4 **)0x5b8d3e;
        FUN_0062d4f0();
        local_8 = 0x13;
        piVar11 = local_48 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b8d62;
            FID_conflict__free(piVar11);
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)in_ECX[0x20]);
    }
    uVar14 = 0;
    if (0 < (int)in_ECX[0x23]) {
      do {
        local_a4 = &local_48;
        ppuStack_a8 = (undefined4 **)0x5b8d9a;
        FUN_0062dea0();
        local_8 = 0x17;
        if (uVar14 < (uint)in_ECX[0x23]) {
          local_a4 = (undefined4 **)in_ECX[0x21];
          ppuStack_a8 = *(undefined4 ***)((int)local_a4 + uVar14 * 4);
        }
        else {
          ppuStack_a8 = (undefined4 **)0x0;
          local_a4 = (undefined4 **)extraout_ECX_02;
        }
        local_ac = (undefined4 **)0x5b8dc0;
        FUN_0062d4f0();
        local_8 = 0x13;
        piVar11 = local_48 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b8de4;
            FID_conflict__free(piVar11);
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)in_ECX[0x23]);
    }
    local_a4 = (undefined4 **)0x5b8e01;
    FUN_0045c990();
    local_8 = 0x18;
    local_a4 = (undefined4 **)0x5b8e1b;
    FUN_005ba670();
    local_8 = 0x13;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8e3f;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x18);
    local_a4 = (undefined4 **)0x3c23d70a;
    local_ac = (undefined4 **)0x749344;
    local_b0 = &local_48;
    FUN_00635a10();
    local_8 = 0x19;
    local_b0 = (undefined4 **)&DAT_0074934c;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b8e8c;
    FUN_005baeb0();
    local_8 = 0x13;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8eb0;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x1b);
    local_48 = (undefined4 *)0x3eae147b;
    local_a4 = (undefined4 **)0x3c23d70a;
    local_ac = (undefined4 **)0x749354;
    local_b0 = &local_44;
    FUN_00635a10();
    local_8 = 0x1a;
    local_b0 = (undefined4 **)0x74935c;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b8f07;
    FUN_005baeb0();
    local_8 = 0x13;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8f2b;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x1e);
    local_48 = (undefined4 *)0x3eb33333;
    local_a4 = (undefined4 **)0x3c23d70a;
    local_ac = (undefined4 **)0x749368;
    local_b0 = &local_44;
    FUN_00635a10();
    local_8 = 0x1b;
    local_b0 = (undefined4 **)0x749370;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b8f82;
    FUN_005baeb0();
    local_8 = 0x13;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b8fa6;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x24);
    local_48 = (undefined4 *)0x3eb851ec;
    local_a4 = (undefined4 **)0x3c23d70a;
    local_ac = (undefined4 **)0x74937c;
    local_b0 = &local_44;
    FUN_00635a10();
    local_8 = 0x1c;
    local_b0 = (undefined4 **)&DAT_00749384;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b9000;
    FUN_005bac50();
    local_8 = 0x13;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9024;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x27);
    local_48 = (undefined4 *)0x3ebd70a4;
    local_a4 = (undefined4 **)0x3c23d70a;
    local_ac = (undefined4 **)0x74938c;
    local_b0 = &local_44;
    FUN_00635a10();
    local_8 = 0x1d;
    local_b0 = (undefined4 **)0x749394;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b907e;
    FUN_005bac50();
    local_8 = 0x13;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b90a2;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x2a);
    local_48 = (undefined4 *)0x3ec28f5c;
    local_a4 = (undefined4 **)0x3c23d70a;
    local_ac = (undefined4 **)0x7493a0;
    local_b0 = &local_44;
    FUN_00635a10();
    local_8 = 0x1e;
    local_b0 = (undefined4 **)0x7493a8;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b90fc;
    FUN_005bac50();
    local_8 = 0x13;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9120;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)0x5b9134;
    FUN_0045c990();
    local_8 = 0x1f;
    local_a4 = (undefined4 **)0x5b914e;
    FUN_005ba670();
    _local_8 = CONCAT31(uStack_7,0x13);
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9172;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x30);
    local_ac = (undefined4 **)(in_ECX + 0x2d);
    local_a4 = (undefined4 **)0x3ecccccd;
    local_b0 = (undefined4 **)(in_ECX + 0x21);
    FUN_005bb3e0(in_ECX + 0x12,in_ECX + 0x18);
    local_ac = (undefined4 **)(in_ECX + 0x33);
    local_a4 = (undefined4 **)0x3ed70a3d;
    local_b0 = (undefined4 **)(in_ECX + 0x21);
    ppuStack_a8 = local_ac;
    FUN_005bb3e0(in_ECX + 0x15,in_ECX + 0x1b);
    uVar14 = 0;
    if (0 < (int)in_ECX[0x2f]) {
      do {
        local_a4 = &local_48;
        ppuStack_a8 = (undefined4 **)0x5b9201;
        FUN_0062dea0();
        local_8 = 0x20;
        if (uVar14 < (uint)in_ECX[0x2f]) {
          local_a4 = (undefined4 **)in_ECX[0x2d];
          ppuStack_a8 = *(undefined4 ***)((int)local_a4 + uVar14 * 4);
        }
        else {
          ppuStack_a8 = (undefined4 **)0x0;
          local_a4 = (undefined4 **)extraout_ECX_03;
        }
        local_ac = (undefined4 **)0x5b9227;
        FUN_0062d4f0();
        _local_8 = CONCAT31(uStack_7,0x13);
        piVar11 = local_48 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b924b;
            FID_conflict__free(piVar11);
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)in_ECX[0x2f]);
    }
    uVar14 = 0;
    if (0 < (int)in_ECX[0x32]) {
      do {
        local_a4 = &local_48;
        ppuStack_a8 = (undefined4 **)0x5b9283;
        FUN_0062dea0();
        local_8 = 0x21;
        if (uVar14 < (uint)in_ECX[0x32]) {
          local_a4 = (undefined4 **)in_ECX[0x30];
          ppuStack_a8 = *(undefined4 ***)((int)local_a4 + uVar14 * 4);
        }
        else {
          ppuStack_a8 = (undefined4 **)0x0;
          local_a4 = (undefined4 **)extraout_ECX_04;
        }
        local_ac = (undefined4 **)0x5b92a9;
        FUN_0062d4f0();
        _local_8 = CONCAT31(uStack_7,0x13);
        piVar11 = local_48 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b92cd;
            FID_conflict__free(piVar11);
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)in_ECX[0x32]);
    }
    uVar14 = 0;
    if (0 < (int)in_ECX[0x35]) {
      do {
        local_a4 = &local_48;
        ppuStack_a8 = (undefined4 **)0x5b9305;
        FUN_0062dea0();
        local_8 = 0x22;
        if (uVar14 < (uint)in_ECX[0x35]) {
          local_a4 = (undefined4 **)in_ECX[0x33];
          ppuStack_a8 = *(undefined4 ***)((int)local_a4 + uVar14 * 4);
        }
        else {
          ppuStack_a8 = (undefined4 **)0x0;
          local_a4 = (undefined4 **)extraout_ECX_05;
        }
        local_ac = (undefined4 **)0x5b932b;
        FUN_0062d4f0();
        _local_8 = CONCAT31(uStack_7,0x13);
        piVar11 = local_48 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            local_a4 = (undefined4 **)0x5b934f;
            FID_conflict__free(piVar11);
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)in_ECX[0x35]);
    }
    local_a4 = (undefined4 **)0x5b936c;
    FUN_0045c990();
    _local_8 = CONCAT31(uStack_7,0x23);
    local_a4 = (undefined4 **)0x5b9386;
    FUN_005ba670();
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b93a6;
        FID_conflict__free(piVar11);
      }
    }
    local_54 = (void *)0x0;
    local_50 = 0;
    local_4c = 0;
    _local_8 = CONCAT31(uStack_7,0x24);
    local_a4 = (undefined4 **)0x5b93ce;
    FUN_006363c0();
    local_a4 = &local_48;
    ppuStack_a8 = (undefined4 **)0x5b93e3;
    FUN_00635a10();
    local_a4 = (undefined4 **)0x5b93ec;
    FUN_006363c0();
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b940c;
        FID_conflict__free(piVar11);
      }
    }
    local_ac = (undefined4 **)(in_ECX + 0x2d);
    local_a4 = (undefined4 **)0x3ee66666;
    local_b0 = (undefined4 **)0x749614;
    FUN_00635a10(&local_48);
    local_8 = 0x25;
    FUN_00635a10(&local_b0,&DAT_00749620);
    FUN_005ba990();
    local_8 = 0x24;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9481;
        FID_conflict__free(piVar11);
      }
    }
    local_ac = (undefined4 **)(in_ECX + 0x30);
    local_a4 = (undefined4 **)0x3eeb851f;
    local_b0 = (undefined4 **)0x749628;
    FUN_00635a10(&local_48);
    local_8 = 0x26;
    FUN_00635a10(&local_b0,&DAT_00749634);
    FUN_005ba990();
    local_8 = 0x24;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b94f6;
        FID_conflict__free(piVar11);
      }
    }
    local_ac = (undefined4 **)(in_ECX + 0x33);
    local_a4 = (undefined4 **)0x3ef0a3d7;
    local_b0 = (undefined4 **)0x74963c;
    FUN_00635a10(&local_48);
    local_8 = 0x27;
    FUN_00635a10(&local_b0,"uTrack24");
    FUN_005ba990();
    local_8 = 0x24;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b956b;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)&local_20;
    ppuStack_a8 = (undefined4 **)0x5b9583;
    FUN_00635a10();
    local_8 = 0x28;
    FUN_00635980();
    local_a4 = (undefined4 **)0x5b959b;
    FUN_00636040();
    _local_8 = CONCAT31(uStack_7,0x29);
    local_a4 = (undefined4 **)0x5b95aa;
    FUN_00634890();
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b95ca;
        FID_conflict__free(piVar11);
      }
    }
    local_8 = 0x28;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b95f1;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)0x5b95fb;
    local_48 = operator_new(0x30);
    local_a4 = (undefined4 **)&local_20;
    _local_8 = CONCAT31(uStack_7,0x2a);
    ppuStack_a8 = (undefined4 **)0x5b9615;
    puVar6 = (undefined4 *)FUN_0062aec0();
    if (*(char *)puVar6[4] == '\0') {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = puVar6;
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar10 != (undefined4 *)0x0) {
      local_a4 = (undefined4 **)0x5b9631;
      (**(code **)*puVar10)();
    }
    local_8 = 0x2b;
    ppuStack_a8 = (undefined4 **)0x5b9642;
    local_a4 = (undefined4 **)puVar6;
    local_48 = puVar6;
    FUN_0062d2e0();
    _local_8 = CONCAT31(uStack_7,0x28);
    if (puVar6 != (undefined4 *)0x0) {
      local_a4 = (undefined4 **)0x5b9652;
      (**(code **)*puVar6)();
    }
    DAT_00c8a5e0 = 0;
    FUN_00423c00();
    if (in_ECX[0x19] != 0) {
      local_a4 = (undefined4 **)0x5b966f;
      FID_conflict__free((void *)in_ECX[0x18]);
      in_ECX[0x18] = 0;
      in_ECX[0x19] = 0;
    }
    in_ECX[0x1a] = 0;
    FUN_00423c00();
    if (in_ECX[0x1c] != 0) {
      local_a4 = (undefined4 **)0x5b969d;
      FID_conflict__free((void *)in_ECX[0x1b]);
      in_ECX[0x1b] = 0;
      in_ECX[0x1c] = 0;
    }
    in_ECX[0x1d] = 0;
    FUN_00423c00();
    if (in_ECX[0x1f] != 0) {
      local_a4 = (undefined4 **)0x5b96cb;
      FID_conflict__free((void *)in_ECX[0x1e]);
      in_ECX[0x1e] = 0;
      in_ECX[0x1f] = 0;
    }
    in_ECX[0x20] = 0;
    FUN_00423c00();
    if (in_ECX[0x22] != 0) {
      local_a4 = (undefined4 **)0x5b9700;
      FID_conflict__free((void *)in_ECX[0x21]);
      in_ECX[0x21] = 0;
      in_ECX[0x22] = 0;
    }
    in_ECX[0x23] = 0;
    if (in_ECX[0x25] != 0) {
      local_a4 = (undefined4 **)0x5b972b;
      FID_conflict__free((void *)in_ECX[0x24]);
      in_ECX[0x24] = 0;
      in_ECX[0x25] = 0;
    }
    in_ECX[0x26] = 0;
    if (in_ECX[0x28] != 0) {
      local_a4 = (undefined4 **)0x5b9760;
      FID_conflict__free((void *)in_ECX[0x27]);
      in_ECX[0x27] = 0;
      in_ECX[0x28] = 0;
    }
    in_ECX[0x29] = 0;
    if (in_ECX[0x2b] != 0) {
      local_a4 = (undefined4 **)0x5b9795;
      FID_conflict__free((void *)in_ECX[0x2a]);
      in_ECX[0x2a] = 0;
      in_ECX[0x2b] = 0;
    }
    in_ECX[0x2c] = 0;
    FUN_00423b20();
    if (in_ECX[0x2e] != 0) {
      local_a4 = (undefined4 **)0x5b97d0;
      FID_conflict__free((void *)in_ECX[0x2d]);
      in_ECX[0x2d] = 0;
      in_ECX[0x2e] = 0;
    }
    in_ECX[0x2f] = 0;
    FUN_00423b20();
    if (in_ECX[0x31] != 0) {
      local_a4 = (undefined4 **)0x5b9801;
      FID_conflict__free((void *)in_ECX[0x30]);
      in_ECX[0x30] = 0;
      in_ECX[0x31] = 0;
    }
    in_ECX[0x32] = 0;
    ppuVar1 = (undefined4 **)(in_ECX + 0x33);
    FUN_00423b20();
    if (in_ECX[0x34] != 0) {
      local_a4 = (undefined4 **)0x5b9832;
      FID_conflict__free(*ppuVar1);
      *ppuVar1 = (undefined4 *)0x0;
      in_ECX[0x34] = 0;
    }
    in_ECX[0x35] = 0;
    local_a4 = (undefined4 **)0x5b985a;
    FUN_0045c990();
    local_8 = 0x2c;
    local_a4 = (undefined4 **)0x5b9874;
    FUN_005ba670();
    local_8 = 0x28;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9898;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)0x5b98ac;
    FUN_0045c990();
    local_8 = 0x2d;
    local_a4 = (undefined4 **)0x5b98c6;
    FUN_005ba670();
    local_8 = 0x28;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b98ea;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x24);
    local_a4 = (undefined4 **)0x3f19999a;
    local_ac = (undefined4 **)(in_ECX + 0x21);
    local_b0 = (undefined4 **)(in_ECX + 0x18);
    FUN_005bba40(in_ECX + 9,1);
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x27);
    local_a4 = (undefined4 **)0x3f2147ae;
    local_ac = (undefined4 **)(in_ECX + 0x21);
    local_b0 = (undefined4 **)(in_ECX + 0x1b);
    FUN_005bba40(in_ECX + 0xc,3);
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x2a);
    local_a4 = (undefined4 **)0x3f28f5c3;
    local_ac = (undefined4 **)(in_ECX + 0x21);
    local_b0 = (undefined4 **)(in_ECX + 0x1e);
    FUN_005bba40(in_ECX + 0xf,4);
    local_a4 = (undefined4 **)0x5b9991;
    FUN_0045c990();
    local_8 = 0x2e;
    local_a4 = (undefined4 **)0x5b99ab;
    FUN_005ba670();
    local_8 = 0x28;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b99cf;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)0x3ca3d70a;
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x18);
    local_ac = (undefined4 **)&DAT_007496fc;
    local_b0 = &local_48;
    FUN_00635a10();
    local_8 = 0x2f;
    local_b0 = (undefined4 **)0x749704;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b9a1c;
    FUN_005bb110();
    local_8 = 0x28;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9a40;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x1b);
    local_a4 = (undefined4 **)0x3ca3d70a;
    local_48 = (undefined4 *)0x3f3851ec;
    local_ac = (undefined4 **)0x749718;
    local_b0 = &local_44;
    FUN_00635a10();
    local_8 = 0x30;
    local_b0 = (undefined4 **)0x749494;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b9a97;
    FUN_005bb110();
    local_8 = 0x28;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9abb;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x1e);
    local_a4 = (undefined4 **)0x3ca3d70a;
    local_48 = (undefined4 *)0x3f3d70a4;
    local_ac = (undefined4 **)0x7494a8;
    local_b0 = &local_44;
    FUN_00635a10();
    local_8 = 0x31;
    local_b0 = (undefined4 **)0x7494b4;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b9b12;
    FUN_005bb110();
    local_8 = 0x28;
    local_ac = (undefined4 **)(local_44 + -2);
    if (local_ac != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar6 = *local_ac;
      *local_ac = (undefined4 *)((int)*local_ac + -1);
      UNLOCK();
      if (puVar6 == (undefined4 *)0x0) {
        local_a4 = (undefined4 **)0x5b9b36;
        FID_conflict__free(local_ac);
        local_ac = extraout_ECX_06;
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x21);
    local_a4 = (undefined4 **)0x3ca3d70a;
    local_48 = (undefined4 *)0x3f428f5c;
    local_b0 = (undefined4 **)0x7494c8;
    FUN_00635a10(&local_ac);
    local_b0 = (undefined4 **)0x5b9b78;
    FUN_005bb110();
    local_a4 = (undefined4 **)0x5b9b89;
    FUN_0045c990();
    local_8 = 0x32;
    local_a4 = (undefined4 **)0x5b9ba3;
    FUN_005ba670();
    local_8 = 0x28;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9bc7;
        FID_conflict__free(piVar11);
      }
    }
    ppuStack_a8 = (undefined4 **)(in_ECX + 0x30);
    local_a4 = (undefined4 **)0x3f4ccccd;
    local_ac = (undefined4 **)(in_ECX + 0x2d);
    local_b0 = (undefined4 **)(in_ECX + 0x21);
    FUN_005bb3e0(in_ECX + 0x12,in_ECX + 0x18);
    local_b0 = (undefined4 **)(in_ECX + 0x21);
    local_a4 = (undefined4 **)0x3f59999a;
    local_ac = ppuVar1;
    ppuStack_a8 = ppuVar1;
    FUN_005bb3e0(in_ECX + 0x15,in_ECX + 0x1b);
    local_a4 = (undefined4 **)0x5b9c3b;
    FUN_0045c990();
    local_8 = 0x33;
    local_a4 = (undefined4 **)0x5b9c55;
    FUN_005ba670();
    _local_8 = CONCAT31(uStack_7,0x28);
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9c79;
        FID_conflict__free(piVar11);
      }
    }
    FUN_0040f7f0();
    if (local_50 != 0) {
      local_a4 = (undefined4 **)0x5b9c92;
      FID_conflict__free(local_54);
      local_54 = (void *)0x0;
      local_50 = 0;
    }
    local_4c = 0;
    local_a4 = &local_48;
    ppuStack_a8 = (undefined4 **)0x5b9cbf;
    FUN_00635a10();
    local_a4 = (undefined4 **)0x5b9cc8;
    FUN_006363c0();
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9ce8;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = &local_44;
    ppuStack_a8 = (undefined4 **)0x5b9d00;
    FUN_00635a10();
    _local_8 = CONCAT31(uStack_7,0x34);
    local_a4 = &local_48;
    ppuStack_a8 = (undefined4 **)0x5b9d18;
    FUN_00635a10();
    local_a4 = (undefined4 **)0x5b9d21;
    FUN_006363c0();
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9d41;
        FID_conflict__free(piVar11);
      }
    }
    _local_8 = CONCAT31(uStack_7,0x28);
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9d68;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = &local_48;
    ppuStack_a8 = (undefined4 **)0x5b9d80;
    FUN_00635a10();
    local_a4 = (undefined4 **)0x5b9d89;
    FUN_006363c0();
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9da9;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = &local_44;
    ppuStack_a8 = (undefined4 **)0x5b9dc1;
    FUN_00635a10();
    _local_8 = CONCAT31(uStack_7,0x35);
    local_a4 = &local_48;
    ppuStack_a8 = (undefined4 **)0x5b9dd9;
    FUN_00635a10();
    local_a4 = (undefined4 **)0x5b9de2;
    FUN_006363c0();
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9e02;
        FID_conflict__free(piVar11);
      }
    }
    local_8 = 0x28;
    piVar11 = local_44 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9e29;
        FID_conflict__free(piVar11);
      }
    }
    local_ac = (undefined4 **)(in_ECX + 0x2d);
    local_a4 = (undefined4 **)0x3f666666;
    local_b0 = (undefined4 **)&DAT_00749570;
    FUN_00635a10(&local_48);
    local_8 = 0x36;
    FUN_00635a10(&local_b0,"Multitrack Playlists");
    FUN_005ba990();
    local_8 = 0x28;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9e9e;
        FID_conflict__free(piVar11);
      }
    }
    local_ac = (undefined4 **)(in_ECX + 0x30);
    local_a4 = (undefined4 **)0x3f6e147b;
    local_b0 = (undefined4 **)&DAT_00749590;
    FUN_00635a10(&local_48);
    local_8 = 0x37;
    FUN_00635a10(&local_b0,"Stereo Playlists");
    FUN_005ba990();
    local_8 = 0x28;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9f13;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)0x3f75c28f;
    local_b0 = (undefined4 **)0x749724;
    local_ac = ppuVar1;
    FUN_00635a10(&local_48);
    local_8 = 0x38;
    FUN_00635a10(&local_b0,"Playlists");
    FUN_005ba990();
    local_8 = 0x28;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9f82;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)0x5b9f96;
    FUN_0045c990();
    local_8 = 0x39;
    local_a4 = (undefined4 **)0x5b9fb0;
    FUN_005ba670();
    local_8 = 0x28;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5b9fd4;
        FID_conflict__free(piVar11);
      }
    }
    local_a4 = (undefined4 **)0x5b9fe2;
    FUN_005ba380();
    local_a4 = (undefined4 **)&local_24;
    ppuStack_a8 = (undefined4 **)0x5b9ff7;
    FUN_00635a10();
    local_8 = 0x3a;
    FUN_00635980();
    ppuStack_a8 = (undefined4 **)&DAT_00749754;
    local_ac = &local_48;
    local_b0 = (undefined4 **)0x5ba01d;
    ppuStack_a8 = (undefined4 **)FUN_00636260();
    local_a4 = (undefined4 **)0x0;
    local_8 = 0x3b;
    local_ac = (undefined4 **)0x5ba02e;
    FUN_006344b0();
    local_8 = 0x3a;
    piVar11 = local_48 + -2;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5ba052;
        FID_conflict__free(piVar11);
      }
    }
    FUN_00633320();
    FUN_00633320();
    piVar11 = (int *)(local_24 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5ba085;
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(local_20 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_a4 = (undefined4 **)0x5ba0a8;
        FID_conflict__free(piVar11);
      }
    }
    FUN_0040f7f0();
    local_a4 = (undefined4 **)0x5ba0bb;
    FID_conflict__free(local_54);
    FUN_0045a390();
    local_a4 = (undefined4 **)0x5ba0ce;
    FID_conflict__free(local_60);
    pcVar12 = local_18;
  }
  FUN_0040f7f0();
  local_a4 = (undefined4 **)0x5ba0e4;
  FID_conflict__free(local_6c);
  piVar11 = (int *)(pcVar12 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5ba104;
      FID_conflict__free(piVar11);
    }
  }
  piVar11 = (int *)(local_14 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5ba127;
      FID_conflict__free(piVar11);
    }
  }
  piVar11 = (int *)(local_1c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_a4 = (undefined4 **)0x5ba147;
      FID_conflict__free(piVar11);
    }
  }
LAB_005ba14a:
  FUN_00419b00();
  ExceptionList = local_10;
  return;
}

