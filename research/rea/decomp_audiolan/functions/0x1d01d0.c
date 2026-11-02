// rea decompile_all
// name: FUN_001d01d0
// address: 0x1d01d0
// body: available
// range: 0x1d01d0-0x1d080f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d01d0(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *unaff_r8;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;
  
  iVar7 = *param_3;
  if (iVar7 == *(int *)(param_2 + 0x10)) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  iVar8 = *(int *)(iVar7 + 0xc);
  if (*(int *)(iVar7 + 0xc) == 0) {
    iVar8 = *(int *)(iVar7 + 4);
    while (iVar13 = iVar8, iVar7 == *(int *)(iVar13 + 0xc)) {
      iVar7 = iVar13;
      iVar8 = *(int *)(iVar13 + 4);
    }
    if (*(int *)(iVar7 + 0xc) != iVar13) {
      iVar7 = iVar13;
    }
  }
  else {
    do {
      iVar7 = iVar8;
      iVar8 = *(int *)(iVar7 + 8);
    } while (*(int *)(iVar7 + 8) != 0);
  }
  pbVar5 = (byte *)*param_3;
  pbVar3 = *(byte **)(pbVar5 + 8);
  pbVar6 = pbVar5;
  if (pbVar3 == (byte *)0x0) {
    pbVar4 = *(byte **)(pbVar5 + 0xc);
    if (pbVar4 != (byte *)0x0) goto LAB_001d0270;
    pbVar4 = *(byte **)(pbVar5 + 4);
    if (*(byte **)(param_2 + 0x10) == pbVar4) {
      *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar4;
      *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    }
    else if (*(byte **)(pbVar4 + 8) == pbVar5) {
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar5) {
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      }
    }
    else {
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar5) {
        *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar4;
      }
    }
  }
  else {
    pbVar4 = pbVar3;
    pbVar12 = *(byte **)(pbVar5 + 0xc);
    if (*(byte **)(pbVar5 + 0xc) != (byte *)0x0) {
      do {
        pbVar6 = pbVar12;
        pbVar12 = *(byte **)(pbVar6 + 8);
      } while (*(byte **)(pbVar6 + 8) != (byte *)0x0);
      pbVar4 = *(byte **)(pbVar6 + 0xc);
    }
LAB_001d0270:
    if (pbVar6 == pbVar5) {
      *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar6 + 4);
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar4;
      }
      else {
        iVar8 = *(int *)(pbVar5 + 4);
        if (*(byte **)(iVar8 + 8) == pbVar5) {
          *(byte **)(iVar8 + 8) = pbVar4;
        }
        else {
          *(byte **)(iVar8 + 0xc) = pbVar4;
        }
      }
      unaff_r8 = *(byte **)(param_2 + 0x10);
      if (*(byte **)(unaff_r8 + 8) == pbVar5) {
        pbVar3 = pbVar4;
        if (*(int *)(pbVar5 + 0xc) == 0) {
          *(undefined4 *)(unaff_r8 + 8) = *(undefined4 *)(pbVar5 + 4);
        }
        else {
          do {
            pbVar12 = pbVar3;
            pbVar3 = *(byte **)(pbVar12 + 8);
          } while (pbVar3 != (byte *)0x0);
          *(byte **)(unaff_r8 + 8) = pbVar12;
        }
      }
      iVar8 = *(int *)(param_2 + 0x10);
      if (*(byte **)(iVar8 + 0xc) == pbVar5) {
        pbVar3 = pbVar4;
        if (*(int *)(pbVar5 + 8) == 0) {
          *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(pbVar5 + 4);
        }
        else {
          do {
            pbVar5 = pbVar3;
            pbVar3 = *(byte **)(pbVar5 + 0xc);
          } while (pbVar3 != (byte *)0x0);
          *(byte **)(iVar8 + 0xc) = pbVar5;
        }
      }
    }
    else {
      *(byte **)(pbVar3 + 4) = pbVar6;
      *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(pbVar5 + 8);
      if (*(byte **)(pbVar5 + 0xc) == pbVar6) {
        if (pbVar4 != (byte *)0x0) {
          *(byte **)(pbVar4 + 4) = pbVar6;
        }
      }
      else {
        if (pbVar4 != (byte *)0x0) {
          *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar6 + 4);
        }
        *(byte **)(*(int *)(pbVar6 + 4) + 8) = pbVar4;
        *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(pbVar5 + 0xc);
        *(byte **)(*(int *)(pbVar5 + 0xc) + 4) = pbVar6;
      }
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar6;
      }
      else {
        iVar8 = *(int *)(pbVar5 + 4);
        if (*(byte **)(iVar8 + 8) == pbVar5) {
          *(byte **)(iVar8 + 8) = pbVar6;
        }
        else {
          *(byte **)(iVar8 + 0xc) = pbVar6;
        }
      }
      *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar5 + 4);
      bVar1 = *pbVar6;
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = pbVar6;
      }
      *pbVar6 = *pbVar5;
      *pbVar5 = bVar1;
      pbVar6 = pbVar5;
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x10);
  bVar14 = pbVar3 != pbVar4;
  if (bVar14) {
    pbVar3 = (byte *)(uint)*pbVar6;
  }
  if (bVar14 && pbVar3 != (byte *)0x0) {
    do {
      while( true ) {
        if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar4) || (*pbVar4 != 1))
        goto LAB_001d045c;
        pbVar3 = *(byte **)(pbVar4 + 4);
        pbVar5 = *(byte **)(pbVar3 + 8);
        if (pbVar5 != pbVar4) break;
        pbVar5 = *(byte **)(pbVar3 + 0xc);
        if (pbVar5 == (byte *)0x0) goto LAB_001d0704;
        if (*pbVar5 == 0) {
          *pbVar5 = 1;
          **(undefined1 **)(pbVar4 + 4) = 0;
          unaff_r8 = *(byte **)(pbVar4 + 4);
          iVar8 = *(int *)(unaff_r8 + 0xc);
          *(undefined4 *)(unaff_r8 + 0xc) = *(undefined4 *)(iVar8 + 8);
          if (*(int *)(iVar8 + 8) != 0) {
            *(byte **)(*(int *)(iVar8 + 8) + 4) = unaff_r8;
          }
          *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(unaff_r8 + 4);
          if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == unaff_r8) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
          }
          else {
            iVar13 = *(int *)(unaff_r8 + 4);
            if (*(byte **)(iVar13 + 8) == unaff_r8) {
              *(int *)(iVar13 + 8) = iVar8;
            }
            else {
              *(int *)(iVar13 + 0xc) = iVar8;
            }
          }
          *(byte **)(iVar8 + 8) = unaff_r8;
          *(int *)(unaff_r8 + 4) = iVar8;
          pbVar5 = *(byte **)(*(int *)(pbVar4 + 4) + 0xc);
          if (pbVar5 == (byte *)0x0) goto LAB_001d05b8;
        }
        pbVar3 = *(byte **)(pbVar5 + 8);
        if (pbVar3 != (byte *)0x0) {
          unaff_r8 = (byte *)(uint)*pbVar3;
        }
        if (pbVar3 != (byte *)0x0 && unaff_r8 != (byte *)0x1) {
LAB_001d04c0:
          pcVar11 = *(char **)(pbVar5 + 0xc);
          cVar2 = '\0';
          if (pcVar11 != (char *)0x0) {
            cVar2 = *pcVar11;
          }
          if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
            if (pbVar3 != (byte *)0x0) {
              *pbVar3 = 1;
            }
            *pbVar5 = 0;
            iVar8 = *(int *)(pbVar5 + 8);
            *(undefined4 *)(pbVar5 + 8) = *(undefined4 *)(iVar8 + 0xc);
            if (*(int *)(iVar8 + 0xc) != 0) {
              *(byte **)(*(int *)(iVar8 + 0xc) + 4) = pbVar5;
            }
            *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(pbVar5 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
            }
            else {
              iVar13 = *(int *)(pbVar5 + 4);
              if (*(byte **)(iVar13 + 0xc) == pbVar5) {
                *(int *)(iVar13 + 0xc) = iVar8;
              }
              else {
                *(int *)(iVar13 + 8) = iVar8;
              }
            }
            *(byte **)(iVar8 + 0xc) = pbVar5;
            *(int *)(pbVar5 + 4) = iVar8;
            pbVar5 = *(byte **)(*(int *)(pbVar4 + 4) + 0xc);
            if (pbVar5 == (byte *)0x0) goto LAB_001d045c;
          }
          *pbVar5 = **(byte **)(pbVar4 + 4);
          **(undefined1 **)(pbVar4 + 4) = 1;
          if (*(undefined1 **)(pbVar5 + 0xc) != (undefined1 *)0x0) {
            **(undefined1 **)(pbVar5 + 0xc) = 1;
          }
          iVar13 = *(int *)(pbVar4 + 4);
          iVar8 = *(int *)(iVar13 + 0xc);
          *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(iVar8 + 8);
          if (*(int *)(iVar8 + 8) != 0) {
            *(int *)(*(int *)(iVar8 + 8) + 4) = iVar13;
          }
          *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar13 + 4);
          if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar13) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
          }
          else {
            iVar10 = *(int *)(iVar13 + 4);
            if (*(int *)(iVar10 + 8) == iVar13) {
              *(int *)(iVar10 + 8) = iVar8;
            }
            else {
              *(int *)(iVar10 + 0xc) = iVar8;
            }
          }
          *(int *)(iVar8 + 8) = iVar13;
          goto LAB_001d06fc;
        }
        pbVar12 = *(byte **)(pbVar5 + 0xc);
        unaff_r8 = (byte *)0x0;
        if (pbVar12 != (byte *)0x0) {
          unaff_r8 = (byte *)(uint)*pbVar12;
        }
        if (pbVar12 != (byte *)0x0 && unaff_r8 != (byte *)0x1) goto LAB_001d04c0;
