// rea decompile_all
// name: FUN_001d1974
// address: 0x1d1974
// body: available
// range: 0x1d1974-0x1d203b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d1974(undefined4 *param_1,int param_2,int *param_3,code *param_4)

{
  code cVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  code *pcVar7;
  byte *pbVar8;
  code *pcVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  bool bVar16;
  code *pcStack_28;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(iVar6 + 8);
  bVar16 = *param_3 == iVar3;
  if (bVar16) {
    iVar3 = *(int *)param_4;
  }
  pcStack_28 = param_4;
  if ((bVar16 && iVar3 == iVar6) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar3 = *(int *)(iVar6 + 4);
    while (iVar3 != 0) {
      FUN_001d203c(param_2,*(undefined4 *)(iVar3 + 0xc));
      iVar6 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_2 + 4);
      FUN_0009af80(iVar3 + 0x14);
      *(int *)(param_2 + 4) = iVar3;
      iVar3 = iVar6;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
    return;
  }
  do {
    pcVar14 = (code *)*param_3;
    if (pcVar14 == *(code **)param_4) {
      return;
    }
    FUN_001c05fc(param_3);
    pcVar9 = *(code **)(param_2 + 0x10);
    pcStack_28 = pcVar14;
    if (pcVar14 != *(code **)(param_2 + 0x10)) {
      FUN_001c05fc(&pcStack_28);
      pcVar7 = *(code **)(pcVar14 + 8);
      pcVar9 = pcVar14;
      pcVar15 = pcVar14;
      if (pcVar7 == entry) {
        pcVar13 = *(code **)(pcVar14 + 0xc);
        if (*(code **)(pcVar14 + 0xc) != entry) goto LAB_001d1a90;
        pcVar13 = *(code **)(pcVar14 + 4);
        if (*(code **)(param_2 + 0x10) == pcVar13) {
          *(code **)(*(code **)(param_2 + 0x10) + 0xc) = pcVar13;
          *(code **)(*(int *)(param_2 + 0x10) + 8) = pcVar13;
          *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
        }
        else if (*(code **)(pcVar13 + 8) == pcVar14) {
          *(undefined4 *)(pcVar13 + 8) = 0;
          pcVar9 = *(code **)(*(int *)(param_2 + 0x10) + 8);
          if (pcVar9 == pcVar14) {
            *(code **)(*(int *)(param_2 + 0x10) + 8) = pcVar13;
          }
        }
        else {
          *(undefined4 *)(pcVar13 + 0xc) = 0;
          pcVar9 = *(code **)(*(int *)(param_2 + 0x10) + 0xc);
          if (pcVar9 == pcVar14) {
            *(code **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar13;
          }
        }
      }
      else {
        pcVar4 = *(code **)(pcVar14 + 0xc);
        pcVar13 = pcVar7;
        if (*(code **)(pcVar14 + 0xc) != entry) {
          do {
            pcVar15 = pcVar4;
            pcVar4 = *(code **)(pcVar15 + 8);
          } while (*(code **)(pcVar15 + 8) != entry);
          pcVar13 = *(code **)(pcVar15 + 0xc);
        }
LAB_001d1a90:
        if (pcVar15 == pcVar14) {
          *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar15 + 4);
          if (*(code **)(*(int *)(param_2 + 0x10) + 4) == pcVar14) {
            *(code **)(*(int *)(param_2 + 0x10) + 4) = pcVar13;
          }
          else {
            iVar3 = *(int *)(pcVar14 + 4);
            if (*(code **)(iVar3 + 8) == pcVar14) {
              *(code **)(iVar3 + 8) = pcVar13;
            }
            else {
              *(code **)(iVar3 + 0xc) = pcVar13;
            }
          }
          iVar3 = *(int *)(param_2 + 0x10);
          if (*(code **)(iVar3 + 8) == pcVar14) {
            pcVar7 = pcVar13;
            if (*(int *)(pcVar14 + 0xc) == 0) {
              *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(pcVar14 + 4);
            }
            else {
              do {
                pcVar4 = pcVar7;
                pcVar7 = *(code **)(pcVar4 + 8);
              } while (pcVar7 != entry);
              *(code **)(iVar3 + 8) = pcVar4;
            }
          }
          iVar3 = *(int *)(param_2 + 0x10);
          if (*(code **)(iVar3 + 0xc) == pcVar14) {
            pcVar7 = pcVar13;
            if (*(int *)(pcVar14 + 8) == 0) {
              *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(pcVar14 + 4);
            }
            else {
              do {
                pcVar14 = pcVar7;
                pcVar7 = *(code **)(pcVar14 + 0xc);
              } while (pcVar7 != entry);
              *(code **)(iVar3 + 0xc) = pcVar14;
            }
          }
        }
        else {
          *(code **)(pcVar7 + 4) = pcVar15;
          *(undefined4 *)(pcVar15 + 8) = *(undefined4 *)(pcVar14 + 8);
          if (*(code **)(pcVar14 + 0xc) == pcVar15) {
            if (pcVar13 != entry) {
              *(code **)(pcVar13 + 4) = pcVar15;
            }
          }
          else {
            if (pcVar13 != entry) {
              *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar15 + 4);
            }
            *(code **)(*(int *)(pcVar15 + 4) + 8) = pcVar13;
            *(undefined4 *)(pcVar15 + 0xc) = *(undefined4 *)(pcVar14 + 0xc);
            *(code **)(*(int *)(pcVar14 + 0xc) + 4) = pcVar15;
          }
          if (*(code **)(*(int *)(param_2 + 0x10) + 4) == pcVar14) {
            *(code **)(*(int *)(param_2 + 0x10) + 4) = pcVar15;
          }
          else {
            iVar3 = *(int *)(pcVar14 + 4);
            if (*(code **)(iVar3 + 8) == pcVar14) {
              *(code **)(iVar3 + 8) = pcVar15;
            }
            else {
              *(code **)(iVar3 + 0xc) = pcVar15;
            }
          }
          *(undefined4 *)(pcVar15 + 4) = *(undefined4 *)(pcVar14 + 4);
          cVar1 = *pcVar15;
          if (pcVar13 == entry) {
            pcVar13 = pcVar15;
          }
          *pcVar15 = *pcVar14;
          *pcVar14 = cVar1;
          pcVar15 = pcVar14;
        }
      }
      pcVar14 = *(code **)(param_2 + 0x10);
      bVar16 = pcVar14 != pcVar13;
      if (bVar16) {
        pcVar14 = (code *)(uint)(byte)*pcVar15;
      }
      if (bVar16 && pcVar14 != entry) {
LAB_001d1eec:
        while( true ) {
          if ((*(code **)(*(int *)(param_2 + 0x10) + 4) == pcVar13) || (*pcVar13 != (code)0x1))
          goto LAB_001d1f08;
          pcVar14 = *(code **)(pcVar13 + 4);
          pcVar7 = *(code **)(pcVar14 + 8);
          if (pcVar7 != pcVar13) break;
          pcVar5 = *(char **)(pcVar14 + 0xc);
          if (pcVar5 != (char *)0x0) {
            if (*pcVar5 == '\0') {
              *pcVar5 = '\x01';
              **(undefined1 **)(pcVar13 + 4) = 0;
              iVar3 = *(int *)(pcVar13 + 4);
              iVar6 = *(int *)(iVar3 + 0xc);
              *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
              if (*(int *)(iVar6 + 8) != 0) {
                *(int *)(*(int *)(iVar6 + 8) + 4) = iVar3;
              }
              *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
              pcVar9 = *(code **)(param_2 + 0x10);
              if (*(int *)(pcVar9 + 4) == iVar3) {
                *(int *)(pcVar9 + 4) = iVar6;
              }
              else {
                pcVar9 = *(code **)(iVar3 + 4);
                if (*(int *)(pcVar9 + 8) == iVar3) {
                  *(int *)(pcVar9 + 8) = iVar6;
                }
                else {
                  *(int *)(pcVar9 + 0xc) = iVar6;
                }
              }
              *(int *)(iVar6 + 8) = iVar3;
              *(int *)(iVar3 + 4) = iVar6;
              pcVar5 = *(char **)(*(int *)(pcVar13 + 4) + 0xc);
              if (pcVar5 == (char *)0x0) goto LAB_001d1d24;
            }
            pbVar8 = *(byte **)(pcVar5 + 8);
            if (pbVar8 != (byte *)0x0) {
              pcVar9 = (code *)(uint)*pbVar8;
            }
            if (pbVar8 == (byte *)0x0 || pcVar9 == (code *)0x1) {
              pbVar12 = *(byte **)(pcVar5 + 0xc);
              pcVar9 = entry;
              if (pbVar12 != (byte *)0x0) {
                pcVar9 = (code *)(uint)*pbVar12;
              }
              if (pbVar12 == (byte *)0x0 || pcVar9 == (code *)0x1) {
                *pcVar5 = '\0';
                goto LAB_001d1d28;
              }
            }
            pcVar10 = *(char **)(pcVar5 + 0xc);
            cVar2 = '\0';
            if (pcVar10 != (char *)0x0) {
              cVar2 = *pcVar10;
            }
            if (pcVar10 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar8 != (byte *)0x0) {
                *pbVar8 = 1;
              }
              *pcVar5 = '\0';
              iVar3 = *(int *)(pcVar5 + 8);
              *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(iVar3 + 0xc);
              if (*(int *)(iVar3 + 0xc) != 0) {
                *(char **)(*(int *)(iVar3 + 0xc) + 4) = pcVar5;
              }
              *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar5 + 4);
              if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar5) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
              }
              else {
                iVar6 = *(int *)(pcVar5 + 4);
                if (*(char **)(iVar6 + 0xc) == pcVar5) {
                  *(int *)(iVar6 + 0xc) = iVar3;
                }
                else {
                  *(int *)(iVar6 + 8) = iVar3;
                }
              }
              *(char **)(iVar3 + 0xc) = pcVar5;
              *(int *)(pcVar5 + 4) = iVar3;
              pcVar5 = *(char **)(*(int *)(pcVar13 + 4) + 0xc);
              if (pcVar5 == (char *)0x0) goto LAB_001d1f08;
            }
            *pcVar5 = **(char **)(pcVar13 + 4);
            **(undefined1 **)(pcVar13 + 4) = 1;
            if (*(undefined1 **)(pcVar5 + 0xc) != (undefined1 *)0x0) {
              **(undefined1 **)(pcVar5 + 0xc) = 1;
            }
            iVar3 = *(int *)(pcVar13 + 4);
            iVar6 = *(int *)(iVar3 + 0xc);
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
            if (*(int *)(iVar6 + 8) != 0) {
              *(int *)(*(int *)(iVar6 + 8) + 4) = iVar3;
            }
            *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
            if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar3) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
            }
            else {
              iVar11 = *(int *)(iVar3 + 4);
              if (*(int *)(iVar11 + 8) == iVar3) {
                *(int *)(iVar11 + 8) = iVar6;
              }
              else {
                *(int *)(iVar11 + 0xc) = iVar6;
              }
            }
            *(int *)(iVar6 + 8) = iVar3;
            goto LAB_001d1edc;
          }
