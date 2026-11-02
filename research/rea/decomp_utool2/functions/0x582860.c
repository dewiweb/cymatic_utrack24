// rea decompile_all
// name: FUN_00582860
// address: 0x582860
// body: available
// range: 0x582860-0x58342f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00582860(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined **ppuVar8;
  int *piVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  int in_stack_0000003c;
  undefined **in_stack_00000040;
  undefined *in_stack_00000044;
  int in_stack_00000048;
  int *in_stack_0000004c;
  int *in_stack_00000050;
  undefined1 local_104 [48];
  undefined1 local_d4 [20];
  void *local_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  void *pvStack_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8;
  undefined3 uStack_a7;
  int local_a4;
  int local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined *local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 *local_70;
  undefined4 *local_6c;
  undefined **local_68;
  undefined **local_64;
  int *local_60;
  int local_5c;
  undefined1 local_55;
  int *local_54;
  undefined1 local_4c [8];
  undefined **local_44 [2];
  undefined1 *local_3c [3];
  void *local_30 [3];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00712d8e;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = in_stack_00000034;
  local_7c = in_stack_00000038;
  local_a4 = in_stack_0000003c;
  local_64 = in_stack_00000040;
  local_88 = in_stack_00000044;
  local_8c = in_stack_00000048;
  local_8 = 0;
  iVar3 = *(int *)ThreadLocalStoragePointer;
  if ((*(int *)(iVar3 + 4) < DAT_00cfff18) && (FUN_004c0391(), DAT_00cfff18 == -1)) {
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0045c990();
    _atexit((_func_4879 *)&LAB_00729f10);
    FUN_004c0352(&DAT_00cfff18);
  }
  if ((*(int *)(iVar3 + 4) < DAT_00cfff1c) && (FUN_004c0391(), DAT_00cfff1c == -1)) {
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0045c990();
    _atexit((_func_4879 *)&LAB_00729ee0);
    FUN_004c0352(&DAT_00cfff1c);
  }
  if ((*(int *)(iVar3 + 4) < DAT_00cfff10) && (FUN_004c0391(), DAT_00cfff10 == -1)) {
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0045c990();
    _atexit((_func_4879 *)&LAB_00729eb0);
    FUN_004c0352(&DAT_00cfff10);
  }
  if (in_stack_0000004c != (int *)0x0) {
    piVar9 = (int *)(*in_stack_0000004c + -8);
    *in_stack_0000004c = (int)&DAT_00bfe12c;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar9);
      }
    }
  }
  if (in_stack_00000050 != (int *)0x0) {
    piVar9 = (int *)(*in_stack_00000050 + -8);
    *in_stack_00000050 = (int)&DAT_00bfe12c;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar9);
      }
    }
  }
  FUN_00631da0();
  local_8._0_1_ = 4;
  if (**local_64 != '\0') {
    FUN_00631cf0(local_d4,local_64);
    FUN_00631ef0();
    FUN_00636570();
  }
  local_70 = &DAT_00bfe12c;
  local_b0 = 0;
  local_c0 = (void *)0x0;
  uStack_bc = 0;
  uStack_b8 = 0;
  pvStack_b4 = (void *)0x0;
  local_ac = 0;
  _local_a8 = CONCAT31(uStack_a7,1);
  local_8._0_1_ = 6;
  local_98 = (int *)FUN_00631af0(1,0,0,&DAT_00bfe12c,0,&local_c0,&local_60);
  local_8 = CONCAT31(local_8._1_3_,7);
  if (local_98 == (int *)0x0) {
    FUN_00582630(local_104);
    if ((int)local_60 < 0) {
      iVar3 = FUN_006104a0();
      *(undefined1 *)(iVar3 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    FUN_004557e0();
    local_8._0_1_ = 0x1b;
    FUN_00637690();
    FUN_006377c0();
    local_8._0_1_ = 0x1d;
    ppuVar8 = local_64 + -2;
    if (ppuVar8 != (undefined **)&DAT_00bfe124) {
      LOCK();
      puVar10 = *ppuVar8;
      *ppuVar8 = *ppuVar8 + -1;
      UNLOCK();
      if (puVar10 == (undefined *)0x0) {
        FID_conflict__free(ppuVar8);
      }
    }
    uVar12 = 0;
    uVar11 = uStack_b8;
    if (0 < (int)uStack_b8) {
      bVar13 = uStack_b8 != 0;
      do {
        if (bVar13) {
          ppuVar8 = (undefined **)((int)local_c0 + uVar12 * 4);
        }
        else {
          ppuVar8 = &PTR_DAT_00c7ed68;
        }
        uVar7 = FUN_0062c730(*ppuVar8);
        uVar11 = uStack_b8;
        if (uVar7 < local_ac) {
          local_64 = (undefined **)((int)pvStack_b4 + uVar7 * 4);
        }
        else {
          local_64 = &PTR_DAT_00c7ed68;
        }
        local_6c = (undefined4 *)&stack0xfffffee8;
        local_60 = (int *)&stack0xfffffee4;
        if (uVar12 < uStack_b8) {
          ppuVar8 = (undefined **)((int)local_c0 + uVar12 * 4);
        }
        else {
          ppuVar8 = &PTR_DAT_00c7ed68;
        }
        puVar10 = *ppuVar8;
        piVar9 = (int *)(puVar10 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        FUN_006377c0(puVar10);
        FUN_00637730();
        FUN_006377c0();
        local_8._0_1_ = 0x1e;
        FUN_00636ec0();
        local_8._0_1_ = 0x1d;
        piVar9 = (int *)(local_94 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        uVar12 = uVar12 + 1;
        bVar13 = uVar12 < uVar11;
      } while ((int)uVar12 < (int)uVar11);
    }
    FUN_005893a0();
    piVar9 = (int *)(local_5c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    local_55 = 0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*local_98 + 0x48))();
    local_70 = (undefined1 *)*puVar2;
    *puVar2 = &DAT_00bfe12c;
    ppuVar8 = local_64 + -2;
    if (ppuVar8 != (undefined **)&DAT_00bfe124) {
      LOCK();
      puVar10 = *ppuVar8;
      *ppuVar8 = *ppuVar8 + -1;
      UNLOCK();
      if (puVar10 == (undefined *)0x0) {
        FID_conflict__free(ppuVar8);
      }
    }
    FUN_00632020();
    local_8._0_1_ = 8;
    if (*(code **)(*local_54 + 0x44) == FUN_004133b0) {
      FUN_00582630(local_104,local_78);
    }
    else {
      local_64 = (undefined **)(**(code **)(*local_54 + 0x18))();
      if (local_64 != (undefined **)0x0) {
        LOCK();
        local_64[1] = local_64[1] + 1;
        UNLOCK();
      }
      local_68 = local_64 + 2;
      local_44[0] = &PTR_vftable_00c7ed4c;
      local_3c[0] = &DAT_00bfe12c;
      local_60 = (int *)&DAT_00bfe12c;
      piVar9 = &local_5c;
      puVar2 = &DAT_00cfff08;
      FUN_0061f730(piVar9,&DAT_00cfff08);
      FUN_0061f850(piVar9,puVar2);
      local_8._0_1_ = 0xc;
      FUN_00636cf0(local_24,&local_5c,local_44);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_006318f0(&local_80);
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      piVar9 = (int *)(local_5c + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      (**(code **)(*local_44[0] + 0x54))(local_3c);
      local_8._0_1_ = 0x12;
      FUN_00631980(&DAT_00cfff08);
      iVar3 = FUN_00448730(local_80);
      if (iVar3 != 0) {
        FUN_00582630(local_104,local_78);
        local_44[0] = &PTR_vftable_00c7ed4c;
        local_3c[0] = &DAT_00bfe12c;
        local_60 = (int *)&DAT_00bfe12c;
        piVar9 = &local_5c;
        FUN_0061f730(piVar9);
        FUN_0061f850(piVar9);
        local_8._0_1_ = 0x15;
        FUN_00636cf0(local_24,&local_5c);
        local_8._0_1_ = 0x16;
        FUN_006318f0();
        (**(code **)(*local_24[0] + 0x54))();
        piVar9 = (int *)(local_5c + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        (**(code **)(*local_44[0] + 0x54))(local_3c);
        FUN_00631920();
        if (in_stack_0000004c != (int *)0x0) {
          FUN_00637b90(&local_80);
        }
        if (in_stack_00000050 != (int *)0x0) {
          FUN_00637b90(&local_74);
        }
        piVar9 = (int *)(local_74 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar9);
          }
        }
LAB_005830ea:
        piVar9 = (int *)(local_80 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        if (local_64 != (undefined **)0x0) {
          LOCK();
          ppuVar8 = local_64 + 1;
          puVar10 = *ppuVar8;
          *ppuVar8 = *ppuVar8 + -1;
          UNLOCK();
          if (puVar10 == (undefined *)0x1) {
            (**(code **)*local_64)(1);
          }
        }
        (**(code **)(*local_54 + 0x54))(local_4c);
        local_55 = 0;
        (**(code **)*local_98)(1);
        uVar11 = uStack_b8;
        goto LAB_0058333e;
      }
      local_88 = (undefined *)0x0;
      if (0 < (int)local_68[2]) {
        local_74 = 0;
        do {
          puVar10 = local_88;
          piVar9 = (int *)FUN_00631840(&local_90);
          iVar3 = *piVar9;
          local_60 = (int *)(iVar3 + -8);
          if (local_60 != &DAT_00bfe124) {
            LOCK();
            *local_60 = *local_60 + 1;
            UNLOCK();
          }
          local_8._0_1_ = 0x17;
          piVar9 = (int *)(local_90 + -8);
          local_8c = iVar3;
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(piVar9);
            }
          }
          ppuVar8 = local_68;
          if ((((iVar3 != DAT_00cfff08) &&
               (iVar4 = FUN_00448730(iVar3), ppuVar8 = local_68, iVar4 != 0)) &&
              (iVar3 != DAT_00cfff0c)) &&
             (iVar4 = FUN_00448730(iVar3), ppuVar8 = local_68, iVar4 != 0)) {
            if ((iVar3 == DAT_00cfff14) ||
               (iVar3 = FUN_00448730(iVar3), ppuVar8 = local_68, iVar3 == 0)) {
              if (puVar10 < local_68[2]) {
                local_44[0] = (undefined **)(*local_68 + local_74 + 8);
              }
              else {
                local_44[0] = &PTR_PTR_00c7ed58;
              }
              local_44[0] = (undefined **)*local_44[0];
              (**(code **)(*local_44[0] + 0x58))(local_3c);
              local_8._0_1_ = 0x18;
              if ((*(code **)(*local_44[0] + 0x48) == FUN_004133b0) || (local_a4 == 0)) {
                FUN_00582630(local_104,local_78,&local_70);
                FUN_00631920();
                (**(code **)(*local_44[0] + 0x54))(local_3c);
                FUN_00637c10();
                goto LAB_005830ea;
              }
              iVar3 = 0;
              local_5c = 0;
              while( true ) {
                iVar4 = local_5c;
                local_84 = iVar3;
                iVar5 = (**(code **)(*local_44[0] + 0x1c))(local_3c);
                if (iVar5 == 0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = *(int *)(iVar5 + 8);
                }
                if (iVar5 <= iVar4) break;
                piVar9 = (int *)(**(code **)(*local_44[0] + 0x1c))();
                if (*(code **)(**(int **)(*piVar9 + iVar3) + 0x44) != FUN_004133b0) {
                  piVar9 = (int *)(**(code **)(*local_44[0] + 0x1c))(local_3c);
                  puVar2 = (undefined4 *)
                           (**(code **)(**(int **)(*piVar9 + iVar3) + 0x18))
                                     ((undefined4 *)(*piVar9 + iVar3) + 2);
                  if (puVar2 != (undefined4 *)0x0) {
                    LOCK();
                    puVar2[1] = puVar2[1] + 1;
                    UNLOCK();
                  }
                  local_6c = puVar2;
                  FUN_00631a80(1);
                  local_8._0_1_ = 0x1a;
                  iVar3 = 0;
                  if (0 < (int)puVar2[4]) {
                    do {
                      FUN_006318f0(&local_a0);
                      uVar6 = FUN_00631840(&local_94,iVar3);
                      FUN_00631980(uVar6,&local_a0);
                      piVar9 = (int *)(local_94 + -8);
                      if (piVar9 != &DAT_00bfe124) {
                        LOCK();
                        iVar4 = *piVar9;
                        *piVar9 = *piVar9 + -1;
                        UNLOCK();
                        if (iVar4 == 0) {
                          FID_conflict__free(piVar9);
                        }
                      }
                      piVar9 = (int *)(local_a0 + -8);
                      if (piVar9 != &DAT_00bfe124) {
                        LOCK();
                        iVar4 = *piVar9;
                        *piVar9 = *piVar9 + -1;
                        UNLOCK();
                        if (iVar4 == 0) {
                          FID_conflict__free(piVar9);
                        }
                      }
                      iVar3 = iVar3 + 1;
                    } while (iVar3 < (int)puVar2[4]);
                  }
                  FUN_00419dc0(local_30);
                  FUN_0040f7f0();
                  FID_conflict__free(local_24[0]);
                  FUN_0040f7f0();
                  FID_conflict__free(local_30[0]);
                  local_8._0_1_ = 0x18;
                  iVar3 = local_84;
                  if (local_6c != (undefined4 *)0x0) {
                    LOCK();
                    piVar9 = local_6c + 1;
                    iVar4 = *piVar9;
                    *piVar9 = *piVar9 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)*local_6c)(1);
                      iVar3 = local_84;
                    }
                  }
                }
                local_5c = local_5c + 1;
                iVar3 = iVar3 + 0x10;
              }
              (**(code **)(*local_44[0] + 0x54))(local_3c);
              puVar10 = local_88;
              ppuVar8 = local_68;
            }
            else {
              FUN_006318f0();
              FUN_00631980(&local_8c);
              piVar9 = (int *)(local_9c + -8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar3 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar3 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
            }
          }
          local_8._0_1_ = 0x12;
          if (local_60 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *local_60;
            *local_60 = *local_60 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(local_60);
            }
          }
          local_74 = local_74 + 0x18;
          local_88 = puVar10 + 1;
        } while ((int)local_88 < (int)ppuVar8[2]);
      }
      piVar9 = (int *)(local_80 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      if (local_64 != (undefined **)0x0) {
        LOCK();
        ppuVar8 = local_64 + 1;
        puVar10 = *ppuVar8;
        *ppuVar8 = *ppuVar8 + -1;
        UNLOCK();
        if (puVar10 == (undefined *)0x1) {
          (**(code **)*local_64)();
        }
      }
    }
    (**(code **)(*local_54 + 0x54))();
    local_55 = 1;
    (**(code **)*local_98)(1);
    uVar11 = uStack_b8;
  }
LAB_0058333e:
  pvVar1 = pvStack_b4;
  iVar3 = 0;
  if (0 < (int)local_ac) {
    do {
      piVar9 = (int *)(*(int *)((int)pvVar1 + iVar3 * 4) + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      iVar3 = iVar3 + 1;
      uVar11 = uStack_b8;
    } while (iVar3 < (int)local_ac);
  }
  FID_conflict__free(pvStack_b4);
  iVar3 = 0;
  if (0 < (int)uVar11) {
    do {
      piVar9 = (int *)(*(int *)((int)local_c0 + iVar3 * 4) + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar11);
  }
  FID_conflict__free(local_c0);
  piVar9 = (int *)(local_70 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_00636570();
  FUN_00636570();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

