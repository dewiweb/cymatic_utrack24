// rea decompile_all
// name: FUN_0003de10
// address: 0x3de10
// body: available
// range: 0x3de10-0x3e1fb inclusive
// range: 0x3e244-0x3e615 inclusive
// range: 0x3e75c-0x3eb7d inclusive
// range: 0x3eba0-0x3edd3 inclusive
// range: 0x3edd6-0x3ef0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0003de10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint extraout_r1;
  int extraout_r1_00;
  int iVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  short *psVar17;
  int *piVar18;
  undefined4 uVar19;
  byte *pbVar20;
  char *pcVar21;
  int iVar22;
  byte *pbVar23;
  uint uVar24;
  undefined4 uVar25;
  int local_548;
  int local_544;
  undefined1 auStack_540 [4];
  int local_53c;
  undefined4 local_538;
  undefined4 local_534;
  uint local_528;
  int aiStack_524 [9];
  uint auStack_500 [58];
  undefined1 auStack_418 [8];
  undefined1 auStack_410 [248];
  undefined2 local_318;
  undefined2 local_316;
  ushort local_310;
  ushort local_30e;
  uint local_2e0;
  undefined4 *local_2dc;
  uint local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int *local_2c4;
  int *local_2c0;
  int local_2bc;
  int local_2b8;
  uint local_2b4;
  int local_2b0;
  int local_2ac;
  undefined1 *local_2a8;
  int local_2a4;
  undefined4 *local_2a0;
  int local_29c;
  int *local_298;
  undefined1 *local_290;
  int local_28c;
  int local_288;
  undefined4 *local_284;
  int local_280;
  int *local_27c;
  int local_278;
  int local_274;
  undefined4 local_270;
  undefined1 *local_26c;
  int local_268;
  undefined1 *local_264;
  int local_260;
  int local_25c;
  int local_258;
  undefined4 *local_254;
  int local_248;
  uint local_244;
  uint local_240;
  byte *local_23c;
  undefined1 *local_238;
  int local_234;
  int local_230;
  byte local_228 [256];
  byte local_128 [256];
  undefined1 auStack_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = param_4;
  local_1c = param_3;
  local_20 = param_2;
  local_24 = param_1;
  uVar24 = *(uint *)((int)auStack_500 + DAT_0003e1fc + 0xc);
  if ((*(int *)((int)aiStack_524 + DAT_0003e1fc + 0xc) == 0) ||
     (iVar5 = FUN_001e5f0c(*(undefined4 *)((int)aiStack_524 + DAT_0003e1fc),
                           *(undefined4 *)((int)auStack_500 + DAT_0003e1fc),
                           *(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 0xc)), iVar5 == 0)) {
    local_230 = 0;
  }
  else {
    local_230 = 1;
  }
  local_27c = &local_2bc;
  local_2bc = 0;
  local_2d0 = 0;
  local_2cc = 0;
  local_2c0 = &local_2cc;
  local_2b4 = 0;
  local_258 = 0;
  local_254 = (undefined4 *)0x0;
  local_2c4 = &local_2d0;
  iVar5 = FUN_0002a168(*(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 4),
                       *(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 8),0xc);
  local_29c = *(int *)((int)aiStack_524 + DAT_0003e1fc) + DAT_0003e200;
  local_2c8 = *(int *)((int)aiStack_524 + DAT_0003e1fc) + DAT_0003e208;
  local_2ac = *(int *)((int)aiStack_524 + DAT_0003e1fc) + 0x1f80;
  local_298 = (int *)(*(int *)((int)aiStack_524 + DAT_0003e1fc) + DAT_0003e204);
  if (iVar5 != 0) {
    local_548 = local_29c;
    iVar5 = FUN_000279c8(*(undefined4 *)((int)aiStack_524 + DAT_0003e1fc),
                         *(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 4),iVar5,
                         *(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 8),
                         *(undefined4 *)((int)auStack_500 + DAT_0003e1fc),0x80);
    if (((iVar5 != 0) && (*(char *)(local_2c8 + 0x10) != -0x10)) &&
       (*(short *)(local_2c8 + 0x12) == 0x29)) {
      iVar5 = local_298[4];
      uVar1 = *(ushort *)(local_2c8 + 0x1c);
      for (psVar17 = (short *)(iVar5 + 4); psVar17 < (short *)(iVar5 + (uint)uVar1 + 4);
          psVar17 = psVar17 + 0xc) {
        if (((*psVar17 == 4) && ((char)psVar17[2] == '\0')) &&
           (*(int3 *)(psVar17 + 3) != 0 || *(char *)((int)psVar17 + 9) != '\0')) {
          FUN_00023c10(*(undefined4 *)((int)aiStack_524 + DAT_0003e1fc),psVar17 + 2,
                       *(undefined4 *)(local_2ac + 0x3c));
          FUN_00023c10(*(undefined4 *)((int)aiStack_524 + DAT_0003e1fc),psVar17 + 2,
                       *(undefined4 *)(local_2ac + 0x38));
        }
      }
    }
    *(undefined1 *)(local_2c8 + 0x10) = 0;
  }
  local_244 = *(int *)((int)aiStack_524 + DAT_0003e1fc + 4) + 0xc;
  local_2d8 = local_244;
  local_2b8 = 0;
  local_2e0 = *(int *)((int)aiStack_524 + DAT_0003e1fc) + 0xc0;
  if (*(short *)(*(int *)((int)aiStack_524 + DAT_0003e1fc + 4) + 4) != 0) {
    local_248 = *(int *)((int)aiStack_524 + DAT_0003e1fc) + 0x37;
    local_240 = *(uint *)((int)auStack_500 + DAT_0003e1fc + 8) | uVar24;
    local_23c = local_128;
    local_238 = auStack_28;
    local_234 = local_24 + 0x100;
    local_290 = auStack_410;
    local_2b0 = *(int *)((int)aiStack_524 + DAT_0003e1fc) + 0x1fc0;
    do {
      local_280 = 0;
      local_2a0 = (undefined4 *)0x0;
      local_2d8 = FUN_001db92c(*(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 4),local_2d8,
                               *(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 8),
                               *(undefined4 *)((int)auStack_500 + DAT_0003e1fc),auStack_540);
      if (local_2d8 == 0) goto LAB_0003edea;
      if (((*(int *)((int)auStack_500 + DAT_0003e1fc + 8) == 0) ||
          (*(int *)((int)auStack_500 + DAT_0003e1fc + 4) != 0)) ||
         ((int)((uint)local_30e << 0x10) < 0)) {
        local_25c = 0;
      }
      else {
        local_25c = 1;
      }
      local_30e = local_30e & 0x7fff;
      iVar5 = *(int *)(local_2b0 + 4);
      if (iVar5 != 0) {
        uVar25 = FUN_00028288(iVar5 + 4,*(int *)(iVar5 + 0x24) + 4,local_248);
        FUN_0002a1c6(0,s_ProcessQuery_ERROR_m_>CurrentRec_0003e20c,uVar25);
      }
      iVar5 = *(int *)(local_2ac + 0x38);
      *(int *)(local_2b0 + 4) = iVar5;
      if (iVar5 == 0) {
LAB_0003e418:
        local_2b4 = *DAT_0003e708;
      }
      else {
        do {
          puVar12 = *(undefined4 **)(local_2b0 + 4);
          *(undefined4 *)(local_2b0 + 4) = *puVar12;
          iVar5 = FUN_0001d5d4(puVar12 + 1,auStack_540);
          if ((iVar5 != 0) && ((local_240 != 0 || (*(char *)((int)puVar12 + 0x45) != '\0')))) {
            uVar24 = (uint)*(ushort *)((int)puVar12 + 6);
            if (((uVar24 == 5) || ((uVar11 = (uint)local_310, uVar24 == uVar11 || (uVar11 == 0xff)))
                ) || ((uVar24 == 0x2f &&
                      ((uVar11 < 0xff &&
                       (((uint)*(byte *)(puVar12[9] + (local_310 >> 3) + 4) & 0x80U >> (uVar11 & 7))
                        == 0)))))) {
              if (*(byte *)(puVar12 + 1) == 2) {
                local_2d4 = *(int *)((int)aiStack_524 + DAT_0003e1fc);
                local_2a8 = *(undefined1 **)((int)aiStack_524 + DAT_0003e1fc + 4);
                local_270 = *(undefined4 *)((int)aiStack_524 + DAT_0003e1fc + 8);
                local_2dc = puVar12;
                local_26c = auStack_540;
                iVar5 = FUN_0002a0d6(local_2a8,local_270);
                local_268 = 0;
                local_28c = 0;
                if (*(short *)(local_2a8 + 8) == 0) {
LAB_0003e35a:
                  if (*_DAT_0003e70c != 0) {
                    uVar25 = FUN_00025930(*(undefined2 *)((int)local_2dc + 6));
                    FUN_0002a1c6(3,s____ResolveSimultaneousProbe______0003e70d + 3,local_2dc[8],
                                 uVar25);
                  }
                }
                else {
                  local_288 = local_2d4 + DAT_0003e200;
                  local_264 = local_26c + 0x100;
                  local_278 = local_2d4 + DAT_0003e240;
                  local_2a4 = local_2d4 + DAT_0003e208;
                  local_284 = local_2dc + 0x18;
                  local_274 = local_2d4 + 0x37;
                  local_260 = local_2d4 + DAT_0003e204;
                  do {
                    local_548 = local_288;
                    iVar5 = FUN_000279c8(local_2d4,local_2a8,iVar5,local_270,
                                         *(undefined4 *)(local_264 + 0x14),0xa0);
                    if (iVar5 == 0) break;
                    if ((*(char *)(local_2a4 + 0x10) != -0x10) &&
                       (iVar10 = FUN_0003fb0c(local_278,local_26c), iVar10 != 0)) {
                      local_268 = 1;
                      iVar10 = FUN_0003d51c(local_2d4,local_2dc,local_288);
                      if (iVar10 != 0) {
                        iVar10 = (uint)*(ushort *)(local_2dc + 2) -
                                 (uint)*(ushort *)(local_2a4 + 0x14);
                        if ((iVar10 == 0) &&
                           (iVar10 = (uint)*(ushort *)((int)local_2dc + 6) -
                                     (uint)*(ushort *)(local_2a4 + 0x12), iVar10 == 0)) {
                          pbVar23 = local_228;
                          pbVar20 = local_128;
                          local_544 = local_288;
                          if (local_2dc == (undefined4 *)0x0) {
                            FUN_0002a1c6(0,s_CompareRData_ERROR__our_is_NULL_0003e618);
                            iVar10 = 1;
                          }
                          else if (local_288 == 0) {
                            FUN_0002a1c6(0,s_CompareRData_ERROR__pkt_is_NULL_0003e638);
                            iVar10 = 1;
                          }
                          else {
                            pbVar6 = (byte *)FUN_001f2bd8(0,pbVar23,local_23c,local_2dc + 1);
                            pbVar7 = (byte *)FUN_001f2bd8(0,pbVar20,local_238,local_544 + 4);
                            for (; ((pbVar23 < pbVar6 && (pbVar20 < pbVar7)) &&
                                   (*pbVar23 == *pbVar20)); pbVar23 = pbVar23 + 1) {
                              pbVar20 = pbVar20 + 1;
                            }
                            if ((pbVar6 <= pbVar23) && (pbVar7 <= pbVar20)) goto LAB_0003e336;
                            if (pbVar23 < pbVar6) {
                              if (pbVar20 < pbVar7) {
                                if (*pbVar23 < *pbVar20) goto LAB_0003e292;
                                if (*pbVar23 <= *pbVar20) {
                                  FUN_0002a1c6(0,s_CompareRData_ERROR__Invalid_stat_0003e658);
                                  iVar10 = -1;
                                  goto LAB_0003e2a8;
                                }
                              }
                              iVar10 = 1;
                            }
                            else {
LAB_0003e292:
                              iVar10 = -1;
                            }
                          }
                        }
LAB_0003e2a8:
                        if (iVar10 < 0) {
                          pcVar21 = s_lost__0003e67c;
                        }
                        else if (iVar10 < 1) {
                          pcVar21 = (char *)0x3e68c;
                        }
                        else {
                          pcVar21 = s_won__0003e684;
                        }
                        uVar25 = FUN_00028288(local_278,*(int *)(local_260 + 0x10) + 4,local_274);
                        FUN_0002a1c6(0,s_ResolveSimultaneousProbe___p_Pkt_0003e694,
                                     *(undefined4 *)(local_264 + 0x14),
                                     *(undefined4 *)(local_260 + 4),uVar25);
                        local_548 = FUN_00028288(local_2dc + 1,local_2dc[9] + 4,local_274);
                        FUN_0002a1c6(0,s_ResolveSimultaneousProbe___p_Our_0003e6d0,local_2dc[7],
                                     *(undefined1 *)((int)local_284 + 0x1a),pcVar21,local_2dc[6]);
                        if (iVar10 < 0) {
                          iVar5 = *(int *)(local_2d4 + 0xdc) + *DAT_0003e708;
                          if (iVar5 == 0) {
                            iVar5 = 1;
                          }
                          *(int *)(&DAT_00001fd8 + local_2d4) = iVar5;
                          *(undefined1 *)((int)local_284 + 0x1a) = 3;
                          *(undefined1 *)((int)local_284 + 0x1b) = 8;
                          FUN_0002921c(local_2d4,local_2dc);
                          goto LAB_0003e378;
                        }
                      }
                    }
LAB_0003e336:
                    *(undefined1 *)(local_2a4 + 0x10) = 0;
                    local_28c = local_28c + 1;
                  } while (local_28c < (int)(uint)*(ushort *)(local_2a8 + 8));
                  if (local_268 == 0) goto LAB_0003e35a;
                }
LAB_0003e378:
                *(undefined1 *)(local_2d4 + DAT_0003e74c + 0x10) = 0;
              }
              else if (((((*(byte *)(puVar12 + 1) & 0x3f) >> 2 != 0) &&
                        ((puVar12[0xb] == 0 || ((*(byte *)(puVar12[0xb] + 4) & 0x3f) >> 2 != 0))))
                       && ((puVar12[0xc] == 0 || ((*(byte *)(puVar12[0xc] + 4) & 0x3f) >> 2 != 0))))
                      && ((puVar12[0xd] == 0 || ((*(byte *)(puVar12[0xd] + 4) & 0x3f) >> 2 != 0))))
              {
                local_280 = local_280 + 1;
                if ((local_25c == 0) &&
                   (((local_230 != 0 || (*(int *)((int)auStack_500 + DAT_0003e750 + 8) == 0)) ||
                    (*(int *)((int)auStack_500 + DAT_0003e750 + 4) != 0)))) {
                  if (puVar12[0x2a] == 0) {
                    uVar24 = local_2d8;
                    if (*(int *)((int)auStack_500 + DAT_0003e750 + 4) == 0) {
                      uVar24 = 0xfffffffe;
                    }
                    puVar12[0x2a] = uVar24;
                  }
                }
                else if ((-1 < (int)(*(int *)(local_2e0 + 0x1c) - (puVar12[0x2e] + *DAT_0003e708)))
                        || ((puVar12[0x2f] != *DAT_0003e754 &&
                            (puVar12[0x2f] != *(int *)((int)auStack_500 + DAT_0003e750))))) {
                  puVar12[0x2a] = 0xffffffff;
                }
              }
            }
            else if (((((((*(byte *)(puVar12 + 1) & 0x3f) >> 4 != 0) &&
                        ((*(byte *)(puVar12 + 1) & 0x3f) >> 2 != 0)) &&
                       ((puVar12[0xb] == 0 || ((*(byte *)(puVar12[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
                      ((puVar12[0xc] == 0 || ((*(byte *)(puVar12[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
                     ((puVar12[0xd] == 0 || ((*(byte *)(puVar12[0xd] + 4) & 0x3f) >> 2 != 0)))) &&
                    (local_2a0 == (undefined4 *)0x0)) {
              local_2a0 = puVar12;
            }
          }
        } while (*(int *)(local_2b0 + 4) != 0);
        if (local_280 == 0) {
          if (local_2a0 == (undefined4 *)0x0) goto LAB_0003e418;
          local_2a0[0x20] = *(undefined4 *)((int)auStack_500 + DAT_0003e750);
          *(undefined4 *)(local_2e0 + 0x3c) = *(undefined4 *)(local_2e0 + 0x1c);
        }
      }
      if ((local_25c != 0) &&
         (-1 < (int)((uint)*(byte *)(*(int *)((int)aiStack_524 + DAT_0003e750 + 4) + 2) << 0x1e))) {
        FUN_00025cca(local_290);
        iVar10 = FUN_001c6fe0();
        puVar4 = local_290;
        iVar5 = local_53c;
        for (piVar8 = *(int **)(iVar10 * 4 + *(int *)((int)aiStack_524 + DAT_0003e750) + 0x15c);
            piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
          if ((piVar8[1] == iVar5) && (iVar10 = FUN_000400ea(piVar8[4],puVar4), iVar10 != 0)) {
            if (piVar8 == (int *)0x0) goto LAB_0003e4aa;
            piVar8 = (int *)piVar8[2];
            goto LAB_0003e474;
          }
        }
        piVar8 = (int *)0x0;
LAB_0003e474:
        if (piVar8 != (int *)0x0) {
          do {
            iVar5 = FUN_000401cc(piVar8 + 1,auStack_540);
            if ((((iVar5 != 0) && (*(ushort *)(piVar8 + 4) < 0x401)) && (piVar8[0xb] == 0)) &&
               (local_2c4 != piVar8 + 0xb)) {
              *local_2c4 = (int)piVar8;
              local_2c4 = piVar8 + 0xb;
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != (int *)0x0);
        }
LAB_0003e4aa:
        puVar3 = DAT_0003e708;
        for (piVar8 = *(int **)(local_234 + 0x30); piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
          if ((((piVar8[0x46] == 0) && (0 < piVar8[4])) &&
              ((piVar8[0xe] == 0 &&
               ((int)(((uint)((int)*puVar3 >> 0x1f) >> 0x1e) + *puVar3) >> 2 <
                *(int *)(local_2e0 + 0x1c) - piVar8[0x2b])))) &&
             (((piVar8[0x45] == 0 || (piVar8[0x45] == *(int *)((int)auStack_500 + DAT_0003e750))) &&
              ((piVar8[0xf] == 0 &&
               ((((local_2c0 != piVar8 + 0xf && (*(ushort *)(piVar8 + 0x8c) == local_310)) &&
                 (*(ushort *)((int)piVar8 + 0x232) == local_30e)) &&
                ((piVar8[1] == local_53c &&
                 (iVar5 = FUN_000400ea(piVar8 + 0x4c,local_290), iVar5 != 0)))))))))) {
            *local_2c0 = (int)piVar8;
            local_2c0 = piVar8 + 0xf;
          }
        }
      }
      local_2b8 = local_2b8 + 1;
    } while (local_2b8 < (int)(uint)*(ushort *)(*(int *)((int)aiStack_524 + DAT_0003e750 + 4) + 4));
  }
  for (piVar8 = *(int **)(local_2ac + 0x38); piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
    if (((piVar8[0x2a] != 0) && (piVar8[0x29] == 0)) && (local_27c != piVar8 + 0x29)) {
      *local_27c = (int)piVar8;
      piVar8[0x2b] = 0;
      local_27c = piVar8 + 0x29;
    }
  }
  FUN_0001c994(*(undefined4 *)((int)aiStack_524 + DAT_0003e750),local_2bc,&local_27c,
               *(undefined4 *)((int)auStack_500 + DAT_0003e750));
  local_2b8 = 0;
  iVar5 = local_2bc;
  if (*(short *)(*(int *)((int)aiStack_524 + DAT_0003e750 + 4) + 6) != 0) {
    local_544 = *(int *)((int)aiStack_524 + DAT_0003e750) + DAT_0003e758;
LAB_0003e5c0:
    local_548 = local_29c;
    local_2d8 = FUN_000279c8(*(undefined4 *)((int)aiStack_524 + DAT_0003e750),
                             *(undefined4 *)((int)aiStack_524 + DAT_0003e750 + 4),local_2d8,
                             *(undefined4 *)((int)aiStack_524 + DAT_0003e750 + 8),
                             *(undefined4 *)((int)auStack_500 + DAT_0003e750),0xc0);
    if (local_2d8 != 0) {
      puVar12 = DAT_0003eb84;
      iVar10 = local_2bc;
      iVar5 = local_29c;
      if (*(char *)(local_2c8 + 0x10) != -0x10) {
        for (; DAT_0003eb84 = puVar12, iVar10 != 0; iVar10 = *(int *)(iVar10 + 0xa4)) {
          local_29c = iVar5;
          if (((((*(int *)(iVar10 + 0xa8) != 0) || (*(int *)(iVar10 + 0xac) != 0)) &&
               (*(short *)(iVar5 + 6) == *(short *)(iVar10 + 6))) &&
              ((*(short *)(iVar5 + 8) == *(short *)(iVar10 + 8) &&
               (*(int *)(iVar5 + 0x14) == *(int *)(iVar10 + 0x14))))) &&
             ((((*(short *)(iVar5 + 0x10) == *(short *)(iVar10 + 0x10) &&
                ((*(int *)(iVar5 + 0x18) == *(int *)(iVar10 + 0x18) &&
                 (iVar9 = FUN_00040260(iVar5 + 4,*(int *)(iVar10 + 0x24) + 4,DAT_0003eb80),
                 iVar9 != 0)))) &&
               (iVar9 = FUN_000400ea(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar10 + 0x20)),
               iVar9 != 0)) && (*(uint *)(iVar10 + 0xc) >> 1 <= *(uint *)(iVar5 + 0xc))))) {
            *(undefined4 *)(iVar10 + 0xa8) = 0;
            *(undefined4 *)(iVar10 + 0xac) = 0;
          }
          puVar12 = DAT_0003eb84;
          iVar5 = local_29c;
        }
        iVar10 = local_544;
        for (piVar8 = *(int **)(local_2ac + 0x38); local_544 = iVar10, local_29c = iVar5,
            piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
          if (((((((piVar8[0x21] == *(int *)((int)auStack_500 + DAT_0003eb88)) &&
                  (*(short *)(iVar5 + 6) == *(short *)((int)piVar8 + 6))) &&
                 (*(short *)(iVar5 + 8) == *(short *)(piVar8 + 2))) &&
                ((*(int *)(iVar5 + 0x14) == piVar8[5] &&
                 (*(short *)(iVar5 + 0x10) == *(short *)(piVar8 + 4))))) &&
               (*(int *)(iVar5 + 0x18) == piVar8[6])) &&
              ((iVar10 = FUN_00040260(iVar5 + 4,piVar8[9] + 4,DAT_0003eb80), iVar10 != 0 &&
               (iVar10 = FUN_000400ea(*(undefined4 *)(iVar5 + 0x20),piVar8[8]), iVar10 != 0)))) &&
             ((uint)piVar8[3] >> 1 <= *(uint *)(iVar5 + 0xc))) {
            iVar5 = **(int **)((int)aiStack_524 + DAT_0003eb88 + 0xc);
            if (iVar5 == 4) {
              if (piVar8[0x24] == *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 4)) {
                piVar8[0x24] = *DAT_0003eb8c;
              }
            }
            else if ((((iVar5 == 6) &&
                      (piVar8[0x25] == *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 4)
                      )) && (piVar8[0x26] ==
                             *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 8))) &&
                    ((piVar8[0x27] ==
                      *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 0xc) &&
                     (piVar8[0x28] ==
                      *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 0x10))))) {
              uVar25 = puVar12[1];
              uVar15 = puVar12[2];
              uVar19 = puVar12[3];
              piVar8[0x25] = *puVar12;
              piVar8[0x26] = uVar25;
              piVar8[0x27] = uVar15;
              piVar8[0x28] = uVar19;
            }
            if ((piVar8[0x24] == 0) &&
               ((piVar8[0x25] == 0 && piVar8[0x26] == 0) && (piVar8[0x27] == 0 && piVar8[0x28] == 0)
               )) {
              piVar8[0x21] = 0;
              *(undefined1 *)((int)piVar8 + 0x7f) = 0;
            }
          }
          iVar10 = local_544;
          iVar5 = local_29c;
        }
        iVar9 = *(int *)((int)aiStack_524 + DAT_0003eb88);
        FUN_00025cca(*(undefined4 *)(iVar10 + 0x1c));
        iVar5 = FUN_001c6fe0();
        uVar25 = *(undefined4 *)(iVar10 + 0x1c);
        iVar22 = *(int *)(iVar10 + 0x10);
        for (piVar8 = *(int **)(iVar5 * 4 + iVar9 + 0x15c); piVar8 != (int *)0x0;
            piVar8 = (int *)*piVar8) {
          if ((piVar8[1] == iVar22) && (iVar5 = FUN_000400ea(piVar8[4],uVar25), iVar5 != 0)) {
            piVar18 = (int *)0x0;
            if (piVar8 == (int *)0x0) goto LAB_0003e940;
            piVar18 = (int *)piVar8[2];
            goto joined_r0x0003e8f2;
          }
        }
        piVar18 = (int *)0x0;
joined_r0x0003e8f2:
        do {
          if (piVar18 == (int *)0x0) goto LAB_0003e940;
          if (*(int *)(iVar10 + 0x18) == 0) {
            if (*(int *)(iVar10 + 0x24) == piVar18[10]) goto LAB_0003e900;
          }
          else if (*(int *)(iVar10 + 0x18) == piVar18[7]) {
LAB_0003e900:
            if ((((*(short *)(iVar10 + 2) == *(short *)((int)piVar18 + 6)) &&
                 (*(short *)(iVar10 + 4) == *(short *)(piVar18 + 2))) &&
                (*(short *)(iVar10 + 0xc) == *(short *)(piVar18 + 4))) &&
               ((*(int *)(iVar10 + 0x14) == piVar18[6] &&
                (iVar5 = FUN_00040260(iVar10,piVar18[9] + 4,DAT_0003eb80), iVar5 != 0))))
            goto LAB_0003e940;
          }
          piVar18 = (int *)*piVar18;
        } while( true );
      }
      goto LAB_0003e9e8;
    }
    goto LAB_0003edea;
  }
joined_r0x0003ea0e:
  for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xa4)) {
    iVar10 = *(int *)(iVar5 + 0xac);
    if (((iVar10 != 0) && (*(int *)(iVar10 + 0xa8) == 0)) && (*(int *)(iVar10 + 0xac) == 0)) {
      *(undefined4 *)(iVar5 + 0xa8) = 0;
      *(undefined4 *)(iVar5 + 0xac) = 0;
    }
  }
  uVar24 = 0;
  if (local_2bc != 0) {
    local_534 = *DAT_0003eb90;
    local_538 = *DAT_0003eb94;
    local_548 = *DAT_0003eb98;
    local_544 = DAT_0003eb98[1];
    iVar10 = DAT_0003eb98[2];
    iVar9 = DAT_0003eb98[3];
    local_528 = *DAT_0003eb9c;
    aiStack_524[1] = local_528 * 0x14;
    iVar5 = local_2bc;
    do {
      if (*(int *)(iVar5 + 0xa8) == 0) {
        uVar24 = 0;
        if ((*(int *)(iVar5 + 0xac) != 0) &&
           (uVar24 = *(int *)(*(int *)(iVar5 + 0xac) + 0xa8) + 1, uVar24 == 0)) {
          uVar24 = *(uint *)((int)auStack_500 + DAT_0003ef0c);
          *(uint *)(iVar5 + 0x88) = uVar24;
        }
      }
      else {
        bVar2 = false;
        iVar22 = local_528 * *(int *)(iVar5 + 0xc);
        bVar14 = false;
        if ((-1 < *(int *)(local_2e0 + 0x1c) -
                  (*(int *)(iVar5 + 0xb8) + ((int)(((uint)(iVar22 >> 0x1f) >> 0x1e) + iVar22) >> 2))
            ) && (bVar2 = true, *(int *)(iVar5 + 0xa8) == -2)) {
          *(undefined4 *)(iVar5 + 0xa8) = 0xffffffff;
        }
        iVar22 = *(int *)(iVar5 + 0xa8);
        if (iVar22 == -1) {
          bVar2 = true;
        }
        else if (iVar22 == -2) {
          bVar14 = true;
        }
        else if (iVar22 != 0) {
          local_258 = 1;
        }
        if (bVar2 || bVar14) {
          *(undefined4 *)(local_2e0 + 0x3c) = *(undefined4 *)(local_2e0 + 0x1c);
          if ((*(int *)(iVar5 + 0x84) == 0) ||
             (*(int *)(iVar5 + 0x84) == *(int *)((int)auStack_500 + DAT_0003eb88))) {
            *(undefined4 *)(iVar5 + 0x84) = *(undefined4 *)((int)auStack_500 + DAT_0003eb88);
            if (bVar14) {
              *(undefined1 *)(iVar5 + 0x7f) = 1;
            }
            iVar22 = **(int **)((int)aiStack_524 + DAT_0003eb88 + 0xc);
            if (iVar22 == 4) {
              if (*(int *)(iVar5 + 0x90) == 0) {
                uVar25 = *(undefined4 *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 4);
              }
              else {
                uVar25 = local_538;
                if (*(int *)(iVar5 + 0x90) ==
                    *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 4))
                goto LAB_0003eb6e;
              }
              *(undefined4 *)(iVar5 + 0x90) = uVar25;
            }
            else if (iVar22 == 6) {
              if ((*(int *)(iVar5 + 0x94) == 0 && *(int *)(iVar5 + 0x98) == 0) &&
                  (*(int *)(iVar5 + 0x9c) == 0 && *(int *)(iVar5 + 0xa0) == 0)) {
                iVar22 = *(int *)((int)aiStack_524 + DAT_0003ef0c + 0xc);
                uVar25 = *(undefined4 *)(iVar22 + 8);
                uVar15 = *(undefined4 *)(iVar22 + 0xc);
                uVar19 = *(undefined4 *)(iVar22 + 0x10);
                *(undefined4 *)(iVar5 + 0x94) = *(undefined4 *)(iVar22 + 4);
                *(undefined4 *)(iVar5 + 0x98) = uVar25;
                *(undefined4 *)(iVar5 + 0x9c) = uVar15;
                *(undefined4 *)(iVar5 + 0xa0) = uVar19;
              }
              else if ((((*(int *)(iVar5 + 0x94) !=
                          *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 4)) ||
                        (*(int *)(iVar5 + 0x98) !=
                         *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 8))) ||
                       (*(int *)(iVar5 + 0x9c) !=
                        *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 0xc))) ||
                      (*(int *)(iVar5 + 0xa0) !=
                       *(int *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 0xc) + 0x10))) {
                *(int *)(iVar5 + 0x94) = local_548;
                *(int *)(iVar5 + 0x98) = local_544;
                *(int *)(iVar5 + 0x9c) = iVar10;
                *(int *)(iVar5 + 0xa0) = iVar9;
              }
            }
          }
          else {
            *(undefined4 *)(iVar5 + 0x84) = local_534;
          }
        }
LAB_0003eb6e:
        uVar11 = local_528 * 0x14;
        if (((int)((uint)*(byte *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 4) + 2) << 0x1e) < 0)
           || (uVar24 = (uint)*(byte *)(iVar5 + 4), uVar11 = local_528, uVar24 == 8)) {
          local_2b4 = uVar11;
          uVar24 = uVar11;
        }
      }
      iVar5 = *(int *)(iVar5 + 0xa4);
    } while (iVar5 != 0);
  }
  if ((local_2b4 != 0) &&
     ((iVar5 = *(int *)(local_2e0 + 0x2c), iVar5 == 0 ||
      (FUN_001c6ef0(local_2b4 + 0x31), uVar24 = extraout_r1,
      iVar5 - *(int *)(local_2e0 + 0x1c) < (int)extraout_r1)))) {
    iVar5 = FUN_001e5af4(*DAT_0003ef10 * 5);
    FUN_001c6ef0(iVar5 + local_2b4 + 0x31);
    iVar5 = extraout_r1_00 + *(int *)(local_2e0 + 0x1c);
    *(int *)(local_2e0 + 0x2c) = iVar5;
    uVar24 = local_2e0;
    if (iVar5 == 0) {
      *(undefined4 *)(local_2e0 + 0x2c) = 1;
    }
  }
  uVar11 = local_244;
  if (local_258 == 0) goto LAB_0003edea;
  pbVar23 = *(byte **)((int)aiStack_524 + DAT_0003ef0c + 4);
  local_2b4 = *(uint *)((int)aiStack_524 + DAT_0003ef0c + 8);
  local_2b0 = *(int *)((int)auStack_500 + DAT_0003ef0c);
  iVar10 = *(int *)((int)auStack_500 + DAT_0003ef0c + 4);
  iVar5 = *(int *)((int)auStack_500 + DAT_0003ef0c + 0x10);
  local_2b8 = local_2bc;
  local_2dc = (undefined4 *)(iVar5 + 0xc);
  local_2ac = iVar5 + DAT_0003ef14;
  local_2d8 = 0x70000000;
  FUN_000291f8(iVar5,uVar24 & 0xffff0000 | (uint)*pbVar23 | (uint)pbVar23[1] << 8,
               *(undefined2 *)s__z__GenerateUnicastResponse__ERR_0003ef18._0_4_);
  if (iVar10 == 0) {
LAB_0003ecfc:
    puVar12 = local_2dc;
    if (local_2b8 != 0) {
      iVar9 = 0x5a0;
      iVar10 = local_2b8;
      do {
        if (*(int *)(iVar10 + 0xa8) != 0) {
          iVar22 = iVar9;
          if (((*(short *)(iVar5 + 6) == 0) && (*(short *)(iVar5 + 8) == 0)) &&
             (*(short *)(iVar5 + 10) == 0)) {
            iVar22 = DAT_0003ef50;
          }
          uVar24 = *(uint *)(iVar10 + 0xc);
          if (local_2d8 < *(uint *)(iVar10 + 0xc)) {
            uVar24 = local_2d8;
          }
          puVar12 = (undefined4 *)
                    FUN_0003ef54(iVar5,local_2dc,iVar5 + 6,iVar10 + 4,uVar24,iVar22 + iVar5 + 0xc);
          if (puVar12 == (undefined4 *)0x0) {
            *(byte *)(iVar5 + 2) = *(byte *)(iVar5 + 2) | 2;
          }
          else {
            local_2dc = puVar12;
          }
        }
        iVar10 = *(int *)(iVar10 + 0xa4);
      } while (iVar10 != 0);
      puVar12 = local_2dc;
      if (local_2b8 != 0) {
        iVar10 = local_2b8;
        do {
          if ((*(int *)(iVar10 + 0xac) != 0) && (*(int *)(iVar10 + 0xa8) == 0)) {
            iVar22 = iVar9;
            if ((*(short *)(iVar5 + 6) == 0) &&
               ((*(short *)(iVar5 + 8) == 0 && (*(short *)(iVar5 + 10) == 0)))) {
              iVar22 = DAT_0003ef50;
            }
            uVar24 = *(uint *)(iVar10 + 0xc);
            if (local_2d8 < *(uint *)(iVar10 + 0xc)) {
              uVar24 = local_2d8;
            }
            puVar12 = (undefined4 *)
                      FUN_0003ef54(iVar5,local_2dc,iVar5 + 10,iVar10 + 4,uVar24,iVar22 + iVar5 + 0xc
                                  );
            if (puVar12 != (undefined4 *)0x0) {
              local_2dc = puVar12;
            }
          }
          iVar10 = *(int *)(iVar10 + 0xa4);
          puVar12 = local_2dc;
        } while (iVar10 != 0);
      }
    }
  }
  else {
    local_2d8 = 10;
    iVar10 = 0;
    if (*(short *)(pbVar23 + 4) != 0) {
      local_2a8 = auStack_418;
      do {
        uVar11 = FUN_001db92c(pbVar23,uVar11,local_2b4,local_2b0,&local_548);
        iVar9 = local_2b8;
        if (uVar11 == 0) {
          puVar12 = (undefined4 *)0x0;
          goto LAB_0003ede8;
        }
        for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0xa4)) {
          if (*(uint *)(iVar9 + 0xa8) == uVar11) {
            local_2dc = (undefined4 *)
                        FUN_001f2b9c(iVar5,local_2dc,local_2ac,local_2a8,local_318,local_316);
            puVar12 = local_2dc;
            if (local_2dc == (undefined4 *)0x0) goto LAB_0003ede8;
            break;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(uint)*(ushort *)(pbVar23 + 4));
    }
    if (*(short *)(iVar5 + 4) != 0) goto LAB_0003ecfc;
    FUN_0002a1c6(0,s__z__GenerateUnicastResponse__ERR_0003ef18 + 4);
    puVar12 = (undefined4 *)0x0;
  }
LAB_0003ede8:
  local_254 = puVar12;
LAB_0003edea:
  *(undefined1 *)(local_2c8 + 0x10) = 0;
  piVar8 = DAT_0003ef10;
  iVar5 = local_2bc;
  while (DAT_0003ef10 = piVar8, iVar5 != 0) {
    local_2bc = *(int *)(iVar5 + 0xa4);
    *(undefined4 *)(iVar5 + 0xa4) = 0;
    *(undefined4 *)(iVar5 + 0xa8) = 0;
    *(undefined4 *)(iVar5 + 0xac) = 0;
    piVar8 = DAT_0003ef10;
    iVar5 = local_2bc;
  }
  iVar5 = local_2cc;
  if (local_2d0 != 0) {
    local_2bc = 0;
    iVar10 = local_2d0;
    do {
      iVar5 = DAT_0003ef0c;
      local_2d0 = *(int *)(iVar10 + 0x2c);
      *(undefined4 *)(iVar10 + 0x2c) = 0;
      if ((-1 < (int)((uint)*(byte *)(*(int *)((int)aiStack_524 + iVar5 + 4) + 2) << 0x1e)) &&
         ((*(int *)(iVar10 + 0x44) == 0 ||
          (*piVar8 <= *(int *)(local_2e0 + 0x1c) - *(int *)(iVar10 + 0x48))))) {
        *(int *)(iVar10 + 0x44) = *(int *)(iVar10 + 0x44) + 1;
        *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(local_2e0 + 0x1c);
        FUN_0004419c(*(undefined4 *)((int)aiStack_524 + DAT_0003ef0c),iVar10);
      }
      if (3 < *(uint *)(iVar10 + 0x44)) {
        FUN_001e82f0(*(undefined4 *)((int)aiStack_524 + DAT_0003ef0c),iVar10,*piVar8 * 0x28);
      }
      iVar10 = local_2d0;
      iVar5 = local_2cc;
    } while (local_2d0 != 0);
  }
  do {
    if (iVar5 == 0) {
      s__z__GenerateUnicastResponse__ERR_0003ef18[0] =
           (char)s__z__GenerateUnicastResponse__ERR_0003ef18._0_4_;
      s__z__GenerateUnicastResponse__ERR_0003ef18[1] =
           SUB41(s__z__GenerateUnicastResponse__ERR_0003ef18._0_4_,1);
      s__z__GenerateUnicastResponse__ERR_0003ef18[2] =
           SUB41(s__z__GenerateUnicastResponse__ERR_0003ef18._0_4_,2);
      s__z__GenerateUnicastResponse__ERR_0003ef18[3] =
           SUB41(s__z__GenerateUnicastResponse__ERR_0003ef18._0_4_,3);
      return local_254;
    }
    local_2cc = *(int *)(iVar5 + 0x3c);
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    iVar5 = iVar5 + 0x40;
    iVar9 = *(int *)((int)auStack_500 + DAT_0003ef0c);
    iVar22 = **(int **)((int)aiStack_524 + DAT_0003ef0c + 0xc);
    iVar10 = 0;
    do {
      iVar16 = iVar10 * 0xc + iVar5;
      if (((*(int *)(iVar16 + 4) == iVar9) && (iVar13 = iVar10, *(int *)(iVar16 + 8) == iVar22)) ||
         ((*(int *)(iVar16 + 0x10) == iVar9 &&
          (iVar13 = iVar10 + 1, *(int *)(iVar16 + 0x14) == iVar22)))) break;
      iVar10 = iVar10 + 2;
      iVar13 = iVar10;
    } while (iVar10 < 8);
    if (7 < iVar13) {
      iVar13 = 0;
      iVar10 = 1;
      do {
        if (*(int *)(iVar13 * 0xc + iVar5 + 4) == 0) break;
        if ((*(int *)(iVar10 * 0xc + iVar5 + 4) == 0) ||
           (*(int *)(iVar5 + iVar10 * 0xc) - *(int *)(iVar5 + iVar13 * 0xc) < 0)) {
          iVar13 = iVar10;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
    }
    *(undefined4 *)(iVar5 + iVar13 * 0xc) = *(undefined4 *)(local_2e0 + 0x1c);
    iVar5 = iVar13 * 0xc + iVar5;
    *(int *)(iVar5 + 8) = iVar22;
    *(int *)(iVar5 + 4) = iVar9;
    iVar5 = local_2cc;
  } while( true );
LAB_0003e940:
  piVar8 = &local_2d0;
  iVar5 = local_2d0;
  while (iVar5 != 0) {
    iVar5 = *piVar8;
    if (((*(int *)(iVar5 + 0x1c) == *(int *)((int)auStack_500 + DAT_0003eb88)) &&
        (*(short *)(local_2c8 + 0x12) == *(short *)(iVar5 + 6))) &&
       ((*(short *)(local_2c8 + 0x14) == *(short *)(iVar5 + 8) &&
        ((((*local_298 == *(int *)(iVar5 + 0x14) &&
           (*(short *)(local_2c8 + 0x1c) == *(short *)(iVar5 + 0x10))) &&
          (local_298[1] == *(int *)(iVar5 + 0x18))) &&
         ((iVar10 = FUN_00040260(local_544,*(int *)(iVar5 + 0x24) + 4,DAT_0003eb80), iVar10 != 0 &&
          (iVar10 = FUN_000400ea(local_298[3],*(undefined4 *)(iVar5 + 0x20)), iVar10 != 0)))))))) {
      *piVar8 = *(int *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar5 + 0x2c) = 0;
    }
    else {
      piVar8 = (int *)(iVar5 + 0x2c);
    }
    iVar5 = *piVar8;
  }
  if (piVar18 == (int *)0x0) {
    piVar8 = &local_2cc;
    iVar5 = local_2cc;
    while (iVar5 != 0) {
      iVar10 = *piVar8;
      iVar5 = FUN_0003fb0c(local_544,iVar10);
      if (iVar5 == 0) {
        piVar8 = (int *)(iVar10 + 0x3c);
      }
      else {
        *piVar8 = *(int *)(iVar10 + 0x3c);
        *(undefined4 *)(iVar10 + 0x3c) = 0;
      }
      iVar5 = *piVar8;
    }
  }
LAB_0003e9e8:
  *(undefined1 *)(local_2c8 + 0x10) = 0;
  local_2b8 = local_2b8 + 1;
  iVar5 = local_2bc;
  if ((int)(uint)*(ushort *)(*(int *)((int)aiStack_524 + DAT_0003eb88 + 4) + 6) <= local_2b8)
  goto joined_r0x0003ea0e;
  goto LAB_0003e5c0;
}

