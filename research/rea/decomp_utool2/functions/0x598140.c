// rea decompile_all
// name: FUN_00598140
// address: 0x598140
// body: available
// range: 0x598140-0x598556 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00598140(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 local_1c;
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715293;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x22e0) == '\0') {
    uVar2 = FUN_00636d50(*(undefined4 *)(in_ECX + 0x22c8));
    local_8 = 0;
    FUN_006e4900(uVar2);
    piVar6 = (int *)(local_1c._4_4_ + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_0041c710();
    puVar9 = local_14;
    local_8 = 1;
    piVar6 = (int *)(local_14 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    cVar1 = FUN_005b5020();
    if (cVar1 == '\0') {
      FUN_00634890();
      piVar6 = (int *)(local_1c._4_4_ + -8);
      puVar9 = local_14;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
          puVar9 = local_14;
        }
      }
    }
    *(undefined4 *)(in_ECX + 0x22d8) = 0;
    *(undefined4 *)(in_ECX + 0x22dc) = 0;
    piVar6 = (int *)(puVar9 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    cVar1 = FUN_005b5020();
    if (cVar1 == '\0') {
      *(undefined4 *)(in_ECX + 0x22d0) = 0;
      *(undefined4 *)(in_ECX + 0x22d4) = 0;
      FUN_0045c990();
      local_8._0_1_ = 4;
      FUN_006e4900((int)&local_1c + 4);
      local_8._0_1_ = 1;
      piVar6 = (int *)(local_1c._4_4_ + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      FUN_0045c990();
      iVar4 = (int)&local_1c + 4;
      local_8._0_1_ = 5;
    }
    else {
      uVar10 = FUN_00612d20();
      iVar8 = (int)((ulonglong)uVar10 >> 0x20);
      uVar3 = (uint)uVar10;
      *(uint *)(in_ECX + 0x22d0) = uVar3;
      iVar7 = uVar3 - *(uint *)(in_ECX + 0x22c8);
      *(int *)(in_ECX + 0x22d8) = iVar7;
      *(uint *)(in_ECX + 0x22dc) =
           (iVar8 - *(int *)(in_ECX + 0x22cc)) - (uint)(uVar3 < *(uint *)(in_ECX + 0x22c8));
      iVar4 = *(int *)(in_ECX + 0x22dc);
      *(int *)(in_ECX + 0x22d4) = iVar8;
      if ((iVar4 < 1) && (iVar4 < 0)) {
        local_1c = 0;
        local_1c._4_4_ = 0;
        local_1c._0_4_ = 0;
        iVar7 = (int)local_1c;
        iVar4 = local_1c._4_4_;
      }
      *(int *)(in_ECX + 0x22dc) = iVar4;
      *(int *)(in_ECX + 0x22d8) = iVar7;
      uVar2 = FUN_00636d50(*(undefined4 *)(in_ECX + 0x22d0));
      local_8._0_1_ = 2;
      FUN_006e4900(uVar2);
      local_8._0_1_ = 1;
      piVar6 = (int *)(local_1c._4_4_ + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar4 = FUN_00636d50(*(undefined4 *)(in_ECX + 0x22d8));
      local_8._0_1_ = 3;
    }
    FUN_006e4900(iVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar6 = (int *)(local_1c._4_4_ + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    iVar4 = *(int *)(*(int *)(in_ECX + 0xd4) + 0x31c);
    if ((iVar4 < 0) || ((iVar4 < 1 && (*(int *)(*(int *)(in_ECX + 0xd4) + 0x318) == 0)))) {
      FUN_006e6170(0x1000281);
    }
    else {
      FUN_005980b0(&stack0xffffffd0,*(undefined4 *)(in_ECX + 0x22d0),
                   *(undefined4 *)(in_ECX + 0x22d4));
      FUN_006e6170(0x1000281);
      FUN_005980b0(&stack0xffffffd0,*(undefined4 *)(in_ECX + 0x22d8),
                   *(undefined4 *)(in_ECX + 0x22dc));
    }
    FUN_006e6170(0x1000281);
    if (((((((puVar9 == PTR_DAT_00c7ed54) || (iVar4 = FUN_0045c1e0(puVar9), iVar4 == 0)) ||
           (*(int *)(in_ECX + 0x22cc) < 0)) ||
          ((*(int *)(in_ECX + 0x22cc) < 1 && (*(int *)(in_ECX + 0x22c8) == 0)))) ||
         ((*(int *)(in_ECX + 0x22dc) < 0 ||
          ((*(int *)(in_ECX + 0x22dc) < 1 && (*(int *)(in_ECX + 0x22d8) == 0)))))) ||
        ((*(byte *)(in_ECX + 0x15c0) & 2) != 0)) ||
       ((*(char *)(in_ECX + 0x22e1) == '\0' || (*(char *)(in_ECX + 0x22e2) != '\0')))) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    if ((*(byte *)(in_ECX + 0x16c1) >> 4 & 1) == bVar5) {
      iVar4 = *(int *)(in_ECX + 0x1664);
      *(byte *)(in_ECX + 0x16c1) = (bVar5 ^ 1) << 4 | *(byte *)(in_ECX + 0x16c1) & 0xef;
      if ((iVar4 == 0) ||
         (((*(byte *)(iVar4 + 0x69) & 0x10) == 0 &&
          ((*(int *)(iVar4 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))))) {
        FUN_006cc240();
      }
    }
    piVar6 = (int *)(puVar9 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

