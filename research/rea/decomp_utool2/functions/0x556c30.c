// rea decompile_all
// name: FUN_00556c30
// address: 0x556c30
// body: available
// range: 0x556c30-0x557293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00556c30(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *in_ECX;
  int *piVar14;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  undefined4 extraout_ECX_07;
  int *in_EDX;
  undefined1 *puVar15;
  undefined1 *puVar16;
  longlong lVar17;
  int local_54;
  int local_44;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_1c;
  undefined1 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00711394;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  local_8 = 0;
  if (*(char *)*param_1 != '\0') {
    local_14 = in_ECX;
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if ((DVar5 & 0x10) == 0) {
      pvVar6 = operator_new(0x58);
      local_8 = 1;
      iVar7 = FUN_005569f0();
      local_8 = local_8 & 0xffffff00;
      if (*local_14 != iVar7) {
        if (iVar7 != 0) {
          LOCK();
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
          UNLOCK();
        }
        puVar4 = (undefined4 *)*local_14;
        *local_14 = iVar7;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          piVar8 = puVar4 + 1;
          iVar7 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*puVar4)();
          }
        }
      }
      iVar7 = *local_14;
      piVar8 = (int *)(*param_1 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      LOCK();
      iVar9 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = *param_1;
      UNLOCK();
      piVar8 = (int *)(iVar9 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar7 = *local_14;
      piVar8 = (int *)(*in_EDX + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      LOCK();
      iVar9 = *(int *)(iVar7 + 0xc);
      *(int *)(iVar7 + 0xc) = *in_EDX;
      UNLOCK();
      piVar8 = (int *)(iVar9 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar7 = *local_14;
      puVar4 = (undefined4 *)FUN_00636970();
      *(undefined4 *)(iVar7 + 0x20) = *puVar4;
      *(undefined4 *)(iVar7 + 0x24) = puVar4[1];
      FUN_006351a0();
      local_8 = 2;
      iVar7 = FUN_00634f90();
      local_8._0_1_ = 3;
      if ((iVar7 == 0) || (iVar9 = FUN_00448730(*(undefined4 *)(iVar7 + 0xc)), iVar9 != 0)) {
        uVar11 = FUN_00636a10();
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_00637690(uVar11);
        puVar4 = (undefined4 *)FUN_006377c0();
        iVar9 = *local_14;
        if (*(int *)(iVar9 + 0x4c) < *(int *)(iVar9 + 0x50) + 1) {
          FUN_00409cf0();
        }
        iVar2 = *(int *)(iVar9 + 0x50);
        *(int *)(iVar9 + 0x50) = iVar2 + 1;
        puVar10 = (undefined4 *)(*(int *)(iVar9 + 0x48) + iVar2 * 4);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *puVar4;
          *puVar4 = &DAT_00bfe12c;
        }
        piVar8 = (int *)((int)pvVar6 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8._0_1_ = 3;
        piVar8 = (int *)(local_54 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar8);
          }
        }
      }
      else {
        piVar8 = local_14;
        for (puVar4 = *(undefined4 **)(iVar7 + 4); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          iVar9 = FUN_00448730(puVar4[3]);
          if (iVar9 == 0) {
            puVar10 = (undefined4 *)FUN_00634a80();
            uVar11 = *(undefined4 *)(*piVar8 + 0x10);
            *(undefined4 *)(*piVar8 + 0x10) = *puVar10;
            *puVar10 = uVar11;
            iVar9 = local_30;
LAB_00556e93:
            piVar14 = (int *)(iVar9 + -8);
            if (piVar14 != &DAT_00bfe124) {
              LOCK();
              iVar9 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar9 == 0) {
                FID_conflict__free(piVar14);
              }
            }
          }
          else {
            iVar9 = FUN_00448730(puVar4[3]);
            if (iVar9 == 0) {
              puVar10 = (undefined4 *)FUN_00634a80();
              lVar17 = FID_conflict__atoll((char *)*puVar10);
              *(longlong *)(*piVar8 + 0x20) = lVar17;
              iVar9 = local_34;
              goto LAB_00556e93;
            }
            iVar9 = FUN_00448730(puVar4[3]);
            if (iVar9 == 0) {
              puVar10 = (undefined4 *)FUN_00634a80();
              uVar11 = *(undefined4 *)(*piVar8 + 0x14);
              *(undefined4 *)(*piVar8 + 0x14) = *puVar10;
              *puVar10 = uVar11;
              iVar9 = local_38;
              goto LAB_00556e93;
            }
            iVar9 = FUN_00448730(puVar4[3]);
            if (iVar9 == 0) {
              puVar10 = (undefined4 *)FUN_00634a80();
              uVar11 = *(undefined4 *)(*piVar8 + 0x18);
              *(undefined4 *)(*piVar8 + 0x18) = *puVar10;
              *puVar10 = uVar11;
              FUN_00637c10();
            }
            else {
              iVar9 = FUN_00448730(puVar4[3]);
              if (iVar9 == 0) {
                FUN_00634a80();
                iVar9 = *piVar8;
                uVar11 = FUN_005bce00();
                *(undefined4 *)(iVar9 + 0x40) = uVar11;
                FUN_00637c10();
              }
              else {
                cVar3 = FUN_00634f60();
                if (cVar3 != '\0') {
                  puVar10 = (undefined4 *)puVar4[1];
                  puVar16 = &DAT_00bfe12c;
                  local_1c = &DAT_00bfe12c;
                  puVar15 = &DAT_00bfe12c;
                  local_18 = &DAT_00bfe12c;
                  local_8._0_1_ = 6;
                  piVar14 = extraout_ECX;
                  for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10) {
                    iVar9 = FUN_00448730(puVar10[3]);
                    if (iVar9 == 0) {
                      puVar12 = (undefined4 *)FUN_00634a80();
                      local_1c = (undefined1 *)*puVar12;
                      *puVar12 = puVar16;
                      piVar14 = (int *)(local_44 + -8);
                      puVar16 = local_1c;
                      if (piVar14 != &DAT_00bfe124) {
                        LOCK();
                        iVar9 = *piVar14;
                        *piVar14 = *piVar14 + -1;
                        UNLOCK();
                        if (iVar9 == 0) {
                          FID_conflict__free(piVar14);
                          piVar14 = extraout_ECX_00;
                        }
                      }
                    }
                    else {
                      iVar9 = FUN_00448730(puVar10[3]);
                      if (iVar9 == 0) {
                        puVar12 = (undefined4 *)FUN_00634a80();
                        puVar1 = (undefined1 *)*puVar12;
                        *puVar12 = puVar15;
                        local_18 = puVar1;
                        FUN_00637c10();
                        piVar14 = extraout_ECX_01;
                        puVar15 = puVar1;
                      }
                      else {
                        iVar9 = FUN_00448730(puVar10[3]);
                        if (iVar9 == 0) {
                          FUN_00634a80();
                          FUN_0045c380();
                          FUN_00637c10();
                          piVar14 = extraout_ECX_02;
                        }
                        else {
                          cVar3 = FUN_00634f60();
                          piVar14 = extraout_ECX_03;
                          if (cVar3 != '\0') {
                            for (puVar12 = (undefined4 *)puVar10[1]; puVar12 != (undefined4 *)0x0;
                                puVar12 = (undefined4 *)*puVar12) {
                              iVar9 = FUN_00448730(puVar12[3]);
                              if (iVar9 == 0) {
                                FUN_00634a80(&stack0xffffff60);
                                FUN_005bcfe0();
                                piVar14 = extraout_ECX_04;
                              }
                              else {
                                iVar9 = FUN_00448730(puVar12[3]);
                                piVar14 = extraout_ECX_05;
                                if (iVar9 == 0) {
                                  puVar13 = (undefined4 *)FUN_00634a80();
                                  FID_conflict__atoi((char *)*puVar13);
                                  FUN_00637c10();
                                  piVar14 = extraout_ECX_06;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  FUN_00637c50(&local_18);
                  uVar11 = extraout_ECX_07;
                  FUN_00637c50(&local_1c);
                  piVar8 = local_14;
                  FUN_00555620(uVar11,piVar14);
                  FUN_004111b0();
                  FUN_00637c10();
                  FUN_00637c10();
                  local_8._0_1_ = 3;
                  FUN_0040ea50();
                }
              }
            }
          }
        }
      }
      FUN_005558e0();
      if (iVar7 != 0) {
        FUN_00634ec0();
        FUN_004bfe14(iVar7);
      }
      FUN_00635110();
      ExceptionList = local_10;
      return local_14;
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

