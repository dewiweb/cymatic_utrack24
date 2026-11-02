// rea decompile_all
// name: FUN_001e35fe
// address: 0x1e35fe
// body: available
// range: 0x1e35fe-0x1e385b inclusive
// range: 0x1e3904-0x1e3ce9 inclusive
// range: 0x1e3cec-0x1e3cef inclusive
// range: 0x1e3f8c-0x1e43bf inclusive
// range: 0x1e4460-0x1e47bd inclusive
// range: 0x1e47c0-0x1e48bf inclusive
// range: 0x1e4928-0x1e4b09 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001e35fe(void)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  char *pcVar18;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar19;
  code *pcVar20;
  int iVar21;
  short *psVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int unaff_r6;
  int iVar26;
  int unaff_r7;
  code *pcStack00000000;
  code *pcStack00000004;
  code *pcStack00000008;
  int *piStack00000010;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  code *in_stack_00000020;
  code *in_stack_00000024;
  int iStack00000028;
  code *in_stack_0000002c;
  code *in_stack_00000030;
  code *in_stack_00000034;
  int in_stack_00000038;
  uint in_stack_0000003c;
  code *in_stack_00000040;
  int in_stack_00000044;
  ushort in_stack_00000248;
  ushort in_stack_0000024a;
  int *in_stack_00000268;
  int in_stack_0000026c;
  int in_stack_00000278;
  int *in_stack_0000027c;
  undefined4 in_stack_00000280;
  int in_stack_00000284;
  int iVar27;
  int in_stack_00000288;
  int in_stack_0000028c;
  int in_stack_00000290;
  int in_stack_00000294;
  int in_stack_00000298;
  int in_stack_0000029c;
  int in_stack_000002a0;
  code *in_stack_000002a8;
  int in_stack_000002ac;
  int in_stack_000002b0;
  uint in_stack_000002b4;
  int in_stack_000002b8;
  code *in_stack_000002cc;
  short *in_stack_000002d0;
  uint in_stack_000002d4;
  code *in_stack_000002d8;
  uint in_stack_000002f0;
  int in_stack_000002f4;
  code *in_stack_000002f8;
  code *in_stack_000002fc;
  
  if (((in_stack_00000288 != 0) || (in_stack_000002f4 == 0)) ||
     (iStack00000028 = 0, in_stack_00000294 != 0)) {
    iStack00000028 = 1;
  }
  if (in_stack_00000284 < in_stack_0000028c) {
    pcStack00000004 = (code *)0xc0;
  }
  else if (in_stack_00000284 < in_stack_00000298) {
    pcStack00000004 = (code *)((int)&DAT_0000009d + 3);
  }
  else {
    pcStack00000004 = (code *)0x80;
  }
  pcStack00000000 = in_stack_000002fc;
  pcStack00000008 = in_stack_000002a8;
  uVar6 = FUN_000279c8(in_stack_000002cc,in_stack_000002d0,in_stack_00000280,in_stack_000002d4);
  if (uVar6 == 0) goto LAB_001e439a;
  if ((*(char *)(unaff_r7 + 0x10) != -0x10) && (sVar2 = *(short *)(unaff_r7 + 0x12), sVar2 != 0xfa))
  {
    if (sVar2 == 0x29) {
      iVar27 = in_stack_0000027c[4];
      uVar3 = *(ushort *)(unaff_r7 + 0x1c);
      for (psVar22 = (short *)(iVar27 + 4); psVar22 < (short *)(iVar27 + (uint)uVar3 + 4);
          psVar22 = psVar22 + 0xc) {
        if (((*psVar22 == 4) && ((char)psVar22[2] == '\0')) &&
           (*(int3 *)(psVar22 + 3) != 0 || *(char *)((int)psVar22 + 9) != '\0')) {
          FUN_00023c10(in_stack_000002cc,psVar22 + 2,*(undefined4 *)(in_stack_00000024 + 0x3c));
          FUN_00023c10(in_stack_000002cc,psVar22 + 2,*(undefined4 *)(in_stack_00000024 + 0x38));
        }
      }
    }
    else if ((sVar2 == 5) &&
            (iVar27 = FUN_000400ea(in_stack_0000027c[3],in_stack_0000027c[4] + 4), iVar27 != 0)) {
      if (*DAT_001e385c != 0) {
        FUN_0002a1c6(3,s_mDNSCoreReceiveResponse__CNAME_l_001e38c8,in_stack_0000027c[3]);
      }
    }
    else {
      if (*in_stack_000002d0 != 0) {
        uVar19 = *(uint *)(in_stack_0000029c + 0x38);
        if (in_stack_00000294 == 2) {
LAB_001e372e:
          puVar8 = &DAT_00001c20;
        }
        else if (in_stack_00000294 == 3) {
          if (uVar19 != 0xffffffff) goto LAB_001e372e;
          puVar8 = (undefined *)0x0;
        }
        else {
          uVar7 = FUN_00006604(0x60000000,*(undefined4 *)s_LW__y__001e38ac._0_4_);
          if (uVar7 < uVar19) {
            uVar19 = uVar7;
          }
          puVar8 = (undefined *)((uVar19 >> 2) + uVar19 + 2);
          if (puVar8 < (undefined *)0xf) {
            puVar8 = (undefined *)0xf;
          }
        }
        *(undefined **)(in_stack_0000029c + 0x38) = puVar8;
      }
      if (in_stack_00000288 == 0) {
        if (in_stack_00000294 == 0) {
          if ((iStack00000028 == 0) || (in_stack_000002f4 == 0)) {
            sVar2 = *in_stack_000002d0;
            in_stack_0000003c = (uint)(in_stack_000002f4 == 0);
            piVar23 = *(int **)(in_stack_00000290 + 0x30);
            pcStack00000000 = in_stack_000002a8;
            pcStack00000004 = in_stack_000002d8;
            in_stack_00000030 = in_stack_000002f8;
            in_stack_00000038 = in_stack_000002ac;
            if (piVar23 != (int *)0x0) {
              in_stack_00000034 = in_stack_000002cc + 0xc0;
              do {
                if ((piVar23[0xe] == 0) &&
                   (iVar27 = FUN_0003fbb4(pcStack00000000 + 4,piVar23), iVar27 != 0)) {
                  if (*(short *)((int)piVar23 + 0x12e) == 0) {
                    if (((in_stack_00000038 != 0) && (piVar23[5] != 0)) &&
                       ((uint)(*(int *)(in_stack_00000034 + 0x1c) - piVar23[5]) <
                        (uint)(*(int *)s_y__LW__mDNSCoreReceiveResponse_E_001e3cf1._3_4_ << 1)))
                    goto LAB_001e393e;
                  }
                  else if (*(short *)((int)piVar23 + 0x12e) == sVar2) {
                    if (in_stack_0000003c == 0) {
                      if ((ushort *)piVar23[0x30] == (ushort *)0x0) {
                        uVar19 = (uint)*_DAT_001e3cf0;
                      }
                      else {
                        uVar19 = (uint)*(ushort *)piVar23[0x30];
                      }
                    }
                    else {
                      uVar19 = piVar23[0x3f];
                    }
                    if ((uVar19 & 0xffff) == ((uint)in_stack_00000030 & 0xffff)) {
LAB_001e393e:
                      if (piVar23 != (int *)0x0) {
                        iStack00000028 = 1;
                        if (in_stack_000002fc == entry) {
                          in_stack_0000026c = piVar23[0x32];
                          in_stack_0000027c[5] = in_stack_0000026c;
                        }
                        goto LAB_001e3960;
                      }
                    }
                    else if (*DAT_001e385c != 0) {
                      FUN_00028288(pcStack00000000 + 4,*(int *)(pcStack00000000 + 0x24) + 4,
                                   in_stack_000002cc + 0x37);
                      pcStack00000008 = in_stack_00000030;
                      uVar11 = FUN_00025930((short)piVar23[0x8c]);
                      pcStack00000000 = (code *)(piVar23 + 0x46);
                      pcStack00000008 = pcStack00000004;
                      pcStack00000004 = (code *)((uVar19 & 0xff) << 8 | (uVar19 & 0xffff) >> 8);
                      FUN_0002a1c6(3,DAT_001e3900,piVar23 + 0x4c,uVar11);
                    }
                    break;
                  }
                }
                piVar23 = (int *)*piVar23;
              } while (piVar23 != (int *)0x0);
            }
            if (in_stack_000002fc == entry) {
              iStack00000028 = 0;
            }
          }
        }
        else if (in_stack_000002b8 != 0) {
          in_stack_0000026c = *(int *)(in_stack_000002b8 + 200);
          in_stack_0000027c[5] = in_stack_0000026c;
        }
      }
LAB_001e3960:
      if ((*in_stack_000002d0 == 0) && (*(short *)(unaff_r7 + 0x12) != 0x2f)) {
        iVar27 = *(int *)(unaff_r6 + 4);
        if (iVar27 != 0) {
          uVar11 = FUN_00028288(iVar27 + 4,*(int *)(iVar27 + 0x24) + 4,in_stack_00000018);
          FUN_0002a1c6(0,s_y__LW__mDNSCoreReceiveResponse_E_001e3cf1 + 7,uVar11);
        }
        puVar12 = *(undefined4 **)(in_stack_00000024 + 0x38);
        *(undefined4 **)(unaff_r6 + 4) = puVar12;
        while (puVar12 != (undefined4 *)0x0) {
          *(undefined4 *)(unaff_r6 + 4) = *puVar12;
          if ((iStack00000028 != 0) ||
             ((in_stack_000002ac != 0 && (*(char *)(puVar12 + 1) == '\x02')))) {
            if (in_stack_000002a8 == entry) {
              FUN_0002a1c6(0,s__PacketRRMatchesSignature_ERROR__001e3d3b + 1);
            }
            else if (puVar12 == (undefined4 *)0x0) {
              FUN_0002a1c6(0,s_PacketRRMatchesSignature_ERROR__a_001e3d6c);
            }
            else if ((((((*(int *)(in_stack_000002a8 + 0x1c) == 0) || (puVar12[7] == 0)) ||
                       (*(int *)(in_stack_000002a8 + 0x1c) == puVar12[7])) &&
                      ((((*(byte *)(puVar12 + 1) & 0x32) != 0 &&
                        (*(int3 *)((int)puVar12 + 0x49) == 0 && *(char *)(puVar12 + 0x13) == '\0'))
                       || (*(short *)(in_stack_000002a8 + 6) == *(short *)((int)puVar12 + 6))))) &&
                     ((*(short *)(in_stack_000002a8 + 8) == *(short *)(puVar12 + 2) &&
                      (*(int *)(in_stack_000002a8 + 0x14) == puVar12[5])))) &&
                    (iVar27 = FUN_000400ea(*(undefined4 *)(in_stack_000002a8 + 0x20),puVar12[8]),
                    iVar27 != 0)) {
              if ((((*(short *)(unaff_r7 + 0x12) == *(short *)((int)puVar12 + 6)) &&
                   (*(short *)(unaff_r7 + 0x14) == *(short *)(puVar12 + 2))) &&
                  (*(short *)(unaff_r7 + 0x1c) == *(short *)(puVar12 + 4))) &&
                 ((in_stack_0000027c[1] == puVar12[6] &&
                  (iVar27 = FUN_00040260(in_stack_0000001c,puVar12[9] + 4,_DAT_001e3d38),
                  iVar27 != 0)))) {
                if ((*(uint *)(in_stack_0000029c + 0x38) < (uint)puVar12[3] >> 1) &&
                   (*(char *)(in_stack_00000290 + 0x15) == '\0')) {
                  if ((code *)puVar12[0x21] == entry) {
                    puVar12[0x21] = in_stack_000002fc;
                    *(undefined4 *)(in_stack_00000278 + 0x3c) =
                         *(undefined4 *)(in_stack_00000278 + 0x1c);
                  }
                  else if ((code *)puVar12[0x21] != in_stack_000002fc) goto LAB_001e3a98;
                }
                else if ((code *)puVar12[0x21] == in_stack_000002fc) {
                  puVar12[0x21] = 0;
                  *(undefined1 *)((int)puVar12 + 0x7f) = 0;
                }
              }
              else if ((*(int *)(in_stack_0000029c + 0x38) == 0) ||
                      (iVar27 = FUN_0003d51c(in_stack_000002cc,puVar12,in_stack_000002a8),
                      iVar27 == 0)) {
                if (((*(short *)(unaff_r7 + 0x12) == *(short *)((int)puVar12 + 6)) &&
                    ((int)((uint)*(byte *)(unaff_r7 + 0x10) << 0x1b) < 0)) &&
                   (*(int *)s_y__LW__mDNSCoreReceiveResponse_E_001e3cf1._3_4_ / 2 <
                    *(int *)(in_stack_00000278 + 0x1c) - puVar12[0x2e])) {
LAB_001e3a98:
                  puVar12[0x21] = *DAT_001e3d9c;
                  *(undefined4 *)(in_stack_00000278 + 0x3c) =
                       *(undefined4 *)(in_stack_00000278 + 0x1c);
                }
              }
              else {
                if (*_DAT_001e3da0 != 0) {
                  uVar11 = FUN_00028288(in_stack_0000001c,in_stack_0000027c[4] + 4,in_stack_00000018
                                       );
                  FUN_0002a1c6(3,s____mDNSCoreReceiveResponse__Pkt_R_001e3da1 + 3,
                               in_stack_0000027c[1],uVar11);
                  if (*_DAT_001e3da0 != 0) {
                    uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                    FUN_0002a1c6(3,s_mDNSCoreReceiveResponse__Our_Rec_001e3dd4,puVar12[6],uVar11);
                  }
                }
                puVar13 = (undefined4 *)puVar12[0xd];
                if ((undefined4 *)puVar12[0xd] != (undefined4 *)0x0) {
                  do {
                    puVar12 = puVar13;
                    puVar13 = (undefined4 *)puVar12[0xd];
                  } while ((undefined4 *)puVar12[0xd] != (undefined4 *)0x0);
                  if (*_DAT_001e3da0 != 0) {
                    uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                    FUN_0002a1c6(3,s_mDNSCoreReceiveResponse__Dep_Rec_001e3e04,puVar12[6],uVar11);
                  }
                }
                if (*(byte *)((int)puVar12 + 0x7a) < 4) {
                  if (*(byte *)((int)puVar12 + 0x7a) == 3) {
                    uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                    uVar9 = 0;
                    pcVar18 = _DAT_001e3ed8;
                    goto LAB_001e3bcc;
                  }
                  pcStack00000000 =
                       (code *)FUN_00028288(in_stack_0000001c,in_stack_0000027c[4] + 4,
                                            in_stack_00000018);
                  FUN_0002a1c6(0,s_mDNSCoreReceiveResponse__Receive_001e3e6c,in_stack_000002d8,
                               (in_stack_000002f0 & 0xff) << 8 | (in_stack_000002f0 & 0xffff) >> 8);
                  cVar1 = *(char *)(puVar12 + 1);
                  if (cVar1 == '\x10') {
                    uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                    FUN_0002a1c6(0,s___mDNSCoreReceiveResponse__Reset_001e3eda + 2,uVar11);
                    *(undefined1 *)(puVar12 + 1) = 2;
                    *(undefined1 *)((int)puVar12 + 0x7a) = 4;
                    *(undefined1 *)((int)puVar12 + 0x7b) = 8;
                    FUN_0002921c(in_stack_000002cc,puVar12);
                    *(undefined4 *)(unaff_r6 + 0x10) = *(undefined4 *)(in_stack_00000278 + 0x1c);
                    uVar19 = *(int *)(unaff_r6 + 0x14) + 1;
                    *(uint *)(unaff_r6 + 0x14) = uVar19;
                    if (0xe < uVar19) {
                      iVar27 = *(int *)(in_stack_00000278 + 0x1c) +
                               *(int *)s_y__LW__mDNSCoreReceiveResponse_E_001e3cf1._3_4_ * 5;
                      if (iVar27 == 0) {
                        iVar27 = 1;
                      }
                      *(int *)(unaff_r6 + 0x18) = iVar27;
                      pcStack00000000 = (code *)FUN_00025930(*(undefined2 *)((int)puVar12 + 6));
                      FUN_0002a1c6(0,_DAT_001e3f10,*(undefined4 *)(unaff_r6 + 0x14),puVar12[8]);
                    }
                  }
                  else if (cVar1 == '\x02') {
                    uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                    FUN_0002a1c6(0,s___mDNSCoreReceiveResponse__Probe_001e3f12 + 2,
                                 *(undefined1 *)((int)puVar12 + 0x7a),uVar11);
                    FUN_001e6734(in_stack_000002cc,puVar12,2);
                  }
                  else if (cVar1 == ' ') {
                    uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                    FUN_0002a1c6(0,s_mDNSCoreReceiveResponse__Unexpec_001e3f50,uVar11);
                    FUN_001e6734(in_stack_000002cc,puVar12,2);
                  }
                  else {
                    uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                    FUN_0002a1c6(0,s_mDNSCoreReceiveResponse__Unexpec_001e3ea0,
                                 *(undefined1 *)(puVar12 + 1),uVar11);
                  }
                }
                else if (*_DAT_001e3da0 != 0) {
                  uVar11 = FUN_00028288(puVar12 + 1,puVar12[9] + 4,in_stack_00000018);
                  uVar9 = 3;
                  pcVar18 = s_mDNSCoreReceiveResponse__Already_001e3e34;
LAB_001e3bcc:
                  FUN_0002a1c6(uVar9,pcVar18,uVar11);
                }
              }
            }
          }
          puVar12 = *(undefined4 **)(unaff_r6 + 4);
        }
      }
      iVar27 = in_stack_000002a0;
      if (iStack00000028 == 0) {
        for (; iVar27 != 1; iVar27 = *(int *)(iVar27 + 0x4c)) {
          sVar2 = *(short *)(iVar27 + 6);
          if ((((sVar2 == 2) || (sVar2 == 5)) || (sVar2 == 0xc)) || (sVar2 == 0x27)) {
            iVar10 = *(int *)(iVar27 + 0x24) + 4;
LAB_001e3f96:
            if (((iVar10 != 0) && (*(int *)(iVar27 + 0x18) == *in_stack_0000027c)) &&
               (iVar10 = FUN_000400ea(iVar10,in_stack_0000027c[3]), iVar10 != 0)) {
              iStack00000028 = 1;
              in_stack_0000027c[5] = in_stack_0000026c;
              goto LAB_001e3fe4;
            }
          }
          else {
            if (((sVar2 == 0xf) || (sVar2 == 0x12)) || ((sVar2 == 0x15 || (sVar2 == 0x24)))) {
              iVar10 = *(int *)(iVar27 + 0x24) + 6;
              goto LAB_001e3f96;
            }
            if (sVar2 == 0x21) {
              iVar10 = *(int *)(iVar27 + 0x24) + 10;
              goto LAB_001e3f96;
            }
          }
        }
        if (*_DAT_001e43c0 != 0) {
          uVar11 = FUN_00028288(in_stack_0000001c,in_stack_0000027c[4] + 4,in_stack_00000018);
          FUN_0002a1c6(3,s____mDNSCoreReceiveResponse_ignor_001e43c1 + 3,uVar11);
        }
      }
LAB_001e3fe4:
      if ((*(int *)(in_stack_00000044 + 8) != 0) && (iStack00000028 != 0)) {
        FUN_00025cca(in_stack_0000027c[3]);
        pcStack00000008 = (code *)FUN_001c6fe0();
        iVar27 = *(int *)(in_stack_0000001c + 0x10);
        uVar11 = *(undefined4 *)(in_stack_0000001c + 0x1c);
        in_stack_0000002c = in_stack_000002cc + (int)pcStack00000008 * 4;
        in_stack_00000040 = in_stack_0000002c + 0x140;
        for (piVar23 = *(int **)(in_stack_0000002c + 0x15c); piVar23 != (int *)0x0;
            piVar23 = (int *)*piVar23) {
          if ((piVar23[1] == iVar27) && (iVar10 = FUN_000400ea(piVar23[4],uVar11), iVar10 != 0)) {
            if (piVar23 == (int *)0x0) goto LAB_001e4282;
            piVar24 = (int *)piVar23[2];
            goto LAB_001e4036;
          }
        }
        piVar24 = (int *)0x0;
LAB_001e4036:
        if (piVar24 != (int *)0x0) {
          in_stack_00000030 = in_stack_0000002c + 0x900;
          do {
            if (in_stack_000002fc == entry) {
              if (in_stack_0000027c[5] == piVar24[10]) goto LAB_001e4052;
            }
            else if ((code *)piVar24[7] == in_stack_000002fc) {
LAB_001e4052:
              if ((((*(short *)(unaff_r7 + 0x12) == *(short *)((int)piVar24 + 6)) &&
                   (*(short *)(unaff_r7 + 0x14) == (short)piVar24[2])) &&
                  (*(short *)(unaff_r7 + 0x1c) == (short)piVar24[4])) &&
                 ((in_stack_0000027c[1] == piVar24[6] &&
                  (iVar27 = FUN_00040260(in_stack_0000001c,piVar24[9] + 4,DAT_001e43e8), iVar27 != 0
                  )))) {
                if ((int)((uint)*(byte *)(unaff_r7 + 0x10) << 0x1b) < 0) {
                  if (((piVar24[0x13] == 0) &&
                      (piVar25 = piVar24 + 0x13, in_stack_00000268 != piVar25)) &&
                     (in_stack_00000294 != 3)) {
                    *in_stack_00000268 = (int)piVar24;
                    *piVar25 = 1;
                    in_stack_00000268 = piVar25;
                  }
                  if (-1 < (int)((uint)*(byte *)(piVar24 + 1) << 0x1b)) {
                    for (piVar25 = *(int **)(in_stack_00000290 + 0x30); piVar25 != (int *)0x0;
                        piVar25 = (int *)*piVar25) {
                      iVar27 = FUN_0003fb0c(piVar24 + 1,piVar25);
                      if (iVar27 != 0) {
                        piVar25[10] = piVar25[10] + 1;
                      }
                    }
                    *(undefined1 *)(piVar24 + 1) = *(undefined1 *)(unaff_r7 + 0x10);
                  }
                }
                iVar27 = FUN_00040260(in_stack_0000001c,piVar24[9] + 4,_DAT_001e43ec);
                if (iVar27 != 0) {
                  iVar27 = *(int *)(in_stack_0000029c + 0x38);
                  if (iVar27 == 0) {
                    if (*DAT_001e4458 <
                        (piVar24[0xc] + *DAT_001e4458 * piVar24[3]) -
                        *(int *)(in_stack_00000278 + 0x1c)) {
                      piVar24[3] = 1;
                      piVar24[0xc] = *(int *)(in_stack_00000278 + 0x1c);
                      piVar24[0x11] = 4;
                      FUN_0004419c(in_stack_000002cc,piVar24);
                    }
                    goto LAB_001e427e;
                  }
                  piVar24[0xc] = *(int *)(in_stack_00000278 + 0x1c);
                  piVar24[3] = iVar27;
                  piVar24[0x11] = 0;
                  FUN_0004419c(in_stack_000002cc,piVar24);
                  if ((-1 < (int)((uint)*(byte *)(piVar24 + 1) << 0x1b)) ||
                     (piVar25 = *(int **)(in_stack_00000290 + 0x30), piVar25 == (int *)0x0))
                  goto LAB_001e427e;
                  goto LAB_001e4136;
                }
                piVar24[3] = 0;
                piVar24[0xc] = *(int *)(in_stack_00000278 + 0x1c);
                piVar24[0x11] = 4;
                FUN_0004419c(in_stack_000002cc,piVar24);
                piVar25 = _DAT_001e43c0;
                if (*_DAT_001e43c0 != 0) {
                  uVar11 = FUN_00028288(piVar24 + 1,piVar24[9] + 4,in_stack_00000018);
                  FUN_0002a1c6(3,s__Discarding_due_to_domainname_ca_001e43ef + 1,uVar11);
                  if (*piVar25 != 0) {
                    uVar11 = FUN_00028288(in_stack_0000001c,in_stack_0000027c[4] + 4,
                                          in_stack_00000018);
                    FUN_0002a1c6(3,s_Discarding_due_to_domainname_cas_001e4424,uVar11);
                    if (*piVar25 != 0) {
                      if (piVar24[0x10] == 0) {
                        iVar27 = *DAT_001e4458 * 0x3c;
                      }
                      else {
                        uVar19 = piVar24[3];
                        if ((uint)piVar24[0x11] < 4) {
                          FUN_001c6ef0(*DAT_001e4458 * uVar19);
                          iVar27 = extraout_r1;
                        }
                        else if (uVar19 < 0xb) {
                          if (uVar19 == 0) {
                            iVar27 = 0;
                          }
                          else {
                            FUN_001c6de8(*DAT_001e4458);
                            iVar27 = extraout_r1_00;
                          }
                        }
                        else {
                          iVar27 = *DAT_001e4458;
                        }
                      }
                      iVar10 = *(int *)(in_stack_00000278 + 0x1c);
                      pcStack00000004 = (code *)(*(int *)(in_stack_00000278 + 0x30) - iVar10);
                      pcStack00000000 = (code *)(*(int *)(in_stack_00000030 + 0x28) - iVar10);
                      FUN_0002a1c6(3,DAT_001e445c,(iVar27 + piVar24[0xe]) - iVar10,pcStack00000008);
                    }
                  }
                }
              }
            }
            piVar24 = (int *)*piVar24;
          } while (piVar24 != (int *)0x0);
        }
        goto LAB_001e4282;
      }
    }
  }
  goto LAB_001e4378;
  while (piVar25 = (int *)*piVar25, piVar25 != (int *)0x0) {
LAB_001e4136:
    if ((piVar25[0xe] == 0) &&
       (((piVar25[0x8d] == 0 && (0 < piVar25[4])) &&
        (iVar27 = FUN_0003fb0c(piVar24 + 1,piVar25), piVar4 = DAT_001e4458, iVar27 != 0)))) {
      piVar25[3] = *(int *)(in_stack_00000278 + 0x1c);
      piVar25[0x2b] = *(int *)(in_stack_00000278 + 0x1c);
      piVar25[7] = 0;
      piVar25[4] = *piVar4 * 0xe10;
      piVar25[0x2a] = 0;
      *(undefined1 *)(piVar25 + 0x36) = 0;
      break;
    }
  }
