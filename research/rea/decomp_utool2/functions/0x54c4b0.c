// rea decompile_all
// name: FUN_0054c4b0
// address: 0x54c4b0
// body: available
// range: 0x54c4b0-0x54c79a inclusive
// range: 0x54c7a0-0x54cabe inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054c4b0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int **ppiVar7;
  int in_ECX;
  int **extraout_ECX;
  int *piVar8;
  int iVar9;
  void *_Memory;
  int **ppiStack_68;
  void *local_50;
  undefined4 local_4c;
  int local_48;
  void *local_44;
  undefined4 local_40;
  int local_3c;
  void *local_38;
  undefined4 *local_34;
  uint local_30;
  LPCRITICAL_SECTION local_2c;
  int **local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070ff31;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_30 = 0;
  local_50 = (void *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  ppiStack_68 = (int **)0x54c50f;
  local_18 = in_ECX;
  FUN_0045c990();
  local_8._0_1_ = 4;
  ppiStack_68 = (int **)0x54c527;
  FUN_00637690();
  ppiStack_68 = (int **)0x0;
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00635ea0(&local_50,2);
  piVar8 = local_20 + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      ppiStack_68 = (int **)0x54c55e;
      FID_conflict__free(piVar8);
    }
  }
  local_8._0_1_ = 3;
  piVar8 = local_1c + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      ppiStack_68 = (int **)0x54c585;
      FID_conflict__free(piVar8);
    }
  }
  ppiStack_68 = (int **)0x54c599;
  FUN_0045c990();
  local_8._0_1_ = 6;
  ppiStack_68 = (int **)0x0;
  FUN_00635ea0(&local_44,1);
  local_8._0_1_ = 3;
  piVar8 = local_1c + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      ppiStack_68 = (int **)0x54c5d8;
      FID_conflict__free(piVar8);
    }
  }
  iVar9 = 0;
  if (0 < local_48) {
    do {
      if (*(char *)(in_ECX + 0x30) != '\0') goto LAB_0054c915;
      ppiStack_68 = &local_20;
      FUN_0040f6b0();
      local_8 = CONCAT31(local_8._1_3_,7);
      ppiStack_68 = (int **)0x54c7c9;
      FUN_00636a10();
      piVar8 = local_20 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          ppiStack_68 = (int **)0x54c7e9;
          FID_conflict__free(piVar8);
        }
      }
      ppiStack_68 = &local_1c;
      FUN_0040f6b0();
      local_8._0_1_ = 10;
      ppiStack_68 = (int **)0x54c806;
      local_34 = operator_new(0x30);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      ppiStack_68 = (int **)0x54c818;
      ppiVar7 = (int **)FUN_0054a690();
      piVar8 = local_1c + -2;
      local_28 = ppiVar7;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          ppiStack_68 = (int **)0x54c83d;
          FID_conflict__free(piVar8);
        }
      }
      if (ppiVar7 != (int **)0x0) {
        local_2c = *(LPCRITICAL_SECTION *)(local_18 + 0x28);
        ppiStack_68 = (int **)0x54c858;
        EnterCriticalSection(local_2c);
        local_8._0_1_ = 0xe;
        ppiStack_68 = (int **)0x54c863;
        local_38 = operator_new(0x1c);
        local_8 = CONCAT31(local_8._1_3_,0xf);
        ppiStack_68 = (int **)0x54c875;
        local_28 = (int **)FUN_0054c360();
        local_24 = param_2 + 4;
        if ((int)param_2[5] < param_2[6] + 1) {
          ppiStack_68 = (int **)0x54c8a5;
          FUN_00409cf0();
        }
        iVar4 = local_24[2];
        local_24[2] = iVar4 + 1;
        *(int ***)(*local_24 + iVar4 * 4) = local_28;
        if (local_28 != (int **)0x0) {
          LOCK();
          local_28[1] = (int *)((int)local_28[1] + 1);
          UNLOCK();
        }
        ppiStack_68 = (int **)0x54c8ca;
        LeaveCriticalSection(local_2c);
        FUN_0054be70();
        ppiStack_68 = ppiVar7;
        FUN_004bfe14();
      }
      local_8._0_1_ = 3;
      piVar8 = (int *)(local_30 - 8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          ppiStack_68 = (int **)0x54c900;
          FID_conflict__free(piVar8);
        }
      }
      iVar9 = iVar9 + 1;
      in_ECX = local_18;
    } while (iVar9 < local_48);
  }
  local_1c = (int *)0x0;
  if (0 < local_3c) {
    do {
      if (*(char *)(local_18 + 0x30) != '\0') goto LAB_0054c915;
      ppiStack_68 = &local_24;
      FUN_0040f6b0();
      local_8 = CONCAT31(local_8._1_3_,0x10);
      ppiStack_68 = (int **)0x54c629;
      puVar3 = (uint *)FUN_00636a10();
      local_2c = (LPCRITICAL_SECTION)0x73dd88;
      local_30 = *puVar3;
      do {
        iVar9 = FUN_00443260();
        iVar4 = FUN_00443260();
        if ((iVar9 - iVar4 != 0) && (iVar4 = (iVar9 - iVar4 >> 0x1f & 0xfffffffeU) + 1, iVar4 != 0))
        goto LAB_0054c65e;
      } while (iVar9 != 0);
      iVar4 = 0;
LAB_0054c65e:
      ppiVar7 = local_28 + -2;
      if (ppiVar7 != (int **)&DAT_00bfe124) {
        LOCK();
        piVar8 = *ppiVar7;
        *ppiVar7 = (int *)((int)*ppiVar7 + -1);
        UNLOCK();
        if (piVar8 == (int *)0x0) {
          ppiStack_68 = (int **)0x54c67e;
          FID_conflict__free(ppiVar7);
        }
      }
      local_8._0_1_ = 3;
      piVar8 = local_24 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          ppiStack_68 = (int **)0x54c6a5;
          FID_conflict__free(piVar8);
        }
      }
      if (iVar4 != 0) {
        ppiStack_68 = (int **)0x54c6b7;
        local_38 = operator_new(0x1c);
        piVar8 = local_1c;
        ppiStack_68 = &local_20;
        FUN_0040f6b0();
        local_8 = CONCAT31(local_8._1_3_,0x12);
        local_30 = local_14 | 1;
        ppiStack_68 = (int **)0x54c6e7;
        local_14 = local_30;
        puVar5 = (undefined4 *)FUN_0054cec0();
        if (puVar5 != (undefined4 *)0x0) {
          LOCK();
          puVar5[1] = puVar5[1] + 1;
          UNLOCK();
        }
        local_8 = 0x15;
        local_14 = local_14 & 0xfffffffe;
        ppiVar7 = (int **)(local_20 + -2);
        local_34 = puVar5;
        if (ppiVar7 != (int **)&DAT_00bfe124) {
          LOCK();
          piVar1 = *ppiVar7;
          *ppiVar7 = (int *)((int)*ppiVar7 + -1);
          UNLOCK();
          if (piVar1 == (int *)0x0) {
            ppiStack_68 = (int **)0x54c71f;
            FID_conflict__free(ppiVar7);
            ppiVar7 = extraout_ECX;
          }
        }
        if (puVar5 != (undefined4 *)0x0) {
          LOCK();
          puVar5[1] = puVar5[1] + 1;
          UNLOCK();
        }
        ppiStack_68 = ppiVar7;
        FUN_0040f6b0(&ppiStack_68,piVar8);
        FUN_0054c4b0();
        iVar9 = param_2[6] + 1;
        if ((int)param_2[5] < iVar9) {
          iVar4 = iVar9;
          if (iVar9 < 0) {
            iVar4 = param_2[6] + 2;
          }
          local_30 = (iVar4 >> 1) + 8 + iVar9 & 0xfffffff8;
          if (param_2[5] != local_30) {
            if ((int)local_30 < 1) {
              ppiStack_68 = (int **)0x54c9a8;
              FID_conflict__free((void *)param_2[4]);
              param_2[4] = 0;
            }
            else {
              ppiStack_68 = (int **)param_2[4];
              if (ppiStack_68 == (int **)0x0) {
                ppiStack_68 = (int **)0x54c790;
                uVar6 = FUN_004c554b();
                param_2[4] = uVar6;
              }
              else {
                uVar6 = FUN_004c553b();
                param_2[4] = uVar6;
              }
            }
            param_2[5] = local_30;
          }
        }
        iVar9 = param_2[6];
        param_2[6] = iVar9 + 1;
        *(undefined4 **)(param_2[4] + iVar9 * 4) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          LOCK();
          puVar5[1] = puVar5[1] + 1;
          UNLOCK();
        }
        local_8._0_1_ = 3;
        if (puVar5 != (undefined4 *)0x0) {
          LOCK();
          piVar8 = puVar5 + 1;
          iVar9 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            ppiStack_68 = (int **)0x54c9e9;
            (**(code **)*puVar5)();
          }
        }
      }
      local_1c = (int *)((int)local_1c + 1);
    } while ((int)local_1c < local_3c);
  }
  iVar9 = local_3c;
  iVar4 = 0;
  if (0 < local_3c) {
    do {
      piVar8 = (int *)(*(int *)((int)local_44 + iVar4 * 4) + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          ppiStack_68 = (int **)0x54ca24;
          FID_conflict__free(piVar8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar9);
  }
  ppiStack_68 = (int **)0x54ca34;
  FID_conflict__free(local_44);
  _Memory = local_50;
  iVar9 = 0;
  if (0 < local_48) {
    do {
      piVar8 = (int *)(*(int *)((int)_Memory + iVar9 * 4) + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          ppiStack_68 = (int **)0x54ca61;
          FID_conflict__free(piVar8);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_48);
  }
LAB_0054ca6a:
  ppiStack_68 = (int **)0x54ca70;
  FID_conflict__free(_Memory);
  piVar8 = (int *)(param_1 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      ppiStack_68 = (int **)0x54ca93;
      FID_conflict__free(piVar8);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = param_2 + 1;
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      ppiStack_68 = (int **)0x54caab;
      (**(code **)*param_2)();
    }
  }
  ExceptionList = local_10;
  return;
LAB_0054c915:
  iVar9 = local_3c;
  iVar4 = 0;
  if (0 < local_3c) {
    do {
      piVar8 = (int *)(*(int *)((int)local_44 + iVar4 * 4) + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          ppiStack_68 = (int **)0x54c943;
          FID_conflict__free(piVar8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar9);
  }
  ppiStack_68 = (int **)0x54c953;
  FID_conflict__free(local_44);
  _Memory = local_50;
  iVar9 = 0;
  if (0 < local_48) {
    do {
      piVar8 = (int *)(*(int *)((int)_Memory + iVar9 * 4) + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          ppiStack_68 = (int **)0x54c984;
          FID_conflict__free(piVar8);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_48);
  }
  goto LAB_0054ca6a;
}