LAB_001d0798:
        *pbVar5 = 0;
LAB_001d05d8:
        pbVar4 = *(byte **)(pbVar4 + 4);
      }
      if (pbVar5 != (byte *)0x0) goto code_r0x001d0658;
LAB_001d0704:
      *pbVar4 = 0;
      pbVar4 = pbVar3;
    } while( true );
  }
LAB_001d0460:
  *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(byte **)(param_2 + 4) = pbVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  *param_1 = iVar7;
  return;
code_r0x001d0658:
  uVar9 = (uint)*pbVar5;
  if (uVar9 == 0) {
    *pbVar5 = 1;
    **(undefined1 **)(pbVar4 + 4) = 0;
    uVar9 = *(uint *)(pbVar4 + 4);
    iVar8 = *(int *)(uVar9 + 8);
    *(undefined4 *)(uVar9 + 8) = *(undefined4 *)(iVar8 + 0xc);
    if (*(int *)(iVar8 + 0xc) != 0) {
      *(uint *)(*(int *)(iVar8 + 0xc) + 4) = uVar9;
    }
    *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(uVar9 + 4);
    unaff_r8 = *(byte **)(param_2 + 0x10);
    if (*(uint *)(unaff_r8 + 4) == uVar9) {
      *(int *)(unaff_r8 + 4) = iVar8;
    }
    else {
      unaff_r8 = *(byte **)(uVar9 + 4);
      if (*(uint *)(unaff_r8 + 0xc) == uVar9) {
        *(int *)(unaff_r8 + 0xc) = iVar8;
      }
      else {
        *(int *)(unaff_r8 + 8) = iVar8;
      }
    }
    *(uint *)(iVar8 + 0xc) = uVar9;
    *(int *)(uVar9 + 4) = iVar8;
    pbVar5 = *(byte **)(*(int *)(pbVar4 + 4) + 8);
    if (pbVar5 != (byte *)0x0) goto LAB_001d0664;
LAB_001d05b8:
    *pbVar4 = 0;
    goto LAB_001d05d8;
  }
