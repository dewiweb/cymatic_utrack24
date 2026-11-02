// rea decompile_all
// name: FUN_0053cab0
// address: 0x53cab0
// body: available
// range: 0x53cab0-0x53d1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053cab0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int *piStack_a4;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  int local_74;
  void *local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_58 [8];
  undefined1 local_35 [33];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e13f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = param_1;
  FUN_005bdda0();
  local_8 = 0;
  FUN_005be060();
  local_8._0_1_ = 1;
  FUN_005bdf30();
  if (param_1 != 3) {
    *(undefined4 *)(in_ECX + 0x24) = 1;
  }
  iVar8 = 0;
  local_70 = (void *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_8._0_1_ = 3;
  local_58[0] = local_64 + -1;
  switch(local_58[0]) {
  case 0:
    break;
  case 1:
  case 3:
    break;
  case 2:
    goto switchD_0053cb4e_caseD_2;
  default:
    goto switchD_0053cb4e_default;
  }
  if ((*(int *)(in_ECX + 0x28) != 1) && (*(int *)(in_ECX + 0x28) != 2)) {
switchD_0053cb4e_default:
    piStack_a4 = &local_88;
    FUN_00637690();
    piStack_a4 = (int *)0x53cb90;
    local_5c = (undefined4 *)FUN_006377c0();
    piStack_a4 = (int *)0x53cb9d;
    FUN_00409cf0();
    iVar8 = local_68 + 1;
    puVar4 = (undefined4 *)((int)local_70 + local_68 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *local_5c;
      *local_5c = &DAT_00bfe12c;
    }
    piVar5 = local_60 + -2;
    local_68 = iVar8;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_a4 = (int *)0x53cbde;
        FID_conflict__free(piVar5);
      }
    }
  }
switchD_0053cb4e_caseD_2:
  if (*(int *)(in_ECX + 0x2c) != 3) {
    switch(local_58[0]) {
    default:
      goto switchD_0053cbf5_caseD_0;
    case 3:
      if (*(int *)(in_ECX + 0x2c) == 2) goto switchD_0053cbf5_caseD_0;
    }
  }
  piStack_a4 = &local_84;
  FUN_00637690();
  piStack_a4 = (int *)0x53cc28;
  local_60 = (undefined4 *)FUN_006377c0();
  iVar1 = iVar8;
  if (local_6c < iVar8 + 1) {
    piStack_a4 = (int *)0x53cc4d;
    FUN_00409cf0();
    iVar1 = local_68;
  }
  iVar8 = iVar1 + 1;
  puVar4 = (undefined4 *)((int)local_70 + iVar1 * 4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *local_60;
    *local_60 = &DAT_00bfe12c;
  }
  piVar5 = local_5c + -2;
  local_68 = iVar8;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_a4 = (int *)0x53cc8e;
      FID_conflict__free(piVar5);
    }
  }
