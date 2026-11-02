// rea decompile_all
// name: FUN_0061af10
// address: 0x61af10
// body: available
// range: 0x61af10-0x61b66d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0061b21c) */
/* WARNING: Removing unreachable block (ram,0x0061b225) */
/* WARNING: Removing unreachable block (ram,0x0061b231) */
/* WARNING: Removing unreachable block (ram,0x0061b234) */

void FUN_0061af10(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int in_ECX;
  int *piVar8;
  uint uVar9;
  undefined **ppuVar10;
  int *piVar11;
  undefined **ppuVar12;
  bool bVar13;
  undefined **local_60;
  undefined **local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ce82;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppuVar12 = (undefined **)in_ECX;
  if (*(char *)(in_ECX + 0x20) == '\0') goto LAB_0061b29c;
  if (**(char **)(in_ECX + 0x10) != '\0') {
    local_60 = &local_1c;
    local_14 = (undefined **)in_ECX;
    puVar4 = (undefined4 *)FUN_00620c20();
    uVar1 = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 0x10) = *puVar4;
    *puVar4 = uVar1;
    piVar8 = (int *)(local_1c + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        local_60 = (undefined **)0x61af9a;
        FID_conflict__free(piVar8);
      }
    }
    piVar8 = (int *)(in_ECX + 0x14);
    local_60 = (undefined **)&DAT_00c010f4;
    FUN_00635720(*(undefined4 *)(in_ECX + 0x10));
    uVar9 = *(int *)(in_ECX + 0x1c) - 2;
    if (uVar9 < *(uint *)(in_ECX + 0x1c)) {
      local_60 = (undefined **)(*piVar8 + uVar9 * 4);
    }
    else {
      local_60 = &PTR_DAT_00c7ed68;
    }
    local_60 = (undefined **)*local_60;
    iVar5 = FUN_0045c1e0();
    if ((iVar5 == 0) && (cVar3 = FUN_00620fa0(), cVar3 != '\0')) {
      uVar9 = *(int *)(in_ECX + 0x1c) - 1;
      if (uVar9 < *(uint *)(in_ECX + 0x1c)) {
        ppuVar10 = (undefined **)(*piVar8 + uVar9 * 4);
      }
      else {
        ppuVar10 = &PTR_DAT_00c7ed68;
      }
      local_18 = *ppuVar10;
      piVar8 = (int *)(local_18 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      local_8 = 0;
      FUN_00637d50();
      local_60 = &local_1c;
      puVar4 = (undefined4 *)FUN_0061d0c0();
      local_8 = CONCAT31(local_8._1_3_,1);
      local_60 = (undefined **)*puVar4;
      FUN_0062cdf0();
      FUN_00637c10();
LAB_0061b106:
      local_8 = 0xffffffff;
      FUN_00637c10();
    }
    else {
      FUN_0040f7f0();
      if (*(int *)(in_ECX + 0x18) != 0) {
        local_60 = (undefined **)0x61b097;
        FID_conflict__free((void *)*piVar8);
        *piVar8 = 0;
        *(undefined4 *)(in_ECX + 0x18) = 0;
      }
      *(undefined4 *)(in_ECX + 0x1c) = 0;
      local_60 = (undefined **)0x61b0c0;
      local_1c = (undefined *)FUN_0045c230();
      if (0 < (int)local_1c) {
        local_60 = (undefined **)0x61b0d4;
        iVar5 = FUN_006215b0();
        if ((int)local_1c < iVar5) {
          local_60 = (undefined **)(local_1c + 1);
          puVar4 = (undefined4 *)FUN_006379a0(&local_1c);
          local_8 = 2;
          local_60 = (undefined **)*puVar4;
          FUN_0062cdf0();
          goto LAB_0061b106;
        }
      }
    }
    uVar9 = *(uint *)(in_ECX + 0x1c);
    while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
      iVar5 = FUN_00426f70();
      if (iVar5 == 0x25) {
        local_60 = (undefined **)0x61b157;
        cVar3 = FUN_00632d50();
        if (cVar3 != '\0') {
          FUN_0044ec90();
          local_60 = (undefined **)0x1;
          FUN_006379a0(&local_20);
          local_60 = &local_1c;
          local_8 = 3;
          FUN_0061ac50();
          piVar8 = (int *)(local_20 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              local_60 = (undefined **)0x61b1c7;
              FID_conflict__free(piVar8);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,6);
          local_60 = (undefined **)&DAT_00c010f4;
          FUN_00635720(local_1c);
          if (uVar9 < *(uint *)(in_ECX + 0x1c)) {
            local_60 = (undefined **)0x61b212;
            FUN_004179e0();
          }
          FUN_0040f7f0();
          local_60 = (undefined **)0x61b25e;
          FID_conflict__free((void *)0x0);
          local_8 = 0xffffffff;
          piVar8 = (int *)(local_1c + -8);
          ppuVar12 = local_14;
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              local_60 = (undefined **)0x61b289;
              FID_conflict__free(piVar8);
              ppuVar12 = local_14;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((int)ppuVar12 + 0x20) = 0;
LAB_0061b29c:
  uVar9 = 0;
  if (0 < *(int *)((int)ppuVar12 + 0x1c)) {
    bVar13 = *(int *)((int)ppuVar12 + 0x1c) != 0;
    do {
      if (bVar13) {
        ppuVar10 = (undefined **)(*(int *)((int)ppuVar12 + 0x14) + uVar9 * 4);
      }
      else {
        ppuVar10 = &PTR_DAT_00c7ed68;
      }
      puVar7 = *ppuVar10;
      puVar2 = (undefined *)*param_2;
      if (*ppuVar10 == (undefined *)*param_2) {
LAB_0061b2fd:
        if (uVar9 - 1 < *(uint *)((int)ppuVar12 + 0x1c)) {
          local_60 = (undefined **)(*(int *)((int)ppuVar12 + 0x14) + (uVar9 - 1) * 4);
        }
        else {
          local_60 = &PTR_DAT_00c7ed68;
        }
        local_60 = (undefined **)*local_60;
        iVar5 = FUN_0045c1e0();
        if (iVar5 == 0) {
          local_60 = &local_24;
          local_14 = (undefined **)(uVar9 + 1);
          FUN_00620c20();
          local_8 = 7;
          local_60 = (undefined **)0x61b418;
          FUN_006378b0();
          local_8 = CONCAT31(local_8._1_3_,8);
          local_60 = (undefined **)0x61b427;
          FUN_00620f00();
          piVar8 = (int *)(local_20 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              local_60 = (undefined **)0x61b449;
              FID_conflict__free(piVar8);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,0xb);
          piVar8 = (int *)(local_24 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              local_60 = (undefined **)0x61b470;
              FID_conflict__free(piVar8);
            }
          }
          local_60 = (undefined **)0x61b485;
          local_1c = (undefined *)FUN_0045c230();
          local_60 = (undefined **)(uVar9 + 1);
          if (-1 < (int)local_1c) {
            while (iVar5 = FUN_006325e0(), -1 < iVar5) {
              local_60 = local_14;
              FUN_006379a0(&local_28);
              local_60 = &local_18;
              local_8._0_1_ = 0xc;
              FUN_0061b670();
              local_8._0_1_ = 0xe;
              piVar8 = (int *)(local_28 + -8);
              if (piVar8 != &DAT_00bfe124) {
                LOCK();
                iVar6 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar6 == 0) {
                  local_60 = (undefined **)0x61b4f3;
                  FID_conflict__free(piVar8);
                }
              }
              local_34 = (undefined **)(iVar5 + 1);
              local_60 = &local_30;
              FUN_00637a90();
              local_8 = CONCAT31(local_8._1_3_,0xf);
              FUN_006379a0(&local_60,0,local_1c);
              FUN_00637730();
              local_60 = (undefined **)0x61b537;
              puVar4 = (undefined4 *)FUN_00637730();
              piVar8 = (int *)*puVar4;
              *puVar4 = param_2;
              piVar11 = (int *)(local_2c + -8);
              if (piVar11 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  local_60 = (undefined **)0x61b563;
                  FID_conflict__free(piVar11);
                }
              }
              piVar11 = (int *)(local_30 + -8);
              if (piVar11 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  local_60 = (undefined **)0x61b586;
                  FID_conflict__free(piVar11);
                }
              }
              local_60 = local_34;
              puVar7 = (undefined *)FUN_00631770();
              local_8 = CONCAT31(local_8._1_3_,0xb);
              piVar11 = (int *)(local_18 + -8);
              local_1c = puVar7;
              if (piVar11 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  local_60 = (undefined **)0x61b5bf;
                  FID_conflict__free(piVar11);
                }
              }
              local_60 = local_14;
              param_2 = piVar8;
              if ((int)puVar7 < 0) {
                *param_1 = (int)piVar8;
                ExceptionList = local_10;
                return;
              }
            }
            local_60 = (undefined **)0x61b5fa;
            FUN_0045c990();
            ppuVar10 = local_34 + -2;
            if (ppuVar10 != (undefined **)&DAT_00bfe124) {
              LOCK();
              *ppuVar10 = *ppuVar10 + 1;
              UNLOCK();
            }
            LOCK();
            iVar5 = *(int *)((int)ppuVar12 + 0xc);
            *(int *)((int)ppuVar12 + 0xc) = (int)local_34;
            UNLOCK();
            piVar8 = (int *)(iVar5 + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                local_60 = (undefined **)0x61b630;
                FID_conflict__free(piVar8);
              }
            }
            *(undefined1 *)((int)ppuVar12 + 9) = 1;
            if (ppuVar10 != (undefined **)&DAT_00bfe124) {
              LOCK();
              puVar7 = *ppuVar10;
              *ppuVar10 = *ppuVar10 + -1;
              UNLOCK();
              if (puVar7 == (undefined *)0x0) {
                local_60 = (undefined **)0x61b64f;
                FID_conflict__free(ppuVar10);
              }
            }
          }
          *param_1 = (int)param_2;
          ExceptionList = local_10;
          return;
        }
      }
      else {
        do {
          local_1c = puVar2;
          local_20 = puVar7;
          iVar5 = FUN_00443260();
          iVar6 = FUN_00443260();
          if ((iVar5 - iVar6 != 0) &&
             (iVar6 = (iVar5 - iVar6 >> 0x1f & 0xfffffffeU) + 1, iVar6 != 0)) goto LAB_0061b2f9;
          puVar7 = local_20;
          puVar2 = local_1c;
        } while (iVar5 != 0);
        iVar6 = 0;
LAB_0061b2f9:
        if (iVar6 == 0) goto LAB_0061b2fd;
      }
      uVar9 = uVar9 + 1;
      bVar13 = uVar9 < *(uint *)((int)ppuVar12 + 0x1c);
    } while ((int)uVar9 < (int)*(uint *)((int)ppuVar12 + 0x1c));
  }
  local_60 = (undefined **)0x61b355;
  FUN_0045c990();
  ppuVar10 = local_34 + -2;
  if (ppuVar10 != (undefined **)&DAT_00bfe124) {
    LOCK();
    *ppuVar10 = *ppuVar10 + 1;
    UNLOCK();
  }
  LOCK();
  iVar5 = *(int *)((int)ppuVar12 + 0xc);
  *(int *)((int)ppuVar12 + 0xc) = (int)local_34;
  UNLOCK();
  piVar8 = (int *)(iVar5 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_60 = (undefined **)0x61b38d;
      FID_conflict__free(piVar8);
    }
  }
  *(undefined1 *)((int)ppuVar12 + 9) = 0;
  if (ppuVar10 != (undefined **)&DAT_00bfe124) {
    LOCK();
    puVar7 = *ppuVar10;
    *ppuVar10 = *ppuVar10 + -1;
    UNLOCK();
    if (puVar7 == (undefined *)0x0) {
      local_60 = (undefined **)0x61b3af;
      FID_conflict__free(ppuVar10);
    }
  }
  iVar5 = *param_2;
  *param_1 = iVar5;
  piVar8 = (int *)(iVar5 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return;
}

