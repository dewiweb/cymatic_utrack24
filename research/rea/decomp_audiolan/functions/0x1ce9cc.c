// rea decompile_all
// name: FUN_001ce9cc
// address: 0x1ce9cc
// body: available
// range: 0x1ce9cc-0x1cf0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ce9cc(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
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
  if ((bVar14 && iVar5 == iVar3) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar5 = *(int *)(iVar3 + 4);
    while (iVar5 != 0) {
      FUN_001cf368(param_2,*(undefined4 *)(iVar5 + 0xc));
      iVar3 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_2 + 4);
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
LAB_001cea70:
  pbVar6 = (byte *)*param_3;
  if (pbVar6 == (byte *)*param_4) {
    return;
  }
  iVar5 = *(int *)(pbVar6 + 0xc);
  if (iVar5 == 0) {
    for (iVar5 = *(int *)(pbVar6 + 4); *param_3 == *(int *)(iVar5 + 0xc);
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
  if (pbVar6 != pbVar4) {
    pbVar7 = *(byte **)(pbVar6 + 0xc);
    if (*(byte **)(pbVar6 + 0xc) == (byte *)0x0) {
      pbVar7 = *(byte **)(pbVar6 + 4);
      pbVar4 = pbVar6;
      while (pbVar8 = pbVar7, pbVar4 == *(byte **)(pbVar8 + 0xc)) {
        pbVar4 = pbVar8;
        pbVar7 = *(byte **)(pbVar8 + 4);
      }
      if (*(byte **)(pbVar4 + 0xc) != pbVar8) {
        pbVar4 = pbVar8;
      }
    }
    else {
      do {
        pbVar4 = pbVar7;
        pbVar7 = *(byte **)(pbVar4 + 8);
      } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
    }
    pbVar8 = *(byte **)(pbVar6 + 8);
    pbVar7 = pbVar6;
    if (pbVar8 == (byte *)0x0) {
      pbVar13 = *(byte **)(pbVar6 + 0xc);
      if (*(byte **)(pbVar6 + 0xc) != (byte *)0x0) goto LAB_001ceb58;
      pbVar13 = *(byte **)(pbVar6 + 4);
      uVar9 = 0;
      if (*(byte **)(param_2 + 0x10) == pbVar13) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar13;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar13;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar13 + 8) == pbVar6) {
        pbVar13[8] = 0;
        pbVar13[9] = 0;
        pbVar13[10] = 0;
        pbVar13[0xb] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar6) {
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar13;
        }
      }
      else {
        pbVar13[0xc] = 0;
        pbVar13[0xd] = 0;
        pbVar13[0xe] = 0;
        pbVar13[0xf] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar6) {
          *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar13;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(pbVar6 + 0xc);
      pbVar13 = pbVar8;
      if (*(byte **)(pbVar6 + 0xc) != (byte *)0x0) {
        do {
          pbVar7 = pbVar11;
          pbVar11 = *(byte **)(pbVar7 + 8);
        } while (*(byte **)(pbVar7 + 8) != (byte *)0x0);
        pbVar13 = *(byte **)(pbVar7 + 0xc);
      }
LAB_001ceb58:
      if (pbVar7 == pbVar6) {
        *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar7 + 4);
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
        iVar5 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar5 + 8) == pbVar6) {
          pbVar8 = pbVar13;
          if (*(int *)(pbVar6 + 0xc) == 0) {
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pbVar6 + 4);
          }
          else {
            do {
              pbVar11 = pbVar8;
              pbVar8 = *(byte **)(pbVar11 + 8);
            } while (pbVar8 != (byte *)0x0);
            *(byte **)(iVar5 + 8) = pbVar11;
          }
        }
        uVar9 = *(uint *)(param_2 + 0x10);
        if (*(byte **)(uVar9 + 0xc) == pbVar6) {
          pbVar8 = pbVar13;
          if (*(int *)(pbVar6 + 8) == 0) {
            *(undefined4 *)(uVar9 + 0xc) = *(undefined4 *)(pbVar6 + 4);
          }
          else {
            do {
              pbVar6 = pbVar8;
              pbVar8 = *(byte **)(pbVar6 + 0xc);
            } while (pbVar8 != (byte *)0x0);
            *(byte **)(uVar9 + 0xc) = pbVar6;
          }
        }
      }
      else {
        *(byte **)(pbVar8 + 4) = pbVar7;
        *(undefined4 *)(pbVar7 + 8) = *(undefined4 *)(pbVar6 + 8);
        if (*(byte **)(pbVar6 + 0xc) == pbVar7) {
          if (pbVar13 != (byte *)0x0) {
            *(byte **)(pbVar13 + 4) = pbVar7;
          }
        }
        else {
          if (pbVar13 != (byte *)0x0) {
            *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar7 + 4);
          }
          *(byte **)(*(int *)(pbVar7 + 4) + 8) = pbVar13;
          *(undefined4 *)(pbVar7 + 0xc) = *(undefined4 *)(pbVar6 + 0xc);
          *(byte **)(*(int *)(pbVar6 + 0xc) + 4) = pbVar7;
        }
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar7;
        }
        else {
          iVar5 = *(int *)(pbVar6 + 4);
          if (*(byte **)(iVar5 + 8) == pbVar6) {
            *(byte **)(iVar5 + 8) = pbVar7;
          }
          else {
            *(byte **)(iVar5 + 0xc) = pbVar7;
          }
        }
        *(undefined4 *)(pbVar7 + 4) = *(undefined4 *)(pbVar6 + 4);
        uVar9 = (uint)*pbVar6;
        bVar1 = *pbVar7;
        if (pbVar13 == (byte *)0x0) {
          pbVar13 = pbVar7;
        }
        *pbVar7 = *pbVar6;
        *pbVar6 = bVar1;
        pbVar7 = pbVar6;
      }
    }
    pbVar6 = *(byte **)(param_2 + 0x10);
    bVar14 = pbVar6 != pbVar13;
    if (bVar14) {
      pbVar6 = (byte *)(uint)*pbVar7;
    }
    if (bVar14 && pbVar6 != (byte *)0x0) {
      do {
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar13) || (*pbVar13 != 1))
          goto LAB_001cefcc;
          pbVar8 = *(byte **)(pbVar13 + 4);
          pbVar6 = *(byte **)(pbVar8 + 8);
          if (pbVar6 == pbVar13) break;
          if (pbVar6 == (byte *)0x0) goto LAB_001cefa8;
          if (*pbVar6 == 0) {
            *pbVar6 = 1;
            **(undefined1 **)(pbVar13 + 4) = 0;
            iVar5 = *(int *)(pbVar13 + 4);
            iVar3 = *(int *)(iVar5 + 8);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar5;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
            uVar9 = *(uint *)(param_2 + 0x10);
            if (*(int *)(uVar9 + 4) == iVar5) {
              *(int *)(uVar9 + 4) = iVar3;
            }
            else {
              uVar9 = *(uint *)(iVar5 + 4);
              if (*(int *)(uVar9 + 0xc) == iVar5) {
                *(int *)(uVar9 + 0xc) = iVar3;
              }
              else {
                *(int *)(uVar9 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar5;
            *(int *)(iVar5 + 4) = iVar3;
            pbVar6 = *(byte **)(*(int *)(pbVar13 + 4) + 8);
            if (pbVar6 == (byte *)0x0) goto LAB_001cee5c;
          }
          pbVar8 = *(byte **)(pbVar6 + 0xc);
          if (pbVar8 != (byte *)0x0) {
            uVar9 = (uint)*pbVar8;
          }
          if (pbVar8 != (byte *)0x0 && uVar9 != 1) {
LAB_001cef1c:
            pcVar10 = *(char **)(pbVar6 + 8);
            cVar2 = '\0';
            if (pcVar10 != (char *)0x0) {
              cVar2 = *pcVar10;
            }
            if (pcVar10 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar8 != (byte *)0x0) {
                *pbVar8 = 1;
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
              pbVar6 = *(byte **)(*(int *)(pbVar13 + 4) + 8);
              if (pbVar6 == (byte *)0x0) goto LAB_001cefcc;
            }
            *pbVar6 = **(byte **)(pbVar13 + 4);
            **(undefined1 **)(pbVar13 + 4) = 1;
            if (*(undefined1 **)(pbVar6 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar6 + 8) = 1;
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
            goto LAB_001cefa0;
          }
          pbVar11 = *(byte **)(pbVar6 + 8);
          uVar9 = 0;
          if (pbVar11 != (byte *)0x0) {
            uVar9 = (uint)*pbVar11;
          }
          if (pbVar11 != (byte *)0x0 && uVar9 != 1) goto LAB_001cef1c;
LAB_001cf07c:
          *pbVar6 = 0;
LAB_001cee7c:
          pbVar13 = *(byte **)(pbVar13 + 4);
        }
        pbVar6 = *(byte **)(pbVar8 + 0xc);
        if (pbVar6 != (byte *)0x0) goto code_r0x001ced44;
LAB_001cefa8:
        *pbVar13 = 0;
        pbVar13 = pbVar8;
      } while( true );
    }
    goto LAB_001cefd0;
  }
  goto LAB_001cefec;
