// rea decompile_all
// name: FUN_00553d40
// address: 0x553d40
// body: available
// range: 0x553d40-0x554452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005540e7) */
/* WARNING: Removing unreachable block (ram,0x0055411b) */
/* WARNING: Removing unreachable block (ram,0x00554127) */
/* WARNING: Removing unreachable block (ram,0x00554133) */
/* WARNING: Removing unreachable block (ram,0x0055413b) */
/* WARNING: Removing unreachable block (ram,0x00554163) */
/* WARNING: Removing unreachable block (ram,0x0055416f) */
/* WARNING: Removing unreachable block (ram,0x00554178) */
/* WARNING: Removing unreachable block (ram,0x005541d4) */
/* WARNING: Removing unreachable block (ram,0x005541d7) */
/* WARNING: Removing unreachable block (ram,0x005541ed) */
/* WARNING: Removing unreachable block (ram,0x005541f9) */
/* WARNING: Removing unreachable block (ram,0x00554202) */
/* WARNING: Removing unreachable block (ram,0x00554206) */
/* WARNING: Removing unreachable block (ram,0x00554215) */
/* WARNING: Removing unreachable block (ram,0x0055421d) */
/* WARNING: Removing unreachable block (ram,0x00553e8a) */
/* WARNING: Removing unreachable block (ram,0x00553e90) */
/* WARNING: Removing unreachable block (ram,0x00553ee2) */
/* WARNING: Removing unreachable block (ram,0x00553eee) */
/* WARNING: Removing unreachable block (ram,0x00553ef7) */
/* WARNING: Removing unreachable block (ram,0x00553f05) */
/* WARNING: Removing unreachable block (ram,0x00553f11) */
/* WARNING: Removing unreachable block (ram,0x00553f1a) */
/* WARNING: Removing unreachable block (ram,0x00553f25) */
/* WARNING: Removing unreachable block (ram,0x00553f34) */
/* WARNING: Removing unreachable block (ram,0x00553f3a) */
/* WARNING: Removing unreachable block (ram,0x005540da) */

void FUN_00553d40(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_3c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00710ef3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0040ebd0();
  local_8._0_1_ = 2;
  FUN_00410ea0();
  iVar3 = FUN_00550b50();
  if ((char)param_2 != '\0') {
    param_2 = CONCAT13(1 < iVar3,(undefined3)param_2);
    if (iVar3 < 1) {
      FUN_0040eb00();
      local_8._0_1_ = 0x10;
      FUN_00637690();
      FUN_006377c0();
      local_8._0_1_ = 0x12;
      piVar5 = (int *)(param_2 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_00621830();
      FUN_0045c990();
      local_8._0_1_ = 0x13;
      FUN_0045c990();
      local_8._0_1_ = 0x14;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0x15);
      iVar3 = FUN_004ed1f0(&local_1c);
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8._0_1_ = 0x12;
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    else {
      FUN_0045c990();
      local_8._0_1_ = 3;
      uVar4 = FUN_0040eb00();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00637690(uVar4);
      FUN_006377c0();
      FUN_00637730();
      FUN_006377c0();
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8._0_1_ = 7;
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_0045c990();
      local_8._0_1_ = 0xb;
      FUN_00637690();
      FUN_006377c0();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_00636ec0();
      piVar5 = (int *)(local_28 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8._0_1_ = 7;
      piVar5 = (int *)(param_2 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_0045c990();
      local_8._0_1_ = 0xd;
      FUN_0045c990();
      local_8._0_1_ = 0xe;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      iVar3 = FUN_004ed1f0(&local_1c);
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8._0_1_ = 7;
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    param_2 = CONCAT13(iVar3 == 0,(undefined3)param_2);
    piVar5 = (int *)(local_14 + -8);
    if (iVar3 == 0) {
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_00415180();
      goto LAB_005542a5;
    }
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  local_3c = 0;
  FUN_00410ea0();
  local_8._0_1_ = 0x1b;
  FUN_00635980();
  local_8._0_1_ = 2;
  piVar5 = (int *)(param_2 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_00554c60();
  while (0 < local_3c) {
    local_3c = local_3c + -1;
    puVar2 = *(undefined4 **)(local_3c * 4);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = puVar2 + 1;
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar2)();
      }
    }
  }
LAB_005542a5:
  FID_conflict__free((void *)0x0);
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_24 + 1;
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_24)();
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_1 + 1;
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

