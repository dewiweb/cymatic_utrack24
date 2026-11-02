// rea decompile_all
// name: FUN_00594190
// address: 0x594190
// body: available
// range: 0x594190-0x59489d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00594190(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  void *local_74;
  uint local_6c;
  void *local_68;
  int local_64;
  int local_60;
  void *local_5c;
  int local_58;
  void *local_54;
  undefined1 *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714c1e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = in_ECX + 0x1a30;
  local_14 = 0;
  local_4c = 0;
  local_18 = in_ECX;
  FUN_00517cc0();
  local_8 = 0;
  local_5c = operator_new(0x118);
  local_8._0_1_ = 1;
  local_1c = FUN_0058ff10(param_1,param_5);
  local_8._0_1_ = 0;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 0;
  uVar15 = *param_4;
  uVar8 = param_4[1];
  uVar7 = param_3[1];
  *(undefined4 *)(local_1c + 0x48) = *param_3;
  *(undefined4 *)(local_1c + 0x4c) = uVar7;
  *(undefined4 *)(local_1c + 0x50) = uVar15;
  *(undefined4 *)(local_1c + 0x54) = uVar8;
  param_4 = (undefined4 *)0x0;
  if (0 < (int)local_6c) {
    do {
      uVar10 = (uint)param_4;
      FUN_00554ba0();
      local_8._0_1_ = 2;
      FUN_0051ba00(&param_1);
      local_8._0_1_ = 4;
      piVar9 = (int *)(local_28 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      uVar15 = 0x5942a4;
      FUN_00550e70(&param_3);
      puVar4 = param_3;
      local_8._0_1_ = 5;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 5;
      if (param_3 != (undefined4 *)0x0) {
        if (param_3[8] != 0) {
          bVar13 = local_6c <= uVar10;
          if (bVar13) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)((int)local_74 + uVar10 * 4);
          }
          if (*(int *)(iVar5 + 0x40) == 0x1003) {
            if (bVar13) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)((int)local_74 + uVar10 * 4);
            }
            local_8._0_1_ = uVar3;
            local_5c = operator_new(0x160);
            local_8._0_1_ = 6;
            iVar12 = puVar4[8];
            uVar15 = *(undefined4 *)(*(int *)(iVar5 + 0x78) + 0xc);
            uVar8 = FUN_006e85c0();
            iVar12 = FUN_0058d960(uVar8,uVar15,&param_1,iVar12 == 2);
            iVar5 = local_1c;
            piVar9 = (int *)(local_1c + 0xc);
            *(int *)(iVar12 + 0x10) = local_1c;
            if (*(int *)(local_1c + 0x10) < *(int *)(local_1c + 0x14) + 1) {
              FUN_00409cf0();
            }
            iVar2 = *(int *)(iVar5 + 0x14);
            *(int *)(iVar5 + 0x14) = iVar2 + 1;
            *(int *)(*piVar9 + iVar2 * 4) = iVar12;
            uVar10 = (uint)param_4;
            uVar3 = (undefined1)local_8;
          }
          else {
            uVar3 = (undefined1)local_8;
            if (*(int *)(iVar5 + 0x40) == 0x1006) {
              if (bVar13) {
                param_6 = 0;
              }
              else {
                param_6 = *(int *)((int)local_74 + uVar10 * 4);
              }
              local_68 = (void *)0x0;
              local_64 = 0;
              local_60 = 0;
              iVar5 = *(int *)(param_6 + 0x78);
              uVar10 = 0;
              if (0 < *(int *)(*(int *)(iVar5 + 0xc) + 0x20)) {
                iVar12 = 0;
                do {
                  if ((((int)uVar10 < 0) ||
                      (uVar1 = *(uint *)(*(int *)(iVar5 + 0xc) + 0x20), (int)uVar1 <= (int)uVar10))
                     || (uVar1 <= uVar10)) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0xc) + 0x18) + uVar10 * 4);
                  }
                  puVar11 = &DAT_00bfe12c;
                  local_50 = &DAT_00bfe12c;
                  if (iVar5 != 0) {
                    uVar15 = FUN_00410a10();
                    local_8 = CONCAT31(local_8._1_3_,9);
                    FUN_00518a30(uVar15);
                    piVar9 = (int *)(local_2c + -8);
                    if (piVar9 != &DAT_00bfe124) {
                      LOCK();
                      iVar5 = *piVar9;
                      *piVar9 = *piVar9 + -1;
                      UNLOCK();
                      if (iVar5 == 0) {
                        FID_conflict__free(piVar9);
                      }
                    }
                    FUN_00554ba0();
                    local_8._0_1_ = 10;
                    uVar15 = 0x5943a5;
                    puVar4 = (undefined4 *)FUN_0051ba00(&local_30);
                    puVar11 = (undefined1 *)*puVar4;
                    *puVar4 = &DAT_00bfe12c;
                    piVar9 = (int *)(local_30 + -8);
                    if (piVar9 != &DAT_00bfe124) {
                      LOCK();
                      iVar5 = *piVar9;
                      *piVar9 = *piVar9 + -1;
                      UNLOCK();
                      if (iVar5 == 0) {
                        FID_conflict__free(piVar9);
                      }
                    }
                    piVar9 = (int *)(local_34 + -8);
                    if (piVar9 != &DAT_00bfe124) {
                      LOCK();
                      iVar5 = *piVar9;
                      *piVar9 = *piVar9 + -1;
                      UNLOCK();
                      if (iVar5 == 0) {
                        FID_conflict__free(piVar9);
                      }
                    }
                  }
                  if (puVar11 != PTR_DAT_00c7ed54) {
                    uVar15 = 0x59440d;
                    iVar5 = FUN_0045c1e0(puVar11);
                    if (iVar5 != 0) {
                      iVar5 = iVar12;
                      if (local_64 < iVar12 + 1) {
                        FUN_00409cf0();
                        iVar5 = local_60;
                      }
                      iVar12 = iVar5 + 1;
                      puVar4 = (undefined4 *)((int)local_68 + iVar5 * 4);
                      local_60 = iVar12;
                      if (puVar4 != (undefined4 *)0x0) {
                        *puVar4 = puVar11;
                        piVar9 = (int *)(puVar11 + -8);
                        if (piVar9 != &DAT_00bfe124) {
                          LOCK();
                          *piVar9 = *piVar9 + 1;
                          UNLOCK();
                        }
                      }
                    }
                  }
                  piVar9 = (int *)(puVar11 + -8);
                  if (piVar9 != &DAT_00bfe124) {
                    LOCK();
                    iVar5 = *piVar9;
                    *piVar9 = *piVar9 + -1;
                    UNLOCK();
                    if (iVar5 == 0) {
                      FID_conflict__free(piVar9);
                    }
                  }
                  uVar10 = uVar10 + 1;
                  iVar5 = *(int *)(param_6 + 0x78);
                } while ((int)uVar10 < *(int *)(*(int *)(iVar5 + 0xc) + 0x20));
              }
              puVar4 = param_3;
              puVar11 = &DAT_00bfe12c;
              local_24 = &DAT_00bfe12c;
              local_8._0_1_ = 0xb;
              FUN_00412f10();
              uVar14 = FUN_004130a0();
              if (*(int *)uVar14 == *(int *)((ulonglong)uVar14 >> 0x20)) {
                iVar5 = 0;
              }
              else {
                uVar15 = 0x5944d4;
                iVar5 = FUN_0045c1e0(*(int *)uVar14);
              }
              piVar9 = (int *)(local_38 + -8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar12 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar12 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              piVar9 = (int *)(local_3c + -8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar12 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar12 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              if (iVar5 == 0) {
                FUN_00554ba0();
                local_8._0_1_ = 0xc;
                FUN_00635a10(&local_44);
                local_8 = CONCAT31(local_8._1_3_,0xd);
                uVar15 = 0x594565;
                puVar6 = (undefined4 *)FUN_00635a10(&local_40);
                puVar11 = (undefined1 *)*puVar6;
                *puVar6 = &DAT_00bfe12c;
                piVar9 = (int *)(local_40 + -8);
                local_24 = puVar11;
                if (piVar9 != &DAT_00bfe124) {
                  LOCK();
                  iVar5 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar5 == 0) {
                    FID_conflict__free(piVar9);
                  }
                }
                piVar9 = (int *)(local_44 + -8);
                if (piVar9 != &DAT_00bfe124) {
                  LOCK();
                  iVar5 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar5 == 0) {
                    FID_conflict__free(piVar9);
                  }
                }
                local_8._0_1_ = 0xb;
                piVar9 = (int *)(local_48 + -8);
                if (piVar9 != &DAT_00bfe124) {
                  LOCK();
                  iVar5 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar5 == 0) {
                    FID_conflict__free(piVar9);
                  }
                }
              }
              uVar16 = 0x5945ea;
              local_54 = operator_new(0xf8);
              FUN_0041b050(&local_68);
              local_50 = (undefined1 *)FUN_00554ba0(&local_58);
              local_8 = CONCAT31(local_8._1_3_,0xf);
              local_4c = local_14 | 1;
              uVar8 = *(undefined4 *)(*(int *)(param_6 + 0x78) + 0xc);
              local_14 = local_4c;
              uVar7 = FUN_006e85c0();
              param_6 = FUN_0058af80(uVar7,local_50,uVar8,&param_1,&local_24,uVar15,uVar16);
              iVar5 = local_1c;
              piVar9 = (int *)(local_1c + 0x18);
              *(int *)(param_6 + 0x10) = local_1c;
              if (*(int *)(local_1c + 0x1c) < *(int *)(local_1c + 0x20) + 1) {
                FUN_00409cf0();
              }
              iVar12 = *(int *)(iVar5 + 0x20);
              *(int *)(iVar5 + 0x20) = iVar12 + 1;
              local_8._0_1_ = 0xb;
              local_8._1_3_ = 0;
              local_14 = local_14 & 0xfffffffe;
              *(int *)(*piVar9 + iVar12 * 4) = param_6;
              piVar9 = (int *)(local_58 + -8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              piVar9 = (int *)(puVar11 + -8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              FUN_0040f7f0();
              FID_conflict__free(local_68);
              uVar10 = (uint)param_4;
              uVar3 = (undefined1)local_8;
            }
          }
        }
        local_8._0_1_ = uVar3;
        LOCK();
        piVar9 = puVar4 + 1;
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar4)();
        }
      }
      local_8._0_1_ = 0;
      piVar9 = (int *)(param_1 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      param_4 = (undefined4 *)(uVar10 + 1);
      uVar3 = (undefined1)local_8;
    } while ((int)param_4 < (int)local_6c);
  }
  local_8._0_1_ = uVar3;
  iVar5 = *(int *)(local_18 + 0x273c) + 1;
  if (((int)*(uint *)(local_18 + 0x2738) < iVar5) &&
     (uVar10 = *(int *)(local_18 + 0x273c) + 9 + iVar5 / 2 & 0xfffffff8,
     *(uint *)(local_18 + 0x2738) != uVar10)) {
    if ((int)uVar10 < 1) {
      FID_conflict__free(*(void **)(local_18 + 0x2734));
      *(undefined4 *)(local_18 + 0x2734) = 0;
    }
    else if (*(int *)(local_18 + 0x2734) == 0) {
      uVar15 = FUN_004c554b();
      *(undefined4 *)(local_18 + 0x2734) = uVar15;
    }
    else {
      uVar15 = FUN_004c553b(*(int *)(local_18 + 0x2734));
      *(undefined4 *)(local_18 + 0x2734) = uVar15;
    }
    *(uint *)(local_18 + 0x2738) = uVar10;
  }
  iVar12 = local_1c;
  iVar5 = *(int *)(local_18 + 0x273c);
  *(int *)(local_18 + 0x273c) = iVar5 + 1;
  *(int *)(*(int *)(local_18 + 0x2734) + iVar5 * 4) = local_1c;
  if (DAT_00c8a5e4 != 0) {
    FUN_005b5fb0();
  }
  FID_conflict__free(local_74);
  ExceptionList = local_10;
  return iVar12;
}