LAB_001e427e:
  if (piVar24 != (int *)0x0) goto LAB_001e4378;
LAB_001e4282:
  if (*(int *)(in_stack_0000029c + 0x38) != 0) {
    if (((int)((uint)*(byte *)(unaff_r7 + 0x10) << 0x1b) < 0) && (in_stack_00000294 != 3)) {
      in_stack_00000034 = (code *)0x1;
      pcVar20 = (code *)(*(int *)(in_stack_00000278 + 0x1c) + *DAT_001e4458);
joined_r0x001e4328:
      if (pcVar20 == entry) {
        pcVar20 = (code *)0x1;
      }
    }
    else {
      in_stack_00000034 = entry;
      iVar10 = *in_stack_0000027c;
      iVar27 = in_stack_0000027c[3];
      in_stack_0000003c = *(int *)(in_stack_00000278 + 0x1c) + *DAT_001e4458;
      pcStack00000000 = (code *)(*(int *)(in_stack_00000278 + 0x1c) + -0x10000000);
      pcStack00000004 = pcStack00000000;
      for (piVar24 = *(int **)(in_stack_00000040 + 0x1c); piVar24 != (int *)0x0;
          piVar24 = (int *)*piVar24) {
        if ((piVar24[1] == iVar10) && (iVar26 = FUN_000400ea(piVar24[4],iVar27), iVar26 != 0)) {
          if (piVar24 == (int *)0x0) goto LAB_001e431a;
          piVar24 = (int *)piVar24[2];
          goto LAB_001e42f6;
        }
      }
      piVar24 = (int *)0x0;
LAB_001e42f6:
      if (piVar24 != (int *)0x0) {
        do {
          pcVar20 = (code *)(piVar24[0xc] + *DAT_001e4458 * piVar24[3]);
          if ((-1 < (int)(in_stack_0000003c - (int)pcVar20)) &&
             ((int)pcStack00000000 - (int)pcVar20 < 0)) {
            pcStack00000000 = pcVar20;
          }
          piVar24 = (int *)*piVar24;
        } while (piVar24 != (int *)0x0);
      }
LAB_001e431a:
      pcVar20 = pcStack00000000;
      if (0 < (int)pcStack00000000 - (int)pcStack00000004) goto joined_r0x001e4328;
      pcVar20 = entry;
    }
    iVar27 = FUN_000249a0(in_stack_000002cc,pcStack00000008,piVar23,pcVar20);
    if (iVar27 != 0) {
      if (in_stack_00000034 == entry) {
        iVar27 = *(int *)(iVar27 + 0x34);
        if (iVar27 != 0) {
          if (0 < *(int *)(in_stack_0000002c + 0x928) - iVar27) {
            *(int *)(in_stack_0000002c + 0x928) = iVar27;
          }
          if (0 < *(int *)(in_stack_00000278 + 0x30) - iVar27) {
            *(int *)(in_stack_00000278 + 0x30) = iVar27;
          }
        }
      }
      else {
        *in_stack_00000268 = iVar27;
        *(undefined4 *)(iVar27 + 0x4c) = 1;
      }
    }
  }
