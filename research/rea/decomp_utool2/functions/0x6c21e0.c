// rea decompile_all
// name: FUN_006c21e0
// address: 0x6c21e0
// body: available
// range: 0x6c21e0-0x6c2372 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c21e0(int *param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *in_ECX;
  undefined4 extraout_ECX;
  int iVar5;
  undefined **local_38;
  void *local_34;
  int local_2c;
  undefined ***local_28;
  undefined **local_24;
  void *local_20;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007255b7;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = &PTR_vftable_00c7ed34;
  local_1c[0] = (undefined1)param_1[3];
  local_8 = 0;
  local_14 = uVar2;
  if (*in_ECX != 0) {
    FUN_00461420(&DAT_00c8a9cc,&local_24,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_24 + 0x54))(local_1c,uVar2);
  FUN_006c2460(&local_38);
  local_8 = 1;
  if (local_38 != (undefined **)0x0) {
    FUN_00461a50(extraout_ECX);
  }
  iVar5 = 0;
  if (0 < param_1[2]) {
    do {
      puVar3 = (undefined4 *)(**(code **)(**(int **)(*param_1 + iVar5 * 4) + 4))(&local_24);
      local_8._0_1_ = 2;
      if (local_38 != (undefined **)0x0) {
        FUN_00461880(*puVar3,0xffffffff,0);
      }
      ppuVar1 = local_24;
      local_8 = CONCAT31(local_8._1_3_,1);
      if ((0 < local_18) && (local_24 != (undefined **)0x0)) {
        local_28 = &local_24;
        puVar4 = (undefined *)FUN_00447770(&local_28);
        if (puVar4 < ppuVar1[0xb]) {
          FUN_00410320(puVar4);
        }
      }
      FID_conflict__free(local_20);
      if (local_24 != (undefined **)0x0) {
        LOCK();
        ppuVar1 = local_24 + 1;
        puVar4 = *ppuVar1;
        *ppuVar1 = *ppuVar1 + -1;
        UNLOCK();
        if (puVar4 == (undefined *)0x1) {
          (**(code **)*local_24)(1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[2]);
  }
  ppuVar1 = local_38;
  if ((0 < local_2c) && (local_38 != (undefined **)0x0)) {
    local_28 = &local_38;
    puVar4 = (undefined *)FUN_00447770(&local_28);
    if (puVar4 < ppuVar1[0xb]) {
      FUN_00410320(puVar4);
    }
  }
  FID_conflict__free(local_34);
  if (local_38 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = local_38 + 1;
    puVar4 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + -1;
    UNLOCK();
    if (puVar4 == (undefined *)0x1) {
      (**(code **)*local_38)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

