// rea decompile_all
// name: FUN_005b5190
// address: 0x5b5190
// body: available
// range: 0x5b5190-0x5b54d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b5190(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  char in_DL;
  int iVar5;
  double in_XMM1_Qa;
  int *piStack_90;
  undefined1 *local_64;
  undefined1 *local_60;
  char local_59;
  int local_58;
  undefined1 local_15 [5];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007193bc;
  local_10 = ExceptionList;
  local_15._1_4_ = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = (int)in_XMM1_Qa;
  local_8 = 0;
  local_60 = (undefined1 *)(iVar5 / 0x3c);
  local_59 = in_DL;
  if (iVar5 % 0x3c < 0) {
    iVar2 = FUN_006104a0();
    *(undefined1 *)(iVar2 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  piStack_90 = (int *)0x5b522e;
  FUN_004557e0();
  local_8 = 1;
  FUN_00633d10(in_ECX);
  local_8 = local_8 & 0xffffff00;
  piVar4 = (int *)(local_58 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_90 = (int *)0x5b5271;
      FID_conflict__free(piVar4);
    }
  }
  if ((int)local_60 % 0x3c < 0) {
    piStack_90 = (int *)0x5b529a;
    iVar2 = FUN_006104a0();
    *(undefined1 *)(iVar2 + -1) = 0x2d;
    iVar2 = iVar2 + -1;
  }
  else {
    piStack_90 = (int *)0x5b528f;
    iVar2 = FUN_006104a0();
  }
  piStack_90 = (int *)(local_15 + -iVar2);
  FUN_004557e0();
  local_8 = 2;
  FUN_00633d10(&piStack_90,extraout_ECX,2);
  FUN_006377c0();
  piStack_90 = (int *)0x5b52db;
  puVar3 = (undefined4 *)FUN_00637730();
  uVar1 = *in_ECX;
  *in_ECX = *puVar3;
  *puVar3 = uVar1;
  piVar4 = (int *)(local_60 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_90 = (int *)0x5b5305;
      FID_conflict__free(piVar4);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar4 = (int *)(local_58 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_90 = (int *)0x5b532c;
      FID_conflict__free(piVar4);
      piVar4 = extraout_ECX_00;
    }
  }
  local_64 = &stack0xffffff74;
  if (0xe0f < iVar5) {
    local_60 = &stack0xffffff74;
    piStack_90 = piVar4;
    if (iVar5 / 0xe10 < 0) {
      iVar2 = FUN_006104a0();
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      local_60 = &stack0xffffff74;
      iVar2 = FUN_006104a0();
    }
    FUN_004557e0(local_15 + -iVar2);
    FUN_006377c0();
    piStack_90 = (int *)0x5b539e;
    puVar3 = (undefined4 *)FUN_00637730();
    uVar1 = *in_ECX;
    *in_ECX = *puVar3;
    *puVar3 = uVar1;
    piVar4 = (int *)(local_58 + -8);
    local_64 = (undefined1 *)&piStack_90;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      local_64 = (undefined1 *)&piStack_90;
      if (iVar2 == 0) {
        piStack_90 = (int *)0x5b53c8;
        FID_conflict__free(piVar4);
        local_64 = (undefined1 *)&piStack_90;
      }
    }
  }
  if (local_59 != '\0') {
    if ((int)((in_XMM1_Qa - (double)iVar5) * 1000.0) < 0) {
      iVar5 = FUN_006104a0();
      *(undefined1 *)(iVar5 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    piStack_90 = (int *)0x5b541e;
    FUN_004557e0();
    local_8 = 3;
    FUN_00633d10(&local_60);
    local_8._0_1_ = 4;
    piStack_90 = (int *)0x5b5449;
    FUN_00637690();
    local_8 = CONCAT31(local_8._1_3_,5);
    piStack_90 = (int *)0x5b5455;
    FUN_00636ec0();
    piVar4 = (int *)(local_64 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        piStack_90 = (int *)0x5b5475;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_60 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        piStack_90 = (int *)0x5b5498;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_58 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        piStack_90 = (int *)0x5b54b8;
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_15._1_4_ ^ (uint)&stack0xfffffffc);
  return;
}