LAB_001e4378:
  *(undefined1 *)(unaff_r7 + 0x10) = 0;
  if (((in_stack_00000284 + 1 < in_stack_000002b0) && (uVar6 != 0)) && (uVar6 < in_stack_000002d4))
  {
    FUN_001e35fe();
  }
LAB_001e439a:
  *(undefined1 *)(unaff_r7 + 0x10) = 0;
joined_r0x001e43a2:
  iVar27 = in_stack_000002a0;
  if (iVar27 != 1) {
    FUN_00025cca(*(undefined4 *)(iVar27 + 0x20));
    iVar10 = FUN_001c6fe0();
    iVar26 = *(int *)(iVar27 + 0x14);
    pcStack00000000 = *(code **)(iVar27 + 0x20);
    in_stack_00000020 = in_stack_000002cc + iVar10 * 4;
    in_stack_00000024 = in_stack_00000020 + 0x140;
    piVar23 = *(int **)(in_stack_00000020 + 0x15c);
    while ((piVar23 != (int *)0x0 &&
           ((piVar23[1] != iVar26 ||
            (iVar10 = FUN_000400ea(piVar23[4],pcStack00000000), iVar10 == 0))))) {
      piVar23 = (int *)*piVar23;
    }
    in_stack_000002a0 = *(int *)(iVar27 + 0x4c);
    *(undefined4 *)(iVar27 + 0x4c) = 0;
    if (piVar23 != (int *)0x0) {
      for (piVar23 = (int *)piVar23[2]; piVar23 != (int *)0x0; piVar23 = (int *)*piVar23) {
        if ((((*(int *)(iVar27 + 0x1c) == piVar23[7]) &&
             ((*(int *)(iVar27 + 0x1c) != 0 || (*(int *)(iVar27 + 0x28) == piVar23[10])))) &&
            (*(short *)(iVar27 + 6) == *(short *)((int)piVar23 + 6))) &&
           (*(short *)(iVar27 + 8) == *(short *)(piVar23 + 2))) {
          iVar26 = *(int *)(in_stack_00000278 + 0x1c);
          iVar10 = piVar23[0xc];
          iVar21 = *DAT_001e48c0;
          if ((iVar26 - iVar10 < iVar21) &&
             (uVar6 = piVar23[3], iVar21 < (int)((iVar10 + iVar21 * uVar6) - iVar26))) {
            uVar19 = *(uint *)(iVar27 + 0xc);
            if ((uVar6 != uVar19) && (1 < uVar19)) {
              if (((uVar6 != 0xf0) || ((uVar19 != 0x3c || (*(short *)((int)piVar23 + 6) != 0x10))))
                 && ((*in_stack_000002d0 == 0 && (*_DAT_001e48c4 != 0)))) {
                pcStack00000000 = (code *)FUN_00028288(piVar23 + 1,piVar23[9] + 4,in_stack_00000018)
                ;
                FUN_0002a1c6(3,s____Correcting_TTL_from__4d_to__4_001e48c5 + 3,piVar23[3],
                             *(undefined4 *)(iVar27 + 0xc));
              }
              piVar23[3] = *(undefined4 *)(iVar27 + 0xc);
            }
            iVar10 = *(int *)(in_stack_00000278 + 0x1c);
LAB_001e455a:
            piVar23[0xc] = iVar10;
          }
          else if ((iVar10 == iVar26) && ((piVar23[3] == 1 && (piVar23[0x11] == 4)))) {
            if (*_DAT_001e48c4 != 0) {
              uVar11 = FUN_00028288(piVar23 + 1,piVar23[9] + 4,in_stack_00000018);
              FUN_0002a1c6(3,s_Cache_flush_for_DE_record__s_001e48f0,uVar11);
            }
            piVar23[3] = 0;
          }
          else if (iVar21 < (iVar10 + iVar21 * piVar23[3]) - iVar26) {
            piVar23[3] = 1;
            piVar23[0x11] = 4;
            iVar10 = *(int *)(in_stack_00000278 + 0x1c) + -1;
            goto LAB_001e455a;
          }
          FUN_0004419c(in_stack_000002cc,piVar23);
        }
      }
    }
    if (*(int *)(iVar27 + 0x34) != 0) {
      iVar10 = *(int *)(iVar27 + 0x14);
      uVar11 = *(undefined4 *)(iVar27 + 0x20);
      in_stack_0000001c = *(int *)(in_stack_00000278 + 0x1c) + *DAT_001e48c0;
      pcStack00000000 = (code *)(*(int *)(in_stack_00000278 + 0x1c) + -0x10000000);
      pcStack00000004 = pcStack00000000;
      for (piVar23 = *(int **)(in_stack_00000024 + 0x1c); piVar23 != (int *)0x0;
          piVar23 = (int *)*piVar23) {
        if ((piVar23[1] == iVar10) && (iVar26 = FUN_000400ea(piVar23[4],uVar11), iVar26 != 0)) {
          if (piVar23 == (int *)0x0) goto LAB_001e45fe;
          piVar23 = (int *)piVar23[2];
          goto LAB_001e45da;
        }
      }
      piVar23 = (int *)0x0;
LAB_001e45da:
      if (piVar23 != (int *)0x0) {
        do {
          pcVar20 = (code *)(piVar23[0xc] + *DAT_001e48c0 * piVar23[3]);
          if ((-1 < in_stack_0000001c - (int)pcVar20) && ((int)pcStack00000000 - (int)pcVar20 < 0))
          {
            pcStack00000000 = pcVar20;
          }
          piVar23 = (int *)*piVar23;
        } while (piVar23 != (int *)0x0);
      }
LAB_001e45fe:
      if ((int)pcStack00000000 - (int)pcStack00000004 < 1) {
        pcVar20 = entry;
      }
      else {
        pcVar20 = pcStack00000000;
        if (pcStack00000000 == entry) {
          pcVar20 = (code *)0x1;
        }
      }
      *(code **)(iVar27 + 0x34) = pcVar20;
      if (pcVar20 == entry) {
        pcStack00000000 = in_stack_000002cc;
        if (*(int *)(in_stack_00000290 + 0x38) != 0) {
          uVar11 = FUN_00025930(*(undefined2 *)(*(int *)(in_stack_00000290 + 0x38) + 0x230));
          FUN_0002a1c6(0,DAT_001e4910,*(int *)(in_stack_00000290 + 0x38) + 0x130,uVar11);
        }
        puVar12 = *(undefined4 **)(in_stack_00000290 + 0x30);
        do {
          *(undefined4 **)(in_stack_00000290 + 0x38) = puVar12;
          do {
            puVar13 = puVar12;
            if ((puVar13 == (undefined4 *)0x0) ||
               (puVar13 == *(undefined4 **)(in_stack_00000290 + 0x34))) {
              *(undefined4 *)(in_stack_00000290 + 0x38) = 0;
              goto joined_r0x001e43a2;
            }
            iVar10 = FUN_0003fb0c(iVar27 + 4,puVar13);
            if (iVar10 != 0) {
              FUN_0001cf60(pcStack00000000,iVar27,1);
            }
            puVar12 = *(undefined4 **)(in_stack_00000290 + 0x38);
          } while (*(undefined4 **)(in_stack_00000290 + 0x38) != puVar13);
          puVar12 = (undefined4 *)*puVar13;
        } while( true );
      }
      if (0 < *(int *)(in_stack_00000020 + 0x928) - (int)pcVar20) {
        *(code **)(in_stack_00000020 + 0x928) = pcVar20;
      }
      if (0 < *(int *)(in_stack_00000278 + 0x30) - (int)pcVar20) {
        *(code **)(in_stack_00000278 + 0x30) = pcVar20;
      }
    }
    goto joined_r0x001e43a2;
  }
  iVar27 = 0;