LAB_001d1d24:
          *pcVar13 = (code)0x0;
LAB_001d1d28:
          pcVar13 = *(code **)(pcVar13 + 4);
        }
        if (pcVar7 == entry) {
LAB_001d1ee4:
          *pcVar13 = (code)0x0;
          pcVar13 = pcVar14;
          goto LAB_001d1eec;
        }
        pcVar14 = (code *)(uint)(byte)*pcVar7;
        if (pcVar14 == entry) {
          *pcVar7 = (code)0x1;
          **(undefined1 **)(pcVar13 + 4) = 0;
          iVar3 = *(int *)(pcVar13 + 4);
          iVar6 = *(int *)(iVar3 + 8);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 0xc);
          if (*(int *)(iVar6 + 0xc) != 0) {
            *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar3;
          }
          *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
          pcVar9 = *(code **)(param_2 + 0x10);
          if (*(int *)(pcVar9 + 4) == iVar3) {
            *(int *)(pcVar9 + 4) = iVar6;
          }
          else {
            pcVar9 = *(code **)(iVar3 + 4);
            if (*(int *)(pcVar9 + 0xc) == iVar3) {
              *(int *)(pcVar9 + 0xc) = iVar6;
            }
            else {
              *(int *)(pcVar9 + 8) = iVar6;
            }
          }
          *(int *)(iVar6 + 0xc) = iVar3;
          *(int *)(iVar3 + 4) = iVar6;
          pcVar14 = *(code **)(pcVar13 + 4);
          pcVar7 = *(code **)(pcVar14 + 8);
          if (pcVar7 == entry) goto LAB_001d1ee4;
        }
        pcVar9 = *(code **)(pcVar7 + 0xc);
        if (pcVar9 != entry) {
          pcVar14 = (code *)(uint)(byte)*pcVar9;
        }
        if (pcVar9 == entry || pcVar14 == (code *)0x1) {
          pcVar5 = *(char **)(pcVar7 + 8);
          cVar2 = '\0';
          if (pcVar5 != (char *)0x0) {
            cVar2 = *pcVar5;
          }
          if (pcVar5 == (char *)0x0 || cVar2 == '\x01') {
            *pcVar7 = (code)0x0;
            goto LAB_001d1d28;
          }
        }
        pcVar5 = *(char **)(pcVar7 + 8);
        cVar2 = '\0';
        if (pcVar5 != (char *)0x0) {
          cVar2 = *pcVar5;
        }
        if (pcVar5 == (char *)0x0 || cVar2 == '\x01') {
          if (pcVar9 != entry) {
            *pcVar9 = (code)0x1;
          }
          *pcVar7 = (code)0x0;
          iVar3 = *(int *)(pcVar7 + 0xc);
          *(undefined4 *)(pcVar7 + 0xc) = *(undefined4 *)(iVar3 + 8);
          if (*(int *)(iVar3 + 8) != 0) {
            *(code **)(*(int *)(iVar3 + 8) + 4) = pcVar7;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar7 + 4);
          if (*(code **)(*(int *)(param_2 + 0x10) + 4) == pcVar7) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
          }
          else {
            iVar6 = *(int *)(pcVar7 + 4);
            if (*(code **)(iVar6 + 8) == pcVar7) {
              *(int *)(iVar6 + 8) = iVar3;
            }
            else {
              *(int *)(iVar6 + 0xc) = iVar3;
            }
          }
          *(code **)(iVar3 + 8) = pcVar7;
          *(int *)(pcVar7 + 4) = iVar3;
          pcVar7 = *(code **)(*(int *)(pcVar13 + 4) + 8);
          if (pcVar7 == entry) goto LAB_001d1f08;
        }
        *pcVar7 = **(code **)(pcVar13 + 4);
        **(undefined1 **)(pcVar13 + 4) = 1;
        if (*(undefined1 **)(pcVar7 + 8) != (undefined1 *)0x0) {
          **(undefined1 **)(pcVar7 + 8) = 1;
        }
        iVar3 = *(int *)(pcVar13 + 4);
        iVar6 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(iVar6 + 0xc) != 0) {
          *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar3;
        }
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar3) {
          *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
        }
        else {
          iVar11 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar11 + 0xc) == iVar3) {
            *(int *)(iVar11 + 0xc) = iVar6;
          }
          else {
            *(int *)(iVar11 + 8) = iVar6;
          }
        }
        *(int *)(iVar6 + 0xc) = iVar3;
LAB_001d1edc:
        *(int *)(iVar3 + 4) = iVar6;
LAB_001d1f08:
        *pcVar13 = (code)0x1;
      }
      *(undefined4 *)(pcVar15 + 0xc) = *(undefined4 *)(param_2 + 4);
      FUN_0009af80(pcVar15 + 0x14);
      *(code **)(param_2 + 4) = pcVar15;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      pcVar9 = pcStack_28;
    }
    *param_1 = pcVar9;
  } while( true );
}

