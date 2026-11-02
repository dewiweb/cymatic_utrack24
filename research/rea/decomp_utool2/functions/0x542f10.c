// rea decompile_all
// name: FUN_00542f10
// address: 0x542f10
// body: available
// range: 0x542f10-0x5434cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00542f10(undefined4 *param_1)

{
  LONG *pLVar1;
  HANDLE pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  HANDLE *ppvVar7;
  undefined1 *puVar8;
  LPCRITICAL_SECTION p_Var9;
  uint uVar10;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  LPCRITICAL_SECTION local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  uint local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070ebb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar10 = 0;
  local_1c = 0;
  local_24 = 0;
  local_8 = 0;
  local_18 = in_ECX;
  if ((undefined **)*in_ECX == ProjectExplorerItem_SongSection::vftable) {
    if (in_ECX[-0x1d] == 0) {
      FUN_006906c0();
    }
    else {
      local_2c = (LPCRITICAL_SECTION)(in_ECX[-0x1d] + 0x84);
      EnterCriticalSection(local_2c);
      if ((0 < in_ECX[-0x19]) && (FUN_006906c0(), in_ECX[-0x1d] != 0)) {
        FUN_00690c60();
      }
      LeaveCriticalSection(local_2c);
    }
  }
  else {
    (*(code *)((undefined **)*in_ECX)[1])();
  }
  puVar4 = (undefined4 *)in_ECX[4];
  if (puVar4 != (undefined4 *)0x0) {
    in_ECX[4] = 0;
    LOCK();
    piVar3 = puVar4 + 1;
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar4)();
    }
  }
  local_20 = &DAT_00bfe12c;
  puVar8 = &DAT_00bfe12c;
  local_30 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_18[2] == 1) {
    piVar3 = (int *)FUN_005b2100();
    iVar5 = *piVar3;
    *piVar3 = (int)local_20;
    local_20 = (undefined1 *)iVar5;
LAB_00543052:
    ppvVar7 = &local_2c[-1].LockSemaphore;
    if (ppvVar7 != (HANDLE *)&DAT_00bfe124) {
      LOCK();
      pvVar2 = *ppvVar7;
      *ppvVar7 = (HANDLE)((int)*ppvVar7 + -1);
      UNLOCK();
      if (pvVar2 == (HANDLE)0x0) {
        FID_conflict__free(ppvVar7);
      }
    }
  }
  else {
    piVar3 = (int *)FUN_005b2660();
    iVar5 = *piVar3;
    *piVar3 = (int)local_20;
    ppvVar7 = &local_2c[-1].LockSemaphore;
    local_20 = (undefined1 *)iVar5;
    if (ppvVar7 != (HANDLE *)&DAT_00bfe124) {
      LOCK();
      pvVar2 = *ppvVar7;
      *ppvVar7 = (HANDLE)((int)*ppvVar7 + -1);
      UNLOCK();
      if (pvVar2 == (HANDLE)0x0) {
        FID_conflict__free(ppvVar7);
      }
    }
    if (local_18[2] == 2) {
      puVar4 = (undefined4 *)FUN_00635a10(&local_2c);
      puVar8 = (undefined1 *)*puVar4;
      *puVar4 = &DAT_00bfe12c;
      local_30 = puVar8;
      goto LAB_00543052;
    }
  }
  if (param_1[6] == 0) {
    local_38 = operator_new(0x1c);
    local_8._0_1_ = 3;
    FUN_005b2560(local_18[2]);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_24 = 1;
    iVar5 = FUN_00542250();
    if (local_18[4] != iVar5) {
      if (iVar5 != 0) {
        LOCK();
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        UNLOCK();
      }
      puVar4 = (undefined4 *)local_18[4];
      local_18[4] = iVar5;
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = puVar4 + 1;
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar4)();
        }
      }
    }
    local_8 = 2;
    ppvVar7 = &local_2c[-1].LockSemaphore;
    if (ppvVar7 != (HANDLE *)&DAT_00bfe124) {
      LOCK();
      pvVar2 = *ppvVar7;
      *ppvVar7 = (HANDLE)((int)*ppvVar7 + -1);
      UNLOCK();
      if (pvVar2 == (HANDLE)0x0) {
        FID_conflict__free(ppvVar7);
      }
    }
  }
  else {
    local_28 = 0;
    if (0 < (int)param_1[6]) {
      do {
        FUN_00410f30(&local_2c);
        p_Var9 = local_2c;
        local_8 = CONCAT31(local_8._1_3_,6);
        if (local_2c->OwningThread == (HANDLE)0x0) {
          piVar3 = (int *)FUN_00410ea0();
          local_1c = uVar10 | 2;
          if (((undefined1 *)*piVar3 != local_20) && (iVar5 = FUN_0045c1e0(*piVar3), iVar5 != 0))
          goto LAB_00543181;
          local_11 = '\x01';
        }
        else {
LAB_00543181:
          local_11 = '\0';
        }
        if ((local_1c & 2) != 0) {
          local_1c = local_1c & 0xfffffffd;
          piVar3 = local_34 + -2;
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar3);
            }
          }
        }
        if (local_11 != '\0') {
          if ((puVar8 == PTR_DAT_00c7ed54) || (iVar5 = FUN_0045c1e0(puVar8), iVar5 == 0)) {
            piVar3 = (int *)FUN_00541f00(&local_38);
            iVar5 = local_18[4];
            local_18[4] = *piVar3;
            *piVar3 = iVar5;
            if (local_38 != (undefined4 *)0x0) {
              LOCK();
              piVar3 = local_38 + 1;
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)*local_38)();
              }
            }
            goto LAB_0054340d;
          }
          local_28 = 0;
          if ((int)p_Var9[1].DebugInfo < 1) goto LAB_0054340d;
          goto LAB_00543358;
        }
        uVar10 = local_1c;
        if (local_18[4] == 0) {
          operator_new(0x1c);
          local_8._0_1_ = 8;
          FUN_005b2560(local_18[2]);
          local_8 = CONCAT31(local_8._1_3_,9);
          local_24 = local_1c | 8;
          local_1c = local_24;
          iVar5 = FUN_00542250();
          if (local_18[4] != iVar5) {
            if (iVar5 != 0) {
              LOCK();
              *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
              UNLOCK();
            }
            puVar4 = (undefined4 *)local_18[4];
            local_18[4] = iVar5;
            if (puVar4 != (undefined4 *)0x0) {
              LOCK();
              piVar3 = puVar4 + 1;
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)*puVar4)();
              }
            }
          }
          local_8 = 6;
          uVar10 = local_1c & 0xfffffff7;
          piVar3 = local_38 + -2;
          local_1c = uVar10;
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar3);
            }
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        LOCK();
        pLVar1 = &p_Var9->LockCount;
        iVar5 = *pLVar1;
        *pLVar1 = *pLVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)p_Var9->DebugInfo)();
        }
        local_28 = local_28 + 1;
      } while (local_28 < (int)param_1[6]);
    }
  }
