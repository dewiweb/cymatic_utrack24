// rea decompile_all
// name: FUN_005514c0
// address: 0x5514c0
// body: available
// range: 0x5514c0-0x55170a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005514c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined3 uVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00710977;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x58) != 0) {
    local_8._1_3_ = 0;
    uVar4 = local_8._1_3_;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    if (param_1[2] == 2) {
      FUN_00636040();
      local_8._0_1_ = 2;
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar5 = (int *)FUN_005b4070();
      iVar6 = *piVar5;
      *piVar5 = (int)&DAT_00bfe12c;
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_20 + -8);
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
    else {
      local_8._1_3_ = uVar4;
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar5 = (int *)FUN_005b4070();
      iVar6 = *piVar5;
      *piVar5 = (int)&DAT_00bfe12c;
      piVar5 = (int *)(local_24 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_24 = local_20;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar5 = (int *)(local_24 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(param_1[3] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    piVar5 = (int *)(iVar6 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    FUN_005510f0(&local_14,iVar6);
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x3c));
    puVar3 = local_14;
    if ((int)local_14[0x15] < local_14[0x16] + 1) {
      FUN_00409cf0();
    }
    iVar6 = puVar3[0x16];
    puVar3[0x16] = iVar6 + 1;
    *(undefined4 **)(puVar3[0x14] + iVar6 * 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
    }
    param_1[0x17] = local_14;
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x3c));
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*local_14)();
      }
    }
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_1 + 1;
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

