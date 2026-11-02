// rea decompile_all
// name: FUN_0021ebb4
// address: 0x21ebb4
// body: available
// range: 0x21ebb4-0x21f30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021ebb4(undefined4 *param_1,int param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *extraout_r3;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
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
  pbVar9 = param_4;
  if ((bVar15 && iVar5 == iVar3) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar5 = *(int *)(iVar3 + 4);
    while (iVar5 != 0) {
      FUN_0021f30c(param_2,*(undefined4 *)(iVar5 + 0xc));
      iVar3 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_2 + 4);
      FUN_001aa748(iVar5 + 0x14);
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
LAB_0021ec6c:
  pbVar12 = (byte *)*param_3;
  if (pbVar12 == *(byte **)param_4) {
    return;
  }
  iVar5 = *(int *)(pbVar12 + 0xc);
  if (iVar5 == 0) {
    for (iVar5 = *(int *)(pbVar12 + 4); *param_3 == *(int *)(iVar5 + 0xc);
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
  if (pbVar12 != pbVar4) {
    pbVar13 = *(byte **)(pbVar12 + 0xc);
    if (*(byte **)(pbVar12 + 0xc) == (byte *)0x0) {
      pbVar13 = *(byte **)(pbVar12 + 4);
      pbVar4 = pbVar12;
      while (pbVar6 = pbVar13, pbVar4 == *(byte **)(pbVar6 + 0xc)) {
        pbVar4 = pbVar6;
        pbVar13 = *(byte **)(pbVar6 + 4);
      }
      if (*(byte **)(pbVar4 + 0xc) != pbVar6) {
        pbVar4 = pbVar6;
      }
    }
    else {
      do {
        pbVar4 = pbVar13;
        pbVar13 = *(byte **)(pbVar4 + 8);
      } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
    }
    pbVar6 = *(byte **)(pbVar12 + 8);
    pbVar13 = pbVar12;
    if (pbVar6 == (byte *)0x0) {
      pbVar14 = *(byte **)(pbVar12 + 0xc);
      if (*(byte **)(pbVar12 + 0xc) != (byte *)0x0) goto LAB_0021ed54;
      pbVar14 = *(byte **)(pbVar12 + 4);
      if (*(byte **)(param_2 + 0x10) == pbVar14) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar14;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar14;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar14 + 8) == pbVar12) {
        pbVar14[8] = 0;
        pbVar14[9] = 0;
        pbVar14[10] = 0;
        pbVar14[0xb] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar12) {
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar14;
        }
      }
      else {
        pbVar14[0xc] = 0;
        pbVar14[0xd] = 0;
        pbVar14[0xe] = 0;
        pbVar14[0xf] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar12) {
          *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar14;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(pbVar12 + 0xc);
      pbVar14 = pbVar6;
      if (*(byte **)(pbVar12 + 0xc) != (byte *)0x0) {
        do {
          pbVar13 = pbVar11;
          pbVar11 = *(byte **)(pbVar13 + 8);
        } while (*(byte **)(pbVar13 + 8) != (byte *)0x0);
        pbVar14 = *(byte **)(pbVar13 + 0xc);
      }
LAB_0021ed54:
      if (pbVar13 == pbVar12) {
        *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar13 + 4);
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar12) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar14;
        }
        else {
          iVar5 = *(int *)(pbVar12 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar12) {
            *(byte **)(iVar5 + 8) = pbVar14;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar14;
          }
        }
        iVar5 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar5 + 8) == pbVar12) {
          pbVar9 = pbVar14;
          if (*(int *)(pbVar12 + 0xc) == 0) {
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pbVar12 + 4);
          }
          else {
            do {
              pbVar6 = pbVar9;
              pbVar9 = *(byte **)(pbVar6 + 8);
            } while (pbVar9 != (byte *)0x0);
            *(byte **)(iVar5 + 8) = pbVar6;
          }
        }
        pbVar9 = *(byte **)(param_2 + 0x10);
        if (*(byte **)(pbVar9 + 0xc) == pbVar12) {
          pbVar6 = pbVar14;
          if (*(int *)(pbVar12 + 8) == 0) {
            *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(pbVar12 + 4);
          }
          else {
            do {
              pbVar12 = pbVar6;
              pbVar6 = *(byte **)(pbVar12 + 0xc);
            } while (pbVar6 != (byte *)0x0);
            *(byte **)(pbVar9 + 0xc) = pbVar12;
          }
        }
      }
      else {
        *(byte **)(pbVar6 + 4) = pbVar13;
        *(undefined4 *)(pbVar13 + 8) = *(undefined4 *)(pbVar12 + 8);
        if (*(byte **)(pbVar12 + 0xc) == pbVar13) {
          if (pbVar14 != (byte *)0x0) {
            *(byte **)(pbVar14 + 4) = pbVar13;
          }
        }
        else {
          if (pbVar14 != (byte *)0x0) {
            *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar13 + 4);
          }
          *(byte **)(*(int *)(pbVar13 + 4) + 8) = pbVar14;
          *(undefined4 *)(pbVar13 + 0xc) = *(undefined4 *)(pbVar12 + 0xc);
          *(byte **)(*(int *)(pbVar12 + 0xc) + 4) = pbVar13;
        }
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar12) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar13;
        }
        else {
          iVar5 = *(int *)(pbVar12 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar12) {
            *(byte **)(iVar5 + 8) = pbVar13;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar13;
          }
        }
        *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar12 + 4);
        bVar1 = *pbVar13;
        if (pbVar14 == (byte *)0x0) {
          pbVar14 = pbVar13;
        }
        *pbVar13 = *pbVar12;
        *pbVar12 = bVar1;
        pbVar13 = pbVar12;
      }
    }
    pbVar12 = *(byte **)(param_2 + 0x10);
    bVar15 = pbVar12 != pbVar14;
    if (bVar15) {
      pbVar12 = (byte *)(uint)*pbVar13;
    }
    if (bVar15 && pbVar12 != (byte *)0x0) {
      do {
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar14) || (*pbVar14 != 1))
          goto LAB_0021ef48;
          pbVar6 = *(byte **)(pbVar14 + 4);
          pbVar12 = *(byte **)(pbVar6 + 8);
          if (pbVar12 == pbVar14) break;
          if (pbVar12 == (byte *)0x0) goto LAB_0021f200;
          uVar7 = (uint)*pbVar12;
          if (uVar7 == 0) {
            *pbVar12 = 1;
            **(undefined1 **)(pbVar14 + 4) = 0;
            iVar5 = *(int *)(pbVar14 + 4);
            uVar7 = *(uint *)(iVar5 + 8);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(uVar7 + 0xc);
            if (*(int *)(uVar7 + 0xc) != 0) {
              *(int *)(*(int *)(uVar7 + 0xc) + 4) = iVar5;
            }
            *(undefined4 *)(uVar7 + 4) = *(undefined4 *)(iVar5 + 4);
            pbVar9 = *(byte **)(param_2 + 0x10);
            if (*(int *)(pbVar9 + 4) == iVar5) {
              *(uint *)(pbVar9 + 4) = uVar7;
            }
            else {
              pbVar9 = *(byte **)(iVar5 + 4);
              if (*(int *)(pbVar9 + 0xc) == iVar5) {
                *(uint *)(pbVar9 + 0xc) = uVar7;
              }
              else {
                *(uint *)(pbVar9 + 8) = uVar7;
              }
            }
            *(int *)(uVar7 + 0xc) = iVar5;
            *(uint *)(iVar5 + 4) = uVar7;
            pbVar12 = *(byte **)(*(int *)(pbVar14 + 4) + 8);
            if (pbVar12 == (byte *)0x0) goto LAB_0021f0b4;
          }
          pbVar9 = *(byte **)(pbVar12 + 0xc);
          if (pbVar9 != (byte *)0x0) {
            uVar7 = (uint)*pbVar9;
          }
          if (pbVar9 != (byte *)0x0 && uVar7 != 1) {
LAB_0021f174:
            pcVar10 = *(char **)(pbVar12 + 8);
            cVar2 = '\0';
            if (pcVar10 != (char *)0x0) {
              cVar2 = *pcVar10;
            }
            if (pcVar10 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar9 != (byte *)0x0) {
                *pbVar9 = 1;
              }
              *pbVar12 = 0;
              iVar5 = *(int *)(pbVar12 + 0xc);
              *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(iVar5 + 8);
              if (*(int *)(iVar5 + 8) != 0) {
                *(byte **)(*(int *)(iVar5 + 8) + 4) = pbVar12;
              }
              *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar12 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar12) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
              }
              else {
                iVar3 = *(int *)(pbVar12 + 4);
                if (*(byte **)(iVar3 + 8) == pbVar12) {
                  *(int *)(iVar3 + 8) = iVar5;
                }
                else {
                  *(int *)(iVar3 + 0xc) = iVar5;
                }
              }
              *(byte **)(iVar5 + 8) = pbVar12;
              *(int *)(pbVar12 + 4) = iVar5;
              pbVar12 = *(byte **)(*(int *)(pbVar14 + 4) + 8);
              if (pbVar12 == (byte *)0x0) goto LAB_0021ef48;
            }
            *pbVar12 = **(byte **)(pbVar14 + 4);
            **(undefined1 **)(pbVar14 + 4) = 1;
            if (*(undefined1 **)(pbVar12 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar12 + 8) = 1;
            }
            iVar3 = *(int *)(pbVar14 + 4);
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
              iVar8 = *(int *)(iVar3 + 4);
              if (*(int *)(iVar8 + 0xc) == iVar3) {
                *(int *)(iVar8 + 0xc) = iVar5;
              }
              else {
                *(int *)(iVar8 + 8) = iVar5;
              }
            }
            *(int *)(iVar5 + 0xc) = iVar3;
            *(int *)(iVar3 + 4) = iVar5;
            goto LAB_0021ef48;
          }
          pcVar10 = *(char **)(pbVar12 + 8);
          cVar2 = '\0';
          if (pcVar10 != (char *)0x0) {
            cVar2 = *pcVar10;
          }
          if (pcVar10 != (char *)0x0 && cVar2 != '\x01') goto LAB_0021f174;
