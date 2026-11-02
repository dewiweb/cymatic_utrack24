// rea decompile_all
// name: FUN_006756d0
// address: 0x6756d0
// body: available
// range: 0x6756d0-0x6759f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006756d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720691;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = *(int **)(in_ECX + 4);
  (**(code **)(*piVar2 + 0x10))(&DAT_00c02804,2,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar5 = (undefined4 *)FUN_00635260();
  local_8 = 0;
  uVar3 = *puVar5;
  uVar6 = FUN_0045d1e0(uVar3);
  (**(code **)(*piVar2 + 0x10))(uVar3,uVar6);
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  pcVar4 = *(code **)(*piVar2 + 0x14);
  if (pcVar4 == FUN_0062c8e0) {
    local_14[0] = 0x20;
    (**(code **)(*piVar2 + 0x10))(local_14,1);
  }
  else {
    (*pcVar4)(0x20);
  }
  puVar5 = (undefined4 *)FUN_00635260();
  local_8 = 1;
  uVar3 = *puVar5;
  uVar6 = FUN_0045d1e0(uVar3);
  (**(code **)(*piVar2 + 0x10))(uVar3,uVar6);
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_2c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  pcVar4 = *(code **)(*piVar2 + 0x14);
  if (pcVar4 == FUN_0062c8e0) {
    local_18[0] = 0x20;
    (**(code **)(*piVar2 + 0x10))(local_18,1);
  }
  else {
    (*pcVar4)(0x20);
  }
  puVar5 = (undefined4 *)FUN_00635260();
  local_8 = 2;
  uVar3 = *puVar5;
  uVar6 = FUN_0045d1e0(uVar3);
  (**(code **)(*piVar2 + 0x10))(uVar3,uVar6);
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_30 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  pcVar4 = *(code **)(*piVar2 + 0x14);
  if (pcVar4 == FUN_0062c8e0) {
    local_1c[0] = 0x20;
    (**(code **)(*piVar2 + 0x10))(local_1c,1);
  }
  else {
    (*pcVar4)(0x20);
  }
  puVar5 = (undefined4 *)FUN_00635260();
  local_8 = 3;
  uVar3 = *puVar5;
  uVar6 = FUN_0045d1e0(uVar3);
  (**(code **)(*piVar2 + 0x10))(uVar3,uVar6);
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_34 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  pcVar4 = *(code **)(*piVar2 + 0x14);
  if (pcVar4 == FUN_0062c8e0) {
    local_20[0] = 0x20;
    (**(code **)(*piVar2 + 0x10))(local_20,1);
  }
  else {
    (*pcVar4)(0x20);
  }
  puVar5 = (undefined4 *)FUN_00635260();
  local_8 = 4;
  uVar3 = *puVar5;
  uVar6 = FUN_0045d1e0(uVar3);
  (**(code **)(*piVar2 + 0x10))(uVar3,uVar6);
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_38 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  pcVar4 = *(code **)(*piVar2 + 0x14);
  if (pcVar4 == FUN_0062c8e0) {
    local_24[0] = 0x20;
    (**(code **)(*piVar2 + 0x10))(local_24,1);
  }
  else {
    (*pcVar4)(0x20);
  }
  puVar5 = (undefined4 *)FUN_00635260();
  local_8 = 5;
  uVar3 = *puVar5;
  uVar6 = FUN_0045d1e0(uVar3);
  (**(code **)(*piVar2 + 0x10))(uVar3,uVar6);
  local_8 = 0xffffffff;
  piVar7 = (int *)(param_1 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  (**(code **)(*piVar2 + 0x10))(" ] concat ",10);
  ExceptionList = local_10;
  return;
}

