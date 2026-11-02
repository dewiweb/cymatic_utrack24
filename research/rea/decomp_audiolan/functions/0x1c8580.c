// rea decompile_all
// name: FUN_001c8580
// address: 0x1c8580
// body: available
// range: 0x1c8580-0x1c8cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c8580(undefined4 *param_1,int param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *extraout_r3;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(iVar3 + 8);
  bVar15 = *param_3 == iVar5;
  if (bVar15) {
    iVar5 = *(int *)param_4;
  }
  pbVar10 = param_4;
  if ((bVar15 && iVar5 == iVar3) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar5 = *(int *)(iVar3 + 4);
    while (iVar5 != 0) {
      FUN_001c8cdc(param_2,*(undefined4 *)(iVar5 + 0xc));
      iVar3 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_2 + 4);
      FUN_001d9b00(iVar5 + 0x20);
      *(int *)(param_2 + 4) = iVar5;
      iVar5 = iVar3;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
    return;
  }
LAB_001c8634:
  pbVar6 = (byte *)*param_3;
  if (pbVar6 == *(byte **)param_4) {
    return;
  }
  iVar5 = *(int *)(pbVar6 + 0xc);
  if (iVar5 == 0) {
    for (iVar5 = *(int *)(pbVar6 + 4); pbVar10 = (byte *)*param_3,
        pbVar10 == *(byte **)(iVar5 + 0xc); iVar5 = *(int *)(iVar5 + 4)) {
      *param_3 = iVar5;
    }
    if (*(int *)(*param_3 + 0xc) != iVar5) {
      *param_3 = iVar5;
    }
  }
  else {
    *param_3 = iVar5;
    while (iVar5 = *(int *)(iVar5 + 8), iVar5 != 0) {
      *param_3 = iVar5;
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x10);
  if (pbVar6 != pbVar4) {
    pbVar13 = *(byte **)(pbVar6 + 0xc);
    if (*(byte **)(pbVar6 + 0xc) == (byte *)0x0) {
      pbVar13 = *(byte **)(pbVar6 + 4);
      pbVar4 = pbVar6;
      while (pbVar8 = pbVar13, pbVar4 == *(byte **)(pbVar8 + 0xc)) {
        pbVar4 = pbVar8;
        pbVar13 = *(byte **)(pbVar8 + 4);
      }
      if (*(byte **)(pbVar4 + 0xc) != pbVar8) {
        pbVar4 = pbVar8;
      }
    }
    else {
      do {
        pbVar4 = pbVar13;
        pbVar13 = *(byte **)(pbVar4 + 8);
      } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
    }
    pbVar8 = *(byte **)(pbVar6 + 8);
    pbVar13 = pbVar6;
    if (pbVar8 == (byte *)0x0) {
      pbVar14 = *(byte **)(pbVar6 + 0xc);
      if (*(byte **)(pbVar6 + 0xc) != (byte *)0x0) goto LAB_001c8724;
      pbVar14 = *(byte **)(pbVar6 + 4);
      if (*(byte **)(param_2 + 0x10) == pbVar14) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar14;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar14;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar14 + 8) == pbVar6) {
        pbVar14[8] = 0;
        pbVar14[9] = 0;
        pbVar14[10] = 0;
        pbVar14[0xb] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar6) {
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar14;
        }
      }
      else {
        pbVar14[0xc] = 0;
        pbVar14[0xd] = 0;
        pbVar14[0xe] = 0;
        pbVar14[0xf] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar6) {
          *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar14;
        }
      }
    }
    else {
      pbVar12 = *(byte **)(pbVar6 + 0xc);
      pbVar14 = pbVar8;
      if (*(byte **)(pbVar6 + 0xc) != (byte *)0x0) {
        do {
          pbVar13 = pbVar12;
          pbVar12 = *(byte **)(pbVar13 + 8);
        } while (*(byte **)(pbVar13 + 8) != (byte *)0x0);
        pbVar14 = *(byte **)(pbVar13 + 0xc);
      }
LAB_001c8724:
      if (pbVar13 == pbVar6) {
        *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar13 + 4);
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar14;
        }
        else {
          iVar5 = *(int *)(pbVar6 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar6) {
            *(byte **)(iVar5 + 8) = pbVar14;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar14;
          }
        }
        pbVar10 = *(byte **)(param_2 + 0x10);
        if (*(byte **)(pbVar10 + 8) == pbVar6) {
          pbVar8 = pbVar14;
          if (*(int *)(pbVar6 + 0xc) == 0) {
            *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(pbVar6 + 4);
          }
          else {
            do {
              pbVar12 = pbVar8;
              pbVar8 = *(byte **)(pbVar12 + 8);
            } while (pbVar8 != (byte *)0x0);
            *(byte **)(pbVar10 + 8) = pbVar12;
          }
        }
        iVar5 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar5 + 0xc) == pbVar6) {
          pbVar8 = pbVar14;
          if (*(int *)(pbVar6 + 8) == 0) {
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pbVar6 + 4);
          }
          else {
            do {
              pbVar6 = pbVar8;
              pbVar8 = *(byte **)(pbVar6 + 0xc);
            } while (pbVar8 != (byte *)0x0);
            *(byte **)(iVar5 + 0xc) = pbVar6;
          }
        }
      }
      else {
        *(byte **)(pbVar8 + 4) = pbVar13;
        *(undefined4 *)(pbVar13 + 8) = *(undefined4 *)(pbVar6 + 8);
        if (*(byte **)(pbVar6 + 0xc) == pbVar13) {
          if (pbVar14 != (byte *)0x0) {
            *(byte **)(pbVar14 + 4) = pbVar13;
          }
        }
        else {
          if (pbVar14 != (byte *)0x0) {
            *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar13 + 4);
          }
          *(byte **)(*(int *)(pbVar13 + 4) + 8) = pbVar14;
          *(undefined4 *)(pbVar13 + 0xc) = *(undefined4 *)(pbVar6 + 0xc);
          *(byte **)(*(int *)(pbVar6 + 0xc) + 4) = pbVar13;
        }
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar13;
        }
        else {
          iVar5 = *(int *)(pbVar6 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar6) {
            *(byte **)(iVar5 + 8) = pbVar13;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar13;
          }
        }
        *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar6 + 4);
        bVar1 = *pbVar13;
        if (pbVar14 == (byte *)0x0) {
          pbVar14 = pbVar13;
        }
        *pbVar13 = *pbVar6;
        *pbVar6 = bVar1;
        pbVar13 = pbVar6;
      }
    }
    pbVar6 = *(byte **)(param_2 + 0x10);
    bVar15 = pbVar6 != pbVar14;
    if (bVar15) {
      pbVar6 = (byte *)(uint)*pbVar13;
    }
    if (bVar15 && pbVar6 != (byte *)0x0) {
      do {
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar14) || (*pbVar14 != 1))
          goto LAB_001c8918;
          pbVar8 = *(byte **)(pbVar14 + 4);
          pbVar6 = *(byte **)(pbVar8 + 8);
          if (pbVar6 == pbVar14) break;
          if (pbVar6 == (byte *)0x0) goto LAB_001c8bd0;
          uVar7 = (uint)*pbVar6;
          if (uVar7 == 0) {
            *pbVar6 = 1;
            **(undefined1 **)(pbVar14 + 4) = 0;
            iVar5 = *(int *)(pbVar14 + 4);
            uVar7 = *(uint *)(iVar5 + 8);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(uVar7 + 0xc);
            if (*(int *)(uVar7 + 0xc) != 0) {
              *(int *)(*(int *)(uVar7 + 0xc) + 4) = iVar5;
            }
            *(undefined4 *)(uVar7 + 4) = *(undefined4 *)(iVar5 + 4);
            pbVar10 = *(byte **)(param_2 + 0x10);
            if (*(int *)(pbVar10 + 4) == iVar5) {
              *(uint *)(pbVar10 + 4) = uVar7;
            }
            else {
              pbVar10 = *(byte **)(iVar5 + 4);
              if (*(int *)(pbVar10 + 0xc) == iVar5) {
                *(uint *)(pbVar10 + 0xc) = uVar7;
              }
              else {
                *(uint *)(pbVar10 + 8) = uVar7;
              }
            }
            *(int *)(uVar7 + 0xc) = iVar5;
            *(uint *)(iVar5 + 4) = uVar7;
            pbVar6 = *(byte **)(*(int *)(pbVar14 + 4) + 8);
            if (pbVar6 == (byte *)0x0) goto LAB_001c8a84;
          }
          pbVar10 = *(byte **)(pbVar6 + 0xc);
          if (pbVar10 != (byte *)0x0) {
            uVar7 = (uint)*pbVar10;
          }
          if (pbVar10 != (byte *)0x0 && uVar7 != 1) {
LAB_001c8b44:
            pcVar11 = *(char **)(pbVar6 + 8);
            cVar2 = '\0';
            if (pcVar11 != (char *)0x0) {
              cVar2 = *pcVar11;
            }
            if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar10 != (byte *)0x0) {
                *pbVar10 = 1;
              }
              *pbVar6 = 0;
              iVar5 = *(int *)(pbVar6 + 0xc);
              *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(iVar5 + 8);
              if (*(int *)(iVar5 + 8) != 0) {
                *(byte **)(*(int *)(iVar5 + 8) + 4) = pbVar6;
              }
              *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar6 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
              }
              else {
                iVar3 = *(int *)(pbVar6 + 4);
                if (*(byte **)(iVar3 + 8) == pbVar6) {
                  *(int *)(iVar3 + 8) = iVar5;
                }
                else {
                  *(int *)(iVar3 + 0xc) = iVar5;
                }
              }
              *(byte **)(iVar5 + 8) = pbVar6;
              *(int *)(pbVar6 + 4) = iVar5;
              pbVar6 = *(byte **)(*(int *)(pbVar14 + 4) + 8);
              if (pbVar6 == (byte *)0x0) goto LAB_001c8918;
            }
            *pbVar6 = **(byte **)(pbVar14 + 4);
            **(undefined1 **)(pbVar14 + 4) = 1;
            if (*(undefined1 **)(pbVar6 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar6 + 8) = 1;
            }
            iVar5 = *(int *)(pbVar14 + 4);
            iVar3 = *(int *)(iVar5 + 8);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar5;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
            if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
            }
            else {
              iVar9 = *(int *)(iVar5 + 4);
              if (*(int *)(iVar9 + 0xc) == iVar5) {
                *(int *)(iVar9 + 0xc) = iVar3;
              }
              else {
                *(int *)(iVar9 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar5;
            *(int *)(iVar5 + 4) = iVar3;
            goto LAB_001c8918;
          }
          pcVar11 = *(char **)(pbVar6 + 8);
          cVar2 = '\0';
          if (pcVar11 != (char *)0x0) {
            cVar2 = *pcVar11;
          }
          if (pcVar11 != (char *)0x0 && cVar2 != '\x01') goto LAB_001c8b44;
LAB_001c8c64:
          *pbVar6 = 0;
LAB_001c8aa4:
          pbVar14 = *(byte **)(pbVar14 + 4);
        }
        pbVar6 = *(byte **)(pbVar8 + 0xc);
        if (pbVar6 != (byte *)0x0) goto code_r0x001c8968;
LAB_001c8bd0:
        *pbVar14 = 0;
        pbVar14 = pbVar8;
      } while( true );
    }
    goto LAB_001c891c;
  }
  goto LAB_001c8944;