LAB_0021f294:
          *pbVar12 = 0;
LAB_0021f0d4:
          pbVar14 = *(byte **)(pbVar14 + 4);
        }
        pbVar12 = *(byte **)(pbVar6 + 0xc);
        if (pbVar12 != (byte *)0x0) goto code_r0x0021ef98;
LAB_0021f200:
        *pbVar14 = 0;
        pbVar14 = pbVar6;
      } while( true );
    }
    goto LAB_0021ef4c;
  }
  goto LAB_0021ef74;
code_r0x0021ef98:
  if (*pbVar12 == 0) {
    *pbVar12 = 1;
    **(undefined1 **)(pbVar14 + 4) = 0;
    iVar5 = *(int *)(pbVar14 + 4);
    iVar3 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
    if (*(int *)(iVar3 + 8) != 0) {
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar5;
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
    pbVar9 = *(byte **)(param_2 + 0x10);
    if (*(int *)(pbVar9 + 4) == iVar5) {
      *(int *)(pbVar9 + 4) = iVar3;
    }
    else {
      pbVar9 = *(byte **)(iVar5 + 4);
      if (*(int *)(pbVar9 + 8) == iVar5) {
        *(int *)(pbVar9 + 8) = iVar3;
      }
      else {
        *(int *)(pbVar9 + 0xc) = iVar3;
      }
    }
    *(int *)(iVar3 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar3;
    pbVar12 = *(byte **)(*(int *)(pbVar14 + 4) + 0xc);
    if (pbVar12 != (byte *)0x0) goto LAB_0021efa4;
LAB_0021f0b4:
    *pbVar14 = 0;
    goto LAB_0021f0d4;
  }
LAB_0021efa4:
  pbVar6 = *(byte **)(pbVar12 + 8);
  if (pbVar6 != (byte *)0x0) {
    pbVar9 = (byte *)(uint)*pbVar6;
  }
  if (pbVar6 == (byte *)0x0 || pbVar9 == (byte *)0x1) {
    pbVar11 = *(byte **)(pbVar12 + 0xc);
    pbVar9 = (byte *)0x0;
    if (pbVar11 != (byte *)0x0) {
      pbVar9 = (byte *)(uint)*pbVar11;
    }
    if (pbVar11 == (byte *)0x0 || pbVar9 == (byte *)0x1) goto LAB_0021f294;
  }
  pcVar10 = *(char **)(pbVar12 + 0xc);
  cVar2 = '\0';
  if (pcVar10 != (char *)0x0) {
    cVar2 = *pcVar10;
  }
  if (pcVar10 == (char *)0x0 || cVar2 == '\x01') {
    if (pbVar6 != (byte *)0x0) {
      *pbVar6 = 1;
    }
    *pbVar12 = 0;
    iVar5 = *(int *)(pbVar12 + 8);
    *(undefined4 *)(pbVar12 + 8) = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(byte **)(*(int *)(iVar5 + 0xc) + 4) = pbVar12;
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar12 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar12) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
    }
    else {
      iVar3 = *(int *)(pbVar12 + 4);
      if (*(byte **)(iVar3 + 0xc) == pbVar12) {
        *(int *)(iVar3 + 0xc) = iVar5;
      }
      else {
        *(int *)(iVar3 + 8) = iVar5;
      }
    }
    *(byte **)(iVar5 + 0xc) = pbVar12;
    *(int *)(pbVar12 + 4) = iVar5;
    pbVar12 = *(byte **)(*(int *)(pbVar14 + 4) + 0xc);
    if (pbVar12 == (byte *)0x0) goto LAB_0021ef48;
  }
  *pbVar12 = **(byte **)(pbVar14 + 4);
  **(undefined1 **)(pbVar14 + 4) = 1;
  if (*(undefined1 **)(pbVar12 + 0xc) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar12 + 0xc) = 1;
  }
  iVar5 = *(int *)(pbVar14 + 4);
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
    iVar8 = *(int *)(iVar5 + 4);
    if (*(int *)(iVar8 + 8) == iVar5) {
      *(int *)(iVar8 + 8) = iVar3;
    }
    else {
      *(int *)(iVar8 + 0xc) = iVar3;
    }
  }
  *(int *)(iVar3 + 8) = iVar5;
  *(int *)(iVar5 + 4) = iVar3;
LAB_0021ef48:
  *pbVar14 = 1;
LAB_0021ef4c:
  *(undefined4 *)(pbVar13 + 0xc) = *(undefined4 *)(param_2 + 4);
  FUN_001aa748(pbVar13 + 0x14);
  *(byte **)(param_2 + 4) = pbVar13;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  pbVar9 = extraout_r3;
LAB_0021ef74:
  *param_1 = pbVar4;
  goto LAB_0021ec6c;
}

