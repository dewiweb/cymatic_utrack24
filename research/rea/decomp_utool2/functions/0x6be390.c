// rea decompile_all
// name: FUN_006be390
// address: 0x6be390
// body: available
// range: 0x6be390-0x6bea38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006be390(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 **ppuVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *in_ECX;
  undefined **ppuVar9;
  int *piVar10;
  uint uVar11;
  undefined **ppuVar12;
  int local_60;
  undefined4 *local_5c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  undefined **local_24;
  undefined **local_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724ed4;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (undefined4 *)0x0;
  iVar3 = *param_1;
  if (iVar3 != 0) {
    piVar10 = *(int **)(iVar3 + 0xc);
    piVar8 = piVar10 + *(int *)(iVar3 + 0x14) * 6;
    for (; (piVar10 != piVar8 && (*piVar10 != DAT_00c8aa80)); piVar10 = piVar10 + 6) {
    }
  }
  FUN_00635650();
  local_8 = 0;
  iVar3 = FUN_00448730();
  if (iVar3 == 0) {
    iVar3 = *param_1;
    if (iVar3 != 0) {
      piVar10 = *(int **)(iVar3 + 0xc);
      piVar8 = piVar10 + *(int *)(iVar3 + 0x14) * 6;
      for (; (piVar10 != piVar8 && (*piVar10 != DAT_00c8a984)); piVar10 = piVar10 + 6) {
      }
    }
    FUN_00635650();
    if ((char)*param_1 == '\0') {
      local_48 = DAT_00c7ef90;
      ppuVar4 = &local_48;
    }
    else {
      ppuVar4 = (undefined4 **)FUN_0067f030();
    }
    puVar6 = *ppuVar4;
    local_48 = (undefined4 *)in_ECX[1];
    if (local_48 != (undefined4 *)0x0) {
      in_ECX[1] = 0;
      FID_conflict__free((void *)local_48[5]);
      FUN_004bfe14(local_48);
    }
    puVar7 = (undefined4 *)in_ECX[2];
    in_ECX[2] = 0;
    if (puVar7 != (undefined4 *)0x0) {
      LOCK();
      piVar8 = puVar7 + 1;
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar7)();
      }
    }
    param_1 = param_1 + -2;
    *in_ECX = puVar6;
    if (param_1 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *param_1;
      *param_1 = *param_1 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(param_1);
      }
    }
  }
  else {
    pvVar5 = (void *)FUN_00448730();
    if (pvVar5 == (void *)0x0) {
      local_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      local_30 = pvVar5;
      local_2c = pvVar5;
      local_28 = pvVar5;
      puVar6 = (undefined4 *)FUN_0063aa80();
      uVar2 = (**(code **)(*(int *)*puVar6 + 0x14))();
      local_34 = (int *)CONCAT31(local_34._1_3_,uVar2);
      local_20 = (undefined **)0x0;
      local_1c = 0;
      local_8._0_1_ = 2;
      FUN_0063aa80();
      puVar6 = (undefined4 *)FUN_00635650();
      local_8._0_1_ = 3;
      FUN_00635720(*puVar6);
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar8 = local_48 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar3 = (int)local_1c._4_4_ / 2;
      if (0 < iVar3) {
        uVar11 = 0;
        ppuVar12 = local_20;
        do {
          FUN_0067f030();
          ppuVar9 = &PTR_DAT_00c7ed68;
          if (uVar11 < local_1c._4_4_) {
            ppuVar9 = ppuVar12;
          }
          local_48 = (undefined4 *)*ppuVar9;
          FUN_0045c380();
          FUN_0067edd0();
          uVar11 = uVar11 + 2;
          ppuVar12 = ppuVar12 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_0067e4e0();
      iVar3 = *param_1;
      if (iVar3 != 0) {
        piVar10 = *(int **)(iVar3 + 0xc);
        piVar8 = piVar10 + *(int *)(iVar3 + 0x14) * 6;
        for (; (piVar10 != piVar8 && (*piVar10 != DAT_00c8a9fc)); piVar10 = piVar10 + 6) {
        }
      }
      FUN_006318f0();
      local_8 = CONCAT31(local_8._1_3_,4);
      puVar6 = (undefined4 *)FUN_0069df90();
      uVar1 = in_ECX[9];
      in_ECX[9] = *puVar6;
      *puVar6 = uVar1;
      uVar1 = in_ECX[10];
      in_ECX[10] = puVar6[1];
      puVar6[1] = uVar1;
      if (in_ECX != (undefined4 *)0x0) {
        piVar8 = in_ECX + 1;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*in_ECX)();
        }
      }
      if (local_5c != (undefined4 *)0x0) {
        piVar8 = local_5c + 1;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*local_5c)();
        }
      }
      local_8._0_1_ = 2;
      piVar8 = param_2 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar3 = *param_1;
      if (iVar3 != 0) {
        piVar10 = *(int **)(iVar3 + 0xc);
        piVar8 = piVar10 + *(int *)(iVar3 + 0x14) * 6;
        for (; (piVar10 != piVar8 && (*piVar10 != DAT_00c8aa24)); piVar10 = piVar10 + 6) {
        }
      }
      FUN_006318f0();
      local_8 = CONCAT31(local_8._1_3_,5);
      puVar6 = (undefined4 *)FUN_0069df90();
      uVar1 = in_ECX[0xb];
      in_ECX[0xb] = *puVar6;
      *puVar6 = uVar1;
      uVar1 = in_ECX[0xc];
      in_ECX[0xc] = puVar6[1];
      puVar6[1] = uVar1;
      if (in_ECX != (undefined4 *)0x0) {
        piVar8 = in_ECX + 1;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*in_ECX)();
        }
      }
      if (local_5c != (undefined4 *)0x0) {
        piVar8 = local_5c + 1;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*local_5c)();
        }
      }
      local_8._0_1_ = 2;
      piVar8 = param_2 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar3 = *param_1;
      if (iVar3 != 0) {
        piVar10 = *(int **)(iVar3 + 0xc);
        piVar8 = piVar10 + *(int *)(iVar3 + 0x14) * 6;
        for (; (piVar10 != piVar8 && (*piVar10 != DAT_00c8aa14)); piVar10 = piVar10 + 6) {
        }
      }
      FUN_006318f0();
      local_8 = CONCAT31(local_8._1_3_,6);
      puVar6 = (undefined4 *)FUN_0069df90();
      uVar1 = in_ECX[0xd];
      in_ECX[0xd] = *puVar6;
      *puVar6 = uVar1;
      uVar1 = in_ECX[0xe];
      in_ECX[0xe] = puVar6[1];
      puVar6[1] = uVar1;
      if (in_ECX != (undefined4 *)0x0) {
        piVar8 = in_ECX + 1;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*in_ECX)();
        }
      }
      if (local_5c != (undefined4 *)0x0) {
        piVar8 = local_5c + 1;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*local_5c)();
        }
      }
      param_2 = param_2 + -2;
      if (param_2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *param_2;
        *param_2 = *param_2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(param_2);
        }
      }
      FUN_0040f7f0();
      FID_conflict__free(local_20);
      FID_conflict__free(local_30);
    }
    else {
      iVar3 = FUN_00448730();
      if (iVar3 == 0) {
        puVar6 = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        local_8._0_1_ = 7;
        if (param_2 != (int *)0x0) {
          iVar3 = *param_2;
          FUN_0063aa80();
          piVar8 = (int *)(**(code **)(iVar3 + 4))();
          puVar6 = (undefined4 *)*piVar8;
          *piVar8 = 0;
          local_48 = puVar6;
          if (in_ECX != (undefined4 *)0x0) {
            LOCK();
            piVar8 = in_ECX + 1;
            iVar3 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)*in_ECX)();
            }
          }
        }
        local_2c = (void *)0x3f800000;
        local_28 = (void *)0x0;
        uStack_3c = 0x3f800000;
        uStack_38 = 0;
        local_34 = (int *)0x0;
        local_30 = (void *)0x0;
        FUN_0067e450();
        local_24 = &PTR_vftable_00c7ed2c;
        local_1c = 0x3ff0000000000000;
        local_8 = CONCAT31(local_8._1_3_,8);
        puVar7 = (undefined4 *)FUN_0063b2d0(&local_34);
        (**(code **)(*(int *)*puVar7 + 0xc))();
        puVar7 = (undefined4 *)FUN_006842b0();
        *in_ECX = *puVar7;
        (**(code **)(*local_34 + 0x54))();
        (**(code **)(*local_24 + 0x54))(&local_1c);
        if (puVar6 != (undefined4 *)0x0) {
          LOCK();
          piVar8 = puVar6 + 1;
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*puVar6)();
          }
        }
      }
    }
  }
  piVar8 = (int *)(local_60 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

