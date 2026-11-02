// rea decompile_all
// name: FUN_00443bf0
// address: 0x443bf0
// body: available
// range: 0x443bf0-0x4452da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443bf0(undefined4 *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *in_ECX;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint local_8c;
  int *local_88;
  int local_70;
  void *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int *local_34;
  int *local_30;
  uint local_2c;
  undefined4 *local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fed33;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = 0;
  piVar2 = (int *)param_1[6];
  iVar16 = piVar2[4];
  iVar15 = local_44;
  if (0 < iVar16) {
    iVar15 = 0;
    do {
      iVar7 = FUN_00637390(uVar6);
      iVar15 = iVar15 + iVar7;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  local_44 = iVar15;
  iVar16 = piVar2[7];
  local_4c = 0;
  iVar15 = local_4c;
  if (0 < iVar16) {
    iVar15 = 0;
    do {
      iVar7 = FUN_00637390(uVar6);
      iVar15 = iVar15 + iVar7;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  local_4c = iVar15;
  iVar16 = local_44;
  iVar15 = local_44;
  if (local_44 < local_4c) {
    iVar15 = local_4c;
  }
  local_20 = (void *)0x0;
  local_64 = (void *)0x0;
  local_60 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  local_8 = 0;
  local_3c = FUN_00443b70(param_1[2]);
  local_40 = 0;
  if (0 < iVar16) {
LAB_00443ce0:
    puVar14 = (undefined4 *)0x0;
    uVar6 = 0;
    local_24 = (int *)0x0;
    local_30 = (int *)0x0;
    local_2c = 0;
    local_28 = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    local_8c = 0;
    local_88 = (int *)0x0;
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar8 = (int *)(*(int *)(*in_ECX + 0xb4) + -1);
    local_14 = piVar8;
    if (-1 < (int)piVar8) {
      do {
        if (piVar8 < *(int **)(*in_ECX + 0xb4)) {
          local_50 = *(int **)(*(int *)(*in_ECX + 0xac) + (int)piVar8 * 4);
        }
        else {
          local_50 = (int *)0x0;
        }
        if ((local_50[2] == param_1[2]) && (local_50[3] == local_40)) {
          local_14 = (int *)((int)local_28 + 1);
          if ((int)uVar6 < (int)local_14) {
            iVar16 = (int)local_14;
            if ((int)local_14 < 0) {
              iVar16 = (int)local_28 + 2;
            }
            uVar6 = (int)local_28 + 9 + (iVar16 >> 1) & 0xfffffff8;
            if (local_2c != uVar6) {
              if ((int)uVar6 < 1) {
                FID_conflict__free(local_24);
                local_30 = (int *)0x0;
                local_2c = uVar6;
                local_24 = local_30;
              }
              else if (local_24 == (int *)0x0) {
                local_30 = (int *)FUN_004c554b();
                local_2c = uVar6;
                local_24 = local_30;
              }
              else {
                local_30 = (int *)FUN_004c553b(local_24,uVar6 * 4);
                local_2c = uVar6;
                local_24 = local_30;
              }
            }
          }
          if (local_24 + (int)local_28 != (int *)0x0) {
            local_24[(int)local_28] = *local_50;
          }
          piVar12 = (int *)((int)local_88 + 1);
          local_28 = local_14;
          if ((int)local_8c < (int)piVar12) {
            piVar9 = piVar12;
            if ((int)piVar12 < 0) {
              piVar9 = (int *)((int)local_88 + 2);
            }
            uVar6 = (int)local_88 + ((int)piVar9 >> 1) + 9 & 0xfffffff8;
            if (local_8c != uVar6) {
              local_8c = uVar6;
              local_14 = piVar12;
              if ((int)uVar6 < 1) {
                FID_conflict__free(local_38);
                local_38 = (undefined4 *)0x0;
                piVar12 = local_14;
              }
              else if (local_38 == (undefined4 *)0x0) {
                local_38 = (undefined4 *)FUN_004c554b();
                piVar12 = local_14;
              }
              else {
                local_38 = (undefined4 *)FUN_004c553b(local_38,uVar6 * 4);
                piVar12 = local_14;
              }
            }
          }
          local_14 = piVar12;
          piVar12 = local_38 + (int)local_88;
          puVar14 = local_38;
          uVar6 = local_2c;
          local_88 = local_14;
          if (piVar12 != (int *)0x0) {
            *piVar12 = local_50[1];
          }
        }
        piVar8 = (int *)((int)piVar8 + -1);
      } while (-1 < (int)piVar8);
      if (local_28 == (undefined4 *)0x0) goto LAB_004447c1;
      if (local_28 == (undefined4 *)0x1) {
        iVar16 = *local_24;
        local_1c = FUN_004454c0(iVar16,*puVar14);
        if ((int)local_1c < 0) {
          local_1c = 0;
        }
        if ((local_40 < local_4c) &&
           (cVar5 = FUN_00445690(param_3,local_40,iVar16,*local_38), cVar5 != '\0')) {
          local_48 = FUN_004452e0(0);
          local_14 = operator_new(0xc);
          local_14[1] = local_1c;
          *local_14 = (int)juce::GraphRenderingOps::CopyChannelOp::vftable;
          local_14[2] = local_48;
          iVar7 = param_2[2];
          iVar13 = iVar7 + 1;
          if (param_2[1] < iVar13) {
            if (iVar13 < 0) {
              iVar13 = iVar7 + 2;
            }
            FUN_00409cf0((iVar13 >> 1) + iVar7 + 9 & 0xfffffff8);
          }
          iVar7 = param_2[2];
          param_2[2] = iVar7 + 1;
          puVar14 = (undefined4 *)(*param_2 + iVar7 * 4);
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = local_14;
          }
          local_1c = local_48;
        }
        piVar8 = (int *)in_ECX[0xb];
        for (piVar12 = piVar8; piVar12 != piVar8 + in_ECX[0xd]; piVar12 = piVar12 + 1) {
          if (iVar16 == *piVar12) {
            uVar6 = (int)piVar12 - (int)piVar8 >> 2;
            goto LAB_00443f4e;
          }
        }
        uVar6 = 0xffffffff;
LAB_00443f4e:
        if (uVar6 < (uint)in_ECX[0x10]) {
          iVar16 = *(int *)(in_ECX[0xe] + uVar6 * 4);
        }
        else {
          iVar16 = 0;
        }
        if (iVar16 < local_3c) {
          puVar14 = operator_new(0x1c);
          *puVar14 = juce::GraphRenderingOps::DelayChannelOp::vftable;
          puVar14[1] = 0;
          puVar14[2] = 0;
          iVar7 = (local_3c - iVar16) + 1;
          puVar14[3] = local_1c;
          puVar14[4] = iVar7;
          puVar14[5] = 0;
          puVar14[6] = local_3c - iVar16;
          FID_conflict__free((void *)puVar14[1]);
          uVar10 = FUN_004c5556(iVar7,4);
          puVar14[1] = uVar10;
          uVar10 = puVar14[4];
          FID_conflict__free((void *)puVar14[2]);
          uVar10 = FUN_004c5556(uVar10,8);
          puVar14[2] = uVar10;
          iVar16 = param_2[2];
          iVar7 = iVar16 + 1;
          if (param_2[1] < iVar7) {
            if (iVar7 < 0) {
              iVar7 = iVar16 + 2;
            }
            uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
            if (param_2[1] == uVar6) goto LAB_0044485a;
            if ((int)uVar6 < 1) {
              FID_conflict__free((void *)*param_2);
              *param_2 = 0;
              local_18 = puVar14;
            }
            else if (*param_2 == 0) {
              iVar16 = FUN_004c554b();
              *param_2 = iVar16;
              local_18 = puVar14;
            }
            else {
              iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
              *param_2 = iVar16;
              local_18 = puVar14;
            }
            goto LAB_00444857;
          }
          goto LAB_0044485a;
        }
        goto LAB_0044486e;
      }
      local_34 = (int *)0x0;
      if (0 < (int)local_28) {
        local_48 = (int)local_38 - (int)local_24;
        piVar8 = local_24;
        do {
          local_1c = FUN_004454c0(*piVar8,*(undefined4 *)(local_48 + (int)piVar8));
          if ((-1 < (int)local_1c) &&
             (cVar5 = FUN_00445690(param_3,local_40,*piVar8,*(undefined4 *)(local_48 + (int)piVar8))
             , cVar5 == '\0')) {
            piVar8 = (int *)in_ECX[0xb];
            piVar12 = piVar8;
            goto joined_r0x004440c2;
          }
          piVar8 = piVar8 + 1;
          local_34 = (int *)((int)local_34 + 1);
        } while ((int)local_34 < (int)local_28);
      }
      goto LAB_004441dd;
    }
LAB_004447c1:
    if (local_40 < local_4c) {
      uVar6 = FUN_004452e0(0);
      local_1c = uVar6;
      puVar14 = operator_new(8);
      *puVar14 = juce::GraphRenderingOps::ClearChannelOp::vftable;
      puVar14[1] = uVar6;
      iVar16 = param_2[2];
      iVar7 = iVar16 + 1;
      if (param_2[1] < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar16 + 2;
        }
        uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (param_2[1] != uVar6) {
          local_18 = puVar14;
          if ((int)uVar6 < 1) {
            FID_conflict__free((void *)*param_2);
            *param_2 = 0;
          }
          else if (*param_2 == 0) {
            iVar16 = FUN_004c554b();
            *param_2 = iVar16;
          }
          else {
            iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
            *param_2 = iVar16;
          }
LAB_00444857:
          param_2[1] = uVar6;
          puVar14 = local_18;
        }
      }
LAB_0044485a:
      iVar16 = param_2[2];
      param_2[2] = iVar16 + 1;
      puVar11 = (undefined4 *)(*param_2 + iVar16 * 4);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = puVar14;
      }
    }
    else {
      local_1c = 0;
    }
    goto LAB_0044486e;
  }
LAB_00444afe:
  piVar8 = local_20;
  if (local_44 < local_4c) {
    do {
      uVar6 = FUN_004452e0(0);
      local_14 = (int *)((int)local_5c + 1);
      if ((int)local_60 < (int)local_14) {
        puVar14 = local_14;
        if ((int)local_14 < 0) {
          puVar14 = (undefined4 *)((int)local_5c + 2);
        }
        local_18 = (int *)((int)local_5c + ((int)puVar14 >> 1) + 9 & 0xfffffff8);
        if (local_60 != local_18) {
          if ((int)local_18 < 1) {
            FID_conflict__free(piVar8);
            piVar8 = (void *)0x0;
          }
          else if (piVar8 == (void *)0x0) {
            piVar8 = (int *)FUN_004c554b();
          }
          else {
            piVar8 = (int *)FUN_004c553b(piVar8,(int)local_18 << 2);
          }
          local_60 = local_18;
          local_64 = piVar8;
        }
      }
      puVar14 = local_5c;
      local_5c = local_14;
      puVar1 = (uint *)((int)piVar8 + (int)puVar14 * 4);
      if (puVar1 != (uint *)0x0) {
        *puVar1 = uVar6;
      }
      local_14 = (int *)param_1[2];
      if (local_44 == 0x1000) {
        uVar3 = in_ECX[10];
        if (uVar6 < uVar3) {
          *(int **)(in_ECX[8] + uVar6 * 4) = local_14;
        }
        else if (-1 < (int)uVar6) {
          iVar16 = uVar3 + 1;
          if (in_ECX[9] < iVar16) {
            if (iVar16 < 0) {
              iVar16 = uVar3 + 2;
            }
            uVar6 = uVar3 + 9 + (iVar16 >> 1) & 0xfffffff8;
            if (in_ECX[9] != uVar6) {
              if ((int)uVar6 < 1) {
                FID_conflict__free((void *)in_ECX[8]);
                in_ECX[8] = 0;
              }
              else if (in_ECX[8] == 0) {
                iVar16 = FUN_004c554b();
                in_ECX[8] = iVar16;
              }
              else {
                iVar16 = FUN_004c553b(in_ECX[8],uVar6 * 4);
                in_ECX[8] = iVar16;
              }
              in_ECX[9] = uVar6;
            }
          }
          iVar16 = in_ECX[10];
          in_ECX[10] = iVar16 + 1;
          puVar14 = (undefined4 *)(in_ECX[8] + iVar16 * 4);
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = local_14;
          }
        }
      }
      else {
        uVar3 = in_ECX[7];
        if (uVar6 < uVar3) {
          *(int **)(in_ECX[5] + uVar6 * 4) = local_14;
        }
        else if (-1 < (int)uVar6) {
          iVar16 = uVar3 + 1;
          if (in_ECX[6] < iVar16) {
            iVar7 = iVar16;
            if (iVar16 < 0) {
              iVar7 = uVar3 + 2;
            }
            local_18 = (int *)((iVar7 >> 1) + 8 + iVar16 & 0xfffffff8);
            if ((undefined4 *)in_ECX[6] != local_18) {
              if ((int)local_18 < 1) {
                FID_conflict__free((void *)in_ECX[5]);
                in_ECX[5] = 0;
              }
              else if (in_ECX[5] == 0) {
                iVar16 = FUN_004c554b();
                in_ECX[5] = iVar16;
              }
              else {
                iVar16 = FUN_004c553b(in_ECX[5],(int)local_18 << 2);
                in_ECX[5] = iVar16;
              }
              in_ECX[6] = (int)local_18;
            }
          }
          iVar16 = in_ECX[7];
          in_ECX[7] = iVar16 + 1;
          puVar14 = (undefined4 *)(in_ECX[5] + iVar16 * 4);
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = local_14;
          }
        }
        uVar3 = in_ECX[4];
        if (uVar6 < uVar3) {
          *(int *)(in_ECX[2] + uVar6 * 4) = local_44;
        }
        else if (-1 < (int)uVar6) {
          iVar16 = uVar3 + 1;
          if (in_ECX[3] < iVar16) {
            if (iVar16 < 0) {
              iVar16 = uVar3 + 2;
            }
            uVar6 = uVar3 + 9 + (iVar16 >> 1) & 0xfffffff8;
            if (in_ECX[3] != uVar6) {
              if ((int)uVar6 < 1) {
                FID_conflict__free((void *)in_ECX[2]);
                in_ECX[2] = 0;
              }
              else if (in_ECX[2] == 0) {
                iVar16 = FUN_004c554b();
                in_ECX[2] = iVar16;
              }
              else {
                iVar16 = FUN_004c553b(in_ECX[2],uVar6 * 4);
                in_ECX[2] = iVar16;
              }
              in_ECX[3] = uVar6;
            }
          }
          iVar16 = in_ECX[4];
          in_ECX[4] = iVar16 + 1;
          piVar12 = (int *)(in_ECX[2] + iVar16 * 4);
          if (piVar12 != (int *)0x0) {
            *piVar12 = local_44;
          }
        }
      }
      local_44 = local_44 + 1;
    } while (local_44 < local_4c);
  }
  piVar8 = (int *)0x0;
  puVar14 = (undefined4 *)0x0;
  local_20 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar12 = (int *)(*(int *)(*in_ECX + 0xb4) + -1);
  local_18 = piVar12;
  if (-1 < (int)piVar12) {
    do {
      if (piVar12 < *(int **)(*in_ECX + 0xb4)) {
        local_14 = *(int **)(*(int *)(*in_ECX + 0xac) + (int)piVar12 * 4);
      }
      else {
        local_14 = (int *)0x0;
      }
      if ((local_14[2] == param_1[2]) && (local_14[3] == 0x1000)) {
        local_58 = (undefined4 *)((int)puVar14 + 1);
        if ((int)local_2c < (int)local_58) {
          puVar11 = local_58;
          if ((int)local_58 < 0) {
            puVar11 = (undefined4 *)((int)puVar14 + 2);
          }
          uVar6 = (int)puVar14 + ((int)puVar11 >> 1) + 9 & 0xfffffff8;
          puVar14 = local_28;
          if (local_2c != uVar6) {
            if ((int)uVar6 < 1) {
              FID_conflict__free(piVar8);
              piVar8 = (int *)0x0;
              puVar14 = local_28;
              local_30 = piVar8;
              local_2c = uVar6;
            }
            else if (piVar8 == (int *)0x0) {
              piVar8 = (int *)FUN_004c554b();
              puVar14 = local_28;
              local_30 = piVar8;
              local_2c = uVar6;
            }
            else {
              piVar8 = (int *)FUN_004c553b(piVar8,uVar6 * 4);
              puVar14 = local_28;
              local_30 = piVar8;
              local_2c = uVar6;
            }
          }
        }
        local_18 = piVar8 + (int)puVar14;
        local_28 = local_58;
        puVar14 = local_58;
        if (local_18 != (int *)0x0) {
          *local_18 = *local_14;
        }
      }
      piVar12 = (int *)((int)piVar12 + -1);
    } while (-1 < (int)piVar12);
    local_20 = piVar8;
    if (puVar14 != (undefined4 *)0x0) {
      if (puVar14 == (undefined4 *)0x1) {
        piVar12 = (int *)(in_ECX[10] + -1);
        if (-1 < (int)piVar12) {
          piVar9 = (int *)(in_ECX[8] + (int)piVar12 * 4);
          do {
            if (*piVar9 == *piVar8) {
              if (-1 < (int)piVar12) {
                cVar5 = FUN_00445690(param_3,0x1000,*piVar8,0x1000);
                piVar9 = piVar12;
                if (cVar5 == '\0') goto LAB_004451f9;
                param_3 = (int *)FUN_004452e0(1);
                piVar8 = operator_new(0xc);
                piVar9 = param_3;
                piVar8[1] = (int)piVar12;
                *piVar8 = (int)juce::GraphRenderingOps::CopyMidiBufferOp::vftable;
                piVar8[2] = (int)param_3;
                iVar16 = param_2[2] + 1;
                if (param_2[1] < iVar16) {
                  FUN_00409cf0(iVar16 / 2 + param_2[2] + 9 & 0xfffffff8);
                }
                goto LAB_004451e5;
              }
              break;
            }
            piVar9 = piVar9 + -1;
            piVar12 = (int *)((int)piVar12 + -1);
          } while (-1 < (int)piVar12);
        }
        piVar9 = (int *)FUN_004452e0(1);
      }
      else {
        param_2 = (int *)0x0;
        if (0 < (int)puVar14) {
          local_18 = (int *)(in_ECX[10] + -1);
          puVar14 = local_28;
          do {
            if (-1 < (int)local_18) {
              piVar12 = (int *)(in_ECX[8] + (int)local_18 * 4);
              piVar9 = local_18;
              do {
                puVar14 = local_28;
                if (*piVar12 == piVar8[(int)param_2]) {
                  if ((-1 < (int)piVar9) &&
                     (cVar5 = FUN_00445690(param_3,0x1000,piVar8[(int)param_2],0x1000),
                     puVar14 = local_28, piVar8 = local_20, cVar5 == '\0')) {
                    if (-1 < (int)param_2) goto LAB_00445037;
                    goto LAB_00444fac;
                  }
                  break;
                }
                piVar12 = piVar12 + -1;
                piVar9 = (int *)((int)piVar9 + -1);
              } while (-1 < (int)piVar9);
            }
            param_2 = (int *)((int)param_2 + 1);
          } while ((int)param_2 < (int)puVar14);
        }
LAB_00444fac:
        piVar9 = (int *)FUN_004452e0(1);
        param_3 = (int *)(in_ECX[10] + -1);
        if (-1 < (int)param_3) {
          piVar8 = (int *)(in_ECX[8] + (int)param_3 * 4);
          do {
            if (*piVar8 == *local_20) {
              if (-1 < (int)param_3) {
                puVar14 = operator_new(0xc);
                puVar14[1] = param_3;
                *puVar14 = juce::GraphRenderingOps::CopyMidiBufferOp::vftable;
                puVar14[2] = piVar9;
                iVar16 = piVar4[2] + 1;
                if (piVar4[1] < iVar16) {
                  FUN_00409cf0(iVar16 / 2 + piVar4[2] + 9 & 0xfffffff8);
                }
                goto LAB_0044501e;
              }
              break;
            }
            param_3 = (int *)((int)param_3 + -1);
            piVar8 = piVar8 + -1;
          } while (-1 < (int)param_3);
        }
        param_3 = operator_new(8);
        *param_3 = (int)juce::GraphRenderingOps::ClearMidiBufferOp::vftable;
        param_3[1] = (int)piVar9;
        iVar16 = piVar4[2] + 1;
        puVar14 = param_3;
        if (piVar4[1] < iVar16) {
          FUN_00409cf0(iVar16 / 2 + piVar4[2] + 9 & 0xfffffff8);
          puVar14 = param_3;
        }
LAB_0044501e:
        iVar16 = piVar4[2];
        piVar4[2] = iVar16 + 1;
        puVar11 = (undefined4 *)(*piVar4 + iVar16 * 4);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = puVar14;
        }
        param_2 = (int *)0x0;
LAB_00445037:
        param_3 = (int *)0x0;
        puVar14 = local_28;
        if (0 < (int)local_28) {
          do {
            if (param_3 != param_2) {
              local_14 = (int *)(in_ECX[10] + -1);
              puVar14 = local_28;
              if (-1 < (int)local_14) {
                piVar8 = (int *)(in_ECX[8] + (int)local_14 * 4);
                do {
                  if (*piVar8 == local_20[(int)param_3]) {
                    if (-1 < (int)local_14) {
                      local_18 = operator_new(0xc);
                      local_18[1] = (int)local_14;
                      *local_18 = (int)juce::GraphRenderingOps::AddMidiBufferOp::vftable;
                      local_18[2] = (int)piVar9;
                      iVar16 = piVar4[2];
                      iVar7 = iVar16 + 1;
                      if (piVar4[1] < iVar7) {
                        if (iVar7 < 0) {
                          iVar7 = iVar16 + 2;
                        }
                        FUN_00409cf0((iVar7 >> 1) + iVar16 + 9 & 0xfffffff8);
                      }
                      iVar16 = piVar4[2];
                      piVar4[2] = iVar16 + 1;
                      piVar8 = (int *)(*piVar4 + iVar16 * 4);
                      puVar14 = local_28;
                      if (piVar8 != (int *)0x0) {
                        *piVar8 = (int)local_18;
                      }
                    }
                    break;
                  }
                  local_14 = (int *)((int)local_14 + -1);
                  piVar8 = piVar8 + -1;
                } while (-1 < (int)local_14);
              }
            }
            param_3 = (int *)((int)param_3 + 1);
          } while ((int)param_3 < (int)puVar14);
        }
      }
      goto LAB_004451f9;
    }
  }
  piVar9 = (int *)FUN_004452e0(1);
  cVar5 = (**(code **)(*piVar2 + 0x2c))();
  if ((cVar5 != '\0') || (cVar5 = (**(code **)(*piVar2 + 0x30))(), cVar5 != '\0')) {
    param_3 = operator_new(8);
    *param_3 = (int)juce::GraphRenderingOps::ClearMidiBufferOp::vftable;
    param_3[1] = (int)piVar9;
    iVar16 = param_2[2] + 1;
    piVar8 = param_3;
    if ((param_2[1] < iVar16) && (uVar6 = iVar16 / 2 + 8 + iVar16 & 0xfffffff8, param_2[1] != uVar6)
       ) {
      if ((int)uVar6 < 1) {
        FID_conflict__free((void *)*param_2);
        *param_2 = 0;
      }
      else if (*param_2 == 0) {
        iVar16 = FUN_004c554b();
        *param_2 = iVar16;
      }
      else {
        iVar16 = FUN_004c553b(*param_2,uVar6 << 2);
        *param_2 = iVar16;
      }
      param_2[1] = uVar6;
      piVar8 = param_3;
    }
LAB_004451e5:
    iVar16 = param_2[2];
    param_2[2] = iVar16 + 1;
    puVar14 = (undefined4 *)(*param_2 + iVar16 * 4);
    if (puVar14 != (undefined4 *)0x0) {
      *puVar14 = piVar8;
    }
  }
