// rea decompile_all
// name: FUN_0058c200
// address: 0x58c200
// body: available
// range: 0x58c200-0x58c9dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0058c920) */

void FUN_0058c200(undefined4 param_1,undefined4 *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int in_ECX;
  int *piVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined1 local_94 [8];
  int local_8c;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 *local_6c;
  char *local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 *local_5c;
  char *local_58;
  undefined8 local_54;
  int local_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  void *local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  undefined **local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00713dc9;
  local_10 = ExceptionList;
  uVar7 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = *(int *)(in_ECX + 0xdc);
  uVar17 = 0;
  local_18 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_4c = param_2[0x19];
  local_44 = 0;
  local_1c = 0;
  local_40 = 0;
  uVar15 = 0;
  local_14 = (void *)0x0;
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_8 = 2;
  local_24 = 0;
  uVar16 = uVar15;
  local_20 = in_ECX;
  if (0 < local_4c) {
    do {
      iVar8 = FUN_00412c20(local_94,local_24);
      local_28 = (undefined **)0x73ea54;
      local_30 = *(undefined4 *)(iVar8 + 8);
      do {
        iVar8 = FUN_00443260();
        iVar9 = FUN_00443260();
        if ((iVar8 - iVar9 != 0) && (iVar9 = (iVar8 - iVar9 >> 0x1f & 0xfffffffeU) + 1, iVar9 != 0))
        goto LAB_0058c2c9;
      } while (iVar8 != 0);
      iVar9 = 0;
LAB_0058c2c9:
      piVar13 = (int *)(local_8c + -8);
      if (piVar13 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar13);
        }
      }
      if (iVar9 == 0) {
        uVar17 = local_1c + 1;
        if ((int)local_44 < (int)uVar17) {
          uVar15 = uVar17;
          if ((int)uVar17 < 0) {
            uVar15 = local_1c + 2;
          }
          uVar15 = local_1c + 9 + ((int)uVar15 >> 1) & 0xfffffff8;
          if (local_44 != uVar15) {
            if ((int)uVar15 < 1) {
              FID_conflict__free(local_18);
              local_48 = (undefined4 *)0x0;
              local_44 = uVar15;
              local_18 = local_48;
            }
            else if (local_18 == (undefined4 *)0x0) {
              local_48 = (undefined4 *)FUN_004c554b();
              local_44 = uVar15;
              local_18 = local_48;
            }
            else {
              local_48 = (undefined4 *)FUN_004c553b(local_18,uVar15 * 4);
              local_44 = uVar15;
              local_18 = local_48;
            }
          }
        }
        uVar15 = uVar16 + 1;
        local_18[local_1c] = 0;
        local_40 = uVar17;
        local_1c = uVar17;
        if ((int)local_38 < (int)uVar15) {
          uVar17 = uVar15;
          if ((int)uVar15 < 0) {
            uVar17 = uVar16 + 2;
          }
          uVar17 = uVar16 + 9 + ((int)uVar17 >> 1) & 0xfffffff8;
          if (local_38 != uVar17) {
            if ((int)uVar17 < 1) {
              FID_conflict__free(local_14);
              local_3c = (void *)0x0;
              local_38 = uVar17;
              local_14 = local_3c;
            }
            else if (local_14 == (void *)0x0) {
              local_3c = (void *)FUN_004c554b();
              local_38 = uVar17;
              local_14 = local_3c;
            }
            else {
              local_3c = (void *)FUN_004c553b(local_14,uVar17 * 4);
              local_38 = uVar17;
              local_14 = local_3c;
            }
          }
        }
        *(undefined4 *)((int)local_14 + uVar16 * 4) = 0;
        uVar17 = local_1c;
        local_34 = uVar15;
      }
      else {
        iVar8 = FUN_00412c20(local_94,local_24);
        piVar13 = (int *)(local_8c + -8);
        iVar8 = *(int *)(iVar8 + 4);
        if (piVar13 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar13);
          }
        }
        uVar17 = 0;
        uVar15 = *(uint *)(local_60 + 0x5c);
        if (0 < (int)uVar15) {
          do {
            if (uVar17 < uVar15) {
              iVar9 = *(int *)(*(int *)(local_60 + 0x54) + uVar17 * 4);
            }
            else {
              iVar9 = 0;
            }
            if (*(int *)(iVar9 + 8) == param_3 + iVar8) {
              if ((uVar17 < *(uint *)(local_60 + 0x5c)) &&
                 (*(int *)(*(int *)(local_60 + 0x54) + uVar17 * 4) != 0)) {
                FUN_0053f050(&local_5c);
                puVar5 = local_5c;
                local_8._0_1_ = 3;
                iVar8 = FUN_00548ab0();
                if (iVar8 == 0) {
                  uVar12 = FUN_00410ea0(&param_3);
                  local_8 = CONCAT31(local_8._1_3_,4);
                  FUN_0058e710(4,0x230,uVar12);
                  piVar13 = (int *)(param_3 + -8);
                  if (piVar13 != &DAT_00bfe124) {
                    LOCK();
                    iVar8 = *piVar13;
                    *piVar13 = *piVar13 + -1;
                    UNLOCK();
                    if (iVar8 == 0) {
                      FID_conflict__free(piVar13);
                    }
                  }
                  if (puVar5 != (undefined4 *)0x0) {
                    LOCK();
                    piVar13 = puVar5 + 1;
                    iVar8 = *piVar13;
                    *piVar13 = *piVar13 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)*puVar5)(1);
                    }
                  }
                  FUN_0041b2b0();
                  FID_conflict__free(local_3c);
                  FUN_00407640();
                  goto LAB_0058c9b1;
                }
                iVar9 = local_1c + 1;
                if ((int)local_44 < iVar9) {
                  if (iVar9 < 0) {
                    iVar9 = local_1c + 2;
                  }
                  FUN_00409cf0(local_1c + 9 + (iVar9 >> 1) & 0xfffffff8);
                  local_18 = local_48;
                  local_1c = local_40;
                }
                local_40 = local_1c + 1;
                local_18[local_1c] = iVar8;
                local_1c = local_40;
                puVar10 = operator_new(0x98);
                local_8 = CONCAT31(local_8._1_3_,5);
                *puVar10 = puVar5[9];
                puVar10[1] = 0x8000;
                puVar10[4] = 0;
                local_6c = puVar10;
                FUN_00416890();
                iVar8 = uVar16 + 1;
                if ((int)local_38 < iVar8) {
                  if (iVar8 < 0) {
                    iVar8 = uVar16 + 2;
                  }
                  FUN_00409cf0((iVar8 >> 1) + uVar16 + 9 & 0xfffffff8);
                  local_14 = local_3c;
                  uVar16 = local_34;
                }
                local_8 = CONCAT31(local_8._1_3_,2);
                uVar15 = uVar16 + 1;
                *(undefined4 **)((int)local_14 + uVar16 * 4) = puVar10;
                LOCK();
                piVar13 = puVar5 + 1;
                iVar8 = *piVar13;
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                uVar17 = local_1c;
                local_34 = uVar15;
                if (iVar8 == 1) {
                  (**(code **)*puVar5)(1);
                  uVar17 = local_1c;
                }
                goto LAB_0058c3e8;
              }
              break;
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar15);
        }
        iVar8 = local_1c + 1;
        if ((int)local_44 < iVar8) {
          if (iVar8 < 0) {
            iVar8 = local_1c + 2;
          }
          FUN_00409cf0((iVar8 >> 1) + local_1c + 9 & 0xfffffff8);
          local_18 = local_48;
          local_1c = local_40;
        }
        iVar8 = uVar16 + 1;
        uVar17 = local_1c + 1;
        local_18[local_1c] = 0;
        local_1c = uVar17;
        local_40 = uVar17;
        if ((int)local_38 < iVar8) {
          if (iVar8 < 0) {
            iVar8 = uVar16 + 2;
          }
          FUN_00409cf0((iVar8 >> 1) + uVar16 + 9 & 0xfffffff8);
          local_14 = local_3c;
          uVar15 = local_34 + 1;
          *(undefined4 *)((int)local_3c + local_34 * 4) = 0;
          local_34 = uVar15;
        }
        else {
          uVar15 = uVar16 + 1;
          *(undefined4 *)((int)local_14 + uVar16 * 4) = 0;
          local_34 = uVar15;
        }
      }
