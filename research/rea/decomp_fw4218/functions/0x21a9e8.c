// rea decompile_all
// name: FUN_0021a9e8
// address: 0x21a9e8
// body: available
// range: 0x21a9e8-0x21ae99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021a9e8(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x10);
  if (((*param_3 == *(int *)(iVar2 + 8)) && (*param_4 == iVar2)) && (*(int *)(param_2 + 0x14) != 0))
  {
    iVar2 = *(int *)(iVar2 + 4);
    while (iVar2 != 0) {
      FUN_0021ae9a(param_2,*(undefined4 *)(iVar2 + 0xc));
      iVar6 = *(int *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_2 + 4) = iVar2;
      iVar2 = iVar6;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    while (pcVar7 = (char *)*param_3, pcVar7 != (char *)*param_4) {
      if (*(int *)(pcVar7 + 0xc) == 0) {
        for (iVar2 = *(int *)(pcVar7 + 4); *param_3 == *(int *)(iVar2 + 0xc);
            iVar2 = *(int *)(iVar2 + 4)) {
          *param_3 = iVar2;
        }
        if (*(int *)(*param_3 + 0xc) != iVar2) {
          *param_3 = iVar2;
        }
      }
      else {
        *param_3 = *(int *)(pcVar7 + 0xc);
        iVar2 = *param_3;
        while (iVar2 = *(int *)(iVar2 + 8), iVar2 != 0) {
          *param_3 = iVar2;
        }
      }
      pcVar3 = *(char **)(param_2 + 0x10);
      if (pcVar7 != pcVar3) {
        pcVar4 = *(char **)(pcVar7 + 0xc);
        if (*(char **)(pcVar7 + 0xc) == (char *)0x0) {
          pcVar4 = *(char **)(pcVar7 + 4);
          pcVar3 = pcVar7;
          while (pcVar8 = pcVar4, pcVar3 == *(char **)(pcVar8 + 0xc)) {
            pcVar3 = pcVar8;
            pcVar4 = *(char **)(pcVar8 + 4);
          }
          if (*(char **)(pcVar3 + 0xc) != pcVar8) {
            pcVar3 = pcVar8;
          }
        }
        else {
          do {
            pcVar3 = pcVar4;
            pcVar4 = *(char **)(pcVar3 + 8);
          } while (*(char **)(pcVar3 + 8) != (char *)0x0);
        }
        pcVar9 = *(char **)(pcVar7 + 8);
        pcVar4 = *(char **)(pcVar7 + 0xc);
        pcVar8 = pcVar7;
        if (pcVar9 == (char *)0x0) {
          pcVar5 = pcVar4;
          if (pcVar4 != (char *)0x0) goto LAB_0021ab12;
          pcVar5 = *(char **)(pcVar7 + 4);
          if (*(char **)(param_2 + 0x10) == pcVar5) {
            *(char **)(*(char **)(param_2 + 0x10) + 0xc) = pcVar5;
            *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar5;
            *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
          }
          else if (*(char **)(pcVar5 + 8) == pcVar7) {
            pcVar5[8] = '\0';
            pcVar5[9] = '\0';
            pcVar5[10] = '\0';
            pcVar5[0xb] = '\0';
            if (*(char **)(*(int *)(param_2 + 0x10) + 8) == pcVar7) {
              *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar5;
            }
          }
          else {
            pcVar5[0xc] = '\0';
            pcVar5[0xd] = '\0';
            pcVar5[0xe] = '\0';
            pcVar5[0xf] = '\0';
            if (*(char **)(*(int *)(param_2 + 0x10) + 0xc) == pcVar7) {
              *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar5;
            }
          }
        }
        else {
          pcVar5 = pcVar9;
          if (pcVar4 != (char *)0x0) {
            do {
              pcVar8 = pcVar4;
              pcVar4 = *(char **)(pcVar8 + 8);
            } while (*(char **)(pcVar8 + 8) != (char *)0x0);
            pcVar5 = *(char **)(pcVar8 + 0xc);
          }
LAB_0021ab12:
          if (pcVar8 == pcVar7) {
            *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar8 + 4);
            if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar7) {
              *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar5;
            }
            else {
              iVar2 = *(int *)(pcVar7 + 4);
              if (*(char **)(iVar2 + 8) == pcVar7) {
                *(char **)(iVar2 + 8) = pcVar5;
              }
              else {
                *(char **)(iVar2 + 0xc) = pcVar5;
              }
            }
            iVar2 = *(int *)(param_2 + 0x10);
            if (*(char **)(iVar2 + 8) == pcVar7) {
              pcVar4 = pcVar5;
              if (*(int *)(pcVar7 + 0xc) == 0) {
                *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(pcVar7 + 4);
              }
              else {
                do {
                  pcVar9 = pcVar4;
                  pcVar4 = *(char **)(pcVar9 + 8);
                } while (pcVar4 != (char *)0x0);
                *(char **)(iVar2 + 8) = pcVar9;
              }
            }
            iVar2 = *(int *)(param_2 + 0x10);
            if (*(char **)(iVar2 + 0xc) == pcVar7) {
              pcVar4 = pcVar5;
              if (*(int *)(pcVar7 + 8) == 0) {
                *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(pcVar7 + 4);
              }
              else {
                do {
                  pcVar7 = pcVar4;
                  pcVar4 = *(char **)(pcVar7 + 0xc);
                } while (pcVar4 != (char *)0x0);
                *(char **)(iVar2 + 0xc) = pcVar7;
              }
            }
          }
          else {
            *(char **)(pcVar9 + 4) = pcVar8;
            *(undefined4 *)(pcVar8 + 8) = *(undefined4 *)(pcVar7 + 8);
            if (*(char **)(pcVar7 + 0xc) == pcVar8) {
              if (pcVar5 != (char *)0x0) {
                *(char **)(pcVar5 + 4) = pcVar8;
              }
            }
            else {
              if (pcVar5 != (char *)0x0) {
                *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar8 + 4);
              }
              *(char **)(*(int *)(pcVar8 + 4) + 8) = pcVar5;
              *(undefined4 *)(pcVar8 + 0xc) = *(undefined4 *)(pcVar7 + 0xc);
              *(char **)(*(int *)(pcVar7 + 0xc) + 4) = pcVar8;
            }
            if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar7) {
              *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar8;
            }
            else {
              iVar2 = *(int *)(pcVar7 + 4);
              if (*(char **)(iVar2 + 8) == pcVar7) {
                *(char **)(iVar2 + 8) = pcVar8;
              }
              else {
                *(char **)(iVar2 + 0xc) = pcVar8;
              }
            }
            *(undefined4 *)(pcVar8 + 4) = *(undefined4 *)(pcVar7 + 4);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = pcVar8;
            }
            cVar1 = *pcVar8;
            *pcVar8 = *pcVar7;
            *pcVar7 = cVar1;
            pcVar8 = pcVar7;
          }
        }
        if ((*(char **)(param_2 + 0x10) != pcVar5) && (*pcVar8 != '\0')) {
LAB_0021ad4a:
          if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar5) || (*pcVar5 != '\x01'))
          goto LAB_0021ad5a;
          pcVar4 = *(char **)(pcVar5 + 4);
          pcVar7 = *(char **)(pcVar4 + 8);
          if (pcVar7 != pcVar5) {
            if (pcVar7 == (char *)0x0) goto LAB_0021ad44;
            if (*pcVar7 == '\0') {
              *pcVar7 = '\x01';
              **(undefined1 **)(pcVar5 + 4) = 0;
              iVar2 = *(int *)(pcVar5 + 4);
              iVar6 = *(int *)(iVar2 + 8);
              *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 0xc);
              if (*(int *)(iVar6 + 0xc) != 0) {
                *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar2;
              }
              *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 4);
              if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
              }
              else {
                iVar10 = *(int *)(iVar2 + 4);
                if (*(int *)(iVar10 + 0xc) == iVar2) {
                  *(int *)(iVar10 + 0xc) = iVar6;
                }
                else {
                  *(int *)(iVar10 + 8) = iVar6;
                }
              }
              *(int *)(iVar6 + 0xc) = iVar2;
              *(int *)(iVar2 + 4) = iVar6;
              pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 8);
              if (pcVar7 == (char *)0x0) goto LAB_0021adcc;
            }
            pcVar4 = *(char **)(pcVar7 + 0xc);
            if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\x01')) ||
               ((*(char **)(pcVar7 + 8) != (char *)0x0 && (**(char **)(pcVar7 + 8) != '\x01')))) {
              if ((*(char **)(pcVar7 + 8) == (char *)0x0) || (**(char **)(pcVar7 + 8) == '\x01')) {
                if (pcVar4 != (char *)0x0) {
                  *pcVar4 = '\x01';
                }
                *pcVar7 = '\0';
                iVar2 = *(int *)(pcVar7 + 0xc);
                *(undefined4 *)(pcVar7 + 0xc) = *(undefined4 *)(iVar2 + 8);
                if (*(int *)(iVar2 + 8) != 0) {
                  *(char **)(*(int *)(iVar2 + 8) + 4) = pcVar7;
                }
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(pcVar7 + 4);
                if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar7) {
                  *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
                }
                else {
                  iVar6 = *(int *)(pcVar7 + 4);
                  if (*(char **)(iVar6 + 8) == pcVar7) {
                    *(int *)(iVar6 + 8) = iVar2;
                  }
                  else {
                    *(int *)(iVar6 + 0xc) = iVar2;
                  }
                }
                *(char **)(iVar2 + 8) = pcVar7;
                *(int *)(pcVar7 + 4) = iVar2;
                pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 8);
                if (pcVar7 == (char *)0x0) goto LAB_0021ad5a;
              }
              *pcVar7 = **(char **)(pcVar5 + 4);
              **(undefined1 **)(pcVar5 + 4) = 1;
              if (*(undefined1 **)(pcVar7 + 8) != (undefined1 *)0x0) {
                **(undefined1 **)(pcVar7 + 8) = 1;
              }
              iVar6 = *(int *)(pcVar5 + 4);
              iVar2 = *(int *)(iVar6 + 8);
              *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar2 + 0xc);
              if (*(int *)(iVar2 + 0xc) != 0) {
                *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar6;
              }
              *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar6 + 4);
              if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar6) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
              }
              else {
                iVar10 = *(int *)(iVar6 + 4);
                if (*(int *)(iVar10 + 0xc) == iVar6) {
                  *(int *)(iVar10 + 0xc) = iVar2;
                }
                else {
                  *(int *)(iVar10 + 8) = iVar2;
                }
              }
              *(int *)(iVar2 + 0xc) = iVar6;
              *(int *)(iVar6 + 4) = iVar2;
              goto LAB_0021ad5a;
            }
