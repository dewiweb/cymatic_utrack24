// rea decompile_all
// name: FUN_00512000
// address: 0x512000
// body: available
// range: 0x512000-0x512b2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512000(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *extraout_ECX;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int local_ac;
  int *local_a8;
  char *local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  char *local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708db3;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_68 = in_ECX;
  FUN_00634690(local_14);
  local_8 = 0;
  FUN_00635a10(&local_90,"Cymatic Audio uTool2");
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00635a10(&local_88,"Presets");
  piVar4 = (int *)(local_90 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 4;
  piVar4 = (int *)(local_94 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
      piVar4 = extraout_ECX;
    }
  }
  FUN_00634530(piVar4);
  puVar1 = (undefined4 *)FUN_006377c0(piVar4);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar1 = (undefined4 *)FUN_00635a10(&local_98,*puVar1);
  uVar6 = *(undefined4 *)(in_ECX + 8);
  local_44 = (undefined4 *)(in_ECX + 8);
  *local_44 = *puVar1;
  *puVar1 = uVar6;
  piVar4 = (int *)(local_98 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 4;
  piVar4 = (int *)(local_9c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_4c = operator_new(0x10);
  local_8._0_1_ = 6;
  puVar1 = local_4c + 3;
  *local_4c = 0;
  pcVar11 = "ns0:mixerpreset";
  local_4c[1] = 0;
  local_4c[2] = 0;
  FUN_0061f730(puVar1,"ns0:mixerpreset");
  FUN_0061fa00(puVar1,pcVar11);
  local_8._0_1_ = 7;
  FUN_0045c990("http://www.cymaticaudio.com/mixerpreset/1.0");
  piVar4 = &local_54;
  local_8._0_1_ = 8;
  pcVar11 = "xmlns:ns0";
  FUN_0061f730(piVar4,"xmlns:ns0");
  FUN_0061fa00(piVar4,pcVar11);
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_00634ca0(&local_54,&local_58);
  piVar4 = (int *)(local_54 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 7;
  piVar4 = (int *)(local_58 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar2 = FUN_00634c10("ns0:name");
  iVar3 = FUN_0061a340();
  iVar5 = local_68;
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar2 + 4);
    iVar2 = *(int *)(iVar2 + 4);
    while (iVar2 != 0) {
      piVar4 = (int *)*piVar4;
      iVar2 = *piVar4;
    }
    *piVar4 = iVar3;
  }
  puVar7 = &DAT_0073a910;
  if (*(char *)(local_68 + 0x3c) == '\0') {
    puVar7 = &DAT_0073a98c;
  }
  FUN_0045c990(puVar7);
  local_8._0_1_ = 10;
  iVar2 = FUN_00634c10("ns0:pre");
  iVar3 = FUN_0061a340();
  if (iVar3 != 0) {
    piVar4 = (int *)(iVar2 + 4);
    iVar2 = *(int *)(iVar2 + 4);
    while (iVar2 != 0) {
      piVar4 = (int *)*piVar4;
      iVar2 = *piVar4;
    }
    *piVar4 = iVar3;
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  piVar4 = (int *)(local_5c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar2 = FUN_00634c10("ns0:channels");
  local_84 = 0;
  if (0 < *(int *)(iVar5 + 0x14)) {
    local_a0 = (int *)(iVar2 + 4);
    local_3c = *(int *)ThreadLocalStoragePointer;
    do {
      uVar10 = local_84;
      puVar1 = operator_new(0x10);
      local_8._0_1_ = 0xb;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      pcVar11 = "ns0:channel";
      local_40 = puVar1;
      if ((*(int *)(local_3c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"ns0:channel"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar1 + 3,pcVar11);
      local_8._0_1_ = 7;
      iVar5 = *local_a0;
      piVar4 = local_a0;
      while (iVar5 != 0) {
        piVar4 = (int *)*piVar4;
        iVar5 = *piVar4;
      }
      *piVar4 = (int)puVar1;
      if ((*(int *)(local_3c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_64,&DAT_0073a990);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      local_1b[2] = 0;
      local_50 = local_1b + 2;
      if ((int)uVar10 < 0) {
        uVar10 = -uVar10;
        do {
          pcVar11 = local_50;
          local_50 = pcVar11 + -1;
          uVar9 = uVar10 / 10;
          *local_50 = (char)uVar10 + (char)uVar9 * -10 + '0';
          uVar10 = uVar9;
        } while (uVar9 != 0);
        local_50 = pcVar11 + -2;
        *local_50 = '-';
      }
      else {
        do {
          local_50 = local_50 + -1;
          uVar9 = uVar10 / 10;
          *local_50 = (char)uVar10 + (char)uVar9 * -10 + '0';
          uVar10 = uVar9;
        } while (uVar9 != 0);
      }
      iVar5 = -(int)local_50;
      pcVar11 = local_1b + iVar5 + 2;
      piVar4 = (int *)FUN_004bfe22(((uint)(&uStack_15 + iVar5) & 0xfffffffc) + 0xb);
      piVar4[1] = (uint)(&uStack_15 + iVar5) & 0xfffffffc;
      local_a8 = piVar4 + 2;
      *piVar4 = 0;
      local_60 = local_a8;
      local_a4 = local_50;
      while ((0 < (int)pcVar11 && (iVar5 = FUN_00443260(), iVar5 != 0))) {
        FUN_0044ecc0(iVar5);
        pcVar11 = pcVar11 + -1;
      }
      *(undefined1 *)local_60 = 0;
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_00634ca0(&local_64,&local_a8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,7);
      piVar4 = (int *)(local_64 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if ((*(int *)(local_3c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_6c,"level");
      iVar5 = local_68;
      uVar10 = local_84;
      local_8._0_1_ = 0xe;
      uVar6 = FUN_006353d0(2);
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_00634ca0(&local_6c,uVar6);
      piVar4 = (int *)(local_ac + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,7);
      piVar4 = (int *)(local_6c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if ((*(int *)(local_3c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_70,&DAT_0073a968);
      local_8._0_1_ = 0x10;
      uVar6 = FUN_006353d0(2);
      local_8 = CONCAT31(local_8._1_3_,0x11);
      FUN_00634ca0(&local_70,uVar6);
      piVar4 = (int *)(local_48 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8._0_1_ = 7;
      piVar4 = (int *)(local_70 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (uVar10 < *(uint *)(iVar5 + 0x38)) {
        cVar8 = *(char *)(*(int *)(iVar5 + 0x30) + uVar10);
      }
      else {
        cVar8 = '\0';
      }
      puVar7 = &DAT_0073a978;
      if (cVar8 == '\0') {
        puVar7 = &DAT_0073a974;
      }
      FUN_0045c990(puVar7);
      local_8._0_1_ = 0x12;
      if ((*(int *)(local_3c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_74,&DAT_0073a9ac);
      local_8 = CONCAT31(local_8._1_3_,0x13);
      FUN_00634ca0(&local_74,&local_78);
      piVar4 = (int *)(local_74 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8._0_1_ = 7;
      piVar4 = (int *)(local_78 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (uVar10 < *(uint *)(iVar5 + 0x2c)) {
        cVar8 = *(char *)(*(int *)(iVar5 + 0x24) + uVar10);
      }
      else {
        cVar8 = '\0';
      }
      puVar7 = &DAT_0073a9a8;
      if (cVar8 == '\0') {
        puVar7 = &DAT_0073a9bc;
      }
      FUN_0045c990(puVar7);
      local_8._0_1_ = 0x14;
      if ((*(int *)(local_3c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_7c,&DAT_0073a9b4);
      local_8 = CONCAT31(local_8._1_3_,0x15);
      FUN_00634ca0(&local_7c,&local_80);
      piVar4 = (int *)(local_7c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,7);
      local_8c = local_80;
      piVar4 = (int *)(local_80 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_84 = uVar10 + 1;
    } while ((int)local_84 < *(int *)(iVar5 + 0x14));
  }
  puVar1 = local_4c;
  FUN_00634df0(local_44,PTR_DAT_00c7ed68,"utf-8",0x78);
  FUN_00634ec0();
  FUN_004bfe14(puVar1,0x10);
  piVar4 = (int *)(local_88 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

