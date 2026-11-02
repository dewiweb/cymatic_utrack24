// rea decompile_all
// name: FUN_006c17a0
// address: 0x6c17a0
// body: available
// range: 0x6c17a0-0x6c18fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 ** FUN_006c17a0(undefined4 **param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *local_24;
  void *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007254c5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = 0;
  operator_new(0x34);
  puVar4 = (undefined4 *)FUN_00460e00(&DAT_00c8a974);
  ppuVar3 = param_1;
  *param_1 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
  }
  param_1[1] = (undefined4 *)0x0;
  param_1[2] = (undefined4 *)0x0;
  param_1[3] = (undefined4 *)0x0;
  local_24 = *param_1;
  local_14 = 1;
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    local_24[1] = local_24[1] + 1;
    UNLOCK();
  }
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 1;
  FUN_006c57b0(in_ECX + 8);
  FUN_006bfdc0(&local_24,param_2,extraout_ECX);
  if (*(int *)(in_ECX + 0x150) == 0) {
    uVar5 = FUN_0069d770(in_ECX + 0x90);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_006c21e0(uVar5,extraout_ECX_01);
    FUN_00407640();
  }
  else {
    FUN_006c21e0(*(int *)(in_ECX + 0x150),extraout_ECX_00);
  }
  puVar4 = local_24;
  if ((0 < local_18) && (local_24 != (undefined4 *)0x0)) {
    param_1 = &local_24;
    uVar6 = FUN_00447770(&param_1);
    if (uVar6 < (uint)puVar4[0xb]) {
      FUN_00410320(uVar6);
    }
  }
  FID_conflict__free(local_20);
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_24 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_24)(1);
    }
  }
  ExceptionList = local_10;
  return ppuVar3;
}

