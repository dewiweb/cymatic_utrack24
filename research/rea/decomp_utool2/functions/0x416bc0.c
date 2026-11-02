// rea decompile_all
// name: FUN_00416bc0
// address: 0x416bc0
// body: available
// range: 0x416bc0-0x416d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00416bc0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fca68;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (param_1[3] == 0) {
    if (param_2[3] != 0) {
      uVar3 = 0xffffffff;
      goto LAB_00416cfe;
    }
    puVar4 = (undefined4 *)FUN_00636a10(&local_14);
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar5 = (undefined4 *)FUN_00636a10(&local_18);
    uVar3 = FUN_006218b0(*puVar5,*puVar4);
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  else {
    if (param_2[3] == 0) {
      uVar3 = 1;
      goto LAB_00416cfe;
    }
    FUN_00410ea0(&local_18);
    uVar7 = FUN_00410ea0(&local_14);
    uVar3 = FUN_006218b0(*(undefined4 *)uVar7,*(undefined4 *)((ulonglong)uVar7 >> 0x20));
    piVar6 = (int *)(local_14 + -8);
    local_14 = local_18;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
        local_14 = local_18;
      }
    }
  }
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
LAB_00416cfe:
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)(1,uVar2);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_2 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return uVar3;
}

