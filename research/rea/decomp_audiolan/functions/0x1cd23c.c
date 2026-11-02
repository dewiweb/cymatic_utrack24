// rea decompile_all
// name: FUN_001cd23c
// address: 0x1cd23c
// body: available
// range: 0x1cd23c-0x1cd9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001cd23c(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *extraout_r3;
  int *piVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(iVar3 + 8);
  bVar14 = *param_3 == iVar5;
  if (bVar14) {
    iVar5 = *param_4;
  }
  piVar7 = param_4;
  if ((bVar14 && iVar5 == iVar3) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar5 = *(int *)(iVar3 + 4);
    while (iVar5 != 0) {
      FUN_001cd9a4(param_2,*(undefined4 *)(iVar5 + 0xc));
      iVar12 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_2 + 4);
      iVar3 = FUN_0010e7f4(iVar5 + 0x20);
      FUN_0010e7f4(iVar3 + -8);
      *(int *)(param_2 + 4) = iVar5;
      iVar5 = iVar12;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
    return;
  }
LAB_001cd2f8:
  pbVar10 = (byte *)*param_3;
  if (pbVar10 == (byte *)*param_4) {
    return;
  }
  iVar5 = *(int *)(pbVar10 + 0xc);
  if (iVar5 == 0) {
    for (iVar5 = *(int *)(pbVar10 + 4); *param_3 == *(int *)(iVar5 + 0xc);
        iVar5 = *(int *)(iVar5 + 4)) {
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
  if (pbVar10 != pbVar4) {
    pbVar11 = *(byte **)(pbVar10 + 0xc);
    if (*(byte **)(pbVar10 + 0xc) == (byte *)0x0) {
      pbVar11 = *(byte **)(pbVar10 + 4);
      pbVar4 = pbVar10;
      while (pbVar6 = pbVar11, pbVar4 == *(byte **)(pbVar6 + 0xc)) {
        pbVar4 = pbVar6;
        pbVar11 = *(byte **)(pbVar6 + 4);
      }
      if (*(byte **)(pbVar4 + 0xc) != pbVar6) {
        pbVar4 = pbVar6;
      }
    }
    else {
      do {
        pbVar4 = pbVar11;
        pbVar11 = *(byte **)(pbVar4 + 8);
      } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
    }
    pbVar6 = *(byte **)(pbVar10 + 8);
    pbVar11 = pbVar10;
    if (pbVar6 == (byte *)0x0) {
      pbVar13 = *(byte **)(pbVar10 + 0xc);
      if (*(byte **)(pbVar10 + 0xc) != (byte *)0x0) goto LAB_001cd3e8;
      pbVar13 = *(byte **)(pbVar10 + 4);
      if (*(byte **)(param_2 + 0x10) == pbVar13) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar13;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar13;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar13 + 8) == pbVar10) {
        pbVar13[8] = 0;
        pbVar13[9] = 0;
        pbVar13[10] = 0;
        pbVar13[0xb] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar10) {
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar13;
        }
      }
      else {
        pbVar13[0xc] = 0;
        pbVar13[0xd] = 0;
        pbVar13[0xe] = 0;
        pbVar13[0xf] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar10) {
          *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar13;
        }
      }
    }
    else {
      pbVar9 = *(byte **)(pbVar10 + 0xc);
      pbVar13 = pbVar6;
      if (*(byte **)(pbVar10 + 0xc) != (byte *)0x0) {
        do {
          pbVar11 = pbVar9;
          pbVar9 = *(byte **)(pbVar11 + 8);
        } while (*(byte **)(pbVar11 + 8) != (byte *)0x0);
        pbVar13 = *(byte **)(pbVar11 + 0xc);
      }
LAB_001cd3e8:
      if (pbVar11 == pbVar10) {
        *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar11 + 4);
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar13;
        }
        else {
          iVar5 = *(int *)(pbVar10 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar10) {
            *(byte **)(iVar5 + 8) = pbVar13;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar13;
          }
        }
        iVar5 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar5 + 8) == pbVar10) {
          pbVar6 = pbVar13;
          if (*(int *)(pbVar10 + 0xc) == 0) {
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pbVar10 + 4);
          }
          else {
            do {
              pbVar9 = pbVar6;
              pbVar6 = *(byte **)(pbVar9 + 8);
            } while (pbVar6 != (byte *)0x0);
            *(byte **)(iVar5 + 8) = pbVar9;
          }
        }
        piVar7 = *(int **)(param_2 + 0x10);
        if ((byte *)piVar7[3] == pbVar10) {
          pbVar6 = pbVar13;
          if (*(int *)(pbVar10 + 8) == 0) {
            piVar7[3] = *(int *)(pbVar10 + 4);
          }
          else {
            do {
              pbVar10 = pbVar6;
              pbVar6 = *(byte **)(pbVar10 + 0xc);
            } while (pbVar6 != (byte *)0x0);
            piVar7[3] = (int)pbVar10;
          }
        }
      }
      else {
        *(byte **)(pbVar6 + 4) = pbVar11;
        *(undefined4 *)(pbVar11 + 8) = *(undefined4 *)(pbVar10 + 8);
        if (*(byte **)(pbVar10 + 0xc) == pbVar11) {
          if (pbVar13 != (byte *)0x0) {
            *(byte **)(pbVar13 + 4) = pbVar11;
          }
        }
        else {
          if (pbVar13 != (byte *)0x0) {
            *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar11 + 4);
          }
          *(byte **)(*(int *)(pbVar11 + 4) + 8) = pbVar13;
          *(undefined4 *)(pbVar11 + 0xc) = *(undefined4 *)(pbVar10 + 0xc);
          *(byte **)(*(int *)(pbVar10 + 0xc) + 4) = pbVar11;
        }
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar11;
        }
        else {
          iVar5 = *(int *)(pbVar10 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar10) {
            *(byte **)(iVar5 + 8) = pbVar11;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar11;
          }
        }
        *(undefined4 *)(pbVar11 + 4) = *(undefined4 *)(pbVar10 + 4);
        bVar1 = *pbVar11;
        if (pbVar13 == (byte *)0x0) {
          pbVar13 = pbVar11;
        }
        *pbVar11 = *pbVar10;
        *pbVar10 = bVar1;
        pbVar11 = pbVar10;
      }
    }
    pbVar10 = *(byte **)(param_2 + 0x10);
    bVar14 = pbVar10 != pbVar13;
    if (bVar14) {
      pbVar10 = (byte *)(uint)*pbVar11;
    }
    if (bVar14 && pbVar10 != (byte *)0x0) {
      do {
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar13) || (*pbVar13 != 1))
          goto LAB_001cd5dc;
          pbVar6 = *(byte **)(pbVar13 + 4);
          pbVar10 = *(byte **)(pbVar6 + 8);
          if (pbVar10 == pbVar13) break;
          if (pbVar10 == (byte *)0x0) goto LAB_001cd898;
          if (*pbVar10 == 0) {
            *pbVar10 = 1;
            **(undefined1 **)(pbVar13 + 4) = 0;
            iVar5 = *(int *)(pbVar13 + 4);
            iVar3 = *(int *)(iVar5 + 8);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar5;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
            piVar7 = *(int **)(param_2 + 0x10);
            if (piVar7[1] == iVar5) {
              piVar7[1] = iVar3;
            }
            else {
              piVar7 = *(int **)(iVar5 + 4);
              if (piVar7[3] == iVar5) {
                piVar7[3] = iVar3;
              }
              else {
                piVar7[2] = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar5;
            *(int *)(iVar5 + 4) = iVar3;
            pbVar10 = *(byte **)(*(int *)(pbVar13 + 4) + 8);
            if (pbVar10 == (byte *)0x0) goto LAB_001cd74c;
          }
          pbVar6 = *(byte **)(pbVar10 + 0xc);
          if (pbVar6 != (byte *)0x0) {
            piVar7 = (int *)(uint)*pbVar6;
          }
          if (pbVar6 != (byte *)0x0 && piVar7 != (int *)0x1) {
LAB_001cd80c:
            pcVar8 = *(char **)(pbVar10 + 8);
            cVar2 = '\0';
            if (pcVar8 != (char *)0x0) {
              cVar2 = *pcVar8;
            }
            if (pcVar8 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar6 != (byte *)0x0) {
                *pbVar6 = 1;
              }
              *pbVar10 = 0;
              iVar5 = *(int *)(pbVar10 + 0xc);
              *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(iVar5 + 8);
              if (*(int *)(iVar5 + 8) != 0) {
                *(byte **)(*(int *)(iVar5 + 8) + 4) = pbVar10;
              }
              *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar10 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
              }
              else {
                iVar3 = *(int *)(pbVar10 + 4);
                if (*(byte **)(iVar3 + 8) == pbVar10) {
                  *(int *)(iVar3 + 8) = iVar5;
                }
                else {
                  *(int *)(iVar3 + 0xc) = iVar5;
                }
              }
              *(byte **)(iVar5 + 8) = pbVar10;
              *(int *)(pbVar10 + 4) = iVar5;
              pbVar10 = *(byte **)(*(int *)(pbVar13 + 4) + 8);
              if (pbVar10 == (byte *)0x0) goto LAB_001cd5dc;
            }
            *pbVar10 = **(byte **)(pbVar13 + 4);
            **(undefined1 **)(pbVar13 + 4) = 1;
            if (*(undefined1 **)(pbVar10 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar10 + 8) = 1;
            }
            iVar5 = *(int *)(pbVar13 + 4);
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
              iVar12 = *(int *)(iVar5 + 4);
              if (*(int *)(iVar12 + 0xc) == iVar5) {
                *(int *)(iVar12 + 0xc) = iVar3;
              }
              else {
                *(int *)(iVar12 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar5;
            goto LAB_001cd890;
          }
          pbVar9 = *(byte **)(pbVar10 + 8);
          piVar7 = (int *)0x0;
          if (pbVar9 != (byte *)0x0) {
            piVar7 = (int *)(uint)*pbVar9;
          }
          if (pbVar9 != (byte *)0x0 && piVar7 != (int *)0x1) goto LAB_001cd80c;
LAB_001cd92c:
          *pbVar10 = 0;
LAB_001cd76c:
          pbVar13 = *(byte **)(pbVar13 + 4);
        }
        pbVar10 = *(byte **)(pbVar6 + 0xc);
        if (pbVar10 != (byte *)0x0) goto code_r0x001cd634;
LAB_001cd898:
        *pbVar13 = 0;
        pbVar13 = pbVar6;
      } while( true );
    }
    goto LAB_001cd5e0;
  }
  goto LAB_001cd610;
