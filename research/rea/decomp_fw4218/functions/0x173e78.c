// rea decompile_all
// name: FUN_00173e78
// address: 0x173e78
// body: available
// range: 0x173e78-0x173e95 inclusive
// range: 0x173ea6-0x173ee1 inclusive
// range: 0x173eea-0x17427f inclusive
// range: 0x1742c4-0x174747 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1746da to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_00173e78(int param_1,byte *param_2,uint *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  uint *local_4c;
  uint *local_40;
  
  switch((param_4 & 0xff) >> 4) {
  case 0:
    pcVar4 = DAT_00174280;
    break;
  case 1:
    pcVar4 = DAT_00174284;
    break;
  case 2:
    pcVar4 = DAT_00174288;
    break;
  case 3:
    pcVar4 = DAT_0017428c;
    break;
  case 4:
  case 6:
    pcVar4 = DAT_00174290;
    break;
  case 5:
  case 7:
    pcVar4 = DAT_00174294;
    break;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    pcVar4 = DAT_00174298;
    break;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    pcVar4 = DAT_0017429c;
    break;
  default:
    goto switchD_00173e94_default;
  }
  switch((param_4 & 0x3f) >> 4 | param_4 >> 9 & 4) {
  case 0:
    pcVar5 = DAT_001742a0;
    break;
  case 1:
    pcVar5 = DAT_001742a4;
    break;
  case 2:
    pcVar5 = DAT_001742a8;
    break;
  case 3:
    pcVar5 = DAT_001742ac;
    break;
  case 4:
    pcVar5 = DAT_001742b0;
    break;
  case 5:
    pcVar5 = DAT_001742b4;
    break;
  case 6:
    pcVar5 = DAT_001742b8;
    break;
  case 7:
    pcVar5 = DAT_001742bc;
    break;
  default:
switchD_00173e94_default:
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  local_40 = param_3;
  if (*param_2 != 0) {
LAB_00173f28:
    do {
      pbVar11 = param_2;
      if (*pbVar11 != 0x3c) {
        param_2 = pbVar11;
        if (-1 < (int)((uint)*(byte *)(DAT_001742c0 + (uint)*pbVar11) << 0x1c)) {
LAB_00173f48:
          if (*param_2 == 0) goto LAB_00174044;
          if (-1 < (int)(param_4 << 0x14)) goto LAB_00173f54;
LAB_00173f56:
          if (local_40[1] == 0 && (param_4 & 0x1000) == 0) {
            while( true ) {
              if (*param_2 == 0) goto LAB_00174700;
              pbVar11 = param_2;
              if (*param_2 == 0x3c) break;
              param_2 = param_2 + 1;
            }
            goto LAB_0017473e;
          }
          iVar6 = FUN_001748fa(local_40,param_1,3);
          if (iVar6 == 0) goto LAB_00174048;
          *(byte **)(iVar6 + 0xc) = param_2;
          param_2 = (byte *)(*pcVar5)(param_2);
          local_40 = *(uint **)(iVar6 + 4);
          if (*param_2 != 0) goto LAB_00173f82;
          break;
        }
        do {
          param_2 = param_2 + 1;
        } while ((int)((uint)*(byte *)(DAT_001742c0 + (uint)*param_2) << 0x1c) < 0);
        if (*param_2 != 0x3c) goto LAB_00173f48;
LAB_00174044:
        if (pbVar11 == param_2) goto switchD_00173e94_default;
        if (((param_4 & 0x408) == 0) || ((int)(param_4 << 0x14) < 0)) goto LAB_001746f8;
        if ((int)(param_4 << 0x15) < 0) {
          if (*param_2 != 0x3c) goto LAB_001746f8;
          if ((param_2[1] != 0x2f) || (local_40[4] != 0)) goto LAB_00173f28;
        }
LAB_00173f54:
        param_2 = pbVar11;
        goto LAB_00173f56;
      }
LAB_0017473e:
      param_2 = pbVar11 + 1;
LAB_00173f82:
      uVar7 = (uint)*param_2;
      if ((int)((uint)*(byte *)(DAT_001742c0 + uVar7) << 0x18) < 0) {
        local_40 = (uint *)FUN_001748fa(local_40,param_1,2);
        if (local_40 == (uint *)0x0) {
LAB_00174048:
          *(byte **)(param_1 + 8) = param_2;
          *(undefined1 *)(param_1 + 0xc) = 3;
          return (byte *)0x0;
        }
        local_40[2] = (uint)param_2;
        iVar8 = DAT_001742c0;
        bVar2 = *(byte *)(DAT_001742c0 + (uint)*param_2);
        pbVar11 = param_2;
        while ((int)((uint)bVar2 << 0x19) < 0) {
          pbVar11 = pbVar11 + 1;
          bVar2 = *(byte *)(DAT_001742c0 + (uint)*pbVar11);
        }
        uVar7 = (uint)*pbVar11;
        *pbVar11 = 0;
        param_2 = pbVar11 + 1;
        if (uVar7 != 0x3e) {
          iVar6 = DAT_001742c0;
          if ((int)((uint)*(byte *)(iVar8 + uVar7) << 0x1c) < 0) {
LAB_00173fc6:
            while( true ) {
              bVar2 = *(byte *)(iVar6 + (uint)*param_2);
              while ((int)((uint)bVar2 << 0x1c) < 0) {
                param_2 = param_2 + 1;
                bVar2 = *(byte *)(iVar6 + (uint)*param_2);
              }
              if (-1 < (int)((uint)*(byte *)(iVar6 + (uint)*param_2) << 0x18)) break;
              iVar8 = FUN_00176000(local_40,param_1);
              if (iVar8 == 0) goto LAB_00174048;
              *(byte **)(iVar8 + 4) = param_2;
              bVar2 = *(byte *)(iVar6 + (uint)*param_2);
              while ((int)((uint)bVar2 << 0x19) < 0) {
                param_2 = param_2 + 1;
                bVar2 = *(byte *)(iVar6 + (uint)*param_2);
              }
              uVar7 = (uint)*param_2;
              if (uVar7 == 0) goto LAB_00174078;
              *param_2 = 0;
              pbVar11 = param_2 + 1;
              if (param_2[1] == 0) {
LAB_00174088:
                *(byte **)(param_1 + 8) = pbVar11;
                *(undefined1 *)(param_1 + 0xc) = 0xc;
                return (byte *)0x0;
              }
              if ((int)((uint)*(byte *)(iVar6 + uVar7) << 0x1c) < 0) {
                if ((int)((uint)*(byte *)(iVar6 + (uint)param_2[1]) << 0x1c) < 0) {
                  do {
                    pbVar11 = pbVar11 + 1;
                  } while ((int)((uint)*(byte *)(iVar6 + (uint)*pbVar11) << 0x1c) < 0);
                  if (*pbVar11 == 0) goto LAB_00174088;
                }
                uVar7 = (uint)*pbVar11;
                pbVar11 = pbVar11 + 1;
              }
              if (uVar7 != 0x3d) goto LAB_00174088;
              bVar2 = *(byte *)(iVar6 + (uint)*pbVar11);
              while ((int)((uint)bVar2 << 0x1c) < 0) {
                pbVar11 = pbVar11 + 1;
                bVar2 = *(byte *)(iVar6 + (uint)*pbVar11);
              }
              if ((*pbVar11 != 0x22) && (*pbVar11 != 0x27)) goto LAB_00174088;
              *(byte **)(iVar8 + 8) = pbVar11 + 1;
              param_2 = (byte *)(*pcVar4)();
              if (param_2 == (byte *)0x0) {
                pbVar11 = *(byte **)(iVar8 + 8);
                goto LAB_00174088;
              }
              if ((int)((uint)*(byte *)(iVar6 + (uint)*param_2) << 0x18) < 0) {
LAB_00174078:
                *(byte **)(param_1 + 8) = param_2;
                *(undefined1 *)(param_1 + 0xc) = 0xc;
                return (byte *)0x0;
              }
            }
            bVar2 = *param_2;
            if (bVar2 != 0x2f) {
              if (bVar2 == 0x3e) goto LAB_001741ae;
              if ((bVar2 != 0) || (param_5 != 0x3e)) goto LAB_00174110;
              break;
            }
            pbVar11 = param_2 + 1;
            if (*pbVar11 != 0x3e) {
              param_2 = pbVar11;
              if ((*pbVar11 != 0) || (param_5 != 0x3e)) {
LAB_00174110:
                *(byte **)(param_1 + 8) = param_2;
                *(undefined1 *)(param_1 + 0xc) = 0xb;
                return (byte *)0x0;
              }
              local_40 = (uint *)local_40[1];
              break;
            }
            local_40 = (uint *)local_40[1];
            param_2 = param_2 + 2;
          }
          else if (uVar7 == 0x2f) {
            bVar2 = *param_2;
            if ((bVar2 != 0x3e) && ((bVar2 != 0 || (param_5 != 0x3e)))) goto LAB_00174110;
            local_40 = (uint *)local_40[1];
            param_2 = param_2 + (bVar2 == 0x3e);
          }
          else if ((uVar7 != 0) || (param_2 = pbVar11, param_5 != 0x3e)) goto LAB_00174110;
        }
      }
      else if (uVar7 == 0x2f) {
        param_2 = param_2 + 1;
        pbVar11 = (byte *)local_40[2];
        if (pbVar11 == (byte *)0x0) goto LAB_00174708;
        bVar2 = *(byte *)(DAT_001742c0 + (uint)*param_2);
        while ((int)((uint)bVar2 << 0x19) < 0) {
          bVar2 = *param_2;
          bVar1 = *pbVar11;
          param_2 = param_2 + 1;
          pbVar11 = pbVar11 + 1;
          if (bVar2 != bVar1) goto LAB_00174708;
          bVar2 = *(byte *)(DAT_001742c0 + (uint)*param_2);
        }
        if (*pbVar11 != 0) {
          if (((*param_2 == 0) && (*pbVar11 == param_5)) && (pbVar11[1] == 0)) {
LAB_00174196:
            *(byte **)(param_1 + 8) = param_2;
            *(undefined1 *)(param_1 + 0xc) = 0xd;
            return (byte *)0x0;
          }
          goto LAB_00174708;
        }
        local_40 = (uint *)local_40[1];
        bVar2 = *(byte *)(DAT_001742c0 + (uint)*param_2);
        while ((int)((uint)bVar2 << 0x1c) < 0) {
          param_2 = param_2 + 1;
          bVar2 = *(byte *)(DAT_001742c0 + (uint)*param_2);
        }
        if (*param_2 == 0) {
          if (param_5 != 0x3e) goto LAB_00174196;
          break;
        }
        if (*param_2 != 0x3e) goto LAB_00174196;
LAB_001741ae:
        param_2 = param_2 + 1;
      }
      else if (uVar7 == 0x3f) {
        pbVar14 = param_2 + 1;
        uVar7 = (uint)*(byte *)(DAT_001742c0 + (uint)*pbVar14);
        pbVar11 = pbVar14;
        if (-1 < (int)(uVar7 << 0x18)) {
LAB_0017435c:
          *(byte **)(param_1 + 8) = pbVar11;
          *(undefined1 *)(param_1 + 0xc) = 6;
          return (byte *)0x0;
        }
        while ((int)(uVar7 << 0x19) < 0) {
          uVar7 = (uint)*(byte *)(DAT_001742c0 + (uint)pbVar11[1]);
          pbVar11 = pbVar11 + 1;
        }
        if (*pbVar11 == 0) goto LAB_0017435c;
        if (((((*pbVar14 | 0x20) == 0x78) && ((param_2[2] | 0x20) == 0x6d)) &&
            ((param_2[3] | 0x20) == 0x6c)) && (param_2 + 4 == pbVar11)) {
          bVar3 = true;
          uVar7 = param_4 & 0x100;
        }
        else {
          uVar7 = param_4 & 1;
          bVar3 = false;
        }
        if (uVar7 == 0) {
          do {
            if (*pbVar11 == 0x3f) {
              if (pbVar11[1] == 0x3e) {
                iVar6 = 2;
                goto LAB_00174320;
              }
              if ((pbVar11[1] == 0) && (param_5 == 0x3e)) goto LAB_00174358;
            }
            pbVar11 = pbVar11 + 1;
            if (*pbVar11 == 0) goto LAB_0017435c;
          } while( true );
        }
        if (bVar3) {
          if (local_40[1] != 0) goto LAB_0017435c;
          puVar9 = (uint *)FUN_001748fa(local_40,param_1,7);
        }
        else {
          puVar9 = (uint *)FUN_001748fa(local_40,param_1,6);
        }
        if (puVar9 == (uint *)0x0) {
          *(byte **)(param_1 + 8) = pbVar11;
          *(undefined1 *)(param_1 + 0xc) = 3;
          return (byte *)0x0;
        }
        puVar9[2] = (uint)pbVar14;
        bVar2 = *pbVar11;
        param_2 = (byte *)0x0;
        *pbVar11 = 0;
        pbVar11 = pbVar11 + 1;
        if (bVar2 == 0x3f) {
          if (*pbVar11 == 0x3e) {
            iVar6 = 1;
          }
          else {
            if ((*pbVar11 != 0) || (param_5 != 0x3e)) {
              *(byte **)(param_1 + 8) = pbVar11;
              *(undefined1 *)(param_1 + 0xc) = 6;
              goto LAB_00174324;
            }
            iVar6 = 0;
          }
          local_40 = (uint *)puVar9[1];
          param_2 = pbVar11 + iVar6;
        }
        else {
          if (-1 < (int)((uint)*(byte *)(DAT_001742c0 + (uint)bVar2) << 0x1c)) goto LAB_0017435c;
          bVar2 = *(byte *)(DAT_001742c0 + (uint)*pbVar11);
          param_2 = pbVar11;
          while (pbVar11 = param_2, (int)((uint)bVar2 << 0x1c) < 0) {
            param_2 = param_2 + 1;
            bVar2 = *(byte *)(DAT_001742c0 + (uint)*param_2);
          }
          while( true ) {
            if (*pbVar11 == 0) goto LAB_0017435c;
            if ((*pbVar11 == 0x3f) &&
               ((pbVar11[1] == 0x3e || ((pbVar11[1] == 0 && (param_5 == 0x3e)))))) break;
            pbVar11 = pbVar11 + 1;
          }
          if (bVar3) {
            *pbVar11 = 0x2f;
            local_40 = puVar9;
          }
          else {
            puVar9[3] = (uint)param_2;
            local_40 = (uint *)puVar9[1];
            *pbVar11 = 0;
            pbVar11 = pbVar11 + 1;
            if (*pbVar11 == 0x3e) {
LAB_00174358:
              iVar6 = 1;
            }
            else {
              iVar6 = 0;
            }
LAB_00174320:
            param_2 = pbVar11 + iVar6;
          }
        }
LAB_00174324:
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (local_40 == (uint *)0x0) goto switchD_00173e94_default;
        iVar6 = DAT_001742c0;
        if ((*local_40 & 7) == 6) goto LAB_00173fc6;
      }
      else {
        if (uVar7 != 0x21) {
          if ((uVar7 == 0) && (param_5 == 0x3f)) {
            *(byte **)(param_1 + 8) = param_2;
            *(undefined1 *)(param_1 + 0xc) = 6;
            return (byte *)0x0;
          }
          *(byte **)(param_1 + 8) = param_2;
          *(undefined1 *)(param_1 + 0xc) = 5;
          return (byte *)0x0;
        }
        pbVar11 = param_2 + 1;
        local_4c = local_40;
        bVar2 = *pbVar11;
        if (bVar2 == 0x2d) {
          pbVar11 = param_2 + 2;
          if (*pbVar11 != 0x2d) {
LAB_001746a4:
            *(byte **)(param_1 + 8) = pbVar11;
            *(undefined1 *)(param_1 + 0xc) = 7;
            return (byte *)0x0;
          }
          pbVar11 = param_2 + 3;
          if ((int)(param_4 << 0x1e) < 0) {
            local_4c = (uint *)FUN_001748fa(local_40,param_1,5);
            if (local_4c == (uint *)0x0) {
LAB_00174684:
              *(byte **)(param_1 + 8) = pbVar11;
              *(undefined1 *)(param_1 + 0xc) = 3;
              return (byte *)0x0;
            }
            local_4c[3] = (uint)pbVar11;
          }
          iVar6 = DAT_00174748;
          if (((int)(param_4 << 0x1a) < 0) && ((int)(param_4 << 0x1e) < 0)) {
            pbVar14 = (byte *)0x0;
            iVar8 = 0;
LAB_001743c4:
            while( true ) {
              bVar2 = *(byte *)(iVar6 + (uint)*pbVar11);
              pbVar12 = pbVar11;
              while (-1 < (int)((uint)bVar2 << 0x1a)) {
                pbVar12 = pbVar12 + 1;
                bVar2 = *(byte *)(iVar6 + (uint)*pbVar12);
              }
              bVar2 = *pbVar12;
              if (bVar2 != 0xd) break;
              *pbVar12 = 10;
              pbVar11 = pbVar12 + 1;
              if (*pbVar11 == 10) {
                if (pbVar14 != (byte *)0x0) {
                  if (pbVar11 < pbVar14) goto switchD_00173e94_default;
                  FUN_00003ab4((int)pbVar14 - iVar8,pbVar14,(int)pbVar11 - (int)pbVar14);
                }
                pbVar14 = pbVar12 + 2;
                iVar8 = iVar8 + 1;
                pbVar11 = pbVar14;
              }
            }
            if (bVar2 != 0x2d) {
              if (bVar2 == 0) goto LAB_00174452;
LAB_001743e4:
              pbVar11 = pbVar12 + 1;
              goto LAB_001743c4;
            }
            if ((pbVar12[1] != 0x2d) ||
               ((pbVar12[2] != 0x3e && ((pbVar12[2] != 0 || (param_5 != 0x3e))))))
            goto LAB_001743e4;
            pbVar11 = pbVar12;
            if (pbVar14 != (byte *)0x0) {
              if (pbVar12 < pbVar14) goto switchD_00173e94_default;
              FUN_00003ab4((int)pbVar14 - iVar8,pbVar14,(int)pbVar12 - (int)pbVar14);
              pbVar11 = pbVar12 + -iVar8;
            }
            *pbVar11 = 0;
            if (pbVar12[2] == 0x3e) {
              iVar6 = 3;
            }
            else {
              iVar6 = 2;
            }
            pbVar11 = pbVar12 + iVar6;
            if (pbVar11 != (byte *)0x0) goto LAB_0017469e;
LAB_00174452:
            *(uint *)(param_1 + 8) = local_4c[3];
            pbVar11 = (byte *)0x0;
            *(undefined1 *)(param_1 + 0xc) = 7;
            goto LAB_0017469e;
          }
          while( true ) {
            if (*pbVar11 == 0) goto LAB_001746a4;
            if (((*pbVar11 == 0x2d) && (pbVar11[1] == 0x2d)) &&
               ((pbVar11[2] == 0x3e || ((pbVar11[2] == 0 && (param_5 == 0x3e)))))) break;
            pbVar11 = pbVar11 + 1;
          }
          if ((int)(param_4 << 0x1e) < 0) {
            *pbVar11 = 0;
          }
          if (pbVar11[2] != 0x3e) goto LAB_001745e6;
          iVar6 = 3;
LAB_0017449e:
          pbVar11 = pbVar11 + iVar6;
        }
        else if (bVar2 == 0x5b) {
          pbVar11 = param_2 + 2;
          if (((((*pbVar11 == 0x43) && (pbVar11 = param_2 + 3, *pbVar11 == 0x44)) &&
               (pbVar11 = param_2 + 4, *pbVar11 == 0x41)) &&
              ((pbVar11 = param_2 + 5, *pbVar11 == 0x54 && (pbVar11 = param_2 + 6, *pbVar11 == 0x41)
               ))) && (pbVar11 = param_2 + 7, *pbVar11 == 0x5b)) {
            pbVar11 = param_2 + 8;
            if ((int)(param_4 << 0x1d) < 0) {
              iVar6 = FUN_001748fa(local_40,param_1,4);
              if (iVar6 == 0) goto LAB_00174684;
              *(byte **)(iVar6 + 0xc) = pbVar11;
              iVar8 = DAT_00174748;
              if ((int)(param_4 << 0x1a) < 0) {
                pbVar14 = (byte *)0x0;
                iVar13 = 0;
LAB_00174504:
                while( true ) {
                  bVar2 = *(byte *)(iVar8 + (uint)*pbVar11);
                  pbVar12 = pbVar11;
                  while (-1 < (int)((uint)bVar2 << 0x1b)) {
                    pbVar12 = pbVar12 + 1;
                    bVar2 = *(byte *)(iVar8 + (uint)*pbVar12);
                  }
                  bVar2 = *pbVar12;
                  if (bVar2 != 0xd) break;
                  *pbVar12 = 10;
                  pbVar11 = pbVar12 + 1;
                  if (*pbVar11 == 10) {
                    if (pbVar14 != (byte *)0x0) {
                      if (pbVar11 < pbVar14) goto switchD_00173e94_default;
                      FUN_00003ab4((int)pbVar14 - iVar13,pbVar14,(int)pbVar11 - (int)pbVar14);
                    }
                    pbVar14 = pbVar12 + 2;
                    iVar13 = iVar13 + 1;
                    pbVar11 = pbVar14;
                  }
                }
                if (bVar2 != 0x5d) {
                  if (bVar2 == 0) goto LAB_00174580;
LAB_00174524:
                  pbVar11 = pbVar12 + 1;
                  goto LAB_00174504;
                }
                if ((pbVar12[1] != 0x5d) ||
                   ((pbVar12[2] != 0x3e && ((pbVar12[2] != 0 || (param_5 != 0x3e))))))
                goto LAB_00174524;
                pbVar10 = pbVar12;
                if (pbVar14 != (byte *)0x0) {
                  if (pbVar12 < pbVar14) goto switchD_00173e94_default;
                  FUN_00003ab4((int)pbVar14 - iVar13,pbVar14,(int)pbVar12 - (int)pbVar14);
                  pbVar10 = pbVar12 + -iVar13;
                }
                pbVar11 = pbVar12 + 1;
                *pbVar10 = 0;
                if (pbVar11 != (byte *)0x0) goto LAB_001745da;
LAB_00174580:
                *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar6 + 0xc);
                pbVar11 = (byte *)0x0;
                *(undefined1 *)(param_1 + 0xc) = 8;
                goto LAB_0017469e;
              }
              while( true ) {
                if (*pbVar11 == 0) goto LAB_001746ae;
                if (((*pbVar11 == 0x5d) && (pbVar11[1] == 0x5d)) &&
                   ((pbVar11[2] == 0x3e || ((pbVar11[2] == 0 && (param_5 == 0x3e)))))) break;
                pbVar11 = pbVar11 + 1;
              }
              *pbVar11 = 0;
              pbVar11 = pbVar11 + 1;
            }
            else {
              while( true ) {
                if (*pbVar11 == 0) goto LAB_001746ae;
                if (((*pbVar11 == 0x5d) && (pbVar11[1] == 0x5d)) &&
                   ((pbVar11[2] == 0x3e || ((pbVar11[2] == 0 && (param_5 == 0x3e)))))) break;
                pbVar11 = pbVar11 + 1;
              }
              pbVar11 = pbVar11 + 1;
            }
LAB_001745da:
            if (pbVar11[1] == 0x3e) {
LAB_001745e6:
              iVar6 = 2;
            }
            else {
              iVar6 = 1;
            }
            goto LAB_0017449e;
          }
          *(byte **)(param_1 + 8) = pbVar11;
          pbVar11 = (byte *)0x0;
          *(undefined1 *)(param_1 + 0xc) = 8;
        }
        else {
          if (bVar2 == 0x44) {
            if ((((param_2[2] == 0x4f) && (param_2[3] == 0x43)) && (param_2[4] == 0x54)) &&
               (((param_2[5] == 0x59 && (param_2[6] == 0x50)) &&
                ((param_2[7] == 0x45 || ((param_2[7] == 0 && (param_5 == 0x45)))))))) {
              if (local_40[1] != 0) {
                *(byte **)(param_1 + 8) = param_2 + -1;
                *(undefined1 *)(param_1 + 0xc) = 9;
                return (byte *)0x0;
              }
              pbVar14 = param_2 + 8;
              pbVar11 = (byte *)FUN_0017474c(param_1,param_2 + -1,param_5,1);
              if (pbVar11 == (byte *)0x0) {
                return (byte *)0x0;
              }
              if (*pbVar11 == 0) {
                if (param_5 != 0x3e) goto switchD_00173e94_default;
              }
              else {
                if (*pbVar11 != 0x3e) goto switchD_00173e94_default;
                *pbVar11 = 0;
                pbVar11 = pbVar11 + 1;
              }
              if ((int)(param_4 << 0x16) < 0) {
                bVar2 = *(byte *)(DAT_00174748 + (uint)*pbVar14);
                while ((int)((uint)bVar2 << 0x1c) < 0) {
                  pbVar14 = pbVar14 + 1;
                  bVar2 = *(byte *)(DAT_00174748 + (uint)*pbVar14);
                }
                iVar6 = FUN_001748fa(local_40,param_1,8);
                if (iVar6 == 0) goto LAB_00174684;
                *(byte **)(iVar6 + 0xc) = pbVar14;
              }
              goto LAB_0017469e;
            }
          }
          else if (bVar2 == 0) {
            if (param_5 == 0x2d) goto LAB_001746a4;
            if (param_5 == 0x5b) {
LAB_001746ae:
              *(byte **)(param_1 + 8) = pbVar11;
              *(undefined1 *)(param_1 + 0xc) = 8;
              return (byte *)0x0;
            }
          }
          *(byte **)(param_1 + 8) = pbVar11;
          pbVar11 = (byte *)0x0;
          *(undefined1 *)(param_1 + 0xc) = 5;
        }
LAB_0017469e:
        param_2 = pbVar11;
        if (pbVar11 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
LAB_001746f8:
    } while (*param_2 != 0);
  }
LAB_00174700:
  if (local_40 == param_3) {
    return param_2;
  }
LAB_00174708:
  *(byte **)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0xe;
  return (byte *)0x0;
}

