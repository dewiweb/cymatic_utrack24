// rea decompile_all
// name: FUN_0059c2b0
// address: 0x59c2b0
// body: available
// range: 0x59c2b0-0x59c783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059c2b0(void)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  int iVar10;
  undefined4 in_stack_ffffff9c;
  void *local_4c;
  undefined4 local_48;
  int local_44;
  int *local_40;
  uint local_3c;
  int local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00715adf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_40 = (int *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_8 = 0;
  local_28 = in_ECX;
  FUN_0041cf60(in_ECX + 0x50,in_stack_ffffff9c);
  local_4c = (void *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_8._0_1_ = 1;
  local_1c = 0;
  local_18 = local_40;
  iVar8 = local_38;
  piVar6 = local_40;
  if (0 < *(int *)(in_ECX + 0x4c)) {
    local_24 = in_ECX + 0x44;
    do {
      FUN_0040f6b0(&local_18);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00635980();
      piVar7 = local_18 + -2;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_0040f6b0(&local_34);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_20 = (int *)FUN_00636040();
      piVar7 = piVar6;
      if (piVar6 != piVar6 + iVar8) {
        do {
          if ((*local_20 == *piVar7) || (iVar5 = FUN_0045c1e0(*local_20), iVar5 == 0))
          goto LAB_0059c45d;
          piVar7 = piVar7 + 1;
        } while (piVar7 != piVar6 + iVar8);
      }
      local_2c = iVar8 + 1;
      if ((int)local_3c < local_2c) {
        iVar5 = local_2c;
        if (local_2c < 0) {
          iVar5 = iVar8 + 2;
        }
        uVar9 = iVar8 + 9 + (iVar5 >> 1) & 0xfffffff8;
        if (local_3c != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free(piVar6);
            piVar6 = (int *)0x0;
            local_40 = piVar6;
            local_3c = uVar9;
          }
          else if (piVar6 == (int *)0x0) {
            piVar6 = (int *)FUN_004c554b();
            local_40 = piVar6;
            local_3c = uVar9;
          }
          else {
            piVar6 = (int *)FUN_004c553b(piVar6);
            local_40 = piVar6;
            local_3c = uVar9;
          }
        }
      }
      piVar7 = piVar6 + iVar8;
      iVar8 = local_2c;
      local_38 = local_2c;
      if (piVar7 != (int *)0x0) {
        iVar5 = *local_20;
        *piVar7 = iVar5;
        piVar7 = (int *)(iVar5 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
      }
LAB_0059c45d:
      piVar7 = (int *)(local_30 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8._0_1_ = 1;
      piVar7 = (int *)(local_34 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(local_28 + 0x4c));
  }
  local_34 = &local_11;
  local_18 = piVar6;
  FUN_0041d090(iVar8 * 4 >> 2);
  local_1c = 0;
  if (0 < iVar8) {
    do {
      iVar8 = local_1c;
      FUN_0040f6b0(&local_18);
      local_8._0_1_ = 5;
      piVar6 = local_18 + -2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      cVar4 = FUN_005b5020();
      if (cVar4 != '\0') {
        while( true ) {
          FUN_00636040();
          local_8._0_1_ = 6;
          FUN_0045c990();
          local_8._0_1_ = 7;
          FUN_00635ea0(&local_4c,3,1);
          local_8._0_1_ = 6;
          piVar6 = (int *)(local_24 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          if (local_44 != 0) break;
          FUN_00632db0();
          piVar6 = (int *)FUN_00636a10();
          puVar2 = (undefined1 *)*piVar6;
          puVar3 = *(undefined1 **)(local_28 + 0x5c);
          if ((undefined1 *)*piVar6 != *(undefined1 **)(local_28 + 0x5c)) {
            do {
              local_30 = puVar3;
              local_34 = puVar2;
              iVar8 = FUN_00443260();
              iVar5 = FUN_00443260();
              if ((iVar8 - iVar5 != 0) &&
                 (iVar5 = (iVar8 - iVar5 >> 0x1f & 0xfffffffeU) + 1, iVar5 != 0)) goto LAB_0059c5ed;
              puVar2 = local_34;
              puVar3 = local_30;
            } while (iVar8 != 0);
          }
          iVar5 = 0;
LAB_0059c5ed:
          piVar6 = (int *)(local_2c + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          piVar6 = local_18;
          if (iVar5 == 0) break;
          piVar7 = local_20 + -2;
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            UNLOCK();
          }
          LOCK();
          local_18 = local_20;
          UNLOCK();
          piVar6 = piVar6 + -2;
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          local_8._0_1_ = 5;
          piVar6 = local_20 + -2;
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar6);
            }
          }
        }
        piVar6 = local_20 + -2;
        iVar8 = local_1c;
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
            iVar8 = local_1c;
          }
        }
      }
      local_8._0_1_ = 1;
      piVar6 = local_18 + -2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_1c = iVar8 + 1;
    } while (local_1c < local_38);
    local_18 = local_40;
    iVar8 = local_38;
    piVar6 = local_40;
  }
  iVar5 = local_44;
  pvVar1 = local_4c;
  iVar10 = 0;
  if (0 < local_44) {
    do {
      piVar6 = (int *)(*(int *)((int)pvVar1 + iVar10 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar10 = iVar10 + 1;
      iVar8 = local_38;
      piVar6 = local_18;
    } while (iVar10 < iVar5);
  }
  FID_conflict__free(local_4c);
  iVar5 = 0;
  if (0 < iVar8) {
    do {
      piVar7 = (int *)(piVar6[iVar5] + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar8);
  }
  FID_conflict__free(piVar6);
  ExceptionList = local_10;
  return;
}

