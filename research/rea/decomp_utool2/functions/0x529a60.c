// rea decompile_all
// name: FUN_00529a60
// address: 0x529a60
// body: available
// range: 0x529a60-0x529c4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529a60(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c191;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(in_ECX + 0x78);
  }
  FUN_006f6dd6(uVar2,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
               &ProjectExplorerItem_SongSection::RTTI_Type_Descriptor,0,
               DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_00413a00(&local_18);
  local_8 = 0;
  FUN_006e4900(uVar2,0);
  local_8 = 0xffffffff;
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
  operator_new(0x80);
  local_8 = 1;
  FUN_0045c990("Target Disk Location");
  local_8 = CONCAT31(local_8._1_3_,2);
  local_18 = 1;
  piVar4 = (int *)FUN_00534e00(&local_14);
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  operator_new(0xac);
  local_8 = 4;
  uVar2 = FUN_0051b7d0(&local_14);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_18 = 2;
  uVar2 = FUN_00537fb0(uVar2,&PTR_DAT_00c7ed68,&PTR_DAT_00c7ed68);
  local_8 = 6;
  FUN_00534da0(uVar2);
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x28))(1);
    FUN_006e5050(piVar4,0xffffffff);
  }
  FUN_005356e0();
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(in_ECX + 0x78);
  }
  FUN_00526e10(uVar2);
  uVar2 = FUN_0051c060();
  *(undefined4 *)(in_ECX + 0x4f0) = uVar2;
  ExceptionList = local_10;
  return;
}