switchD_0053cbf5_caseD_0:
  iVar1 = FUN_005bd4e0();
  local_60 = (undefined4 *)(iVar1 * *(int *)(in_ECX + 0x24));
  local_58[0] = FUN_0053e9b0();
  if ((int)local_60 <= local_58[0]) {
    if ((int)local_60 < 0) {
      iVar1 = FUN_006104a0();
      *(undefined1 *)(iVar1 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    piStack_a4 = (int *)0x53ccea;
    FUN_004557e0();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_60 = &piStack_a4;
    if (local_58[0] + 1 < 0) {
      local_78 = (undefined4 *)&stack0xffffff60;
      iVar1 = FUN_006104a0();
      *(undefined1 *)(iVar1 + -1) = 0x2d;
      iVar1 = iVar1 + -1;
    }
    else {
      local_78 = (undefined4 *)&stack0xffffff60;
      local_60 = &piStack_a4;
      iVar1 = FUN_006104a0();
    }
    puVar13 = local_35 + -iVar1;
    FUN_004557e0(puVar13);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00637690(local_58);
    FUN_006377c0(puVar13);
    FUN_00637730();
    piStack_a4 = (int *)0x53cd5e;
    local_78 = (undefined4 *)FUN_006377c0();
    iVar1 = iVar8;
    if (local_6c < iVar8 + 1) {
      piStack_a4 = (int *)0x53cd83;
      FUN_00409cf0();
      iVar1 = local_68;
    }
    iVar8 = iVar1 + 1;
    puVar4 = (undefined4 *)((int)local_70 + iVar1 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *local_78;
      *local_78 = &DAT_00bfe12c;
    }
    piVar5 = (int *)(local_80 + -8);
    local_68 = iVar8;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_a4 = (int *)0x53cdc4;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_58[0] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_a4 = (int *)0x53cde8;
        FID_conflict__free(piVar5);
      }
    }
    local_8._0_1_ = 3;
    piVar5 = local_5c + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_a4 = (int *)0x53ce10;
        FID_conflict__free(piVar5);
      }
    }
  }
  if (local_64 == 3) {
    if (*(int *)(in_ECX + 0x34) != 3) {
      uVar6 = 0;
      fVar11 = -64.0;
      if (0 < *(int *)(in_ECX + 0x5c)) {
        uVar7 = *(uint *)(in_ECX + 0x5c);
        bVar9 = uVar7 != 0;
        do {
          if (bVar9) {
            iVar1 = *(int *)(*(int *)(in_ECX + 0x54) + uVar6 * 4);
          }
          else {
            iVar1 = 0;
          }
          if (fVar11 < *(float *)(iVar1 + 0x2c)) {
            if (uVar6 < uVar7) {
              iVar1 = *(int *)(*(int *)(in_ECX + 0x54) + uVar6 * 4);
            }
            else {
              iVar1 = 0;
            }
            fVar11 = *(float *)(iVar1 + 0x2c);
          }
          uVar6 = uVar6 + 1;
          bVar9 = uVar6 < uVar7;
        } while ((int)uVar6 < (int)uVar7);
        if (-12.0 < fVar11) {
          uVar6 = 0;
          if (0 < (int)uVar7) {
            bVar9 = *(int *)(in_ECX + 0x5c) != 0;
            do {
              if (bVar9) {
                iVar1 = *(int *)(*(int *)(in_ECX + 0x54) + uVar6 * 4);
              }
              else {
                iVar1 = 0;
              }
              if (uVar6 < *(uint *)(in_ECX + 0x5c)) {
                iVar2 = *(int *)(*(int *)(in_ECX + 0x54) + uVar6 * 4);
              }
              else {
                iVar2 = 0;
              }
              fVar10 = *(float *)(iVar1 + 0x2c) + (-12.0 - fVar11);
              uVar6 = uVar6 + 1;
              if (fVar10 <= -64.0) {
                fVar10 = -64.0;
              }
              *(float *)(iVar2 + 0x2c) = fVar10;
              bVar9 = uVar6 < *(uint *)(in_ECX + 0x5c);
            } while ((int)uVar6 < (int)*(uint *)(in_ECX + 0x5c));
          }
        }
      }
    }
  }
  else if (*(int *)(in_ECX + 0x34) == 3) {
    uVar6 = *(uint *)(in_ECX + 0x5c);
    uVar7 = 0;
    fVar11 = -12.0;
    if (0 < (int)uVar6) {
      bVar9 = uVar6 != 0;
      do {
        if (bVar9) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x54) + uVar7 * 4);
        }
        else {
          iVar1 = 0;
        }
        if (fVar11 < *(float *)(iVar1 + 0x2c)) {
          if (uVar7 < uVar6) {
            iVar1 = *(int *)(*(int *)(in_ECX + 0x54) + uVar7 * 4);
          }
          else {
            iVar1 = 0;
          }
          fVar11 = *(float *)(iVar1 + 0x2c);
        }
        uVar7 = uVar7 + 1;
        bVar9 = uVar7 < uVar6;
      } while ((int)uVar7 < (int)uVar6);
    }
    uVar7 = 0;
    if (0 < (int)uVar6) {
      bVar9 = *(int *)(in_ECX + 0x5c) != 0;
      do {
        if (bVar9) {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x54) + uVar7 * 4);
        }
        else {
          iVar1 = 0;
        }
        if (uVar7 < *(uint *)(in_ECX + 0x5c)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x54) + uVar7 * 4);
        }
        else {
          iVar2 = 0;
        }
        fVar10 = *(float *)(iVar1 + 0x2c) + -fVar11;
        uVar7 = uVar7 + 1;
        if (fVar10 <= -64.0) {
          fVar10 = -64.0;
        }
        *(float *)(iVar2 + 0x2c) = fVar10;
        bVar9 = uVar7 < *(uint *)(in_ECX + 0x5c);
      } while ((int)uVar7 < (int)*(uint *)(in_ECX + 0x5c));
    }
  }
  iVar1 = 0;
  if (iVar8 != 0) {
    piStack_a4 = (int *)0x53cf7d;
    FUN_0045c990();
    local_8._0_1_ = 6;
    piStack_a4 = (int *)0x53cf91;
    FUN_0045c990();
    local_8._0_1_ = 7;
    local_78 = (undefined4 *)FUN_00636260(&local_74,&DAT_0073c4c0);
    uVar14 = extraout_ECX;
    local_80 = &stack0xffffff60;
    uVar3 = FUN_00410ad0(local_58);
    local_8._0_1_ = 9;
    uVar12 = extraout_ECX_00;
    FUN_00637690(uVar3);
    FUN_006377c0(uVar12);
    FUN_00637730(uVar14);
    FUN_006377c0();
    piStack_a4 = (int *)0x53d00b;
    piVar5 = (int *)FUN_00637730();
    local_8._0_1_ = 10;
    piStack_a4 = (int *)0x53d01b;
    local_7c = operator_new(0x3c4);
    local_8._0_1_ = 0xb;
    piStack_a4 = piVar5;
    puVar4 = (undefined4 *)FUN_004ecd80(&local_64);
    local_8._0_1_ = 0xc;
    puVar4[0x4b] = 0;
    piStack_a4 = (int *)0x53d05b;
    local_7c = puVar4;
    FUN_004eb590();
    FUN_006e5240();
    piStack_a4 = (int *)0x53d06a;
    (**(code **)*puVar4)();
    piVar5 = (int *)((int)local_60 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_a4 = (int *)0x53d08c;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_58[0] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_a4 = (int *)0x53d0af;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_74 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_a4 = (int *)0x53d0d2;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_64 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_a4 = (int *)0x53d0f5;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = local_5c + -2;
    iVar1 = local_68;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_a4 = (int *)0x53d118;
        FID_conflict__free(piVar5);
        iVar1 = local_68;
      }
    }
  }
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      piVar5 = (int *)(*(int *)((int)local_70 + iVar8 * 4) + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          piStack_a4 = (int *)0x53d148;
          FID_conflict__free(piVar5);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  piStack_a4 = (int *)0x53d158;
  FID_conflict__free(local_70);
  piVar5 = (int *)(local_84 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_a4 = (int *)0x53d17d;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_88 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_a4 = (int *)0x53d1a3;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_8c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_a4 = (int *)0x53d1c6;
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