LAB_004451f9:
  cVar5 = (**(code **)(*piVar2 + 0x30))();
  if (cVar5 != '\0') {
    FUN_0040f650(piVar9,param_1[2]);
  }
  FUN_00443ab0(param_1[2],piVar2[0x11] + local_3c);
  if (local_4c == 0) {
    in_ECX[0x11] = local_3c;
  }
  operator_new(0xc0);
  param_3 = param_1;
  piVar2 = param_1 + 1;
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  uVar10 = FUN_00443720(&param_3,&local_64,iVar15,piVar9);
  iVar16 = piVar4[2] + 1;
  if (piVar4[1] < iVar16) {
    FUN_00409cf0(iVar16 / 2 + piVar4[2] + 9 & 0xfffffff8);
  }
  iVar16 = piVar4[2];
  piVar4[2] = iVar16 + 1;
  puVar14 = (undefined4 *)(*piVar4 + iVar16 * 4);
  if (puVar14 != (undefined4 *)0x0) {
    *puVar14 = uVar10;
  }
  LOCK();
  iVar16 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar16 == 1) {
    (**(code **)*param_1)(1);
  }
  FID_conflict__free(local_20);
  FID_conflict__free(local_64);
  ExceptionList = local_10;
  return;
joined_r0x004440c2:
  if (piVar12 == piVar8 + in_ECX[0xd]) goto LAB_004440cf;
  if (local_24[(int)local_34] == *piVar12) {
    uVar6 = (int)piVar12 - (int)piVar8 >> 2;
    goto LAB_004440d2;
  }
  piVar12 = piVar12 + 1;
  goto joined_r0x004440c2;
