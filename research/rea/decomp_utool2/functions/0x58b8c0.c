// rea decompile_all
// name: FUN_0058b8c0
// address: 0x58b8c0
// body: available
// range: 0x58b8c0-0x58c0cc inclusive
// range: 0x58c0d0-0x58c184 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0058c0c1) */

void FUN_0058b8c0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int in_ECX;
  uint uVar15;
  undefined4 extraout_ECX;
  undefined4 uVar16;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *puVar17;
  bool bVar18;
  double dVar19;
  ulonglong uVar20;
  undefined1 local_a0 [8];
  int local_98;
  undefined8 local_88;
  int local_80;
  int local_7c;
  void *local_78;
  uint local_74;
  uint local_70;
  undefined4 *local_6c;
  uint local_68;
  uint local_64;
  void *local_60;
  uint local_5c;
  uint local_58;
  undefined8 local_54;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  void *local_1c;
  undefined4 *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00713d4b;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = *(int *)(in_ECX + 0xdc);
  local_1c = (void *)0x0;
  local_4c = param_2[0x19];
  local_60 = (void *)0x0;
  local_34 = 0;
  local_5c = 0;
  local_38 = 0;
  local_58 = 0;
  local_18 = (undefined4 *)0x0;
  local_6c = (undefined4 *)0x0;
  local_24 = 0;
  local_68 = 0;
  local_2c = 0;
  local_64 = 0;
  local_14 = (void *)0x0;
  local_78 = (void *)0x0;
  local_30 = 0;
  local_74 = 0;
  local_28 = 0;
  local_70 = 0;
  local_8 = 3;
  local_3c = 0;
  local_20 = in_ECX;
  if (0 < local_4c) {
    do {
      uVar11 = local_34;
      iVar6 = FUN_00412c20(local_a0,local_3c);
      iVar6 = *(int *)(iVar6 + 4);
      local_80 = local_98;
      local_7c = local_98;
      piVar9 = (int *)(local_98 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      uVar15 = 0;
      uVar10 = *(uint *)(local_48 + 0x5c);
      if (0 < (int)uVar10) {
        do {
          if (uVar15 < uVar10) {
            iVar7 = *(int *)(*(int *)(local_48 + 0x54) + uVar15 * 4);
          }
          else {
            iVar7 = 0;
          }
          if (*(int *)(iVar7 + 8) == param_3 + iVar6) {
            if ((uVar15 < *(uint *)(local_48 + 0x5c)) &&
               (*(int *)(*(int *)(local_48 + 0x54) + uVar15 * 4) != 0)) {
              FUN_0053f050();
              puVar17 = (undefined4 *)local_54;
              local_8._0_1_ = 4;
              iVar6 = FUN_00548ab0();
              if (iVar6 == 0) {
                uVar14 = FUN_00410ea0();
                local_8 = CONCAT31(local_8._1_3_,5);
                FUN_0058e710(4,0x240,uVar14);
                piVar9 = (int *)(local_40 + -8);
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
                puVar8 = operator_new(0x20);
                *puVar8 = juce::AudioFormatReaderSource::vftable;
                puVar8[1] = iVar6;
                *(undefined1 *)(puVar8 + 2) = 1;
                puVar8[4] = 0;
                puVar8[5] = 0;
                *(undefined1 *)(puVar8 + 6) = 0;
                local_44 = puVar8;
                if ((int)local_34 < (int)(local_38 + 1)) {
                  FUN_00409cf0();
                  local_34 = local_5c;
                  local_1c = local_60;
                  local_38 = local_58;
                }
                local_58 = local_38 + 1;
                puVar1 = (undefined4 *)((int)local_1c + local_38 * 4);
                if (puVar1 != (undefined4 *)0x0) {
                  *puVar1 = puVar8;
                }
                local_38 = local_58;
                local_44 = operator_new(0x108);
                piVar9 = (int *)FUN_004e7170(puVar8,extraout_ECX,puVar17[9]);
                if (piVar9 != (int *)0x0) {
                  dVar19 = (double)(int)puVar17[6] / (double)(int)param_2[0xe];
                  if ((double)(int)puVar17[6] / (double)(int)param_2[0xe] <= 0.0) {
                    dVar19 = 0.0;
                  }
                  *(double *)(piVar9 + 6) = dVar19;
                  if ((int)local_24 < (int)(local_2c + 1)) {
                    FUN_00409cf0();
                    local_24 = local_68;
                    local_18 = local_6c;
                    local_2c = local_64;
                  }
                  local_64 = local_2c + 1;
                  local_18[local_2c] = piVar9;
                  local_2c = local_64;
                  puVar8 = operator_new(0x98);
                  local_8._0_1_ = 8;
                  *puVar8 = puVar17[9];
                  puVar8[1] = 0x8000;
                  puVar8[4] = 0;
                  local_44 = puVar8;
                  FUN_00416890();
                  local_8._0_1_ = 4;
                  if ((int)local_30 < (int)(local_28 + 1)) {
                    FUN_00409cf0();
                    local_30 = local_74;
                    local_14 = local_78;
                    local_28 = local_70;
                  }
                  local_70 = local_28 + 1;
                  *(undefined4 **)((int)local_14 + local_28 * 4) = puVar8;
                  local_28 = local_70;
                  (**(code **)(*piVar9 + 4))(0x8000);
                  local_8 = CONCAT31(local_8._1_3_,3);
                  LOCK();
                  piVar9 = puVar17 + 1;
                  iVar6 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)*puVar17)();
                  }
                  goto LAB_0058bd51;
                }
                uVar14 = FUN_00410ea0();
                local_8 = CONCAT31(local_8._1_3_,7);
                FUN_0058e710(4,0x242,uVar14);
                piVar9 = (int *)(local_54._4_4_ + -8);
                if (piVar9 != &DAT_00bfe124) {
                  LOCK();
                  iVar6 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar6 == 0) {
                    FID_conflict__free(piVar9);
                  }
                }
                (**(code **)*puVar8)();
              }
              uVar5 = local_28;
              pvVar12 = local_14;
              local_54 = CONCAT44(local_54._4_4_,(undefined4 *)local_54);
              if (puVar17 != (undefined4 *)0x0) {
                LOCK();
                piVar9 = puVar17 + 1;
                iVar6 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                local_54 = CONCAT44(local_54._4_4_,(undefined4 *)local_54);
                if (iVar6 == 1) {
                  (**(code **)*puVar17)();
                  uVar5 = local_28;
                  pvVar12 = local_14;
                }
              }
              goto joined_r0x0058be18;
            }
            break;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar10);
      }
      uVar10 = local_38 + 1;
      if ((int)uVar11 < (int)uVar10) {
        uVar15 = uVar10;
        if ((int)uVar10 < 0) {
          uVar15 = local_38 + 2;
        }
        uVar15 = local_38 + 9 + ((int)uVar15 >> 1) & 0xfffffff8;
        if (uVar11 != uVar15) {
          if ((int)uVar15 < 1) {
            FID_conflict__free(local_1c);
            local_60 = (void *)0x0;
            local_5c = uVar15;
            local_34 = uVar15;
            local_1c = local_60;
          }
          else if (local_1c == (void *)0x0) {
            local_60 = (void *)FUN_004c554b();
            local_5c = uVar15;
            local_34 = uVar15;
            local_1c = local_60;
          }
          else {
            local_60 = (void *)FUN_004c553b();
            local_5c = uVar15;
            local_34 = uVar15;
            local_1c = local_60;
          }
        }
      }
      uVar11 = local_2c;
      puVar17 = (undefined4 *)((int)local_1c + local_38 * 4);
      if (puVar17 != (undefined4 *)0x0) {
        *puVar17 = 0;
      }
      uVar15 = local_2c + 1;
      local_58 = uVar10;
      local_38 = uVar10;
      if ((int)local_24 < (int)uVar15) {
        uVar10 = uVar15;
        if ((int)uVar15 < 0) {
          uVar10 = local_2c + 2;
        }
        uVar10 = local_2c + 9 + ((int)uVar10 >> 1) & 0xfffffff8;
        if (local_24 != uVar10) {
          if ((int)uVar10 < 1) {
            FID_conflict__free(local_18);
            local_6c = (undefined4 *)0x0;
            local_68 = uVar10;
            local_24 = uVar10;
            local_18 = local_6c;
          }
          else if (local_18 == (undefined4 *)0x0) {
            local_6c = (undefined4 *)FUN_004c554b();
            local_68 = uVar10;
            local_24 = uVar10;
            local_18 = local_6c;
          }
          else {
            local_6c = (undefined4 *)FUN_004c553b();
            local_68 = uVar10;
            local_24 = uVar10;
            local_18 = local_6c;
          }
        }
      }
      uVar3 = local_28;
      uVar10 = local_28 + 1;
      local_18[uVar11] = 0;
      local_64 = uVar15;
      local_2c = uVar15;
      if ((int)local_30 < (int)uVar10) {
        uVar11 = uVar10;
        if ((int)uVar10 < 0) {
          uVar11 = local_28 + 2;
        }
        uVar11 = local_28 + 9 + ((int)uVar11 >> 1) & 0xfffffff8;
        if (local_30 != uVar11) {
          if ((int)uVar11 < 1) {
            FID_conflict__free(local_14);
            local_78 = (void *)0x0;
            local_74 = uVar11;
            local_30 = uVar11;
            local_14 = local_78;
          }
          else if (local_14 == (void *)0x0) {
            local_78 = (void *)FUN_004c554b();
            local_74 = uVar11;
            local_30 = uVar11;
            local_14 = local_78;
          }
          else {
            local_78 = (void *)FUN_004c553b();
            local_74 = uVar11;
            local_30 = uVar11;
            local_14 = local_78;
          }
        }
      }
      *(undefined4 *)((int)local_14 + uVar3 * 4) = 0;
      local_70 = uVar10;
      local_28 = uVar10;