LAB_001d0664:
  unaff_r8 = *(byte **)(pbVar5 + 0xc);
  if (unaff_r8 != (byte *)0x0) {
    uVar9 = (uint)*unaff_r8;
  }
  if (unaff_r8 == (byte *)0x0 || uVar9 == 1) {
    pcVar11 = *(char **)(pbVar5 + 8);
    cVar2 = '\0';
    if (pcVar11 != (char *)0x0) {
      cVar2 = *pcVar11;
    }
    if (pcVar11 == (char *)0x0 || cVar2 == '\x01') goto LAB_001d0798;
  }
  pcVar11 = *(char **)(pbVar5 + 8);
  cVar2 = '\0';
  if (pcVar11 != (char *)0x0) {
    cVar2 = *pcVar11;
  }
  if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
    if (unaff_r8 != (byte *)0x0) {
      *unaff_r8 = 1;
    }
    *pbVar5 = 0;
    iVar8 = *(int *)(pbVar5 + 0xc);
    *(undefined4 *)(pbVar5 + 0xc) = *(undefined4 *)(iVar8 + 8);
    if (*(int *)(iVar8 + 8) != 0) {
      *(byte **)(*(int *)(iVar8 + 8) + 4) = pbVar5;
    }
    *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(pbVar5 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
    }
    else {
      iVar13 = *(int *)(pbVar5 + 4);
      if (*(byte **)(iVar13 + 8) == pbVar5) {
        *(int *)(iVar13 + 8) = iVar8;
      }
      else {
        *(int *)(iVar13 + 0xc) = iVar8;
      }
    }
    *(byte **)(iVar8 + 8) = pbVar5;
    *(int *)(pbVar5 + 4) = iVar8;
    pbVar5 = *(byte **)(*(int *)(pbVar4 + 4) + 8);
    if (pbVar5 == (byte *)0x0) goto LAB_001d045c;
  }
  *pbVar5 = **(byte **)(pbVar4 + 4);
  **(undefined1 **)(pbVar4 + 4) = 1;
  if (*(undefined1 **)(pbVar5 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar5 + 8) = 1;
  }
  iVar13 = *(int *)(pbVar4 + 4);
  iVar8 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar8 + 0xc);
  if (*(int *)(iVar8 + 0xc) != 0) {
    *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar13;
  }
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar13 + 4);
  if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar13) {
    *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar8;
  }
  else {
    iVar10 = *(int *)(iVar13 + 4);
    if (*(int *)(iVar10 + 0xc) == iVar13) {
      *(int *)(iVar10 + 0xc) = iVar8;
    }
    else {
      *(int *)(iVar10 + 8) = iVar8;
    }
  }
  *(int *)(iVar8 + 0xc) = iVar13;
LAB_001d06fc:
  *(int *)(iVar13 + 4) = iVar8;
LAB_001d045c:
  *pbVar4 = 1;
  goto LAB_001d0460;
}