LAB_004440cf:
  uVar6 = 0xffffffff;
LAB_004440d2:
  if (uVar6 < (uint)in_ECX[0x10]) {
    iVar16 = *(int *)(in_ECX[0xe] + uVar6 * 4);
  }
  else {
    iVar16 = 0;
  }
  if (iVar16 < local_3c) {
    puVar14 = operator_new(0x1c);
    *puVar14 = juce::GraphRenderingOps::DelayChannelOp::vftable;
    puVar14[1] = 0;
    puVar14[2] = 0;
    iVar7 = (local_3c - iVar16) + 1;
    puVar14[3] = local_1c;
    puVar14[4] = iVar7;
    puVar14[5] = 0;
    puVar14[6] = local_3c - iVar16;
    FID_conflict__free((void *)puVar14[1]);
    uVar10 = FUN_004c5556(iVar7,4);
    puVar14[1] = uVar10;
    uVar10 = puVar14[4];
    FID_conflict__free((void *)puVar14[2]);
    uVar10 = FUN_004c5556(uVar10,8);
    puVar14[2] = uVar10;
    iVar16 = param_2[2];
    iVar7 = iVar16 + 1;
    if (param_2[1] < iVar7) {
      if (iVar7 < 0) {
        iVar7 = iVar16 + 2;
      }
      uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
      if (param_2[1] != uVar6) {
        if ((int)uVar6 < 1) {
          FID_conflict__free((void *)*param_2);
          *param_2 = 0;
        }
        else if (*param_2 == 0) {
          iVar16 = FUN_004c554b();
          *param_2 = iVar16;
        }
        else {
          iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
          *param_2 = iVar16;
        }
        param_2[1] = uVar6;
      }
    }
    iVar16 = param_2[2];
    param_2[2] = iVar16 + 1;
    puVar11 = (undefined4 *)(*param_2 + iVar16 * 4);
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = puVar14;
    }
  }
  if ((int)local_34 < 0) {
LAB_004441dd:
    local_1c = FUN_004452e0(0);
    iVar16 = FUN_004454c0(*local_24,*local_38);
    if (iVar16 < 0) {
      local_14 = operator_new(8);
      *local_14 = (int)juce::GraphRenderingOps::ClearChannelOp::vftable;
      local_14[1] = local_1c;
    }
    else {
      local_14 = operator_new(0xc);
      *local_14 = (int)juce::GraphRenderingOps::CopyChannelOp::vftable;
      local_14[1] = iVar16;
      local_14[2] = local_1c;
    }
    iVar16 = param_2[2];
    iVar7 = iVar16 + 1;
    if (param_2[1] < iVar7) {
      if (iVar7 < 0) {
        iVar7 = iVar16 + 2;
      }
      uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
      if (param_2[1] != uVar6) {
        if ((int)uVar6 < 1) {
          FID_conflict__free((void *)*param_2);
          *param_2 = 0;
        }
        else if (*param_2 == 0) {
          iVar16 = FUN_004c554b();
          *param_2 = iVar16;
        }
        else {
          iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
          *param_2 = iVar16;
        }
        param_2[1] = uVar6;
      }
    }
    iVar16 = param_2[2];
    param_2[2] = iVar16 + 1;
    puVar14 = (undefined4 *)(*param_2 + iVar16 * 4);
    if (puVar14 != (undefined4 *)0x0) {
      *puVar14 = local_14;
    }
    local_34 = (int *)0x0;
    if ((int)local_28 < 1) {
      iVar16 = 0;
    }
    else {
      iVar16 = *local_24;
    }
    piVar8 = (int *)in_ECX[0xb];
    for (piVar12 = piVar8; piVar12 != piVar8 + in_ECX[0xd]; piVar12 = piVar12 + 1) {
      if (iVar16 == *piVar12) {
        uVar6 = (int)piVar12 - (int)piVar8 >> 2;
        goto LAB_004442de;
      }
    }
    uVar6 = 0xffffffff;
LAB_004442de:
    if (uVar6 < (uint)in_ECX[0x10]) {
      iVar16 = *(int *)(in_ECX[0xe] + uVar6 * 4);
    }
    else {
      iVar16 = 0;
    }
    if (iVar16 < local_3c) {
      puVar14 = operator_new(0x1c);
      *puVar14 = juce::GraphRenderingOps::DelayChannelOp::vftable;
      puVar14[1] = 0;
      puVar14[2] = 0;
      iVar7 = (local_3c - iVar16) + 1;
      puVar14[3] = local_1c;
      puVar14[4] = iVar7;
      puVar14[5] = 0;
      puVar14[6] = local_3c - iVar16;
      FID_conflict__free((void *)puVar14[1]);
      uVar10 = FUN_004c5556(iVar7,4);
      puVar14[1] = uVar10;
      uVar10 = puVar14[4];
      FID_conflict__free((void *)puVar14[2]);
      uVar10 = FUN_004c5556(uVar10,8);
      puVar14[2] = uVar10;
      iVar16 = param_2[2];
      iVar7 = iVar16 + 1;
      if (param_2[1] < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar16 + 2;
        }
        uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (param_2[1] != uVar6) {
          if ((int)uVar6 < 1) {
            FID_conflict__free((void *)*param_2);
            *param_2 = 0;
          }
          else if (*param_2 == 0) {
            iVar16 = FUN_004c554b();
            *param_2 = iVar16;
          }
          else {
            iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
            *param_2 = iVar16;
          }
          param_2[1] = uVar6;
        }
      }
      iVar16 = param_2[2];
      param_2[2] = iVar16 + 1;
      puVar11 = (undefined4 *)(*param_2 + iVar16 * 4);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = puVar14;
      }
    }
  }
  local_50 = (int *)0x0;
  if (0 < (int)local_28) {
    local_14 = (int *)((int)local_38 - (int)local_24);
    local_54 = local_24;
    puVar14 = local_28;
    piVar8 = local_34;
    do {
      if (local_50 != piVar8) {
        iVar16 = *local_54;
        iVar7 = FUN_004454c0(iVar16,*(undefined4 *)((int)local_54 + (int)local_14));
        puVar14 = local_28;
        piVar8 = local_34;
        if (-1 < iVar7) {
          piVar8 = (int *)in_ECX[0xb];
          for (piVar12 = piVar8; piVar12 != piVar8 + in_ECX[0xd]; piVar12 = piVar12 + 1) {
            if (iVar16 == *piVar12) {
              uVar6 = (int)piVar12 - (int)piVar8 >> 2;
              goto LAB_00444445;
            }
          }
          uVar6 = 0xffffffff;
LAB_00444445:
          if (uVar6 < (uint)in_ECX[0x10]) {
            local_48 = *(uint *)(in_ECX[0xe] + uVar6 * 4);
          }
          else {
            local_48 = 0;
          }
          local_70 = iVar7;
          if ((int)local_48 < local_3c) {
            cVar5 = FUN_00445690(param_3,local_40,iVar16,
                                 *(undefined4 *)((int)local_54 + (int)local_14));
            if (cVar5 == '\0') {
              puVar14 = operator_new(0x1c);
              *puVar14 = juce::GraphRenderingOps::DelayChannelOp::vftable;
              puVar14[1] = 0;
              puVar14[2] = 0;
              puVar14[3] = iVar7;
              iVar16 = (local_3c - local_48) + 1;
              puVar14[4] = iVar16;
              puVar14[5] = 0;
              puVar14[6] = local_3c - local_48;
              FID_conflict__free((void *)puVar14[1]);
              uVar10 = FUN_004c5556(iVar16,4);
              puVar14[1] = uVar10;
              uVar10 = puVar14[4];
              FID_conflict__free((void *)puVar14[2]);
              uVar10 = FUN_004c5556(uVar10,8);
              puVar14[2] = uVar10;
              iVar16 = param_2[2];
              iVar7 = iVar16 + 1;
              if (param_2[1] < iVar7) {
                if (iVar7 < 0) {
                  iVar7 = iVar16 + 2;
                }
                uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
                if (param_2[1] != uVar6) {
                  if ((int)uVar6 < 1) {
                    FID_conflict__free((void *)*param_2);
                    *param_2 = 0;
                  }
                  else if (*param_2 == 0) {
                    iVar16 = FUN_004c554b();
                    *param_2 = iVar16;
                  }
                  else {
                    iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
                    *param_2 = iVar16;
                  }
                  param_2[1] = uVar6;
                }
              }
              iVar16 = param_2[2];
              param_2[2] = iVar16 + 1;
              puVar11 = (undefined4 *)(*param_2 + iVar16 * 4);
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = puVar14;
              }
            }
            else {
              local_70 = FUN_004452e0(0);
              local_18 = operator_new(0xc);
              local_18[1] = iVar7;
              *local_18 = (int)juce::GraphRenderingOps::CopyChannelOp::vftable;
              local_18[2] = local_70;
              iVar16 = param_2[2];
              iVar7 = iVar16 + 1;
              if (param_2[1] < iVar7) {
                if (iVar7 < 0) {
                  iVar7 = iVar16 + 2;
                }
                uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
                if (param_2[1] != uVar6) {
                  if ((int)uVar6 < 1) {
                    FID_conflict__free((void *)*param_2);
                    *param_2 = 0;
                  }
                  else if (*param_2 == 0) {
                    iVar16 = FUN_004c554b();
                    *param_2 = iVar16;
                  }
                  else {
                    iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
                    *param_2 = iVar16;
                  }
                  param_2[1] = uVar6;
                }
              }
              iVar16 = param_2[2];
              param_2[2] = iVar16 + 1;
              piVar8 = (int *)(*param_2 + iVar16 * 4);
              if (piVar8 != (int *)0x0) {
                *piVar8 = (int)local_18;
              }
              local_58 = operator_new(0x1c);
              *local_58 = juce::GraphRenderingOps::DelayChannelOp::vftable;
              local_58[1] = 0;
              local_58[2] = 0;
              local_58[3] = local_70;
              iVar16 = (local_3c - local_48) + 1;
              local_58[4] = iVar16;
              local_58[5] = 0;
              local_58[6] = local_3c - local_48;
              FID_conflict__free((void *)local_58[1]);
              uVar10 = FUN_004c5556(iVar16,4);
              local_58[1] = uVar10;
              uVar10 = local_58[4];
              FID_conflict__free((void *)local_58[2]);
              uVar10 = FUN_004c5556(uVar10,8);
              local_58[2] = uVar10;
              iVar16 = param_2[2];
              iVar7 = iVar16 + 1;
              if (param_2[1] < iVar7) {
                if (iVar7 < 0) {
                  iVar7 = iVar16 + 2;
                }
                uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
                if (param_2[1] != uVar6) {
                  if ((int)uVar6 < 1) {
                    FID_conflict__free((void *)*param_2);
                    *param_2 = 0;
                  }
                  else if (*param_2 == 0) {
                    iVar16 = FUN_004c554b();
                    *param_2 = iVar16;
                  }
                  else {
                    iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
                    *param_2 = iVar16;
                  }
                  param_2[1] = uVar6;
                }
              }
              iVar16 = param_2[2];
              param_2[2] = iVar16 + 1;
              piVar8 = (int *)(*param_2 + iVar16 * 4);
              if (piVar8 != (int *)0x0) {
                *piVar8 = (int)local_58;
              }
            }
          }
          local_18 = operator_new(0xc);
          local_18[1] = local_70;
          *local_18 = (int)juce::GraphRenderingOps::AddChannelOp::vftable;
          local_18[2] = local_1c;
          iVar16 = param_2[2];
          iVar7 = iVar16 + 1;
          if (param_2[1] < iVar7) {
            if (iVar7 < 0) {
              iVar7 = iVar16 + 2;
            }
            uVar6 = iVar16 + 9 + (iVar7 >> 1) & 0xfffffff8;
            if (param_2[1] != uVar6) {
              if ((int)uVar6 < 1) {
                FID_conflict__free((void *)*param_2);
                *param_2 = 0;
              }
              else if (*param_2 == 0) {
                iVar16 = FUN_004c554b();
                *param_2 = iVar16;
              }
              else {
                iVar16 = FUN_004c553b(*param_2,uVar6 * 4);
                *param_2 = iVar16;
              }
              param_2[1] = uVar6;
            }
          }
          iVar16 = param_2[2];
          param_2[2] = iVar16 + 1;
          piVar12 = (int *)(*param_2 + iVar16 * 4);
          puVar14 = local_28;
          piVar8 = local_34;
          if (piVar12 != (int *)0x0) {
            *piVar12 = (int)local_18;
          }
        }
      }
      local_50 = (int *)((int)local_50 + 1);
      local_54 = local_54 + 1;
    } while ((int)local_50 < (int)puVar14);
  }
