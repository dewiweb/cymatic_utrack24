// rea decompile_all
// name: FUN_001fa6fc
// address: 0x1fa6fc
// body: available
// range: 0x1fa6fc-0x1fab03 inclusive
// range: 0x1fac60-0x1fae03 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fa8ce to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa8de to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa8ee to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa8fe to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa924 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fa998 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fad66 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fa6fc(int param_1,undefined4 param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  byte *pbVar6;
  undefined2 uVar7;
  byte *pbVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 uVar12;
  ushort uVar13;
  uint uVar14;
  uint *puVar15;
  undefined2 *puVar16;
  code *pcVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *local_40;
  uint *local_28;
  uint *local_24;
  
  pbVar6 = DAT_001fab04;
  local_28 = (uint *)0x0;
  local_24 = (uint *)0x0;
  pbVar8 = *(byte **)(param_1 + 4);
  *(byte **)(DAT_001fab04 + 8) = pbVar8;
  bVar2 = *pbVar8;
  *(byte **)(pbVar6 + 4) = pbVar8 + (bVar2 & 0xf) * 4;
  iVar9 = FUN_001f10f8(param_1,(bVar2 & 0xf) * -4);
  puVar20 = DAT_001fab08;
  if ((((iVar9 != 0) || (*(ushort *)(param_1 + 8) < 0x14)) ||
      (iVar9 = FUN_001deb2c(*DAT_001fab08,param_2), iVar9 != 0)) ||
     ((((*puVar20 & 0xff) >> 4 == 0xe ||
       (iVar9 = FUN_001de1a8(param_1,DAT_001fab0c,puVar20,6,*(undefined2 *)(param_1 + 8)),
       iVar9 != 0)) ||
      (iVar9 = FUN_001f10f8(param_1,(uint)(*(byte *)(*(int *)(pbVar6 + 4) + 0xc) >> 4) * -4),
      iVar9 != 0)))) goto LAB_001facda;
  puVar10 = *(ushort **)(pbVar6 + 4);
  uVar4 = *puVar10;
  *(char *)puVar10 = (char)(uVar4 >> 8);
  *(char *)((int)puVar10 + 1) = (char)uVar4;
  uVar5 = puVar10[1];
  *(char *)(puVar10 + 1) = (char)(uVar5 >> 8);
  *(char *)((int)puVar10 + 3) = (char)uVar5;
  puVar20 = (uint *)(puVar10 + 2);
  uVar11 = *puVar20;
  uVar18 = *puVar20 & 0xff0000;
  uVar19 = *puVar20 & 0xff00;
  uVar14 = (uint)*(byte *)((int)puVar10 + 7) | uVar18 >> 8 | uVar19 << 8 |
           (uint)(uint3)*puVar20 << 0x18;
  *(byte *)(puVar10 + 2) = *(byte *)((int)puVar10 + 7);
  *(char *)((int)puVar10 + 5) = (char)(uVar18 >> 0x10);
  *(char *)(puVar10 + 3) = (char)(uVar19 >> 8);
  *(char *)((int)puVar10 + 7) = (char)uVar11;
  *(uint *)(DAT_001fab04 + 0xc) = uVar14;
  puVar20 = (uint *)(puVar10 + 4);
  uVar18 = *puVar20;
  uVar11 = *puVar20;
  uVar19 = (uint)CONCAT11((char)puVar10[5],*(undefined1 *)((int)puVar10 + 0xb)) |
           (uVar11 & 0xff00) << 8 | (uint)(uint3)*puVar20 << 0x18;
  *(undefined1 *)(puVar10 + 4) = *(undefined1 *)((int)puVar10 + 0xb);
  *(char *)((int)puVar10 + 9) = (char)puVar10[5];
  *(char *)(puVar10 + 5) = (char)((uVar11 & 0xff00) >> 8);
  *(char *)((int)puVar10 + 0xb) = (char)uVar18;
  *(uint *)(DAT_001fab04 + 0x10) = uVar19;
  uVar13 = puVar10[7];
  *(char *)(puVar10 + 7) = (char)(uVar13 >> 8);
  *(char *)((int)puVar10 + 0xf) = (char)uVar13;
  bVar2 = *(byte *)((int)puVar10 + 0xd);
  uVar11 = (uint)bVar2;
  *DAT_001fab04 = bVar2 & 0x3f;
  uVar13 = *(short *)(param_1 + 8) + (ushort)((bVar2 & 3) != 0);
  uVar18 = (uint)uVar13;
  *(ushort *)(DAT_001fab04 + 2) = uVar13;
  local_40 = (uint *)0x0;
  puVar20 = (uint *)*DAT_001fab10;
  if (puVar20 != (uint *)0x0) {
    puVar15 = puVar20;
    do {
      puVar21 = puVar15;
      cVar3 = (char)puVar21[6];
      if (cVar3 == '\0') {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fab44,
                     s_tcp_input__active_pcb_>state____C_001fab78,0xab,_DAT_001fab14);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (cVar3 == '\n') {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fab44,
                     s_tcp_input__active_pcb_>state____T_001faba0,0xac,_DAT_001fab14);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (cVar3 == '\x01') {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fab44,
                     s_tcp_input__active_pcb_>state____L_001fabcc,0xad,_DAT_001fab14);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if ((((ushort)puVar21[7] == (ushort)(uVar4 >> 8 | uVar4 << 8)) &&
          (*(ushort *)((int)puVar21 + 0x1a) == (ushort)(uVar5 >> 8 | uVar5 << 8))) &&
         ((puVar21[1] == *DAT_001fab0c && (*puVar21 == *DAT_001fab08)))) {
        if ((uint *)puVar21[3] == puVar21) {
          FUN_00013290(s_Assertion___s__failed_at_line__d_001fab44,
                       s___tcp_input__pcb_>next____pcb__b_001fab16 + 2,0xb6,_DAT_001fab14);
                    /* WARNING: Subroutine does not return */
          FUN_00003538();
        }
        if (local_40 != (uint *)0x0) {
          local_40[3] = puVar21[3];
          puVar15 = DAT_001fab10;
          puVar21[3] = (uint)puVar20;
          *puVar15 = (uint)puVar21;
        }
        uVar12 = s_TFI_lR__tcp_input__TIME_WAIT_pcb_001fac20._0_4_;
        if ((uint *)puVar21[3] == puVar21) {
          FUN_00013290(s_Assertion___s__failed_at_line__d_001fab44,
                       s_tcp_input__pcb_>next____pcb__aft_001fabf4,0xbc,_DAT_001fab14);
                    /* WARNING: Subroutine does not return */
          FUN_00003538();
        }
        if (puVar21 != (uint *)0x0) {
          *(undefined4 *)s_TFI_lR__tcp_input__TIME_WAIT_pcb_001fac20._0_4_ = 0;
          *(undefined2 *)(uVar12 + 8) = *(undefined2 *)(param_1 + 8);
          *(int *)(uVar12 + 4) = param_1;
          pbVar6 = DAT_001fab04;
          *(ushort **)(uVar12 + 0xc) = puVar10;
          pbVar6[0x14] = 0;
          pbVar6[0x15] = 0;
          pbVar6[0x16] = 0;
          pbVar6[0x17] = 0;
          pbVar6[1] = 0;
          if ((int)(uVar11 << 0x1c) < 0) {
            *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
          }
          if ((puVar21[0x1e] != 0) &&
             ((iVar9 = FUN_001fbef0(puVar21), iVar9 == -0xb ||
              ((puVar21[0x1e] != 0 && (*(short *)(pbVar6 + 2) != 0)))))) goto LAB_001fadea;
          *(uint **)(pbVar6 + 0x18) = puVar21;
          iVar9 = FUN_001fba90(puVar21);
          if (iVar9 == -0xb) goto LAB_001fadea;
          if ((int)((uint)pbVar6[1] << 0x1c) < 0) {
            pcVar17 = (code *)puVar21[0x23];
            if (pcVar17 != entry) {
              uVar11 = puVar21[4];
              uVar12 = 0xfffffff4;
LAB_001fad20:
              (*pcVar17)(uVar11,uVar12);
            }
          }
          else {
            if (-1 < (int)((uint)pbVar6[1] << 0x1b)) {
              if ((((short)puVar21[0x19] != 0) && ((code *)puVar21[0x1f] != entry)) &&
                 (iVar9 = (*(code *)puVar21[0x1f])(puVar21[4],puVar21), iVar9 == -0xb))
              goto LAB_001fadea;
              iVar9 = *(int *)(pbVar6 + 0x14);
              if (iVar9 != 0) {
                if (puVar21[0x1e] != 0) {
                  FUN_00013290(DAT_001fae2c,s___pcb_>refused_data____NULL_001fae0e + 2,0x154,
                               _DAT_001fae0c);
                    /* WARNING: Subroutine does not return */
                  FUN_00003538();
                }
                if ((int)((uint)*(byte *)((int)puVar21 + 0x1e) << 0x1b) < 0) {
                  FUN_001f0fa0(iVar9);
                  FUN_001f9e40(puVar21);
                  goto LAB_001fadea;
                }
                if ((code *)puVar21[0x20] == entry) {
                  iVar9 = FUN_001fcc24(0,puVar21);
                }
                else {
                  iVar9 = (*(code *)puVar21[0x20])(puVar21[4],puVar21,iVar9,0);
                }
                if (iVar9 == -0xb) goto LAB_001fadea;
                if (iVar9 != 0) {
                  puVar21[0x1e] = *(uint *)(pbVar6 + 0x14);
                }
              }
              if ((int)((uint)pbVar6[1] << 0x1a) < 0) {
                uVar11 = puVar21[0x1e];
                if (uVar11 == 0) {
                  if ((ushort)puVar21[0xb] != DAT_001fae30) {
                    *(ushort *)(puVar21 + 0xb) = (ushort)puVar21[0xb] + 1;
                  }
                  if (((code *)puVar21[0x20] != entry) &&
                     (iVar9 = (*(code *)puVar21[0x20])(puVar21[4],puVar21,0), iVar9 == -0xb))
                  goto LAB_001fadea;
                }
                else {
                  *(byte *)(uVar11 + 0xd) = *(byte *)(uVar11 + 0xd) | 0x20;
                }
              }
              pbVar6[0x18] = 0;
              pbVar6[0x19] = 0;
              pbVar6[0x1a] = 0;
              pbVar6[0x1b] = 0;
              FUN_001fb0ac(puVar21);
              goto LAB_001fadea;
            }
            if ((-1 < (int)((uint)*(byte *)((int)puVar21 + 0x1e) << 0x1b)) &&
               (pcVar17 = (code *)puVar21[0x23], pcVar17 != entry)) {
              uVar11 = puVar21[4];
              uVar12 = 0xfffffff3;
              goto LAB_001fad20;
            }
          }
          FUN_001fb8e4(DAT_001fae04,puVar21);
          FUN_001ecfbc(2,puVar21);
LAB_001fadea:
          iVar9 = DAT_001fae34;
          pbVar6[0x18] = 0;
          pbVar6[0x19] = 0;
          pbVar6[0x1a] = 0;
          pbVar6[0x1b] = 0;
          pbVar6[0x14] = 0;
          pbVar6[0x15] = 0;
          pbVar6[0x16] = 0;
          pbVar6[0x17] = 0;
          if (*(int *)(iVar9 + 4) == 0) {
            return;
          }
          FUN_001f0fa0();
          *(undefined4 *)(iVar9 + 4) = 0;
          return;
        }
        break;
      }
      puVar15 = (uint *)puVar21[3];
      local_40 = puVar21;
    } while ((uint *)puVar21[3] != (uint *)0x0);
  }
  puVar20 = *(uint **)s_TFI_lR__tcp_input__TIME_WAIT_pcb_001fac20._4_4_;
  if (puVar20 != (uint *)0x0) {
    do {
      if ((char)puVar20[6] != '\n') {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fab44,
                     s_TFI_lR__tcp_input__TIME_WAIT_pcb_001fac20 + 8,0xc6,_DAT_001fab14);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      if (((((ushort)puVar20[7] == *puVar10) && (*(ushort *)((int)puVar20 + 0x1a) == puVar10[1])) &&
          (puVar20[1] == *DAT_001fab0c)) && (*puVar20 == *DAT_001fab08)) {
        if ((int)(uVar11 << 0x1d) < 0) goto LAB_001facda;
        if ((int)(uVar11 << 0x1e) < 0) {
          if ((-1 < (int)(uVar14 - puVar20[10])) &&
             ((int)(uVar14 - (puVar20[10] + (uint)(ushort)puVar20[0xb])) < 1)) {
            FUN_001fce48(uVar19,uVar18 + uVar14,DAT_001fab08,DAT_001fab0c,
                         CONCAT11(*(undefined1 *)((int)puVar10 + 3),(char)puVar10[1]),*puVar10);
            goto LAB_001facda;
          }
        }
        else if ((bVar2 & 1) != 0) {
          puVar20[9] = *DAT_001fac58;
        }
        if (uVar18 == 0) goto LAB_001facda;
        *(byte *)((int)puVar20 + 0x1e) = *(byte *)((int)puVar20 + 0x1e) | 2;
        goto LAB_001facc4;
      }
      puVar20 = (uint *)puVar20[3];
    } while (puVar20 != (uint *)0x0);
  }
  puVar20 = (uint *)*DAT_001fac5c;
  if (puVar20 != (uint *)0x0) {
    puVar15 = (uint *)0x0;
    puVar21 = puVar20;
    do {
      if (*(ushort *)((int)puVar21 + 0x1a) == puVar10[1]) {
        if (*puVar21 == *DAT_001fab08) {
          if (puVar21 != (uint *)0x0) goto LAB_001faa76;
          break;
        }
        if ((puVar21 == (uint *)0x0) || (*puVar21 == 0)) {
          local_28 = puVar15;
          local_24 = puVar21;
        }
      }
      puVar1 = puVar21 + 3;
      puVar15 = puVar21;
      puVar21 = (uint *)*puVar1;
    } while ((uint *)*puVar1 != (uint *)0x0);
  }
  puVar15 = local_28;
  puVar21 = local_24;
  if (local_24 == (uint *)0x0) {
    if ((int)((uint)*(byte *)((int)puVar10 + 0xd) << 0x1d) < 0) goto LAB_001facda;
  }
  else {
LAB_001faa76:
    if (puVar15 != (uint *)0x0) {
      puVar15[3] = puVar21[3];
      puVar15 = DAT_001fac5c;
      puVar21[3] = (uint)puVar20;
      *puVar15 = (uint)puVar21;
    }
    pbVar6 = DAT_001fab04;
    if ((int)(uVar11 << 0x1d) < 0) goto LAB_001facda;
    if (-1 < (int)(uVar11 << 0x1b)) {
      if ((((int)(uVar11 << 0x1e) < 0) && (*(byte *)((int)puVar21 + 0x1d) < (byte)puVar21[7])) &&
         (puVar20 = (uint *)FUN_001f9e54(*(undefined1 *)((int)puVar21 + 0x19)),
         puVar20 != (uint *)0x0)) {
        *(char *)((int)puVar21 + 0x1d) = *(char *)((int)puVar21 + 0x1d) + '\x01';
        *puVar20 = *DAT_001fab08;
        *(undefined2 *)((int)puVar20 + 0x1a) = *(undefined2 *)((int)puVar21 + 0x1a);
        puVar20[1] = *DAT_001fab0c;
        puVar16 = *(undefined2 **)(pbVar6 + 4);
        *(undefined2 *)(puVar20 + 7) = *puVar16;
        *(undefined1 *)(puVar20 + 6) = 3;
        iVar9 = *(int *)(pbVar6 + 0xc);
        uVar11 = iVar9 + 1;
        puVar20[10] = uVar11;
        puVar20[0xc] = uVar11;
        uVar7 = puVar16[7];
        *(undefined2 *)(puVar20 + 0x18) = uVar7;
        *(undefined2 *)((int)puVar20 + 0x62) = puVar16[7];
        *(undefined2 *)((int)puVar20 + 0x4e) = uVar7;
        puVar20[0x15] = iVar9 - 1;
        puVar20[4] = puVar21[4];
        puVar20[5] = puVar21[5];
        *(byte *)(puVar20 + 2) = (byte)puVar21[2] & 0x8c;
        puVar15 = DAT_001fae04;
        puVar20[3] = *DAT_001fae04;
        *puVar15 = (uint)puVar20;
        FUN_001fd6c8();
        *DAT_001fae08 = 1;
        FUN_001fb6f0(puVar20);
        uVar7 = FUN_001fa374(*(undefined2 *)((int)puVar20 + 0x36),puVar20 + 1);
        *(undefined2 *)((int)puVar20 + 0x36) = uVar7;
        iVar9 = FUN_001fa39c(puVar20,0x12);
        if (iVar9 == 0) {
LAB_001facc4:
          FUN_001fb0ac(puVar20);
        }
        else {
          FUN_001f9d3c(puVar20,0);
        }
      }
      goto LAB_001facda;
    }
  }
  FUN_001fce48(uVar19,uVar18 + uVar14,DAT_001fab08,DAT_001fab0c,puVar10[1],*puVar10);
LAB_001facda:
  FUN_001f0fa0(param_1);
  return;
}

