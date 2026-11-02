// rea decompile_all
// name: FUN_00469080
// address: 0x469080
// body: available
// range: 0x469080-0x46982b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469080(int param_1,int *param_2)

{
  undefined3 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  int *in_ECX;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 **ppuVar16;
  void *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 *local_5c;
  undefined4 *local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int *local_38;
  undefined4 *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701314;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_38 = in_ECX;
  if (param_2[1] < in_ECX[3]) {
    FUN_00409cf0();
  }
  FUN_00469cd0();
  FUN_00469b90();
  local_1c = 0;
  puVar11 = (undefined4 *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  piVar10 = (int *)0x0;
  local_24 = (int *)0x0;
  local_2c = (int *)0x0;
  local_8._1_3_ = 0;
  uVar1 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_11 = '\x01';
  local_3c = 0;
  piVar7 = local_24;
  puVar4 = local_20;
  if (0 < local_38[2]) {
    do {
      local_5c = (undefined4 *)(local_3c * 4);
      local_18 = *(int *)(*local_38 + (int)local_5c);
      local_6c = (void *)0x0;
      local_68 = 0;
      local_64 = 0;
      local_8._0_1_ = 3;
      uVar2 = FUN_00469dc0();
      local_8._0_1_ = 4;
      local_24 = (int *)(local_18 + 4);
      FUN_00643870(uVar2,&local_6c);
      local_8._0_1_ = 3;
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (piVar10 == (int *)0x0) {
        piVar10 = operator_new(0x1c);
        local_8._0_1_ = 5;
        operator_new(0x28);
        iVar3 = FUN_00468990();
        *piVar10 = iVar3;
        if (iVar3 != 0) {
          LOCK();
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
          UNLOCK();
        }
        piVar10[1] = -0x1000000;
        piVar10[2] = 0;
        piVar10[3] = 0;
        piVar10[4] = 0;
        local_8._0_1_ = 3;
        piVar10[5] = 0;
        piVar10[6] = 0;
        local_2c = piVar10;
      }
      puVar4 = puVar11;
      if (puVar11 == (undefined4 *)0x0) {
        puVar4 = operator_new(0x28);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        local_34 = puVar4;
      }
      if (0 < local_64) {
        iVar3 = piVar10[4] + local_64;
        if (piVar10[3] < iVar3) {
          iVar5 = iVar3;
          if (iVar3 < 0) {
            iVar5 = iVar3 + 1;
          }
          uVar8 = iVar3 + 8 + (iVar5 >> 1) & 0xfffffff8;
          if (piVar10[3] != uVar8) {
            if ((int)uVar8 < 1) {
              FID_conflict__free((void *)piVar10[2]);
              piVar10[2] = 0;
            }
            else if (piVar10[2] == 0) {
              iVar3 = FUN_004c554b();
              piVar10[2] = iVar3;
            }
            else {
              iVar3 = FUN_004c553b(piVar10[2]);
              piVar10[2] = iVar3;
            }
            piVar10[3] = uVar8;
          }
        }
        if (*(float *)(*local_24 + 0x20) == 0.0) {
          if (*(int *)(*local_24 + 8) == 0) {
            ppuVar16 = &local_48;
            FUN_004681b0(ppuVar16);
            puVar11 = (undefined4 *)FUN_004682f0(ppuVar16);
            uVar2 = *(undefined4 *)(*local_24 + 8);
            *(undefined4 *)(*local_24 + 8) = *puVar11;
            *puVar11 = uVar2;
            if (local_48 != (undefined4 *)0x0) {
              LOCK();
              piVar7 = local_48 + 1;
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)*local_48)();
              }
            }
          }
          iVar3 = *local_24;
          fVar12 = (float10)(**(code **)(**(int **)(iVar3 + 8) + 8))();
          *(float *)(iVar3 + 0x20) = (float)fVar12;
        }
        fVar15 = *(float *)(local_18 + 0xc) + 0.0;
        fVar13 = *(float *)(local_18 + 0x10) +
                 *(float *)(*local_24 + 0x20) * *(float *)(*local_24 + 0x14);
        if (local_11 != '\0') {
          puVar4[5] = fVar15;
          puVar4[6] = fVar13;
          local_11 = '\0';
        }
        local_58 = (undefined4 *)(fVar15 - (float)puVar4[5]);
        local_40 = 0;
        if (0 < local_64) {
          fVar13 = (fVar13 - (float)puVar4[6]) + 0.0;
          local_4c = fVar13;
          do {
            iVar3 = piVar10[4];
            iVar5 = iVar3 + 1;
            local_50 = *(float *)(local_40 * 4 + 4) - *(float *)(local_40 * 4);
            local_54 = (float)local_58 + *(float *)(local_40 * 4);
            local_20 = *(undefined4 **)((int)local_6c + local_40 * 4);
            if (piVar10[3] < iVar5) {
              if (iVar5 < 0) {
                iVar5 = iVar3 + 2;
              }
              uVar8 = iVar3 + 9 + (iVar5 >> 1) & 0xfffffff8;
              if (piVar10[3] != uVar8) {
                if ((int)uVar8 < 1) {
                  FID_conflict__free((void *)piVar10[2]);
                  piVar10[2] = 0;
                }
                else if (piVar10[2] == 0) {
                  iVar3 = FUN_004c554b();
                  piVar10[2] = iVar3;
                }
                else {
                  iVar3 = FUN_004c553b(piVar10[2]);
                  piVar10[2] = iVar3;
                }
                piVar10[3] = uVar8;
                fVar13 = local_4c;
              }
            }
            iVar3 = piVar10[4];
            piVar10[4] = iVar3 + 1;
            puVar11 = (undefined4 *)(iVar3 * 0x10 + piVar10[2]);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = local_20;
              puVar11[1] = local_54;
              puVar11[2] = fVar13;
              puVar11[3] = local_50;
            }
            local_40 = local_40 + 1;
          } while (local_40 < local_64);
        }
        local_1c = local_1c + local_64;
      }
      if ((*(char *)(local_18 + 0x24) != '\0') || (*(char *)(local_18 + 0x25) != '\0')) {
        local_1c = local_1c + 1;
      }
      local_3c = local_3c + 1;
      puVar11 = puVar4;
      if ((local_3c < (uint)local_38[2]) &&
         (local_20 = *(undefined4 **)((int)local_5c + *local_38 + 4), local_20 != (undefined4 *)0x0)
         ) {
        puVar9 = (undefined4 *)*local_24;
        local_5c = (undefined4 *)local_20[1];
        if (((puVar9 != local_5c) &&
            ((((((float)puVar9[5] != (float)local_5c[5] ||
                (*(char *)(puVar9 + 9) != *(char *)(local_5c + 9))) ||
               ((float)puVar9[6] != (float)local_5c[6])) ||
              (((float)puVar9[7] != (float)local_5c[7] ||
               ((puVar9[3] != local_5c[3] && (iVar3 = FUN_00448730(puVar9[3]), iVar3 != 0)))))) ||
             ((puVar9[4] != local_5c[4] && (iVar3 = FUN_00448730(puVar9[4]), iVar3 != 0)))))) ||
           (puVar9 = local_20, *(int *)(local_18 + 8) != local_20[2])) {
          puVar9 = local_20;
          piVar10 = (int *)0x0;
          local_2c = (int *)0x0;
          FUN_00469830(local_18,local_28);
          local_28 = local_1c;
        }
        if (*(int *)(local_18 + 0x1c) != puVar9[7]) {
          if (piVar10 == (int *)0x0) {
            piVar7 = operator_new(0x1c);
            local_8._0_1_ = 6;
            operator_new(0x28);
            iVar3 = FUN_00468990();
            *piVar7 = iVar3;
            if (iVar3 != 0) {
              LOCK();
              *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
              UNLOCK();
            }
            piVar7[1] = -0x1000000;
            piVar7[2] = 0;
            piVar7[3] = 0;
            piVar7[4] = 0;
            piVar7[5] = 0;
            piVar7[6] = 0;
            local_8._0_1_ = 3;
          }
          iVar3 = local_1c;
          local_2c = (int *)0x0;
          FUN_00469830(local_18,local_28);
          puVar4[3] = local_30;
          iVar5 = local_30;
          if (local_30 < iVar3) {
            iVar5 = iVar3;
          }
          puVar4[4] = iVar5;
          iVar5 = iVar3;
          if (local_11 == '\0') {
            puVar11 = (undefined4 *)0x0;
            local_34 = (undefined4 *)0x0;
            local_5c = puVar4;
            if (param_2[1] < param_2[2] + 1) {
              FUN_00409cf0();
            }
            iVar3 = param_2[2];
            param_2[2] = iVar3 + 1;
            *(undefined4 **)(*param_2 + iVar3 * 4) = local_5c;
            iVar3 = local_1c;
            iVar5 = local_1c;
          }
          goto LAB_0046971c;
        }
      }
      else {
        local_2c = (int *)0x0;
        FUN_00469830(local_18,local_28);
        puVar4[3] = local_30;
        iVar3 = local_30;
        if (local_30 < local_1c) {
          iVar3 = local_1c;
        }
        puVar4[4] = iVar3;
        iVar3 = local_30;
        iVar5 = local_28;
        if (local_11 == '\0') {
          iVar3 = param_2[2] + 1;
          local_34 = (undefined4 *)0x0;
          local_58 = puVar4;
          if (param_2[1] < iVar3) {
            iVar5 = iVar3;
            if (iVar3 < 0) {
              iVar5 = param_2[2] + 2;
            }
            local_5c = (undefined4 *)((iVar5 >> 1) + 8 + iVar3 & 0xfffffff8);
            if ((undefined4 *)param_2[1] != local_5c) {
              if ((int)local_5c < 1) {
                FID_conflict__free((void *)*param_2);
                *param_2 = 0;
              }
              else if (*param_2 == 0) {
                iVar3 = FUN_004c554b();
                *param_2 = iVar3;
              }
              else {
                iVar3 = FUN_004c553b(*param_2);
                *param_2 = iVar3;
              }
              param_2[1] = (int)local_5c;
            }
          }
          iVar3 = param_2[2];
          param_2[2] = iVar3 + 1;
          *(undefined4 **)(*param_2 + iVar3 * 4) = local_58;
          puVar11 = (undefined4 *)0x0;
          iVar3 = local_30;
          iVar5 = local_28;
        }
LAB_0046971c:
        local_28 = iVar5;
        local_30 = iVar3;
        piVar10 = (int *)0x0;
        local_11 = '\x01';
      }
      FID_conflict__free((void *)0x0);
      local_8._0_1_ = 1;
      FID_conflict__free(local_6c);
      piVar7 = piVar10;
      puVar4 = puVar11;
      uVar1 = local_8._1_3_;
    } while ((int)local_3c < local_38[2]);
  }
  local_8._1_3_ = uVar1;
  local_20 = puVar4;
  local_24 = piVar7;
  uVar8 = *(uint *)(param_1 + 8);
  if ((uVar8 & 6) != 0) {
    fVar13 = (float)param_2[3];
    if (0 < param_2[2]) {
      fVar15 = 0.5;
      iVar3 = 0;
      do {
        pfVar6 = (float *)FUN_00641c20();
        fVar14 = fVar13 - (pfVar6[1] - *pfVar6);
        if ((uVar8 >> 2 & 1) != 0) {
          fVar14 = fVar14 * fVar15;
        }
        iVar5 = *(int *)(*param_2 + iVar3 * 4);
        iVar3 = iVar3 + 1;
        *(float *)(iVar5 + 0x14) = *(float *)(iVar5 + 0x14) + fVar14;
      } while (iVar3 < param_2[2]);
    }
  }
  puVar11 = local_20;
  piVar7 = local_24;
  if (local_24 != (int *)0x0) {
    FID_conflict__free((void *)local_24[2]);
    puVar4 = (undefined4 *)*piVar7;
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar10 = puVar4 + 1;
      iVar3 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar4)();
      }
    }
    FUN_004bfe14(piVar7);
  }
  if (puVar11 != (undefined4 *)0x0) {
    FUN_00471aa0();
    FID_conflict__free((void *)*puVar11);
    FUN_004bfe14(puVar11);
  }
  ExceptionList = local_10;
  return;
}

