// rea decompile_all
// name: FUN_0052b260
// address: 0x52b260
// body: available
// range: 0x52b260-0x52b74a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052b260(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  char *pcVar9;
  LPCWSTR pWVar10;
  char *pcVar11;
  int iVar12;
  void *local_58;
  undefined4 local_54;
  int local_50;
  void *local_4c;
  void *local_48;
  int local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  LPCWSTR local_20;
  undefined4 *local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c473;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = 0;
  local_18 = in_ECX;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_00627bf0();
      pcVar11 = local_14;
      local_8 = 0;
      if (*local_14 == '\0') {
        pWVar10 = L"";
        pcVar9 = local_14;
      }
      else {
        FUN_0045d6b0();
        pcVar1 = pcVar11 + 1;
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_00455850();
        pcVar9 = local_38;
        local_14 = local_38;
        pWVar10 = (LPCWSTR)(local_38 + ((uint)(pcVar11 + (4 - (int)pcVar1)) & 0xfffffffc));
        local_20 = pWVar10;
        FUN_0045e410();
      }
      DVar5 = GetFileAttributesW(pWVar10);
      if (((DVar5 & 0x10) == 0) || (DVar5 == 0xffffffff)) {
        FUN_0045c990();
        local_8 = CONCAT31(local_8._1_3_,6);
        piVar8 = (int *)FUN_006360d0();
        iVar6 = local_3c;
        if (*piVar8 == local_3c) {
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0045c1e0(*piVar8);
        }
        piVar8 = (int *)(local_40 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(iVar6 + -8);
        local_8 = local_8 & 0xffffff00;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        if (iVar12 == 0) {
          piVar8 = (int *)(pcVar9 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            UNLOCK();
          }
          FUN_00548e50();
          local_8._0_1_ = 7;
          if ((0 < (int)local_24[9]) && ((int)local_24[9] < 3)) {
            FUN_006369b0(&stack0xffffff94);
            FUN_0052b750(&local_30);
            local_8._0_1_ = 8;
            local_4c = operator_new(8);
            local_8._0_1_ = 9;
            FUN_006369b0(&stack0xffffff94);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              *piVar8 = *piVar8 + 1;
              UNLOCK();
            }
            uVar7 = FUN_0052ae70(pcVar9);
            iVar6 = local_18;
            piVar8 = (int *)(local_18 + 0x424);
            if (*(int *)(local_18 + 0x428) < *(int *)(local_18 + 0x42c) + 1) {
              FUN_00409cf0();
            }
            iVar12 = *(int *)(iVar6 + 0x42c);
            *(int *)(iVar6 + 0x42c) = iVar12 + 1;
            *(undefined4 *)(*piVar8 + iVar12 * 4) = uVar7;
            piVar8 = (int *)(local_30 + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar8);
              }
            }
          }
          if (local_24 != (undefined4 *)0x0) {
            LOCK();
            piVar8 = local_24 + 1;
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)*local_24)();
            }
          }
        }
      }
      else {
        local_58 = (void *)0x0;
        local_54 = 0;
        local_50 = 0;
        local_8._0_1_ = 1;
        FUN_0045c990();
        local_8._0_1_ = 2;
        iVar6 = FUN_00635ea0(&local_58,2,1);
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar8 = (int *)(local_28 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar12 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar12 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        pcVar9 = local_14;
        if ((0 < iVar6) && (local_20 = (LPCWSTR)0x0, 0 < local_50)) {
          do {
            pWVar10 = local_20;
            FUN_0040f6b0(&stack0xffffff94,local_20);
            FUN_00548e50();
            local_8._0_1_ = 3;
            if ((0 < (int)local_1c[9]) && ((int)local_1c[9] < 3)) {
              FUN_006369b0(&stack0xffffff94);
              FUN_0052b750(&local_2c);
              local_8._0_1_ = 4;
              local_48 = operator_new(8);
              local_8._0_1_ = 5;
              FUN_006369b0(&stack0xffffff94);
              piVar8 = (int *)(pcVar9 + -8);
              if (piVar8 != &DAT_00bfe124) {
                LOCK();
                *piVar8 = *piVar8 + 1;
                UNLOCK();
              }
              uVar7 = FUN_0052ae70(pcVar9);
              iVar6 = local_18;
              piVar8 = (int *)(local_18 + 0x424);
              if (*(int *)(local_18 + 0x428) < *(int *)(local_18 + 0x42c) + 1) {
                FUN_00409cf0();
              }
              iVar12 = *(int *)(iVar6 + 0x42c);
              *(int *)(iVar6 + 0x42c) = iVar12 + 1;
              *(undefined4 *)(*piVar8 + iVar12 * 4) = uVar7;
              piVar8 = (int *)(local_2c + -8);
              pWVar10 = local_20;
              if (piVar8 != &DAT_00bfe124) {
                LOCK();
                iVar6 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar6 == 0) {
                  FID_conflict__free(piVar8);
                  pWVar10 = local_20;
                }
              }
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            if (local_1c != (undefined4 *)0x0) {
              LOCK();
              piVar8 = local_1c + 1;
              iVar6 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)*local_1c)();
              }
            }
            local_20 = (LPCWSTR)((int)pWVar10 + 1);
          } while ((int)local_20 < local_50);
        }
        iVar6 = local_50;
        pvVar4 = local_58;
        iVar12 = 0;
        if (0 < local_50) {
          do {
            piVar8 = (int *)(*(int *)((int)pvVar4 + iVar12 * 4) + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar8);
              }
            }
            iVar12 = iVar12 + 1;
            pcVar9 = local_14;
          } while (iVar12 < iVar6);
        }
        FID_conflict__free(local_58);
      }
      piVar8 = (int *)(pcVar9 + -8);
      local_8 = 0xffffffff;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_34 = local_34 + 1;
      in_ECX = local_18;
    } while (local_34 < *(int *)(param_1 + 8));
  }
  FUN_006e7e60();
  FUN_004ea5c0(1);
  (**(code **)(*(int *)(in_ECX + -0x134) + 0x84))();
  ExceptionList = local_10;
  return;
}

