// rea decompile_all
// name: FUN_0061bc90
// address: 0x61bc90
// body: available
// range: 0x61bc90-0x61bf0a inclusive
// range: 0x61bf10-0x61c11e inclusive
// range: 0x61c120-0x61c541 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0061bc90(byte *param_1)

{
  int *_Memory;
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  _locale_t _Locale;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  void *pvVar7;
  byte *pbVar8;
  int in_ECX;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  undefined **local_58;
  int local_54;
  void **local_50;
  void *local_4c [4];
  byte *local_3c;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_0071cf13;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  piVar12 = (int *)(in_ECX + 4);
  iVar5 = *piVar12;
  local_30 = piVar12;
  local_20 = param_1 + 4;
  local_18 = in_ECX;
  FUN_0061cb80();
  cVar3 = *(char *)(local_18 + 8);
  pbVar8 = param_1 + 4;
  do {
    if (cVar3 != '\0') {
      FUN_0045c990();
      pbVar8 = param_1 + -8;
      if (pbVar8 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar8 = *(int *)pbVar8 + 1;
        UNLOCK();
      }
      LOCK();
      iVar5 = *(int *)(local_18 + 0xc);
      *(int *)(local_18 + 0xc) = (int)param_1;
      UNLOCK();
      piVar12 = (int *)(iVar5 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      *(undefined1 *)(local_18 + 9) = 1;
      if (pbVar8 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar5 = *(int *)pbVar8;
        *(int *)pbVar8 = *(int *)pbVar8 + -1;
        UNLOCK();
joined_r0x0061c38f:
        if (iVar5 == 0) {
          FID_conflict__free(pbVar8);
        }
      }
      ExceptionList = local_10;
      return;
    }
    iVar4 = FUN_00426f70();
    if (iVar4 == 0x3c) {
      bVar1 = *(byte *)*piVar12;
      param_1 = (byte *)*piVar12 + 1;
      if ((char)bVar1 < '\0') {
        uVar9 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar9 < 9) break;
            param_1 = param_1 + 1;
            uVar9 = uVar9 >> 1;
          } while ((uVar9 & (int)(char)bVar1) != 0);
        }
      }
      iVar5 = FUN_00426f70();
      if (iVar5 == 0x2f) {
        iVar5 = FUN_0045c230();
        if (iVar5 < 0) {
          ExceptionList = local_10;
          return;
        }
        FUN_0044ebd0();
        ExceptionList = local_10;
        return;
      }
      if (iVar5 == 0x21) {
        iVar5 = *piVar12;
        FUN_0044ebd0(2);
        iVar5 = FUN_0045d670(iVar5);
        if (iVar5 == 0) {
          FUN_0044ebd0();
          iVar5 = *piVar12;
          iVar4 = FUN_00426f70();
          while (iVar4 != 0) {
            if (iVar4 == 0x5d) {
              param_1 = (byte *)*piVar12;
              FUN_0044ebd0();
              iVar4 = FUN_00426f70();
              if (iVar4 == 0x5d) {
                param_1 = (byte *)*piVar12;
                FUN_0044ebd0();
                iVar4 = FUN_00426f70();
                if (iVar4 == 0x3e) {
                  FUN_0062cd70(iVar5);
                  local_8 = 0;
                  pbVar10 = (byte *)FUN_0061a340();
                  *(byte **)pbVar8 = pbVar10;
                  local_8._0_1_ = 0xff;
                  local_8._1_3_ = 0xffffff;
                  piVar11 = (int *)(local_28 + -8);
                  local_20 = pbVar10;
                  if (piVar11 != &DAT_00bfe124) {
                    LOCK();
                    iVar5 = *piVar11;
                    *piVar11 = *piVar11 + -1;
                    UNLOCK();
                    if (iVar5 == 0) {
                      FID_conflict__free(piVar11);
                    }
                  }
                  FUN_0044ebd0();
                  goto LAB_0061c312;
                }
              }
            }
            bVar1 = *(byte *)*piVar12;
            pbVar10 = (byte *)*piVar12 + 1;
            *piVar12 = (int)pbVar10;
            if ((char)bVar1 < '\0') {
              uVar9 = 0x40;
              if ((bVar1 & 0x40) != 0) {
                do {
                  if (uVar9 < 9) break;
                  pbVar10 = pbVar10 + 1;
                  uVar9 = uVar9 >> 1;
                  *piVar12 = (int)pbVar10;
                } while ((uVar9 & (int)(char)bVar1) != 0);
              }
            }
            iVar4 = FUN_00426f70();
          }
          FUN_0045c990();
          piVar11 = (int *)(local_2c + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            UNLOCK();
          }
          LOCK();
          iVar5 = *(int *)(local_18 + 0xc);
          *(int *)(local_18 + 0xc) = local_2c;
          UNLOCK();
          _Memory = (int *)(iVar5 + -8);
          if (_Memory != &DAT_00bfe124) {
            LOCK();
            iVar5 = *_Memory;
            *_Memory = *_Memory + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(_Memory);
            }
          }
          *(undefined1 *)(local_18 + 9) = 1;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar11);
            }
          }
          *(undefined1 *)(local_18 + 8) = 1;
          pbVar10 = pbVar8;
          goto LAB_0061c312;
        }
      }
      pbVar10 = (byte *)FUN_0061c550();
      if (pbVar10 == (byte *)0x0) {
        ExceptionList = local_10;
        return;
      }
      *(byte **)pbVar8 = pbVar10;
      local_20 = pbVar10;
    }
    else {
      *piVar12 = iVar5;
      FUN_0062cb00();
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      param_1 = (byte *)CONCAT13(*(char *)(local_18 + 0x21) == '\0',param_1._0_3_);
      iVar5 = local_18;
LAB_0061bf13:
      iVar4 = FUN_00426f70();
      if (iVar4 != 0x3c) {
        if (iVar4 == 0) {
          FUN_0045c990();
          pbVar8 = param_1 + -8;
          if (pbVar8 != (byte *)&DAT_00bfe124) {
            LOCK();
            *(int *)pbVar8 = *(int *)pbVar8 + 1;
            UNLOCK();
          }
          LOCK();
          iVar4 = *(int *)(iVar5 + 0xc);
          *(int *)(iVar5 + 0xc) = (int)param_1;
          UNLOCK();
          piVar12 = (int *)(iVar4 + -8);
          if (piVar12 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar12);
            }
          }
          goto LAB_0061c48c;
        }
        if (iVar4 != 0x26) {
          do {
            iVar4 = FUN_00426f70();
            if (iVar4 == 0xd) {
              iVar4 = 10;
              bVar1 = *(byte *)*piVar12;
              local_24 = (byte *)*piVar12 + 1;
              if ((char)bVar1 < '\0') {
                uVar9 = 0x40;
                if ((bVar1 & 0x40) != 0) {
                  do {
                    if (uVar9 < 9) break;
                    local_24 = local_24 + 1;
                    uVar9 = uVar9 >> 1;
                  } while (((int)(char)bVar1 & uVar9) != 0);
                }
              }
              iVar5 = FUN_00426f70();
              if (iVar5 != 10) goto LAB_0061c18c;
            }
            else {
              iVar5 = local_18;
              if ((iVar4 == 0x3c) || (iVar4 == 0x26)) goto LAB_0061bf13;
              if (iVar4 == 0) goto LAB_0061c3ec;
LAB_0061c18c:
              pbVar10 = (byte *)FUN_00622a60();
              if (pbVar10 != (byte *)0x0) {
                local_24 = pbVar10;
                FUN_0044ecc0();
              }
              if (param_1._3_1_ == '\0') {
                iVar5 = FID_conflict___iswspace_l((wint_t)iVar4,_Locale);
                param_1 = (byte *)((uint)param_1 & 0xffffff);
                if (iVar5 != 0) goto LAB_0061c1ed;
              }
              param_1 = (byte *)CONCAT13(1,param_1._0_3_);
            }
LAB_0061c1ed:
            bVar1 = *(byte *)*piVar12;
            pbVar10 = (byte *)*piVar12 + 1;
            *piVar12 = (int)pbVar10;
            if ((char)bVar1 < '\0') {
              uVar9 = 0x40;
              if ((bVar1 & 0x40) != 0) {
                do {
                  if (uVar9 < 9) break;
                  pbVar10 = pbVar10 + 1;
                  uVar9 = uVar9 >> 1;
                  *piVar12 = (int)pbVar10;
                } while (((int)(char)bVar1 & uVar9) != 0);
              }
            }
          } while( true );
        }
        local_1c = &DAT_00bfe12c;
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_0061b8d0();
        iVar5 = FUN_00426f70();
        pbVar10 = local_1c;
        if (iVar5 == 0x3c) {
          local_24 = local_1c;
          FUN_0044ebd0();
          iVar4 = FUN_00426f70();
          iVar5 = local_18;
          if (iVar4 == 0) goto LAB_0061c0b5;
          iVar4 = *piVar12;
          local_11 = *(undefined1 *)(local_18 + 8);
          *(byte **)(local_18 + 4) = pbVar10;
          *(undefined1 *)(local_18 + 8) = 0;
          pbVar6 = (byte *)FUN_0061c550();
          piVar12 = local_30;
          pbVar10 = local_20;
          while (pbVar2 = pbVar6, local_30 = piVar12, pbVar2 != (byte *)0x0) {
            *(byte **)pbVar8 = pbVar2;
            pbVar6 = (byte *)FUN_0061c550();
            pbVar8 = pbVar2;
            piVar12 = local_30;
            pbVar10 = pbVar2;
          }
          *(int *)(iVar5 + 4) = iVar4;
          *(undefined1 *)(iVar5 + 8) = local_11;
          local_20 = pbVar10;
        }
        else {
LAB_0061c0b5:
          FUN_0045d1e0();
          (*(code *)local_58[4])(pbVar10);
          if (param_1._3_1_ == '\0') {
            cVar3 = FUN_00629eb0();
            param_1 = (byte *)((uint)param_1 & 0xffffff);
            iVar5 = local_18;
            if (cVar3 == '\0') goto LAB_0061c0ea;
          }
          param_1 = (byte *)CONCAT13(1,param_1._0_3_);
          iVar5 = local_18;
        }
