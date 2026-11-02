// rea decompile_all
// name: FUN_005bb3e0
// address: 0x5bb3e0
// body: available
// range: 0x5bb3e0-0x5bba31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bb3e0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,float param_6,
                 float param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00719e5b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_2c = (undefined1 *)0x0;
  local_14 = (undefined1 *)0x0;
  local_20 = 0;
  iVar7 = *(int *)(param_1 + 8);
  if (0 < iVar7) {
    do {
      iVar3 = local_20;
      local_18 = ((float)local_20 * param_7) / (float)iVar7 + param_6;
      piVar1 = operator_new(8);
      local_24 = piVar1;
      uVar2 = FUN_0041d060(&local_38,iVar3);
      uVar12 = FUN_0041d060(&local_34,iVar3);
      local_2c = (undefined1 *)((uint)((ulonglong)uVar12 >> 0x20) | 2);
      local_8 = 2;
      local_14 = local_2c;
      operator_new(0x30);
      local_8 = 3;
      iVar3 = FUN_0054a690(uVar2);
      puVar9 = local_14;
      iVar7 = *(int *)uVar12;
      *piVar1 = iVar7;
      piVar8 = (int *)(iVar7 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      piVar1[1] = iVar3;
      piVar8 = (int *)(local_34 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_14 = (undefined1 *)((uint)puVar9 & 0xfffffffc);
      piVar8 = (int *)(local_38 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (*(int *)(piVar1[1] + 0x10) == 3) {
        uVar2 = FUN_0041d060(&local_40,local_20);
        local_8 = 6;
        uVar2 = FUN_00637690(uVar2);
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_005ba670(uVar2);
        piVar8 = (int *)(local_3c + -8);
        iVar7 = local_40;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
            iVar7 = local_40;
          }
        }
      }
      else {
        uVar2 = FUN_0041d060(&local_48,local_20);
        local_8 = 8;
        uVar2 = FUN_00637690(uVar2);
        local_8 = CONCAT31(local_8._1_3_,9);
        FUN_005ba670(uVar2);
        piVar8 = (int *)(local_44 + -8);
        iVar7 = local_48;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
            iVar7 = local_48;
          }
        }
      }
      piVar8 = (int *)(iVar7 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      puVar9 = &DAT_00bfe12c;
      local_2c = &DAT_00bfe12c;
      local_8 = 10;
      iVar7 = piVar1[1];
      local_28 = 0;
      puVar10 = puVar9;
      if (0 < *(int *)(iVar7 + 0x20)) {
        do {
          if ((((int)local_28 < 0) || ((int)*(uint *)(iVar7 + 0x20) <= (int)local_28)) ||
             (*(uint *)(iVar7 + 0x20) <= local_28)) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar7 + 0x18) + local_28 * 4);
          }
          FUN_00416980(&local_50);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          puVar4 = (undefined4 *)FUN_00627bf0();
          puVar9 = (undefined1 *)*puVar4;
          *puVar4 = puVar10;
          piVar1 = (int *)(local_4c + -8);
          local_2c = puVar9;
          if (piVar1 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar1);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,10);
          piVar1 = (int *)(local_50 + -8);
          if (piVar1 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar1);
            }
          }
          iVar3 = 0;
          if (0 < param_2[2]) {
            do {
              puVar4 = *(undefined4 **)(*param_2 + iVar3 * 4);
              if (((undefined1 *)*puVar4 == puVar9) ||
                 (iVar5 = FUN_0045c1e0(*puVar4,puVar9), iVar5 == 0)) {
                uVar2 = *(undefined4 *)(*(int *)(*param_2 + iVar3 * 4) + 4);
                operator_new(0x80);
                local_8._0_1_ = 0xc;
                goto LAB_005bb83f;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_2[2]);
          }
          iVar3 = 0;
          if (param_3[2] < 1) {
LAB_005bb712:
            uVar2 = FUN_00637690(&local_2c);
            local_8 = CONCAT31(local_8._1_3_,0xf);
            FUN_005ba670(uVar2);
            piVar1 = (int *)(local_54 + -8);
            if (piVar1 != &DAT_00bfe124) {
              LOCK();
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 0) {
                FID_conflict__free(piVar1);
              }
            }
            iVar7 = local_24[1];
            if (iVar7 != 0) {
              piVar1 = (int *)(*(int *)(iVar7 + 0x28) + -8);
              if (piVar1 != &DAT_00bfe124) {
                LOCK();
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 0) {
                  FID_conflict__free(piVar1);
                }
              }
              FUN_00416aa0();
              FID_conflict__free(*(void **)(iVar7 + 0x18));
              piVar1 = (int *)(*(int *)(iVar7 + 8) + -8);
              if (piVar1 != &DAT_00bfe124) {
                LOCK();
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 0) {
                  FID_conflict__free(piVar1);
                }
              }
              FUN_004bfe14(iVar7,0x30);
            }
            piVar1 = local_24;
            piVar8 = (int *)(*local_24 + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar7 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar7 == 0) {
                FID_conflict__free(piVar8);
              }
            }
            FUN_004bfe14(piVar1,8);
            goto LAB_005bb9e1;
          }
          while ((puVar4 = *(undefined4 **)(*param_3 + iVar3 * 4), (undefined1 *)*puVar4 != puVar9
                 && (iVar5 = FUN_0045c1e0(*puVar4,puVar9), iVar5 != 0))) {
            iVar3 = iVar3 + 1;
            if (param_3[2] <= iVar3) goto LAB_005bb712;
          }
          uVar2 = *(undefined4 *)(*(int *)(*param_3 + iVar3 * 4) + 4);
          operator_new(0x80);
          local_8._0_1_ = 0xd;
