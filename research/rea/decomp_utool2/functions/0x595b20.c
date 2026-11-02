// rea decompile_all
// name: FUN_00595b20
// address: 0x595b20
// body: available
// range: 0x595b20-0x596006 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00595b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  undefined8 uVar10;
  void *local_6c;
  uint local_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  undefined8 local_34;
  undefined8 local_2c;
  int local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714e40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_44 = in_ECX + 0x1a30;
  bVar3 = false;
  local_20 = in_ECX;
  FUN_00517cc0();
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x2760) = 0;
  *(undefined4 *)(in_ECX + 0x2764) = 0;
  *param_4 = 0;
  param_4[1] = 0;
  *param_5 = 0;
  param_5[1] = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  piVar5 = (int *)FUN_00554b70();
  iVar6 = *piVar5;
  if (local_38 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_38 + 1;
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_38)();
    }
  }
  if (iVar6 != 0) {
    FUN_00554b70();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0054fa60();
    if (local_38 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = local_38 + 1;
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*local_38)();
      }
    }
    FUN_00554b70();
    local_8._0_1_ = 2;
    FUN_0054faf0();
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_38 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = local_38 + 1;
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*local_38)();
      }
    }
  }
  uVar10 = CONCAT44(local_34._4_4_,(int)local_34);
  local_38 = (undefined4 *)0x0;
  if (0 < (int)local_64) {
    do {
      uVar4 = DAT_00c7ef94;
      local_18 = &DAT_00bfe12c;
      local_8._0_1_ = 3;
      if (local_38 < local_64) {
        piVar5 = *(int **)((int)local_6c + (int)local_38 * 4);
      }
      else {
        piVar5 = (int *)0x0;
      }
      local_34._0_4_ = piVar5[0x11];
      local_1c = piVar5;
      if ((int)local_34 == 5) {
LAB_00595c89:
        uVar10 = (**(code **)(*piVar5 + 0x58))();
        local_2c = uVar10;
        local_34 = (**(code **)(*piVar5 + 0x5c))(param_2);
        puVar1 = (uint *)(local_20 + 0x2760);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + (uint)local_34;
        *(int *)(local_20 + 0x2764) =
             *(int *)(local_20 + 0x2764) + (int)((ulonglong)local_34 >> 0x20) +
             (uint)CARRY4(uVar2,(uint)local_34);
        iVar7 = (**(code **)(*local_1c + 0x60))();
        iVar6 = *param_6;
        if (*param_6 < iVar7) {
          iVar6 = iVar7;
        }
        *param_6 = iVar6;
        FUN_00554ba0();
        piVar5 = local_1c;
        local_8._0_1_ = 4;
        FUN_0051ba00(&local_40);
        local_8 = CONCAT31(local_8._1_3_,6);
        piVar9 = (int *)(local_3c + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        piVar9 = (int *)(local_40 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        FUN_005955a0(param_1,local_40,piVar5,param_3,param_8,param_7,param_5,local_34,param_4,
                     local_2c);
        FUN_00412f10();
        uVar10 = FUN_004130a0();
        local_1c = (int *)uVar10;
        if (*local_1c == *(int *)((ulonglong)uVar10 >> 0x20)) {
LAB_00595d9f:
          piVar8 = (int *)FUN_00554ba0();
          bVar3 = true;
          if ((undefined *)*piVar8 == PTR_DAT_00c7ed54) goto LAB_00595dd4;
          iVar6 = FUN_0045c1e0(*piVar8);
          local_11 = '\x01';
          if (iVar6 == 0) goto LAB_00595dd4;
        }
        else {
          iVar6 = FUN_0045c1e0(*local_1c);
          if (iVar6 == 0) goto LAB_00595d9f;
LAB_00595dd4:
          local_11 = '\0';
        }
        if (bVar3) {
          bVar3 = false;
          piVar8 = (int *)(local_48 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
        }
        piVar8 = (int *)(local_4c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_50 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        if (local_11 != '\0') {
          FUN_00554ba0();
          local_8._0_1_ = 7;
          FUN_00635a10(&local_54);
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_00635a10(&local_24);
          piVar8 = (int *)(local_54 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,0xb);
          piVar8 = (int *)(local_58 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          piVar8 = (int *)(local_24 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            UNLOCK();
          }
          FUN_005955a0(param_1,local_24,piVar5,param_3,param_8,param_7,param_5,local_34,param_4,
                       local_2c);
          piVar5 = (int *)(local_24 + -8);
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
        local_8._0_1_ = 3;
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar9);
          }
        }
      }
      else {
        iVar6 = FUN_006e85c0();
        if ((int)local_34 == iVar6) goto LAB_00595c89;
      }
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      FUN_0051bcd0(uVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      piVar5 = (int *)(local_18 + -8);
      uVar10 = local_34;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
          uVar10 = local_34;
        }
      }
      local_34._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_38 = (undefined4 *)((int)local_38 + 1);
    } while ((int)local_38 < (int)local_64);
  }
  local_34 = uVar10;
  if (*(int *)(param_1 + 0x58) != 0) {
    LOCK();
    piVar5 = (int *)(*(int *)(param_1 + 0x58) + 4);
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    FUN_00550d10();
  }
  FID_conflict__free(local_6c);
  ExceptionList = local_10;
  return;
}