LAB_0061c0ea:
        local_8._0_1_ = 1;
        pbVar10 = local_1c + -8;
        if (pbVar10 != (byte *)&DAT_00bfe124) {
          LOCK();
          iVar4 = *(int *)pbVar10;
          *(int *)pbVar10 = *(int *)pbVar10 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(pbVar10);
          }
        }
        goto LAB_0061bf13;
      }
      pbVar10 = (byte *)*piVar12;
      bVar1 = *pbVar10;
      local_1c = pbVar10 + 1;
      if ((char)bVar1 < '\0') {
        uVar9 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar9 < 9) break;
            local_1c = local_1c + 1;
            uVar9 = uVar9 >> 1;
          } while ((uVar9 & (int)(char)bVar1) != 0);
        }
      }
      iVar5 = FUN_00426f70();
      pbVar6 = local_20;
      if (iVar5 == 0x21) {
        iVar5 = 1;
        local_1c = pbVar10;
        do {
          bVar1 = *local_1c;
          local_1c = local_1c + 1;
          if ((char)bVar1 < '\0') {
            uVar9 = 0x40;
            if ((bVar1 & 0x40) != 0) {
              do {
                if (uVar9 < 9) break;
                local_1c = local_1c + 1;
                uVar9 = uVar9 >> 1;
              } while ((uVar9 & (int)(char)bVar1) != 0);
            }
          }
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        iVar5 = FUN_00426f70();
        pbVar8 = pbVar6;
        if (iVar5 != 0x2d) goto LAB_0061c227;
        iVar5 = 2;
        local_1c = pbVar10;
        do {
          bVar1 = *local_1c;
          local_1c = local_1c + 1;
          if ((char)bVar1 < '\0') {
            uVar9 = 0x40;
            if ((bVar1 & 0x40) != 0) {
              do {
                if (uVar9 < 9) break;
                local_1c = local_1c + 1;
                uVar9 = uVar9 >> 1;
              } while (((int)(char)bVar1 & uVar9) != 0);
            }
          }
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        iVar5 = FUN_00426f70();
        if (iVar5 != 0x2d) goto LAB_0061c227;
        FUN_0044ebd0();
        iVar5 = FUN_0045e180(*piVar12);
        if (iVar5 < 0) {
LAB_0061c3ec:
          FUN_0045c990();
          pbVar8 = param_1 + -8;
          if (pbVar8 != (byte *)&DAT_00bfe124) {
            LOCK();
            *(int *)pbVar8 = *(int *)pbVar8 + 1;
            UNLOCK();
          }
          LOCK();
          iVar5 = *(int *)(local_18 + 0xc);
          *(int *)(local_18 + 0xc) = (int)param_1;
          UNLOCK();
          piVar12 = (int *)(iVar5 + -8);
          if (piVar12 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar12);
            }
          }
LAB_0061c48c:
          *(undefined1 *)(local_18 + 9) = 1;
          if (pbVar8 != (byte *)&DAT_00bfe124) {
            LOCK();
            iVar5 = *(int *)pbVar8;
            *(int *)pbVar8 = *(int *)pbVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(pbVar8);
            }
          }
          *(undefined1 *)(local_18 + 8) = 1;
          if (((local_50 != local_4c) && (local_50 != (void **)0x0)) && (local_50[1] != local_3c)) {
            if (local_3c == (byte *)0x0) {
              FID_conflict__free(*local_50);
              *local_50 = (void *)0x0;
              local_50[1] = (void *)0x0;
            }
            else {
              if (*local_50 == (void *)0x0) {
                FID_conflict__free((void *)0x0);
                pvVar7 = (void *)FUN_004c554b(local_3c);
              }
              else {
                pvVar7 = (void *)FUN_004c553b(*local_50);
              }
              *local_50 = pvVar7;
              local_50[1] = local_3c;
            }
          }
          FID_conflict__free(local_4c[0]);
          pbVar8 = (byte *)(local_54 + -8);
          if (pbVar8 == (byte *)&DAT_00bfe124) {
            ExceptionList = local_10;
            return;
          }
          LOCK();
          iVar5 = *(int *)pbVar8;
          *(int *)pbVar8 = *(int *)pbVar8 + -1;
          UNLOCK();
          goto joined_r0x0061c38f;
        }
        FUN_0044ebd0();
        iVar5 = local_18;
        goto LAB_0061bf13;
      }
