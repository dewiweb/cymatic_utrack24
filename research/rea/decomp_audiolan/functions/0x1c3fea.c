// rea decompile_all
// name: FUN_001c3fea
// address: 0x1c3fea
// body: available
// range: 0x1c3fea-0x1c43a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c3fea(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  
  iVar8 = *param_3;
  if (iVar8 == *(int *)(param_2 + 0x10)) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  iVar2 = *(int *)(iVar8 + 0xc);
  if (*(int *)(iVar8 + 0xc) == 0) {
    iVar2 = *(int *)(iVar8 + 4);
    while (iVar7 = iVar2, iVar8 == *(int *)(iVar7 + 0xc)) {
      iVar8 = iVar7;
      iVar2 = *(int *)(iVar7 + 4);
    }
    if (*(int *)(iVar8 + 0xc) != iVar7) {
      iVar8 = iVar7;
    }
  }
  else {
    do {
      iVar8 = iVar2;
      iVar2 = *(int *)(iVar8 + 8);
    } while (*(int *)(iVar8 + 8) != 0);
  }
  pcVar5 = (char *)*param_3;
  pcVar3 = *(char **)(pcVar5 + 8);
  pcVar6 = pcVar5;
  if (pcVar3 == (char *)0x0) {
    pcVar4 = *(char **)(pcVar5 + 0xc);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = *(char **)(pcVar5 + 4);
      if (*(char **)(param_2 + 0x10) == pcVar4) {
        *(char **)(*(char **)(param_2 + 0x10) + 0xc) = pcVar4;
        *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar4;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(char **)(pcVar4 + 8) == pcVar5) {
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        if (*(char **)(*(int *)(param_2 + 0x10) + 8) == pcVar5) {
          *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar4;
        }
      }
      else {
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
        if (*(char **)(*(int *)(param_2 + 0x10) + 0xc) == pcVar5) {
          *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar4;
        }
      }
      goto LAB_001c413e;
    }
  }
  else {
    pcVar9 = *(char **)(pcVar5 + 0xc);
    pcVar4 = pcVar3;
    if (*(char **)(pcVar5 + 0xc) != (char *)0x0) {
      do {
        pcVar6 = pcVar9;
        pcVar9 = *(char **)(pcVar6 + 8);
      } while (*(char **)(pcVar6 + 8) != (char *)0x0);
      pcVar4 = *(char **)(pcVar6 + 0xc);
    }
  }
  if (pcVar6 == pcVar5) {
    *(undefined4 *)(pcVar4 + 4) = *(undefined4 *)(pcVar6 + 4);
    if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar5) {
      *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar4;
    }
    else {
      iVar2 = *(int *)(pcVar5 + 4);
      if (*(char **)(iVar2 + 8) == pcVar5) {
        *(char **)(iVar2 + 8) = pcVar4;
      }
      else {
        *(char **)(iVar2 + 0xc) = pcVar4;
      }
    }
    iVar2 = *(int *)(param_2 + 0x10);
    if (*(char **)(iVar2 + 8) == pcVar5) {
      pcVar3 = pcVar4;
      if (*(int *)(pcVar5 + 0xc) == 0) {
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(pcVar5 + 4);
      }
      else {
        do {
          pcVar9 = pcVar3;
          pcVar3 = *(char **)(pcVar9 + 8);
        } while (pcVar3 != (char *)0x0);
        *(char **)(iVar2 + 8) = pcVar9;
      }
    }
    iVar2 = *(int *)(param_2 + 0x10);
    if (*(char **)(iVar2 + 0xc) == pcVar5) {
      pcVar3 = pcVar4;
      if (*(int *)(pcVar5 + 8) == 0) {
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(pcVar5 + 4);
      }
      else {
        do {
          pcVar5 = pcVar3;
          pcVar3 = *(char **)(pcVar5 + 0xc);
        } while (pcVar3 != (char *)0x0);
        *(char **)(iVar2 + 0xc) = pcVar5;
      }
    }
  }
  else {
    *(char **)(pcVar3 + 4) = pcVar6;
    *(undefined4 *)(pcVar6 + 8) = *(undefined4 *)(pcVar5 + 8);
    if (*(char **)(pcVar5 + 0xc) == pcVar6) {
      if (pcVar4 != (char *)0x0) {
        *(char **)(pcVar4 + 4) = pcVar6;
      }
    }
    else {
      if (pcVar4 != (char *)0x0) {
        *(undefined4 *)(pcVar4 + 4) = *(undefined4 *)(pcVar6 + 4);
      }
      *(char **)(*(int *)(pcVar6 + 4) + 8) = pcVar4;
      *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(pcVar5 + 0xc);
      *(char **)(*(int *)(pcVar5 + 0xc) + 4) = pcVar6;
    }
    if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar5) {
      *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar6;
    }
    else {
      iVar2 = *(int *)(pcVar5 + 4);
      if (*(char **)(iVar2 + 8) == pcVar5) {
        *(char **)(iVar2 + 8) = pcVar6;
      }
      else {
        *(char **)(iVar2 + 0xc) = pcVar6;
      }
    }
    *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar5 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = pcVar6;
    }
    cVar1 = *pcVar6;
    *pcVar6 = *pcVar5;
    *pcVar5 = cVar1;
    pcVar6 = pcVar5;
  }
