// rea decompile_all
// name: FUN_005ccc90
// address: 0x5ccc90
// body: available
// range: 0x5ccc90-0x5cd4b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ccc90(undefined4 *param_1,int param_2,char param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  void *local_a0;
  uint local_98;
  int local_94;
  int local_90;
  undefined4 *local_8c;
  int local_88;
  undefined **local_80;
  undefined4 *local_7c;
  undefined *local_78;
  undefined *local_74 [3];
  int local_68;
  void *local_64;
  undefined1 local_44;
  void *local_40;
  undefined1 local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071b12b;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_8c = param_1;
  local_88 = param_2;
  local_94 = param_4;
  local_18 = uVar3;
  puVar4 = operator_new(0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  iVar6 = *(int *)(local_88 + 0xc);
  puVar4[3] = iVar6;
  piVar5 = (int *)(iVar6 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_8 = 2;
  local_7c = puVar4;
  FUN_00458a00(local_88 + 4);
  FUN_00458b00(local_88 + 8);
  puVar12 = *(undefined4 **)(local_90 + 0xf4);
  if ((puVar12 != puVar4) &&
     (*(undefined4 **)(local_90 + 0xf4) = puVar4, puVar12 != (undefined4 *)0x0)) {
    FUN_00634ec0(uVar3);
    FUN_004bfe14(puVar12,0x10);
  }
  *local_8c = &DAT_00bfe12c;
  FUN_005ced70();
  local_8 = 3;
  if (param_5 != 0) {
    FUN_0040da30(param_5);
  }
  iVar6 = FUN_0061a410("audioDeviceName");
  if (iVar6 == 0) {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  else {
    ppuVar7 = (undefined **)(iVar6 + 8);
  }
  if (**ppuVar7 == '\0') {
    iVar6 = FUN_0061a410("audioInputDeviceName");
    ppuVar7 = (undefined **)(iVar6 + 8);
    if (iVar6 == 0) {
      ppuVar7 = &PTR_DAT_00c7ed68;
    }
    piVar5 = (int *)(*ppuVar7 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    puVar8 = *ppuVar7;
    LOCK();
    UNLOCK();
    piVar5 = (int *)(local_74[0] + -8);
    local_74[0] = puVar8;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    iVar6 = FUN_0061a410("audioOutputDeviceName");
    ppuVar7 = (undefined **)(iVar6 + 8);
    if (iVar6 == 0) {
      ppuVar7 = &PTR_DAT_00c7ed68;
    }
    piVar5 = (int *)(*ppuVar7 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    puVar8 = *ppuVar7;
    ppuVar7 = &local_78;
  }
  else {
    iVar6 = FUN_0061a410("audioDeviceName");
    puVar8 = local_78;
    ppuVar7 = (undefined **)(iVar6 + 8);
    if (iVar6 == 0) {
      ppuVar7 = &PTR_DAT_00c7ed68;
    }
    piVar5 = (int *)(*ppuVar7 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    LOCK();
    local_78 = *ppuVar7;
    UNLOCK();
    piVar5 = (int *)(puVar8 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_78 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    ppuVar7 = local_74;
    puVar8 = local_78;
  }
  LOCK();
  puVar1 = *ppuVar7;
  *ppuVar7 = puVar8;
  UNLOCK();
  piVar5 = (int *)(puVar1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  iVar9 = FUN_0061a410("deviceType");
  iVar6 = local_90;
  ppuVar7 = (undefined **)(iVar9 + 8);
  if (iVar9 == 0) {
    ppuVar7 = &PTR_DAT_00c7ed68;
  }
  piVar10 = (int *)(*ppuVar7 + -8);
  piVar5 = (int *)(local_90 + 0xb0);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  LOCK();
  iVar9 = *piVar5;
  *piVar5 = (int)*ppuVar7;
  UNLOCK();
  piVar10 = (int *)(iVar9 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  iVar9 = FUN_005cca30(piVar5);
  if (iVar9 == 0) {
    iVar9 = FUN_005cc990(local_74,&local_78);
    if (iVar9 == 0) {
      if (0 < *(int *)(iVar6 + 0x24)) {
        FUN_00637b90(**(int **)(iVar6 + 0x1c) + 4);
      }
    }
    else {
      piVar10 = (int *)(*(int *)(iVar9 + 4) + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        *piVar10 = *piVar10 + 1;
        UNLOCK();
      }
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *(int *)(iVar9 + 4);
      UNLOCK();
      piVar5 = (int *)(iVar6 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
  }
  iVar6 = FUN_0061a410("audioDeviceBufferSize");
  if (iVar6 != 0) {
    local_68 = FID_conflict__atoi(*(char **)(iVar6 + 8));
  }
  iVar6 = FUN_0061a410("audioDeviceRate");
  if (iVar6 != 0) {
    local_80 = *(undefined ***)(iVar6 + 8);
    FUN_0045c380();
  }
  FUN_0045c990(&DAT_00a90edc);
  puVar4 = (undefined4 *)FUN_00630fa0(&local_7c,"audioDeviceInChans",&local_80);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0062b730(*puVar4,2);
  piVar5 = local_7c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 3;
  ppuVar7 = local_80 + -2;
  if (ppuVar7 != (undefined **)&DAT_00bfe124) {
    LOCK();
    puVar8 = *ppuVar7;
    *ppuVar7 = *ppuVar7 + -1;
    UNLOCK();
    if (puVar8 == (undefined *)0x0) {
      FID_conflict__free(ppuVar7);
    }
  }
  FUN_0045c990(&DAT_00a90ef4);
  puVar4 = (undefined4 *)FUN_00630fa0(&local_7c,"audioDeviceOutChans",&local_80);
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_0062b730(*puVar4,2);
  piVar5 = local_7c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  ppuVar7 = local_80 + -2;
  if (ppuVar7 != (undefined **)&DAT_00bfe124) {
    LOCK();
    puVar8 = *ppuVar7;
    *ppuVar7 = *ppuVar7 + -1;
    UNLOCK();
    if (puVar8 == (undefined *)0x0) {
      FID_conflict__free(ppuVar7);
    }
  }
  iVar6 = FUN_0061a410("audioDeviceInChans");
  local_44 = iVar6 == 0;
  iVar6 = FUN_0061a410("audioDeviceOutChans");
  local_20 = iVar6 == 0;
  puVar4 = (undefined4 *)FUN_005cf320(&local_7c,&local_78,1);
  uVar2 = *local_8c;
  *local_8c = *puVar4;
  *puVar4 = uVar2;
  piVar5 = local_7c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  iVar6 = local_90;
  piVar5 = (int *)(local_90 + 0x194);
  FUN_0040f7f0();
  if (*(int *)(iVar6 + 0x198) != 0) {
    FID_conflict__free((void *)*piVar5);
    *piVar5 = 0;
    *(undefined4 *)(iVar6 + 0x198) = 0;
  }
  *(undefined4 *)(iVar6 + 0x19c) = 0;
  piVar10 = (int *)FUN_00633010("MIDIINPUT");
  iVar9 = iVar6;
  do {
    if (piVar10 == (int *)0x0) {
LAB_005cd2d6:
      FUN_005c8460();
      local_8 = CONCAT31(local_8._1_3_,8);
      puVar4 = local_8c;
      uVar3 = local_98;
      while (uVar3 = uVar3 - 1, local_8c = puVar4, -1 < (int)uVar3) {
        if (uVar3 < local_98) {
          ppuVar7 = (undefined **)((int)local_a0 + uVar3 * 4);
        }
        else {
          ppuVar7 = &PTR_DAT_00c7ed68;
        }
        iVar6 = FUN_0062c730(*ppuVar7,0,0);
        if (uVar3 < local_98) {
          ppuVar7 = (undefined **)((int)local_a0 + uVar3 * 4);
        }
        else {
          ppuVar7 = &PTR_DAT_00c7ed68;
        }
        FUN_005cb540(ppuVar7,-1 < iVar6);
        puVar4 = local_8c;
      }
      if ((*(char *)*puVar4 != '\0') && (param_3 != '\0')) {
        puVar12 = (undefined4 *)
                  FUN_005ce1e0(&local_94,*(undefined4 *)(iVar9 + 0xa8),*(undefined4 *)(iVar9 + 0xac)
                               ,0,0,local_94,0);
        uVar2 = *puVar4;
        *puVar4 = *puVar12;
        *puVar12 = uVar2;
        piVar5 = (int *)(local_94 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      iVar6 = FUN_0061a410("defaultMidiOutput");
      if (iVar6 == 0) {
        ppuVar7 = &PTR_DAT_00c7ed68;
      }
      else {
        ppuVar7 = (undefined **)(iVar6 + 8);
      }
      FUN_005cb120(ppuVar7);
      iVar6 = 0;
      if (0 < (int)local_98) {
        do {
          piVar5 = (int *)(*(int *)((int)local_a0 + iVar6 * 4) + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_98);
      }
      FID_conflict__free(local_a0);
      FID_conflict__free(local_40);
      FID_conflict__free(local_64);
      piVar5 = (int *)(local_74[0] + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_78 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar9 = FUN_0061a410(&DAT_00a90f4c);
    if (iVar9 == 0) {
      local_80 = &PTR_DAT_00c7ed68;
    }
    else {
      local_80 = (undefined **)(iVar9 + 8);
    }
    iVar9 = *(int *)(iVar6 + 0x19c);
    iVar13 = iVar9 + 1;
    if ((int)*(uint *)(iVar6 + 0x198) < iVar13) {
      if (iVar13 < 0) {
        iVar13 = iVar9 + 2;
      }
      uVar3 = iVar9 + 9 + (iVar13 >> 1) & 0xfffffff8;
      if (*(uint *)(iVar6 + 0x198) != uVar3) {
        if ((int)uVar3 < 1) {
          FID_conflict__free((void *)*piVar5);
          *piVar5 = 0;
        }
        else if (*piVar5 == 0) {
          iVar9 = FUN_004c554b();
          *piVar5 = iVar9;
        }
        else {
          iVar9 = FUN_004c553b(*piVar5,uVar3 * 4);
          *piVar5 = iVar9;
        }
        *(uint *)(iVar6 + 0x198) = uVar3;
      }
    }
    iVar9 = *(int *)(iVar6 + 0x19c);
    *(int *)(iVar6 + 0x19c) = iVar9 + 1;
    piVar11 = (int *)(*piVar5 + iVar9 * 4);
    if (piVar11 != (int *)0x0) {
      puVar8 = *local_80;
      *piVar11 = (int)puVar8;
      piVar11 = (int *)(puVar8 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
    }
    piVar10 = (int *)*piVar10;
    iVar9 = local_90;
    if (piVar10 == (int *)0x0) goto LAB_005cd2d6;
    do {
      iVar13 = FUN_0045c1e0(piVar10[3],"MIDIINPUT");
      iVar9 = local_90;
      if (iVar13 == 0) break;
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)0x0);
  } while( true );
}

