// rea decompile_all
// name: FUN_006bbde0
// address: 0x6bbde0
// body: available
// range: 0x6bbde0-0x6bbfdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bbde0(undefined4 **param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 **local_38;
  undefined4 *local_34;
  void *local_30;
  undefined4 local_2c;
  int local_28;
  undefined **local_24 [2];
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00724989;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38 = param_1;
  local_14 = uVar2;
  operator_new(0x34);
  puVar3 = (undefined4 *)FUN_00460e00(&DAT_00c8a990);
  *param_1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  param_1[1] = (undefined4 *)0x0;
  param_1[2] = (undefined4 *)0x0;
  param_1[3] = (undefined4 *)0x0;
  local_34 = *param_1;
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    local_34[1] = local_34[1] + 1;
    UNLOCK();
  }
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 1;
  FUN_006c57b0(in_ECX + 8);
  local_1c[0] = *(int *)(in_ECX + 0xb8);
  piVar4 = (int *)(local_1c[0] + -8);
  local_24[0] = &PTR_vftable_00c7ed4c;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 2;
  if (local_34 != (undefined4 *)0x0) {
    FUN_00461420(&DAT_00c8a9d8,local_24,0);
  }
  local_8._0_1_ = 1;
  (**(code **)(*local_24[0] + 0x54))(local_1c,uVar2);
  FUN_006bca40(in_ECX + 0xb0,extraout_ECX);
  local_1c[0] = *(int *)(in_ECX + 0xc0);
  local_24[0] = &PTR_vftable_00c7ed44;
  local_8._0_1_ = 3;
  if (local_34 != (undefined4 *)0x0) {
    FUN_00461420(&DAT_00c8aa70,local_24,0);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  FUN_006bcc90(*(undefined4 *)(in_ECX + 0xbc),0);
  FUN_006bc6d0(in_ECX + 0x78,extraout_ECX_00);
  FUN_006bc550(in_ECX + 0x90,extraout_ECX_01);
  FUN_006bc3d0(in_ECX + 0x94,extraout_ECX_02);
  puVar3 = local_34;
  if ((0 < local_28) && (local_34 != (undefined4 *)0x0)) {
    local_38 = &local_34;
    uVar2 = FUN_00447770(&local_38);
    if (uVar2 < (uint)puVar3[0xb]) {
      FUN_00410320(uVar2);
    }
  }
  FID_conflict__free(local_30);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_34 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_34)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

