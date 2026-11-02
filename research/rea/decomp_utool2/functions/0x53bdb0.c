// rea decompile_all
// name: FUN_0053bdb0
// address: 0x53bdb0
// body: available
// range: 0x53bdb0-0x53c659 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0053bdb0(char *param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int in_ECX;
  int *_Memory;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  double in_XMM0_Qa;
  longlong lVar12;
  float fVar13;
  float fVar14;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_44;
  int *local_3c;
  undefined1 *local_38;
  float local_34;
  undefined1 *local_30;
  double local_2c;
  int *local_24;
  float local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e02a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar8 = (int *)(param_1 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  LOCK();
  iVar5 = *(int *)(in_ECX + 0x70);
  *(int *)(in_ECX + 0x70) = (int)param_1;
  UNLOCK();
  piVar8 = (int *)(iVar5 + -8);
  local_14 = in_ECX;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  if (*param_1 != '\0') {
    puVar3 = (undefined4 *)FUN_00458890();
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if ((DVar4 & 0x10) == 0) {
      FUN_006351a0();
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar5 = FUN_00634f90();
      if (iVar5 != 0) {
        iVar6 = FUN_00448730(*(undefined4 *)(iVar5 + 0xc));
        if ((iVar6 == 0) && (piVar8 = *(int **)(iVar5 + 4), local_24 = piVar8, piVar8 != (int *)0x0)
           ) {
          do {
            local_24 = piVar8;
            iVar6 = FUN_00448730(piVar8[3]);
            if (iVar6 == 0) {
              puVar3 = (undefined4 *)FUN_00634a80();
              uVar10 = *(undefined4 *)(in_ECX + 0x20);
              *(undefined4 *)(in_ECX + 0x20) = *puVar3;
              *puVar3 = uVar10;
              iVar6 = local_a8;
LAB_0053bf60:
              _Memory = (int *)(iVar6 + -8);
              if (_Memory != &DAT_00bfe124) {
                LOCK();
                iVar6 = *_Memory;
                *_Memory = *_Memory + -1;
                UNLOCK();
                if (iVar6 == 0) {
                  FID_conflict__free(_Memory);
                }
              }
            }
            else {
              iVar6 = FUN_00448730(piVar8[3]);
              if (iVar6 == 0) {
                puVar3 = (undefined4 *)FUN_00634a80();
                lVar12 = FID_conflict__atoll((char *)*puVar3);
                *(longlong *)(in_ECX + 0x18) = lVar12;
                iVar6 = local_ac;
                goto LAB_0053bf60;
              }
              iVar6 = FUN_00448730(piVar8[3]);
              if (iVar6 == 0) {
                puVar3 = (undefined4 *)FUN_00634a80();
                iVar6 = FID_conflict__atoi((char *)*puVar3);
                *(int *)(in_ECX + 0x24) = iVar6;
                iVar6 = local_b0;
                goto LAB_0053bf60;
              }
              iVar6 = FUN_00448730(piVar8[3]);
              if (iVar6 == 0) {
                puVar3 = (undefined4 *)FUN_00634a80();
                FID_conflict__atoi((char *)*puVar3);
                uVar10 = FUN_005be270();
                *(undefined4 *)(in_ECX + 0x28) = uVar10;
                FUN_00637c10();
              }
              else {
                iVar6 = FUN_00448730(piVar8[3]);
                if (iVar6 == 0) {
                  puVar3 = (undefined4 *)FUN_00634a80();
                  FID_conflict__atoi((char *)*puVar3);
                  uVar10 = FUN_005be240();
                  *(undefined4 *)(in_ECX + 0x2c) = uVar10;
                  FUN_00637c10();
                }
                else {
                  cVar2 = FUN_00634f60();
                  if (cVar2 == '\0') {
                    cVar2 = FUN_00634f60();
                    if ((cVar2 == '\0') || (*(int *)(in_ECX + 0x28) == 0)) {
                      cVar2 = FUN_00634f60();
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00634f60();
                        if (cVar2 == '\0') {
                          cVar2 = FUN_00634f60();
                          if (cVar2 == '\0') {
                            cVar2 = FUN_00634f60();
                            if (cVar2 == '\0') {
                              cVar2 = FUN_00634f60();
                              if (cVar2 != '\0') {
                                for (puVar3 = (undefined4 *)piVar8[1]; puVar3 != (undefined4 *)0x0;
                                    puVar3 = (undefined4 *)*puVar3) {
                                  cVar2 = FUN_00634f60();
                                  if (cVar2 != '\0') {
                                    puVar7 = (undefined4 *)FUN_00634a80();
                                    local_18 = *puVar7;
                                    FUN_0045c380();
                                    local_2c = in_XMM0_Qa;
                                    FUN_00637c10();
                                    FUN_00411820();
                                  }
                                }
                              }
                            }
                            else {
                              local_3c = (int *)piVar8[1];
                              if (local_3c != (int *)0x0) {
                                local_18 = 0;
                                do {
                                  puVar11 = &DAT_00bfe12c;
                                  local_44 = -1;
                                  local_30 = &DAT_00bfe12c;
                                  puVar9 = &DAT_00bfe12c;
                                  local_38 = &DAT_00bfe12c;
                                  local_8._0_1_ = 5;
                                  local_1c = (int *)local_3c[1];
                                  in_XMM0_Qa = 0.0;
                                  local_58 = -1;
                                  local_20 = 0.0;
                                  local_54 = 0;
                                  local_34 = 0.0;
                                  local_2c = 0.0;
                                  if (local_1c != (int *)0x0) {
                                    lVar12 = 0;
                                    do {
                                      iVar6 = FUN_00448730(local_1c[3]);
                                      if (iVar6 == 0) {
                                        puVar3 = (undefined4 *)FUN_00634a80();
                                        local_44 = FID_conflict__atoi((char *)*puVar3);
                                        goto LAB_0053c224;
                                      }
                                      cVar2 = FUN_00634f60();
                                      if (cVar2 != '\0') {
                                        FUN_00634a80();
                                        local_8._0_1_ = 6;
                                        puVar3 = (undefined4 *)FUN_005b2490();
                                        puVar1 = (undefined1 *)*puVar3;
                                        *puVar3 = puVar11;
                                        local_30 = puVar1;
                                        FUN_0040ea50();
                                        local_8._0_1_ = 5;
                                        FUN_00637c10();
                                        in_ECX = local_14;
                                        cVar2 = FUN_00635dd0();
                                        puVar11 = puVar1;
                                        if (cVar2 != '\0') {
                                          puVar3 = (undefined4 *)FUN_00636040();
                                          uVar10 = *(undefined4 *)(in_ECX + 0x60);
                                          *(undefined4 *)(in_ECX + 0x60) = *puVar3;
                                          *puVar3 = uVar10;
                                          FUN_0040ea50();
                                        }
                                        goto LAB_0053c22c;
                                      }
                                      cVar2 = FUN_00634f60();
                                      if (cVar2 == '\0') {
                                        cVar2 = FUN_00634f60();
                                        if (cVar2 != '\0') {
                                          puVar3 = (undefined4 *)FUN_00634a80();
                                          local_38 = (undefined1 *)*puVar3;
                                          *puVar3 = puVar9;
                                          puVar9 = local_38;
                                          goto LAB_0053c224;
                                        }
                                        cVar2 = FUN_00634f60();
                                        if (cVar2 == '\0') {
                                          cVar2 = FUN_00634f60();
                                          in_ECX = local_14;
                                          if (cVar2 == '\0') {
                                            cVar2 = FUN_00634f60();
                                            if (cVar2 == '\0') {
                                              cVar2 = FUN_00634f60();
                                              if (cVar2 == '\0') {
                                                cVar2 = FUN_00634f60();
                                                if (cVar2 == '\0') {
                                                  cVar2 = FUN_00634f60();
                                                  in_ECX = local_14;
                                                  if (cVar2 == '\0') goto LAB_0053c22c;
                                                  puVar3 = (undefined4 *)FUN_00634a80();
                                                  FID_conflict__atoi((char *)*puVar3);
                                                }
                                                else {
                                                  puVar3 = (undefined4 *)FUN_00634a80();
                                                  lVar12 = FID_conflict__atoll((char *)*puVar3);
                                                }
                                              }
                                              else {
                                                puVar3 = (undefined4 *)FUN_00634a80();
                                                local_54 = FID_conflict__atoi((char *)*puVar3);
                                              }
                                            }
                                            else {
                                              puVar3 = (undefined4 *)FUN_00634a80();
                                              local_34 = (float)*puVar3;
                                              FUN_0045c380();
                                              local_34 = (float)in_XMM0_Qa;
                                              in_XMM0_Qa = (double)CONCAT44((int)((ulonglong)
                                                                                  in_XMM0_Qa >> 0x20
                                                                                 ),local_34);
                                            }
                                            goto LAB_0053c224;
                                          }
                                          if ((param_2 != '\0') && (*(int *)(local_14 + 0x34) == 1))
                                          {
                                            puVar3 = (undefined4 *)FUN_00634a80();
                                            local_20 = (float)*puVar3;
                                            FUN_0045c380();
                                            local_20 = (float)in_XMM0_Qa;
                                            in_XMM0_Qa = (double)CONCAT44((int)((ulonglong)
                                                                                in_XMM0_Qa >> 0x20),
                                                                          local_20);
                                            FUN_00637c10();
                                          }
                                        }
                                        else if ((param_2 == '\0') ||
                                                (in_ECX = local_14, *(int *)(local_14 + 0x34) != 1))
                                        {
                                          puVar3 = (undefined4 *)FUN_00634a80();
                                          local_20 = (float)*puVar3;
                                          FUN_0045c380();
                                          local_20 = (float)in_XMM0_Qa;
                                          in_XMM0_Qa = (double)CONCAT44((int)((ulonglong)in_XMM0_Qa
                                                                             >> 0x20),local_20);
                                          goto LAB_0053c224;
                                        }
                                      }
                                      else {
                                        puVar3 = (undefined4 *)FUN_00634a80();
                                        local_58 = FID_conflict__atoi((char *)*puVar3);
LAB_0053c224:
                                        FUN_00637c10();
                                        in_ECX = local_14;
                                      }
LAB_0053c22c:
                                      local_50 = (undefined4)((ulonglong)lVar12 >> 0x20);
                                      local_1c = (int *)*local_1c;
                                    } while (local_1c != (int *)0x0);
                                    if (-1 < local_44) {
                                      uVar10 = 0;
                                      FUN_00636150(&local_30);
                                      in_XMM0_Qa = (double)(ulonglong)(uint)local_20;
                                      iVar6 = local_58;
                                      fVar13 = local_20;
                                      fVar14 = local_34;
                                      FUN_00637c50(&local_38);
                                      FUN_0053b220(local_58,iVar6,fVar13,local_54,fVar14,
                                                   (int)((ulonglong)lVar12 >> 0x20),uVar10,
                                                   (int)lVar12,local_50);
                                      FUN_004111b0();
                                    }
                                  }
                                  local_3c = (int *)*local_3c;
                                  FUN_00637c10();
                                  FUN_004030d0();
                                  local_8 = CONCAT31(local_8._1_3_,1);
                                  FUN_0040ea50();
                                  piVar8 = local_24;
                                } while (local_3c != (int *)0x0);
                              }
                            }
                          }
                          else {
                            puVar3 = (undefined4 *)FUN_00634a80();
                            local_24 = (int *)*puVar3;
                            FUN_0045c380();
                            *(double *)(in_ECX + 0x68) = in_XMM0_Qa;
                            FUN_00637c10();
                          }
                        }
                        else {
                          FUN_00634a80();
                          local_8._0_1_ = 2;
                          puVar3 = (undefined4 *)FUN_005b2490();
                          uVar10 = *(undefined4 *)(in_ECX + 100);
                          *(undefined4 *)(in_ECX + 100) = *puVar3;
                          *puVar3 = uVar10;
                          FUN_0040ea50();
                          local_8 = CONCAT31(local_8._1_3_,1);
                          FUN_00637c10();
                        }
                      }
                      else {
                        FUN_00634a80(&stack0xffffff10);
                        uVar10 = FUN_005bd270();
                        *(undefined4 *)(in_ECX + 0x30) = uVar10;
                      }
                    }
                    else {
                      puVar3 = (undefined4 *)FUN_00634a80();
                      FID_conflict__atoll((char *)*puVar3);
                      FUN_006f5730();
                      in_XMM0_Qa = in_XMM0_Qa / (double)*(int *)(in_ECX + 0x28);
                      *(double *)(in_ECX + 0x38) = in_XMM0_Qa;
                      FUN_00637c10();
                    }
                  }
                  else {
                    puVar3 = (undefined4 *)FUN_00634a80();
                    local_24 = (int *)*puVar3;
                    FUN_0045c380();
                    *(double *)(in_ECX + 0x38) = in_XMM0_Qa;
                    FUN_00637c10();
                  }
                }
              }
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != (int *)0x0);
          local_24 = (int *)0x0;
        }
        FUN_00634ec0();
        FUN_004bfe14(iVar5);
      }
      if (((*(int *)(in_ECX + 0x34) != 0) && (*(int *)(in_ECX + 0x34) != 3)) ||
         ((*(int *)(in_ECX + 0x24) < 1 && (4 < *(int *)(in_ECX + 0x24))))) {
        *(undefined4 *)(in_ECX + 0x24) = 1;
      }
      uVar10 = 0;
      FUN_00635110();
      goto LAB_0053c624;
    }
  }
  uVar10 = 3;
LAB_0053c624:
  piVar8 = (int *)(param_1 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return uVar10;
}