code_r0x001ced44:
  if (*pbVar6 == 0) {
    *pbVar6 = 1;
    **(undefined1 **)(pbVar13 + 4) = 0;
    iVar5 = *(int *)(pbVar13 + 4);
    iVar3 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
    if (*(int *)(iVar3 + 8) != 0) {
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar5;
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
    uVar9 = *(uint *)(param_2 + 0x10);
    if (*(int *)(uVar9 + 4) == iVar5) {
      *(int *)(uVar9 + 4) = iVar3;
    }
    else {
      uVar9 = *(uint *)(iVar5 + 4);
      if (*(int *)(uVar9 + 8) == iVar5) {
        *(int *)(uVar9 + 8) = iVar3;
      }
      else {
        *(int *)(uVar9 + 0xc) = iVar3;
      }
    }
    *(int *)(iVar3 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar3;
    pbVar6 = *(byte **)(*(int *)(pbVar13 + 4) + 0xc);
    if (pbVar6 != (byte *)0x0) goto LAB_001ced50;
LAB_001cee5c:
    *pbVar13 = 0;
    goto LAB_001cee7c;
  }
LAB_001ced50:
  pbVar8 = *(byte **)(pbVar6 + 8);
  if (pbVar8 != (byte *)0x0) {
    uVar9 = (uint)*pbVar8;
  }
  if (pbVar8 == (byte *)0x0 || uVar9 == 1) {
    pbVar11 = *(byte **)(pbVar6 + 0xc);
    uVar9 = 0;
    if (pbVar11 != (byte *)0x0) {
      uVar9 = (uint)*pbVar11;
    }
    if (pbVar11 == (byte *)0x0 || uVar9 == 1) goto LAB_001cf07c;
  }
  pcVar10 = *(char **)(pbVar6 + 0xc);
  cVar2 = '\0';
  if (pcVar10 != (char *)0x0) {
    cVar2 = *pcVar10;
  }
  if (pcVar10 == (char *)0x0 || cVar2 == '\x01') {
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
    pbVar6 = *(byte **)(*(int *)(pbVar13 + 4) + 0xc);
    if (pbVar6 == (byte *)0x0) goto LAB_001cefcc;
  }
  *pbVar6 = **(byte **)(pbVar13 + 4);
  **(undefined1 **)(pbVar13 + 4) = 1;
  if (*(undefined1 **)(pbVar6 + 0xc) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar6 + 0xc) = 1;
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
LAB_001cefa0:
  *(int *)(iVar5 + 4) = iVar3;
LAB_001cefcc:
  *pbVar13 = 1;
LAB_001cefd0:
  *(undefined4 *)(pbVar7 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(byte **)(param_2 + 4) = pbVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
LAB_001cefec:
  *param_1 = pbVar4;
  goto LAB_001cea70;
}

