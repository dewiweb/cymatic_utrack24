// rea decompile_all
// name: FUN_00535970
// address: 0x535970
// body: available
// range: 0x535970-0x5360fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00535970(uint param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  char *pcVar8;
  undefined1 auStack_94 [8];
  undefined4 uStack_8c;
  undefined4 local_88;
  int *local_84;
  int local_6c;
  undefined4 *local_68;
  uint local_64;
  undefined4 *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  int local_50;
  int local_4c;
  char *local_48;
  int local_40;
  char *local_3c;
  char local_35;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d578;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = param_1;
  local_68 = param_2;
  local_84 = (int *)0x5359bd;
  local_50 = in_ECX;
  FUN_0045c990();
  iVar5 = *(int *)(in_ECX + 0xc);
  *(int *)(in_ECX + 0xc) = local_40;
  piVar7 = (int *)(iVar5 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (int *)0x5359e8;
      FID_conflict__free(piVar7);
    }
  }
  if ((*(uint *)(*(int *)(in_ECX + 8) + 0x30) <= local_64) ||
     (local_4c = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0x28) + local_64 * 4), local_4c == 0))
  goto LAB_005360dd;
  if (param_5 != '\0') {
    local_84 = (int *)0x535a22;
    FUN_00684a80();
  }
  local_84 = (int *)0x535a3a;
  FUN_00684c50();
  pcVar8 = "";
  local_58 = "";
  local_8 = 0;
  local_84 = (int *)0x535a55;
  puVar3 = (undefined4 *)FUN_0040a090();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)*puVar3 == '\0') {
LAB_00535a7d:
    bVar2 = false;
  }
  else {
    puVar3 = (undefined4 *)FUN_00458890();
    local_84 = (int *)0x535a72;
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if ((DVar4 & 0x10) != 0) goto LAB_00535a7d;
    bVar2 = true;
  }
  local_35 = !bVar2;
  local_8 = local_8 & 0xffffff00;
  piVar7 = (int *)(local_40 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (int *)0x535aa9;
      FID_conflict__free(piVar7);
    }
  }
  if (local_35 == '\0') {
LAB_00535e43:
    local_50 = param_4 + -4;
    local_48 = (char *)((param_4 * 3) / 2);
    local_40 = (param_3 - local_50 / 2) - (int)local_48;
    iVar5 = *(int *)(local_4c + 8);
    if (iVar5 == 1) {
LAB_00535f86:
      local_84 = (int *)(float)local_50;
      local_88 = 0x535fb0;
      FUN_00561df0();
    }
    else if (iVar5 == 2) {
      local_5c = param_3 - (int)local_48;
      local_40 = (local_5c - local_50) + -2;
      local_84 = (int *)(float)local_50;
      local_88 = 0x535ed8;
      FUN_00561df0();
      local_3c = (char *)FUN_0057f440();
      local_8._0_1_ = 0xd;
      if (*(char *)(param_2 + 2) != '\0') {
        *(undefined1 *)(param_2 + 2) = 0;
        (**(code **)(*(int *)*param_2 + 0x34))();
      }
      local_84 = (int *)0x535f05;
      (**(code **)(*(int *)*param_2 + 0x68))();
      local_8._0_1_ = 0;
      if (local_60 != (undefined4 *)0x0) {
        LOCK();
        piVar7 = local_60 + 1;
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          local_84 = (int *)0x535f25;
          (**(code **)*local_60)();
        }
      }
      local_84 = (int *)0x535f33;
      uVar6 = FUN_00637c90();
      local_8._0_1_ = 0xe;
      local_84 = (int *)local_48;
      local_88 = 0;
      uStack_8c = 0x535f4d;
      FUN_00472d90();
      local_84 = (int *)0x24;
      FUN_0040e4d0(auStack_94);
      FUN_006830c0(uVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00637c10();
    }
    else if (iVar5 == 3) goto LAB_00535f86;
  }
  else {
    local_84 = (int *)0x535ac7;
    FUN_0045c990();
    local_84 = (int *)0x535ad6;
    FUN_0040a090();
    local_8 = CONCAT31(local_8._1_3_,3);
    local_84 = (int *)0x535ae5;
    local_84 = (int *)FUN_00636a10();
    iVar5 = local_40;
    if (*local_84 == local_40) {
      local_40 = 0;
    }
    else {
      local_84 = (int *)*local_84;
      local_88 = 0x535b08;
      local_40 = FUN_0045c1e0();
    }
    piVar7 = (int *)(local_48 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_84 = (int *)0x535b2e;
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_54 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_84 = (int *)0x535b51;
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(iVar5 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_84 = (int *)0x535b71;
        FID_conflict__free(piVar7);
      }
    }
    if (local_40 == 0) {
      local_84 = (int *)0x535c35;
      FUN_0040a090();
      local_8._0_1_ = 7;
      local_84 = (int *)0x535c44;
      FUN_00636040();
      local_84 = (int *)&stack0xffffff80;
      local_8._0_1_ = 8;
      local_88 = 0x535c51;
      FUN_00636a10();
      local_84 = (int *)0x535c5e;
      FUN_006377c0();
      local_84 = (int *)0x535c6c;
      FUN_0040a090();
      local_8._0_1_ = 10;
      local_84 = (int *)0x535c7b;
      FUN_00636040();
      local_8._0_1_ = 0xb;
      local_84 = &local_54;
      local_88 = 0x535c91;
      puVar3 = (undefined4 *)FUN_00635a10();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      if (*(char *)*puVar3 == '\0') {
LAB_00535cb6:
        local_35 = '\0';
      }
      else {
        puVar3 = (undefined4 *)FUN_00458890();
        local_84 = (int *)0x535cae;
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        local_35 = '\x01';
        if ((DVar4 & 0x10) != 0) goto LAB_00535cb6;
      }
      piVar7 = (int *)(local_54 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (int *)0x535cda;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_40 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (int *)0x535cfd;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_48 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (int *)0x535d20;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_5c + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (int *)0x535d43;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = local_60 + -2;
      pcVar8 = local_3c;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (int *)0x535d66;
          FID_conflict__free(piVar7);
          pcVar8 = local_3c;
        }
      }
    }
    else {
      local_84 = (int *)0x535b8a;
      FUN_0040a090();
      local_8._0_1_ = 4;
      local_84 = (int *)0x535b99;
      FUN_00636040();
      local_8._0_1_ = 5;
      local_84 = &local_54;
      local_88 = 0x535bb1;
      puVar3 = (undefined4 *)FUN_00635a10();
      local_8 = CONCAT31(local_8._1_3_,6);
      if (*(char *)*puVar3 == '\0') {
LAB_00535bd6:
        local_35 = '\0';
      }
      else {
        puVar3 = (undefined4 *)FUN_00458890();
        local_84 = (int *)0x535bce;
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        local_35 = '\x01';
        if ((DVar4 & 0x10) != 0) goto LAB_00535bd6;
      }
      piVar7 = (int *)(local_54 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (int *)0x535bfa;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_40 + -8);
      pcVar8 = local_48;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (int *)0x535c1d;
          FID_conflict__free(piVar7);
          pcVar8 = local_48;
        }
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar7 = (int *)(pcVar8 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_84 = (int *)0x535d8d;
        FID_conflict__free(piVar7);
      }
    }
    if (local_35 == '\0') {
      local_84 = (int *)0x535dbc;
      FUN_0045c990();
    }
    else {
      local_84 = (int *)0x535da7;
      FUN_0045c990();
    }
    pcVar8 = local_3c;
    local_58 = local_3c;
    local_84 = (int *)0x535dd2;
    FUN_0045c990();
    iVar5 = *(int *)(local_50 + 0xc);
    *(char **)(local_50 + 0xc) = local_3c;
    piVar7 = (int *)(iVar5 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_84 = (int *)0x535dfe;
        FID_conflict__free(piVar7);
      }
    }
    if (*pcVar8 == '\0') goto LAB_00535e43;
    local_1c = param_3;
    local_18 = param_4;
    local_84 = &local_24;
    local_24 = 0;
    local_20 = 0;
    local_88 = 0x535e30;
    iVar5 = FUN_0057f1c0();
    local_40 = (int)(float)iVar5;
  }
  local_3c = &stack0xffffff80;
  if ((int)(local_64 + 1) < 0) {
    local_84 = (int *)0x535fd2;
    iVar5 = FUN_006104a0();
    *(undefined1 *)(iVar5 + -1) = 0x2d;
    iVar5 = iVar5 + -1;
  }
  else {
    local_84 = (int *)0x535fc7;
    local_3c = &stack0xffffff80;
    iVar5 = FUN_006104a0();
  }
  local_84 = (int *)((int)&local_18 + (3 - iVar5));
  local_88 = 0x535fe7;
  FUN_004557e0();
  local_84 = (int *)0x535ff7;
  FUN_006377c0();
  local_8._0_1_ = 0xf;
  local_84 = (int *)0x28;
  local_88 = 0;
  uStack_8c = 0x53600c;
  FUN_00472d90();
  local_84 = (int *)0x22;
  FUN_0040e4d0(auStack_94);
  FUN_006830c0(&local_6c);
  local_84 = (int *)0x53603a;
  uVar6 = FUN_0040eb90();
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_84 = (int *)(local_40 + -0x2a);
  local_88 = 0;
  uStack_8c = 0x536059;
  FUN_00472d90();
  local_84 = (int *)0x21;
  FUN_0040e4d0(auStack_94);
  FUN_006830c0(uVar6);
  piVar7 = (int *)(local_3c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (int *)0x536099;
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = (int *)(local_6c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (int *)0x5360bc;
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = (int *)(pcVar8 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (int *)0x5360da;
      FID_conflict__free(piVar7);
    }
  }
LAB_005360dd:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

