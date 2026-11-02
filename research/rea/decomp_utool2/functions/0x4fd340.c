// rea decompile_all
// name: FUN_004fd340
// address: 0x4fd340
// body: available
// range: 0x4fd340-0x4fd75a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004fd340(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int in_ECX;
  int *piVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  undefined8 in_XMM0_Qa;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  char *local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706d66;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FUN_00410a10();
  local_1c = (undefined4 *)0x0;
  local_8 = 1;
  if ((*(char *)(in_ECX + 0xdf4) == '\0') ||
     (cVar2 = FUN_005483b0(), puVar10 = local_1c, cVar2 != '\0')) {
    puVar10 = local_1c;
    iVar4 = *(int *)(in_ECX + 0x98);
    FUN_00533620();
    iVar1 = local_20;
    *(undefined8 *)(iVar4 + 0x38) = in_XMM0_Qa;
    FUN_00541b50();
    *(undefined4 *)(*(int *)(iVar1 + 0x98) + 0x24) = *(undefined4 *)(iVar1 + 0xdfc);
    *(undefined4 *)(*(int *)(iVar1 + 0x98) + 0x28) = *(undefined4 *)(iVar1 + 0xe00);
    *(undefined4 *)(*(int *)(iVar1 + 0x98) + 0x2c) = *(undefined4 *)(iVar1 + 0xe04);
    *(undefined4 *)(*(int *)(iVar1 + 0x98) + 0x30) = 2;
    FUN_0040f2d0(&stack0xffffffa4);
    FUN_00410b10();
    FUN_00533710();
    bVar3 = 1;
    local_11 = 1;
    do {
      iVar4 = FUN_005406f0();
      if (iVar4 == 0) {
        if ((*(char *)(iVar1 + 0xdf4) != '\0') && (*local_18 != '\0')) {
          puVar6 = (undefined4 *)FUN_00458890();
          DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
          if ((DVar7 & 0x10) == 0) {
            FUN_00548150();
            FUN_00635980();
          }
        }
        *(undefined4 *)(iVar1 + 0xdec) = 4;
        FUN_0045c990();
        local_8._0_1_ = 4;
        FUN_006e4900(&local_28);
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar8 = (int *)(local_28 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_006e6170(0x1000280);
        FUN_006e6170(0x1000281);
        FUN_004fbe50();
        break;
      }
      if (iVar4 == 1) {
        FUN_0045c990();
        FUN_00410a10();
        local_8._0_1_ = 6;
        uVar5 = FUN_00636040();
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_006e1bb0(&local_24,uVar5,&PTR_DAT_00c7ed68,1);
        piVar8 = (int *)(local_28 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_2c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8._0_1_ = 0xb;
        piVar8 = (int *)(local_24 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        cVar2 = FUN_006b7db0(9);
        local_8 = CONCAT31(local_8._1_3_,1);
        bVar3 = -(cVar2 != '\0') & local_11;
        local_11 = bVar3;
        FUN_006e1b20();
      }
      else if (iVar4 == 2) {
        FUN_0045c990();
        local_8._0_1_ = 0xc;
        FUN_0045c990();
        local_8._0_1_ = 0xd;
        FUN_0045c990();
        local_8 = CONCAT31(local_8._1_3_,0xe);
        FUN_004ecce0(&local_28);
        piVar8 = (int *)(local_24 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_20 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_28 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        goto LAB_004fd532;
      }
    } while (bVar3 != 0);
    FUN_00548700();
    FUN_004fbe50();
    uVar9 = 1;
  }
  else {
LAB_004fd532:
    uVar9 = 0;
  }
  if (puVar10 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = puVar10 + 1;
    iVar4 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar10)();
    }
  }
  piVar8 = (int *)(local_18 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return uVar9;
}