LAB_0061c227:
      pbVar10 = pbVar8;
      if (param_1._3_1_ != '\0') {
        FUN_00622880();
        local_8 = CONCAT31(local_8._1_3_,3);
        pbVar10 = (byte *)FUN_0061a340();
        *(byte **)pbVar8 = pbVar10;
        piVar11 = (int *)(local_34 + -8);
        local_20 = pbVar10;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar11);
          }
        }
      }
      pbVar8 = local_3c;
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (((local_50 != local_4c) && (local_50 != (void **)0x0)) &&
         (param_1 = local_3c, local_50[1] != local_3c)) {
        if (local_3c == (byte *)0x0) {
          FID_conflict__free(*local_50);
          *local_50 = (void *)0x0;
          local_50[1] = (void *)0x0;
        }
        else {
          if (*local_50 == (void *)0x0) {
            FID_conflict__free((void *)0x0);
            pvVar7 = (void *)FUN_004c554b(pbVar8);
          }
          else {
            pvVar7 = (void *)FUN_004c553b(*local_50);
          }
          *local_50 = pvVar7;
          local_50[1] = pbVar8;
        }
      }
      FID_conflict__free(local_4c[0]);
      piVar11 = (int *)(local_54 + -8);
      local_58 = juce::OutputStream::vftable;
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar11);
        }
      }
    }
LAB_0061c312:
    iVar5 = *piVar12;
    FUN_0061cb80();
    cVar3 = *(char *)(local_18 + 8);
    pbVar8 = pbVar10;
  } while( true );
}

