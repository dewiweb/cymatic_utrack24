// rea decompile_all
// name: FUN_0021ba7a
// address: 0x21ba7a
// body: available
// range: 0x21ba7a-0x21be0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021ba7a(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int local_28 [2];
  int *local_20;
  int iStack_1c;
  int *piStack_18;
  
  local_28[0] = *param_3;
  if (local_28[0] == *(int *)(param_2 + 0x10)) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  local_20 = param_1;
  iStack_1c = param_2;
  piStack_18 = param_3;
  FUN_0020a6cc(local_28);
  pcVar4 = (char *)*param_3;
  pcVar2 = *(char **)(pcVar4 + 8);
  pcVar6 = pcVar4;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = *(char **)(pcVar4 + 0xc);
    if (pcVar3 != (char *)0x0) goto LAB_0021baf8;
    pcVar3 = *(char **)(pcVar4 + 4);
    if (*(char **)(param_2 + 0x10) == pcVar3) {
      *(char **)(*(char **)(param_2 + 0x10) + 0xc) = pcVar3;
      *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar3;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    }
    else if (*(char **)(pcVar3 + 8) == pcVar4) {
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
      if (*(char **)(*(int *)(param_2 + 0x10) + 8) == pcVar4) {
        *(char **)(*(int *)(param_2 + 0x10) + 8) = pcVar3;
      }
    }
    else {
      pcVar3[0xc] = '\0';
      pcVar3[0xd] = '\0';
      pcVar3[0xe] = '\0';
      pcVar3[0xf] = '\0';
      if (*(char **)(*(int *)(param_2 + 0x10) + 0xc) == pcVar4) {
        *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar3;
      }
    }
  }
  else {
    pcVar3 = pcVar2;
    pcVar7 = *(char **)(pcVar4 + 0xc);
    if (*(char **)(pcVar4 + 0xc) != (char *)0x0) {
      do {
        pcVar6 = pcVar7;
        pcVar7 = *(char **)(pcVar6 + 8);
      } while (*(char **)(pcVar6 + 8) != (char *)0x0);
      pcVar3 = *(char **)(pcVar6 + 0xc);
    }
LAB_0021baf8:
    if (pcVar6 == pcVar4) {
      *(undefined4 *)(pcVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
      if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar4) {
        *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar3;
      }
      else {
        iVar5 = *(int *)(pcVar4 + 4);
        if (*(char **)(iVar5 + 8) == pcVar4) {
          *(char **)(iVar5 + 8) = pcVar3;
        }
        else {
          *(char **)(iVar5 + 0xc) = pcVar3;
        }
      }
      iVar5 = *(int *)(param_2 + 0x10);
      if (*(char **)(iVar5 + 8) == pcVar4) {
        pcVar2 = pcVar3;
        if (*(int *)(pcVar4 + 0xc) == 0) {
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pcVar4 + 4);
        }
        else {
          do {
            pcVar7 = pcVar2;
            pcVar2 = *(char **)(pcVar7 + 8);
          } while (pcVar2 != (char *)0x0);
          *(char **)(iVar5 + 8) = pcVar7;
        }
      }
      iVar5 = *(int *)(param_2 + 0x10);
      if (*(char **)(iVar5 + 0xc) == pcVar4) {
        pcVar2 = pcVar3;
        if (*(int *)(pcVar4 + 8) == 0) {
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pcVar4 + 4);
        }
        else {
          do {
            pcVar4 = pcVar2;
            pcVar2 = *(char **)(pcVar4 + 0xc);
          } while (pcVar2 != (char *)0x0);
          *(char **)(iVar5 + 0xc) = pcVar4;
        }
      }
    }
    else {
      *(char **)(pcVar2 + 4) = pcVar6;
      *(undefined4 *)(pcVar6 + 8) = *(undefined4 *)(pcVar4 + 8);
      if (*(char **)(pcVar4 + 0xc) == pcVar6) {
        if (pcVar3 != (char *)0x0) {
          *(char **)(pcVar3 + 4) = pcVar6;
        }
      }
      else {
        if (pcVar3 != (char *)0x0) {
          *(undefined4 *)(pcVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
        }
        *(char **)(*(int *)(pcVar6 + 4) + 8) = pcVar3;
        *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(pcVar4 + 0xc);
        *(char **)(*(int *)(pcVar4 + 0xc) + 4) = pcVar6;
      }
      if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar4) {
        *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar6;
      }
      else {
        iVar5 = *(int *)(pcVar4 + 4);
        if (*(char **)(iVar5 + 8) == pcVar4) {
          *(char **)(iVar5 + 8) = pcVar6;
        }
        else {
          *(char **)(iVar5 + 0xc) = pcVar6;
        }
      }
      *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar4 + 4);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = pcVar6;
      }
      cVar1 = *pcVar6;
      *pcVar6 = *pcVar4;
      *pcVar4 = cVar1;
      pcVar6 = pcVar4;
    }
  }
  if ((*(char **)(param_2 + 0x10) != pcVar3) && (*pcVar6 != '\0')) {
    do {
      while( true ) {
        if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar3) || (*pcVar3 != '\x01'))
        goto LAB_0021bbd2;
        pcVar4 = *(char **)(pcVar3 + 4);
        pcVar2 = *(char **)(pcVar4 + 8);
        if (pcVar2 == pcVar3) break;
        if (pcVar2 == (char *)0x0) goto LAB_0021bd04;
        if (*pcVar2 == '\0') {
          *pcVar2 = '\x01';
          **(undefined1 **)(pcVar3 + 4) = 0;
          iVar5 = *(int *)(pcVar3 + 4);
          iVar8 = *(int *)(iVar5 + 8);
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar8 + 0xc);
          if (*(int *)(iVar8 + 0xc) != 0) {
            *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar5;
          }
          *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar5 + 4);
          if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
          }
          else {
            iVar9 = *(int *)(iVar5 + 4);
            if (*(int *)(iVar9 + 0xc) == iVar5) {
              *(int *)(iVar9 + 0xc) = iVar8;
            }
            else {
              *(int *)(iVar9 + 8) = iVar8;
            }
          }
          *(int *)(iVar8 + 0xc) = iVar5;
          *(int *)(iVar5 + 4) = iVar8;
          pcVar2 = *(char **)(*(int *)(pcVar3 + 4) + 8);
          if (pcVar2 == (char *)0x0) goto LAB_0021bd64;
        }
        pcVar4 = *(char **)(pcVar2 + 0xc);
        if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\x01')) ||
           ((*(char **)(pcVar2 + 8) != (char *)0x0 && (**(char **)(pcVar2 + 8) != '\x01')))) {
          if ((*(char **)(pcVar2 + 8) == (char *)0x0) || (**(char **)(pcVar2 + 8) == '\x01')) {
            if (pcVar4 != (char *)0x0) {
              *pcVar4 = '\x01';
            }
            *pcVar2 = '\0';
            iVar5 = *(int *)(pcVar2 + 0xc);
            *(undefined4 *)(pcVar2 + 0xc) = *(undefined4 *)(iVar5 + 8);
            if (*(int *)(iVar5 + 8) != 0) {
              *(char **)(*(int *)(iVar5 + 8) + 4) = pcVar2;
            }
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pcVar2 + 4);
            if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar2) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
            }
            else {
              iVar8 = *(int *)(pcVar2 + 4);
              if (*(char **)(iVar8 + 8) == pcVar2) {
                *(int *)(iVar8 + 8) = iVar5;
              }
              else {
                *(int *)(iVar8 + 0xc) = iVar5;
              }
            }
            *(char **)(iVar5 + 8) = pcVar2;
            *(int *)(pcVar2 + 4) = iVar5;
            pcVar2 = *(char **)(*(int *)(pcVar3 + 4) + 8);
            if (pcVar2 == (char *)0x0) goto LAB_0021bbd2;
          }
          *pcVar2 = **(char **)(pcVar3 + 4);
          **(undefined1 **)(pcVar3 + 4) = 1;
          if (*(undefined1 **)(pcVar2 + 8) != (undefined1 *)0x0) {
            **(undefined1 **)(pcVar2 + 8) = 1;
          }
          iVar5 = *(int *)(pcVar3 + 4);
          iVar8 = *(int *)(iVar5 + 8);
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar8 + 0xc);
          if (*(int *)(iVar8 + 0xc) != 0) {
            *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar5;
          }
          *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar5 + 4);
          if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
          }
          else {
            iVar9 = *(int *)(iVar5 + 4);
            if (*(int *)(iVar9 + 0xc) == iVar5) {
              *(int *)(iVar9 + 0xc) = iVar8;
            }
            else {
              *(int *)(iVar9 + 8) = iVar8;
            }
          }
          *(int *)(iVar8 + 0xc) = iVar5;
          goto LAB_0021be0a;
        }