LAB_001e4ae2:
  if (iVar27 < (int)(uint)(ushort)in_stack_000002d0[2]) goto LAB_001e4af6;
  do {
    FUN_001e351a();
LAB_001e4af6:
  } while (in_stack_000002b4 == 0);
  if (in_stack_000002d4 <= in_stack_000002b4) {
    return;
  }
  pcStack00000000 = (code *)&stack0x00000018;
  in_stack_000002b4 =
       FUN_001db92c(in_stack_000002d0,in_stack_000002b4,in_stack_000002d4,in_stack_000002fc);
  if (in_stack_000002b4 != 0) {
    sVar2 = *in_stack_000002d0;
    piVar23 = *(int **)(in_stack_00000290 + 0x30);
    if (piVar23 != (int *)0x0) {
      pcStack00000008 = (code *)&stack0x00000148;
      do {
        if (in_stack_000002f4 == 0) {
          uVar6 = piVar23[0x3f];
LAB_001e470c:
          if ((((((uVar6 & 0xffff) == ((uint)in_stack_000002f8 & 0xffff)) &&
                (*(short *)((int)piVar23 + 0x12e) == sVar2)) &&
               (*(ushort *)(piVar23 + 0x8c) == in_stack_00000248)) &&
              ((*(ushort *)((int)piVar23 + 0x232) == in_stack_0000024a &&
               (piVar23[1] == in_stack_0000001c)))) &&
             (iVar10 = FUN_000400ea(piVar23 + 0x4c,pcStack00000008), iVar10 != 0)) {
            if (piVar23 != (int *)0x0) {
              piStack00000010 = (int *)0x0;
              FUN_00025cca(&stack0x00000148);
              iVar26 = FUN_001c6fe0();
              iVar10 = in_stack_0000001c;
              piVar24 = *(int **)(in_stack_000002cc + (iVar26 + 0x57) * 4);
              goto joined_r0x001e4778;
            }
            break;
          }
        }
        else if ((ushort *)piVar23[0x30] != (ushort *)0x0) {
          uVar6 = (uint)*(ushort *)piVar23[0x30];
          goto LAB_001e470c;
        }
        piVar23 = (int *)*piVar23;
      } while (piVar23 != (int *)0x0);
    }
  }
  goto LAB_001e4adc;