LAB_001c413e:
  if ((*(char **)(param_2 + 0x10) != pcVar4) && (*pcVar6 != '\0')) {
LAB_001c414c:
    while( true ) {
      if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar4) || (*pcVar4 != '\x01'))
      goto LAB_001c415a;
      pcVar5 = *(char **)(pcVar4 + 4);
      pcVar3 = *(char **)(pcVar5 + 8);
      if (pcVar3 != pcVar4) break;
      pcVar3 = *(char **)(pcVar5 + 0xc);
      if (pcVar3 == (char *)0x0) {
LAB_001c4290:
        *pcVar4 = '\0';
        pcVar4 = pcVar5;
      }
      else {
        if (*pcVar3 != '\0') {
LAB_001c41d4:
          pcVar5 = *(char **)(pcVar3 + 8);
          if (((pcVar5 == (char *)0x0) || (*pcVar5 == '\x01')) &&
             ((*(char **)(pcVar3 + 0xc) == (char *)0x0 || (**(char **)(pcVar3 + 0xc) == '\x01'))))
          goto LAB_001c4318;
          if ((*(char **)(pcVar3 + 0xc) == (char *)0x0) || (**(char **)(pcVar3 + 0xc) == '\x01')) {
            if (pcVar5 != (char *)0x0) {
              *pcVar5 = '\x01';
            }
            *pcVar3 = '\0';
            iVar2 = *(int *)(pcVar3 + 8);
            *(undefined4 *)(pcVar3 + 8) = *(undefined4 *)(iVar2 + 0xc);
            if (*(int *)(iVar2 + 0xc) != 0) {
              *(char **)(*(int *)(iVar2 + 0xc) + 4) = pcVar3;
            }
            *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(pcVar3 + 4);
            if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar3) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
            }
            else {
              iVar7 = *(int *)(pcVar3 + 4);
              if (*(char **)(iVar7 + 0xc) == pcVar3) {
                *(int *)(iVar7 + 0xc) = iVar2;
              }
              else {
                *(int *)(iVar7 + 8) = iVar2;
              }
            }
            *(char **)(iVar2 + 0xc) = pcVar3;
            *(int *)(pcVar3 + 4) = iVar2;
            pcVar3 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
            if (pcVar3 == (char *)0x0) goto LAB_001c415a;
          }
          *pcVar3 = **(char **)(pcVar4 + 4);
          **(undefined1 **)(pcVar4 + 4) = 1;
          if (*(undefined1 **)(pcVar3 + 0xc) != (undefined1 *)0x0) {
            **(undefined1 **)(pcVar3 + 0xc) = 1;
          }
          iVar2 = *(int *)(pcVar4 + 4);
          iVar7 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar7 + 8);
          if (*(int *)(iVar7 + 8) != 0) {
            *(int *)(*(int *)(iVar7 + 8) + 4) = iVar2;
          }
          *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar2 + 4);
          if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
          }
          else {
            iVar10 = *(int *)(iVar2 + 4);
            if (*(int *)(iVar10 + 8) == iVar2) {
              *(int *)(iVar10 + 8) = iVar7;
            }
            else {
              *(int *)(iVar10 + 0xc) = iVar7;
            }
          }
          *(int *)(iVar7 + 8) = iVar2;
          goto LAB_001c43a6;
        }
        *pcVar3 = '\x01';
        **(undefined1 **)(pcVar4 + 4) = 0;
        iVar7 = *(int *)(pcVar4 + 4);
        iVar2 = *(int *)(iVar7 + 0xc);
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar2 + 8);
        if (*(int *)(iVar2 + 8) != 0) {
          *(int *)(*(int *)(iVar2 + 8) + 4) = iVar7;
        }
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar7 + 4);
        if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar7) {
          *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
        }
        else {
          iVar10 = *(int *)(iVar7 + 4);
          if (*(int *)(iVar10 + 8) == iVar7) {
            *(int *)(iVar10 + 8) = iVar2;
          }
          else {
            *(int *)(iVar10 + 0xc) = iVar2;
          }
        }
        *(int *)(iVar2 + 8) = iVar7;
        *(int *)(iVar7 + 4) = iVar2;
        pcVar5 = *(char **)(pcVar4 + 4);
        pcVar3 = *(char **)(pcVar5 + 0xc);
        if (pcVar3 != (char *)0x0) goto LAB_001c41d4;
