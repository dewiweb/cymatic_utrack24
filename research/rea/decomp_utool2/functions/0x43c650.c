// rea decompile_all
// name: FUN_0043c650
// address: 0x43c650
// body: available
// range: 0x43c650-0x43cef5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c650(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  int local_ec [2];
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  char *local_90;
  char *local_8c [2];
  int *local_84;
  int local_80;
  undefined1 local_5d [30];
  char local_3f [36];
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fe89a;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  local_8 = 0;
  local_a0 = in_ECX;
  FUN_0045c990(&DAT_00c146fc,local_14);
  puVar1 = (undefined4 *)FUN_0062a9c0(&local_94,"NumCuePoints",local_8c);
  iVar2 = FID_conflict__atoi((char *)*puVar1);
  piVar5 = (int *)(local_94 + -8);
  local_9c = iVar2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_8c[0] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (0 < iVar2) {
    uVar10 = (iVar2 + -1) * 0x18 + 0x1c;
    if (in_ECX[1] != uVar10) {
      if (uVar10 == 0) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
        in_ECX[1] = 0;
      }
      else {
        if (*in_ECX == 0) {
          FID_conflict__free((void *)0x0);
          iVar2 = FUN_004c5556(uVar10,1);
          *in_ECX = iVar2;
        }
        else {
          iVar2 = FUN_004c553b(*in_ECX,uVar10);
          *in_ECX = iVar2;
          uVar6 = in_ECX[1];
          if (uVar6 < uVar10) {
            _memset((void *)(iVar2 + uVar6),0,uVar10 - uVar6);
          }
        }
        in_ECX[1] = uVar10;
      }
    }
    piVar5 = (int *)*in_ECX;
    *piVar5 = local_9c;
    iVar2 = FUN_006104a0();
    FUN_004557e0(local_5d + -iVar2);
    local_8 = 1;
    local_8c[0] = (char *)0x0;
    local_bc = 0;
    if (0 < local_9c) {
      local_84 = piVar5 + 3;
      do {
        local_3f[2] = 0;
        pcVar11 = local_3f + 2;
        uVar10 = local_bc;
        if ((int)local_bc < 0) {
          uVar10 = -local_bc;
          do {
            pcVar9 = pcVar11;
            pcVar11 = pcVar9 + -1;
            uVar6 = uVar10 / 10;
            *pcVar11 = (char)uVar10 + (char)uVar6 * -10 + '0';
            uVar10 = uVar6;
          } while (uVar6 != 0);
          pcVar11 = pcVar9 + -2;
          *pcVar11 = '-';
        }
        else {
          do {
            pcVar11 = pcVar11 + -1;
            uVar6 = uVar10 / 10;
            *pcVar11 = (char)uVar10 + (char)uVar6 * -10 + '0';
            uVar10 = uVar6;
          } while (uVar6 != 0);
        }
        FUN_004557e0(local_3f + (2 - (int)pcVar11));
        local_8._0_1_ = 2;
        FUN_00637690(&local_a4);
        local_8._0_1_ = 4;
        piVar5 = (int *)(local_a4 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        FUN_0045c990(&DAT_00c146fc);
        piVar8 = &local_a8;
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar5 = (int *)(local_98 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        puVar1 = (undefined4 *)FUN_006377c0(local_98);
        puVar1 = (undefined4 *)FUN_0062a9c0(local_ec,*puVar1,piVar8);
        local_80 = FID_conflict__atoi((char *)*puVar1);
        piVar5 = (int *)(local_ec[0] + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        piVar5 = (int *)(local_c8 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_8._0_1_ = 4;
        piVar5 = (int *)(local_a8 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        iVar2 = local_98;
        pcVar11 = local_1b + 2;
        local_1b[2] = 0;
        pcVar9 = local_8c[0];
        if ((int)local_8c[0] < 0) {
          uVar10 = -(int)local_8c[0];
          do {
            pcVar9 = pcVar11;
            pcVar11 = pcVar9 + -1;
            uVar6 = uVar10 / 10;
            *pcVar11 = (char)uVar10 + (char)uVar6 * -10 + '0';
            uVar10 = uVar6;
          } while (uVar6 != 0);
          pcVar11 = pcVar9 + -2;
          *pcVar11 = '-';
        }
        else {
          do {
            pcVar11 = pcVar11 + -1;
            pcVar7 = (char *)((uint)pcVar9 / 10);
            *pcVar11 = (char)pcVar9 + (char)pcVar7 * -10 + '0';
            pcVar9 = pcVar7;
            local_90 = pcVar11;
          } while (pcVar7 != (char *)0x0);
        }
        FUN_004557e0(local_1b + (2 - (int)pcVar11));
        piVar8 = &local_ac;
        local_8 = CONCAT31(local_8._1_3_,6);
        piVar5 = (int *)(iVar2 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        puVar1 = (undefined4 *)FUN_006377c0(iVar2);
        puVar1 = (undefined4 *)FUN_0062a9c0(&local_c0,*puVar1,piVar8);
        local_90 = (char *)FID_conflict__atoi((char *)*puVar1);
        piVar8 = (int *)(local_c0 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_c4 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        piVar8 = (int *)(local_ac + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        if ((int)local_8c[0] < (int)local_90) {
          local_8c[0] = local_90;
        }
        local_8c[0] = local_8c[0] + 1;
        local_84[-1] = (int)local_90;
        piVar8 = &local_94;
        local_84[-2] = local_80;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        puVar1 = (undefined4 *)FUN_006377c0(iVar2);
        puVar1 = (undefined4 *)FUN_0062a9c0(&local_cc,*puVar1,piVar8);
        iVar3 = FID_conflict__atoi((char *)*puVar1);
        *local_84 = iVar3;
        piVar8 = (int *)(local_cc + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_d0 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_0045c990(&DAT_00c146fc);
        local_8 = CONCAT31(local_8._1_3_,7);
        piVar8 = &local_b0;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        puVar1 = (undefined4 *)FUN_006377c0(iVar2);
        puVar1 = (undefined4 *)FUN_0062a9c0(&local_d4,*puVar1,piVar8);
        iVar3 = FID_conflict__atoi((char *)*puVar1);
        local_84[1] = iVar3;
        piVar8 = (int *)(local_d4 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_d8 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8._0_1_ = 4;
        piVar8 = (int *)(local_b0 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_0045c990(&DAT_00c146fc);
        local_8 = CONCAT31(local_8._1_3_,8);
        piVar8 = &local_b4;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        puVar1 = (undefined4 *)FUN_006377c0(iVar2);
        puVar1 = (undefined4 *)FUN_0062a9c0(&local_dc,*puVar1,piVar8);
        iVar3 = FID_conflict__atoi((char *)*puVar1);
        local_84[2] = iVar3;
        piVar8 = (int *)(local_dc + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_e0 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8._0_1_ = 4;
        piVar8 = (int *)(local_b4 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_0045c990(&DAT_00c146fc);
        local_8 = CONCAT31(local_8._1_3_,9);
        piVar8 = &local_b8;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        puVar1 = (undefined4 *)FUN_006377c0(iVar2);
        puVar1 = (undefined4 *)FUN_0062a9c0(&local_e4,*puVar1,piVar8);
        iVar2 = FID_conflict__atoi((char *)*puVar1);
        piVar8 = local_84;
        piVar4 = (int *)(local_e4 + -8);
        local_84[3] = iVar2;
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        piVar4 = local_a0 + -2;
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        piVar4 = (int *)(local_b8 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_84 = piVar8 + 6;
        local_bc = local_bc + 1;
      } while ((int)local_bc < local_9c);
    }
    piVar5 = (int *)(local_94 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

