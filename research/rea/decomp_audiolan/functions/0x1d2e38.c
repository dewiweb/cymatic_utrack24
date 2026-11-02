// rea decompile_all
// name: FUN_001d2e38
// address: 0x1d2e38
// body: available
// range: 0x1d2e38-0x1d3473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d2e38(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *in_r12;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  
  iVar10 = *param_3;
  if (iVar10 == *(int *)(param_2 + 0x10)) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  iVar3 = *(int *)(iVar10 + 0xc);
  if (*(int *)(iVar10 + 0xc) == 0) {
    iVar3 = *(int *)(iVar10 + 4);
    while (iVar5 = iVar3, iVar10 == *(int *)(iVar5 + 0xc)) {
      iVar10 = iVar5;
      iVar3 = *(int *)(iVar5 + 4);
    }
    if (*(int *)(iVar10 + 0xc) != iVar5) {
      iVar10 = iVar5;
    }
  }
  else {
    do {
      iVar10 = iVar3;
      iVar3 = *(int *)(iVar10 + 8);
    } while (*(int *)(iVar10 + 8) != 0);
  }
  pbVar4 = (byte *)*param_3;
  pbVar7 = *(byte **)(pbVar4 + 8);
  pbVar9 = pbVar4;
  if (pbVar7 == (byte *)0x0) {
    pbVar8 = *(byte **)(pbVar4 + 0xc);
    if (pbVar8 == (byte *)0x0) {
      pbVar8 = *(byte **)(pbVar4 + 4);
      if (*(byte **)(param_2 + 0x10) == pbVar8) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar8;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar8;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar8 + 8) == pbVar4) {
        pbVar8[8] = 0;
        pbVar8[9] = 0;
        pbVar8[10] = 0;
        pbVar8[0xb] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar4) {
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar8;
        }
      }
      else {
        pbVar8[0xc] = 0;
        pbVar8[0xd] = 0;
        pbVar8[0xe] = 0;
        pbVar8[0xf] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar4) {
          *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar8;
        }
      }
      goto LAB_001d3090;
    }
  }
  else {
    pbVar12 = *(byte **)(pbVar4 + 0xc);
    pbVar8 = pbVar7;
    if (*(byte **)(pbVar4 + 0xc) != (byte *)0x0) {
      do {
        pbVar9 = pbVar12;
        pbVar12 = *(byte **)(pbVar9 + 8);
      } while (*(byte **)(pbVar9 + 8) != (byte *)0x0);
      pbVar8 = *(byte **)(pbVar9 + 0xc);
    }
  }
  if (pbVar9 == pbVar4) {
    *(undefined4 *)(pbVar8 + 4) = *(undefined4 *)(pbVar9 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar4) {
      *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar8;
    }
    else {
      iVar3 = *(int *)(pbVar4 + 4);
      if (*(byte **)(iVar3 + 8) == pbVar4) {
        *(byte **)(iVar3 + 8) = pbVar8;
      }
      else {
        *(byte **)(iVar3 + 0xc) = pbVar8;
      }
    }
    iVar3 = *(int *)(param_2 + 0x10);
    if (*(byte **)(iVar3 + 8) == pbVar4) {
      pbVar7 = pbVar8;
      if (*(int *)(pbVar4 + 0xc) == 0) {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(pbVar4 + 4);
      }
      else {
        do {
          pbVar12 = pbVar7;
          pbVar7 = *(byte **)(pbVar12 + 8);
        } while (pbVar7 != (byte *)0x0);
        *(byte **)(iVar3 + 8) = pbVar12;
      }
    }
    in_r12 = *(byte **)(param_2 + 0x10);
    if (*(byte **)(in_r12 + 0xc) == pbVar4) {
      pbVar7 = pbVar8;
      if (*(int *)(pbVar4 + 8) == 0) {
        *(undefined4 *)(in_r12 + 0xc) = *(undefined4 *)(pbVar4 + 4);
      }
      else {
        do {
          pbVar4 = pbVar7;
          pbVar7 = *(byte **)(pbVar4 + 0xc);
        } while (pbVar7 != (byte *)0x0);
        *(byte **)(in_r12 + 0xc) = pbVar4;
      }
    }
  }
  else {
    *(byte **)(pbVar7 + 4) = pbVar9;
    *(undefined4 *)(pbVar9 + 8) = *(undefined4 *)(pbVar4 + 8);
    if (*(byte **)(pbVar4 + 0xc) == pbVar9) {
      if (pbVar8 != (byte *)0x0) {
        *(byte **)(pbVar8 + 4) = pbVar9;
      }
    }
    else {
      if (pbVar8 != (byte *)0x0) {
        *(undefined4 *)(pbVar8 + 4) = *(undefined4 *)(pbVar9 + 4);
      }
      *(byte **)(*(int *)(pbVar9 + 4) + 8) = pbVar8;
      *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
      *(byte **)(*(int *)(pbVar4 + 0xc) + 4) = pbVar9;
    }
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar4) {
      *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar9;
    }
    else {
      iVar3 = *(int *)(pbVar4 + 4);
      if (*(byte **)(iVar3 + 8) == pbVar4) {
        *(byte **)(iVar3 + 8) = pbVar9;
      }
      else {
        *(byte **)(iVar3 + 0xc) = pbVar9;
      }
    }
    *(undefined4 *)(pbVar9 + 4) = *(undefined4 *)(pbVar4 + 4);
    bVar1 = *pbVar9;
    if (pbVar8 == (byte *)0x0) {
      pbVar8 = pbVar9;
    }
    *pbVar9 = *pbVar4;
    *pbVar4 = bVar1;
    pbVar9 = pbVar4;
  }