LAB_0058c3e8:
      local_24 = local_24 + 1;
      uVar16 = uVar15;
    } while ((int)local_24 < local_4c);
  }
  iVar8 = local_20;
  local_7c = 0;
  local_74 = 0;
  local_54 = FUN_0053bc20(uVar7);
  local_28 = &PTR_00c094f8;
  local_30 = *(undefined4 *)(*(int *)(iVar8 + 0xdc) + 100);
  do {
    iVar8 = FUN_00443260();
    iVar9 = FUN_00443260();
    if ((iVar8 - iVar9 != 0) && ((iVar8 - iVar9 >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
      dVar2 = *(double *)(*(int *)(local_20 + 0xdc) + 0x68);
      pdVar1 = (double *)(*(int *)(local_20 + 0xdc) + 0x38);
      if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
        uVar19 = FUN_006f55d0();
        local_54 = uVar19;
      }
      break;
    }
  } while (iVar8 != 0);
  pcVar14 = local_74._4_4_;
  uVar16 = (uint)local_74;
  uVar19 = local_54;
  if (local_54 != 0) {
    local_68 = local_7c._4_4_;
    local_24 = (uint)local_7c;
    local_58 = local_74._4_4_;
    local_2c = (uint)local_74;
    while( true ) {
      local_54._4_4_ = (int)(uVar19 >> 0x20);
      local_54._0_4_ = (uint)uVar19;
      pcVar14 = local_58;
      uVar16 = local_2c;
      if (*(char *)(local_20 + 0xc) != '\0') break;
      local_5c = (undefined4 *)((uint)local_54 - local_2c);
      if ((local_54._4_4_ - (int)local_58 != (uint)((uint)local_54 < local_2c)) ||
         ((undefined4 *)0x8000 < local_5c)) {
        local_5c = (undefined4 *)0x8000;
      }
      local_28 = (undefined **)0x0;
      uVar3 = *(undefined1 *)(local_20 + 0xe9);
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        param_2[1] = param_2[1] + 1;
        UNLOCK();
      }
      local_54 = uVar19;
      local_30 = FUN_00591b90(param_1,param_2,local_20,local_2c,local_58,uVar3);
      uVar16 = 0;
      if (0 < local_4c) {
        local_64 = local_18;
        local_7c = CONCAT44((int)local_14 - (int)local_18,(uint)local_7c);
        do {
          local_6c = operator_new(0x40);
          local_8._0_1_ = 6;
          if (param_2 != (undefined4 *)0x0) {
            LOCK();
            param_2[1] = param_2[1] + 1;
            UNLOCK();
          }
          if (uVar16 < uVar15) {
            uVar12 = *(undefined4 *)((int)local_7c._4_4_ + (int)local_64);
          }
          else {
            uVar12 = 0;
          }
          if (uVar16 < uVar17) {
            uVar11 = *local_64;
          }
          else {
            uVar11 = 0;
          }
          uVar12 = FUN_0058b220(uVar11,uVar12,local_24,local_68,local_5c,local_28,param_3,param_2,
                                uVar16,local_60,local_20,local_30);
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_0062f560(uVar12,1);
          local_64 = local_64 + 1;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < local_4c);
      }
      iVar6 = local_20;
      iVar8 = *(int *)(local_20 + 0xf8);
      iVar9 = local_20;
      while (local_20 = iVar9, 0 < iVar8) {
        if (DAT_00c8a8f0 == (HANDLE)0x0) {
          Sleep(1);
        }
        else {
          WaitForSingleObject(DAT_00c8a8f0,1);
        }
        uVar17 = local_1c;
        iVar9 = local_20;
        iVar8 = *(int *)(iVar6 + 0xf8);
      }
      bVar18 = CARRY4(local_24,(uint)local_5c);
      local_24 = local_24 + (int)local_5c;
      local_68 = (char *)((int)local_28 + (int)(local_68 + bVar18));
      bVar18 = CARRY4(local_2c,(uint)local_5c);
      local_2c = local_2c + (int)local_5c;
      local_58 = (char *)((int)local_28 + (int)(local_58 + bVar18));
      FUN_0062f560(local_30,1);
      iVar8 = *(int *)(iVar9 + 0xb0);
      uVar12 = extraout_ECX;
      while (*(char *)(iVar8 + 0x48) == '\0') {
        uVar19 = local_54;
        if (*(int *)(iVar8 + 0x1c) < 0xc9) goto LAB_0058c910;
        if (DAT_00c8a8f0 == (HANDLE)0x0) {
          Sleep(5);
          uVar12 = extraout_ECX_00;
        }
        else {
          WaitForSingleObject(DAT_00c8a8f0,5);
          uVar12 = extraout_ECX_01;
        }
      }
      FUN_0062ef90(uVar12,5000,uVar12);
      uVar19 = local_54;
LAB_0058c910:
      pcVar14 = local_58;
      uVar16 = local_2c;
      if ((*(char *)(iVar8 + 0x48) != '\0') || (uVar19 <= CONCAT44(local_68,local_24))) break;
    }
  }
  param_2[0xc] = uVar16;
  param_2[0xd] = pcVar14;
  pvVar4 = local_14;
  local_54 = uVar19;
  while (0 < (int)uVar15) {
    iVar8 = *(int *)((int)pvVar4 + uVar15 * 4 + -4);
    uVar15 = uVar15 - 1;
    if (iVar8 != 0) {
      FID_conflict__free(*(void **)(iVar8 + 0x10));
      FUN_004bfe14(iVar8,0x98);
      pvVar4 = local_14;
    }
  }
  FID_conflict__free(local_14);
  puVar5 = local_18;
  while (0 < (int)uVar17) {
    iVar8 = uVar17 - 1;
    uVar17 = uVar17 - 1;
    if ((undefined4 *)puVar5[iVar8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar5[iVar8])(1);
      puVar5 = local_18;
    }
  }
  FID_conflict__free(local_18);
LAB_0058c9b1:
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar13 = param_2 + 1;
    iVar8 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

