// rea decompile_all
// name: FUN_0055c570
// address: 0x55c570
// body: available
// range: 0x55c570-0x55d199 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c570(undefined4 *param_1)

{
  byte *pbVar1;
  int *_Memory;
  undefined4 *puVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar11;
  byte *pbVar12;
  int *in_EDX;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  int *piVar16;
  char *pcVar17;
  int iVar18;
  int local_f4;
  int local_f0;
  int local_e4;
  int *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int *local_cc;
  int local_c8;
  byte *local_c4;
  int *local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  void *local_a4;
  uint local_a0;
  int local_9c;
  void *local_98;
  undefined4 local_94;
  int local_90;
  int *local_8c;
  int *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  char *local_7c;
  int local_78;
  int local_74;
  undefined4 *local_70;
  int *local_6c;
  void *local_68;
  char *local_64;
  uint local_60;
  char acStack_3f [6];
  undefined1 auStack_39 [30];
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00711ade;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 0;
  local_b4 = 0;
  local_98 = (void *)0x0;
  local_94 = 0;
  local_90 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_6c = in_EDX;
  FUN_0045c990();
  local_8._0_1_ = 2;
  FUN_00636040();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00635ea0(&local_98,2,0);
  piVar6 = (int *)(local_f4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_a8 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_68 = (void *)0x0;
  local_a4 = (void *)0x0;
  local_b8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_9c = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  local_bc = 0;
  if (0 < (int)param_1[0x19]) {
    local_7c = (char *)0x0;
    do {
      piVar16 = (int *)(local_7c + param_1[0x17]);
      piVar6 = (int *)(PTR_DAT_00c7ed68 + -8);
      local_e0 = piVar16 + 2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar7 = *local_e0;
      *local_e0 = (int)PTR_DAT_00c7ed68;
      UNLOCK();
      piVar6 = (int *)(iVar7 + -8);
      local_88 = piVar16;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_64 = local_1b + 2;
      uVar15 = *piVar16 + 1;
      local_1b[2] = 0;
      if ((int)uVar15 < 0) {
        uVar15 = -uVar15;
        do {
          pcVar17 = local_64;
          local_64 = pcVar17 + -1;
          uVar13 = uVar15 / 10;
          *local_64 = (char)uVar15 + (char)uVar13 * -10 + '0';
          uVar15 = uVar13;
        } while (uVar13 != 0);
        local_64 = pcVar17 + -2;
        *local_64 = '-';
      }
      else {
        do {
          local_64 = local_64 + -1;
          uVar13 = uVar15 / 10;
          *local_64 = (char)uVar15 + (char)uVar13 * -10 + '0';
          uVar15 = uVar13;
        } while (uVar13 != 0);
      }
      iVar7 = -(int)local_64;
      pcVar17 = local_1b + iVar7 + 2;
      piVar6 = (int *)FUN_004bfe22();
      piVar6[1] = (uint)(&uStack_15 + iVar7) & 0xfffffffc;
      local_cc = piVar6 + 2;
      *piVar6 = 0;
      local_ac = local_cc;
      pcVar11 = local_64;
      while ((0 < (int)pcVar17 && (iVar7 = FUN_00443260(), pcVar11 = extraout_ECX, iVar7 != 0))) {
        FUN_0044ecc0();
        pcVar17 = pcVar17 + -1;
        pcVar11 = extraout_ECX_00;
      }
      *(undefined1 *)local_ac = 0;
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00633d10(&local_b0,pcVar11);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar7 = local_b0;
      local_64 = (char *)0x0;
      if (0 < local_90) {
LAB_0055c860:
        piVar16 = (int *)(iVar7 + -8);
        FUN_0040f6b0(&local_d0);
        local_8._0_1_ = 8;
        FUN_006369b0();
        local_8._0_1_ = 10;
        piVar6 = (int *)(local_d0 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar18 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar18 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        if (piVar16 != &DAT_00bfe124) {
          LOCK();
          *piVar16 = *piVar16 + 1;
          UNLOCK();
        }
        puVar8 = (undefined4 *)FUN_006377c0();
        local_8 = CONCAT31(local_8._1_3_,0xb);
        local_c4 = (byte *)*puVar8;
        local_b4 = local_60 | 1;
        iVar18 = 0;
        pbVar12 = local_c4;
LAB_0055c8f7:
        do {
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          if ((char)bVar3 < '\0') {
            if ((*pbVar12 & 0xc0) == 0x80) {
              do {
                pbVar1 = pbVar12 + 1;
                pbVar12 = pbVar12 + 1;
              } while ((*pbVar1 & 0xc0) == 0x80);
              iVar18 = iVar18 + 1;
              goto LAB_0055c8f7;
            }
          }
          else if (bVar3 == 0) goto LAB_0055c926;
          iVar18 = iVar18 + 1;
        } while( true );
      }
LAB_0055cc0c:
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar6 = (int *)(iVar7 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_bc = local_bc + 1;
      local_7c = local_7c + 0x18;
    } while (local_bc < (int)param_1[0x19]);
    if (0 < (int)param_1[0x19]) {
      local_60 = 1;
      local_64 = (char *)0x0;
      do {
        if (**(char **)(param_1[0x17] + 8 + (int)local_64) == '\0') {
          acStack_3f[2] = 0;
          local_7c = acStack_3f + 2;
          uVar15 = local_60;
          if ((int)local_60 < 0) {
            uVar15 = -local_60;
            do {
              pcVar17 = local_7c;
              local_7c = pcVar17 + -1;
              uVar13 = uVar15 / 10;
              *local_7c = (char)uVar15 + (char)uVar13 * -10 + '0';
              uVar15 = uVar13;
            } while (uVar13 != 0);
            local_7c = pcVar17 + -2;
            *local_7c = '-';
          }
          else {
            do {
              local_7c = local_7c + -1;
              uVar13 = uVar15 / 10;
              *local_7c = (char)uVar15 + (char)uVar13 * -10 + '0';
              uVar15 = uVar13;
            } while (uVar13 != 0);
          }
          iVar7 = -(int)local_7c;
          pcVar17 = acStack_3f + iVar7 + 2;
          piVar16 = (int *)FUN_004bfe22();
          piVar16[1] = (uint)(auStack_39 + iVar7) & 0xfffffffc;
          piVar6 = piVar16 + 2;
          *piVar16 = 0;
          local_c0 = piVar6;
          while ((0 < (int)pcVar17 && (iVar7 = FUN_00443260(), iVar7 != 0))) {
            FUN_0044ecc0();
            pcVar17 = pcVar17 + -1;
          }
          *(undefined1 *)local_c0 = 0;
          local_8 = CONCAT31(local_8._1_3_,0xc);
          puVar8 = (undefined4 *)FUN_00637690();
          iVar7 = local_6c[2];
          iVar18 = iVar7 + 1;
          if (local_6c[1] < iVar18) {
            if (iVar18 < 0) {
              iVar18 = iVar7 + 2;
            }
            uVar15 = iVar7 + 9 + (iVar18 >> 1) & 0xfffffff8;
            if (local_6c[1] != uVar15) {
              if ((int)uVar15 < 1) {
                FID_conflict__free((void *)*local_6c);
                *local_6c = 0;
              }
              else if (*local_6c == 0) {
                iVar7 = FUN_004c554b();
                *local_6c = iVar7;
              }
              else {
                iVar7 = FUN_004c553b(*local_6c);
                *local_6c = iVar7;
              }
              local_6c[1] = uVar15;
            }
          }
          iVar7 = local_6c[2];
          local_6c[2] = iVar7 + 1;
          puVar2 = (undefined4 *)(*local_6c + iVar7 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar8;
            *puVar8 = &DAT_00bfe12c;
          }
          _Memory = (int *)(local_f0 + -8);
          if (_Memory != &DAT_00bfe124) {
            LOCK();
            iVar7 = *_Memory;
            *_Memory = *_Memory + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(_Memory);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          local_8c = piVar6;
          if (piVar16 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar16);
            }
          }
        }
        uVar15 = local_60 + 1;
        local_64 = (char *)((int)local_64 + 0x18);
        bVar4 = (int)local_60 < (int)param_1[0x19];
        local_60 = uVar15;
      } while (bVar4);
    }
  }
  if ((local_6c[2] == 0) && (iVar7 = 0, 0 < local_78)) {
    do {
      FUN_0040f6b0(&stack0xfffffe5c,iVar7);
      FUN_00548e50();
      local_8 = CONCAT31(local_8._1_3_,0xd);
      uVar15 = local_70[5];
      if (((uint)param_1[0xd] <= uVar15) &&
         ((uVar15 != param_1[0xd] || ((uint)param_1[0xc] < (uint)local_70[4])))) {
        param_1[0xc] = local_70[4];
        param_1[0xd] = uVar15;
      }
      if (param_1[0xe] == 0) {
        param_1[0xe] = local_70[6];
      }
      else if (param_1[0xe] != local_70[6]) {
        FUN_0045c990();
        iVar18 = local_6c[2];
        iVar9 = iVar18 + 1;
        if (local_6c[1] < iVar9) {
          if (iVar9 < 0) {
            iVar9 = iVar18 + 2;
          }
          uVar15 = iVar18 + 9 + (iVar9 >> 1) & 0xfffffff8;
          if (local_6c[1] != uVar15) {
            if ((int)uVar15 < 1) {
              FID_conflict__free((void *)*local_6c);
              *local_6c = 0;
            }
            else if (*local_6c == 0) {
              iVar18 = FUN_004c554b();
              *local_6c = iVar18;
            }
            else {
              iVar18 = FUN_004c553b(*local_6c);
              *local_6c = iVar18;
            }
            local_6c[1] = uVar15;
          }
        }
        iVar18 = local_6c[2];
        local_6c[2] = iVar18 + 1;
        puVar8 = (undefined4 *)(*local_6c + iVar18 * 4);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = local_80;
          local_80 = &DAT_00bfe12c;
        }
        piVar6 = (int *)(local_80 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar18 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar18 == 0) {
            FID_conflict__free(piVar6);
          }
        }
      }
      if (param_1[0xf] == 0) {
        param_1[0xf] = local_70[8];
      }
      else if (param_1[0xf] != local_70[8]) {
        FUN_0045c990();
        iVar18 = local_6c[2];
        iVar9 = iVar18 + 1;
        if (local_6c[1] < iVar9) {
          if (iVar9 < 0) {
            iVar9 = iVar18 + 2;
          }
          uVar15 = iVar18 + 9 + (iVar9 >> 1) & 0xfffffff8;
          if (local_6c[1] != uVar15) {
            if ((int)uVar15 < 1) {
              FID_conflict__free((void *)*local_6c);
              *local_6c = 0;
            }
            else if (*local_6c == 0) {
              iVar18 = FUN_004c554b();
              *local_6c = iVar18;
            }
            else {
              iVar18 = FUN_004c553b(*local_6c);
              *local_6c = iVar18;
            }
            local_6c[1] = uVar15;
          }
        }
        iVar18 = local_6c[2];
        local_6c[2] = iVar18 + 1;
        puVar8 = (undefined4 *)(*local_6c + iVar18 * 4);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = local_84;
          local_84 = &DAT_00bfe12c;
        }
        piVar6 = (int *)(local_84 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar18 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar18 == 0) {
            FID_conflict__free(piVar6);
          }
        }
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_70 != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_70 + 1;
        iVar18 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)*local_70)();
        }
      }
      local_78 = local_9c;
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_9c);
    local_68 = local_a4;
  }
  iVar7 = local_78;
  iVar18 = 0;
  pvVar14 = local_68;
  if (0 < local_78) {
    do {
      piVar6 = (int *)(*(int *)((int)pvVar14 + iVar18 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar6);
          pvVar14 = local_68;
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar7);
  }
  FID_conflict__free(pvVar14);
  pvVar14 = local_98;
  iVar7 = 0;
  if (0 < local_90) {
    do {
      piVar6 = (int *)(*(int *)((int)pvVar14 + iVar7 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar18 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar18 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_90);
  }
  FID_conflict__free(pvVar14);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_0055c926:
  iVar18 = iVar18 + -1;
  local_d4 = local_74;
  local_60 = local_b4;
  if (-1 < iVar18) {
    while( true ) {
      iVar9 = FUN_00443260();
      iVar10 = FUN_00443260();
      if ((iVar9 - iVar10 != 0) && ((iVar9 - iVar10 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
      if ((iVar9 == 0) || (iVar18 = iVar18 + -1, iVar18 < 0)) goto LAB_0055c976;
    }
    FUN_00637690();
    local_60 = local_60 | 2;
    cVar5 = FUN_006326f0();
    if (cVar5 == '\0') {
      bVar4 = false;
      goto LAB_0055c978;
    }
  }
LAB_0055c976:
  bVar4 = true;
LAB_0055c978:
  if ((local_60 & 2) != 0) {
    local_60 = local_60 & 0xfffffffd;
    piVar6 = (int *)(local_d8 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  local_8 = 10;
  local_b4 = local_60 & 0xfffffffe;
  local_c8 = local_dc;
  piVar6 = (int *)(local_dc + -8);
  local_60 = local_b4;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar18 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (bVar4) {
    piVar6 = (int *)(local_74 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    LOCK();
    iVar18 = *local_e0;
    *local_e0 = local_74;
    UNLOCK();
    piVar6 = (int *)(iVar18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_88[1] = *local_88;
    local_88 = (int *)FUN_0040f6b0(&local_e4);
    iVar18 = local_78 + 1;
    if ((int)local_b8 < iVar18) {
      iVar9 = iVar18;
      if (iVar18 < 0) {
        iVar9 = local_78 + 2;
      }
      uVar15 = local_78 + 9 + (iVar9 >> 1) & 0xfffffff8;
      if (local_b8 != uVar15) {
        if ((int)uVar15 < 1) {
          FID_conflict__free(local_68);
          local_a4 = (void *)0x0;
          local_b8 = uVar15;
          local_a0 = uVar15;
          local_68 = local_a4;
        }
        else if (local_68 == (void *)0x0) {
          local_a4 = (void *)FUN_004c554b();
          local_b8 = uVar15;
          local_a0 = uVar15;
          local_68 = local_a4;
        }
        else {
          local_a4 = (void *)FUN_004c553b(local_68);
          local_b8 = uVar15;
          local_a0 = uVar15;
          local_68 = local_a4;
        }
      }
    }
    piVar6 = (int *)((int)local_68 + local_78 * 4);
    if (piVar6 != (int *)0x0) {
      *piVar6 = *local_88;
      *local_88 = (int)&DAT_00bfe12c;
    }
    piVar6 = (int *)(local_e4 + -8);
    local_9c = iVar18;
    local_78 = iVar18;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = (int *)(local_74 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar18 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    goto LAB_0055cc0c;
  }
  piVar6 = (int *)(local_74 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar18 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_64 = (char *)((int)local_64 + 1);
  if (local_90 <= (int)local_64) goto LAB_0055cc0c;
  goto LAB_0055c860;
}