LAB_001d3090:
  pbVar4 = *(byte **)(param_2 + 0x10);
  bVar13 = pbVar4 != pbVar8;
  if (bVar13) {
    pbVar4 = (byte *)(uint)*pbVar9;
  }
  if (bVar13 && pbVar4 != (byte *)0x0) {
    while( true ) {
      if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) || (*pbVar8 != 1)) goto LAB_001d30c4;
      pbVar4 = *(byte **)(pbVar8 + 4);
      pbVar7 = *(byte **)(pbVar4 + 8);
      if (pbVar7 != pbVar8) break;
      pbVar7 = *(byte **)(pbVar4 + 0xc);
      if (pbVar7 == (byte *)0x0) {
LAB_001d3364:
        *pbVar8 = 0;
        pbVar8 = pbVar4;
      }
      else {
        if (*pbVar7 == 0) {
          *pbVar7 = 1;
          **(undefined1 **)(pbVar8 + 4) = 0;
          iVar3 = *(int *)(pbVar8 + 4);
          iVar5 = *(int *)(iVar3 + 0xc);
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 8);
          if (*(int *)(iVar5 + 8) != 0) {
            *(int *)(*(int *)(iVar5 + 8) + 4) = iVar3;
          }
          *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar3 + 4);
          in_r12 = *(byte **)(param_2 + 0x10);
          if (*(int *)(in_r12 + 4) == iVar3) {
            *(int *)(in_r12 + 4) = iVar5;
          }
          else {
            in_r12 = *(byte **)(iVar3 + 4);
            if (*(int *)(in_r12 + 8) == iVar3) {
              *(int *)(in_r12 + 8) = iVar5;
            }
            else {
              *(int *)(in_r12 + 0xc) = iVar5;
            }
          }
          *(int *)(iVar5 + 8) = iVar3;
          *(int *)(iVar3 + 4) = iVar5;
          pbVar4 = *(byte **)(pbVar8 + 4);
          pbVar7 = *(byte **)(pbVar4 + 0xc);
          if (pbVar7 == (byte *)0x0) goto LAB_001d3364;
        }
        pbVar4 = *(byte **)(pbVar7 + 8);
        if (pbVar4 != (byte *)0x0) {
          in_r12 = (byte *)(uint)*pbVar4;
        }
        if (pbVar4 != (byte *)0x0 && in_r12 != (byte *)0x1) {
LAB_001d312c:
          pcVar11 = *(char **)(pbVar7 + 0xc);
          cVar2 = '\0';
          if (pcVar11 != (char *)0x0) {
            cVar2 = *pcVar11;
          }
          if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
            if (pbVar4 != (byte *)0x0) {
              *pbVar4 = 1;
            }
            *pbVar7 = 0;
            iVar3 = *(int *)(pbVar7 + 8);
            *(undefined4 *)(pbVar7 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(byte **)(*(int *)(iVar3 + 0xc) + 4) = pbVar7;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pbVar7 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar7) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
            }
            else {
              iVar5 = *(int *)(pbVar7 + 4);
              if (*(byte **)(iVar5 + 0xc) == pbVar7) {
                *(int *)(iVar5 + 0xc) = iVar3;
              }
              else {
                *(int *)(iVar5 + 8) = iVar3;
              }
            }
            *(byte **)(iVar3 + 0xc) = pbVar7;
            *(int *)(pbVar7 + 4) = iVar3;
            pbVar7 = *(byte **)(*(int *)(pbVar8 + 4) + 0xc);
            if (pbVar7 == (byte *)0x0) goto LAB_001d30c4;
          }
          *pbVar7 = **(byte **)(pbVar8 + 4);
          **(undefined1 **)(pbVar8 + 4) = 1;
          if (*(undefined1 **)(pbVar7 + 0xc) != (undefined1 *)0x0) {
            **(undefined1 **)(pbVar7 + 0xc) = 1;
          }
          iVar3 = *(int *)(pbVar8 + 4);
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
            iVar6 = *(int *)(iVar3 + 4);
            if (*(int *)(iVar6 + 8) == iVar3) {
              *(int *)(iVar6 + 8) = iVar5;
            }
            else {
              *(int *)(iVar6 + 0xc) = iVar5;
            }
          }
          *(int *)(iVar5 + 8) = iVar3;
          goto LAB_001d335c;
        }
        pbVar12 = *(byte **)(pbVar7 + 0xc);
        in_r12 = (byte *)0x0;
        if (pbVar12 != (byte *)0x0) {
          in_r12 = (byte *)(uint)*pbVar12;
        }
        if (pbVar12 != (byte *)0x0 && in_r12 != (byte *)0x1) goto LAB_001d312c;
