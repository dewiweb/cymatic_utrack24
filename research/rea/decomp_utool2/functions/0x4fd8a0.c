// rea decompile_all
// name: FUN_004fd8a0
// address: 0x4fd8a0
// body: available
// range: 0x4fd8a0-0x4fda79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd8a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706dd6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990(".songprj",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_00637690(&local_14);
  local_8._0_1_ = 1;
  FUN_00635a10(&local_1c,*puVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_005b4ba0();
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
  local_8 = CONCAT31(local_8._1_3_,6);
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *(undefined4 *)(in_ECX + 0x9c) = param_2;
  FUN_004fb0e0();
  puVar3 = (undefined4 *)FUN_00541d00(*(undefined4 *)(in_ECX + 0x9c));
  puVar2 = *(undefined4 **)(in_ECX + 0x98);
  if ((puVar2 != puVar3) && (*(undefined4 **)(in_ECX + 0x98) = puVar3, puVar2 != (undefined4 *)0x0))
  {
    (**(code **)*puVar2)(1);
  }
  FUN_004fcab0();
  *(undefined4 *)(in_ECX + 0xdec) = 0;
  FUN_0045c990(&DAT_0073990c);
  local_8._0_1_ = 7;
  FUN_006e4900(&param_1,0);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00637c10();
  FUN_006e6170(0x1000280,DAT_00c7ef78);
  FUN_006e6170(0x1000281,DAT_00c7ef94);
  FUN_004fbe50();
  piVar4 = (int *)(local_18 + -8);
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

