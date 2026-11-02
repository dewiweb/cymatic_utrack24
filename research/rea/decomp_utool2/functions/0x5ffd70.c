// rea decompile_all
// name: FUN_005ffd70
// address: 0x5ffd70
// body: available
// range: 0x5ffd70-0x6009b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ffd70(void)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int local_144;
  int local_140;
  uint local_13c;
  uint local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int *local_120;
  char *local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  uint local_104;
  int local_100;
  int local_fc;
  int local_f8;
  uint local_f4;
  int *local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined **local_d4;
  int local_d0;
  void **local_cc;
  void *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  void *local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  int local_98;
  char *local_94;
  uint local_90;
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  char local_84 [33];
  char local_63 [36];
  char local_3f [6];
  undefined1 auStack_39 [30];
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b9f0;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990(&DAT_00a91a98,local_14);
  puVar4 = (undefined4 *)FUN_0062a9c0(&local_12c,"NumCuePoints",&local_d8);
  local_a8 = FID_conflict__atoi((char *)*puVar4);
  piVar9 = (int *)(local_12c + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar11 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = (int *)(local_d8 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar11 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (0 < local_a8) {
    local_d4 = juce::OutputStream::vftable;
    FUN_0045c990(&DAT_00c129a8);
    iVar11 = local_a8;
    local_d4 = juce::MemoryOutputStream::vftable;
    local_c8 = (void *)0x0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = (void *)0x0;
    local_b4 = 0;
    local_8 = 0;
    local_13c = (uint)(ushort)((ushort)local_a8 << 8 | (ushort)local_a8 >> 8);
    FUN_0062ca80(&local_13c,2);
    FUN_0045c990(&DAT_00a91aa0);
    puVar4 = (undefined4 *)FUN_0062a9c0(&local_140,"NumCueLabels",&local_dc);
    local_100 = FID_conflict__atoi((char *)*puVar4);
    piVar9 = (int *)(local_140 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    piVar9 = (int *)(local_dc + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    cVar3 = FUN_006009c0();
    local_f4 = (uint)(cVar3 != '\0');
    local_a4 = 0;
    if (0 < iVar11) {
      do {
        local_1b[2] = 0;
        pcVar12 = local_1b + 2;
        uVar6 = local_a4;
        if ((int)local_a4 < 0) {
          uVar6 = -local_a4;
          do {
            pcVar13 = pcVar12;
            pcVar12 = pcVar13 + -1;
            uVar10 = uVar6 / 10;
            *pcVar12 = (char)uVar6 + (char)uVar10 * -10 + '0';
            uVar6 = uVar10;
          } while (uVar10 != 0);
          pcVar12 = pcVar13 + -2;
          *pcVar12 = '-';
        }
        else {
          do {
            pcVar12 = pcVar12 + -1;
            uVar10 = uVar6 / 10;
            *pcVar12 = (char)uVar6 + (char)uVar10 * -10 + '0';
            uVar6 = uVar10;
          } while (uVar10 != 0);
        }
        FUN_004557e0(local_1b + (2 - (int)pcVar12));
        local_8._0_1_ = 1;
        FUN_00637690(&local_e0);
        local_8._0_1_ = 3;
        piVar9 = (int *)(local_e0 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar11 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        FUN_0045c990(&DAT_00a91ad4);
        iVar11 = local_108;
        local_8 = CONCAT31(local_8._1_3_,4);
        piVar14 = &local_e4;
        local_a0 = local_108;
        piVar9 = (int *)(local_108 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        puVar4 = (undefined4 *)FUN_006377c0(local_108);
        puVar4 = (undefined4 *)FUN_0062a9c0(&local_10c,*puVar4,piVar14);
        local_fc = FID_conflict__atoi((char *)*puVar4);
        local_fc = local_fc + local_f4;
        piVar14 = (int *)(local_10c + -8);
        if (piVar14 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar14);
          }
        }
        piVar14 = (int *)(local_110 + -8);
        if (piVar14 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar14);
          }
        }
        local_8._0_1_ = 3;
        piVar14 = (int *)(local_e4 + -8);
        if (piVar14 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar14);
          }
        }
        FUN_0045c990(&DAT_00a91ae0);
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar14 = &local_e8;
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        puVar4 = (undefined4 *)FUN_006377c0(iVar11);
        puVar4 = (undefined4 *)FUN_0062a9c0(&local_114,*puVar4,piVar14);
        local_90 = FID_conflict__atoi((char *)*puVar4);
        piVar9 = (int *)(local_114 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar11 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        piVar9 = (int *)(local_118 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar11 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_8._0_1_ = 3;
        piVar9 = (int *)(local_e8 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar11 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        iVar11 = local_a0;
        pcVar12 = local_63 + 2;
        local_63[2] = 0;
        uVar6 = local_a4;
        if ((int)local_a4 < 0) {
          uVar6 = -local_a4;
          do {
            pcVar13 = pcVar12;
            pcVar12 = pcVar13 + -1;
            uVar10 = uVar6 / 10;
            *pcVar12 = (char)uVar6 + (char)uVar10 * -10 + '0';
            uVar6 = uVar10;
          } while (uVar10 != 0);
          pcVar12 = pcVar13 + -2;
          *pcVar12 = '-';
        }
        else {
          do {
            pcVar12 = pcVar12 + -1;
            uVar10 = uVar6 / 10;
            *pcVar12 = (char)uVar6 + (char)uVar10 * -10 + '0';
            uVar6 = uVar10;
          } while (uVar10 != 0);
        }
        FUN_004557e0(local_63 + (2 - (int)pcVar12));
        local_8._0_1_ = 6;
        FUN_00637690(&local_ec);
        local_8 = CONCAT31(local_8._1_3_,8);
        local_ac = local_ec;
        piVar9 = (int *)(local_ec + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_104 = 0;
        iVar5 = local_98;
        if (0 < local_100) {
          do {
            local_3f[2] = 0;
            local_94 = local_3f + 2;
            uVar6 = local_104;
            if ((int)local_104 < 0) {
              uVar6 = -local_104;
              do {
                pcVar12 = local_94;
                local_94 = pcVar12 + -1;
                uVar10 = uVar6 / 10;
                *local_94 = (char)uVar6 + (char)uVar10 * -10 + '0';
                uVar6 = uVar10;
              } while (uVar10 != 0);
              local_94 = pcVar12 + -2;
              *local_94 = '-';
            }
            else {
              do {
                local_94 = local_94 + -1;
                uVar10 = uVar6 / 10;
                *local_94 = (char)uVar6 + (char)uVar10 * -10 + '0';
                iVar11 = local_a0;
                uVar6 = uVar10;
              } while (uVar10 != 0);
            }
            iVar5 = -(int)local_94;
            pcVar12 = local_3f + iVar5 + 2;
            piVar9 = (int *)FUN_004bfe22(((uint)(auStack_39 + iVar5) & 0xfffffffc) + 0xb);
            piVar9[1] = (uint)(auStack_39 + iVar5) & 0xfffffffc;
            local_120 = piVar9 + 2;
            *piVar9 = 0;
            local_f0 = local_120;
            local_11c = local_94;
            while ((0 < (int)pcVar12 && (iVar5 = FUN_00443260(), iVar5 != 0))) {
              FUN_0044ecc0(iVar5);
              pcVar12 = pcVar12 + -1;
            }
            *(undefined1 *)local_f0 = 0;
            local_8._0_1_ = 9;
            FUN_00637690(&local_120);
            local_8._0_1_ = 0xb;
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            FUN_0045c990(&DAT_00a91a30);
            iVar7 = local_124;
            local_8 = CONCAT31(local_8._1_3_,0xc);
            piVar14 = &local_f8;
            piVar9 = (int *)(local_124 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            puVar4 = (undefined4 *)FUN_006377c0(local_124);
            puVar4 = (undefined4 *)FUN_0062a9c0(&local_128,*puVar4,piVar14);
            iVar5 = FID_conflict__atoi((char *)*puVar4);
            local_94 = (char *)(iVar5 + local_f4);
            piVar14 = (int *)(local_128 + -8);
            if (piVar14 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar14);
              }
            }
            piVar14 = (int *)(local_144 + -8);
            if (piVar14 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar14);
              }
            }
            local_8._0_1_ = 0xb;
            piVar14 = (int *)(local_f8 + -8);
            if (piVar14 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar14);
              }
            }
            if (local_94 == (char *)local_fc) {
              piVar14 = &local_98;
              piVar9 = (int *)(iVar7 + -8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                *piVar9 = *piVar9 + 1;
                UNLOCK();
              }
              puVar4 = (undefined4 *)FUN_006377c0(iVar7);
              piVar9 = (int *)FUN_0062a9c0(&local_130,*puVar4,piVar14);
              iVar5 = *piVar9;
              *piVar9 = local_98;
              piVar9 = (int *)(local_130 + -8);
              local_98 = iVar5;
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar1 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar1 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              piVar9 = (int *)(local_134 + -8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar1 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar1 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              piVar9 = (int *)(iVar7 + -8);
              local_8 = CONCAT31(local_8._1_3_,8);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar7 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar7 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              break;
            }
            local_8 = CONCAT31(local_8._1_3_,8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            local_104 = local_104 + 1;
            iVar5 = local_98;
          } while ((int)local_104 < local_100);
        }
        local_138 = (uint)(ushort)((ushort)local_fc << 8 | (ushort)local_fc >> 8);
        (*(code *)local_d4[4])(&local_138,2);
        local_b0 = local_90 >> 0x18 | (local_90 & 0xff0000) >> 8 | (local_90 & 0xff00) << 8 |
                   local_90 << 0x18;
        (*(code *)local_d4[4])(&local_b0,4);
        uVar6 = FUN_0045d1e0(iVar5);
        local_90 = 0xfe;
        if (uVar6 < 0xfe) {
          local_90 = uVar6;
        }
        local_84[0] = (char)local_90 + '\x01';
        (*(code *)local_d4[4])(local_84,1);
        uVar6 = local_90;
        if ((local_90 != 0) && (iVar7 = FUN_00622a60(local_90), iVar7 != 0)) {
          FUN_004c2c30(iVar7,iVar5,uVar6);
        }
        local_88[0] = 0;
        (*(code *)local_d4[4])(local_88,1);
        if (((uint)local_b8 & 1) != 0) {
          local_8c[0] = 0;
          (*(code *)local_d4[4])(local_8c,1);
        }
        piVar9 = (int *)(iVar5 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        piVar9 = (int *)(iVar11 + -8);
        local_8 = local_8 & 0xffffff00;
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar11 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_a4 = local_a4 + 1;
      } while ((int)local_a4 < local_a8);
    }
    pvVar2 = local_b8;
    local_d4 = juce::MemoryOutputStream::vftable;
    if (((local_cc != &local_c8) && (local_cc != (void **)0x0)) && (local_cc[1] != local_b8)) {
      if (local_b8 == (void *)0x0) {
        FID_conflict__free(*local_cc);
        *local_cc = (void *)0x0;
        local_cc[1] = (void *)0x0;
      }
      else {
        if (*local_cc == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          pvVar8 = (void *)FUN_004c554b(pvVar2);
        }
        else {
          pvVar8 = (void *)FUN_004c553b(*local_cc,local_b8);
        }
        *local_cc = pvVar8;
        local_cc[1] = pvVar2;
      }
    }
    FID_conflict__free(local_c8);
    piVar9 = (int *)(local_d0 + -8);
    local_d4 = juce::OutputStream::vftable;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar11 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        FID_conflict__free(piVar9);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

