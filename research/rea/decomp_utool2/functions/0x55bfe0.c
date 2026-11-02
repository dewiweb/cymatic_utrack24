// rea decompile_all
// name: FUN_0055bfe0
// address: 0x55bfe0
// body: available
// range: 0x55bfe0-0x55c569 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055bfe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *in_EDX;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int *local_7c;
  char **ppcStack_78;
  int iStack_5c;
  int local_54;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  uint local_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_28;
  undefined1 *local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00711a31;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar9 = 0;
  iStack_5c = 0;
  if (param_1[0x13] == -1 || param_1[0x13] + 1 < 0) {
    uVar11 = 0;
  }
  else {
    local_1c = 0;
    local_20 = 0;
    local_28 = in_EDX;
    do {
      iVar9 = iVar9 + 1;
      ppcStack_78 = (char **)param_1;
      local_7c = (int *)&DAT_0073ee48;
      FUN_0045c990();
      local_7c = &local_3c;
      FUN_00633930();
      local_8._0_1_ = 1;
      FUN_006369b0(&local_7c);
      FUN_006377c0();
      local_7c = (int *)0x55c08f;
      FUN_00637730();
      ppcStack_78 = (char **)0x55c09c;
      FUN_006377c0();
      local_8._0_1_ = 2;
      ppcStack_78 = (char **)0x55c0ae;
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,3);
      ppcStack_78 = &local_14;
      local_7c = (int *)0x55c0c4;
      FUN_00635a10();
      piVar7 = (int *)(local_34 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppcStack_78 = (char **)0x55c0e6;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_38 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppcStack_78 = (char **)0x55c109;
          FID_conflict__free(piVar7);
        }
      }
      local_8._0_1_ = 7;
      piVar7 = (int *)(local_3c + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppcStack_78 = (char **)0x55c130;
          FID_conflict__free(piVar7);
        }
      }
      if (*local_14 == '\0') {
LAB_0055c43c:
        ppcStack_78 = (char **)0x55c448;
        FUN_00636a10();
        local_8._0_1_ = 10;
        ppcStack_78 = (char **)0x55c45a;
        puVar3 = (undefined4 *)FUN_00637690();
        piVar7 = local_28;
        iVar6 = local_28[2];
        iVar8 = iVar6 + 1;
        if (local_28[1] < iVar8) {
          if (iVar8 < 0) {
            iVar8 = iVar6 + 2;
          }
          uVar11 = iVar6 + 9 + (iVar8 >> 1) & 0xfffffff8;
          if (local_28[1] != uVar11) {
            if ((int)uVar11 < 1) {
              ppcStack_78 = (char **)0x55c4b3;
              FID_conflict__free((void *)*local_28);
              *piVar7 = 0;
            }
            else {
              ppcStack_78 = (char **)*local_28;
              if (ppcStack_78 == (char **)0x0) {
                ppcStack_78 = (char **)0x55c498;
                iVar6 = FUN_004c554b();
                *piVar7 = iVar6;
              }
              else {
                local_7c = (int *)0x55c4a5;
                iVar6 = FUN_004c553b();
                *piVar7 = iVar6;
              }
            }
            piVar7[1] = uVar11;
          }
        }
        iVar6 = piVar7[2];
        piVar7[2] = iVar6 + 1;
        puVar1 = (undefined4 *)(*piVar7 + iVar6 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *puVar3;
          *puVar3 = &DAT_00bfe12c;
        }
        piVar7 = (int *)(local_50 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            ppcStack_78 = (char **)0x55c4fd;
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_54 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            ppcStack_78 = (char **)0x55c528;
            FID_conflict__free(piVar7);
          }
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_00458890();
        ppcStack_78 = (char **)0x55c152;
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        if ((DVar4 & 0x10) != 0) goto LAB_0055c43c;
        piVar7 = (int *)(local_14 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        ppcStack_78 = (char **)0x55c17a;
        FUN_00548e50();
        puVar3 = local_18;
        local_8._0_1_ = 8;
        if ((local_18 == (undefined4 *)0x0) || ((int)local_18[6] < 1)) {
          ppcStack_78 = (char **)0x55c345;
          ppcStack_78 = (char **)FUN_00636a10();
          local_8._0_1_ = 9;
          local_7c = (int *)0x55c357;
          FUN_00637690();
          ppcStack_78 = (char **)0x55c364;
          puVar3 = (undefined4 *)FUN_006377c0();
          piVar7 = local_28;
          if (local_28[1] < local_28[2] + 1) {
            ppcStack_78 = (char **)0x55c38d;
            FUN_00409cf0();
          }
          iVar6 = piVar7[2];
          piVar7[2] = iVar6 + 1;
          puVar1 = (undefined4 *)(*piVar7 + iVar6 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *puVar3;
            *puVar3 = &DAT_00bfe12c;
          }
          piVar7 = (int *)(local_48 + -8);
          puVar2 = local_4c;
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              ppcStack_78 = (char **)0x55c3c9;
              FID_conflict__free(piVar7);
            }
          }
LAB_0055c314:
          piVar7 = (int *)(puVar2 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              ppcStack_78 = (char **)0x55c32e;
              FID_conflict__free(piVar7);
            }
          }
        }
        else {
          if ((int)param_1[0x15] < param_1[0x16] + 1) {
            ppcStack_78 = (char **)0x55c1be;
            FUN_00409cf0();
          }
          iVar6 = param_1[0x16];
          param_1[0x16] = iVar6 + 1;
          *(undefined4 **)(param_1[0x14] + iVar6 * 4) = puVar3;
          if (puVar3 != (undefined4 *)0x0) {
            LOCK();
            puVar3[1] = puVar3[1] + 1;
            UNLOCK();
          }
          uVar11 = 0;
          if (0 < (int)local_18[0xc]) {
            bVar13 = local_18[0xc] != 0;
            do {
              if (bVar13) {
                local_44 = *(uint *)(local_18[10] + uVar11 * 8);
                iStack_40 = *(int *)(local_18[10] + 4 + uVar11 * 8);
              }
              else {
                iStack_40 = 0;
                local_44 = 0;
              }
              iVar10 = local_44 + local_20;
              local_30 = iStack_40 + local_1c + (uint)CARRY4(local_44,local_20);
              iVar6 = param_1[0x1c];
              iVar8 = iVar6 + 1;
              if ((int)param_1[0x1b] < iVar8) {
                if (iVar8 < 0) {
                  iVar8 = iVar6 + 2;
                }
                uVar12 = iVar6 + 9 + (iVar8 >> 1) & 0xfffffff8;
                if (param_1[0x1b] != uVar12) {
                  if ((int)uVar12 < 1) {
                    ppcStack_78 = (char **)0x55c268;
                    FID_conflict__free((void *)param_1[0x1a]);
                    param_1[0x1a] = 0;
                  }
                  else {
                    ppcStack_78 = (char **)param_1[0x1a];
                    if (ppcStack_78 == (char **)0x0) {
                      ppcStack_78 = (char **)0x55c24a;
                      uVar5 = FUN_004c554b();
                      param_1[0x1a] = uVar5;
                    }
                    else {
                      local_7c = (int *)0x55c258;
                      uVar5 = FUN_004c553b();
                      param_1[0x1a] = uVar5;
                    }
                  }
                  param_1[0x1b] = uVar12;
                }
              }
              iVar6 = param_1[0x1c];
              param_1[0x1c] = iVar6 + 1;
              piVar7 = (int *)(param_1[0x1a] + iVar6 * 8);
              if (piVar7 != (int *)0x0) {
                *piVar7 = iVar10;
                piVar7[1] = local_30;
              }
              uVar11 = uVar11 + 1;
              bVar13 = uVar11 < (uint)local_18[0xc];
            } while ((int)uVar11 < (int)local_18[0xc]);
          }
          uVar11 = local_18[4];
          bVar13 = CARRY4(local_20,uVar11);
          local_20 = local_20 + uVar11;
          local_1c = local_1c + local_18[5] + (uint)bVar13;
          if (uVar11 == 0 && local_18[5] == 0) {
            ppcStack_78 = (char **)0x55c2c5;
            FUN_0045c990();
            piVar7 = local_28;
            if (local_28[1] < local_28[2] + 1) {
              ppcStack_78 = (char **)0x55c2ef;
              FUN_00409cf0();
            }
            iVar6 = piVar7[2];
            piVar7[2] = iVar6 + 1;
            puVar3 = (undefined4 *)(*piVar7 + iVar6 * 4);
            puVar2 = local_24;
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = local_24;
              local_24 = &DAT_00bfe12c;
              puVar2 = local_24;
            }
            goto LAB_0055c314;
          }
        }
        if (local_18 != (undefined4 *)0x0) {
          LOCK();
          piVar7 = local_18 + 1;
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            ppcStack_78 = (char **)0x55c3f5;
            (**(code **)*local_18)();
          }
        }
      }
      local_8 = (uint)local_8._1_3_ << 8;
      piVar7 = (int *)(local_14 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppcStack_78 = (char **)0x55c41c;
          FID_conflict__free(piVar7);
        }
      }
      iStack_5c = local_1c;
      uVar11 = local_20;
    } while (iVar9 < param_1[0x13] + 1);
  }
  if ((uVar11 != param_1[0xc]) || (iStack_5c != param_1[0xd])) {
    param_1[0xc] = uVar11;
    param_1[0xd] = iStack_5c;
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar7 = param_1 + 1;
    iVar9 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      ppcStack_78 = (char **)0x55c558;
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

