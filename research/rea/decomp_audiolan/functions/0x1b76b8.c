// rea decompile_all
// name: FUN_001b76b8
// address: 0x1b76b8
// body: available
// range: 0x1b76b8-0x1b7ae5 inclusive
// range: 0x1b7bd4-0x1b7ce9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_001b76b8(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
            int *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int *piVar8;
  short *psVar9;
  undefined2 uVar11;
  int *piVar10;
  undefined1 *puVar12;
  undefined1 auStack_288 [4];
  int local_284;
  undefined1 auStack_158 [256];
  short local_58;
  int iStack_24;
  byte *local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if ((*(short *)(param_2 + 4) != 0) &&
     (iStack_24 = param_1, local_20 = param_2, uStack_1c = param_3, local_18 = param_4,
     iVar2 = FUN_0018addc(param_2,param_2 + 0xc,param_3,0,auStack_288), iVar2 != 0)) {
    iVar2 = FUN_00021dbc(param_1,local_20,param_3);
    iVar3 = param_1 + 0x100;
    piVar8 = *(int **)(param_1 + 0x130);
    iVar4 = param_1 + DAT_001b7ae8;
    if (piVar8 != (int *)0x0) {
      puVar12 = auStack_158;
      do {
        if ((((*(short *)((int)piVar8 + 0x12e) != 0) && (piVar8[0x8d] != 0)) &&
            ((short)piVar8[0x8c] == local_58)) &&
           ((piVar8[1] == local_284 && (iVar5 = FUN_0003b48a(piVar8 + 0x4c,puVar12), iVar5 != 0))))
        {
          piVar10 = piVar8 + 0x38;
          bVar1 = *(byte *)((int)piVar8 + 0xff);
          if ((bVar1 == 4) && (*(short *)local_20 == *(short *)((int)piVar8 + 0x12e))) {
            *(undefined1 *)(iVar4 + 0x10) = 0;
            if (piVar8[0x38] == 4) {
              uVar7 = piVar8[0x39];
joined_r0x001b777c:
              if (uVar7 == 0xffffffff) goto LAB_001b77aa;
            }
            else if (piVar8[0x38] == 6) {
              uVar7 = piVar8[0x39] & piVar8[0x3a] & piVar8[0x3b] & piVar8[0x3c];
              goto joined_r0x001b777c;
            }
            if ((*(short *)(param_1 + 0x2788) != 0) && (*(int *)(param_1 + 0x2790) == 0)) {
              *(undefined1 *)((int)piVar8 + 0xff) = 1;
            }
LAB_001b77aa:
            piVar10 = DAT_001b7af0;
            *(undefined2 *)(piVar8 + 0x3d) = *DAT_001b7aec;
            FUN_0016da64(*piVar10 * 900);
            iVar2 = FUN_0019560c(extraout_r1);
            piVar8[4] = iVar2 + *piVar10 * 900;
            piVar8[3] = *(int *)(param_1 + 0xdc);
            FUN_0003f5f0(param_1,piVar8);
            *param_6 = (int)piVar8;
            return 2;
          }
          if (iVar2 != 0) {
            if (((bVar1 == 3) && (*(short *)(iVar2 + 6) == 3)) &&
               (*(int *)(iVar2 + 0xc) == piVar8[0x43])) {
              if (*(int *)(iVar2 + 0x10) == piVar8[0x44]) {
                iVar3 = param_1 + DAT_001b7af8;
                FUN_0002369c(iVar3,(uint)*(byte *)(iVar2 + 0x12) << 0x10 |
                                   (uint)*(byte *)(iVar2 + 0x13) << 0x18 | (uint)*local_20 |
                                   (uint)local_20[1] << 8,*DAT_001b7af4);
                uVar11 = (undefined2)((uint)piVar10 >> 0x10);
                iVar2 = FUN_001aa958(iVar3,param_1 + DAT_001b7afc,piVar8,iVar2 + 4);
                if (iVar2 != 0) {
                  FUN_0019569c(param_1,iVar3,iVar2,*DAT_001b7b00,piVar8[0x30],local_18,
                               CONCAT22(uVar11,param_5),0,0);
                }
                *(undefined1 *)(iVar4 + 0x10) = 0;
                *param_6 = (int)piVar8;
                return 3;
              }
            }
            if (*(short *)local_20 == *(short *)((int)piVar8 + 0x12e)) {
              if (bVar1 == 3) {
                if (((*(short *)(iVar2 + 6) == 2) && (*(int *)(iVar2 + 0xc) == piVar8[0x43])) &&
                   ((*(int *)(iVar2 + 0x10) == piVar8[0x44] &&
                    ((*(short *)(local_20 + 10) != 0 && (*(short *)(local_20 + 6) == 0)))))) {
                  if (*(short *)(iVar2 + 8) == 0) {
                    if ((*(int3 *)(iVar2 + 0x14) == 0 && *(char *)(iVar2 + 0x17) == '\0') &&
                       (*(int *)(iVar3 + 0x24) != 0)) {
                      *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_1 + 0xdc);
                    }
                    FUN_000233e8(param_1,piVar8,*(undefined4 *)(iVar2 + 0x14));
                    iVar3 = *(int *)(iVar2 + 0x14);
                    iVar2 = *DAT_001b7af0;
                    piVar8[0x40] = iVar3;
                    iVar3 = iVar3 * iVar2;
                    piVar8[3] = *(int *)(param_1 + 0xdc);
                    piVar8[0x41] = *(int *)(param_1 + 0xdc) + iVar3;
                    FUN_0016da64();
                    iVar2 = FUN_0019560c(extraout_r1_00);
                    piVar8[4] = iVar2 + iVar3 / 2;
                    FUN_0003f5f0(param_1,piVar8);
                    *(undefined2 *)(piVar8 + 0x42) = 0;
                  }
                  else {
                    FUN_00024642(0,s_h__recvRefreshReply__received_er_001b7b05 + 3);
                  }
                  *(undefined1 *)(iVar4 + 0x10) = 0;
                  *param_6 = (int)piVar8;
                  return 1;
                }
              }
              else if ((bVar1 < 3) && (iVar5 = FUN_00195654(local_18,piVar10), iVar5 != 0)) {
                uVar7 = (uint)*(byte *)((int)piVar8 + 0xff);
                psVar9 = (short *)(iVar2 + 4);
                if (((local_20[3] & 0xf) == 0) || ((local_20[3] & 0xf) == 3)) {
                  if (*(short *)(iVar2 + 6) == 1) {
                    if (*psVar9 == 1) {
                      if (uVar7 == 1) {
                        if (*(short *)(iVar2 + 8) == 0) {
                          piVar8[0x40] = *(int *)(iVar2 + 0x14);
                          piVar8[0x41] = *(int *)(param_1 + 0xdc) +
                                         *DAT_001b7cec * *(int *)(iVar2 + 0x14);
                          *(undefined1 *)((int)piVar10 + 0x1f) = 2;
                          iVar3 = *(int *)(iVar2 + 0xc);
                          piVar8[0x44] = *(int *)(iVar2 + 0x10);
                          piVar8[0x43] = iVar3;
                          *(undefined2 *)(piVar8 + 0x42) = 0;
                          FUN_001aba3c(param_1,piVar8,psVar9);
                        }
                        else {
                          iVar2 = param_1;
                          FUN_00024642(0,s_recvSetupResponse___received_llq_001b7b9c);
                          *(undefined1 *)((int)piVar10 + 0x1f) = 4;
                          iVar3 = *DAT_001b7af0;
                          piVar8[4] = iVar3 * 3;
                          piVar8[3] = *(int *)(param_1 + 0xdc) + iVar3 * -3 + 1;
                          FUN_0003f5f0(iVar2,piVar8);
                        }
                      }
                      else if (uVar7 == 2) {
                        iVar3 = param_1;
                        if ((piVar8[0xd] != 0) && (*(int *)(piVar8[0xd] + 8) != 0)) {
                          if (*_DAT_001b7cf0 != 0) {
                            FUN_00024642(3,s____Private_LLQ_SecondaryRequest__001b7cf1 + 3,
                                         *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10))
                            ;
                          }
                          iVar5 = *(int *)(iVar2 + 0xc);
                          piVar8[0x44] = *(int *)(iVar2 + 0x10);
                          piVar8[0x43] = iVar5;
                        }
                        if (*(short *)(iVar2 + 8) == 0) {
                          if ((piVar8[0x43] != *(int *)(iVar2 + 0xc)) ||
                             (piVar8[0x44] != *(int *)(iVar2 + 0x10))) {
                            FUN_00024642(0,s_recvSetupResponse___ID_changed__d_001b7d60);
                            goto LAB_001b7cd4;
                          }
                          *(undefined1 *)((int)piVar10 + 0x1f) = 3;
                          *(undefined2 *)(piVar8 + 0x42) = 0;
                          iVar2 = *(int *)(iVar2 + 0x14);
                          iVar5 = *DAT_001b7cec;
                          piVar8[0x40] = iVar2;
                          iVar5 = iVar5 * iVar2;
                          piVar8[3] = *(int *)(param_1 + 0xdc);
                          piVar8[0x41] = *(int *)(param_1 + 0xdc) + iVar5;
                          FUN_0016da64(iVar5);
                          iVar2 = FUN_0019560c(extraout_r1_01);
                          piVar8[4] = iVar2 + iVar5 / 2;
                        }
                        else {
                          uVar6 = FUN_000203e4((short)piVar8[0x8c]);
                          FUN_00024642(0,s_ERROR__recvSetupResponse____s____001b7d28,piVar8 + 0x4c,
                                       uVar6,*(undefined2 *)(iVar2 + 8));
                          *(undefined1 *)((int)piVar10 + 0x1f) = 4;
                          iVar2 = *DAT_001b7cec;
                          piVar8[4] = iVar2 * 3;
                          piVar8[3] = *(int *)(param_1 + 0xdc) + iVar2 * -3 + 1;
                        }
                        FUN_0003f5f0(iVar3,piVar8);
                      }
                    }
                    else {
                      uVar6 = FUN_000203e4((short)piVar8[0x8c]);
                      FUN_00024642(0,s_ERROR__recvSetupResponse____s____001b7b68,piVar8 + 0x4c,uVar6
                                   ,*psVar9);
                    }
                  }
                  else {
                    uVar6 = FUN_000203e4((short)piVar8[0x8c]);
                    FUN_00024642(0,s_ERROR__recvSetupResponse____s____001b7b38,piVar8 + 0x4c,uVar6,
                                 *(undefined2 *)(iVar2 + 6));
                  }
                }
                else {
                  uVar6 = FUN_000203e4((short)piVar8[0x8c]);
                  FUN_00024642(0,_DAT_001b7b04,piVar8 + 0x4c,uVar6);
                }
LAB_001b7cd4:
                *(undefined1 *)(iVar4 + 0x10) = 0;
                *param_6 = (int)piVar8;
                if (uVar7 == 2) {
                  return 2;
                }
                return 1;
              }
            }
          }
        }
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)0x0);
    }
    *(undefined1 *)(iVar4 + 0x10) = 0;
  }
  *param_6 = 0;
  return 0;
}

