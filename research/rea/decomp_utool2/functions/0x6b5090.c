// rea decompile_all
// name: FUN_006b5090
// address: 0x6b5090
// body: available
// range: 0x6b5090-0x6b53fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5090(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  undefined4 *puStack_54;
  int *piStack_50;
  int *local_4c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723db9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_4c = (int *)0x6b50c4;
  uVar2 = FUN_006e3b20();
  if (param_1 == (int *)(in_ECX + 0x1a4)) {
    if (uVar2 < *(uint *)(in_ECX + 0x10)) {
      if (uVar2 < *(uint *)(in_ECX + 0x10)) {
        local_4c = (int *)0x6b50ea;
        FUN_004179e0();
      }
      FUN_006e7e60();
      FUN_006e6400(&puStack_54);
      FUN_006ce9f0(1);
      FUN_006b5ac0();
    }
    goto LAB_006b53c4;
  }
  if (param_1 != (int *)(in_ECX + 0xc4)) {
    if (param_1 == (int *)(in_ECX + 0x284)) {
      local_4c = (int *)0x6b5317;
      FUN_006b5700();
    }
    else {
      if (param_1 == (int *)(in_ECX + 0x364)) {
        if (((int)uVar2 < 1) || (*(int *)(in_ECX + 0x10) <= (int)uVar2)) goto LAB_006b53c4;
        local_4c = (int *)&param_1;
        piStack_50 = (int *)0x6b5344;
        FUN_0062a1b0();
        local_8 = 6;
        if (uVar2 < *(uint *)(in_ECX + 0x10)) {
          local_4c = (int *)0x6b5359;
          FUN_004179e0();
        }
        puVar4 = (undefined4 *)(uVar2 - 1);
      }
      else {
        if (((param_1 != (int *)(in_ECX + 0x470)) || ((int)uVar2 < 0)) ||
           (*(int *)(in_ECX + 0x10) + -1 <= (int)uVar2)) goto LAB_006b53c4;
        local_4c = (int *)&param_1;
        piStack_50 = (int *)0x6b5381;
        FUN_0062a1b0();
        local_8 = 7;
        if (uVar2 < *(uint *)(in_ECX + 0x10)) {
          local_4c = (int *)0x6b5396;
          FUN_004179e0();
        }
        puVar4 = (undefined4 *)(uVar2 + 1);
      }
      piStack_50 = (int *)0x6b53a6;
      local_4c = puVar4;
      FUN_00459120();
      local_4c = (int *)0x1;
      piStack_50 = (int *)0x0;
      puStack_54 = puVar4;
      FUN_00699dd0();
      local_8 = 0xffffffff;
      FUN_0040ea50();
    }
    goto LAB_006b53c4;
  }
  piVar6 = *(int **)(in_ECX + 0x14);
  piVar7 = piVar6 + -2;
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_8 = 0;
  param_1 = piVar6;
  if (piVar6 == (int *)&DAT_00bfe12c) {
LAB_006b515f:
    local_4c = &local_14;
    piStack_50 = (int *)0x6b516d;
    puVar4 = (undefined4 *)FUN_0062a1b0();
    piVar7 = (int *)*puVar4;
    *puVar4 = piVar6;
    piVar6 = (int *)(local_14 + -8);
    param_1 = piVar7;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_4c = (int *)0x6b5197;
        FID_conflict__free(piVar6);
      }
    }
  }
  else {
    piStack_50 = (int *)0x6b5158;
    local_4c = piVar6;
    iVar3 = FUN_0045c1e0();
    piVar7 = piVar6;
    if (iVar3 == 0) goto LAB_006b515f;
  }
  if (piVar7 == (int *)&DAT_00bfe12c) {
LAB_006b51bc:
    puVar4 = (undefined4 *)FUN_006120a0();
    piVar6 = (int *)*puVar4;
    *puVar4 = piVar7;
    piVar7 = (int *)(local_14 + -8);
    param_1 = piVar6;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_4c = (int *)0x6b51ee;
        FID_conflict__free(piVar7);
      }
    }
  }
  else {
    piStack_50 = (int *)0x6b51b5;
    local_4c = piVar7;
    iVar3 = FUN_0045c1e0();
    piVar6 = piVar7;
    if (iVar3 == 0) goto LAB_006b51bc;
  }
  local_4c = (int *)0x6b5202;
  FUN_0045c990();
  local_8._0_1_ = 1;
  uVar5 = FUN_00637250();
  local_4c = (int *)0x1;
  piStack_50 = &local_14;
  local_8 = CONCAT31(local_8._1_3_,2);
  puStack_54 = &param_1;
  FUN_006e1bb0(uVar5);
  piVar7 = (int *)(local_18 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_4c = (int *)0x6b5250;
      FID_conflict__free(piVar7);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_4c = (int *)0x6b5278;
      FID_conflict__free(piVar7);
    }
  }
  local_4c = (int *)0x9;
  piStack_50 = (int *)0x6b5286;
  cVar1 = FUN_006b7db0();
  if (cVar1 != '\0') {
    local_4c = (int *)0x6b5296;
    FUN_006e19a0();
    piStack_50 = (int *)0x6b52a0;
    local_4c = (int *)uVar2;
    FUN_00459120();
    piVar7 = param_1 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_4c = (int *)0x6b52c2;
        FID_conflict__free(piVar7);
      }
    }
  }
  FUN_006e1b20();
  piVar6 = piVar6 + -2;
  local_8 = 0xffffffff;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_4c = (int *)0x6b52fc;
      FID_conflict__free(piVar6);
    }
  }
LAB_006b53c4:
  FUN_006e7e60();
  FUN_006e6400(&puStack_54);
  FUN_006ce9f0(1);
  FUN_006b5ac0();
  ExceptionList = local_10;
  return;
}

