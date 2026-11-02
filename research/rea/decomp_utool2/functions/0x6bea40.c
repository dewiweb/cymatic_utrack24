// rea decompile_all
// name: FUN_006bea40
// address: 0x6bea40
// body: available
// range: 0x6bea40-0x6bf09c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bea40(int *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined8 *local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  char *local_58;
  char *local_54;
  int *local_50;
  undefined8 *local_4c;
  char *local_48;
  undefined2 local_44 [2];
  int local_40;
  char local_3c [4];
  undefined **local_38 [2];
  double local_30;
  undefined **local_28 [2];
  undefined8 local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724fc4;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  if (*(int *)(in_ECX + 4) == 0) {
    if (*(int *)(in_ECX + 8) == 0) {
      local_4c = &local_20;
      local_28[0] = &PTR_vftable_00c7ed4c;
      local_8 = 0;
      FUN_0045c990("solid",local_18);
      local_8 = 1;
      if (*param_1 != 0) {
        FUN_00461420(&DAT_00c8aa80,local_28,0);
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_28[0] + 0x54))(&local_20);
      puVar5 = (undefined4 *)FUN_00631190();
      local_28[0] = &PTR_vftable_00c7ed4c;
      local_20 = CONCAT44(local_20._4_4_,*puVar5);
      *puVar5 = &DAT_00bfe12c;
      local_8 = 3;
      if (*param_1 != 0) {
        FUN_00461420(&DAT_00c8a984,local_28,0);
      }
      (**(code **)(*local_28[0] + 0x54))(&local_20);
      piVar7 = local_50 + -2;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
    else if (*(int *)(in_ECX + 8) != 0) {
      local_68 = &local_20;
      local_28[0] = &PTR_vftable_00c7ed4c;
      local_8 = 0x12;
      FUN_0045c990("image",local_18);
      local_8 = 0x13;
      if (*param_1 != 0) {
        FUN_00461420(&DAT_00c8aa80,local_28,0);
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_28[0] + 0x54))(&local_20);
      if (param_2 != (int *)0x0) {
        uVar6 = (**(code **)(*param_2 + 8))(local_28,in_ECX + 8);
        local_8 = 0x14;
        if (*param_1 != 0) {
          FUN_00461420(&DAT_00c8a9b4,uVar6,0);
        }
        local_8 = 0xffffffff;
        (**(code **)(*local_28[0] + 0x54))(&local_20);
      }
      if (1.0 <= (float)*(byte *)(in_ECX + 3) / 255.0) {
        if (*param_1 != 0) {
          FUN_00461580(&DAT_00c8aa7c,0);
        }
      }
      else {
        local_38[0] = &PTR_vftable_00c7ed2c;
        local_30 = (double)((float)*(byte *)(in_ECX + 3) / 255.0);
        local_8 = 0x15;
        if (*param_1 != 0) {
          FUN_00461420(&DAT_00c8aa7c,local_38,0);
        }
        (**(code **)(*local_38[0] + 0x54))(&local_30);
      }
    }
  }
  else {
    local_4c = &local_20;
    local_28[0] = &PTR_vftable_00c7ed4c;
    local_8 = 4;
    FUN_0045c990("gradient",local_18);
    local_8 = 5;
    if (*param_1 != 0) {
      FUN_00461420(&DAT_00c8aa80,local_28,0);
    }
    local_8 = 0xffffffff;
    (**(code **)(*local_28[0] + 0x54))(&local_20);
    puVar5 = (undefined4 *)FUN_0069de20(&local_40);
    local_28[0] = &PTR_vftable_00c7ed4c;
    local_20 = CONCAT44(local_20._4_4_,*puVar5);
    *puVar5 = &DAT_00bfe12c;
    local_8 = 7;
    if (*param_1 != 0) {
      FUN_00461420(&DAT_00c8a9fc,local_28,0);
    }
    (**(code **)(*local_28[0] + 0x54))(&local_20);
    local_8 = 0xffffffff;
    piVar7 = (int *)(local_40 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    puVar5 = (undefined4 *)FUN_0069de20(&local_40);
    local_28[0] = &PTR_vftable_00c7ed4c;
    local_20 = CONCAT44(local_20._4_4_,*puVar5);
    *puVar5 = &DAT_00bfe12c;
    local_8 = 9;
    if (*param_1 != 0) {
      FUN_00461420(&DAT_00c8aa24,local_28,0);
    }
    (**(code **)(*local_28[0] + 0x54))(&local_20);
    local_8 = 0xffffffff;
    piVar7 = (int *)(local_40 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    puVar5 = (undefined4 *)FUN_0069de20(&local_40);
    local_28[0] = &PTR_vftable_00c7ed4c;
    local_20 = CONCAT44(local_20._4_4_,*puVar5);
    *puVar5 = &DAT_00bfe12c;
    local_8 = 0xb;
    if (*param_1 != 0) {
      FUN_00461420(&DAT_00c8aa14,local_28,0);
    }
    (**(code **)(*local_28[0] + 0x54))(&local_20);
    piVar7 = (int *)(local_40 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    iVar10 = *(int *)(in_ECX + 4);
    local_28[0] = &PTR_vftable_00c7ed34;
    local_20 = CONCAT71(local_20._1_7_,*(undefined1 *)(iVar10 + 0x10));
    local_8 = 0xc;
    local_5c = iVar10;
    if (*local_50 != 0) {
      FUN_00461420(&DAT_00c8a9a8,local_28,0);
    }
    (**(code **)(*local_28[0] + 0x54))(&local_20);
    local_48 = "";
    uVar9 = 0;
    local_8 = 0xd;
    if (0 < *(int *)(iVar10 + 0x1c)) {
      local_40 = 0;
      do {
        iVar2 = local_40;
        FUN_0067ed20(&local_68,uVar9);
        local_64 = FUN_00631190();
        local_8._0_1_ = 0xe;
        if (uVar9 < *(uint *)(iVar10 + 0x1c)) {
          local_20 = *(undefined8 *)(*(int *)(iVar10 + 0x14) + iVar2);
        }
        else {
          local_20 = 0;
        }
        local_3c[0] = ' ';
        local_3c[1] = '\0';
        pcVar1 = local_3c;
        do {
          local_58 = pcVar1;
          pcVar1 = local_58 + 1;
        } while (*local_58 != '\0');
        local_58 = local_58 + (0x3c - (int)&stack0x00000000);
        if (0 < (int)local_58) {
          pcVar1 = local_48 + 1;
          pcVar8 = local_48;
          do {
            cVar3 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          FUN_00455850(local_48);
          pcVar4 = local_58;
          local_48 = local_54;
          pcVar1 = local_54 + ((int)pcVar8 - (int)pcVar1);
          FUN_004c2c30(pcVar1,local_3c,local_58);
          pcVar1[(int)pcVar4] = '\0';
          iVar10 = local_5c;
        }
        uVar6 = FUN_00635260();
        local_8._0_1_ = 0xf;
        FUN_00636ec0(uVar6);
        local_8._0_1_ = 0xe;
        piVar7 = (int *)(local_60 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_44[0] = 0x20;
        FUN_00621830(local_44);
        FUN_00636ec0(local_64);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        piVar7 = (int *)(local_4c + -1);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        uVar9 = uVar9 + 1;
        local_40 = local_40 + 0x10;
      } while ((int)uVar9 < *(int *)(iVar10 + 0x1c));
    }
    puVar5 = (undefined4 *)FUN_00620cf0(&local_4c);
    local_28[0] = &PTR_vftable_00c7ed4c;
    local_20 = CONCAT44(local_20._4_4_,*puVar5);
    *puVar5 = &DAT_00bfe12c;
    local_8 = CONCAT31(local_8._1_3_,0x11);
    if (*local_50 != 0) {
      FUN_00461420(&DAT_00c8a998,local_28,0);
    }
    (**(code **)(*local_28[0] + 0x54))(&local_20);
    piVar7 = (int *)(local_4c + -1);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_48 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