LAB_001c42f8:
        *pcVar4 = '\0';
        pcVar4 = pcVar5;
      }
    }
    if (pcVar3 == (char *)0x0) goto LAB_001c4290;
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x01';
      **(undefined1 **)(pcVar4 + 4) = 0;
      iVar7 = *(int *)(pcVar4 + 4);
      iVar2 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar7;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar7 + 4);
      if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar7) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
      }
      else {
        iVar10 = *(int *)(iVar7 + 4);
        if (*(int *)(iVar10 + 0xc) == iVar7) {
          *(int *)(iVar10 + 0xc) = iVar2;
        }
        else {
          *(int *)(iVar10 + 8) = iVar2;
        }
      }
      *(int *)(iVar2 + 0xc) = iVar7;
      *(int *)(iVar7 + 4) = iVar2;
      pcVar5 = *(char **)(pcVar4 + 4);
      pcVar3 = *(char **)(pcVar5 + 8);
      if (pcVar3 == (char *)0x0) goto LAB_001c42f8;
    }
    pcVar5 = *(char **)(pcVar3 + 0xc);
    if (((pcVar5 == (char *)0x0) || (*pcVar5 == '\x01')) &&
       ((*(char **)(pcVar3 + 8) == (char *)0x0 || (**(char **)(pcVar3 + 8) == '\x01')))) {
LAB_001c4318:
      *pcVar3 = '\0';
      pcVar4 = *(char **)(pcVar4 + 4);
      goto LAB_001c414c;
    }
    if ((*(char **)(pcVar3 + 8) == (char *)0x0) || (**(char **)(pcVar3 + 8) == '\x01')) {
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\x01';
      }
      *pcVar3 = '\0';
      iVar2 = *(int *)(pcVar3 + 0xc);
      *(undefined4 *)(pcVar3 + 0xc) = *(undefined4 *)(iVar2 + 8);
      if (*(int *)(iVar2 + 8) != 0) {
        *(char **)(*(int *)(iVar2 + 8) + 4) = pcVar3;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(pcVar3 + 4);
      if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar3) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
      }
      else {
        iVar7 = *(int *)(pcVar3 + 4);
        if (*(char **)(iVar7 + 8) == pcVar3) {
          *(int *)(iVar7 + 8) = iVar2;
        }
        else {
          *(int *)(iVar7 + 0xc) = iVar2;
        }
      }
      *(char **)(iVar2 + 8) = pcVar3;
      *(int *)(pcVar3 + 4) = iVar2;
      pcVar3 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar3 == (char *)0x0) goto LAB_001c415a;
    }
    *pcVar3 = **(char **)(pcVar4 + 4);
    **(undefined1 **)(pcVar4 + 4) = 1;
    if (*(undefined1 **)(pcVar3 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(pcVar3 + 8) = 1;
    }
    iVar2 = *(int *)(pcVar4 + 4);
    iVar7 = *(int *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar7 + 0xc);
    if (*(int *)(iVar7 + 0xc) != 0) {
      *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar2;
    }
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar2 + 4);
    if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
    }
    else {
      iVar10 = *(int *)(iVar2 + 4);
      if (*(int *)(iVar10 + 0xc) == iVar2) {
        *(int *)(iVar10 + 0xc) = iVar7;
      }
      else {
        *(int *)(iVar10 + 8) = iVar7;
      }
    }
    *(int *)(iVar7 + 0xc) = iVar2;
LAB_001c43a6:
    *(int *)(iVar2 + 4) = iVar7;
LAB_001c415a:
    *pcVar4 = '\x01';
  }
  *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(char **)(param_2 + 4) = pcVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  *param_1 = iVar8;
  return;
}

