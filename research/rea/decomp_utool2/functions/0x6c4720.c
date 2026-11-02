// rea decompile_all
// name: FUN_006c4720
// address: 0x6c4720
// body: available
// range: 0x6c4720-0x6c4946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c4720(void)

{
  int iVar1;
  int *piVar2;
  int local_80;
  int local_7c;
  int local_78;
  int *local_74 [2];
  undefined1 local_6c [8];
  int *local_64 [2];
  undefined1 local_5c [8];
  int *local_54 [2];
  undefined1 local_4c [8];
  undefined **local_44 [2];
  undefined1 local_3c [8];
  undefined **local_34 [2];
  undefined1 local_2c [8];
  undefined **local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00725b67;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44[0] = &PTR_vftable_00c7ed4c;
  local_8 = 0;
  FUN_0045c990("0, 100",local_14);
  local_8 = 1;
  FUN_0063b2d0(local_74,&DAT_00c8aa30,local_44);
  local_8._0_1_ = 2;
  FUN_006318f0(&local_80);
  local_34[0] = &PTR_vftable_00c7ed4c;
  local_8._0_1_ = 4;
  FUN_0045c990("100, 0");
  local_8._0_1_ = 5;
  FUN_0063b2d0(local_64,&DAT_00c8a9e8,local_34);
  local_8._0_1_ = 6;
  FUN_006318f0(&local_7c);
  local_24[0] = &PTR_vftable_00c7ed4c;
  local_8._0_1_ = 8;
  FUN_0045c990(&DAT_00c05180);
  local_8._0_1_ = 9;
  FUN_0063b2d0(local_54,&DAT_00c8a9f0,local_24);
  local_8._0_1_ = 10;
  FUN_006318f0(&local_78);
  local_8._0_1_ = 0xb;
  FUN_0069df90(&local_78);
  local_8._0_1_ = 0xc;
  FUN_0069df90(&local_7c);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  FUN_0069df90(&local_80);
  piVar2 = (int *)(local_78 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  (**(code **)(*local_54[0] + 0x54))(local_4c);
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  piVar2 = (int *)(local_7c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  (**(code **)(*local_64[0] + 0x54))(local_5c);
  (**(code **)(*local_34[0] + 0x54))(local_2c);
  piVar2 = (int *)(local_80 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  (**(code **)(*local_74[0] + 0x54))(local_6c);
  (**(code **)(*local_44[0] + 0x54))(local_3c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

