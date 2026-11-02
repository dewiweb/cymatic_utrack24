// rea decompile_all
// name: FUN_004227b0
// address: 0x4227b0
// body: available
// range: 0x4227b0-0x423295 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004227b0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int iVar5;
  int in_ECX;
  undefined **ppuVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *local_b4;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 *local_80;
  int *local_78;
  undefined *local_74;
  undefined *local_70;
  undefined4 *local_6c;
  undefined *local_68;
  undefined1 *local_64;
  undefined **local_60;
  undefined4 *local_58;
  undefined *local_54;
  undefined *local_50;
  int local_4c;
  undefined1 *local_48;
  int *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fd4c0;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = 0;
  local_8 = 0;
  local_b4 = (undefined1 *)0x422802;
  local_3c = in_ECX;
  FUN_0045c990();
  local_8._0_1_ = 1;
  local_78 = (int *)(local_80 + -8);
  if (local_78 != &DAT_00bfe124) {
    LOCK();
    *local_78 = *local_78 + 1;
    UNLOCK();
  }
  local_b4 = (undefined1 *)0x42282a;
  FUN_006377c0();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_4c = param_1[3];
  if (local_4c == 0) {
    puVar10 = (undefined1 *)0x0;
    if (0 < (int)param_1[6]) {
      do {
        local_b4 = puVar10;
        FUN_00410f30();
        local_b4 = (undefined1 *)0x423214;
        FUN_004227b0();
        puVar10 = puVar10 + 1;
      } while ((int)puVar10 < (int)param_1[6]);
    }
    goto switchD_00422854_default;
  }
  uVar2 = FUN_005b48e0();
  switch(uVar2) {
  case 1:
    if (*(int *)(local_4c + 0x10) == 3) {
      local_44 = (int *)(in_ECX + 0x78);
    }
    else {
      if (*(int *)(local_4c + 0x10) != 4) goto switchD_00422854_default;
      local_44 = (int *)(in_ECX + 0x6c);
    }
    break;
  case 2:
    if (*(int *)(local_4c + 0x10) == 3) {
      local_44 = (int *)(in_ECX + 0x90);
    }
    else {
      if (*(int *)(local_4c + 0x10) != 4) goto switchD_00422854_default;
      local_44 = (int *)(in_ECX + 0x84);
    }
    break;
  case 3:
    local_44 = (int *)(in_ECX + 0x54);
    break;
  case 4:
    local_44 = (int *)(in_ECX + 0x60);
    break;
  default:
    goto switchD_00422854_default;
  }
  if (local_44 == (int *)0x0) goto switchD_00422854_default;
  if (local_44[2] != 0) {
    local_b4 = (undefined1 *)0x4228c7;
    FUN_0045c990();
    local_b4 = (undefined1 *)0x4228d5;
    FUN_00637d80();
    piVar8 = (int *)(local_50 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_b4 = (undefined1 *)0x4228f5;
        FID_conflict__free(piVar8);
      }
    }
  }
  local_b4 = (undefined1 *)0x422904;
  puVar3 = (undefined4 *)FUN_00410ea0();
  local_8 = CONCAT31(local_8._1_3_,3);
  if (*(char *)*puVar3 == '\0') {
LAB_00422944:
    local_b4 = (undefined1 *)0x422955;
    FUN_0045c990();
    ppuVar6 = &local_50;
    local_40 = 2;
  }
  else {
    puVar3 = (undefined4 *)FUN_00458890();
    local_b4 = (undefined1 *)0x422921;
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if ((DVar4 & 0x10) != 0) goto LAB_00422944;
    local_68 = PTR_DAT_00c7ed68;
    piVar8 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    ppuVar6 = &local_68;
    local_40 = 1;
  }
  puVar9 = *ppuVar6;
  *ppuVar6 = &DAT_00bfe12c;
  local_8 = 6;
  local_b4 = (undefined1 *)0x422981;
  local_74 = puVar9;
  local_54 = (undefined *)FUN_00410ea0();
  local_60 = (undefined **)&stack0xffffff50;
  local_8 = CONCAT31(local_8._1_3_,7);
  piVar8 = (int *)(local_80 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  FUN_006377c0();
  FUN_00637730();
  local_b4 = (undefined1 *)0x4229c1;
  FUN_00637730();
  local_b4 = (undefined1 *)0x4229ca;
  FUN_00637d80();
  piVar8 = (int *)(local_70 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x4229ea;
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(local_48 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422a0d;
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(puVar9 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422a2d;
      FID_conflict__free(piVar8);
    }
  }
  if ((local_40 & 2) != 0) {
    local_40 = local_40 & 0xfffffffd;
    piVar8 = (int *)(local_50 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_b4 = (undefined1 *)0x422a5e;
        FID_conflict__free(piVar8);
      }
    }
  }
  local_8 = 3;
  if ((local_40 & 1) != 0) {
    local_40 = local_40 & 0xfffffffe;
    piVar8 = (int *)(local_68 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_b4 = (undefined1 *)0x422a96;
        FID_conflict__free(piVar8);
      }
    }
  }
  piVar8 = (int *)(local_38 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422ab9;
      FID_conflict__free(piVar8);
    }
  }
  local_b4 = (undefined1 *)0x422ac8;
  FUN_00410ea0();
  local_8 = CONCAT31(local_8._1_3_,8);
  local_b4 = local_80;
  piVar8 = (int *)(local_80 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  FUN_006377c0();
  local_b4 = (undefined1 *)0x422af7;
  FUN_00637730();
  local_b4 = (undefined1 *)0x422b02;
  FUN_00637d80();
  piVar8 = (int *)(local_38 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422b22;
      FID_conflict__free(piVar8);
    }
  }
  local_8._0_1_ = 2;
  piVar8 = (int *)(local_48 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422b49;
      FID_conflict__free(piVar8);
    }
  }
  local_b4 = (undefined1 *)0x422b58;
  local_38 = FUN_0054b020();
  local_8 = CONCAT31(local_8._1_3_,9);
  local_b4 = local_80;
  piVar8 = (int *)(local_80 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  FUN_006377c0();
  local_b4 = (undefined1 *)0x422b89;
  FUN_00637730();
  local_b4 = (undefined1 *)0x422b91;
  FUN_00637d80();
  piVar8 = (int *)(local_48 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422bb1;
      FID_conflict__free(piVar8);
    }
  }
  local_8._0_1_ = 2;
  piVar8 = (int *)(local_54 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422bd8;
      FID_conflict__free(piVar8);
    }
  }
  local_b4 = (undefined1 *)0x422be5;
  FUN_00549970();
  local_b4 = (undefined1 *)0x422bf0;
  local_38 = FUN_00637cf0();
  local_8 = CONCAT31(local_8._1_3_,10);
  local_b4 = local_80;
  piVar8 = (int *)(local_80 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  FUN_006377c0();
  local_b4 = (undefined1 *)0x422c21;
  FUN_00637730();
  local_b4 = (undefined1 *)0x422c29;
  FUN_00637d80();
  piVar8 = (int *)(local_48 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422c49;
      FID_conflict__free(piVar8);
    }
  }
  local_8._0_1_ = 2;
  piVar8 = (int *)(local_54 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422c70;
      FID_conflict__free(piVar8);
    }
  }
  local_b4 = (undefined1 *)0x422c7f;
  local_38 = FUN_0054aff0();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_b4 = local_80;
  piVar8 = (int *)(local_80 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  FUN_006377c0();
  local_b4 = (undefined1 *)0x422cb0;
  FUN_00637730();
  local_b4 = (undefined1 *)0x422cb8;
  FUN_00637d80();
  piVar8 = (int *)(local_48 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422cd8;
      FID_conflict__free(piVar8);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar8 = (int *)(local_54 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422cff;
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(local_80 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_b4 = (undefined1 *)0x422d21;
  FUN_006377c0();
  local_b4 = (undefined1 *)0x422d29;
  FUN_00637d80();
  piVar8 = (int *)(local_38 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x422d49;
      FID_conflict__free(piVar8);
    }
  }
  local_50 = (undefined *)0x0;
  iVar5 = *(int *)(local_4c + 0x20);
  iVar7 = local_4c;
  puVar9 = local_70;
  if (0 < iVar5) {
    do {
      if ((((-1 < (int)local_50) && ((int)local_50 < iVar5)) &&
          (local_50 < *(undefined **)(iVar7 + 0x20))) &&
         (local_6c = *(undefined4 **)(*(int *)(iVar7 + 0x18) + (int)local_50 * 4),
         local_6c != (undefined4 *)0x0)) {
        local_74 = (undefined *)local_6c[2];
        local_b4 = (undefined1 *)0x422da3;
        local_58 = (undefined4 *)FUN_00410ad0();
        local_60 = (undefined **)&stack0xffffff50;
        local_8._0_1_ = 0xc;
        local_b4 = (undefined1 *)0x422db6;
        iVar5 = FUN_006104a0();
        local_b4 = &local_15 + -iVar5;
        FUN_004557e0();
        local_8._0_1_ = 0xd;
        local_38 = FUN_0062eb70(&local_88);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        piVar8 = (int *)(local_80 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        local_48 = (undefined1 *)&local_b4;
        FUN_006377c0(local_80);
        FUN_00637730();
        FUN_006377c0();
        local_b4 = (undefined1 *)0x422e27;
        local_58 = (undefined4 *)FUN_00637730();
        if (local_44[1] < local_44[2] + 1) {
          local_b4 = (undefined1 *)0x422e51;
          FUN_00409cf0();
        }
        iVar5 = local_44[2];
        local_44[2] = iVar5 + 1;
        puVar3 = (undefined4 *)(*local_44 + iVar5 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *local_58;
          *local_58 = &DAT_00bfe12c;
        }
        piVar8 = (int *)(local_84 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x422e93;
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_88 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x422eb9;
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_68 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x422edc;
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_8c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x422f02;
            FID_conflict__free(piVar8);
          }
        }
        local_b4 = (undefined1 *)0x422f14;
        puVar3 = (undefined4 *)FUN_00410a10();
        local_8 = CONCAT31(local_8._1_3_,0xf);
        if (*(char *)*puVar3 == '\0') {
LAB_00422f57:
          local_b4 = (undefined1 *)0x422f68;
          FUN_0045c990();
          local_40 = local_40 | 8;
          local_60 = &local_54;
        }
        else {
          puVar3 = (undefined4 *)FUN_00458890();
          local_b4 = (undefined1 *)0x422f31;
          DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
          puVar1 = PTR_DAT_00c7ed68;
          if ((DVar4 & 0x10) != 0) goto LAB_00422f57;
          local_70 = PTR_DAT_00c7ed68;
          piVar8 = (int *)(PTR_DAT_00c7ed68 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            UNLOCK();
          }
          local_40 = local_40 | 4;
          local_60 = &local_70;
          puVar9 = puVar1;
        }
        local_b4 = (undefined1 *)0x422f84;
        local_38 = FUN_00410a10();
        local_48 = &stack0xffffff50;
        local_8 = 0x12;
        local_58 = &local_b4;
        piVar8 = (int *)(local_64 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        FUN_006377c0();
        FUN_00637730();
        local_b4 = (undefined1 *)0x422fd4;
        local_58 = (undefined4 *)FUN_00637730();
        if (local_44[1] < local_44[2] + 1) {
          local_b4 = (undefined1 *)0x422ffe;
          FUN_00409cf0();
        }
        iVar5 = local_44[2];
        local_44[2] = iVar5 + 1;
        puVar3 = (undefined4 *)(*local_44 + iVar5 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *local_58;
          *local_58 = &DAT_00bfe12c;
        }
        piVar8 = (int *)(local_90 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x423043;
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_94 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x423069;
            FID_conflict__free(piVar8);
          }
        }
        if ((local_40 & 8) != 0) {
          local_40 = local_40 & 0xfffffff7;
          piVar8 = (int *)(local_54 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              local_b4 = (undefined1 *)0x42309a;
              FID_conflict__free(piVar8);
            }
          }
        }
        local_8 = 0xf;
        if ((local_40 & 4) != 0) {
          local_40 = local_40 & 0xfffffffb;
          piVar8 = (int *)(puVar9 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              local_b4 = (undefined1 *)0x4230cf;
              FID_conflict__free(piVar8);
            }
          }
        }
        local_8._0_1_ = 2;
        piVar8 = (int *)(local_98 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x4230f9;
            FID_conflict__free(piVar8);
          }
        }
        local_b4 = (undefined1 *)0x423108;
        local_58 = (undefined4 *)FUN_00549570();
        local_6c = (undefined4 *)&stack0xffffff50;
        local_8 = CONCAT31(local_8._1_3_,0x13);
        local_b4 = local_64;
        piVar8 = (int *)(local_64 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        FUN_006377c0();
        local_b4 = (undefined1 *)0x423146;
        local_6c = (undefined4 *)FUN_00637730();
        if (local_44[1] < local_44[2] + 1) {
          local_b4 = (undefined1 *)0x423170;
          FUN_00409cf0();
        }
        iVar5 = local_44[2];
        local_44[2] = iVar5 + 1;
        puVar3 = (undefined4 *)(*local_44 + iVar5 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *local_6c;
          *local_6c = &DAT_00bfe12c;
        }
        piVar8 = (int *)(local_9c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x4231b5;
            FID_conflict__free(piVar8);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        piVar8 = (int *)(local_3c + -8);
        iVar7 = local_4c;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            local_b4 = (undefined1 *)0x4231dc;
            FID_conflict__free(piVar8);
            iVar7 = local_4c;
          }
        }
      }
      iVar5 = *(int *)(iVar7 + 0x20);
      local_50 = local_50 + 1;
    } while ((int)local_50 < iVar5);
  }
switchD_00422854_default:
  piVar8 = (int *)(local_64 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x42323d;
      FID_conflict__free(piVar8);
    }
  }
  if (local_78 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *local_78;
    *local_78 = *local_78 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_b4 = (undefined1 *)0x423260;
      FID_conflict__free(local_78);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = param_1 + 1;
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      local_b4 = (undefined1 *)0x423278;
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

