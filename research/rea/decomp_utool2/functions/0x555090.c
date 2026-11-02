// rea decompile_all
// name: FUN_00555090
// address: 0x555090
// body: available
// range: 0x555090-0x5554c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00555090(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  undefined4 in_stack_ffffffb4;
  undefined4 uVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007110fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar4 = (int *)(*(int *)(in_ECX + 4) + -8);
  *(undefined1 **)(in_ECX + 4) = &DAT_00bfe12c;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  param_3 = param_3 + -1;
  if (param_3 == 0) {
    if (param_2 == 3) {
      FUN_006329c0(&local_14,&DAT_0073e9a0);
      local_8 = 4;
      FUN_00635a10(&local_18);
      local_8._0_1_ = 5;
      FUN_00635a10(&param_2);
      local_8 = CONCAT31(local_8._1_3_,6);
      puVar3 = (undefined4 *)FUN_00635a10(&param_3);
      uVar5 = *(undefined4 *)(in_ECX + 4);
      *(undefined4 *)(in_ECX + 4) = *puVar3;
      *puVar3 = uVar5;
      piVar4 = (int *)(param_3 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(param_2 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_18 + -8);
      local_2c = local_14;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
          local_2c = local_14;
        }
      }
    }
    else {
      if (param_2 != 4) {
        ExceptionList = local_10;
        return;
      }
      FUN_006329c0(&local_2c,&DAT_0073e974);
      local_8 = 7;
      FUN_00635a10(&local_28);
      local_8._0_1_ = 8;
      FUN_00635a10(&local_24);
      local_8._0_1_ = 9;
      FUN_00635a10(&local_20);
      local_8 = CONCAT31(local_8._1_3_,10);
      puVar3 = (undefined4 *)FUN_00635a10(&local_1c);
      uVar5 = *(undefined4 *)(in_ECX + 4);
      *(undefined4 *)(in_ECX + 4) = *puVar3;
      *puVar3 = uVar5;
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_20 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_24 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_28 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
    }
  }
  else {
    cVar2 = FUN_00632c80();
    if (cVar2 == '\0') {
      uVar5 = 0x55511a;
      cVar2 = FUN_00632c80();
      if (cVar2 == '\0') {
        FUN_00632c10(&stack0xffffffbc,&DAT_0073e994,in_stack_ffffffb4,uVar5);
        FUN_006377c0();
        local_8 = 1;
        FUN_006329c0(&local_14,&DAT_0073e99c);
        local_8._0_1_ = 2;
        FUN_00635a10(&param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        puVar3 = (undefined4 *)FUN_00635a10(&param_3);
        uVar5 = *(undefined4 *)(in_ECX + 4);
        *(undefined4 *)(in_ECX + 4) = *puVar3;
        *puVar3 = uVar5;
        piVar4 = (int *)(param_3 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        piVar4 = (int *)(param_2 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        piVar4 = (int *)(local_14 + -8);
        local_2c = local_18;
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar4);
            local_2c = local_18;
          }
        }
        goto LAB_00555495;
      }
    }
    FUN_006329c0(&param_2,&DAT_0073e910);
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_00635a10(&param_3);
    uVar5 = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(in_ECX + 4) = *puVar3;
    *puVar3 = uVar5;
    piVar4 = (int *)(param_3 + -8);
    local_2c = param_2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
        local_2c = param_2;
      }
    }
  }
LAB_00555495:
  piVar4 = (int *)(local_2c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

