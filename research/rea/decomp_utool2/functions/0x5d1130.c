// rea decompile_all
// name: FUN_005d1130
// address: 0x5d1130
// body: available
// range: 0x5d1130-0x5d12de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d1130(uint param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *in_EDX;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b6d5;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *in_EDX;
  piVar2 = (int *)(iVar4 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = in_EDX;
  puVar3 = (undefined4 *)FUN_006377c0(iVar4);
  FUN_0062a9c0(&local_14,*puVar3,piVar2);
  local_8 = 0;
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
  iVar4 = FUN_0045d1e0(local_14,uVar1);
  piVar2 = param_2;
  uVar1 = iVar4 + 1;
  (**(code **)(*param_2 + 0x10))(&param_1,4);
  param_1 = iVar4 + 5 + (uVar1 & 1);
  (**(code **)(*piVar2 + 0x10))(&param_1,4);
  iVar4 = *in_EDX;
  piVar5 = (int *)(iVar4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar4);
  local_8._0_1_ = 1;
  uVar6 = FUN_005d1370();
  local_8 = (uint)local_8._1_3_ << 8;
  piVar5 = (int *)(param_1 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  param_2 = (int *)uVar6;
  (**(code **)(*piVar2 + 0x10))(&param_2,4);
  iVar4 = local_14;
  if (uVar1 != 0) {
    iVar7 = FUN_00622a60(uVar1);
    if (iVar7 != 0) {
      FUN_004c2c30(iVar7,iVar4,uVar1);
    }
  }
  if ((*(byte *)(piVar2 + 7) & 1) != 0) {
    param_1 = param_1 & 0xffffff00;
    (**(code **)(*piVar2 + 0x10))(&param_1,1);
  }
  piVar2 = (int *)(local_14 + -8);
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

