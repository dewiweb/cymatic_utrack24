// rea decompile_all
// name: FUN_0059ff70
// address: 0x59ff70
// body: available
// range: 0x59ff70-0x5a017f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059ff70(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071613d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0059c8e0(param_3,param_1);
  *in_ECX = ImportJob_STSong::vftable;
  *(undefined1 *)(in_ECX + 0x20) = param_4._0_1_;
  in_ECX[0x21] = &DAT_00bfe12c;
  in_ECX[0x22] = &DAT_00bfe12c;
  in_ECX[0x23] = &DAT_00bfe12c;
  local_8 = 3;
  puVar3 = (undefined4 *)FUN_0054e0c0(&param_4,param_1);
  uVar2 = in_ECX[0x21];
  in_ECX[0x21] = *puVar3;
  *puVar3 = uVar2;
  piVar4 = (int *)((int)param_4 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  param_4 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,4);
  puVar3 = (undefined4 *)FUN_0054da30(&param_1,param_1,0,param_2,&param_4);
  uVar2 = in_ECX[0x22];
  in_ECX[0x22] = *puVar3;
  *puVar3 = uVar2;
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
  FUN_0040ebd0(&local_14);
  FUN_00410ea0(&param_2);
  local_8._0_1_ = 6;
  puVar3 = (undefined4 *)FUN_00636a10(&param_3);
  local_8 = CONCAT31(local_8._1_3_,7);
  puVar3 = (undefined4 *)FUN_00635a10(&param_1,*puVar3);
  uVar2 = in_ECX[0x23];
  in_ECX[0x23] = *puVar3;
  *puVar3 = uVar2;
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
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_14 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  piVar4 = (int *)(param_4 + -8);
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

