// rea decompile_all
// name: FUN_00149080
// address: 0x149080
// body: available
// range: 0x149080-0x149b93 inclusive
// range: 0x149bc0-0x149bdb inclusive
// range: 0x149de0-0x149def inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_00149080(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint *puStack_b4;
  undefined1 *puStack_b0;
  uint *puStack_ac;
  uint *puStack_a8;
  undefined1 auStack_a4 [4];
  uint auStack_a0 [2];
  uint uStack_98;
  undefined1 auStack_90 [8];
  uint uStack_88;
  uint uStack_84;
  uint auStack_80 [2];
  uint uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined1 auStack_68 [8];
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  uint auStack_30 [3];
  
  iVar4 = FUN_0010eb7c(param_2[0x12],*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x188));
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_000eb058(param_2);
  iVar4 = *param_2;
  if (iVar5 == 0 || iVar4 == 0) {
    return;
  }
  uVar3 = *(ushort *)(iVar4 + 0x10) & 0x3f;
  if (((*(ushort *)(iVar4 + 0x10) & 0xff00) == 0x3700) &&
     (((uVar3 == 1 || uVar3 == 2 || (uVar3 == 3 || uVar3 == 4)) || (uVar3 == 5 || uVar3 == 6)))) {
    if ((*(byte *)(param_2 + 0x13) & 0x10) != 0) {
      return;
    }
    uVar6 = 0;
    if (*(short *)((int)param_2 + 0x12) != 0) {
      do {
        uVar7 = FUN_0015d754(param_2 + 3,uVar6);
        FUN_00121f18(*(int *)(param_1 + 0x28) + 0x58c,uVar7,param_2);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)((int)param_2 + 0x12));
    }
    uVar6 = 0;
    if (*(short *)((int)param_2 + 0x1a) == 0) {
      return;
    }
    do {
      uVar7 = FUN_0015d754(param_2 + 5,uVar6);
      FUN_00122414(*(int *)(param_1 + 0x28) + 0x58c,uVar7,param_2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)((int)param_2 + 0x1a));
    return;
  }
  do {
    uVar6 = *(uint *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      iVar5 = *param_2;
    }
    else {
      iVar5 = *(int *)(iVar4 + 0xc);
    }
    pcVar10 = (char *)(uVar6 & 0xff00);
    if (pcVar10 == &DAT_00004200) {
      uVar11 = uVar6 & 0xff;
      if (uVar11 == 0x30) {
        FUN_001190d8(*(int *)(param_1 + 0x28) + 0x658,iVar4);
      }
      else if (uVar11 < 0x31) {
        if (uVar11 == 0x20) {
          FUN_0010e770(auStack_80,iVar4 + 0x28);
          FUN_00146da8(*(undefined4 *)(param_1 + 0x28),*(undefined2 *)(iVar4 + 0x24),auStack_80,
                       iVar4 + 0x30);
          puVar9 = auStack_80;
          goto LAB_0014931c;
        }
        if (uVar11 < 0x21) {
          if (uVar11 == 2) {
            FUN_001222d4(*(int *)(param_1 + 0x28) + 0x58c,iVar4);
          }
          else if (uVar11 == 6) {
            FUN_00121bcc(*(int *)(param_1 + 0x28) + 0x58c,iVar4);
            FUN_0010f5fc(&uStack_b8,iVar4 + 0x24);
            FUN_0010f5fc(&uStack_c4,iVar4 + 0x18);
            FUN_00148704(*(undefined4 *)(param_1 + 0x28),&uStack_c4,&uStack_b8);
          }
          else if (uVar11 == 7) {
            FUN_001219a8(*(int *)(param_1 + 0x28) + 0x58c,iVar4);
          }
        }
        else if (uVar11 == 0x21) {
          FUN_00118018(*(int *)(param_1 + 0x28) + 0x220,iVar4);
        }
        else if (uVar11 == 0x22) {
          FUN_001476a4(*(undefined4 *)(param_1 + 0x28),1);
        }
      }
      else if (uVar11 == 0xf2) {
LAB_00149324:
        if ((uVar6 & 0x20000) != 0) {
          FUN_000e95a4(*(int *)(param_1 + 0x28) + 0x484,*(undefined2 *)(iVar4 + 0x16),iVar4);
        }
      }
      else if (uVar11 < 0xf3) {
        if (uVar11 == 0xe1) {
          FUN_00121004(*(int *)(param_1 + 0x28) + 0x58c,iVar4);
        }
        else if (uVar11 == 0xf0 || uVar11 == 0xf1) goto LAB_00149324;
      }
      else if (uVar11 == 0xf4 || uVar11 == 0xf5) goto LAB_00149324;
    }
    else if (&DAT_00004200 < pcVar10) {
      if ((pcVar10 != s_SIGABRT__Abnormal_termination_00005ae4 + 0x1c) &&
         (pcVar10 == (char *)0x6300)) {
        FUN_0010e770(auStack_a0,iVar4 + 0x24);
        uVar6 = FUN_0015e89c(auStack_a0);
        FUN_0010e770(&puStack_a8,iVar4 + 0x1c);
        uStack_cc = FUN_0015e89c(&puStack_a8);
        uStack_c4 = (uint)*(ushort *)(iVar4 + 0x18);
        uVar2 = *(undefined2 *)(iVar4 + 0x16);
        FUN_0010f6a4(&uStack_c0,param_2 + 7);
        uStack_cc = uVar6;
        FUN_00146c64(*(undefined4 *)(param_1 + 0x28),&uStack_c0,uVar2,uStack_c4);
        FUN_0010e7f4(&puStack_a8);
        puVar9 = auStack_a0;
LAB_0014931c:
        FUN_0010e7f4(puVar9);
      }
    }
    else if (pcVar10 == (char *)0x1000 || pcVar10 == "") {
      if ((uVar6 & 0x20000) == 0) {
        if ((uVar6 & 0x40000) == 0) {
          uVar6 = uVar6 & 0xff;
          if (uVar6 == 0x83) goto LAB_00149ad0;
          if (uVar6 < 0x84) {
            if (uVar6 != 0x61) {
              if (uVar6 < 0x62) {
                if ((uVar6 != 0x40 && uVar6 != 0x51) && uVar6 != 0x52) {
                  if (uVar6 != 0x60) goto switchD_00149b8c_default;
LAB_00149ad0:
                  FUN_0010f5fc(auStack_48,param_2 + 7);
                  FUN_001216c8(*(int *)(param_1 + 0x28) + 0x58c,auStack_48,iVar4);
                  goto switchD_00149b8c_default;
                }
              }
              else if (uVar6 != 0x80) {
                if (uVar6 == 0x81) goto LAB_00149ad0;
                if (uVar6 != 0x82) goto switchD_00149b8c_default;
              }
            }
LAB_00149af8:
            uVar6 = 0;
            if (*(short *)((int)param_2 + 0x12) != 0) {
              do {
                FUN_0010f5fc(&uStack_c0,param_2 + 7);
                uVar7 = FUN_0015d754(param_2 + 3,uVar6);
                FUN_001213ac(*(int *)(param_1 + 0x28) + 0x58c,uVar7,&uStack_c0,iVar4);
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(ushort *)((int)param_2 + 0x12));
            }
          }
          else if (uVar6 == 0xf1) {
            FUN_000ea2a4(auStack_a0,iVar4 + 0x60);
            FUN_0010e770(auStack_90,iVar4 + 0x58);
            FUN_0010e770(&uStack_88,iVar4 + 0x50);
            uStack_c8 = *(uint *)(iVar4 + 0x30);
            uVar6 = *(uint *)(iVar4 + 0x4c);
            uStack_58 = *(uint *)(iVar4 + 0x48);
            uStack_4c = *(uint *)(iVar4 + 0x44);
            uStack_5c = *(uint *)(iVar4 + 0x40);
            uStack_54 = *(uint *)(iVar4 + 0x3c);
            uStack_50 = *(undefined4 *)(iVar4 + 0x38);
            uStack_60 = *(uint *)(iVar4 + 0x34);
            FUN_0010f5fc(&uStack_6c,iVar4 + 0x24);
            FUN_0010f5fc(&uStack_78,iVar4 + 0x18);
            uStack_bc = uStack_c8;
            uStack_c0 = uStack_58;
            uStack_c4 = uStack_4c;
            uStack_c8 = uStack_5c;
            uStack_cc = uStack_54;
            uStack_b8 = uVar6;
            puStack_b4 = &uStack_88;
            puStack_b0 = auStack_90;
            puStack_ac = auStack_a0;
            FUN_00148604(*(undefined4 *)(param_1 + 0x28),&uStack_78,&uStack_6c,uStack_60);
            FUN_0010e7f4(&uStack_88);
            FUN_0010e7f4(auStack_90);
            FUN_000ea314(auStack_a0);
            FUN_000ea2a4(auStack_a0,iVar4 + 0x60);
            FUN_0010e770(&uStack_88,iVar4 + 0x58);
            FUN_0010e770(auStack_90,iVar4 + 0x50);
            uStack_c8 = *(uint *)(iVar4 + 0x30);
            uVar7 = *(undefined4 *)(iVar4 + 0x4c);
            uStack_50 = *(uint *)(iVar4 + 0x48);
            uStack_54 = *(uint *)(iVar4 + 0x44);
            uStack_60 = *(uint *)(iVar4 + 0x40);
            uStack_4c = *(uint *)(iVar4 + 0x3c);
            uStack_58 = *(uint *)(iVar4 + 0x38);
            uStack_5c = *(undefined4 *)(iVar4 + 0x34);
            FUN_0010f5fc(&uStack_78,iVar4 + 0x24);
            FUN_0010f5fc(&uStack_6c,iVar4 + 0x18);
            uStack_b8 = uStack_c8;
            uStack_bc = uStack_50;
            uStack_c0 = uStack_54;
            uStack_c4 = uStack_60;
            uStack_c8 = uStack_4c;
            uStack_cc = uStack_58;
            puStack_b4 = (uint *)uVar7;
            puStack_b0 = auStack_90;
            puStack_ac = &uStack_88;
            puStack_a8 = auStack_a0;
            FUN_00147adc(*(undefined4 *)(param_1 + 0x28),1,&uStack_6c,&uStack_78);
            FUN_0010e7f4(auStack_90);
            FUN_0010e7f4(&uStack_88);
            FUN_000ea314(auStack_a0);
            iVar8 = FUN_0010eb7c(*(undefined4 *)(iVar4 + 0x4c),
                                 *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x188));
            if (iVar8 == 0) {
              FUN_0010f5fc(&uStack_c8,iVar4 + 0x18);
              FUN_001220e0(*(int *)(param_1 + 0x28) + 0x58c,&uStack_c8,0x30);
              FUN_0010f5fc(&uStack_c8,iVar4 + 0x18);
              FUN_001486cc(*(undefined4 *)(param_1 + 0x28),&uStack_c8);
            }
            else {
              FUN_0010f5fc(&uStack_c8,iVar4 + 0x18);
              FUN_001220e0(*(int *)(param_1 + 0x28) + 0x58c,&uStack_c8,0);
              FUN_0010f5fc(&uStack_c8,iVar4 + 0x18);
              FUN_0014863c(*(undefined4 *)(param_1 + 0x28),&uStack_c8);
            }
          }
          else if (uVar6 < 0xf2) {
            if ((uVar6 == 0x90 || uVar6 == 0x91) || uVar6 == 0x92) goto LAB_00149af8;
            if (uVar6 == 0xf0) {
              FUN_0010f5fc(auStack_a4,iVar4 + 0x18);
              FUN_00121e50(*(int *)(param_1 + 0x28) + 0x58c,auStack_a4,1);
              FUN_0010f5fc(auStack_a4,iVar4 + 0x18);
              FUN_0014863c(*(undefined4 *)(param_1 + 0x28),auStack_a4);
              FUN_000ea2a4(&uStack_78,iVar4 + 0x60);
              FUN_0010e770(&uStack_60,iVar4 + 0x58);
              FUN_0010e770(auStack_68,iVar4 + 0x50);
              uStack_bc = *(uint *)(iVar4 + 0x30);
              uVar7 = *(undefined4 *)(iVar4 + 0x4c);
              uStack_c0 = *(uint *)(iVar4 + 0x48);
              uStack_84 = *(uint *)(iVar4 + 0x44);
              uStack_c4 = *(uint *)(iVar4 + 0x40);
              uStack_6c = *(uint *)(iVar4 + 0x3c);
              uStack_98 = *(uint *)(iVar4 + 0x38);
              uStack_58 = *(uint *)(iVar4 + 0x34);
              FUN_0010f5fc(auStack_90,iVar4 + 0x24);
              FUN_0010f5fc(auStack_a4,iVar4 + 0x18);
              puStack_a8 = &uStack_78;
              puStack_ac = &uStack_60;
              uStack_b8 = uStack_bc;
              uStack_bc = uStack_c0;
              puStack_b0 = auStack_68;
              uStack_c0 = uStack_84;
              uStack_c8 = uStack_6c;
              uStack_cc = uStack_98;
              puStack_b4 = (uint *)uVar7;
              FUN_00147adc(*(undefined4 *)(param_1 + 0x28),0,auStack_a4,auStack_90);
              FUN_0010e7f4(auStack_68);
              FUN_0010e7f4(&uStack_60);
              puVar9 = &uStack_78;
LAB_00149a50:
              FUN_000ea314(puVar9);
            }
          }
          else if (uVar6 == 0xf2) {
            uVar1 = *(undefined1 *)(iVar4 + 0x24);
            FUN_0010f5fc(&uStack_c8,iVar4 + 0x18);
            FUN_001477ec(*(undefined4 *)(param_1 + 0x28),&uStack_c8,uVar1);
          }
          else if (uVar6 == 0xf3) {
            FUN_0010f5fc(&uStack_bc,iVar4 + 0x24);
            FUN_0010f5fc(&uStack_c8,iVar4 + 0x18);
            FUN_00148704(*(undefined4 *)(param_1 + 0x28),&uStack_c8,&uStack_bc);
            FUN_0010f5fc(&uStack_c8,iVar4 + 0x24);
            FUN_0010f5fc(&uStack_bc,iVar4 + 0x18);
            FUN_00147ef4(*(undefined4 *)(param_1 + 0x28),&uStack_bc,&uStack_c8);
          }
          else if (uVar6 == 0xf4) {
            FUN_0010f5fc(auStack_a4,iVar4 + 0x18);
            FUN_00121e50(*(int *)(param_1 + 0x28) + 0x58c,auStack_a4,1);
            FUN_0010f5fc(auStack_a4,iVar4 + 0x18);
            FUN_0014863c(*(undefined4 *)(param_1 + 0x28),auStack_a4);
            FUN_000ea2a4(&uStack_58,iVar4 + 0x60);
            FUN_0010e770(auStack_30,iVar4 + 0x58);
            FUN_0010e770(auStack_38,iVar4 + 0x50);
            uStack_c0 = *(uint *)(iVar4 + 0x30);
            uVar7 = *(undefined4 *)(iVar4 + 0x4c);
            uStack_bc = *(uint *)(iVar4 + 0x48);
            uStack_c4 = *(uint *)(iVar4 + 0x44);
            uStack_74 = *(uint *)(iVar4 + 0x40);
            uStack_98 = *(uint *)(iVar4 + 0x3c);
            uStack_84 = *(uint *)(iVar4 + 0x38);
            uStack_78 = *(uint *)(iVar4 + 0x34);
            FUN_0010f5fc(auStack_90,iVar4 + 0x24);
            FUN_0010f5fc(auStack_a4,iVar4 + 0x18);
            puStack_a8 = &uStack_58;
            puStack_ac = auStack_30;
            puStack_b0 = auStack_38;
            uStack_b8 = uStack_c0;
            uStack_c0 = uStack_c4;
            uStack_c4 = uStack_74;
            uStack_c8 = uStack_98;
            uStack_cc = uStack_84;
            puStack_b4 = (uint *)uVar7;
            FUN_00147adc(*(undefined4 *)(param_1 + 0x28),2,auStack_a4,auStack_90);
            FUN_0010e7f4(auStack_38);
            FUN_0010e7f4(auStack_30);
            puVar9 = &uStack_58;
            goto LAB_00149a50;
          }
        }
        else if ((*(byte *)(param_2 + 0x13) & 0x10) == 0) {
          uVar6 = 0;
          if (*(short *)((int)param_2 + 0x12) != 0) {
            do {
              FUN_0010f5fc(&uStack_c0,param_2 + 7);
              uVar7 = FUN_0015d754(param_2 + 3,uVar6);
              FUN_00121d00(*(int *)(param_1 + 0x28) + 0x58c,uVar7,&uStack_c0,iVar4);
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(ushort *)((int)param_2 + 0x12));
          }
        }
        else {
          FUN_0010f5fc(&uStack_c4,param_2 + 7);
          FUN_00121d84(*(int *)(param_1 + 0x28) + 0x58c,&uStack_c4,iVar4);
        }
      }
      else {
        bVar12 = *(short *)(iVar4 + 0x16) == 0;
        if (bVar12) {
          uVar6 = (uint)*(ushort *)((int)param_2 + 0x12);
        }
        if (bVar12 && uVar6 == 1) {
          FUN_0010f5fc(&uStack_cc,param_2 + 7,iVar4);
          FUN_00121e50(*(int *)(param_1 + 0x28) + 0x58c,&uStack_cc,0);
        }
        else {
          FUN_000e95a4(*(int *)(param_1 + 0x28) + 0x484);
        }
      }
    }
    else if (pcVar10 == (char *)0x3700) {
      switch(uVar6 & 0x3f) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
switchD_00149b8c_default:
    iVar4 = iVar5;
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}