LAB_0021adec:
            *pcVar7 = '\0';
LAB_0021ac80:
            pcVar5 = *(char **)(pcVar5 + 4);
            goto LAB_0021ad4a;
          }
          pcVar7 = *(char **)(pcVar4 + 0xc);
          if (pcVar7 == (char *)0x0) {
LAB_0021ad44:
            *pcVar5 = '\0';
            pcVar5 = pcVar4;
            goto LAB_0021ad4a;
          }
          if (*pcVar7 == '\0') {
            *pcVar7 = '\x01';
            **(undefined1 **)(pcVar5 + 4) = 0;
            iVar2 = *(int *)(pcVar5 + 4);
            iVar6 = *(int *)(iVar2 + 0xc);
            *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar6 + 8);
            if (*(int *)(iVar6 + 8) != 0) {
              *(int *)(*(int *)(iVar6 + 8) + 4) = iVar2;
            }
            *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 4);
            if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
            }
            else {
              iVar10 = *(int *)(iVar2 + 4);
              if (*(int *)(iVar10 + 8) == iVar2) {
                *(int *)(iVar10 + 8) = iVar6;
              }
              else {
                *(int *)(iVar10 + 0xc) = iVar6;
              }
            }
            *(int *)(iVar6 + 8) = iVar2;
            *(int *)(iVar2 + 4) = iVar6;
            pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
            if (pcVar7 != (char *)0x0) goto LAB_0021ac5a;
