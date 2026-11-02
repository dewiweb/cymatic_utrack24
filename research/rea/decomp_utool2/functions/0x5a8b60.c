// rea decompile_all
// name: FUN_005a8b60
// address: 0x5a8b60
// body: available
// range: 0x5a8b60-0x5a8eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a8b60(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined8 *local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717ae3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar6 = (int *)(in_ECX + 0x15c);
  local_14 = piVar6;
  FUN_0041e630();
  if (*(int *)(in_ECX + 0x160) != 0) {
    FID_conflict__free((void *)*piVar6);
    *piVar6 = 0;
    *(undefined4 *)(in_ECX + 0x160) = 0;
  }
  *(undefined4 *)(in_ECX + 0x164) = 0;
  FUN_005b2a40();
  local_8 = 0;
  FUN_00635a10(&local_20);
  local_8._0_1_ = 2;
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_006351a0();
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar3 = FUN_00634f90();
  local_1c = iVar3;
  if (iVar3 != 0) {
    iVar4 = FUN_00448730(*(undefined4 *)(iVar3 + 0xc));
    if ((iVar4 == 0) &&
       (piVar5 = *(int **)(iVar3 + 4), iVar3 = local_1c, local_18 = piVar5, piVar5 != (int *)0x0)) {
      do {
        local_24 = (char *)piVar5[3];
        local_28 = "ns0:items";
        local_18 = piVar5;
        do {
          iVar3 = FUN_00443260();
          iVar4 = FUN_00443260();
          if ((iVar3 - iVar4 != 0) && ((iVar3 - iVar4 >> 0x1f & 0xfffffffeU) != 0xffffffff))
          goto LAB_005a8e46;
        } while (iVar3 != 0);
        puVar1 = (undefined4 *)piVar5[1];
        for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
          local_28 = (char *)puVar1[3];
          local_24 = "ns0:item";
          do {
            iVar3 = FUN_00443260();
            iVar4 = FUN_00443260();
            if ((iVar3 - iVar4 != 0) && ((iVar3 - iVar4 >> 0x1f & 0xfffffffeU) != 0xffffffff))
            goto LAB_005a8e39;
          } while (iVar3 != 0);
          FUN_0061a410(&DAT_007480ac);
          FUN_00630c40();
          iVar3 = FUN_0061a410();
          ppuVar7 = (undefined **)(iVar3 + 8);
          if (iVar3 == 0) {
            ppuVar7 = &PTR_DAT_00c7ed68;
          }
          puVar2 = *ppuVar7;
          piVar6 = (int *)(puVar2 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          local_30 = puVar2;
          local_2c = operator_new(0x10);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
          }
          *(undefined4 *)local_2c = local_38;
          *(undefined4 *)((int)local_2c + 4) = local_34;
          *(undefined **)((int)local_2c + 8) = puVar2;
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar6);
              }
            }
          }
          iVar3 = local_14[2];
          iVar4 = iVar3 + 1;
          if (local_14[1] < iVar4) {
            if (iVar4 < 0) {
              iVar4 = iVar3 + 2;
            }
            uVar8 = iVar3 + 9 + (iVar4 >> 1) & 0xfffffff8;
            if (local_14[1] != uVar8) {
              if ((int)uVar8 < 1) {
                FID_conflict__free((void *)*local_14);
                *local_14 = 0;
              }
              else if (*local_14 == 0) {
                iVar3 = FUN_004c554b();
                *local_14 = iVar3;
              }
              else {
                iVar3 = FUN_004c553b(*local_14);
                *local_14 = iVar3;
              }
              local_14[1] = uVar8;
            }
          }
          iVar3 = local_14[2];
          local_14[2] = iVar3 + 1;
          local_8 = CONCAT31(local_8._1_3_,3);
          *(undefined8 **)(*local_14 + iVar3 * 4) = local_2c;
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar6);
            }
          }
LAB_005a8e39:
          piVar5 = local_18;
        }
LAB_005a8e46:
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
      local_18 = (int *)0x0;
      piVar6 = local_14;
      iVar3 = local_1c;
    }
    FUN_00634ec0();
    FUN_004bfe14(iVar3);
  }
  local_40 = &DAT_00bfe12c;
  local_48 = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_2c = &local_48;
  FUN_0041e690(piVar6[2] * 4 >> 2);
  piVar6 = (int *)(local_40 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_00635110();
  piVar6 = (int *)(local_20 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

