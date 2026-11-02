// rea decompile_all
// name: FUN_00549e00
// address: 0x549e00
// body: available
// range: 0x549e00-0x54a2ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00549e00(char *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong *in_ECX;
  int *piVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined1 *local_84;
  int local_30;
  int local_2c;
  int local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f9c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00416aa0();
  if (*(int *)((int)in_ECX + 0x1c) != 0) {
    local_84 = (undefined1 *)0x549e4e;
    FID_conflict__free(*(void **)(in_ECX + 3));
    *(undefined4 *)(in_ECX + 3) = 0;
    *(undefined4 *)((int)in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  if (*param_1 != '\0') {
    puVar2 = (undefined4 *)FUN_00458890();
    local_84 = (undefined1 *)0x549e84;
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      piVar12 = (int *)(param_1 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        UNLOCK();
      }
      LOCK();
      lVar14 = in_ECX[5];
      *(char **)(in_ECX + 5) = param_1;
      UNLOCK();
      piVar12 = (int *)((int)lVar14 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          local_84 = (undefined1 *)0x549ec4;
          FID_conflict__free(piVar12);
        }
      }
      local_84 = (undefined1 *)0x549ed3;
      FUN_006351a0();
      local_8 = CONCAT31(local_8._1_3_,1);
      local_84 = (undefined1 *)0x549ee1;
      puVar4 = (undefined1 *)FUN_00634f90();
      if (puVar4 != (undefined1 *)0x0) {
        local_84 = *(undefined1 **)(puVar4 + 0xc);
        iVar5 = FUN_00448730();
        if (iVar5 == 0) {
          for (puVar2 = *(undefined4 **)(puVar4 + 4); puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)*puVar2) {
            local_84 = (undefined1 *)puVar2[3];
            iVar5 = FUN_00448730();
            if (iVar5 == 0) {
              local_84 = (undefined1 *)0x549f48;
              puVar6 = (undefined4 *)FUN_00634a80();
              local_84 = (undefined1 *)0x549f4f;
              lVar14 = FID_conflict__atoll((char *)*puVar6);
              piVar12 = (int *)(local_28 + -8);
              *in_ECX = lVar14;
              if (piVar12 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar12;
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  local_84 = (undefined1 *)0x549f7f;
                  FID_conflict__free(piVar12);
                }
              }
            }
            else {
              local_84 = (undefined1 *)puVar2[3];
              iVar5 = FUN_00448730();
              if (iVar5 == 0) {
                local_84 = (undefined1 *)0x549fb3;
                FUN_00634a80();
                local_8 = CONCAT31(local_8._1_3_,2);
                local_84 = (undefined1 *)0x549fc3;
                piVar12 = (int *)FUN_006369b0();
                if (local_14 == (undefined1 *)*piVar12) {
                  local_18 = 0;
                }
                else {
                  local_84 = local_14;
                  local_18 = FUN_00448730();
                }
                piVar12 = (int *)(local_2c + -8);
                if (piVar12 != &DAT_00bfe124) {
                  LOCK();
                  iVar5 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar5 == 0) {
                    local_84 = (undefined1 *)0x54a00b;
                    FID_conflict__free(piVar12);
                  }
                }
                if (local_18 != 0) {
                  local_84 = (undefined1 *)0x54a020;
                  piVar12 = (int *)FUN_006369b0();
                  puVar1 = (undefined1 *)*piVar12;
                  *piVar12 = (int)local_14;
                  piVar12 = (int *)(local_30 + -8);
                  local_14 = puVar1;
                  if (piVar12 != &DAT_00bfe124) {
                    LOCK();
                    iVar5 = *piVar12;
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (iVar5 == 0) {
                      local_84 = (undefined1 *)0x54a04a;
                      FID_conflict__free(piVar12);
                    }
                  }
                }
                piVar12 = (int *)(local_14 + -8);
                if (piVar12 != &DAT_00bfe124) {
                  LOCK();
                  *piVar12 = *piVar12 + 1;
                  UNLOCK();
                }
                LOCK();
                lVar14 = in_ECX[1];
                *(undefined1 **)(in_ECX + 1) = local_14;
                UNLOCK();
                piVar12 = (int *)((int)lVar14 + -8);
                if (piVar12 != &DAT_00bfe124) {
                  LOCK();
                  iVar5 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar5 == 0) {
                    local_84 = (undefined1 *)0x54a082;
                    FID_conflict__free(piVar12);
                  }
                }
                local_8 = CONCAT31(local_8._1_3_,1);
                piVar12 = (int *)(local_14 + -8);
                if (piVar12 != &DAT_00bfe124) {
                  LOCK();
                  iVar5 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar5 == 0) {
                    local_84 = (undefined1 *)0x54a0b1;
                    FID_conflict__free(piVar12);
                  }
                }
              }
              else {
                local_84 = (undefined1 *)puVar2[3];
                iVar5 = FUN_00448730();
                local_84 = &stack0xffffff80;
                if (iVar5 == 0) {
                  FUN_00634a80();
                  local_84 = (undefined1 *)0x54a0e4;
                  uVar13 = FUN_005bd270();
                  *(undefined4 *)(in_ECX + 2) = uVar13;
                }
                else {
                  local_84 = (undefined1 *)puVar2[3];
                  iVar5 = FUN_00448730();
                  if (iVar5 == 0) {
                    for (puVar6 = (undefined4 *)puVar2[1]; puVar6 != (undefined4 *)0x0;
                        puVar6 = (undefined4 *)*puVar6) {
                      local_84 = (undefined1 *)0x54a130;
                      iVar5 = FUN_00633010();
                      local_84 = (undefined1 *)0x54a143;
                      iVar7 = FUN_00633010();
                      local_84 = (undefined1 *)0x54a155;
                      iVar8 = FUN_00633010();
                      local_84 = (undefined1 *)0x54a167;
                      iVar9 = FUN_00633010();
                      if ((((iVar5 != 0) && (iVar7 != 0)) && (iVar8 != 0)) && (iVar9 != 0)) {
                        local_84 = (undefined1 *)0x54a196;
                        FUN_00634a80();
                        local_8._0_1_ = 3;
                        FUN_005b1f90();
                        local_8._0_1_ = 5;
                        FUN_00637c10();
                        puVar10 = (undefined4 *)FUN_0053d3e0();
                        local_8._0_1_ = 6;
                        if (puVar10 != (undefined4 *)0x0) {
                          if (puVar10[0x14] != 0) {
                            *(undefined4 *)((int)in_ECX + 0x14) = puVar10[0x14];
                          }
                          local_84 = (undefined1 *)0x54a1e0;
                          puVar11 = (undefined4 *)FUN_00634a80();
                          local_8._0_1_ = 7;
                          local_84 = (undefined1 *)0x54a1eb;
                          FID_conflict__atoi((char *)*puVar11);
                          FUN_00634a80(&local_84);
                          FUN_005bcfe0();
                          local_84 = (undefined1 *)0x54a209;
                          FUN_005498f0();
                          FUN_00637c10();
                          local_84 = (undefined1 *)0x54a21f;
                          FUN_004111b0();
                          local_84 = (undefined1 *)0x54a227;
                          (**(code **)*puVar10)();
                        }
                        local_8 = CONCAT31(local_8._1_3_,1);
                        FUN_0040ea50();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_00634ec0();
        local_84 = puVar4;
        FUN_004bfe14();
      }
      uVar13 = 0;
      FUN_00635110();
      goto LAB_0054a2b8;
    }
  }
  piVar12 = (int *)(PTR_DAT_00c7ed54 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    UNLOCK();
  }
  LOCK();
  lVar14 = in_ECX[5];
  *(undefined **)(in_ECX + 5) = PTR_DAT_00c7ed54;
  UNLOCK();
  piVar12 = (int *)((int)lVar14 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (undefined1 *)0x54a2b0;
      FID_conflict__free(piVar12);
    }
  }
  uVar13 = 3;
LAB_0054a2b8:
  piVar12 = (int *)(param_1 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_84 = (undefined1 *)0x54a2d5;
      FID_conflict__free(piVar12);
    }
  }
  ExceptionList = local_10;
  return uVar13;
}