LAB_0021adcc:
            *pcVar5 = '\0';
            goto LAB_0021ac80;
          }
LAB_0021ac5a:
          pcVar4 = *(char **)(pcVar7 + 8);
          if (((pcVar4 == (char *)0x0) || (*pcVar4 == '\x01')) &&
             ((*(char **)(pcVar7 + 0xc) == (char *)0x0 || (**(char **)(pcVar7 + 0xc) == '\x01'))))
          goto LAB_0021adec;
          if ((*(char **)(pcVar7 + 0xc) == (char *)0x0) || (**(char **)(pcVar7 + 0xc) == '\x01')) {
            if (pcVar4 != (char *)0x0) {
              *pcVar4 = '\x01';
            }
            *pcVar7 = '\0';
            iVar2 = *(int *)(pcVar7 + 8);
            *(undefined4 *)(pcVar7 + 8) = *(undefined4 *)(iVar2 + 0xc);
            if (*(int *)(iVar2 + 0xc) != 0) {
              *(char **)(*(int *)(iVar2 + 0xc) + 4) = pcVar7;
            }
            *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(pcVar7 + 4);
            if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar7) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
            }
            else {
              iVar6 = *(int *)(pcVar7 + 4);
              if (*(char **)(iVar6 + 0xc) == pcVar7) {
                *(int *)(iVar6 + 0xc) = iVar2;
              }
              else {
                *(int *)(iVar6 + 8) = iVar2;
              }
            }
            *(char **)(iVar2 + 0xc) = pcVar7;
            *(int *)(pcVar7 + 4) = iVar2;
            pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
            if (pcVar7 == (char *)0x0) goto LAB_0021ad5a;
          }
          *pcVar7 = **(char **)(pcVar5 + 4);
          **(undefined1 **)(pcVar5 + 4) = 1;
          if (*(undefined1 **)(pcVar7 + 0xc) != (undefined1 *)0x0) {
            **(undefined1 **)(pcVar7 + 0xc) = 1;
          }
          iVar6 = *(int *)(pcVar5 + 4);
          iVar2 = *(int *)(iVar6 + 0xc);
          *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar2 + 8);
          if (*(int *)(iVar2 + 8) != 0) {
            *(int *)(*(int *)(iVar2 + 8) + 4) = iVar6;
          }
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar6 + 4);
          if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar6) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar2;
          }
          else {
            iVar10 = *(int *)(iVar6 + 4);
            if (*(int *)(iVar10 + 8) == iVar6) {
              *(int *)(iVar10 + 8) = iVar2;
            }
            else {
              *(int *)(iVar10 + 0xc) = iVar2;
            }
          }
          *(int *)(iVar2 + 8) = iVar6;
          *(int *)(iVar6 + 4) = iVar2;
LAB_0021ad5a:
          *pcVar5 = '\x01';
        }
        *(undefined4 *)(pcVar8 + 0xc) = *(undefined4 *)(param_2 + 4);
        *(char **)(param_2 + 4) = pcVar8;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      }
      *param_1 = pcVar3;
    }
  }
  return;
}

