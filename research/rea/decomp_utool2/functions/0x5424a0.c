// rea decompile_all
// name: FUN_005424a0
// address: 0x5424a0
// body: available
// range: 0x5424a0-0x54278a inclusive
// range: 0x542790-0x542a8e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005424a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int **extraout_ECX;
  int **_Memory;
  int *piVar6;
  int iVar7;
  void *_Memory_00;
  int **ppiStack_64;
  void *local_4c;
  undefined4 local_48;
  int local_44;
  void *local_40;
  undefined4 local_3c;
  int local_38;
  void *local_34;
  undefined4 *local_30;
  LPCRITICAL_SECTION local_2c;
  undefined4 *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070ea43;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_30 = (undefined4 *)0x0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_40 = (void *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  ppiStack_64 = (int **)0x5424ff;
  local_18 = in_ECX;
  FUN_0045c990();
  local_8._0_1_ = 4;
  ppiStack_64 = (int **)0x542517;
  FUN_00637690();
  ppiStack_64 = (int **)0x0;
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00635ea0(&local_4c,2);
  piVar6 = local_20 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      ppiStack_64 = (int **)0x54254e;
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 3;
  piVar6 = local_1c + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      ppiStack_64 = (int **)0x542575;
      FID_conflict__free(piVar6);
    }
  }
  ppiStack_64 = (int **)0x542589;
  FUN_0045c990();
  local_8._0_1_ = 6;
  ppiStack_64 = (int **)0x0;
  FUN_00635ea0(&local_40,1);
  local_8._0_1_ = 3;
  piVar6 = local_1c + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      ppiStack_64 = (int **)0x5425c8;
      FID_conflict__free(piVar6);
    }
  }
  iVar7 = 0;
  if (0 < local_44) {
    do {
      if (*(char *)(in_ECX + 0x30) != '\0') goto LAB_005428e9;
      ppiStack_64 = &local_20;
      FUN_0040f6b0();
      local_8 = CONCAT31(local_8._1_3_,7);
      ppiStack_64 = (int **)0x5427b9;
      FUN_00636a10();
      piVar6 = local_20 + -2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          ppiStack_64 = (int **)0x5427d9;
          FID_conflict__free(piVar6);
        }
      }
      ppiStack_64 = &local_1c;
      FUN_0040f6b0();
      local_8 = CONCAT31(local_8._1_3_,10);
      puVar4 = (undefined4 *)FUN_0053d3e0();
      piVar6 = local_1c + -2;
      local_28 = puVar4;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          ppiStack_64 = (int **)0x54281b;
          FID_conflict__free(piVar6);
        }
      }
      if (puVar4 != (undefined4 *)0x0) {
        local_2c = *(LPCRITICAL_SECTION *)(local_18 + 0x28);
        ppiStack_64 = (int **)0x542836;
        EnterCriticalSection(local_2c);
        local_8._0_1_ = 0xd;
        ppiStack_64 = (int **)0x542841;
        local_34 = operator_new(0x1c);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        ppiStack_64 = (int **)0x542853;
        local_28 = (undefined4 *)FUN_00542360();
        local_24 = param_2 + 4;
        if ((int)param_2[5] < param_2[6] + 1) {
          ppiStack_64 = (int **)0x542883;
          FUN_00409cf0();
        }
        iVar3 = local_24[2];
        local_24[2] = iVar3 + 1;
        *(undefined4 **)(*local_24 + iVar3 * 4) = local_28;
        if (local_28 != (undefined4 *)0x0) {
          LOCK();
          local_28[1] = local_28[1] + 1;
          UNLOCK();
        }
        ppiStack_64 = (int **)0x5428a8;
        LeaveCriticalSection(local_2c);
        ppiStack_64 = (int **)0x5428b0;
        (**(code **)*puVar4)();
      }
      local_8._0_1_ = 3;
      piVar6 = local_30 + -2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          ppiStack_64 = (int **)0x5428d4;
          FID_conflict__free(piVar6);
        }
      }
      iVar7 = iVar7 + 1;
      in_ECX = local_18;
    } while (iVar7 < local_44);
  }
  local_1c = (int *)0x0;
  if (0 < local_38) {
    do {
      if (*(char *)(local_18 + 0x30) != '\0') goto LAB_005428e9;
      ppiStack_64 = &local_24;
      FUN_0040f6b0();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      ppiStack_64 = (int **)0x542619;
      local_30 = (undefined4 *)FUN_00636a10();
      local_2c = (LPCRITICAL_SECTION)0x73cbe4;
      local_30 = (undefined4 *)*local_30;
      do {
        iVar7 = FUN_00443260();
        iVar3 = FUN_00443260();
        if ((iVar7 - iVar3 != 0) && (iVar3 = (iVar7 - iVar3 >> 0x1f & 0xfffffffeU) + 1, iVar3 != 0))
        goto LAB_0054264e;
      } while (iVar7 != 0);
      iVar3 = 0;
LAB_0054264e:
      piVar6 = local_28 + -2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          ppiStack_64 = (int **)0x54266e;
          FID_conflict__free(piVar6);
        }
      }
      local_8._0_1_ = 3;
      piVar6 = local_24 + -2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          ppiStack_64 = (int **)0x542695;
          FID_conflict__free(piVar6);
        }
      }
      if (iVar3 != 0) {
        ppiStack_64 = (int **)0x5426a7;
        local_34 = operator_new(0x1c);
        piVar6 = local_1c;
        ppiStack_64 = &local_20;
        FUN_0040f6b0();
        local_8 = CONCAT31(local_8._1_3_,0x11);
        local_30 = (undefined4 *)(local_14 | 1);
        ppiStack_64 = (int **)0x5426d7;
        local_14 = (uint)local_30;
        puVar4 = (undefined4 *)FUN_00542250();
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          puVar4[1] = puVar4[1] + 1;
          UNLOCK();
        }
        local_8 = 0x14;
        local_14 = local_14 & 0xfffffffe;
        _Memory = (int **)(local_20 + -2);
        local_30 = puVar4;
        if (_Memory != (int **)&DAT_00bfe124) {
          LOCK();
          piVar1 = *_Memory;
          *_Memory = (int *)((int)*_Memory + -1);
          UNLOCK();
          if (piVar1 == (int *)0x0) {
            ppiStack_64 = (int **)0x54270f;
            FID_conflict__free(_Memory);
            _Memory = extraout_ECX;
          }
        }
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          puVar4[1] = puVar4[1] + 1;
          UNLOCK();
        }
        ppiStack_64 = _Memory;
        FUN_0040f6b0(&ppiStack_64,piVar6);
        FUN_005424a0();
        iVar7 = param_2[6] + 1;
        if ((int)param_2[5] < iVar7) {
          iVar3 = iVar7;
          if (iVar7 < 0) {
            iVar3 = param_2[6] + 2;
          }
          local_30 = (undefined4 *)((iVar3 >> 1) + 8 + iVar7 & 0xfffffff8);
          if ((undefined4 *)param_2[5] != local_30) {
            if ((int)local_30 < 1) {
              ppiStack_64 = (int **)0x542978;
              FID_conflict__free((void *)param_2[4]);
              param_2[4] = 0;
            }
            else {
              ppiStack_64 = (int **)param_2[4];
              if (ppiStack_64 == (int **)0x0) {
                ppiStack_64 = (int **)0x542780;
                uVar5 = FUN_004c554b();
                param_2[4] = uVar5;
              }
              else {
                uVar5 = FUN_004c553b();
                param_2[4] = uVar5;
              }
            }
            param_2[5] = local_30;
          }
        }
        iVar7 = param_2[6];
        param_2[6] = iVar7 + 1;
        *(undefined4 **)(param_2[4] + iVar7 * 4) = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          puVar4[1] = puVar4[1] + 1;
          UNLOCK();
        }
        local_8._0_1_ = 3;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          piVar6 = puVar4 + 1;
          iVar7 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            ppiStack_64 = (int **)0x5429b9;
            (**(code **)*puVar4)();
          }
        }
      }
      local_1c = (int *)((int)local_1c + 1);
    } while ((int)local_1c < local_38);
  }
  iVar7 = local_38;
  iVar3 = 0;
  if (0 < local_38) {
    do {
      piVar6 = (int *)(*(int *)((int)local_40 + iVar3 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          ppiStack_64 = (int **)0x5429f4;
          FID_conflict__free(piVar6);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7);
  }
  ppiStack_64 = (int **)0x542a04;
  FID_conflict__free(local_40);
  _Memory_00 = local_4c;
  iVar7 = 0;
  if (0 < local_44) {
    do {
      piVar6 = (int *)(*(int *)((int)_Memory_00 + iVar7 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          ppiStack_64 = (int **)0x542a31;
          FID_conflict__free(piVar6);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_44);
  }
LAB_00542a3a:
  ppiStack_64 = (int **)0x542a40;
  FID_conflict__free(_Memory_00);
  piVar6 = (int *)(param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      ppiStack_64 = (int **)0x542a63;
      FID_conflict__free(piVar6);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_2 + 1;
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      ppiStack_64 = (int **)0x542a7b;
      (**(code **)*param_2)();
    }
  }
  ExceptionList = local_10;
  return;
LAB_005428e9:
  iVar7 = local_38;
  iVar3 = 0;
  if (0 < local_38) {
    do {
      piVar6 = (int *)(*(int *)((int)local_40 + iVar3 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          ppiStack_64 = (int **)0x542913;
          FID_conflict__free(piVar6);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7);
  }
  ppiStack_64 = (int **)0x542923;
  FID_conflict__free(local_40);
  _Memory_00 = local_4c;
  iVar7 = 0;
  if (0 < local_44) {
    do {
      piVar6 = (int *)(*(int *)((int)_Memory_00 + iVar7 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          ppiStack_64 = (int **)0x542954;
          FID_conflict__free(piVar6);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_44);
  }
  goto LAB_00542a3a;
}