LAB_001d33f8:
        *pbVar7 = 0;
        pbVar8 = *(byte **)(pbVar8 + 4);
      }
    }
    if (pbVar7 == (byte *)0x0) goto LAB_001d3364;
    pbVar4 = (byte *)(uint)*pbVar7;
    if (pbVar4 == (byte *)0x0) {
      *pbVar7 = 1;
      **(undefined1 **)(pbVar8 + 4) = 0;
      iVar5 = *(int *)(pbVar8 + 4);
      iVar3 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) != 0) {
        *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar5;
      }
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      in_r12 = *(byte **)(param_2 + 0x10);
      if (*(int *)(in_r12 + 4) == iVar5) {
        *(int *)(in_r12 + 4) = iVar3;
      }
      else {
        in_r12 = *(byte **)(iVar5 + 4);
        if (*(int *)(in_r12 + 0xc) == iVar5) {
          *(int *)(in_r12 + 0xc) = iVar3;
        }
        else {
          *(int *)(in_r12 + 8) = iVar3;
        }
      }
      *(int *)(iVar3 + 0xc) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      pbVar4 = *(byte **)(pbVar8 + 4);
      pbVar7 = *(byte **)(pbVar4 + 8);
      if (pbVar7 == (byte *)0x0) goto LAB_001d3364;
    }
    in_r12 = *(byte **)(pbVar7 + 0xc);
    if (in_r12 != (byte *)0x0) {
      pbVar4 = (byte *)(uint)*in_r12;
    }
    if (in_r12 == (byte *)0x0 || pbVar4 == (byte *)0x1) {
      pcVar11 = *(char **)(pbVar7 + 8);
      cVar2 = '\0';
      if (pcVar11 != (char *)0x0) {
        cVar2 = *pcVar11;
      }
      if (pcVar11 == (char *)0x0 || cVar2 == '\x01') goto LAB_001d33f8;
    }
    pcVar11 = *(char **)(pbVar7 + 8);
    cVar2 = '\0';
    if (pcVar11 != (char *)0x0) {
      cVar2 = *pcVar11;
    }
    if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
      if (in_r12 != (byte *)0x0) {
        *in_r12 = 1;
      }
      *pbVar7 = 0;
      iVar3 = *(int *)(pbVar7 + 0xc);
      *(undefined4 *)(pbVar7 + 0xc) = *(undefined4 *)(iVar3 + 8);
      if (*(int *)(iVar3 + 8) != 0) {
        *(byte **)(*(int *)(iVar3 + 8) + 4) = pbVar7;
      }
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pbVar7 + 4);
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar7) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
      }
      else {
        iVar5 = *(int *)(pbVar7 + 4);
        if (*(byte **)(iVar5 + 8) == pbVar7) {
          *(int *)(iVar5 + 8) = iVar3;
        }
        else {
          *(int *)(iVar5 + 0xc) = iVar3;
        }
      }
      *(byte **)(iVar3 + 8) = pbVar7;
      *(int *)(pbVar7 + 4) = iVar3;
      pbVar7 = *(byte **)(*(int *)(pbVar8 + 4) + 8);
      if (pbVar7 == (byte *)0x0) goto LAB_001d30c4;
    }
    *pbVar7 = **(byte **)(pbVar8 + 4);
    **(undefined1 **)(pbVar8 + 4) = 1;
    if (*(undefined1 **)(pbVar7 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(pbVar7 + 8) = 1;
    }
    iVar3 = *(int *)(pbVar8 + 4);
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
      iVar6 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar6 + 0xc) == iVar3) {
        *(int *)(iVar6 + 0xc) = iVar5;
      }
      else {
        *(int *)(iVar6 + 8) = iVar5;
      }
    }
    *(int *)(iVar5 + 0xc) = iVar3;
LAB_001d335c:
    *(int *)(iVar3 + 4) = iVar5;
LAB_001d30c4:
    *pbVar8 = 1;
  }
  *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(param_2 + 4);
  FUN_0007e430(pbVar9 + 0x18);
  *(byte **)(param_2 + 4) = pbVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  *param_1 = iVar10;
  return;
}

