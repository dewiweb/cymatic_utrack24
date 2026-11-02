// rea decompile_all
// name: FUN_001c9104
// address: 0x1c9104
// body: available
// range: 0x1c9104-0x1c9857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c9104(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *extraout_r3;
  int *piVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(iVar3 + 8);
  bVar14 = *param_3 == iVar5;
  if (bVar14) {
    iVar5 = *param_4;
  }
  piVar8 = param_4;
  if ((bVar14 && iVar5 == iVar3) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar5 = *(int *)(iVar3 + 4);
    while (iVar5 != 0) {
      FUN_001c9858(param_2,*(undefined4 *)(iVar5 + 0xc));
      iVar3 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_2 + 4);
      FUN_001d9b00(iVar5 + 0x14);
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
LAB_001c91b8:
  pbVar11 = (byte *)*param_3;
  if (pbVar11 == (byte *)*param_4) {
    return;
  }
  iVar5 = *(int *)(pbVar11 + 0xc);
  if (iVar5 == 0) {
    for (iVar5 = *(int *)(pbVar11 + 4); *param_3 == *(int *)(iVar5 + 0xc);
        iVar5 = *(int *)(iVar5 + 4)) {
      *param_3 = iVar5;
    }
    if (*(int *)(*param_3 + 0xc) != iVar5) {
      *param_3 = iVar5;
    }
  }
  else {
    do {
      *param_3 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    } while (iVar5 != 0);
  }
  pbVar4 = *(byte **)(param_2 + 0x10);
  if (pbVar11 != pbVar4) {
    pbVar12 = *(byte **)(pbVar11 + 0xc);
    if (*(byte **)(pbVar11 + 0xc) == (byte *)0x0) {
      pbVar12 = *(byte **)(pbVar11 + 4);
      pbVar4 = pbVar11;
      while (pbVar6 = pbVar12, pbVar4 == *(byte **)(pbVar6 + 0xc)) {
        pbVar4 = pbVar6;
        pbVar12 = *(byte **)(pbVar6 + 4);
      }
      if (*(byte **)(pbVar4 + 0xc) != pbVar6) {
        pbVar4 = pbVar6;
      }
    }
    else {
      do {
        pbVar4 = pbVar12;
        pbVar12 = *(byte **)(pbVar4 + 8);
      } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
    }
    pbVar6 = *(byte **)(pbVar11 + 8);
    pbVar12 = pbVar11;
    if (pbVar6 == (byte *)0x0) {
      pbVar13 = *(byte **)(pbVar11 + 0xc);
      if (*(byte **)(pbVar11 + 0xc) != (byte *)0x0) goto LAB_001c92a4;
      pbVar13 = *(byte **)(pbVar11 + 4);
      if (*(byte **)(param_2 + 0x10) == pbVar13) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar13;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar13;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar13 + 8) == pbVar11) {
        pbVar13[8] = 0;
        pbVar13[9] = 0;
        pbVar13[10] = 0;
        pbVar13[0xb] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar11) {
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar13;
        }
      }
      else {
        pbVar13[0xc] = 0;
        pbVar13[0xd] = 0;
        pbVar13[0xe] = 0;
        pbVar13[0xf] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar11) {
          *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar13;
        }
      }
    }
    else {
      pbVar10 = *(byte **)(pbVar11 + 0xc);
      pbVar13 = pbVar6;
      if (*(byte **)(pbVar11 + 0xc) != (byte *)0x0) {
        do {
          pbVar12 = pbVar10;
          pbVar10 = *(byte **)(pbVar12 + 8);
        } while (*(byte **)(pbVar12 + 8) != (byte *)0x0);
        pbVar13 = *(byte **)(pbVar12 + 0xc);
      }
LAB_001c92a4:
      if (pbVar12 == pbVar11) {
        *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar12 + 4);
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar13;
        }
        else {
          iVar5 = *(int *)(pbVar11 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar11) {
            *(byte **)(iVar5 + 8) = pbVar13;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar13;
          }
        }
        iVar5 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar5 + 8) == pbVar11) {
          pbVar6 = pbVar13;
          if (*(int *)(pbVar11 + 0xc) == 0) {
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pbVar11 + 4);
          }
          else {
            do {
              pbVar10 = pbVar6;
              pbVar6 = *(byte **)(pbVar10 + 8);
            } while (pbVar6 != (byte *)0x0);
            *(byte **)(iVar5 + 8) = pbVar10;
          }
        }
        piVar8 = *(int **)(param_2 + 0x10);
        if ((byte *)piVar8[3] == pbVar11) {
          pbVar6 = pbVar13;
          if (*(int *)(pbVar11 + 8) == 0) {
            piVar8[3] = *(int *)(pbVar11 + 4);
          }
          else {
            do {
              pbVar11 = pbVar6;
              pbVar6 = *(byte **)(pbVar11 + 0xc);
            } while (pbVar6 != (byte *)0x0);
            piVar8[3] = (int)pbVar11;
          }
        }
      }
      else {
        *(byte **)(pbVar6 + 4) = pbVar12;
        *(undefined4 *)(pbVar12 + 8) = *(undefined4 *)(pbVar11 + 8);
        if (*(byte **)(pbVar11 + 0xc) == pbVar12) {
          if (pbVar13 != (byte *)0x0) {
            *(byte **)(pbVar13 + 4) = pbVar12;
          }
        }
        else {
          if (pbVar13 != (byte *)0x0) {
            *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar12 + 4);
          }
          *(byte **)(*(int *)(pbVar12 + 4) + 8) = pbVar13;
          *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(pbVar11 + 0xc);
          *(byte **)(*(int *)(pbVar11 + 0xc) + 4) = pbVar12;
        }
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar12;
        }
        else {
          iVar5 = *(int *)(pbVar11 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar11) {
            *(byte **)(iVar5 + 8) = pbVar12;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar12;
          }
        }
        *(undefined4 *)(pbVar12 + 4) = *(undefined4 *)(pbVar11 + 4);
        bVar1 = *pbVar12;
        if (pbVar13 == (byte *)0x0) {
          pbVar13 = pbVar12;
        }
        *pbVar12 = *pbVar11;
        *pbVar11 = bVar1;
        pbVar12 = pbVar11;
      }
    }
    pbVar11 = *(byte **)(param_2 + 0x10);
    bVar14 = pbVar11 != pbVar13;
    if (bVar14) {
      pbVar11 = (byte *)(uint)*pbVar12;
    }
    if (bVar14 && pbVar11 != (byte *)0x0) {
      do {
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar13) || (*pbVar13 != 1))
          goto LAB_001c9498;
          pbVar6 = *(byte **)(pbVar13 + 4);
          pbVar11 = *(byte **)(pbVar6 + 8);
          if (pbVar11 == pbVar13) break;
          if (pbVar11 == (byte *)0x0) goto LAB_001c974c;
          if (*pbVar11 == 0) {
            *pbVar11 = 1;
            **(undefined1 **)(pbVar13 + 4) = 0;
            iVar5 = *(int *)(pbVar13 + 4);
            iVar3 = *(int *)(iVar5 + 8);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar5;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
            piVar8 = *(int **)(param_2 + 0x10);
            if (piVar8[1] == iVar5) {
              piVar8[1] = iVar3;
            }
            else {
              piVar8 = *(int **)(iVar5 + 4);
              if (piVar8[3] == iVar5) {
                piVar8[3] = iVar3;
              }
              else {
                piVar8[2] = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar5;
            *(int *)(iVar5 + 4) = iVar3;
            pbVar11 = *(byte **)(*(int *)(pbVar13 + 4) + 8);
            if (pbVar11 == (byte *)0x0) goto LAB_001c9600;
          }
          pbVar6 = *(byte **)(pbVar11 + 0xc);
          if (pbVar6 != (byte *)0x0) {
            piVar8 = (int *)(uint)*pbVar6;
          }
          if (pbVar6 != (byte *)0x0 && piVar8 != (int *)0x1) {
LAB_001c96c0:
            pcVar9 = *(char **)(pbVar11 + 8);
            cVar2 = '\0';
            if (pcVar9 != (char *)0x0) {
              cVar2 = *pcVar9;
            }
            if (pcVar9 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar6 != (byte *)0x0) {
                *pbVar6 = 1;
              }
              *pbVar11 = 0;
              iVar5 = *(int *)(pbVar11 + 0xc);
              *(undefined4 *)(pbVar11 + 0xc) = *(undefined4 *)(iVar5 + 8);
              if (*(int *)(iVar5 + 8) != 0) {
                *(byte **)(*(int *)(iVar5 + 8) + 4) = pbVar11;
              }
              *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar11 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
              }
              else {
                iVar3 = *(int *)(pbVar11 + 4);
                if (*(byte **)(iVar3 + 8) == pbVar11) {
                  *(int *)(iVar3 + 8) = iVar5;
                }
                else {
                  *(int *)(iVar3 + 0xc) = iVar5;
                }
              }
              *(byte **)(iVar5 + 8) = pbVar11;
              *(int *)(pbVar11 + 4) = iVar5;
              pbVar11 = *(byte **)(*(int *)(pbVar13 + 4) + 8);
              if (pbVar11 == (byte *)0x0) goto LAB_001c9498;
            }
            *pbVar11 = **(byte **)(pbVar13 + 4);
            **(undefined1 **)(pbVar13 + 4) = 1;
            if (*(undefined1 **)(pbVar11 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar11 + 8) = 1;
            }
            iVar3 = *(int *)(pbVar13 + 4);
            iVar5 = *(int *)(iVar3 + 8);
            *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 0xc);
            if (*(int *)(iVar5 + 0xc) != 0) {
              *(int *)(*(int *)(iVar5 + 0xc) + 4) = iVar3;
            }
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar3 + 4);
            if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar3) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
            }
            else {
              iVar7 = *(int *)(iVar3 + 4);
              if (*(int *)(iVar7 + 0xc) == iVar3) {
                *(int *)(iVar7 + 0xc) = iVar5;
              }
              else {
                *(int *)(iVar7 + 8) = iVar5;
              }
            }
            *(int *)(iVar5 + 0xc) = iVar3;
            *(int *)(iVar3 + 4) = iVar5;
            goto LAB_001c9498;
          }
          pbVar10 = *(byte **)(pbVar11 + 8);
          piVar8 = (int *)0x0;
          if (pbVar10 != (byte *)0x0) {
            piVar8 = (int *)(uint)*pbVar10;
          }
          if (pbVar10 != (byte *)0x0 && piVar8 != (int *)0x1) goto LAB_001c96c0;
