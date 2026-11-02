// rea decompile_all
// name: FUN_0058d390
// address: 0x58d390
// body: available
// range: 0x58d390-0x58d75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d390(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 local_a4;
  undefined1 **local_a0;
  undefined1 **local_9c;
  undefined1 **local_98;
  undefined1 **local_94;
  undefined1 **local_90;
  undefined1 **local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_35 [32];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713f22;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_ac = param_1;
  FUN_006104a0();
  puStack_d4 = (undefined1 *)0x58d3f5;
  FUN_004557e0();
  local_8 = 0;
  puStack_d4 = (undefined1 *)0x58d411;
  local_a8 = &stack0xffffff30;
  iVar1 = FUN_006104a0();
  puStack_d4 = local_35 + -iVar1;
  puStack_d8 = (undefined1 *)0x58d421;
  FUN_004557e0();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_9c = &puStack_d8;
  if (*(int *)(in_ECX + 0xe4) < 0) {
    puStack_dc = (undefined1 *)0x58d44f;
    local_a0 = &puStack_d4;
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    puStack_dc = (undefined1 *)0x58d444;
    local_a0 = &puStack_d4;
    local_9c = &puStack_d8;
    iVar1 = FUN_006104a0();
  }
  puStack_dc = &local_15 + -iVar1;
  puStack_e0 = (undefined1 *)0x58d464;
  FUN_004557e0();
  local_8._0_1_ = 2;
  local_94 = &puStack_e0;
  puStack_e4 = (undefined1 *)0x58d484;
  local_98 = &puStack_dc;
  iVar1 = FUN_006104a0();
  puStack_e4 = local_35 + -iVar1;
  puStack_e8 = (undefined1 *)0x58d494;
  FUN_004557e0();
  local_8._0_1_ = 3;
  local_8c = &puStack_e8;
  puStack_ec = (undefined1 *)0x58d4b4;
  local_90 = &puStack_e4;
  iVar1 = FUN_006104a0();
  puStack_ec = &local_15 + -iVar1;
  uStack_f0 = 0x58d4c4;
  FUN_004557e0();
  piStack_fc = &local_b8;
  local_84 = (undefined1 *)&uStack_f0;
  local_80 = (undefined1 *)&uStack_f4;
  local_7c = (undefined1 *)&uStack_f8;
  uStack_100 = 0x58d4e8;
  local_88 = (undefined1 *)&puStack_ec;
  local_a4 = FUN_00410ad0();
  local_8._0_1_ = 5;
  local_78 = (undefined1 *)&piStack_fc;
  local_74 = (undefined1 *)&uStack_100;
  FUN_005bdc60();
  local_8._0_1_ = 6;
  uVar5 = extraout_ECX;
  uVar6 = extraout_ECX;
  uVar2 = FUN_005bdda0(extraout_ECX,extraout_ECX);
  local_8 = CONCAT31(local_8._1_3_,7);
  uVar4 = extraout_ECX_00;
  FUN_00637690(uVar2);
  FUN_006377c0(uVar4);
  FUN_00637730(uVar5);
  FUN_006377c0(uVar6);
  FUN_00637730();
  uStack_100 = 0x58d57d;
  FUN_006377c0();
  piStack_fc = (int *)0x58d58b;
  FUN_00637730();
  uStack_f8 = 0x58d598;
  FUN_006377c0();
  uStack_f4 = 0x58d5a6;
  FUN_00637730();
  uStack_f0 = 0x58d5b6;
  FUN_006377c0();
  puStack_ec = (undefined1 *)0x58d5c4;
  FUN_00637730();
  puStack_e8 = (undefined1 *)0x58d5d4;
  FUN_006377c0();
  puStack_e4 = (undefined1 *)0x58d5e2;
  FUN_00637730();
  puStack_e0 = (undefined1 *)0x58d5f2;
  FUN_006377c0();
  puStack_dc = (undefined1 *)0x58d600;
  FUN_00637730();
  puStack_d8 = (undefined1 *)0x58d610;
  FUN_006377c0();
  puStack_d4 = (undefined1 *)0x58d620;
  FUN_00637730();
  piVar3 = (int *)(local_b0 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d645;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_b4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d66b;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_b8 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d691;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_60 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d6b4;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_64 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d6d7;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_68 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d6fa;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_6c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d71d;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_70 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_d4 = (undefined1 *)0x58d73d;
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

