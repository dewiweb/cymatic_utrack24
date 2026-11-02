// rea decompile_all
// name: FUN_00529860
// address: 0x529860
// body: available
// range: 0x529860-0x529a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529860(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c118;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined4 **)(in_ECX + 0x78);
  }
  piVar2 = (int *)FUN_006f6dd6(uVar3,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
                               &ProjectExplorerItem_SongSubfolder::RTTI_Type_Descriptor,0,
                               DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar3 = (**(code **)(*piVar2 + 0x80))(&local_18);
  local_8 = 0;
  FUN_006e4900(uVar3,0);
  local_8 = 0xffffffff;
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  operator_new(0x80);
  local_8 = 1;
  FUN_0045c990("Target Disk Location");
  local_8 = CONCAT31(local_8._1_3_,2);
  local_18 = 1;
  piVar2 = (int *)FUN_00534e00(&local_14);
  local_8 = 0xffffffff;
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
  operator_new(0xac);
  local_8 = 4;
  uVar3 = FUN_0051b7d0(&local_14);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_18 = 2;
  uVar3 = FUN_00537fb0(uVar3,&PTR_DAT_00c7ed68,&PTR_DAT_00c7ed68);
  local_8 = 6;
  FUN_00534da0(uVar3);
  local_8 = 0xffffffff;
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
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x28))(1);
    FUN_006e5050(piVar2,0xffffffff);
  }
  FUN_005356e0();
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined4 **)(in_ECX + 0x78);
  }
  FUN_00526e10(uVar3);
  uVar3 = FUN_0051c060();
  *(undefined4 *)(in_ECX + 0x4f0) = uVar3;
  ExceptionList = local_10;
  return;
}