joined_r0x001e4778:
  iVar21 = (int)piStack00000010;
  if (piVar24 == (int *)0x0) goto LAB_001e47e6;
  if ((piVar24[1] == iVar10) && (iVar14 = FUN_000400ea(piVar24[4],&stack0x00000148), iVar14 != 0)) {
    piVar25 = (int *)0x0;
    if (piVar24 == (int *)0x0) goto LAB_001e47f4;
    piVar25 = (int *)piVar24[2];
    piVar4 = DAT_001e48c0;
    goto joined_r0x001e4796;
  }
  piVar24 = (int *)*piVar24;
  goto joined_r0x001e4778;
LAB_001e47e6:
  piVar25 = (int *)0x0;
  piVar4 = DAT_001e48c0;
joined_r0x001e4796:
  do {
    piVar5 = DAT_001e48c0;
    DAT_001e48c0 = piVar4;
    piStack00000010 = (int *)iVar21;
    if (piVar25 == (int *)0x0) break;
    iVar10 = FUN_000401cc(piVar25 + 1,piVar23);
    if (iVar10 != 0) {
      if (0 < (piVar25[0xc] + *piVar5 * piVar25[3]) - *(int *)(in_stack_00000278 + 0x1c)) break;
      piStack00000010 = piVar25;
      if (*(char *)(piVar25 + 1) != -0x10) {
        piStack00000010 = (int *)iVar21;
      }
    }
    piVar25 = (int *)*piVar25;
    iVar21 = (int)piStack00000010;
    piVar4 = DAT_001e48c0;
    DAT_001e48c0 = piVar5;
  } while( true );
