// rea decompile_all
// name: FUN_006c28b0
// address: 0x6c28b0
// body: available
// range: 0x6c28b0-0x6c2a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c28b0(undefined4 **param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 **local_38;
  undefined4 *local_34;
  void *local_30;
  undefined4 local_2c;
  int local_28;
  undefined **local_24 [2];
  double local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007256e5;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_38 = param_1;
  local_14 = uVar3;
  operator_new(0x34);
  puVar4 = (undefined4 *)FUN_00460e00(&DAT_00c8aa1c);
  *param_1 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
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
  local_1c = (double)*(float *)(in_ECX + 0x7c);
  local_24[0] = &PTR_vftable_00c7ed2c;
  local_8._0_1_ = 2;
  if (local_34 != (undefined4 *)0x0) {
    FUN_00461420(&DAT_00c8a988,local_24,0);
  }
  local_8._0_1_ = 1;
  (**(code **)(*local_24[0] + 0x54))(&local_1c,uVar3);
  FUN_006c3100(*(undefined4 *)(in_ECX + 0x80),0);
  FUN_006c2d20(in_ECX + 0x84,extraout_ECX);
  if ((*(int *)(in_ECX + 0x78) != 0) && (param_2 != (int *)0x0)) {
    uVar5 = (**(code **)(*param_2 + 8))(local_24,(int *)(in_ECX + 0x78));
    local_8._0_1_ = 3;
    if (local_34 != (undefined4 *)0x0) {
      FUN_00461420(&DAT_00c8aa38,uVar5,0);
    }
    (**(code **)(*local_24[0] + 0x54))(&local_1c);
  }
  puVar4 = local_34;
  if ((0 < local_28) && (local_34 != (undefined4 *)0x0)) {
    local_38 = &local_34;
    uVar3 = FUN_00447770(&local_38);
    if (uVar3 < (uint)puVar4[0xb]) {
      FUN_00410320(uVar3);
    }
  }
  FID_conflict__free(local_30);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_34 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_34)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

