// rea decompile_all
// name: FUN_001b2368
// address: 0x1b2368
// body: available
// range: 0x1b2368-0x1b276f inclusive
// range: 0x1b28cc-0x1b2a6f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b253a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b254a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b255a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b256a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b2590 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b2604 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b29d2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b2368(int param_1,undefined4 param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  byte *pbVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  undefined4 uVar13;
  ushort uVar14;
  uint uVar15;
  uint *puVar16;
  undefined2 *puVar17;
  code *pcVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *local_40;
  uint *local_28;
  uint *local_24;
  
  pbVar6 = DAT_001b2770;
  local_28 = (uint *)0x0;
  local_24 = (uint *)0x0;
  pbVar9 = *(byte **)(param_1 + 4);
  *(byte **)(DAT_001b2770 + 8) = pbVar9;
  bVar2 = *pbVar9;
  *(byte **)(pbVar6 + 4) = pbVar9 + (bVar2 & 0xf) * 4;
  iVar10 = FUN_001aa160(param_1,(bVar2 & 0xf) * -4);
  puVar21 = DAT_001b2774;
  if ((((iVar10 != 0) || (*(ushort *)(param_1 + 8) < 0x14)) ||
      (iVar10 = FUN_0018dcc4(*DAT_001b2774,param_2), iVar10 != 0)) ||
     ((((*puVar21 & 0xff) >> 4 == 0xe ||
       (iVar10 = FUN_0018d614(param_1,DAT_001b2778,puVar21,6,*(undefined2 *)(param_1 + 8)),
       iVar10 != 0)) ||
      (iVar10 = FUN_001aa160(param_1,(uint)(*(byte *)(*(int *)(pbVar6 + 4) + 0xc) >> 4) * -4),
      iVar10 != 0)))) goto LAB_001b2946;
  puVar11 = *(ushort **)(pbVar6 + 4);
  uVar4 = *puVar11;
  *(char *)puVar11 = (char)(uVar4 >> 8);
  *(char *)((int)puVar11 + 1) = (char)uVar4;
  uVar5 = puVar11[1];
  *(char *)(puVar11 + 1) = (char)(uVar5 >> 8);
  *(char *)((int)puVar11 + 3) = (char)uVar5;
  puVar21 = (uint *)(puVar11 + 2);
  uVar12 = *puVar21;
  uVar19 = *puVar21 & 0xff0000;
  uVar20 = *puVar21 & 0xff00;
  uVar15 = (uint)*(byte *)((int)puVar11 + 7) | uVar19 >> 8 | uVar20 << 8 |
           (uint)(uint3)*puVar21 << 0x18;
  *(byte *)(puVar11 + 2) = *(byte *)((int)puVar11 + 7);
  *(char *)((int)puVar11 + 5) = (char)(uVar19 >> 0x10);
  *(char *)(puVar11 + 3) = (char)(uVar20 >> 8);
  *(char *)((int)puVar11 + 7) = (char)uVar12;
  *(uint *)(DAT_001b2770 + 0xc) = uVar15;
  puVar21 = (uint *)(puVar11 + 4);
  uVar19 = *puVar21;
  uVar12 = *puVar21;
  uVar20 = (uint)CONCAT11((char)puVar11[5],*(undefined1 *)((int)puVar11 + 0xb)) |
           (uVar12 & 0xff00) << 8 | (uint)(uint3)*puVar21 << 0x18;
  *(undefined1 *)(puVar11 + 4) = *(undefined1 *)((int)puVar11 + 0xb);
  *(char *)((int)puVar11 + 9) = (char)puVar11[5];
  *(char *)(puVar11 + 5) = (char)((uVar12 & 0xff00) >> 8);
  *(char *)((int)puVar11 + 0xb) = (char)uVar19;
  *(uint *)(DAT_001b2770 + 0x10) = uVar20;
  uVar14 = puVar11[7];
  *(char *)(puVar11 + 7) = (char)(uVar14 >> 8);
  *(char *)((int)puVar11 + 0xf) = (char)uVar14;
  bVar2 = *(byte *)((int)puVar11 + 0xd);
  uVar12 = (uint)bVar2;
  *DAT_001b2770 = bVar2 & 0x3f;
  uVar14 = *(short *)(param_1 + 8) + (ushort)((bVar2 & 3) != 0);
  uVar19 = (uint)uVar14;
  *(ushort *)(DAT_001b2770 + 2) = uVar14;
  local_40 = (uint *)0x0;
  puVar21 = (uint *)*DAT_001b277c;
  if (puVar21 != (uint *)0x0) {
    puVar16 = puVar21;
    do {
      puVar22 = puVar16;
      cVar3 = (char)puVar22[6];
      if (cVar3 == '\0') {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b27b0,
                     s_tcp_input__active_pcb_>state____C_001b27e4,0xab,_DAT_001b2780);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (cVar3 == '\n') {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b27b0,
                     s_tcp_input__active_pcb_>state____T_001b280c,0xac,_DAT_001b2780);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (cVar3 == '\x01') {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b27b0,
                     s_tcp_input__active_pcb_>state____L_001b2838,0xad,_DAT_001b2780);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if ((((ushort)puVar22[7] == (ushort)(uVar4 >> 8 | uVar4 << 8)) &&
          (*(ushort *)((int)puVar22 + 0x1a) == (ushort)(uVar5 >> 8 | uVar5 << 8))) &&
         ((puVar22[1] == *DAT_001b2778 && (*puVar22 == *DAT_001b2774)))) {
        if ((uint *)puVar22[3] == puVar22) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_001b27b0,
                       s____tcp_input__pcb_>next____pcb___001b2781 + 3,0xb6,_DAT_001b2780);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        if (local_40 != (uint *)0x0) {
          local_40[3] = puVar22[3];
          puVar16 = DAT_001b277c;
          puVar22[3] = (uint)puVar21;
          *puVar16 = (uint)puVar22;
        }
        puVar7 = DAT_001b288c;
        if ((uint *)puVar22[3] == puVar22) {
          FUN_00015210(s_Assertion___s__failed_at_line__d_001b27b0,
                       s_tcp_input__pcb_>next____pcb__aft_001b2860,0xbc,_DAT_001b2780);
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        if (puVar22 != (uint *)0x0) {
          *DAT_001b288c = 0;
          *(undefined2 *)(puVar7 + 2) = *(undefined2 *)(param_1 + 8);
          puVar7[1] = param_1;
          pbVar6 = DAT_001b2770;
          puVar7[3] = puVar11;
          pbVar6[0x14] = 0;
          pbVar6[0x15] = 0;
          pbVar6[0x16] = 0;
          pbVar6[0x17] = 0;
          pbVar6[1] = 0;
          if ((int)(uVar12 << 0x1c) < 0) {
            *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
          }
          if ((puVar22[0x1e] != 0) &&
             ((iVar10 = FUN_001b3b5c(puVar22), iVar10 == -0xb ||
              ((puVar22[0x1e] != 0 && (*(short *)(pbVar6 + 2) != 0)))))) goto LAB_001b2a56;
          *(uint **)(pbVar6 + 0x18) = puVar22;
          iVar10 = FUN_001b36fc(puVar22);
          if (iVar10 == -0xb) goto LAB_001b2a56;
          if ((int)((uint)pbVar6[1] << 0x1c) < 0) {
            pcVar18 = (code *)puVar22[0x23];
            if (pcVar18 != entry) {
              uVar12 = puVar22[4];
              uVar13 = 0xfffffff4;
LAB_001b298c:
              (*pcVar18)(uVar12,uVar13);
            }
          }
          else {
            if (-1 < (int)((uint)pbVar6[1] << 0x1b)) {
              if ((((short)puVar22[0x19] != 0) && ((code *)puVar22[0x1f] != entry)) &&
                 (iVar10 = (*(code *)puVar22[0x1f])(puVar22[4],puVar22), iVar10 == -0xb))
              goto LAB_001b2a56;
              iVar10 = *(int *)(pbVar6 + 0x14);
              if (iVar10 != 0) {
                if (puVar22[0x1e] != 0) {
                  FUN_00015210(DAT_001b2a98,s____pcb_>refused_data____NULL_001b2a79 + 3,0x154,
                               _DAT_001b2a78);
                    /* WARNING: Subroutine does not return */
                  FUN_000032f8();
                }
                if ((int)((uint)*(byte *)((int)puVar22 + 0x1e) << 0x1b) < 0) {
                  FUN_001aa008(iVar10);
                  FUN_001b186c(puVar22);
                  goto LAB_001b2a56;
                }
                if ((code *)puVar22[0x20] == entry) {
                  iVar10 = FUN_001b4890(0,puVar22);
                }
                else {
                  iVar10 = (*(code *)puVar22[0x20])(puVar22[4],puVar22,iVar10,0);
                }
                if (iVar10 == -0xb) goto LAB_001b2a56;
                if (iVar10 != 0) {
                  puVar22[0x1e] = *(uint *)(pbVar6 + 0x14);
                }
              }
              if ((int)((uint)pbVar6[1] << 0x1a) < 0) {
                uVar12 = puVar22[0x1e];
                if (uVar12 == 0) {
                  if ((ushort)puVar22[0xb] != DAT_001b2a9c) {
                    *(ushort *)(puVar22 + 0xb) = (ushort)puVar22[0xb] + 1;
                  }
                  if (((code *)puVar22[0x20] != entry) &&
                     (iVar10 = (*(code *)puVar22[0x20])(puVar22[4],puVar22,0), iVar10 == -0xb))
                  goto LAB_001b2a56;
                }
                else {
                  *(byte *)(uVar12 + 0xd) = *(byte *)(uVar12 + 0xd) | 0x20;
                }
              }
              pbVar6[0x18] = 0;
              pbVar6[0x19] = 0;
              pbVar6[0x1a] = 0;
              pbVar6[0x1b] = 0;
              FUN_001b2d18(puVar22);
              goto LAB_001b2a56;
            }
            if ((-1 < (int)((uint)*(byte *)((int)puVar22 + 0x1e) << 0x1b)) &&
               (pcVar18 = (code *)puVar22[0x23], pcVar18 != entry)) {
              uVar12 = puVar22[4];
              uVar13 = 0xfffffff3;
              goto LAB_001b298c;
            }
          }
          FUN_001b3550(DAT_001b2a70,puVar22);
          FUN_0019cae4(2,puVar22);
LAB_001b2a56:
          iVar10 = DAT_001b2aa0;
          pbVar6[0x18] = 0;
          pbVar6[0x19] = 0;
          pbVar6[0x1a] = 0;
          pbVar6[0x1b] = 0;
          pbVar6[0x14] = 0;
          pbVar6[0x15] = 0;
          pbVar6[0x16] = 0;
          pbVar6[0x17] = 0;
          if (*(int *)(iVar10 + 4) == 0) {
            return;
          }
          FUN_001aa008();
          *(undefined4 *)(iVar10 + 4) = 0;
          return;
        }
        break;
      }
      puVar16 = (uint *)puVar22[3];
      local_40 = puVar22;
    } while ((uint *)puVar22[3] != (uint *)0x0);
  }
  puVar21 = (uint *)*_DAT_001b2890;
  if (puVar21 != (uint *)0x0) {
    do {
      if ((char)puVar21[6] != '\n') {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b27b0,
                     s_2__tcp_input__TIME_WAIT_pcb_>sta_001b2891 + 3,0xc6,_DAT_001b2780);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (((((ushort)puVar21[7] == *puVar11) && (*(ushort *)((int)puVar21 + 0x1a) == puVar11[1])) &&
          (puVar21[1] == *DAT_001b2778)) && (*puVar21 == *DAT_001b2774)) {
        if ((int)(uVar12 << 0x1d) < 0) goto LAB_001b2946;
        if ((int)(uVar12 << 0x1e) < 0) {
          if ((-1 < (int)(uVar15 - puVar21[10])) &&
             ((int)(uVar15 - (puVar21[10] + (uint)(ushort)puVar21[0xb])) < 1)) {
            FUN_001b4ab4(uVar20,uVar19 + uVar15,DAT_001b2774,DAT_001b2778,
                         CONCAT11(*(undefined1 *)((int)puVar11 + 3),(char)puVar11[1]),*puVar11);
            goto LAB_001b2946;
          }
        }
        else if ((bVar2 & 1) != 0) {
          puVar21[9] = *DAT_001b28c4;
        }
        if (uVar19 == 0) goto LAB_001b2946;
        *(byte *)((int)puVar21 + 0x1e) = *(byte *)((int)puVar21 + 0x1e) | 2;
        goto LAB_001b2930;
      }
      puVar21 = (uint *)puVar21[3];
    } while (puVar21 != (uint *)0x0);
  }
  puVar21 = (uint *)*DAT_001b28c8;
  if (puVar21 != (uint *)0x0) {
    puVar16 = (uint *)0x0;
    puVar22 = puVar21;
    do {
      if (*(ushort *)((int)puVar22 + 0x1a) == puVar11[1]) {
        if (*puVar22 == *DAT_001b2774) {
          if (puVar22 != (uint *)0x0) goto LAB_001b26e2;
          break;
        }
        if ((puVar22 == (uint *)0x0) || (*puVar22 == 0)) {
          local_28 = puVar16;
          local_24 = puVar22;
        }
      }
      puVar1 = puVar22 + 3;
      puVar16 = puVar22;
      puVar22 = (uint *)*puVar1;
    } while ((uint *)*puVar1 != (uint *)0x0);
  }
  puVar16 = local_28;
  puVar22 = local_24;
  if (local_24 == (uint *)0x0) {
    if ((int)((uint)*(byte *)((int)puVar11 + 0xd) << 0x1d) < 0) goto LAB_001b2946;
  }
  else {
LAB_001b26e2:
    if (puVar16 != (uint *)0x0) {
      puVar16[3] = puVar22[3];
      puVar16 = DAT_001b28c8;
      puVar22[3] = (uint)puVar21;
      *puVar16 = (uint)puVar22;
    }
    pbVar6 = DAT_001b2770;
    if ((int)(uVar12 << 0x1d) < 0) goto LAB_001b2946;
    if (-1 < (int)(uVar12 << 0x1b)) {
      if ((((int)(uVar12 << 0x1e) < 0) && (*(byte *)((int)puVar22 + 0x1d) < (byte)puVar22[7])) &&
         (puVar21 = (uint *)FUN_001b1880(*(undefined1 *)((int)puVar22 + 0x19)),
         puVar21 != (uint *)0x0)) {
        *(char *)((int)puVar22 + 0x1d) = *(char *)((int)puVar22 + 0x1d) + '\x01';
        *puVar21 = *DAT_001b2774;
        *(undefined2 *)((int)puVar21 + 0x1a) = *(undefined2 *)((int)puVar22 + 0x1a);
        puVar21[1] = *DAT_001b2778;
        puVar17 = *(undefined2 **)(pbVar6 + 4);
        *(undefined2 *)(puVar21 + 7) = *puVar17;
        *(undefined1 *)(puVar21 + 6) = 3;
        iVar10 = *(int *)(pbVar6 + 0xc);
        uVar12 = iVar10 + 1;
        puVar21[10] = uVar12;
        puVar21[0xc] = uVar12;
        uVar8 = puVar17[7];
        *(undefined2 *)(puVar21 + 0x18) = uVar8;
        *(undefined2 *)((int)puVar21 + 0x62) = puVar17[7];
        *(undefined2 *)((int)puVar21 + 0x4e) = uVar8;
        puVar21[0x15] = iVar10 - 1;
        puVar21[4] = puVar22[4];
        puVar21[5] = puVar22[5];
        *(byte *)(puVar21 + 2) = (byte)puVar22[2] & 0x8c;
        puVar16 = DAT_001b2a70;
        puVar21[3] = *DAT_001b2a70;
        *puVar16 = (uint)puVar21;
        FUN_001b5334();
        *DAT_001b2a74 = 1;
        FUN_001b335c(puVar21);
        uVar8 = FUN_001b1fe0(*(undefined2 *)((int)puVar21 + 0x36),puVar21 + 1);
        *(undefined2 *)((int)puVar21 + 0x36) = uVar8;
        iVar10 = FUN_001b2008(puVar21,0x12);
        if (iVar10 == 0) {
LAB_001b2930:
          FUN_001b2d18(puVar21);
        }
        else {
          FUN_001b1768(puVar21,0);
        }
      }
      goto LAB_001b2946;
    }
  }
  FUN_001b4ab4(uVar20,uVar19 + uVar15,DAT_001b2774,DAT_001b2778,puVar11[1],*puVar11);
LAB_001b2946:
  FUN_001aa008(param_1);
  return;
}

