// rea decompile_all
// name: FUN_005a95a0
// address: 0x5a95a0
// body: available
// range: 0x5a95a0-0x5a9e81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a95a0(void)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717c04;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00633420(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar9 = 0;
  if (0 < *(int *)(local_18 + 0x164)) {
    piVar8 = (int *)(local_18 + 0x15c);
    local_14 = piVar8;
    do {
      piVar3 = (int *)FUN_005a9e90(&local_20);
      if (uVar9 < (uint)piVar8[2]) {
        iVar5 = *(int *)(*piVar8 + uVar9 * 4);
      }
      else {
        iVar5 = 0;
      }
      puVar4 = *(undefined4 **)(iVar5 + 8);
      puVar6 = (undefined4 *)*piVar3;
      if (*(undefined4 **)(iVar5 + 8) == (undefined4 *)*piVar3) {
        iVar10 = 0;
      }
      else {
        do {
          local_24 = puVar6;
          local_28 = puVar4;
          iVar5 = FUN_00443260();
          iVar10 = FUN_00443260();
          piVar8 = local_14;
          if ((iVar5 - iVar10 != 0) &&
             (iVar10 = (iVar5 - iVar10 >> 0x1f & 0xfffffffeU) + 1, iVar10 != 0)) goto LAB_005a964c;
          puVar4 = local_28;
          puVar6 = local_24;
        } while (iVar5 != 0);
        iVar10 = 0;
      }
LAB_005a964c:
      piVar3 = local_20 + -2;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (iVar10 == 0) {
        if (uVar9 < (uint)piVar8[2]) {
          puVar4 = *(undefined4 **)(*piVar8 + uVar9 * 4);
          *puVar4 = local_40;
          puVar4[1] = local_3c;
        }
        else {
          uRam00000000 = local_40;
          uRam00000004 = local_3c;
        }
        goto LAB_005a9759;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(local_18 + 0x164));
  }
  puVar4 = operator_new(0x10);
  local_8 = 0;
  FUN_005a9e90(&local_20);
  *puVar4 = local_40;
  puVar4[1] = local_3c;
  puVar4[2] = local_20;
  piVar8 = local_20 + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  piVar8 = local_20 + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_14 = (int *)(local_18 + 0x15c);
  local_8 = 0xffffffff;
  iVar5 = *(int *)(local_18 + 0x164);
  iVar10 = 0;
  if (iVar5 < 0) {
    iVar10 = iVar5;
  }
  if (*(int *)(local_18 + 0x160) < iVar5 + 1) {
    FUN_00409cf0((iVar5 + 1) / 2 + iVar5 + 9 & 0xfffffff8);
  }
  puVar6 = (undefined4 *)(*local_14 + iVar10 * 4);
  if (0 < local_14[2] - iVar10) {
    FUN_004c1df0(puVar6 + 1,puVar6,(local_14[2] - iVar10) * 4);
  }
  *puVar6 = puVar4;
  local_14[2] = local_14[2] + 1;
LAB_005a9759:
  local_20 = operator_new(0x10);
  local_8 = 1;
  piVar8 = local_20 + 1;
  *local_20 = 0;
  *piVar8 = 0;
  local_20[2] = 0;
  iVar5 = *(int *)ThreadLocalStoragePointer;
  local_1c = iVar5;
  if ((*(int *)(iVar5 + 4) < DAT_00cfff24) && (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
    DAT_00cfff50 = 0;
    _DAT_00cfff54 = 0;
    _DAT_00cfff58 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
    _DAT_00cfff74 = 0;
    _atexit((_func_4879 *)&LAB_0072a350);
    FUN_004c0352(&DAT_00cfff24);
  }
  FUN_0061fa00(local_20 + 3,"ns0:sessiontree");
  local_8 = 2;
  FUN_0045c990("http://www.cymaticaudio.com/sessiontree/1.0");
  local_8._0_1_ = 3;
  if ((*(int *)(iVar5 + 4) < DAT_00cfff24) && (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
    DAT_00cfff50 = 0;
    _DAT_00cfff54 = 0;
    _DAT_00cfff58 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
    _DAT_00cfff74 = 0;
    _atexit((_func_4879 *)&LAB_0072a350);
    FUN_004c0352(&DAT_00cfff24);
  }
  FUN_0061fa00(&local_24,"xmlns:ns0");
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00634ca0(&local_24,&local_28);
  piVar3 = local_24 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8._0_1_ = 2;
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990(&DAT_00748044);
  local_8._0_1_ = 5;
  puVar4 = operator_new(0x10);
  piVar3 = puVar4 + 1;
  local_8._0_1_ = 6;
  *puVar4 = 0;
  *piVar3 = 0;
  puVar4[2] = 0;
  pcVar11 = "ns0:version";
  if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
     (FUN_004c0391(&DAT_00cfff24,"ns0:version"), DAT_00cfff24 == -1)) {
    DAT_00cfff50 = 0;
    _DAT_00cfff54 = 0;
    _DAT_00cfff58 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
    _DAT_00cfff74 = 0;
    _atexit((_func_4879 *)&LAB_0072a350);
    FUN_004c0352(&DAT_00cfff24);
  }
  FUN_0061f8b0(puVar4 + 3,pcVar11);
  local_8._0_1_ = 5;
  iVar5 = *piVar8;
  piVar1 = piVar8;
  while (iVar5 != 0) {
    piVar1 = (int *)*piVar1;
    iVar5 = *piVar1;
  }
  *piVar1 = (int)puVar4;
  iVar5 = FUN_0061a340();
  if (iVar5 != 0) {
    iVar10 = *piVar3;
    while (iVar10 != 0) {
      piVar3 = (int *)*piVar3;
      iVar10 = *piVar3;
    }
    *piVar3 = iVar5;
  }
  local_8._0_1_ = 2;
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  puVar4 = operator_new(0x10);
  piVar3 = puVar4 + 1;
  local_8._0_1_ = 7;
  *puVar4 = 0;
  *piVar3 = 0;
  puVar4[2] = 0;
  pcVar11 = "ns0:items";
  local_28 = puVar4;
  if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
     (FUN_004c0391(&DAT_00cfff24,"ns0:items"), DAT_00cfff24 == -1)) {
    DAT_00cfff50 = 0;
    _DAT_00cfff54 = 0;
    _DAT_00cfff58 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
    _DAT_00cfff74 = 0;
    _atexit((_func_4879 *)&LAB_0072a350);
    FUN_004c0352(&DAT_00cfff24);
  }
  FUN_0061f8b0(puVar4 + 3,pcVar11);
  piVar1 = local_14;
  local_8._0_1_ = 2;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 2;
  iVar5 = *piVar8;
  while (iVar5 != 0) {
    piVar8 = (int *)*piVar8;
    iVar5 = *piVar8;
  }
  *piVar8 = (int)puVar4;
  uVar9 = 0;
  if (0 < *(int *)(local_18 + 0x164)) {
    do {
      puVar6 = operator_new(0x10);
      local_8._0_1_ = 8;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      pcVar11 = "ns0:item";
      if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"ns0:item"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar6 + 3,pcVar11);
      local_8._0_1_ = 2;
      iVar5 = *piVar3;
      piVar8 = piVar3;
      while (iVar5 != 0) {
        piVar8 = (int *)*piVar8;
        iVar5 = *piVar8;
      }
      *piVar8 = (int)puVar6;
      if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_28,&DAT_00748024);
      local_8._0_1_ = 9;
      if (uVar9 < (uint)piVar1[2]) {
        uVar7 = *(undefined4 *)(*piVar1 + uVar9 * 4);
      }
      else {
        uVar7 = 0;
      }
      uVar7 = FUN_00630e40(&local_14,uVar7);
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00634ca0(&local_28,uVar7);
      piVar8 = local_14 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar8 = local_28 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_24,&DAT_0074801c);
      local_8._0_1_ = 0xb;
      if (uVar9 < (uint)piVar1[2]) {
        iVar5 = *(int *)(*piVar1 + uVar9 * 4);
      }
      else {
        iVar5 = 0;
      }
      FUN_00634ca0(&local_24,iVar5 + 8);
      local_8._0_1_ = 2;
      piVar8 = local_24 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      uVar9 = uVar9 + 1;
      uVar2 = (undefined1)local_8;
    } while ((int)uVar9 < *(int *)(local_18 + 0x164));
  }
  local_8._0_1_ = uVar2;
  FUN_005b2a40();
  local_8._0_1_ = 0xc;
  FUN_00635a10(&local_2c,"sessions.xml");
  local_8 = CONCAT31(local_8._1_3_,0xe);
  piVar8 = puVar4 + -1;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  puVar4 = local_20;
  FUN_00634df0(&local_2c,PTR_DAT_00c7ed68,"utf-8",0x78);
  piVar8 = (int *)(local_2c + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  FUN_00634ec0();
  FUN_004bfe14(puVar4,0x10);
  ExceptionList = local_10;
  return;
}