LAB_0044486e:
  local_18 = (int *)((int)local_5c + 1);
  if ((int)local_60 < (int)local_18) {
    puVar14 = local_18;
    if ((int)local_18 < 0) {
      puVar14 = (undefined4 *)((int)local_5c + 2);
    }
    puVar14 = (undefined4 *)((int)local_5c + ((int)puVar14 >> 1) + 9 & 0xfffffff8);
    if (local_60 != puVar14) {
      if ((int)puVar14 < 1) {
        FID_conflict__free(local_20);
        local_64 = (void *)0x0;
        local_60 = puVar14;
        local_20 = local_64;
      }
      else if (local_20 == (void *)0x0) {
        local_64 = (void *)FUN_004c554b();
        local_60 = puVar14;
        local_20 = local_64;
      }
      else {
        local_64 = (void *)FUN_004c553b(local_20,(int)puVar14 * 4);
        local_60 = puVar14;
        local_20 = local_64;
      }
    }
  }
  puVar1 = (uint *)((int)local_20 + (int)local_5c * 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = local_1c;
  }
  local_5c = local_18;
  if (local_40 < local_4c) {
    local_14 = (int *)param_1[2];
    if (local_40 == 0x1000) {
      uVar6 = in_ECX[10];
      if (local_1c < uVar6) {
        *(int **)(in_ECX[8] + local_1c * 4) = local_14;
      }
      else if (-1 < (int)local_1c) {
        iVar16 = uVar6 + 1;
        if (in_ECX[9] < iVar16) {
          if (iVar16 < 0) {
            iVar16 = uVar6 + 2;
          }
          uVar6 = uVar6 + 9 + (iVar16 >> 1) & 0xfffffff8;
          if (in_ECX[9] != uVar6) {
            if ((int)uVar6 < 1) {
              FID_conflict__free((void *)in_ECX[8]);
              in_ECX[8] = 0;
            }
            else if (in_ECX[8] == 0) {
              iVar16 = FUN_004c554b();
              in_ECX[8] = iVar16;
            }
            else {
              iVar16 = FUN_004c553b(in_ECX[8],uVar6 * 4);
              in_ECX[8] = iVar16;
            }
            in_ECX[9] = uVar6;
          }
        }
        iVar16 = in_ECX[10];
        in_ECX[10] = iVar16 + 1;
        puVar14 = (undefined4 *)(in_ECX[8] + iVar16 * 4);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = local_14;
        }
      }
    }
    else {
      uVar6 = in_ECX[7];
      if (local_1c < uVar6) {
        *(int **)(in_ECX[5] + local_1c * 4) = local_14;
      }
      else if (-1 < (int)local_1c) {
        iVar16 = uVar6 + 1;
        if (in_ECX[6] < iVar16) {
          if (iVar16 < 0) {
            iVar16 = uVar6 + 2;
          }
          uVar6 = uVar6 + 9 + (iVar16 >> 1) & 0xfffffff8;
          if (in_ECX[6] != uVar6) {
            if ((int)uVar6 < 1) {
              FID_conflict__free((void *)in_ECX[5]);
              in_ECX[5] = 0;
            }
            else if (in_ECX[5] == 0) {
              iVar16 = FUN_004c554b();
              in_ECX[5] = iVar16;
            }
            else {
              iVar16 = FUN_004c553b(in_ECX[5],uVar6 * 4);
              in_ECX[5] = iVar16;
            }
            in_ECX[6] = uVar6;
          }
        }
        iVar16 = in_ECX[7];
        in_ECX[7] = iVar16 + 1;
        puVar14 = (undefined4 *)(in_ECX[5] + iVar16 * 4);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = local_14;
        }
      }
      uVar6 = in_ECX[4];
      if (local_1c < uVar6) {
        *(int *)(in_ECX[2] + local_1c * 4) = local_40;
      }
      else if (-1 < (int)local_1c) {
        iVar16 = uVar6 + 1;
        if (in_ECX[3] < iVar16) {
          if (iVar16 < 0) {
            iVar16 = uVar6 + 2;
          }
          uVar6 = uVar6 + 9 + (iVar16 >> 1) & 0xfffffff8;
          if (in_ECX[3] != uVar6) {
            if ((int)uVar6 < 1) {
              FID_conflict__free((void *)in_ECX[2]);
              in_ECX[2] = 0;
            }
            else if (in_ECX[2] == 0) {
              iVar16 = FUN_004c554b();
              in_ECX[2] = iVar16;
            }
            else {
              iVar16 = FUN_004c553b(in_ECX[2],uVar6 * 4);
              in_ECX[2] = iVar16;
            }
            in_ECX[3] = uVar6;
          }
        }
        iVar16 = in_ECX[4];
        in_ECX[4] = iVar16 + 1;
        piVar8 = (int *)(in_ECX[2] + iVar16 * 4);
        if (piVar8 != (int *)0x0) {
          *piVar8 = local_40;
        }
      }
    }
  }
  FID_conflict__free(local_38);
  FID_conflict__free(local_24);
  local_40 = local_40 + 1;
  if (local_44 <= local_40) goto LAB_00444afe;
  goto LAB_00443ce0;
}

