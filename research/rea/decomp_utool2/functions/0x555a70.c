// rea decompile_all
// name: FUN_00555a70
// address: 0x555a70
// body: available
// range: 0x555a70-0x5565ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555a70(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  undefined4 *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  char *local_3c;
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711256;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  local_44 = in_ECX;
  local_14 = uVar3;
  local_4c = operator_new(0x10);
  local_8 = 0;
  local_64 = local_4c + 1;
  *local_4c = 0;
  *local_64 = 0;
  puVar6 = local_4c + 3;
  pcVar9 = "playlist";
  local_4c[2] = 0;
  FUN_0061f730(puVar6,"playlist",uVar3);
  FUN_0061fa00(puVar6,pcVar9);
  local_8 = 0xffffffff;
  iVar4 = FUN_00634c10("version");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  FUN_00633ba0(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
  local_8 = 1;
  iVar4 = FUN_00634c10("timestamp");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_5c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  iVar4 = FUN_00634c10("creator");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  iVar4 = FUN_00634c10("playlistname");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  FUN_005bcea0();
  local_8 = 2;
  iVar4 = FUN_00634c10("target_device");
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 4);
    while (iVar4 != 0) {
      piVar7 = (int *)*piVar7;
      iVar4 = *piVar7;
    }
    *piVar7 = iVar5;
  }
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_60 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_48 = 0;
  if (0 < *(int *)(local_44 + 0x30)) {
    local_40 = *(int *)ThreadLocalStoragePointer;
    do {
      puVar6 = operator_new(0x10);
      piVar7 = puVar6 + 1;
      local_8 = 3;
      *puVar6 = 0;
      *piVar7 = 0;
      puVar6[2] = 0;
      puVar10 = &DAT_0073e7e0;
      if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,&DAT_0073e7e0), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,puVar10);
      iVar4 = *local_64;
      piVar1 = local_64;
      while (iVar4 != 0) {
        piVar1 = (int *)*piVar1;
        iVar4 = *piVar1;
      }
      *piVar1 = (int)puVar6;
      local_3c = (char *)FUN_0040eb90(&local_68);
      local_8 = 4;
      puVar6 = operator_new(0x10);
      piVar1 = puVar6 + 1;
      local_8._0_1_ = 5;
      *puVar6 = 0;
      *piVar1 = 0;
      puVar6[2] = 0;
      puVar10 = &DAT_0073e7e8;
      if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,&DAT_0073e7e8), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,puVar10);
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar4 = *piVar7;
      piVar2 = piVar7;
      while (iVar4 != 0) {
        piVar2 = (int *)*piVar2;
        iVar4 = *piVar2;
      }
      *piVar2 = (int)puVar6;
      iVar4 = FUN_0061a340();
      if (iVar4 != 0) {
        iVar5 = *piVar1;
        while (iVar5 != 0) {
          piVar1 = (int *)*piVar1;
          iVar5 = *piVar1;
        }
        *piVar1 = iVar4;
      }
      piVar1 = (int *)(local_68 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      local_3c = (char *)FUN_00418270(&local_6c);
      local_8 = 6;
      puVar6 = operator_new(0x10);
      piVar1 = puVar6 + 1;
      local_8._0_1_ = 7;
      *puVar6 = 0;
      *piVar1 = 0;
      puVar6[2] = 0;
      pcVar9 = "location";
      if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"location"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,pcVar9);
      local_8 = CONCAT31(local_8._1_3_,6);
      iVar4 = *piVar7;
      piVar2 = piVar7;
      while (iVar4 != 0) {
        piVar2 = (int *)*piVar2;
        iVar4 = *piVar2;
      }
      *piVar2 = (int)puVar6;
      iVar4 = FUN_0061a340();
      if (iVar4 != 0) {
        iVar5 = *piVar1;
        while (iVar5 != 0) {
          piVar1 = (int *)*piVar1;
          iVar5 = *piVar1;
        }
        *piVar1 = iVar4;
      }
      local_8 = 0xffffffff;
      piVar1 = (int *)(local_6c + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      local_3c = (char *)FUN_00637cf0(3);
      local_8 = 8;
      puVar6 = operator_new(0x10);
      piVar1 = puVar6 + 1;
      local_8._0_1_ = 9;
      *puVar6 = 0;
      *piVar1 = 0;
      puVar6[2] = 0;
      pcVar9 = "duration";
      if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"duration"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,pcVar9);
      local_8 = CONCAT31(local_8._1_3_,8);
      iVar4 = *piVar7;
      piVar2 = piVar7;
      while (iVar4 != 0) {
        piVar2 = (int *)*piVar2;
        iVar4 = *piVar2;
      }
      *piVar2 = (int)puVar6;
      iVar4 = FUN_0061a340();
      if (iVar4 != 0) {
        iVar5 = *piVar1;
        while (iVar5 != 0) {
          piVar1 = (int *)*piVar1;
          iVar5 = *piVar1;
        }
        *piVar1 = iVar4;
      }
      local_8 = 0xffffffff;
      piVar1 = (int *)(local_70 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      puVar6 = operator_new(0x10);
      piVar1 = puVar6 + 1;
      local_8 = 10;
      *puVar6 = 0;
      *piVar1 = 0;
      puVar6[2] = 0;
      pcVar9 = "pause_mode";
      local_54 = piVar1;
      if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"pause_mode"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,pcVar9);
      local_8 = 0xffffffff;
      iVar4 = *piVar7;
      while (iVar4 != 0) {
        piVar7 = (int *)*piVar7;
        iVar4 = *piVar7;
      }
      *piVar7 = (int)puVar6;
      local_3c = (char *)FUN_005bcf60();
      local_8 = 0xb;
      puVar6 = operator_new(0x10);
      piVar7 = puVar6 + 1;
      local_8._0_1_ = 0xc;
      *puVar6 = 0;
      *piVar7 = 0;
      puVar6[2] = 0;
      puVar10 = &DAT_0073e81c;
      if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,&DAT_0073e81c), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,puVar10);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      iVar4 = *piVar1;
      while (iVar4 != 0) {
        piVar1 = (int *)*piVar1;
        iVar4 = *piVar1;
      }
      *piVar1 = (int)puVar6;
      iVar4 = FUN_0061a340();
      if (iVar4 != 0) {
        iVar5 = *piVar7;
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = iVar4;
      }
      local_8 = 0xffffffff;
      piVar7 = (int *)(local_74 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (local_48 < *(uint *)(local_44 + 0x30)) {
        iVar4 = *(int *)(*(int *)(local_44 + 0x28) + local_48 * 4);
      }
      else {
        iVar4 = 0;
      }
      uVar3 = *(uint *)(iVar4 + 0xc);
      local_3c = local_1b + 2;
      local_1b[2] = 0;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
        do {
          pcVar9 = local_3c;
          local_3c = pcVar9 + -1;
          uVar8 = uVar3 / 10;
          *local_3c = (char)uVar3 + (char)uVar8 * -10 + '0';
          uVar3 = uVar8;
        } while (uVar8 != 0);
        local_3c = pcVar9 + -2;
        *local_3c = '-';
      }
      else {
        do {
          local_3c = local_3c + -1;
          uVar8 = uVar3 / 10;
          *local_3c = (char)uVar3 + (char)uVar8 * -10 + '0';
          uVar3 = uVar8;
        } while (uVar8 != 0);
      }
      iVar4 = -(int)local_3c;
      pcVar9 = local_1b + iVar4 + 2;
      piVar7 = (int *)FUN_004bfe22(((uint)(&uStack_15 + iVar4) & 0xfffffffc) + 0xb);
      piVar7[1] = (uint)(&uStack_15 + iVar4) & 0xfffffffc;
      local_58 = piVar7 + 2;
      *piVar7 = 0;
      local_50 = local_58;
      while ((0 < (int)pcVar9 && (iVar4 = FUN_00443260(), iVar4 != 0))) {
        FUN_0044ecc0(iVar4);
        pcVar9 = pcVar9 + -1;
      }
      *(undefined1 *)local_58 = 0;
      local_8 = 0xd;
      puVar6 = operator_new(0x10);
      piVar1 = puVar6 + 1;
      local_8._0_1_ = 0xe;
      *puVar6 = 0;
      *piVar1 = 0;
      puVar6[2] = 0;
      puVar10 = &DAT_0073e8c4;
      if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,&DAT_0073e8c4), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,puVar10);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      iVar4 = *local_54;
      piVar2 = local_54;
      while (iVar4 != 0) {
        piVar2 = (int *)*piVar2;
        iVar4 = *piVar2;
      }
      *piVar2 = (int)puVar6;
      iVar4 = FUN_0061a340();
      if (iVar4 != 0) {
        iVar5 = *piVar1;
        while (iVar5 != 0) {
          piVar1 = (int *)*piVar1;
          iVar5 = *piVar1;
        }
        *piVar1 = iVar4;
      }
      local_8 = 0xffffffff;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_48 = local_48 + 1;
    } while ((int)local_48 < *(int *)(local_44 + 0x30));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