LAB_001e47f4:
  if (((in_stack_000002fc == entry) && (in_stack_00000248 != 6)) &&
     (iVar10 = FUN_00029974(&stack0x00000148), iVar10 != 0)) {
    if ((*(char *)((int)piVar23 + 0x24f) == '\0') || (piVar25 != (int *)0x0)) {
      if (*_DAT_001e48c4 != 0) {
        uVar11 = FUN_00025930(in_stack_00000248);
        FUN_0002a1c6(3,DAT_001e4914,&stack0x00000148,uVar11);
      }
    }
    else {
      if (*_DAT_001e48c4 != 0) {
        uVar11 = FUN_00025930(in_stack_00000248);
        FUN_0002a1c6(3,DAT_001e4918,&stack0x00000148,uVar11);
      }
      *(int **)(in_stack_00000290 + 0x38) = piVar23;
      FUN_00027288(in_stack_000002cc);
      *(undefined4 *)(in_stack_00000290 + 0x38) = 0;
    }
    goto LAB_001e4adc;
  }
  iVar10 = in_stack_0000001c;
  if (piVar25 != (int *)0x0) goto LAB_001e4adc;
  iVar21 = 0;
  uVar6 = 0x3c;
  if ((in_stack_00000248 == 6) &&
     (iVar14 = FUN_000400ea(&stack0x00000148,&DAT_001e491c), iVar14 != 0)) {
    uVar6 = DAT_001e4924;
  }
  if (in_stack_000002d0[4] != 0) {
    iVar14 = FUN_0002a0d6(in_stack_000002d0,in_stack_000002d4);
    in_stack_000002b4 = 0;
    if (iVar14 != 0) {
      pcStack00000004 = (code *)((int)&DAT_0000009d + 3);
      pcStack00000000 = in_stack_000002fc;
      pcStack00000008 = in_stack_000002a8;
      in_stack_000002b4 = FUN_000279c8(in_stack_000002cc,in_stack_000002d0,iVar14,in_stack_000002d4)
      ;
      if (((in_stack_000002b4 != 0) && (*(char *)(unaff_r7 + 0x10) != -0x10)) &&
         (*(short *)(unaff_r7 + 0x12) == 6)) {
        uVar19 = *(uint *)(in_stack_0000027c[4] + 0x214);
        if ((*(uint *)(in_stack_0000029c + 0x38) < uVar19) &&
           (*(char *)in_stack_0000027c[3] != '\0')) {
          uVar19 = *(uint *)(in_stack_0000029c + 0x38);
        }
        if (uVar6 < uVar19) {
          uVar6 = uVar19;
        }
        if (in_stack_00000248 == 6) {
          iVar14 = FUN_00024984(&stack0x00000148);
          iVar15 = FUN_00024984(in_stack_0000027c[3]);
          if (iVar15 < iVar14 + -1) {
            uVar11 = thunk_FUN_0004488c(&stack0x00000148);
            iVar16 = FUN_000400ea(uVar11,in_stack_0000027c[3]);
            if (iVar16 != 0) {
              iVar21 = (iVar14 - iVar15) + -1;
            }
          }
        }
      }
      *(undefined1 *)(unaff_r7 + 0x10) = 0;
    }
  }
  if (piStack00000010 != (int *)0x0) {
    uVar19 = *(int *)((int)piStack00000010 + 0xc) * 2;
    if (uVar6 <= uVar19 && uVar19 - uVar6 != 0) {
      uVar6 = uVar19;
    }
    if (0xe10 < uVar6) {
      uVar6 = 0xe10;
    }
  }
  if (in_stack_00000294 == 2) {
LAB_001e4a44:
    pcVar20 = (code *)&DAT_00001c20;
  }
  else if (in_stack_00000294 == 3) {
    if (uVar6 != 0xffffffff) goto LAB_001e4a44;
    pcVar20 = entry;
  }
  else {
    uVar19 = FUN_00006604(0x60000000,*DAT_001e4b0c);
    if (uVar19 < uVar6) {
      uVar6 = uVar19;
    }
    pcVar20 = (code *)((uVar6 >> 2) + uVar6 + 2);
    if (pcVar20 < (code *)0xf) {
      pcVar20 = (code *)0xf;
    }
  }
  pbVar17 = &stack0x00000148;
  if (piStack00000010 == (int *)0x0) {
    while( true ) {
      pcStack00000004 = (code *)(uint)in_stack_0000024a;
      pcStack00000000 = (code *)(uint)in_stack_00000248;
      pcStack00000008 = pcVar20;
      FUN_0002a4ec(in_stack_000002cc,in_stack_000002a8,pbVar17,iVar10);
      FUN_000249a0(in_stack_000002cc,iVar26,piVar24,0);
      *(undefined1 *)(unaff_r7 + 0x10) = 0;
      if (iVar21 == 0) break;
      iVar21 = iVar21 + -1;
      pbVar17 = pbVar17 + *pbVar17 + 1;
      iVar10 = FUN_00025cca();
      FUN_00025cca(pbVar17);
      iVar26 = FUN_001c6fe0();
      piVar24 = *(int **)(in_stack_000002cc + (iVar26 + 0x57) * 4);
      pcStack00000004 = (code *)pbVar17;
      while ((piVar24 != (int *)0x0 &&
             ((piVar24[1] != iVar10 ||
              (iVar14 = FUN_000400ea(piVar24[4],pcStack00000004), iVar14 == 0))))) {
        piVar24 = (int *)*piVar24;
      }
    }
  }
  else {
    uVar11 = *(undefined4 *)(in_stack_00000278 + 0x1c);
    *(undefined4 *)((int)piStack00000010 + 0x44) = 0;
    *(undefined4 *)((int)piStack00000010 + 0x30) = uVar11;
    *(code **)((int)piStack00000010 + 0xc) = pcVar20;
    FUN_0004419c(in_stack_000002cc);
    piVar23[3] = *(int *)(in_stack_00000278 + 0x1c);
    piVar23[0x2b] = *(int *)(in_stack_00000278 + 0x1c);
    piVar24 = DAT_001e4b0c;
    piVar23[7] = 0;
    piVar23[4] = *piVar24 * 0xe10;
    piVar23[0x2a] = 0;
    *(undefined1 *)(piVar23 + 0x36) = 0;
  }
LAB_001e4adc:
  iVar27 = iVar27 + 1;
  goto LAB_001e4ae2;
}

