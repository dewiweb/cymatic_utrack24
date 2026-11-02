// rea decompile_all
// name: FUN_005ba670
// address: 0x5ba670
// body: available
// range: 0x5ba670-0x5ba985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ba670(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00719c26;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  local_40 = in_ECX;
  DVar3 = timeGetTime();
  if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar3;
  }
  uVar6 = DVar3 - *(int *)(in_ECX + 0x20);
  FUN_006104a0();
  FUN_004557e0();
  local_8 = 0;
  local_60 = FUN_00633d10(&local_68,extraout_ECX);
  local_8._0_1_ = 1;
  local_5c = &stack0xffffff80;
  local_58 = uVar6 / 60000;
  iVar4 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar4);
  local_8._0_1_ = 2;
  local_54 = FUN_00633d10(&local_64,extraout_ECX_00,2);
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar7 = extraout_ECX_01;
  uVar8 = extraout_ECX_01;
  uVar9 = extraout_ECX_01;
  iVar4 = FUN_006104a0(extraout_ECX_01,extraout_ECX_01,extraout_ECX_01);
  FUN_004557e0(&local_15 + -iVar4);
  FUN_006377c0(uVar7);
  FUN_00637730(uVar8);
  FUN_006377c0(uVar9);
  FUN_00637730();
  piVar5 = (int *)(local_64 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_48 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_68 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  piVar5 = (int *)(local_4c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  iVar4 = local_40;
  FUN_004ec5e0();
  piVar5 = (int *)(local_3c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_006377c0(local_3c);
  local_44 = (undefined4 *)FUN_00637730();
  if (*(int *)(iVar4 + 0xdc) < *(int *)(iVar4 + 0xe0) + 1) {
    FUN_00409cf0();
  }
  iVar2 = *(int *)(iVar4 + 0xe0);
  *(int *)(iVar4 + 0xe0) = iVar2 + 1;
  puVar1 = (undefined4 *)(*(int *)(iVar4 + 0xd8) + iVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *local_44;
    *local_44 = &DAT_00bfe12c;
  }
  piVar5 = (int *)(local_40 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_004edc50(local_50);
  if (1000 < uVar6 - _DAT_00c8aaac) {
    Sleep(400);
    _DAT_00c8aaac = uVar6;
  }
  piVar5 = (int *)(local_3c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

