// rea decompile_all
// name: FUN_00585c10
// address: 0x585c10
// body: available
// range: 0x585c10-0x586898 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585c10(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int in_ECX;
  int *piVar10;
  undefined4 extraout_ECX;
  uint *puVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c;
  int local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  int local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int local_6c;
  void *local_68;
  void *local_60;
  int local_58;
  void *local_54;
  int local_4c;
  void *local_48;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713339;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = 0;
  local_14 = 0;
  local_1c = in_ECX;
  puVar6 = operator_new(0x10);
  local_8 = 0;
  puVar8 = puVar6 + 3;
  *puVar6 = 0;
  pcVar12 = "ns0:uNews";
  puVar6[1] = 0;
  puVar6[2] = 0;
  FUN_0061f730(puVar8,"ns0:uNews",uVar5);
  FUN_0061fa00(puVar8,pcVar12);
  local_8 = 1;
  FUN_0045c990("http://www.cymaticaudio.com/uNews/1.0");
  puVar11 = &local_14;
  local_8._0_1_ = 2;
  pcVar12 = "xmlns:ns0";
  FUN_0061f730(puVar11,"xmlns:ns0");
  FUN_0061fa00(puVar11,pcVar12);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00634ca0(&local_14,&local_18);
  piVar10 = (int *)(local_14 - 8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar10 = local_18 + -2;
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  iVar7 = FUN_00634c10("ns0:newslist");
  local_20 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    local_74 = (int *)(iVar7 + 4);
    local_28 = *(int *)ThreadLocalStoragePointer;
    do {
      iVar7 = local_20;
      puVar8 = operator_new(0x10);
      local_18 = puVar8 + 1;
      local_8._0_1_ = 4;
      *puVar8 = 0;
      *local_18 = 0;
      puVar8[2] = 0;
      pcVar12 = "ns0:news";
      if ((*(int *)(local_28 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"ns0:news"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar8 + 3,pcVar12);
      local_8._0_1_ = 1;
      iVar3 = *local_74;
      piVar10 = local_74;
      while (iVar3 != 0) {
        piVar10 = (int *)*piVar10;
        iVar3 = *piVar10;
      }
      *piVar10 = (int)puVar8;
      if ((*(int *)(local_28 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_30,&DAT_00745dc0);
      FUN_0041a1f0(&local_80,iVar7);
      local_8._0_1_ = 6;
      FUN_00631190();
      local_8._0_1_ = 7;
      uVar9 = FUN_00633d10(&local_78,extraout_ECX,8);
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_00634ca0(&local_30,uVar9);
      piVar10 = (int *)(local_78 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      piVar10 = (int *)(local_7c + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      if (local_80 != (undefined4 *)0x0) {
        LOCK();
        piVar10 = local_80 + 1;
        iVar3 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_80)(1);
        }
      }
      piVar10 = (int *)(local_30 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      FUN_0041a1f0(&local_84,iVar7);
      local_8._0_1_ = 9;
      puVar8 = operator_new(0x10);
      piVar10 = puVar8 + 1;
      local_8._0_1_ = 10;
      *puVar8 = 0;
      *piVar10 = 0;
      puVar8[2] = 0;
      pcVar12 = "ns0:title";
      if ((*(int *)(local_28 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"ns0:title"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar8 + 3,pcVar12);
      local_8 = CONCAT31(local_8._1_3_,9);
      iVar7 = *local_18;
      piVar4 = local_18;
      while (iVar7 != 0) {
        piVar4 = (int *)*piVar4;
        iVar7 = *piVar4;
      }
      *piVar4 = (int)puVar8;
      iVar7 = FUN_0061a340();
      if (iVar7 != 0) {
        iVar3 = *piVar10;
        while (iVar3 != 0) {
          piVar10 = (int *)*piVar10;
          iVar3 = *piVar10;
        }
        *piVar10 = iVar7;
      }
      if (local_84 != (undefined4 *)0x0) {
        LOCK();
        piVar10 = local_84 + 1;
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_84)(1);
        }
      }
      puVar8 = (undefined4 *)FUN_0041a1f0(&local_8c,local_20);
      local_8._0_1_ = 0xb;
      FUN_00630e40(&local_88,*puVar8);
      local_8._0_1_ = 0xc;
      puVar8 = operator_new(0x10);
      piVar10 = puVar8 + 1;
      local_8._0_1_ = 0xd;
      *puVar8 = 0;
      *piVar10 = 0;
      puVar8[2] = 0;
      pcVar12 = "ns0:date";
      if ((*(int *)(local_28 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"ns0:date"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar8 + 3,pcVar12);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      iVar7 = *local_18;
      piVar4 = local_18;
      while (iVar7 != 0) {
        piVar4 = (int *)*piVar4;
        iVar7 = *piVar4;
      }
      *piVar4 = (int)puVar8;
      iVar7 = FUN_0061a340();
      if (iVar7 != 0) {
        iVar3 = *piVar10;
        while (iVar3 != 0) {
          piVar10 = (int *)*piVar10;
          iVar3 = *piVar10;
        }
        *piVar10 = iVar7;
      }
      piVar10 = (int *)(local_88 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      if (local_8c != (undefined4 *)0x0) {
        LOCK();
        piVar10 = local_8c + 1;
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_8c)(1);
        }
      }
      FUN_0041a1f0(&local_90,local_20);
      local_8._0_1_ = 0xe;
      puVar8 = operator_new(0x10);
      piVar10 = puVar8 + 1;
      local_8._0_1_ = 0xf;
      *puVar8 = 0;
      *piVar10 = 0;
      puVar8[2] = 0;
      pcVar12 = "ns0:subject";
      if ((*(int *)(local_28 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"ns0:subject"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar8 + 3,pcVar12);
      local_8._0_1_ = 0xe;
      iVar7 = *local_18;
      piVar4 = local_18;
      while (iVar7 != 0) {
        piVar4 = (int *)*piVar4;
        iVar7 = *piVar4;
      }
      *piVar4 = (int)puVar8;
      iVar7 = FUN_0061a340();
      if (iVar7 != 0) {
        iVar3 = *piVar10;
        while (iVar3 != 0) {
          piVar10 = (int *)*piVar10;
          iVar3 = *piVar10;
        }
        *piVar10 = iVar7;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_90 != (undefined4 *)0x0) {
        LOCK();
        piVar10 = local_90 + 1;
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_90)(1);
        }
      }
      uVar5 = 0;
      while( true ) {
        iVar3 = local_20;
        local_14 = uVar5;
        piVar10 = (int *)FUN_0041a1f0(&local_94,local_20);
        iVar7 = *(int *)(*piVar10 + 0x28);
        if (local_94 != (undefined4 *)0x0) {
          LOCK();
          piVar10 = local_94 + 1;
          iVar1 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)*local_94)(1);
          }
        }
        puVar8 = operator_new(0x10);
        in_ECX = local_1c;
        if (iVar7 <= (int)uVar5) break;
        piVar10 = puVar8 + 1;
        local_8._0_1_ = 0x10;
        *puVar8 = 0;
        *piVar10 = 0;
        puVar8[2] = 0;
        pcVar12 = "ns0:relatedurl";
        if ((*(int *)(local_28 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24,"ns0:relatedurl"), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061f8b0(puVar8 + 3,pcVar12);
        iVar7 = *local_18;
        piVar4 = local_18;
        while (iVar7 != 0) {
          piVar4 = (int *)*piVar4;
          iVar7 = *piVar4;
        }
        *piVar4 = (int)puVar8;
        FUN_0041a1f0(&local_9c,local_20);
        FUN_0041a2b0(&local_70,uVar5);
        local_8._0_1_ = 0x12;
        FUN_00631e00(&local_98,1);
        local_8 = CONCAT31(local_8._1_3_,0x13);
        iVar7 = FUN_0061a340();
        if (iVar7 != 0) {
          iVar3 = *piVar10;
          while (iVar3 != 0) {
            piVar10 = (int *)*piVar10;
            iVar3 = *piVar10;
          }
          *piVar10 = iVar7;
        }
        piVar10 = (int *)(local_98 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        while (0 < local_40) {
          local_40 = local_40 + -1;
          puVar8 = *(undefined4 **)((int)local_48 + local_40 * 4);
          if (puVar8 != (undefined4 *)0x0) {
            LOCK();
            piVar10 = puVar8 + 1;
            iVar7 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)*puVar8)(1);
            }
          }
        }
        FID_conflict__free(local_48);
        iVar7 = 0;
        if (0 < local_4c) {
          do {
            piVar10 = (int *)(*(int *)((int)local_54 + iVar7 * 4) + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_4c);
        }
        FID_conflict__free(local_54);
        iVar7 = 0;
        if (0 < local_58) {
          do {
            piVar10 = (int *)(*(int *)((int)local_60 + iVar7 * 4) + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_58);
        }
        FID_conflict__free(local_60);
        FID_conflict__free(local_68);
        piVar10 = (int *)(local_6c + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        piVar10 = (int *)(local_70 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_9c != (undefined4 *)0x0) {
          LOCK();
          piVar10 = local_9c + 1;
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*local_9c)(1);
          }
        }
        FUN_0041a1f0(&local_a0,local_20);
        puVar8 = (undefined4 *)FUN_0041a2b0(&local_70,uVar5);
        cVar2 = *(char *)*puVar8;
        while (0 < local_40) {
          local_40 = local_40 + -1;
          puVar8 = *(undefined4 **)((int)local_48 + local_40 * 4);
          if (puVar8 != (undefined4 *)0x0) {
            LOCK();
            piVar10 = puVar8 + 1;
            iVar7 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)*puVar8)(1);
            }
          }
        }
        FID_conflict__free(local_48);
        iVar7 = 0;
        if (0 < local_4c) {
          do {
            piVar10 = (int *)(*(int *)((int)local_54 + iVar7 * 4) + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_4c);
        }
        FID_conflict__free(local_54);
        iVar7 = 0;
        if (0 < local_58) {
          do {
            piVar10 = (int *)(*(int *)((int)local_60 + iVar7 * 4) + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_58);
        }
        FID_conflict__free(local_60);
        FID_conflict__free(local_68);
        piVar10 = (int *)(local_6c + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        piVar10 = (int *)(local_70 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        if (local_a0 != (undefined4 *)0x0) {
          LOCK();
          piVar10 = local_a0 + 1;
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*local_a0)(1);
          }
        }
        uVar5 = local_14;
        if (cVar2 == '\0') {
LAB_005867cc:
          uVar5 = uVar5 + 1;
        }
        else {
          piVar10 = &local_34;
          puVar13 = &DAT_00745da0;
          FUN_0061f730(piVar10,&DAT_00745da0);
          FUN_0061fa00(piVar10,puVar13);
          FUN_0041a1f0(&local_a4,local_20);
          uVar5 = local_14;
          uVar9 = FUN_0041a2b0(&local_70,local_14);
          local_8 = CONCAT31(local_8._1_3_,0x16);
          FUN_00634ca0(&local_34,uVar9);
          FUN_00636570();
          piVar10 = (int *)(local_70 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar10);
            }
          }
          if (local_a4 != (undefined4 *)0x0) {
            LOCK();
            piVar10 = local_a4 + 1;
            iVar7 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)*local_a4)(1);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          piVar10 = (int *)(local_34 + -8);
          if (piVar10 == &DAT_00bfe124) goto LAB_005867cc;
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 != 0) goto LAB_005867cc;
          FID_conflict__free(piVar10);
          uVar5 = uVar5 + 1;
        }
      }
      local_3c = puVar8;
      piVar10 = (int *)FUN_0041a1f0(&local_38,iVar3);
      local_8 = CONCAT31(local_8._1_3_,0x18);
      local_2c = local_2c | 1;
      local_14 = local_2c;
      iVar7 = FUN_006313a0(*(undefined4 *)(*piVar10 + 0x1c));
      if (iVar7 != 0) {
        iVar1 = *local_18;
        piVar10 = local_18;
        while (iVar1 != 0) {
          piVar10 = (int *)*piVar10;
          iVar1 = *piVar10;
        }
        *piVar10 = iVar7;
      }
      local_8 = 1;
      local_2c = local_2c & 0xfffffffe;
      if (local_38 != (undefined4 *)0x0) {
        LOCK();
        piVar10 = local_38 + 1;
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_38)(1);
        }
      }
      local_20 = iVar3 + 1;
    } while (local_20 < *(int *)(in_ECX + 0x20));
  }
  FUN_00634df0(in_ECX + 0x24,PTR_DAT_00c7ed68,"utf-8",0x78);
  FUN_00634ec0();
  FUN_004bfe14(puVar6,0x10);
  ExceptionList = local_10;
  return;
}