LAB_0021bd82:
        *pcVar2 = '\0';
LAB_0021bc6c:
        pcVar3 = *(char **)(pcVar3 + 4);
      }
      pcVar2 = *(char **)(pcVar4 + 0xc);
      if (pcVar2 != (char *)0x0) goto code_r0x0021bbf8;
LAB_0021bd04:
      *pcVar3 = '\0';
      pcVar3 = pcVar4;
    } while( true );
  }
LAB_0021bbd4:
  *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(char **)(param_2 + 4) = pcVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  *local_20 = local_28[0];
  return;
code_r0x0021bbf8:
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    **(undefined1 **)(pcVar3 + 4) = 0;
    iVar5 = *(int *)(pcVar3 + 4);
    iVar8 = *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar8 + 8);
    if (*(int *)(iVar8 + 8) != 0) {
      *(int *)(*(int *)(iVar8 + 8) + 4) = iVar5;
    }
    *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar5 + 4);
    if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
    }
    else {
      iVar9 = *(int *)(iVar5 + 4);
      if (*(int *)(iVar9 + 8) == iVar5) {
        *(int *)(iVar9 + 8) = iVar8;
      }
      else {
        *(int *)(iVar9 + 0xc) = iVar8;
      }
    }
    *(int *)(iVar8 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar8;
    pcVar2 = *(char **)(*(int *)(pcVar3 + 4) + 0xc);
    if (pcVar2 != (char *)0x0) goto LAB_0021bc46;
LAB_0021bd64:
    *pcVar3 = '\0';
    goto LAB_0021bc6c;
  }