LAB_001c97e0:
          *pbVar11 = 0;
LAB_001c9620:
          pbVar13 = *(byte **)(pbVar13 + 4);
        }
        pbVar11 = *(byte **)(pbVar6 + 0xc);
        if (pbVar11 != (byte *)0x0) goto code_r0x001c94e4;
LAB_001c974c:
        *pbVar13 = 0;
        pbVar13 = pbVar6;
      } while( true );
    }
    goto LAB_001c949c;
  }
  goto LAB_001c94c0;
code_r0x001c94e4:
  if (*pbVar11 == 0) {
    *pbVar11 = 1;
    **(undefined1 **)(pbVar13 + 4) = 0;
    iVar5 = *(int *)(pbVar13 + 4);
    iVar3 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
    if (*(int *)(iVar3 + 8) != 0) {
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar5;
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
    piVar8 = *(int **)(param_2 + 0x10);
    if (piVar8[1] == iVar5) {
      piVar8[1] = iVar3;
    }
    else {
      piVar8 = *(int **)(iVar5 + 4);
      if (piVar8[2] == iVar5) {
        piVar8[2] = iVar3;
      }
      else {
        piVar8[3] = iVar3;
      }
    }
    *(int *)(iVar3 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar3;
    pbVar11 = *(byte **)(*(int *)(pbVar13 + 4) + 0xc);
    if (pbVar11 != (byte *)0x0) goto LAB_001c94f0;
LAB_001c9600:
    *pbVar13 = 0;
    goto LAB_001c9620;
  }
LAB_001c94f0:
  pbVar6 = *(byte **)(pbVar11 + 8);
  if (pbVar6 != (byte *)0x0) {
    piVar8 = (int *)(uint)*pbVar6;
  }
  if (pbVar6 == (byte *)0x0 || piVar8 == (int *)0x1) {
    pbVar10 = *(byte **)(pbVar11 + 0xc);
    piVar8 = (int *)0x0;
    if (pbVar10 != (byte *)0x0) {
      piVar8 = (int *)(uint)*pbVar10;
    }
    if (pbVar10 == (byte *)0x0 || piVar8 == (int *)0x1) goto LAB_001c97e0;
  }
  pcVar9 = *(char **)(pbVar11 + 0xc);
  cVar2 = '\0';
  if (pcVar9 != (char *)0x0) {
    cVar2 = *pcVar9;
  }
  if (pcVar9 == (char *)0x0 || cVar2 == '\x01') {
    if (pbVar6 != (byte *)0x0) {
      *pbVar6 = 1;
    }
    *pbVar11 = 0;
    iVar5 = *(int *)(pbVar11 + 8);
    *(undefined4 *)(pbVar11 + 8) = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(byte **)(*(int *)(iVar5 + 0xc) + 4) = pbVar11;
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar11 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
    }
    else {
      iVar3 = *(int *)(pbVar11 + 4);
      if (*(byte **)(iVar3 + 0xc) == pbVar11) {
        *(int *)(iVar3 + 0xc) = iVar5;
      }
      else {
        *(int *)(iVar3 + 8) = iVar5;
      }
    }
    *(byte **)(iVar5 + 0xc) = pbVar11;
    *(int *)(pbVar11 + 4) = iVar5;
    pbVar11 = *(byte **)(*(int *)(pbVar13 + 4) + 0xc);
    if (pbVar11 == (byte *)0x0) goto LAB_001c9498;
  }
  *pbVar11 = **(byte **)(pbVar13 + 4);
  **(undefined1 **)(pbVar13 + 4) = 1;
  if (*(undefined1 **)(pbVar11 + 0xc) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar11 + 0xc) = 1;
  }
  iVar5 = *(int *)(pbVar13 + 4);
  iVar3 = *(int *)(iVar5 + 0xc);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
  if (*(int *)(iVar3 + 8) != 0) {
    *(int *)(*(int *)(iVar3 + 8) + 4) = iVar5;
  }
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
  if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
    *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
  }
  else {
    iVar7 = *(int *)(iVar5 + 4);
    if (*(int *)(iVar7 + 8) == iVar5) {
      *(int *)(iVar7 + 8) = iVar3;
    }
    else {
      *(int *)(iVar7 + 0xc) = iVar3;
    }
  }
  *(int *)(iVar3 + 8) = iVar5;
  *(int *)(iVar5 + 4) = iVar3;
LAB_001c9498:
  *pbVar13 = 1;
LAB_001c949c:
  *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(param_2 + 4);
  FUN_001d9b00(pbVar12 + 0x14);
  *(byte **)(param_2 + 4) = pbVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  piVar8 = extraout_r3;
LAB_001c94c0:
  *param_1 = pbVar4;
  goto LAB_001c91b8;
}

