// rea decompile_all
// name: FUN_001aaa90
// address: 0x1aaa90
// body: available
// range: 0x1aaa90-0x1aaab3 inclusive
// range: 0x1aaac8-0x1aabdd inclusive
// range: 0x1aabe0-0x1aaf5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_001aaa90(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined3 uVar4;
  undefined1 *puVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int extraout_r1;
  int iVar11;
  undefined2 *puVar12;
  short *psVar13;
  undefined2 *puVar14;
  short *psVar15;
  uint uVar16;
  short *psVar17;
  bool bVar18;
  bool bVar19;
  short *local_58;
  short *local_40;
  short *local_3c;
  short *local_38;
  int local_34;
  
  iVar11 = *(int *)(param_4 + 0x20);
  uVar1 = *(ushort *)(param_4 + 2);
  puVar12 = (undefined2 *)(iVar11 + 4);
  if (uVar1 == 0x14) {
switchD_001aaab2_caseD_a:
    uVar1 = *(ushort *)(param_4 + 0xc);
    goto joined_r0x001aabe8;
  }
  if (0x14 < uVar1) {
    if (uVar1 == 0x24) {
switchD_001aaab2_caseD_f:
      if (param_2 + 3 <= param_3) {
        uVar2 = *puVar12;
        *param_2 = (char)((ushort)uVar2 >> 8);
        param_2[1] = (char)uVar2;
        puVar5 = (undefined1 *)FUN_001aa5bc(param_1,param_2 + 2,param_3,iVar11 + 6);
        return puVar5;
      }
      return (undefined1 *)0x0;
    }
    if (uVar1 < 0x25) {
      if (uVar1 == 0x1c) {
        if (*(short *)(param_4 + 0xc) != 0x10) {
          return (undefined1 *)0x0;
        }
        if (param_2 + 0x10 <= param_3) {
          FUN_001952f0(param_2,puVar12,0x10);
          return param_2 + 0x10;
        }
        return (undefined1 *)0x0;
      }
      if (uVar1 < 0x1d) {
        if (uVar1 == 0x15) goto switchD_001aaab2_caseD_f;
        if (uVar1 == 0x1a) {
          puVar5 = param_2 + 5;
          bVar19 = param_3 <= puVar5;
          bVar18 = puVar5 == param_3;
          if (bVar19 && !bVar18) goto LAB_001aab6e;
          uVar2 = *puVar12;
          *param_2 = (char)((ushort)uVar2 >> 8);
          param_2[1] = (char)uVar2;
          iVar6 = FUN_001aa5bc(param_1,param_2 + 2,param_3,iVar11 + 6);
          bVar18 = iVar6 == 0;
          puVar5 = (undefined1 *)0x0;
          if (!bVar18) {
            puVar5 = (undefined1 *)FUN_001aa5bc(param_1,iVar6,param_3,iVar11 + 0x106);
            return puVar5;
          }
          goto LAB_001aab64;
        }
      }
      else {
        if (uVar1 == 0x1d) goto switchD_001aaab2_caseD_a;
        if (uVar1 == 0x21) {
          if (param_2 + 7 <= param_3) {
            *param_2 = (char)((ushort)*puVar12 >> 8);
            param_2[1] = (char)*puVar12;
            param_2[2] = (char)((ushort)*(undefined2 *)(iVar11 + 6) >> 8);
            param_2[3] = (char)*(undefined2 *)(iVar11 + 6);
            param_2[4] = *(undefined1 *)(iVar11 + 8);
            param_2[5] = *(undefined1 *)(iVar11 + 9);
            puVar5 = (undefined1 *)FUN_001aa5bc(param_1,param_2 + 6,param_3,iVar11 + 10);
            return puVar5;
          }
          return (undefined1 *)0x0;
        }
      }
    }
    else {
      if (uVar1 == 0x2f) {
        uVar16 = 0x20;
        do {
          if (*(char *)((int)puVar12 + (uVar16 - 1)) != '\0') break;
          if (*(char *)((int)puVar12 + (uVar16 - 2)) != '\0') {
            uVar16 = uVar16 - 1;
            break;
          }
          uVar16 = uVar16 - 2;
        } while (0 < (int)uVar16);
        puVar9 = (undefined1 *)FUN_001aa5bc(param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x1c))
        ;
        puVar5 = puVar9;
        if ((puVar9 != (undefined1 *)0x0) && (uVar16 != 0)) {
          if (param_3 < puVar9 + uVar16 + 2) {
            return (undefined1 *)0x0;
          }
          *puVar9 = 0;
          puVar9[1] = (char)uVar16;
          puVar5 = puVar9 + 2;
          if (0 < (int)uVar16) {
            puVar14 = (undefined2 *)(iVar11 + 3);
            if ((uVar16 & 1) != 0) {
              *puVar5 = *(undefined1 *)puVar12;
              puVar5 = puVar9 + 3;
              puVar14 = puVar12;
            }
            iVar11 = (int)uVar16 >> 1;
            if (iVar11 != 0) {
              do {
                puVar9 = (undefined1 *)((int)puVar14 + 1);
                puVar14 = puVar14 + 1;
                *puVar5 = *puVar9;
                puVar5[1] = *(undefined1 *)puVar14;
                puVar5 = puVar5 + 2;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              return puVar5;
            }
          }
        }
        return puVar5;
      }
      if (uVar1 < 0x30) {
        if (uVar1 == 0x27) goto switchD_001aaab2_caseD_2;
        if (uVar1 == 0x29) {
          local_34 = 0;
          psVar7 = (short *)(iVar11 + (uint)*(ushort *)(param_4 + 0xc) + 4);
          psVar13 = (short *)(iVar11 + 4);
          if (0x17 < (int)psVar7 - (int)psVar13) {
            psVar15 = (short *)(iVar11 + 10);
            local_40 = (short *)(iVar11 + 0xc);
            local_3c = (short *)(iVar11 + 0x12);
            local_38 = (short *)(iVar11 + 0xe);
            local_58 = (short *)(iVar11 + 0x14);
            psVar17 = (short *)(iVar11 + 0x10);
            FUN_0016db2c();
            iVar6 = extraout_r1;
            do {
              sVar3 = *psVar13;
              if (sVar3 == 1) {
                iVar8 = 0x16;
              }
              else if (sVar3 == 2) {
                iVar8 = 8;
              }
              else {
                iVar8 = 0x10000;
                if (sVar3 == 4) {
                  if (((*psVar15 == *psVar17) && (*local_40 == *local_3c)) &&
                     (*local_38 == *local_58)) {
                    iVar8 = 0xc;
                  }
                  else {
                    iVar8 = 0x12;
                  }
                }
              }
              psVar13 = psVar13 + 0xc;
              local_34 = iVar8 + local_34;
              psVar15 = psVar15 + 0xc;
              local_40 = local_40 + 0xc;
              psVar17 = psVar17 + 0xc;
              local_3c = local_3c + 0xc;
              local_38 = local_38 + 0xc;
              local_58 = local_58 + 0xc;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (param_3 < param_2 + local_34) {
            FUN_00024642(0,s_ERROR__putOptRData___out_of_spac_001aaf5c);
            return (undefined1 *)0x0;
          }
          psVar13 = (short *)(iVar11 + 4);
          if (psVar13 < psVar7) {
            do {
              sVar3 = *psVar13;
              if (sVar3 == 1) {
                uVar16 = 0x16;
              }
              else if (sVar3 == 2) {
                uVar16 = 8;
              }
              else {
                uVar16 = 0x10000;
                if (sVar3 == 4) {
                  if (((psVar13[3] == psVar13[6]) && (psVar13[4] == psVar13[7])) &&
                     (psVar13[5] == psVar13[8])) {
                    uVar16 = 0xc;
                  }
                  else {
                    uVar16 = 0x12;
                  }
                }
              }
              *param_2 = (char)((ushort)sVar3 >> 8);
              param_2[1] = (char)sVar3;
              param_2[2] = (char)(uVar16 - 4 >> 8);
              param_2[3] = (char)(uVar16 - 4);
              sVar3 = *psVar13;
              puVar5 = param_2 + 4;
              if (sVar3 == 1) {
                sVar3 = psVar13[2];
                *puVar5 = (char)((ushort)sVar3 >> 8);
                param_2[5] = (char)sVar3;
                sVar3 = psVar13[3];
                param_2[6] = (char)((ushort)sVar3 >> 8);
                param_2[7] = (char)sVar3;
                sVar3 = psVar13[4];
                param_2[8] = (char)((ushort)sVar3 >> 8);
                param_2[9] = (char)sVar3;
                FUN_001952f0(param_2 + 10,psVar13 + 6,8);
                uVar4 = *(undefined3 *)(psVar13 + 10);
                uVar10 = *(undefined4 *)(psVar13 + 10);
                param_2[0x12] = *(undefined1 *)((int)psVar13 + 0x17);
                param_2[0x13] = (char)((uint)uVar10 >> 0x10);
                param_2[0x14] = (char)((uint)uVar10 >> 8);
                param_2[0x15] = (char)uVar4;
                puVar5 = param_2 + 0x16;
              }
              else if (sVar3 == 2) {
                uVar4 = *(undefined3 *)(psVar13 + 2);
                uVar10 = *(undefined4 *)(psVar13 + 2);
                *puVar5 = *(undefined1 *)((int)psVar13 + 7);
                param_2[5] = (char)((uint)uVar10 >> 0x10);
                param_2[6] = (char)((uint)uVar10 >> 8);
                param_2[7] = (char)uVar4;
                puVar5 = param_2 + 8;
              }
              else if (sVar3 == 4) {
                *puVar5 = (char)psVar13[2];
                param_2[5] = *(undefined1 *)((int)psVar13 + 5);
                FUN_001952f0(param_2 + 6,psVar13 + 3,6);
                puVar5 = param_2 + 0xc;
                if (0x11 < uVar16) {
                  FUN_001952f0(puVar5,psVar13 + 6,6);
                  puVar5 = param_2 + 0x12;
                  if (0x12 < uVar16) {
                    FUN_001952f0(puVar5,psVar13 + 9,uVar16 - 0x12);
                    puVar5 = puVar5 + (uVar16 - 0x12);
                  }
                }
              }
              psVar13 = psVar13 + 0xc;
              param_2 = puVar5;
            } while (psVar13 < psVar7);
            return puVar5;
          }
          return param_2;
        }
      }
      else if ((uVar1 == 0x31) || (uVar1 == 0xfa)) goto switchD_001aaab2_caseD_a;
    }
switchD_001aaab2_caseD_0:
    uVar1 = *(ushort *)(param_4 + 0xc);
joined_r0x001aabe8:
    if (param_3 < param_2 + uVar1) {
      return (undefined1 *)0x0;
    }
    FUN_001952f0(param_2,puVar12);
    return param_2 + *(ushort *)(param_4 + 0xc);
  }
  switch(uVar1) {
  default:
    goto switchD_001aaab2_caseD_0;
  case 1:
    if (*(short *)(param_4 + 0xc) != 4) {
      return (undefined1 *)0x0;
    }
    if (param_2 + 4 <= param_3) {
      *param_2 = *(undefined1 *)puVar12;
      param_2[1] = *(undefined1 *)(iVar11 + 5);
      param_2[2] = *(undefined1 *)(iVar11 + 6);
      param_2[3] = *(undefined1 *)(iVar11 + 7);
      return param_2 + 4;
    }
    return (undefined1 *)0x0;
  case 2:
  case 5:
  case 0xc:
switchD_001aaab2_caseD_2:
    puVar5 = (undefined1 *)FUN_001aa5bc(param_1,param_2,param_3,puVar12);
    return puVar5;
  case 6:
    iVar6 = FUN_001aa5bc(param_1,param_2,param_3,puVar12);
    if (iVar6 == 0) {
      return (undefined1 *)0x0;
    }
    puVar5 = (undefined1 *)FUN_001aa5bc(param_1,iVar6,param_3,iVar11 + 0x104);
    bVar18 = puVar5 == (undefined1 *)0x0;
    break;
  case 10:
  case 0xd:
  case 0x10:
  case 0x13:
    goto switchD_001aaab2_caseD_a;
  case 0xf:
  case 0x12:
    goto switchD_001aaab2_caseD_f;
  case 0x11:
    iVar6 = FUN_001aa5bc(param_1,param_2,param_3,puVar12);
    bVar18 = iVar6 == 0;
    puVar5 = (undefined1 *)0x0;
    if (!bVar18) {
      puVar5 = (undefined1 *)FUN_001aa5bc(param_1,iVar6,param_3,iVar11 + 0x104);
      return puVar5;
    }
  }
LAB_001aab64:
  if (bVar18) {
    return (undefined1 *)0x0;
  }
  bVar19 = param_3 <= puVar5 + 0x14;
  bVar18 = puVar5 + 0x14 == param_3;
LAB_001aab6e:
  if (bVar19 && !bVar18) {
    return (undefined1 *)0x0;
  }
  uVar10 = *(undefined4 *)(iVar11 + 0x204);
  *puVar5 = (char)((uint)uVar10 >> 0x18);
  puVar5[1] = (char)((uint)uVar10 >> 0x10);
  puVar5[2] = (char)((uint)uVar10 >> 8);
  puVar5[3] = (char)uVar10;
  uVar10 = *(undefined4 *)(iVar11 + 0x208);
  puVar5[4] = (char)((uint)uVar10 >> 0x18);
  puVar5[5] = (char)((uint)uVar10 >> 0x10);
  puVar5[6] = (char)((uint)uVar10 >> 8);
  puVar5[7] = (char)uVar10;
  uVar10 = *(undefined4 *)(iVar11 + 0x20c);
  puVar5[8] = (char)((uint)uVar10 >> 0x18);
  puVar5[9] = (char)((uint)uVar10 >> 0x10);
  puVar5[10] = (char)((uint)uVar10 >> 8);
  puVar5[0xb] = (char)uVar10;
  uVar10 = *(undefined4 *)(iVar11 + 0x210);
  puVar5[0xc] = (char)((uint)uVar10 >> 0x18);
  puVar5[0xd] = (char)((uint)uVar10 >> 0x10);
  puVar5[0xe] = (char)((uint)uVar10 >> 8);
  puVar5[0xf] = (char)uVar10;
  uVar10 = *(undefined4 *)(iVar11 + 0x214);
  puVar5[0x10] = (char)((uint)uVar10 >> 0x18);
  puVar5[0x11] = (char)((uint)uVar10 >> 0x10);
  puVar5[0x12] = (char)((uint)uVar10 >> 8);
  puVar5[0x13] = (char)uVar10;
  return puVar5 + 0x14;
}

