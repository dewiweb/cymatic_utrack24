// rea decompile_all
// name: FUN_004fa350
// address: 0x4fa350
// body: available
// range: 0x4fa350-0x4fa66a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa350(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  float fVar6;
  int local_40;
  undefined1 local_2c [4];
  int local_28;
  undefined4 *local_24;
  int local_20;
  float local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070680f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_20 = in_ECX;
  if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') goto LAB_004fa3a5;
    }
    fVar6 = 1.0;
  }
  else {
LAB_004fa3a5:
    fVar6 = 0.5;
  }
  local_1c = fVar6;
  FUN_006e25b0();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_18 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_18)();
    }
  }
  if (*(char *)(in_ECX + 0xd0) == '\0') {
    FUN_006e25d0();
    FUN_006e25b0();
    local_8 = 2;
    local_14 = 3;
    local_18 = (undefined4 *)0x3;
    FUN_006831f0();
    FUN_004363b0();
    local_18 = (undefined4 *)((float)(int)fVar6 + 8.0);
  }
  else {
    local_18 = (undefined4 *)(float)*(int *)(in_ECX + 0x18);
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (local_24 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_24 + 1;
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*local_24)();
      }
    }
  }
  local_8 = 0xffffffff;
  if (((local_14 & 1) != 0) && (piVar4 = (int *)(local_28 + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_006e8e70();
  FUN_00684c50();
  FUN_00472db0((float)*(int *)(in_ECX + 0x1c));
  FUN_00684310();
  FUN_006e8e70(local_2c);
  FUN_00684d10();
  FUN_00684c50();
  FUN_006e6400();
  FUN_004107c0();
  local_8 = 3;
  piVar4 = (int *)FUN_006e25b0(&local_18);
  local_8._0_1_ = 4;
  uVar2 = FUN_006e25d0(&local_1c,0);
  iVar5 = (int)((float)local_40 / *(float *)(*piVar4 + 0x14));
  iVar3 = 1;
  if (1 < iVar5) {
    iVar3 = iVar5;
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00682290(uVar2,*(undefined4 *)(local_20 + 0x9c),iVar3,*(undefined4 *)(local_20 + 0xc4));
  piVar4 = (int *)((int)local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_18 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_18)();
    }
  }
  ExceptionList = local_10;
  return;
}