LAB_005bb83f:
          puVar6 = (undefined4 *)FUN_0053e120(uVar2,0);
          local_8 = CONCAT31(local_8._1_3_,10);
          puVar4 = *(undefined4 **)(iVar7 + 8);
          if ((puVar4 != puVar6) &&
             (*(undefined4 **)(iVar7 + 8) = puVar6, puVar4 != (undefined4 *)0x0)) {
            (**(code **)*puVar4)(1);
          }
          local_28 = local_28 + 1;
          iVar7 = local_24[1];
          piVar1 = local_24;
          puVar10 = puVar9;
        } while ((int)local_28 < *(int *)(iVar7 + 0x20));
      }
      FUN_0045c990("Playlist validated");
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FUN_005ba670(&local_30);
      piVar8 = (int *)(local_30 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (*(int *)(piVar1[1] + 0x10) == 3) {
        iVar7 = param_5[2];
        iVar3 = iVar7 + 1;
        piVar8 = param_5;
        if (param_5[1] < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar7 + 2;
          }
          uVar11 = iVar7 + 9 + (iVar3 >> 1) & 0xfffffff8;
          if (param_5[1] != uVar11) {
            if ((int)uVar11 < 1) {
              FID_conflict__free((void *)*param_5);
              *param_5 = 0;
              param_5[1] = uVar11;
            }
            else if (*param_5 == 0) {
              iVar7 = FUN_004c554b();
              *param_5 = iVar7;
              param_5[1] = uVar11;
            }
            else {
              iVar7 = FUN_004c553b(*param_5,uVar11 * 4);
              *param_5 = iVar7;
              param_5[1] = uVar11;
            }
          }
        }
      }
      else {
        iVar7 = param_4[2];
        iVar3 = iVar7 + 1;
        piVar8 = param_4;
        if (param_4[1] < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar7 + 2;
          }
          uVar11 = iVar7 + 9 + (iVar3 >> 1) & 0xfffffff8;
          piVar8 = param_4;
          if (param_4[1] != uVar11) {
            if ((int)uVar11 < 1) {
              FID_conflict__free((void *)*param_4);
              *param_4 = 0;
            }
            else if (*param_4 == 0) {
              iVar7 = FUN_004c554b();
              *param_4 = iVar7;
            }
            else {
              iVar7 = FUN_004c553b(*param_4,uVar11 * 4);
              *param_4 = iVar7;
            }
            param_4[1] = uVar11;
            piVar8 = param_4;
          }
        }
      }
      iVar7 = piVar8[2];
      piVar8[2] = iVar7 + 1;
      *(int **)(*piVar8 + iVar7 * 4) = piVar1;
LAB_005bb9e1:
      piVar1 = (int *)(puVar9 + -8);
      local_8 = 0xffffffff;
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      local_20 = local_20 + 1;
      iVar7 = *(int *)(param_1 + 8);
    } while (local_20 < iVar7);
  }
  ExceptionList = local_10;
  return;
}

