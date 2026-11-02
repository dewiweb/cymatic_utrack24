// rea decompile_all
// name: FUN_0055ef00
// address: 0x55ef00
// body: available
// range: 0x55ef00-0x560061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0055ef00(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *in_EDX;
  float fVar14;
  undefined1 in_XMM0 [16];
  longlong lVar15;
  undefined1 local_f0 [24];
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  int local_cc [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined4 local_b0;
  undefined1 local_ac [8];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  int local_54;
  double local_50;
  void *local_48;
  undefined8 local_44;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  void *local_2c;
  int *local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  char local_15;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00711cfd;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  local_8 = 0;
  local_b0 = 1;
  if (*(char *)*in_EDX != '\0') {
    local_38 = in_EDX;
    local_28 = in_ECX;
    puVar3 = (undefined4 *)FUN_00458890(uVar2);
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if ((DVar4 & 0x10) == 0) {
      local_54 = 0;
      FUN_0045c990("song.set");
      local_8 = 1;
      piVar5 = (int *)FUN_00636a10(&local_3c);
      iVar7 = local_24;
      if (*piVar5 == local_24) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0045c1e0(*piVar5,local_24);
      }
      local_15 = iVar6 == 0;
      piVar5 = (int *)(local_3c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(iVar7 + -8);
      local_8 = local_8 & 0xffffff00;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_2c = operator_new(0xa0);
      iVar7 = FUN_0055de80();
      if (*in_ECX != iVar7) {
        if (iVar7 != 0) {
          LOCK();
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
          UNLOCK();
        }
        puVar3 = (undefined4 *)*in_ECX;
        *in_ECX = iVar7;
        if (puVar3 != (undefined4 *)0x0) {
          LOCK();
          piVar5 = puVar3 + 1;
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*puVar3)(1);
          }
        }
      }
      iVar7 = *in_ECX;
      piVar5 = (int *)(*local_38 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      LOCK();
      iVar6 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = *local_38;
      UNLOCK();
      piVar5 = (int *)(iVar6 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      iVar7 = *in_ECX;
      puVar3 = (undefined4 *)FUN_00636970(&local_44);
      *(undefined4 *)(iVar7 + 0x20) = *puVar3;
      *(undefined4 *)(iVar7 + 0x24) = puVar3[1];
      if (local_15 != '\0') {
        local_48 = (void *)0x0;
        local_44 = 0;
        local_8 = 2;
        FUN_0045c990("*.mid");
        local_8._0_1_ = 3;
        FUN_00636040(&local_24);
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00635ea0(&local_48,2,0,&local_14);
        piVar5 = (int *)(local_24 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_8._0_1_ = 2;
        piVar5 = local_14 + -2;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        if (local_44._4_4_ == 0) {
          FUN_0045c990("*.midi");
          local_8._0_1_ = 5;
          FUN_00636040(&local_24);
          local_8._0_1_ = 6;
          FUN_00635ea0(&local_48,2,0,&local_14);
          piVar5 = (int *)(local_24 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          piVar5 = local_14 + -2;
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar5);
            }
          }
        }
        if (local_44._4_4_ == 1) {
          FUN_0040f6b0(&local_3c,0);
          local_8._0_1_ = 7;
          puVar3 = (undefined4 *)FUN_00636a10(&local_24);
          uVar10 = *(undefined4 *)(*in_ECX + 0x80);
          *(undefined4 *)(*in_ECX + 0x80) = *puVar3;
          *puVar3 = uVar10;
          piVar5 = (int *)(local_24 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          piVar5 = (int *)(local_3c + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar5);
            }
          }
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040f7f0();
        FID_conflict__free(local_48);
      }
      FUN_006351a0(local_38);
      local_8 = 8;
      pvVar8 = (void *)FUN_00634f90(0);
      local_8._0_1_ = 9;
      local_2c = pvVar8;
      if ((pvVar8 == (void *)0x0) ||
         (iVar7 = FUN_00448730(*(undefined4 *)((int)pvVar8 + 0xc),"song_settings"), iVar7 != 0)) {
        uVar13 = FUN_00636a10(&local_58);
        local_8._0_1_ = 0xf;
        uVar10 = extraout_ECX_01;
        FUN_00637690(uVar13);
        puVar3 = (undefined4 *)FUN_006377c0(uVar10);
        iVar7 = param_1[2] + 1;
        if (param_1[1] < iVar7) {
          FUN_00409cf0(iVar7 / 2 + param_1[2] + 9 & 0xfffffff8);
        }
        iVar7 = param_1[2];
        param_1[2] = iVar7 + 1;
        puVar9 = (undefined4 *)(*param_1 + iVar7 * 4);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = *puVar3;
          *puVar3 = &DAT_00bfe12c;
        }
        piVar5 = local_34 + -2;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        piVar5 = (int *)(local_58 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      else {
        puVar3 = *(undefined4 **)((int)pvVar8 + 4);
        local_20 = puVar3;
        while (puVar3 != (undefined4 *)0x0) {
          iVar7 = puVar3[3];
          local_34 = (int *)(iVar7 + -8);
          if (local_34 != &DAT_00bfe124) {
            LOCK();
            *local_34 = *local_34 + 1;
            UNLOCK();
          }
          local_8 = CONCAT31(local_8._1_3_,10);
          local_1c = iVar7;
          iVar6 = FUN_00448730(iVar7,"version");
          if (iVar6 == 0) {
            puVar9 = (undefined4 *)FUN_00634a80(local_cc);
            uVar10 = *(undefined4 *)(*in_ECX + 0xc);
            *(undefined4 *)(*in_ECX + 0xc) = *puVar9;
            *puVar9 = uVar10;
            iVar7 = local_cc[0];
LAB_0055f49a:
            piVar5 = (int *)(iVar7 + -8);
            if (piVar5 != &DAT_00bfe124) {
              LOCK();
              iVar7 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar7 == 0) {
                FID_conflict__free(piVar5);
              }
            }
          }
          else {
            iVar6 = FUN_00448730(iVar7,"timestamp");
            if (iVar6 == 0) {
              puVar9 = (undefined4 *)FUN_00634a80(&local_d0);
              lVar15 = FID_conflict__atoll((char *)*puVar9);
              *(longlong *)(*in_ECX + 0x20) = lVar15;
              iVar7 = local_d0;
              goto LAB_0055f49a;
            }
            iVar6 = FUN_00448730(iVar7,"creator");
            if (iVar6 == 0) {
              puVar9 = (undefined4 *)FUN_00634a80(&local_d4);
              uVar10 = *(undefined4 *)(*in_ECX + 0x10);
              *(undefined4 *)(*in_ECX + 0x10) = *puVar9;
              *puVar9 = uVar10;
              iVar7 = local_d4;
              goto LAB_0055f49a;
            }
            iVar6 = FUN_00448730(iVar7,"song_name");
            if (iVar6 == 0) {
              puVar9 = (undefined4 *)FUN_00634a80(local_d8);
              uVar10 = *(undefined4 *)(*in_ECX + 0x14);
              *(undefined4 *)(*in_ECX + 0x14) = *puVar9;
              *puVar9 = uVar10;
              FUN_00637c10();
            }
            else {
              iVar7 = FUN_00448730(iVar7,"validationcode");
              if (iVar7 == 0) {
                puVar9 = (undefined4 *)FUN_00634a80(local_68);
                uVar10 = *(undefined4 *)(*in_ECX + 0x98);
                *(undefined4 *)(*in_ECX + 0x98) = *puVar9;
                *puVar9 = uVar10;
                FUN_00637c10();
              }
              else {
                cVar1 = FUN_00634f60();
                if (cVar1 != '\0') {
                  FUN_00634a80(&local_5c);
                  iVar6 = 0;
                  do {
                    uVar10 = FUN_005bd550();
                    iVar11 = FUN_00636230(uVar10);
                    FUN_00637c10();
                    iVar7 = local_5c;
                    if (iVar11 == 0) {
                      *(int *)(*local_28 + 0x2c) = iVar6;
                      break;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < 5);
                  goto LAB_0055f49a;
                }
                cVar1 = FUN_00634f60();
                if (cVar1 == '\0') {
                  cVar1 = FUN_00634f60();
                  if (cVar1 == '\0') {
                    cVar1 = FUN_00634f60();
                    if (cVar1 == '\0') {
                      cVar1 = FUN_00634f60();
                      if (cVar1 == '\0') {
                        cVar1 = FUN_00634f60();
                        if (cVar1 == '\0') {
                          cVar1 = FUN_00634f60();
                          if (cVar1 == '\0') {
                            cVar1 = FUN_00634f60();
                            if (cVar1 == '\0') {
                              cVar1 = FUN_00634f60();
                              if (cVar1 == '\0') {
                                cVar1 = FUN_00634f60();
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_00634f60();
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_00634f60();
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_00634f60();
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_00634f60();
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_006356f0();
                                          if (((((cVar1 != '\0') &&
                                                (cVar1 = FUN_006356f0(), cVar1 != '\0')) &&
                                               (cVar1 = FUN_006356f0(), cVar1 != '\0')) &&
                                              ((cVar1 = FUN_006356f0(), cVar1 != '\0' &&
                                               (cVar1 = FUN_006356f0(), cVar1 != '\0')))) &&
                                             (cVar1 = FUN_006356f0(), cVar1 != '\0')) {
                                            FUN_006356f0();
                                          }
                                        }
                                        else if (*(int *)(*in_ECX + 0x38) != 0) {
                                          puVar9 = (undefined4 *)puVar3[1];
                                          puVar3 = local_20;
                                          for (; puVar9 != (undefined4 *)0x0;
                                              puVar9 = (undefined4 *)*puVar9) {
                                            local_20 = puVar3;
                                            cVar1 = FUN_00634f60();
                                            if (cVar1 == '\0') {
                                              cVar1 = FUN_00634f60();
                                              if (cVar1 == '\0') {
                                                FUN_00634f60();
                                              }
                                            }
                                            else {
                                              puVar3 = (undefined4 *)FUN_00634a80(&local_58);
                                              FID_conflict__atoll((char *)*puVar3);
                                              FUN_00637c10();
                                              FUN_006f5730();
                                              in_XMM0._0_8_ =
                                                   in_XMM0._0_8_ /
                                                   (double)*(int *)(*local_28 + 0x38);
                                              local_50 = in_XMM0._0_8_;
                                              FUN_00411820(&local_50);
                                            }
                                            puVar3 = local_20;
                                          }
                                        }
                                      }
                                      else {
                                        local_14 = (int *)puVar3[1];
                                        if (local_14 != (int *)0x0) {
                                          do {
                                            cVar1 = FUN_00634f60();
                                            piVar5 = local_14;
                                            if (cVar1 != '\0') {
                                              iVar7 = FUN_00634dc0(&DAT_0073eb50,0xffffffff);
                                              if (iVar7 < 0) {
                                                FUN_0045c990("Invalid channel ID.");
                                                FUN_00637d80(&local_24);
LAB_0055fd22:
                                                FUN_00637c10();
                                              }
                                              else {
                                                iVar7 = FUN_0055d970(iVar7);
                                                for (puVar3 = (undefined4 *)piVar5[1];
                                                    puVar3 != (undefined4 *)0x0;
                                                    puVar3 = (undefined4 *)*puVar3) {
                                                  cVar1 = FUN_00634f60();
                                                  if (cVar1 == '\0') {
                                                    cVar1 = FUN_00634f60();
                                                    if (cVar1 == '\0') {
                                                      cVar1 = FUN_00634f60();
                                                      if (cVar1 == '\0') {
                                                        cVar1 = FUN_00634f60();
                                                        if (cVar1 == '\0') {
                                                          cVar1 = FUN_00634f60();
                                                          if (cVar1 != '\0') {
                                                            puVar9 = (undefined4 *)
                                                                     FUN_00634a80(local_bc);
                                                            iVar6 = FID_conflict__atoi((char *)*
                                                  puVar9);
                                                  FUN_00637c10();
                                                  fVar14 = ((float)iVar6 * 127.0) / 127.0;
                                                  in_XMM0 = ZEXT416((uint)fVar14);
                                                  *(float *)(iVar7 + 0x14) = fVar14;
                                                  }
                                                  }
                                                  else {
                                                    puVar9 = (undefined4 *)FUN_00634a80(local_b8);
                                                    iVar6 = FID_conflict__atoi((char *)*puVar9);
                                                    *(bool *)(iVar7 + 0x10) = iVar6 != 0;
                                                    FUN_00637c10();
                                                  }
                                                  }
                                                  else {
                                                    piVar5 = (int *)FUN_00634a80(local_b4);
                                                    local_30 = *piVar5;
                                                    FUN_0045c380();
                                                    in_XMM0._0_4_ = (float)in_XMM0._0_8_;
                                                    *(float *)(iVar7 + 0xc) = in_XMM0._0_4_;
                                                    FUN_00637c10();
                                                  }
                                                  }
                                                  else {
                                                    puVar9 = (undefined4 *)FUN_00634a80(local_a0);
                                                    uVar10 = *(undefined4 *)(iVar7 + 8);
                                                    *(undefined4 *)(iVar7 + 8) = *puVar9;
                                                    *puVar9 = uVar10;
                                                    FUN_00637c10();
                                                    cVar1 = FUN_006327a0("Channel ");
                                                    if ((cVar1 != '\0') &&
                                                       (iVar6 = FUN_0044ec90(), iVar6 == 9)) {
                                                      puVar9 = (undefined4 *)
                                                               FUN_00637a90(local_a4,8);
                                                      iVar6 = FID_conflict__atoi((char *)*puVar9);
                                                      FUN_00637c10();
                                                      FUN_00637c90(iVar6);
                                                      local_8._0_1_ = 0xb;
                                                      uVar10 = FUN_00633d10(local_ac,extraout_ECX,2)
                                                      ;
                                                      local_8._0_1_ = 0xc;
                                                      puVar9 = (undefined4 *)FUN_00637690(uVar10);
                                                      uVar10 = *(undefined4 *)(iVar7 + 8);
                                                      *(undefined4 *)(iVar7 + 8) = *puVar9;
                                                      *puVar9 = uVar10;
                                                      FUN_00637c10();
                                                      FUN_00637c10();
                                                      local_8 = CONCAT31(local_8._1_3_,10);
                                                      FUN_00637c10();
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    puVar9 = (undefined4 *)FUN_00634a80(local_9c);
                                                    iVar6 = FID_conflict__atoi((char *)*puVar9);
                                                    *(int *)(iVar7 + 4) = iVar6;
                                                    FUN_00637c10();
                                                    if (local_54 < *(int *)(iVar7 + 4)) {
                                                      local_54 = *(int *)(iVar7 + 4);
                                                    }
                                                  }
                                                }
                                                iVar6 = 0;
                                                local_30 = 0;
                                                if (0 < *(int *)(*local_28 + 100)) {
                                                  do {
                                                    FUN_00412c20(local_f0,iVar6);
                                                    cVar1 = FUN_00633e80(*(undefined4 *)(iVar7 + 8))
                                                    ;
                                                    FUN_004129e0();
                                                    if (cVar1 != '\0') {
                                                      local_30 = local_30 + 1;
                                                    }
                                                    iVar6 = iVar6 + 1;
                                                  } while (iVar6 < *(int *)(*local_28 + 100));
                                                  if (1 < local_30) {
                                                    uVar13 = FUN_00637c90(local_30);
                                                    local_8._0_1_ = 0xd;
                                                    uVar10 = extraout_ECX_00;
                                                    FUN_00637690(uVar13);
                                                    uVar10 = FUN_006377c0(uVar10);
                                                    local_8._0_1_ = 0xe;
                                                    FUN_00636ec0(uVar10);
                                                    FUN_00637c10();
                                                    local_8 = CONCAT31(local_8._1_3_,10);
                                                    goto LAB_0055fd22;
                                                  }
                                                }
                                              }
                                            }
                                            local_14 = (int *)*local_14;
                                          } while (local_14 != (int *)0x0);
                                          local_14 = (int *)0x0;
                                          puVar3 = local_20;
                                        }
                                      }
                                    }
                                    else {
                                      puVar9 = (undefined4 *)puVar3[1];
                                      local_15 = '\x01';
                                      for (; puVar3 = local_20, puVar9 != (undefined4 *)0x0;
                                          puVar9 = (undefined4 *)*puVar9) {
                                        cVar1 = FUN_00634f60();
                                        if (cVar1 != '\0') {
                                          iVar7 = FUN_00634dc0(&DAT_0073ebdc,0xffffffff);
                                          if (iVar7 < 1) {
                                            FUN_0045c990("Invalid channel ID.");
                                            FUN_00637d80(&local_3c);
                                          }
                                          else {
                                            iVar7 = FUN_0055d970(iVar7 + -1);
                                            puVar3 = (undefined4 *)FUN_00634a80(local_98);
                                            iVar6 = FID_conflict__atoi((char *)*puVar3);
                                            *(bool *)(iVar7 + 0x10) = iVar6 != 0;
                                          }
                                          FUN_00637c10();
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    puVar9 = (undefined4 *)puVar3[1];
                                    local_15 = '\x01';
                                    for (; puVar3 = local_20, puVar9 != (undefined4 *)0x0;
                                        puVar9 = (undefined4 *)*puVar9) {
                                      cVar1 = FUN_00634f60();
                                      if (cVar1 != '\0') {
                                        iVar7 = FUN_00634dc0(&DAT_0073ebb0,0xffffffff);
                                        if (iVar7 < 1) {
                                          FUN_0045c990("Invalid channel ID.");
                                          FUN_00637d80(local_64);
                                          FUN_00637c10();
                                        }
                                        else {
                                          iVar7 = FUN_0055d970(iVar7 + -1);
                                          puVar3 = (undefined4 *)FUN_00634a80(local_94);
                                          iVar6 = FID_conflict__atoi((char *)*puVar3);
                                          FUN_00637c10();
                                          fVar14 = ((float)iVar6 * 127.0) / 127.0;
                                          in_XMM0 = ZEXT416((uint)fVar14);
                                          *(float *)(iVar7 + 0x14) = fVar14;
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
                                  puVar9 = (undefined4 *)puVar3[1];
                                  local_15 = '\x01';
                                  for (; puVar3 = local_20, puVar9 != (undefined4 *)0x0;
                                      puVar9 = (undefined4 *)*puVar9) {
                                    cVar1 = FUN_00634f60();
                                    if (cVar1 != '\0') {
                                      iVar7 = FUN_00634dc0(&DAT_0073eab0,0xffffffff);
                                      if (iVar7 < 1) {
                                        FUN_0045c990("Invalid channel ID.");
                                        FUN_00637d80(local_60);
                                        FUN_00637c10();
                                      }
                                      else {
                                        iVar7 = FUN_0055d970(iVar7 + -1);
                                        puVar3 = (undefined4 *)FUN_00634a80(local_90);
                                        local_14 = (int *)*puVar3;
                                        FUN_0045c380();
                                        local_14 = (int *)(float)in_XMM0._0_8_;
                                        FUN_00637c10();
                                        in_XMM0 = ZEXT416(local_14);
                                        *(int **)(iVar7 + 0xc) = local_14;
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                puVar9 = (undefined4 *)FUN_00634a80(local_8c);
                                lVar15 = FID_conflict__atoll((char *)*puVar9);
                                *(longlong *)(*in_ECX + 0x90) = lVar15;
                                FUN_00637c10();
                              }
                            }
                            else {
                              puVar9 = (undefined4 *)FUN_00634a80(local_88);
                              uVar10 = *(undefined4 *)(*in_ECX + 0x80);
                              *(undefined4 *)(*in_ECX + 0x80) = *puVar9;
                              *puVar9 = uVar10;
                              FUN_00637c10();
                            }
                          }
                          else {
                            for (puVar9 = (undefined4 *)puVar3[1]; puVar9 != (undefined4 *)0x0;
                                puVar9 = (undefined4 *)*puVar9) {
                              cVar1 = FUN_00634f60();
                              if (cVar1 != '\0') {
                                puVar12 = (undefined4 *)FUN_00634a80(local_84);
                                local_44 = FID_conflict__atoll((char *)*puVar12);
                                FUN_00416700(&local_44);
                                FUN_00637c10();
                              }
                            }
                          }
                        }
                        else {
                          puVar9 = (undefined4 *)FUN_00634a80(local_80);
                          uVar10 = *(undefined4 *)(*in_ECX + 0x18);
                          *(undefined4 *)(*in_ECX + 0x18) = *puVar9;
                          *puVar9 = uVar10;
                          FUN_00637c10();
                        }
                      }
                      else {
                        puVar9 = (undefined4 *)FUN_00634a80(local_7c);
                        iVar7 = FID_conflict__atoi((char *)*puVar9);
                        *(int *)(*in_ECX + 0x3c) = iVar7;
                        FUN_00637c10();
                      }
                    }
                    else {
                      puVar9 = (undefined4 *)FUN_00634a80(local_78);
                      iVar7 = FID_conflict__atoi((char *)*puVar9);
                      *(int *)(*in_ECX + 0x38) = iVar7;
                      FUN_00637c10();
                    }
                  }
                  else {
                    puVar9 = (undefined4 *)FUN_00634a80(local_74);
                    lVar15 = FID_conflict__atoll((char *)*puVar9);
                    *(longlong *)(*in_ECX + 0x30) = lVar15;
                    FUN_00637c10();
                  }
                }
                else {
                  FUN_00634a80(local_70);
                  iVar7 = *in_ECX;
                  uVar10 = FUN_005bce00();
                  *(undefined4 *)(iVar7 + 0x40) = uVar10;
                  FUN_00637c10();
                }
              }
            }
          }
          puVar3 = (undefined4 *)*puVar3;
          local_8._0_1_ = 9;
          local_20 = puVar3;
          pvVar8 = local_2c;
          in_ECX = local_28;
          if (local_34 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *local_34;
            *local_34 = *local_34 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(local_34);
              pvVar8 = local_2c;
              in_ECX = local_28;
            }
          }
        }
        if (param_1[2] == 0) {
          iVar7 = *in_ECX;
          if (iVar7 != 0) {
            LOCK();
            *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
            UNLOCK();
          }
          FUN_0055bcd0(iVar7);
          iVar7 = *in_ECX;
          switch(*(undefined4 *)(iVar7 + 0x40)) {
          case 1:
          case 2:
            if (iVar7 != 0) {
              LOCK();
              *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
              UNLOCK();
            }
            FUN_0055c570(iVar7);
            break;
          case 3:
          case 4:
            if (iVar7 != 0) {
              LOCK();
              *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
              UNLOCK();
            }
            FUN_0055bfe0(iVar7);
          }
        }
      }
      if (pvVar8 != (void *)0x0) {
        FUN_00634ec0();
        FUN_004bfe14(pvVar8,0x10);
      }
      FUN_00635110();
      goto LAB_0056001e;
    }
  }
  uVar13 = FUN_00636a10(&local_34);
  local_8._0_1_ = 0x10;
  local_8._1_3_ = 0;
  uVar10 = extraout_ECX_02;
  FUN_00637690(uVar13);
  uVar10 = FUN_006377c0(uVar10);
  FUN_00637d80(uVar10);
  piVar5 = (int *)((int)local_2c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = local_34 + -2;
  local_28 = in_ECX;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
LAB_0056001e:
  iVar7 = *local_28;
  if ((iVar7 != 0) && (iVar6 = *(int *)(iVar7 + 0x38), iVar6 != 0)) {
    __aulldiv(*(undefined4 *)(iVar7 + 0x90),*(undefined4 *)(iVar7 + 0x94),iVar6,iVar6 >> 0x1f);
    FUN_006f56f0();
    *(longlong *)(iVar7 + 0x88) = in_XMM0._0_8_;
  }
  ExceptionList = local_10;
  return local_28;
}