code_r0x001cd634:
  if (*pbVar10 == 0) {
    *pbVar10 = 1;
    **(undefined1 **)(pbVar13 + 4) = 0;
    iVar5 = *(int *)(pbVar13 + 4);
    iVar3 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
    if (*(int *)(iVar3 + 8) != 0) {
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar5;
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
    piVar7 = *(int **)(param_2 + 0x10);
    if (piVar7[1] == iVar5) {
      piVar7[1] = iVar3;
    }
    else {
      piVar7 = *(int **)(iVar5 + 4);
      if (piVar7[2] == iVar5) {
        piVar7[2] = iVar3;
      }
      else {
        piVar7[3] = iVar3;
      }
    }
    *(int *)(iVar3 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar3;
    pbVar10 = *(byte **)(*(int *)(pbVar13 + 4) + 0xc);
    if (pbVar10 != (byte *)0x0) goto LAB_001cd640;
LAB_001cd74c:
    *pbVar13 = 0;
    goto LAB_001cd76c;
  }
LAB_001cd640:
  pbVar6 = *(byte **)(pbVar10 + 8);
  if (pbVar6 != (byte *)0x0) {
    piVar7 = (int *)(uint)*pbVar6;
  }
  if (pbVar6 == (byte *)0x0 || piVar7 == (int *)0x1) {
    pbVar9 = *(byte **)(pbVar10 + 0xc);
    piVar7 = (int *)0x0;
    if (pbVar9 != (byte *)0x0) {
      piVar7 = (int *)(uint)*pbVar9;
    }
    if (pbVar9 == (byte *)0x0 || piVar7 == (int *)0x1) goto LAB_001cd92c;
  }
  pcVar8 = *(char **)(pbVar10 + 0xc);
  cVar2 = '\0';
  if (pcVar8 != (char *)0x0) {
    cVar2 = *pcVar8;
  }
  if (pcVar8 == (char *)0x0 || cVar2 == '\x01') {
    if (pbVar6 != (byte *)0x0) {
      *pbVar6 = 1;
    }
    *pbVar10 = 0;
    iVar5 = *(int *)(pbVar10 + 8);
    *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(byte **)(*(int *)(iVar5 + 0xc) + 4) = pbVar10;
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar10 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
    }
    else {
      iVar3 = *(int *)(pbVar10 + 4);
      if (*(byte **)(iVar3 + 0xc) == pbVar10) {
        *(int *)(iVar3 + 0xc) = iVar5;
      }
      else {
        *(int *)(iVar3 + 8) = iVar5;
      }
    }
    *(byte **)(iVar5 + 0xc) = pbVar10;
    *(int *)(pbVar10 + 4) = iVar5;
    pbVar10 = *(byte **)(*(int *)(pbVar13 + 4) + 0xc);
    if (pbVar10 == (byte *)0x0) goto LAB_001cd5dc;
  }
  *pbVar10 = **(byte **)(pbVar13 + 4);
  **(undefined1 **)(pbVar13 + 4) = 1;
  if (*(undefined1 **)(pbVar10 + 0xc) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar10 + 0xc) = 1;
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
    iVar12 = *(int *)(iVar5 + 4);
    if (*(int *)(iVar12 + 8) == iVar5) {
      *(int *)(iVar12 + 8) = iVar3;
    }
    else {
      *(int *)(iVar12 + 0xc) = iVar3;
    }
  }
  *(int *)(iVar3 + 8) = iVar5;
LAB_001cd890:
  *(int *)(iVar5 + 4) = iVar3;
LAB_001cd5dc:
  *pbVar13 = 1;
LAB_001cd5e0:
  *(undefined4 *)(pbVar11 + 0xc) = *(undefined4 *)(param_2 + 4);
  iVar5 = FUN_0010e7f4(pbVar11 + 0x20);
  FUN_0010e7f4(iVar5 + -8);
  *(byte **)(param_2 + 4) = pbVar11;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  piVar7 = extraout_r3;
LAB_001cd610:
  *param_1 = pbVar4;
  goto LAB_001cd2f8;
}