LAB_0021bc46:
  pcVar4 = *(char **)(pcVar2 + 8);
  if (((pcVar4 == (char *)0x0) || (*pcVar4 == '\x01')) &&
     ((*(char **)(pcVar2 + 0xc) == (char *)0x0 || (**(char **)(pcVar2 + 0xc) == '\x01'))))
  goto LAB_0021bd82;
  if ((*(char **)(pcVar2 + 0xc) == (char *)0x0) || (**(char **)(pcVar2 + 0xc) == '\x01')) {
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\x01';
    }
    *pcVar2 = '\0';
    iVar5 = *(int *)(pcVar2 + 8);
    *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(char **)(*(int *)(iVar5 + 0xc) + 4) = pcVar2;
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pcVar2 + 4);
    if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar2) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
    }
    else {
      iVar8 = *(int *)(pcVar2 + 4);
      if (*(char **)(iVar8 + 0xc) == pcVar2) {
        *(int *)(iVar8 + 0xc) = iVar5;
      }
      else {
        *(int *)(iVar8 + 8) = iVar5;
      }
    }
    *(char **)(iVar5 + 0xc) = pcVar2;
    *(int *)(pcVar2 + 4) = iVar5;
    pcVar2 = *(char **)(*(int *)(pcVar3 + 4) + 0xc);
    if (pcVar2 == (char *)0x0) goto LAB_0021bbd2;
  }
  *pcVar2 = **(char **)(pcVar3 + 4);
  **(undefined1 **)(pcVar3 + 4) = 1;
  if (*(undefined1 **)(pcVar2 + 0xc) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar2 + 0xc) = 1;
  }
  iVar5 = *(int *)(pcVar3 + 4);
  iVar8 = *(int *)(iVar5 + 0xc);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar8 + 8);
  if (*(int *)(iVar8 + 8) != 0) {
    *(int *)(*(int *)(iVar8 + 8) + 4) = iVar5;
  }
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar5 + 4);
  if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
    *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
  }
  else {
    iVar9 = *(int *)(iVar5 + 4);
    if (*(int *)(iVar9 + 8) == iVar5) {
      *(int *)(iVar9 + 8) = iVar8;
    }
    else {
      *(int *)(iVar9 + 0xc) = iVar8;
    }
  }
  *(int *)(iVar8 + 8) = iVar5;
LAB_0021be0a:
  *(int *)(iVar5 + 4) = iVar8;
LAB_0021bbd2:
  *pcVar3 = '\x01';
  goto LAB_0021bbd4;
}

