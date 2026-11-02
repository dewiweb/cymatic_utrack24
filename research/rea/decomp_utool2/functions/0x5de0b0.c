// rea decompile_all
// name: FUN_005de0b0
// address: 0x5de0b0
// body: available
// range: 0x5de0b0-0x5deafc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005de0b0(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  float *in_ECX;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint in_EDX;
  int iVar16;
  size_t *psVar17;
  size_t *psVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int iVar23;
  undefined4 *puVar24;
  float *pfVar25;
  float10 fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  float in_XMM1_Da;
  double dVar33;
  undefined1 auVar34 [12];
  float in_XMM3_Da;
  undefined4 auStack_7f68 [2];
  int *local_7f20;
  int local_7f14;
  float *local_7f10;
  uint *local_7f0c;
  int local_7f08;
  float *local_7f04;
  int local_7f00;
  int local_7efc;
  float *local_7ef4;
  float local_7ef0 [55];
  float afStack_7e14 [393];
  undefined1 local_77f0 [28672];
  float local_7f0 [2];
  float local_7e8 [446];
  float local_f0 [57];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x5de0bd;
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  auStack_7f68[1] = 0x5de0f4;
  iVar1 = in_EDX * -4;
  auStack_7f68[1 - in_EDX] = 0x44;
  psVar17 = auStack_7f68 + -in_EDX;
  auStack_7f68[-in_EDX] = 0x5de101;
  iVar5 = FUN_004c554b();
  *psVar17 = 0x7700;
  psVar17[-1] = 0;
  psVar17[-2] = (size_t)local_7ef0;
  psVar17[-3] = 0x5de11d;
  _memset((void *)psVar17[-2],psVar17[-1],*psVar17);
  local_7ef4 = local_7ef0;
  local_7f04 = (float *)&DAT_00bce850;
  psVar18 = psVar17 + 1;
  local_7f08 = 0;
  iVar12 = 2 - (int)in_ECX;
  local_7f0c = &DAT_00b938a4;
  do {
    iVar13 = iVar12 + (int)in_ECX;
    pfVar9 = local_f0;
    iVar16 = 0x38;
    puVar22 = local_7f0c;
    do {
      iVar23 = iVar16;
      if (iVar13 + -2 < 0x58) {
        fVar27 = (float)puVar22[-1];
        if (999.0 <= fVar27) {
          fVar27 = 999.0;
        }
      }
      else {
        fVar27 = -30.0;
      }
      if (iVar13 + -1 < 0x58) {
        auVar31._4_8_ = 0;
        auVar31._0_4_ = *puVar22;
      }
      else {
        auVar31 = ZEXT812(0xc1f00000);
      }
      if (fVar27 <= auVar31._0_4_) {
        auVar31._4_8_ = auVar31._4_8_;
        auVar31._0_4_ = fVar27;
      }
      if (iVar13 < 0x58) {
        auVar34._4_8_ = 0;
        auVar34._0_4_ = puVar22[1];
      }
      else {
        auVar34 = ZEXT812(0xc1f00000);
      }
      iVar13 = iVar13 + 1;
      if (auVar31._0_4_ <= auVar34._0_4_) {
        auVar34._4_8_ = auVar34._4_8_;
        auVar34._0_4_ = auVar31._0_4_;
      }
      if (iVar13 < 0x58) {
        auVar32._4_8_ = 0;
        auVar32._0_4_ = puVar22[2];
      }
      else {
        auVar32 = ZEXT812(0xc1f00000);
      }
      if (auVar34._0_4_ <= auVar32._0_4_) {
        auVar32._4_8_ = auVar32._4_8_;
        auVar32._0_4_ = auVar34._0_4_;
      }
      puVar22 = puVar22 + 1;
      *pfVar9 = auVar32._0_4_;
      pfVar9 = pfVar9 + 1;
      iVar16 = iVar23 + -1;
    } while (iVar16 != 0);
    pfVar9 = local_7f04;
    pfVar10 = local_7ef4 + 0x70;
    for (iVar16 = 0x150; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    pfVar9 = local_7f04;
    pfVar10 = local_7ef4;
    for (iVar16 = 0x38; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    local_7f10 = local_7ef4 + 0x38;
    pfVar9 = local_7f04;
    pfVar10 = local_7f10;
    for (iVar16 = 0x38; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    iVar23 = iVar23 + 7;
    do {
      uVar14 = 0x10;
      do {
        fVar27 = (float)(int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) * param_1 +
                 in_XMM3_Da;
        if (((fVar27 < 0.0) && (0.0 < in_XMM3_Da)) || ((0.0 < fVar27 && (in_XMM3_Da < 0.0)))) {
          fVar27 = 0.0;
        }
        uVar14 = uVar14 - 1;
        *local_7ef4 = fVar27 + *local_7ef4;
        local_7ef4 = local_7ef4 + 1;
      } while (-0x28 < (int)uVar14);
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    iVar16 = 0;
    fVar27 = *in_ECX;
    do {
      iVar13 = iVar16;
      if (iVar16 < 2) {
        iVar13 = 2;
      }
      iVar23 = local_7f08 + iVar16;
      iVar6 = 0;
      fVar28 = ((fVar27 + 100.0) - (float)iVar13 * 10.0) - 30.0;
      do {
        pfVar9 = local_7ef0 + iVar23 * 0x38 + iVar6;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        fVar4 = pfVar9[3];
        pfVar10 = local_7ef0 + iVar23 * 0x38 + iVar6;
        *pfVar10 = fVar28 + *pfVar9;
        pfVar10[1] = fVar28 + fVar2;
        pfVar10[2] = fVar28 + fVar3;
        pfVar10[3] = fVar28 + fVar4;
        pfVar9 = local_7ef0 + iVar23 * 0x38 + iVar6 + 4;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        fVar4 = pfVar9[3];
        pfVar10 = local_7ef0 + iVar23 * 0x38 + iVar6 + 4;
        *pfVar10 = fVar28 + *pfVar9;
        pfVar10[1] = fVar28 + fVar2;
        pfVar10[2] = fVar28 + fVar3;
        pfVar10[3] = fVar28 + fVar4;
        iVar6 = iVar6 + 8;
      } while (iVar6 < 0x38);
      pfVar25 = local_7e8 + (iVar16 * 0x1c + -1) * 2;
      pfVar9 = local_f0;
      pfVar10 = pfVar25;
      for (iVar13 = 0x38; iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar10 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
      }
      iVar13 = 0;
      fVar28 = (100.0 - (float)iVar16 * 10.0) - 30.0;
      fVar2 = (100.0 - (float)iVar16 * 10.0) - 30.0;
      do {
        *(ulonglong *)(pfVar25 + iVar13) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar25 + iVar13) >> 0x20) + fVar2,
                      (float)*(undefined8 *)(pfVar25 + iVar13) + fVar28);
        *(ulonglong *)(local_7e8 + iVar16 * 0x38 + iVar13) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(local_7e8 + iVar16 * 0x38 + iVar13) >> 0x20
                             ) + fVar2,
                      (float)*(undefined8 *)(local_7e8 + iVar16 * 0x38 + iVar13) + fVar28);
        iVar13 = iVar13 + 4;
      } while (iVar13 < 0x38);
      iVar13 = iVar23 * 0xe0 - (int)pfVar25;
      iVar23 = 0x38;
      do {
        iVar6 = iVar23;
        fVar28 = *(float *)((int)local_7ef0 + iVar13 + (int)pfVar25);
        if (*pfVar25 <= fVar28 && fVar28 != *pfVar25) {
          *pfVar25 = fVar28;
        }
        pfVar25 = pfVar25 + 1;
        iVar23 = iVar6 + -1;
      } while (iVar23 != 0);
      iVar16 = iVar16 + 1;
    } while (iVar16 < 8);
    iVar6 = iVar6 + 6;
    pfVar9 = local_7f0;
    do {
      pfVar25 = pfVar9 + 0x38;
      iVar16 = 0xe;
      pfVar10 = pfVar9 + 3;
      pfVar7 = pfVar9 + 0x39;
      do {
        if (pfVar10[-3] < pfVar7[-1]) {
          pfVar7[-1] = pfVar10[-3];
        }
        fVar27 = *(float *)(((int)pfVar9 - (int)pfVar25) + (int)pfVar7);
        if (fVar27 < *pfVar7) {
          *pfVar7 = fVar27;
        }
        if (pfVar10[-1] < pfVar7[1]) {
          pfVar7[1] = pfVar10[-1];
        }
        if (*pfVar10 < pfVar7[2]) {
          pfVar7[2] = *pfVar10;
        }
        pfVar7 = pfVar7 + 4;
        pfVar10 = pfVar10 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      iVar16 = 0x38;
      pfVar9 = local_7f10;
      do {
        fVar27 = *(float *)(((int)pfVar25 - (int)local_7f10) + (int)pfVar9);
        if (fVar27 < *pfVar9) {
          *pfVar9 = fVar27;
        }
        pfVar9 = pfVar9 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      local_7f10 = local_7f10 + 0x38;
      iVar6 = iVar6 + -1;
      pfVar9 = pfVar25;
    } while (iVar6 != 0);
    local_7f0c = local_7f0c + 4;
    local_7f04 = local_7f04 + 0x150;
    in_ECX = in_ECX + 1;
    local_7f08 = local_7f08 + 8;
  } while ((int)local_7f0c < 0xb939b4);
  local_7f10 = (float *)local_77f0;
  local_7f04 = (float *)0x0;
  do {
    *(undefined4 *)((int)psVar18 + -4) = 0x20;
    puVar19 = (undefined4 *)((int)psVar18 + -8);
    *(undefined4 *)((int)psVar18 + -8) = 0x5de508;
    piVar8 = (int *)FUN_004c554b();
    puVar20 = puVar19 + 1;
    *(int **)(iVar5 + (int)local_7f04 * 4) = piVar8;
    dVar29 = (double)(int)local_7f04 * 0.5;
    dVar30 = (dVar29 + 5.965784072875977) * 0.6931470036506653;
    *puVar19 = 0x5de547;
    FUN_006f7ee0();
    *(double *)(puVar19 + -1) = dVar30 / (double)in_XMM1_Da;
    puVar19[-2] = 0x5de56f;
    fVar26 = (float10)FUN_006f9790();
    fVar27 = (float)(int)fVar26 * in_XMM1_Da + 1.0;
    *puVar19 = 0x5de59c;
    FUN_00436450();
    fVar27 = fVar27 * 1.442695 - 5.965784;
    fVar27 = fVar27 + fVar27;
    *puVar19 = 0x5de5b5;
    FUN_004363b0();
    fVar28 = (float)((int)fVar26 + 1) * in_XMM1_Da;
    *puVar19 = 0x5de5d0;
    FUN_00436450();
    fVar28 = fVar28 * 1.442695 - 5.965784;
    fVar28 = fVar28 + fVar28;
    *puVar19 = 0x5de5e9;
    FUN_00436410();
    pfVar9 = (float *)(int)fVar27;
    if ((int)local_7f04 < (int)fVar27) {
      pfVar9 = local_7f04;
    }
    iVar16 = (int)fVar28;
    iVar12 = 0;
    if (-1 < (int)pfVar9) {
      iVar12 = (int)pfVar9;
    }
    if (0x10 < iVar16) {
      iVar16 = 0x10;
    }
    local_7f0c = (uint *)0x0;
    local_7efc = 0;
    local_7f20 = piVar8;
    do {
      *(undefined4 *)((int)puVar20 + -4) = 0xe8;
      puVar21 = (undefined4 *)((int)puVar20 + -8);
      *(undefined4 *)((int)puVar20 + -8) = 0x5de64a;
      pfVar9 = (float *)FUN_004c554b();
      psVar18 = puVar21 + 1;
      puVar20 = puVar21 + 1;
      *(float **)((int)local_7f0c + (int)piVar8) = pfVar9;
      if (0 < (int)in_EDX) {
        puVar24 = (undefined4 *)(&stack0xffff80a0 + iVar1);
        for (uVar14 = in_EDX & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar24 = 0x4479c000;
          puVar24 = puVar24 + 1;
        }
      }
      if (iVar12 <= iVar16) {
        pfVar10 = local_7ef0 + iVar12 * 0x1c0;
        iVar13 = iVar12;
        do {
          uVar14 = 0;
          local_7f14 = 0;
          local_7ef4 = (float *)((int)pfVar10 + local_7efc);
          do {
            dVar33 = (double)local_7f14 * 0.125 + (double)iVar13 * 0.5;
            dVar30 = ((dVar33 - 2.0625) + 5.965784072875977) * 0.6931470036506653;
            *puVar21 = 0x5de70c;
            FUN_006f7ee0();
            dVar33 = ((dVar33 - 1.9375) + 5.965784072875977) * 0.6931470036506653;
            *puVar21 = 0x5de744;
            FUN_006f7ee0();
            uVar11 = 0;
            if (-1 < (int)(dVar30 / (double)in_XMM1_Da)) {
              uVar11 = (int)(dVar30 / (double)in_XMM1_Da);
            }
            if ((int)in_EDX < (int)uVar11) {
              uVar11 = in_EDX;
            }
            if ((int)uVar11 < (int)uVar14) {
              uVar14 = uVar11;
            }
            uVar15 = (uint)(dVar33 / (double)in_XMM1_Da + 1.0);
            uVar11 = 0;
            if (-1 < (int)uVar15) {
              uVar11 = uVar15;
            }
            if ((int)in_EDX < (int)uVar11) {
              uVar11 = in_EDX;
            }
            for (; ((int)uVar14 < (int)uVar11 && ((int)uVar14 < (int)in_EDX)); uVar14 = uVar14 + 1)
            {
              if (*local_7ef4 < *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1)) {
                *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1) = *local_7ef4;
              }
            }
            local_7ef4 = local_7ef4 + 1;
            local_7f14 = local_7f14 + 1;
          } while (local_7f14 < 0x38);
          if ((int)uVar14 < (int)in_EDX) {
            fVar27 = *(float *)(local_7efc + 0xdc + (int)pfVar10);
            do {
              if (fVar27 < *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1)) {
                *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1) = fVar27;
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)in_EDX);
          }
          pfVar10 = pfVar10 + 0x1c0;
          iVar13 = iVar13 + 1;
        } while (iVar13 <= iVar16);
      }
      if ((int)local_7f04 + 1 < 0x11) {
        uVar14 = 0;
        local_7f00 = 0;
        local_7ef4 = (float *)((int)local_7f10 + local_7efc);
        do {
          dVar33 = (double)local_7f00 * 0.125 + dVar29;
          dVar30 = ((dVar33 - 2.0625) + 5.965784072875977) * 0.6931470036506653;
          *puVar21 = 0x5de8a0;
          FUN_006f7ee0();
          dVar33 = ((dVar33 - 1.9375) + 5.965784072875977) * 0.6931470036506653;
          *puVar21 = 0x5de8d8;
          FUN_006f7ee0();
          uVar11 = 0;
          if (-1 < (int)(dVar30 / (double)in_XMM1_Da)) {
            uVar11 = (int)(dVar30 / (double)in_XMM1_Da);
          }
          if ((int)in_EDX < (int)uVar11) {
            uVar11 = in_EDX;
          }
          if ((int)uVar11 < (int)uVar14) {
            uVar14 = uVar11;
          }
          uVar15 = (uint)(dVar33 / (double)in_XMM1_Da + 1.0);
          uVar11 = 0;
          if (-1 < (int)uVar15) {
            uVar11 = uVar15;
          }
          if ((int)in_EDX < (int)uVar11) {
            uVar11 = in_EDX;
          }
          for (; ((int)uVar14 < (int)uVar11 && ((int)uVar14 < (int)in_EDX)); uVar14 = uVar14 + 1) {
            if (*local_7ef4 < *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1)) {
              *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1) = *local_7ef4;
            }
          }
          local_7ef4 = local_7ef4 + 1;
          local_7f00 = local_7f00 + 1;
        } while (local_7f00 < 0x38);
        if ((int)uVar14 < (int)in_EDX) {
          fVar27 = *(float *)((int)afStack_7e14 + ((int)local_7f04 + 1) * 0x700 + local_7efc);
          do {
            if (fVar27 < *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1)) {
              *(float *)(&stack0xffff80a0 + uVar14 * 4 + iVar1) = fVar27;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)in_EDX);
        }
      }
      local_7f00 = 0;
      pfVar25 = (float *)(*local_7f20 + 8);
      pfVar10 = pfVar25;
      do {
        dVar30 = ((((double)local_7f00 * 0.125 + dVar29) - 2.0) + 5.965784072875977) *
                 0.6931470036506653;
        *puVar21 = 0x5de9e5;
        FUN_006f7ee0();
        iVar13 = (int)(dVar30 / (double)in_XMM1_Da);
        if (iVar13 < 0) {
          *pfVar10 = -999.0;
        }
        else if (iVar13 < (int)in_EDX) {
          *pfVar10 = *(float *)(&stack0xffff80a0 + iVar13 * 4 + iVar1);
        }
        else {
          *pfVar10 = -999.0;
        }
        pfVar10 = pfVar10 + 1;
        local_7f00 = local_7f00 + 1;
      } while (local_7f00 < 0x38);
      iVar13 = 0;
      do {
        if (-200.0 < *pfVar25) break;
        iVar13 = iVar13 + 1;
        pfVar25 = pfVar25 + 1;
      } while (iVar13 < 0x10);
      iVar23 = 0x37;
      pfVar10 = pfVar9 + 0x39;
      *pfVar9 = (float)iVar13;
      do {
        if (-200.0 < *pfVar10) break;
        iVar23 = iVar23 + -1;
        pfVar10 = pfVar10 + -1;
      } while (0x11 < iVar23);
      local_7f0c = (uint *)((int)local_7f0c + 4);
      local_7efc = local_7efc + 0xe0;
      local_7f20 = local_7f20 + 1;
      pfVar9[1] = (float)iVar23;
    } while (local_7efc < 0x700);
    local_7f10 = (float *)((int)local_7f10 + 0x700);
    local_7f04 = (float *)((int)local_7f04 + 1);
    if (0x10 < (int)local_7f04) {
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