code_r0x001c8968:
  if (*pbVar6 == 0) {
    *pbVar6 = 1;
    **(undefined1 **)(pbVar14 + 4) = 0;
    iVar5 = *(int *)(pbVar14 + 4);
    iVar3 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
    if (*(int *)(iVar3 + 8) != 0) {
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar5;
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
    pbVar10 = *(byte **)(param_2 + 0x10);
    if (*(int *)(pbVar10 + 4) == iVar5) {
      *(int *)(pbVar10 + 4) = iVar3;
    }
    else {
      pbVar10 = *(byte **)(iVar5 + 4);
      if (*(int *)(pbVar10 + 8) == iVar5) {
        *(int *)(pbVar10 + 8) = iVar3;
      }
      else {
        *(int *)(pbVar10 + 0xc) = iVar3;
      }
    }
    *(int *)(iVar3 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar3;
    pbVar6 = *(byte **)(*(int *)(pbVar14 + 4) + 0xc);
    if (pbVar6 != (byte *)0x0) goto LAB_001c8974;
LAB_001c8a84:
    *pbVar14 = 0;
    goto LAB_001c8aa4;
  }
LAB_001c8974:
  pbVar8 = *(byte **)(pbVar6 + 8);
  if (pbVar8 != (byte *)0x0) {
    pbVar10 = (byte *)(uint)*pbVar8;
  }
  if (pbVar8 == (byte *)0x0 || pbVar10 == (byte *)0x1) {
    pbVar12 = *(byte **)(pbVar6 + 0xc);
    pbVar10 = (byte *)0x0;
    if (pbVar12 != (byte *)0x0) {
      pbVar10 = (byte *)(uint)*pbVar12;
    }
    if (pbVar12 == (byte *)0x0 || pbVar10 == (byte *)0x1) goto LAB_001c8c64;
  }
  pcVar11 = *(char **)(pbVar6 + 0xc);
  cVar2 = '\0';
  if (pcVar11 != (char *)0x0) {
    cVar2 = *pcVar11;
  }
  if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
    if (pbVar8 != (byte *)0x0) {
      *pbVar8 = 1;
    }
    *pbVar6 = 0;
    iVar5 = *(int *)(pbVar6 + 8);
    *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(byte **)(*(int *)(iVar5 + 0xc) + 4) = pbVar6;
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar6 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
    }
    else {
      iVar3 = *(int *)(pbVar6 + 4);
      if (*(byte **)(iVar3 + 0xc) == pbVar6) {
        *(int *)(iVar3 + 0xc) = iVar5;
      }
      else {
        *(int *)(iVar3 + 8) = iVar5;
      }
    }
    *(byte **)(iVar5 + 0xc) = pbVar6;
    *(int *)(pbVar6 + 4) = iVar5;
    pbVar6 = *(byte **)(*(int *)(pbVar14 + 4) + 0xc);
    if (pbVar6 == (byte *)0x0) goto LAB_001c8918;
  }
  *pbVar6 = **(byte **)(pbVar14 + 4);
  **(undefined1 **)(pbVar14 + 4) = 1;
  if (*(undefined1 **)(pbVar6 + 0xc) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar6 + 0xc) = 1;
  }
  iVar3 = *(int *)(pbVar14 + 4);
  iVar5 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 8);
  if (*(int *)(iVar5 + 8) != 0) {
    *(int *)(*(int *)(iVar5 + 8) + 4) = iVar3;
  }
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar3 + 4);
  if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar3) {
    *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
  }
  else {
    iVar9 = *(int *)(iVar3 + 4);
    if (*(int *)(iVar9 + 8) == iVar3) {
      *(int *)(iVar9 + 8) = iVar5;
    }
    else {
      *(int *)(iVar9 + 0xc) = iVar5;
    }
  }
  *(int *)(iVar5 + 8) = iVar3;
  *(int *)(iVar3 + 4) = iVar5;
LAB_001c8918:
  *pbVar14 = 1;
LAB_001c891c:
  *(undefined4 *)(pbVar13 + 0xc) = *(undefined4 *)(param_2 + 4);
  FUN_001d9b00(pbVar13 + 0x20);
  *(byte **)(param_2 + 4) = pbVar13;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  pbVar10 = extraout_r3;
LAB_001c8944:
  *param_1 = pbVar4;
  goto LAB_001c8634;
}