LAB_0058bd51:
      local_3c = local_3c + 1;
    } while (local_3c < local_4c);
  }
  iVar6 = local_20;
  local_88 = 0;
  uVar20 = FUN_006f55d0(uVar5);
  iVar7 = local_88._4_4_;
  uVar5 = (uint)local_88;
  if (uVar20 != 0) {
    local_3c = local_88._4_4_;
    local_24 = (uint)local_88;
    do {
      local_54._4_4_ = (int)(uVar20 >> 0x20);
      local_54._0_4_ = (undefined4 *)uVar20;
      iVar7 = local_3c;
      uVar5 = local_24;
      if (*(char *)(iVar6 + 0xc) != '\0') break;
      local_34 = (int)(undefined4 *)local_54 - local_24;
      if ((local_54._4_4_ - local_3c != (uint)((undefined4 *)local_54 < local_24)) ||
         (0x8000 < local_34)) {
        local_34 = 0x8000;
      }
      uVar5 = local_34;
      local_40 = 0;
      uVar2 = *(undefined1 *)(local_20 + 0xe9);
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        param_2[1] = param_2[1] + 1;
        UNLOCK();
      }
      local_54 = uVar20;
      local_30 = FUN_00591b90(param_1,param_2,local_20,local_24,(ulonglong)CONCAT14(uVar2,local_3c))
      ;
      uVar11 = 0;
      if (0 < local_4c) {
        local_7c = (int)local_14 - (int)local_18;
        local_80 = (int)local_1c - (int)local_18;
        puVar17 = local_18;
        do {
          pvVar12 = operator_new(0x40);
          local_88 = CONCAT44(pvVar12,(uint)local_88);
          local_8._0_1_ = 9;
          if (param_2 != (undefined4 *)0x0) {
            LOCK();
            param_2[1] = param_2[1] + 1;
            UNLOCK();
          }
          if (uVar11 < local_28) {
            uVar14 = *(undefined4 *)(local_7c + (int)puVar17);
          }
          else {
            uVar14 = 0;
          }
          if (uVar11 < local_2c) {
            uVar16 = *puVar17;
          }
          else {
            uVar16 = 0;
          }
          if (uVar11 < local_38) {
            uVar13 = *(undefined4 *)(local_80 + (int)puVar17);
          }
          else {
            uVar13 = 0;
          }
          uVar14 = FUN_0058b590(uVar13,uVar16,uVar14,local_34,local_40,param_3,param_2,uVar11,
                                local_48,CONCAT44(local_30,local_20));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_0062f560(uVar14,1);
          uVar11 = uVar11 + 1;
          puVar17 = puVar17 + 1;
          uVar5 = local_34;
        } while ((int)uVar11 < local_4c);
      }
      iVar4 = local_20;
      iVar7 = *(int *)(local_20 + 0x130);
      iVar6 = local_20;
      while (local_20 = iVar6, 0 < iVar7) {
        if (DAT_00c8a8f0 == (HANDLE)0x0) {
          Sleep(1);
        }
        else {
          WaitForSingleObject(DAT_00c8a8f0,1);
        }
        iVar6 = local_20;
        iVar7 = *(int *)(iVar4 + 0x130);
      }
      bVar18 = CARRY4(local_24,uVar5);
      local_24 = local_24 + uVar5;
      local_3c = local_3c + local_40 + (uint)bVar18;
      FUN_0062f560(local_30,1);
      iVar7 = *(int *)(iVar6 + 0xb0);
      uVar14 = extraout_ECX_00;
      while (*(char *)(iVar7 + 0x48) == '\0') {
        uVar20 = local_54;
        if (*(int *)(iVar7 + 0x1c) < 0xc9) goto LAB_0058c0aa;
        if (DAT_00c8a8f0 == (HANDLE)0x0) {
          Sleep(5);
          uVar14 = extraout_ECX_01;
        }
        else {
          WaitForSingleObject(DAT_00c8a8f0,5);
          uVar14 = extraout_ECX_02;
        }
      }
      FUN_0062ef90(uVar14,5000,uVar14);
      uVar20 = local_54;
LAB_0058c0aa:
      uVar5 = local_28;
      pvVar12 = local_14;
      local_54 = uVar20;
      if (*(char *)(iVar7 + 0x48) != '\0') goto joined_r0x0058be18;
      iVar7 = local_3c;
      uVar5 = local_24;
    } while (CONCAT44(local_3c,local_24) < uVar20);
  }
  param_2[0xc] = uVar5;
  param_2[0xd] = iVar7;
  uVar5 = local_28;
  pvVar12 = local_14;
  local_54 = uVar20;
  while (0 < (int)uVar5) {
    iVar6 = *(int *)((int)pvVar12 + uVar5 * 4 + -4);
    uVar5 = uVar5 - 1;
    if (iVar6 != 0) {
      FID_conflict__free(*(void **)(iVar6 + 0x10));
      FUN_004bfe14(iVar6,0x98);
      pvVar12 = local_14;
    }
  }
  FID_conflict__free(local_14);
  uVar5 = local_2c;
  puVar17 = local_18;
  while (0 < (int)uVar5) {
    iVar6 = uVar5 - 1;
    uVar5 = uVar5 - 1;
    if ((undefined4 *)puVar17[iVar6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar17[iVar6])();
      puVar17 = local_18;
    }
  }
LAB_0058c146:
  FID_conflict__free(local_18);
  FID_conflict__free(local_1c);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar9 = param_2 + 1;
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*param_2)();
    }
  }
  ExceptionList = local_10;
  return;
joined_r0x0058be18:
  while (0 < (int)uVar5) {
    iVar6 = *(int *)((int)pvVar12 + uVar5 * 4 + -4);
    uVar5 = uVar5 - 1;
    if (iVar6 != 0) {
      FID_conflict__free(*(void **)(iVar6 + 0x10));
      FUN_004bfe14(iVar6,0x98);
      pvVar12 = local_14;
    }
  }
  FID_conflict__free(local_14);
  uVar5 = local_2c;
  puVar17 = local_18;
  while (0 < (int)uVar5) {
    iVar6 = uVar5 - 1;
    uVar5 = uVar5 - 1;
    if ((undefined4 *)puVar17[iVar6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar17[iVar6])();
      puVar17 = local_18;
    }
  }
  goto LAB_0058c146;
}

