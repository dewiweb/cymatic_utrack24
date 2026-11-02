// rea decompile_all
// name: FUN_0054d140
// address: 0x54d140
// body: available
// range: 0x54d140-0x54d9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054d140(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  char *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  char *local_44;
  undefined4 local_40;
  int local_3c;
  char acStack_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007100b8;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_00410ea0(&local_50);
  local_8 = 0;
  FUN_00516da0(2,uVar2);
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_50 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  uVar2 = FUN_0054aff0(&local_58);
  local_8 = 1;
  uVar2 = FUN_00637690(uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00516da0(0,uVar2);
  piVar3 = (int *)(local_54 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
      piVar3 = extraout_ECX;
    }
  }
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_58 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
      piVar3 = extraout_ECX_00;
    }
  }
  local_3c = FUN_00516d10(piVar3);
  piVar3 = (int *)FUN_00516c80();
  FUN_0045c990("Index");
  if (piVar3[2] == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)*piVar3;
  }
  *puVar8 = 1;
  if (piVar3[2] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)*piVar3;
  }
  piVar7 = (int *)(local_5c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 4) = local_5c;
  UNLOCK();
  piVar6 = (int *)(iVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  FUN_0045c990(&DAT_0073dda8);
  if ((uint)piVar3[2] < 2) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(*piVar3 + 4);
  }
  *puVar8 = 1;
  if ((uint)piVar3[2] < 2) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar3 + 4);
  }
  piVar7 = (int *)(local_60 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 4) = local_60;
  UNLOCK();
  piVar6 = (int *)(iVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  FUN_0045c990("Length");
  if ((uint)piVar3[2] < 3) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(*piVar3 + 8);
  }
  *puVar8 = 1;
  if ((uint)piVar3[2] < 3) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar3 + 8);
  }
  piVar7 = (int *)(local_64 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 4) = local_64;
  UNLOCK();
  piVar6 = (int *)(iVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  FUN_0045c990("Start mode");
  if ((uint)piVar3[2] < 4) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(*piVar3 + 0xc);
  }
  *puVar8 = 1;
  if ((uint)piVar3[2] < 4) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar3 + 0xc);
  }
  piVar3 = (int *)(local_68 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar5 + 4);
  *(int *)(iVar5 + 4) = local_68;
  UNLOCK();
  piVar7 = (int *)(iVar1 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  uVar10 = 0;
  iVar5 = *(int *)(local_4c + 0xc);
  if (0 < *(int *)(iVar5 + 0x20)) {
    do {
      if ((((int)uVar10 < 0) || ((int)*(uint *)(iVar5 + 0x20) <= (int)uVar10)) ||
         (*(uint *)(iVar5 + 0x20) <= uVar10)) {
        local_40 = 0;
      }
      else {
        local_40 = *(undefined4 *)(*(int *)(iVar5 + 0x18) + uVar10 * 4);
      }
      operator_new(0xc);
      iVar1 = local_3c;
      local_8 = 3;
      piVar3 = (int *)FUN_00516b80(*(undefined4 *)(local_3c + 8));
      local_8 = 0xffffffff;
      iVar5 = *(int *)(iVar1 + 0x14);
      iVar4 = iVar5 + 1;
      iVar12 = iVar1;
      local_70 = piVar3;
      if ((int)*(uint *)(iVar1 + 0x10) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar5 + 2;
        }
        uVar11 = iVar5 + 9 + (iVar4 >> 1) & 0xfffffff8;
        iVar12 = local_3c;
        if (*(uint *)(iVar1 + 0x10) != uVar11) {
          if ((int)uVar11 < 1) {
            FID_conflict__free(*(void **)(local_3c + 0xc));
            *(undefined4 *)(local_3c + 0xc) = 0;
          }
          else if (*(int *)(local_3c + 0xc) == 0) {
            uVar2 = FUN_004c554b();
            *(undefined4 *)(local_3c + 0xc) = uVar2;
          }
          else {
            uVar2 = FUN_004c553b(*(int *)(local_3c + 0xc),uVar11 * 4);
            *(undefined4 *)(local_3c + 0xc) = uVar2;
          }
          *(uint *)(local_3c + 0x10) = uVar11;
          iVar12 = local_3c;
        }
      }
      iVar5 = *(int *)(iVar12 + 0x14);
      uVar10 = uVar10 + 1;
      acStack_1b[2] = 0;
      *(int *)(iVar12 + 0x14) = iVar5 + 1;
      *(int **)(*(int *)(iVar12 + 0xc) + iVar5 * 4) = piVar3;
      local_44 = acStack_1b + 2;
      uVar11 = uVar10;
      if ((int)uVar10 < 0) {
        uVar11 = -uVar10;
        do {
          pcVar13 = local_44;
          local_44 = pcVar13 + -1;
          uVar9 = uVar11 / 10;
          *local_44 = (char)uVar11 + (char)uVar9 * -10 + '0';
          uVar11 = uVar9;
        } while (uVar9 != 0);
        local_44 = pcVar13 + -2;
        *local_44 = '-';
      }
      else {
        do {
          local_44 = local_44 + -1;
          uVar9 = uVar11 / 10;
          *local_44 = (char)uVar11 + (char)uVar9 * -10 + '0';
          uVar11 = uVar9;
        } while (uVar9 != 0);
      }
      iVar5 = -(int)local_44;
      pcVar13 = acStack_1b + iVar5 + 2;
      piVar3 = (int *)FUN_004bfe22(((uint)(&uStack_15 + iVar5) & 0xfffffffc) + 0xb);
      piVar3[1] = (uint)(&uStack_15 + iVar5) & 0xfffffffc;
      *piVar3 = 0;
      local_48 = piVar3 + 2;
      local_6c = local_44;
      while ((0 < (int)pcVar13 && (iVar5 = FUN_00443260(), iVar5 != 0))) {
        FUN_0044ecc0(iVar5);
        pcVar13 = pcVar13 + -1;
      }
      piVar7 = local_70;
      *(undefined1 *)local_48 = 0;
      if (local_70[2] == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = *(undefined4 **)*local_70;
      }
      *puVar8 = 0;
      if (local_70[2] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)*local_70;
      }
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *(int *)(iVar5 + 4);
      *(int *)(iVar5 + 4) = (int)(piVar3 + 2);
      UNLOCK();
      piVar6 = (int *)(iVar1 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)FUN_00414bf0(&local_74);
      if ((uint)piVar7[2] < 2) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = *(undefined4 **)(*piVar7 + 4);
      }
      *puVar8 = 0;
      if ((uint)piVar7[2] < 2) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar7 + 4);
      }
      piVar6 = (int *)(*piVar3 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *(int *)(iVar5 + 4);
      *(int *)(iVar5 + 4) = *piVar3;
      UNLOCK();
      piVar3 = (int *)(iVar1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)(local_74 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)FUN_00416b00(&local_78);
      if ((uint)piVar7[2] < 3) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = *(undefined4 **)(*piVar7 + 8);
      }
      *puVar8 = 0;
      if ((uint)piVar7[2] < 3) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar7 + 8);
      }
      piVar6 = (int *)(*piVar3 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *(int *)(iVar5 + 4);
      *(int *)(iVar5 + 4) = *piVar3;
      UNLOCK();
      piVar3 = (int *)(iVar1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)(local_78 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)FUN_00549570(&local_7c);
      if ((uint)piVar7[2] < 4) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = *(undefined4 **)(*piVar7 + 0xc);
      }
      *puVar8 = 0;
      if ((uint)piVar7[2] < 4) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar7 + 0xc);
      }
      piVar7 = (int *)(*piVar3 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *(int *)(iVar5 + 4);
      *(int *)(iVar5 + 4) = *piVar3;
      UNLOCK();
      piVar3 = (int *)(iVar1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)(local_7c + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      iVar5 = *(int *)(local_4c + 0xc);
    } while ((int)uVar10 < *(int *)(iVar5 + 0x20));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

