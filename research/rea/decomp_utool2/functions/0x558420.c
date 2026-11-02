// rea decompile_all
// name: FUN_00558420
// address: 0x558420
// body: available
// range: 0x558420-0x558a1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00558420(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  undefined4 *in_EDX;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007115c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_1c = in_ECX;
  local_18 = in_EDX;
  local_14 = operator_new(0x20);
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *local_14 = in_ECX;
  local_14[1] = param_2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  piVar6 = local_14 + 6;
  piVar8 = local_14 + 7;
  local_14[2] = param_3;
  local_14[3] = (int)param_4;
  *(ulonglong *)(local_14 + 4) = CONCAT44(param_6,param_5);
  *piVar6 = (int)&DAT_00bfe12c;
  *piVar8 = (int)&DAT_00bfe12c;
  param_4 = piVar6;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  param_6 = param_2;
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 2;
  iVar7 = param_2;
  if (*(int *)(local_1c + 0x40) != 1) {
    piVar4 = (int *)(param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *param_4;
    *param_4 = param_1;
    UNLOCK();
    piVar4 = (int *)(iVar1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_0045c990(&DAT_0073e8e0);
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar9 = 0x558557;
    puVar3 = (undefined4 *)FUN_006360d0(&param_6);
    piVar4 = param_4;
    if ((int *)*puVar3 == param_4) {
      param_4 = (int *)0x0;
    }
    else {
      uVar9 = *puVar3;
      param_4 = (int *)FUN_0045c1e0(uVar9,param_4);
    }
    piVar6 = (int *)(param_6 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        uVar9 = 0x5585a0;
        FID_conflict__free(piVar6);
      }
    }
    piVar4 = piVar4 + -2;
    local_8._0_1_ = 2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        uVar9 = 0x5585c4;
        FID_conflict__free(piVar4);
      }
    }
    if (param_4 != (int *)0x0) {
      uVar9 = 0x5585d9;
      piVar4 = (int *)FUN_00636040(&param_4);
      iVar7 = *piVar4;
      *piVar4 = param_2;
      piVar4 = param_4 + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          uVar9 = 0x558602;
          FID_conflict__free(piVar4);
        }
      }
    }
    piVar4 = (int *)FUN_00634090(&param_4,*local_18,uVar9,1);
    piVar8 = local_14 + 7;
    iVar1 = *piVar8;
    *piVar8 = *piVar4;
    *piVar4 = iVar1;
    piVar4 = param_4 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    goto LAB_00558920;
  }
  if (*(int *)(local_1c + 0x44) == 3) {
    piVar4 = (int *)FUN_00636a10(&local_20);
    iVar1 = param_6;
    iVar7 = *param_4;
    *param_4 = *piVar4;
    *piVar4 = iVar7;
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)FUN_00636040(&param_4);
    iVar7 = *piVar4;
    *piVar4 = iVar1;
    piVar4 = param_4 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    puVar3 = &param_6;
    puVar5 = (undefined4 *)FUN_00635a10(puVar3,"Music");
    local_8 = CONCAT31(local_8._1_3_,7);
    piVar4 = (int *)FUN_00634090(&param_4,*puVar5,puVar3,1);
    iVar1 = *piVar8;
    *piVar8 = *piVar4;
    *piVar4 = iVar1;
    piVar4 = param_4 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8._0_1_ = 2;
    piVar4 = (int *)(param_6 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (*(char *)*piVar8 == '\0') goto LAB_00558920;
    cVar2 = FUN_00632d50(0x2f);
    if (cVar2 != '\0') goto LAB_00558920;
    puVar3 = &DAT_0073e894;
  }
  else {
    if (*(int *)(local_1c + 0x44) != 4) goto LAB_00558920;
    FUN_00636040(&local_20);
    local_8 = CONCAT31(local_8._1_3_,4);
    piVar4 = (int *)FUN_00636a10(&local_1c);
    iVar1 = param_6;
    iVar7 = *param_4;
    *param_4 = *piVar4;
    *piVar4 = iVar7;
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8._0_1_ = 2;
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_00636040(&param_6);
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar4 = (int *)FUN_00636040(&param_4);
    iVar7 = *piVar4;
    *piVar4 = iVar1;
    piVar4 = param_4 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8._0_1_ = 2;
    piVar4 = (int *)(param_6 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    puVar3 = &param_6;
    puVar5 = (undefined4 *)FUN_00635a10(puVar3,"Recording");
    local_8 = CONCAT31(local_8._1_3_,6);
    piVar4 = (int *)FUN_00634090(&param_4,*puVar5,puVar3,1);
    iVar1 = *piVar8;
    *piVar8 = *piVar4;
    *piVar4 = iVar1;
    piVar4 = param_4 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8._0_1_ = 2;
    piVar4 = (int *)(param_6 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (*(char *)*piVar8 == '\0') goto LAB_00558920;
    cVar2 = FUN_00632d50(0x2f);
    if (cVar2 != '\0') goto LAB_00558920;
    puVar3 = (undefined4 *)&DAT_0073e8d4;
  }
  FUN_00621830(puVar3);
LAB_00558920:
  FUN_006329c0(&param_6,&DAT_0073e88c,&DAT_0073e898);
  local_8 = CONCAT31(local_8._1_3_,8);
  piVar4 = (int *)FUN_00632ad0(&param_4,&DAT_0073e890);
  iVar1 = *piVar8;
  *piVar8 = *piVar4;
  *piVar4 = iVar1;
  piVar4 = param_4 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(param_6 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(iVar7 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return local_14;
}

