// rea decompile_all
// name: FUN_0053ed10
// address: 0x53ed10
// body: available
// range: 0x53ed10-0x53f040 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0053ed10(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  double in_XMM0_Qa;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e4c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar7 = 0;
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  FUN_00548e50();
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar2 = FUN_00548d30();
  if (cVar2 != '\0') {
    pvVar4 = operator_new(0x80);
    iVar7 = FUN_0053e340();
    puVar5 = (undefined4 *)FUN_0040eb00();
    uVar6 = *(undefined4 *)(iVar7 + 0x20);
    *(undefined4 *)(iVar7 + 0x20) = *puVar5;
    *puVar5 = uVar6;
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_0045c990();
    local_8._0_1_ = 3;
    piVar3 = (int *)(*(int *)(iVar7 + 0x20) + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    FUN_00637730();
    local_8 = CONCAT31(local_8._1_3_,4);
    puVar5 = (undefined4 *)FUN_00635a10();
    uVar6 = *(undefined4 *)(iVar7 + 0x70);
    *(undefined4 *)(iVar7 + 0x70) = *puVar5;
    *puVar5 = uVar6;
    piVar3 = (int *)(local_1c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)((int)pvVar4 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    iVar1 = local_14[6];
    if (iVar1 == 0) {
      in_XMM0_Qa = 0.0;
    }
    else {
      FUN_006f56f0();
      in_XMM0_Qa = in_XMM0_Qa / (double)iVar1;
    }
    *(double *)(iVar7 + 0x38) = in_XMM0_Qa;
    FUN_00636970();
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      local_14[1] = local_14[1] + 1;
      UNLOCK();
    }
    piVar3 = (int *)(param_1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(iVar7 + 0x20);
    piVar3 = (int *)(iVar1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    uVar6 = FUN_0053b220(iVar1,0xffffffff,0,0,0);
    if (*(int *)(iVar7 + 0x58) < *(int *)(iVar7 + 0x5c) + 1) {
      FUN_00409cf0();
    }
    iVar1 = *(int *)(iVar7 + 0x5c);
    *(int *)(iVar7 + 0x5c) = iVar1 + 1;
    *(undefined4 *)(*(int *)(iVar7 + 0x54) + iVar1 * 4) = uVar6;
  }
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_14 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)();
    }
  }
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return iVar7;
}

