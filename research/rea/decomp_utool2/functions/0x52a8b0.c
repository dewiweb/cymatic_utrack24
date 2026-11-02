// rea decompile_all
// name: FUN_0052a8b0
// address: 0x52a8b0
// body: available
// range: 0x52a8b0-0x52abc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052a8b0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c358;
  local_10 = ExceptionList;
  if (*(uint *)(*(int *)(in_ECX + 4) + 0x560) <= *(uint *)(in_ECX + 8)) {
    return;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x558) + *(uint *)(in_ECX + 8) * 4);
  if (iVar4 == 0) {
    return;
  }
  local_2c = in_ECX + 0x10;
  ExceptionList = &local_10;
  local_30 = iVar4;
  FUN_006e25d0(&stack0xffffffac,0);
  FUN_0052b750(&local_1c);
  local_8 = 0;
  FUN_006369b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)FUN_006e25d0(&local_28);
  if (local_18 == *piVar2) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00448730(local_18);
  }
  piVar2 = (int *)(local_28 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  if (local_20 == 0) {
    puVar5 = (undefined4 *)FUN_006e25d0(&local_38);
    uVar6 = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar4 + 4) = *puVar5;
    *puVar5 = uVar6;
    piVar2 = (int *)(local_38 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
  else {
    FUN_0045c990();
    local_8._0_1_ = 2;
    FUN_0045c990();
    local_8._0_1_ = 3;
    FUN_0045c990();
    local_8._0_1_ = 4;
    uVar7 = extraout_ECX;
    uVar8 = extraout_ECX;
    uVar3 = FUN_006e25d0(&local_38,0);
    local_8._0_1_ = 5;
    uVar6 = extraout_ECX_00;
    FUN_00637690(uVar3);
    FUN_006377c0(uVar6);
    FUN_00637730(uVar7);
    FUN_006377c0(uVar8);
    local_8 = CONCAT31(local_8._1_3_,6);
    iVar4 = FUN_004ed1f0();
    local_11 = iVar4 == 0;
    piVar2 = (int *)(local_34 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_38 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_20 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_24 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar2 = (int *)(local_28 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    if (local_11 != '\0') {
      FUN_006e4900(local_30 + 4);
      goto LAB_0052ab6f;
    }
    FUN_00637b90();
  }
  FUN_006e7e60();
LAB_0052ab6f:
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_1c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

