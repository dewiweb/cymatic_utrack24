// rea decompile_all
// name: FUN_005ab2d0
// address: 0x5ab2d0
// body: available
// range: 0x5ab2d0-0x5ab5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab2d0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717e2a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == in_ECX + 0x25c) {
    FUN_0040f2d0();
    local_8 = 0;
    cVar2 = FUN_005b06a0();
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_14 + -8);
    param_1 = CONCAT13(cVar2,(undefined3)param_1);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (cVar2 != '\0') {
      FUN_005bc7f0();
    }
    piVar4 = (int *)FUN_005b2a40();
    local_8 = 1;
    piVar3 = (int *)(*piVar4 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    LOCK();
    iVar5 = *(int *)(in_ECX + 0x2dc);
    *(int *)(in_ECX + 0x2dc) = *piVar4;
    UNLOCK();
    piVar4 = (int *)(iVar5 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_006e4900(in_ECX + 0x2dc);
    local_8 = 0xffffffff;
    piVar4 = (int *)(param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  else {
    iVar5 = in_ECX + 0x6f4;
    if (param_1 == iVar5) {
      FUN_0040f2d0();
      local_8 = 2;
      FUN_005b0900();
      local_8 = 0xffffffff;
      piVar4 = (int *)(param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)FUN_005b2c70();
      local_8 = 3;
    }
    else {
      iVar5 = in_ECX + 0xc68;
      if (param_1 != iVar5) goto LAB_005ab4fb;
      FUN_0040f2d0(&stack0xffffffd4);
      FUN_005b0080();
      piVar4 = (int *)FUN_005b17a0();
      local_8 = 4;
    }
    piVar3 = (int *)(*piVar4 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *(int *)(iVar5 + 0x80);
    *(int *)(iVar5 + 0x80) = *piVar4;
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
    FUN_006e4900(iVar5 + 0x80);
    local_8 = 0xffffffff;
    piVar4 = (int *)(param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
LAB_005ab4fb:
  FUN_0040f2d0(&stack0xffffffd4);
  cVar2 = FUN_005b50c0();
  if (cVar2 == '\0') {
    puVar6 = &DAT_00c8a72c;
  }
  else {
    puVar6 = &DAT_00c8a728;
  }
  FUN_006e4900(puVar6);
  FUN_0040f2d0();
  local_8 = 5;
  FUN_0040f2d0();
  local_8 = CONCAT31(local_8._1_3_,6);
  cVar2 = FUN_005b2f80();
  piVar4 = (int *)(local_14 + -8);
  *(bool *)(in_ECX + 0xc64) = cVar2 == '\0';
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  (**(code **)(*(int *)(in_ECX + -0x78) + 0x84))();
  ExceptionList = local_10;
  return;
}

