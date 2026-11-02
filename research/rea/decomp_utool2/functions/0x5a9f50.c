// rea decompile_all
// name: FUN_005a9f50
// address: 0x5a9f50
// body: available
// range: 0x5a9f50-0x5aa4dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a9f50(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *extraout_ECX;
  int *extraout_ECX_00;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int *piStack_144;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  uint local_9c;
  undefined1 local_59 [62];
  char acStack_1b [2];
  int local_19;
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717c6c;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00633420();
  iVar2 = FUN_0062ecc0();
  if (iVar2 < 0) {
    iVar2 = FUN_006104a0();
    *(undefined1 *)(iVar2 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  piStack_144 = (int *)0x5a9fcd;
  FUN_004557e0();
  local_8 = 0;
  local_ac = FUN_00633d10(&local_d0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FUN_0062ed60();
  if (iVar2 + 1 < 0) {
    iVar2 = FUN_006104a0();
    *(undefined1 *)(iVar2 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  piStack_144 = (int *)0x5aa035;
  FUN_004557e0();
  local_8._0_1_ = 2;
  FUN_00633d10(&local_cc);
  local_8 = CONCAT31(local_8._1_3_,3);
  piStack_144 = (int *)0x5aa065;
  iVar2 = FUN_0062edc0();
  if (iVar2 < 0) {
    iVar2 = FUN_006104a0();
    *(undefined1 *)(iVar2 + -1) = 0x2d;
    iVar2 = iVar2 + -1;
  }
  else {
    iVar2 = FUN_006104a0();
  }
  FUN_004557e0(local_59 + -iVar2);
  FUN_00637730();
  piStack_144 = (int *)0x5aa0b4;
  FUN_00637730();
  piVar6 = (int *)(local_cc + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_144 = (int *)0x5aa0e5;
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_b8 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_144 = (int *)0x5aa117;
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_d0 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_144 = (int *)0x5aa149;
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_bc + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_144 = (int *)0x5aa17b;
      FID_conflict__free(piVar6);
    }
  }
  uVar9 = 1;
  local_9c = 1;
  local_ac = local_a8;
  piVar6 = (int *)(local_a8 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,9);
  iVar2 = local_a8;
  while( true ) {
    piVar6 = (int *)(iVar2 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    piStack_144 = (int *)0x5aa1db;
    local_b4 = iVar2;
    cVar1 = FUN_005a8940();
    if (cVar1 == '\0') break;
    local_19._0_1_ = 0;
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
      pcVar8 = acStack_1b + 2;
      do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + -1;
        uVar7 = uVar9 / 10;
        *pcVar8 = (char)uVar9 + (char)uVar7 * -10 + '0';
        uVar9 = uVar7;
      } while (uVar7 != 0);
      local_a0 = (int *)(pcVar10 + -2);
      *(char *)local_a0 = '-';
    }
    else {
      local_a0 = (int *)(acStack_1b + 2);
      do {
        local_a0 = (int *)((int)local_a0 + -1);
        uVar7 = uVar9 / 10;
        *(char *)local_a0 = (char)uVar9 + (char)uVar7 * -10 + '0';
        uVar9 = uVar7;
      } while (uVar7 != 0);
    }
    iVar4 = -(int)local_a0;
    pcVar8 = acStack_1b + iVar4 + 2;
    piStack_144 = (int *)0x5aa261;
    piVar3 = (int *)FUN_004bfe22();
    piVar3[1] = (uint)(&uStack_15 + iVar4) & 0xfffffffc;
    local_c0 = piVar3 + 2;
    *piVar3 = 0;
    piVar6 = local_a0;
    while ((0 < (int)pcVar8 && (iVar4 = FUN_00443260(), piVar6 = extraout_ECX, iVar4 != 0))) {
      piStack_144 = (int *)0x5aa2af;
      FUN_0044ecc0();
      pcVar8 = pcVar8 + -1;
      piVar6 = extraout_ECX_00;
    }
    *(undefined1 *)local_c0 = 0;
    local_9c = local_9c + 1;
    local_8 = CONCAT31(local_8._1_3_,10);
    local_a0 = (int *)&piStack_144;
    piVar5 = (int *)(local_a8 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    piStack_144 = piVar6;
    FUN_006377c0(local_a8);
    FUN_00637730();
    piStack_144 = (int *)0x5aa328;
    piVar6 = (int *)FUN_006377c0();
    iVar4 = *piVar6;
    *piVar6 = iVar2;
    piVar6 = (int *)((int)local_a4 + -8);
    local_ac = iVar4;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        piStack_144 = (int *)0x5aa377;
        FID_conflict__free(piVar6);
      }
    }
    uVar9 = local_9c;
    local_8 = CONCAT31(local_8._1_3_,9);
    iVar2 = iVar4;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        piStack_144 = (int *)0x5aa3b5;
        FID_conflict__free(piVar3);
      }
    }
  }
  piStack_144 = (int *)0x5aa3c4;
  local_a4 = operator_new(0x10);
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  *local_a4 = local_c8;
  local_a4[1] = local_c4;
  local_a4[2] = iVar2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        piStack_144 = (int *)0x5aa416;
        FID_conflict__free(piVar6);
      }
    }
  }
  piVar3 = *(int **)(local_b0 + 0x168);
  if ((piVar3 != local_a4) && (*(int **)(local_b0 + 0x168) = local_a4, piVar3 != (int *)0x0)) {
    piVar5 = (int *)(piVar3[2] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        piStack_144 = (int *)0x5aa459;
        FID_conflict__free(piVar5);
      }
    }
    piStack_144 = piVar3;
    FUN_004bfe14();
  }
  piStack_144 = &local_ac;
  FUN_006e4900();
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_144 = (int *)0x5aa49b;
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_a8 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      piStack_144 = (int *)0x5aa4be;
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