LAB_005432a4:
  if (local_18[4] != 0) {
    FUN_00541e40();
  }
  (**(code **)(*local_18 + 8))();
  piVar3 = (int *)(puVar8 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)((int)local_20 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = param_1 + 1;
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
  while( true ) {
    LOCK();
    piVar3 = puVar4 + 1;
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar4)();
    }
    local_28 = local_28 + 1;
    if ((int)p_Var9[1].DebugInfo <= local_28) break;
LAB_00543358:
    FUN_00410f30(&local_38);
    puVar4 = local_38;
    local_8 = CONCAT31(local_8._1_3_,7);
    if (local_38[3] == 0) {
      puVar6 = (undefined4 *)FUN_00410ea0();
      local_1c = local_1c | 4;
      if (((undefined1 *)*puVar6 != puVar8) && (iVar5 = FUN_0045c1e0(*puVar6), iVar5 != 0))
      goto LAB_005433a7;
      local_11 = '\x01';
    }
    else {
LAB_005433a7:
      local_11 = '\0';
    }
    if ((local_1c & 4) != 0) {
      local_1c = local_1c & 0xfffffffb;
      piVar3 = local_34 + -2;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
    }
    if (local_11 != '\0') {
      piVar3 = (int *)FUN_00541f00(&local_34);
      p_Var9 = local_2c;
      iVar5 = local_18[4];
      local_18[4] = *piVar3;
      *piVar3 = iVar5;
      if (local_34 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_34 + 1;
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*local_34)();
        }
      }
      LOCK();
      piVar3 = puVar4 + 1;
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar4)();
      }
      break;
    }
  }
LAB_0054340d:
  local_8 = CONCAT31(local_8._1_3_,2);
  LOCK();
  pLVar1 = &p_Var9->LockCount;
  iVar5 = *pLVar1;
  *pLVar1 = *pLVar1 + -1;
  UNLOCK();
  if (iVar5 == 1) {
    (**(code **)p_Var9->DebugInfo)();
  }
  goto LAB_005432a4;
}

