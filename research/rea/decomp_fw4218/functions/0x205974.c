// rea decompile_all
// name: FUN_00205974
// address: 0x205974
// body: available
// range: 0x205974-0x205ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00205974(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_ac [33];
  uint local_28;
  
  if (param_1[1] == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar7 = param_1[1];
  iVar1 = 0;
  while( true ) {
    local_ac[iVar1 + 1] = iVar7;
    iVar9 = iVar1 + 1;
    uVar14 = FUN_00172670(param_2,iVar7);
    uVar3 = (uint)((ulonglong)uVar14 >> 0x20);
    iVar2 = (int)uVar14;
    if (0 < iVar2) {
      iVar6 = 1;
    }
    if (iVar2 < 0) {
      iVar6 = 0;
    }
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar7 + iVar6 * 4 + 0x5c);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar6 != 0) {
      uVar3 = (uint)*(byte *)(iVar7 + 100);
    }
    iVar7 = iVar1;
    iVar1 = iVar9;
    if (iVar6 != 0 && (uVar3 & 0x80) != 0) {
      return 0;
    }
  }
  *param_1 = *param_1 + -1;
  local_ac[1] = *(int *)(iVar7 + 0x5c);
  if (local_ac[1] == 0) {
    if ((*(byte *)(iVar7 + 100) & 0x80) == 0) {
      if (iVar1 != 0) {
        *(undefined4 *)(local_ac[iVar1] + iVar6 * 4 + 0x5c) = *(undefined4 *)(iVar7 + 0x60);
        goto LAB_00205b3c;
      }
    }
    else if (iVar1 != 0) {
      iVar2 = local_ac[iVar1];
      *(undefined4 *)(iVar2 + iVar6 * 4 + 0x5c) = *(undefined4 *)(iVar7 + iVar6 * 4 + 0x5c);
      if (iVar6 == 1) {
        *(byte *)(iVar2 + 100) = *(byte *)(iVar2 + 100) | 0x80;
      }
      goto LAB_00205b3c;
    }
    param_1[1] = *(int *)(iVar7 + 0x60);
  }
  else if ((*(byte *)(local_ac[1] + 100) & 0x80) == 0) {
    do {
      iVar2 = local_ac[1];
      local_ac[iVar9 + 1] = iVar2;
      local_ac[1] = *(int *)(iVar2 + 0x60);
      iVar9 = iVar9 + 1;
    } while ((*(byte *)(local_ac[1] + 100) & 0x80) == 0);
    if (*(int *)(local_ac[1] + 0x5c) == 0) {
      *(byte *)(iVar2 + 100) = *(byte *)(iVar2 + 100) | 0x80;
    }
    else {
      *(int *)(iVar2 + 0x60) = *(int *)(local_ac[1] + 0x5c);
    }
    *(undefined4 *)(local_ac[1] + 0x5c) = *(undefined4 *)(iVar7 + 0x5c);
    *(undefined4 *)(local_ac[1] + 0x60) = *(undefined4 *)(iVar7 + 0x60);
    *(undefined1 *)(local_ac[1] + 100) = *(undefined1 *)(iVar7 + 100);
    if (iVar1 == 0) {
      param_1[1] = local_ac[1];
      iVar1 = iVar9;
    }
    else {
      *(int *)(local_ac[iVar1] + iVar6 * 4 + 0x5c) = local_ac[1];
      local_ac[iVar1 + 1] = local_ac[1];
      iVar1 = iVar9;
    }
  }
  else {
    *(undefined4 *)(local_ac[1] + 0x60) = *(undefined4 *)(iVar7 + 0x60);
    *(undefined1 *)(local_ac[1] + 100) = *(undefined1 *)(iVar7 + 100);
    if (iVar1 == 0) {
      param_1[1] = local_ac[1];
    }
    else {
      *(int *)(local_ac[iVar1] + iVar6 * 4 + 0x5c) = local_ac[1];
      local_ac[iVar1 + 1] = local_ac[1];
      iVar1 = iVar9;
    }
  }
LAB_00205b3c:
  iVar9 = 1;
  iVar2 = iVar1;
  if (1 < iVar1 + 1) {
    do {
      iVar4 = iVar2 + -1;
      iVar2 = local_ac[iVar2];
      if (iVar4 != 0) {
        if (*(int *)(local_ac[iVar4] + 0x60) == iVar2) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
      }
      if (*(int *)(iVar2 + 0x5c) == 0) {
        if ((*(byte *)(iVar2 + 100) & 0x7f) < 2) goto LAB_00205ba0;
LAB_00205be8:
        iVar5 = *(int *)(iVar2 + 0x60);
        bVar8 = *(char *)(iVar2 + 100) - 1;
        *(byte *)(iVar2 + 100) = bVar8;
        if ((iVar5 != 0) && ((bVar8 & 0x80) == 0)) {
          if ((bVar8 & 0x7f) < (*(byte *)(iVar5 + 100) & 0x7f)) {
            *(byte *)(iVar5 + 100) = bVar8 & 0x7f | *(byte *)(iVar5 + 100) & 0x80;
          }
        }
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + 0x5c);
        }
        if (iVar2 != 0 && iVar5 != 0) {
          if (((byte)(*(byte *)(iVar5 + 100) * '\x02') == (byte)(*(byte *)(iVar2 + 100) * '\x02'))
             && ((*(byte *)(iVar2 + 100) & 0x7f) != 0)) {
            if ((*(byte *)(iVar5 + 100) & 0x80) == 0) {
              uVar10 = *(undefined4 *)(iVar5 + 0x60);
            }
            else {
              uVar10 = 0;
            }
            *(undefined4 *)(iVar2 + 0x5c) = uVar10;
            *(int *)(iVar5 + 0x60) = iVar2;
            *(byte *)(iVar5 + 100) = *(byte *)(iVar5 + 100) & 0x7f;
            iVar2 = iVar5;
          }
        }
        uVar3 = *(uint *)(iVar2 + 0x60);
        if (uVar3 != 0) {
          if ((*(byte *)(iVar2 + 100) & 0x80) == 0) {
            uVar11 = *(uint *)(uVar3 + 0x5c);
            if (uVar11 != 0) {
              bVar8 = *(byte *)(uVar11 + 100);
              local_28 = (uint)bVar8;
              if (((uint)bVar8 * 0x2000000 == (uint)*(byte *)(uVar3 + 100) * 0x2000000) &&
                 ((*(byte *)(uVar3 + 100) & 0x7f) != 0)) {
                if ((bVar8 & 0x80) == 0) {
                  uVar10 = *(undefined4 *)(uVar11 + 0x60);
                }
                else {
                  uVar10 = 0;
                }
                *(undefined4 *)(uVar3 + 0x5c) = uVar10;
                *(uint *)(uVar11 + 0x60) = uVar3;
                *(byte *)(uVar11 + 100) = *(byte *)(uVar11 + 100) & 0x7f;
                uVar3 = uVar11;
              }
            }
            *(uint *)(iVar2 + 0x60) = uVar3;
          }
          iVar5 = *(int *)(uVar3 + 0x60);
          if (iVar5 != 0) {
            bVar13 = (*(byte *)(iVar2 + 100) & 0x80) == 0;
            if (bVar13) {
              uVar3 = (uint)*(byte *)(uVar3 + 100);
            }
            if (bVar13 && (uVar3 & 0x80) == 0) {
              local_28 = *(int *)(iVar5 + 0x5c);
              if (local_28 != 0) {
                if (((byte)(*(byte *)(local_28 + 100) * '\x02') ==
                     (byte)(*(byte *)(iVar5 + 100) * '\x02')) &&
                   ((*(byte *)(iVar5 + 100) & 0x7f) != 0)) {
                  if ((*(byte *)(local_28 + 100) & 0x80) == 0) {
                    uVar10 = *(undefined4 *)(local_28 + 0x60);
                  }
                  else {
                    uVar10 = 0;
                  }
                  *(undefined4 *)(iVar5 + 0x5c) = uVar10;
                  *(int *)(local_28 + 0x60) = iVar5;
                  *(byte *)(local_28 + 100) = *(byte *)(local_28 + 100) & 0x7f;
                  iVar5 = local_28;
                }
              }
              *(int *)(*(int *)(iVar2 + 0x60) + 0x60) = iVar5;
            }
          }
        }
        if ((((iVar2 != 0) && (bVar8 = *(byte *)(iVar2 + 100), (bVar8 & 0x80) == 0)) &&
            (iVar5 = *(int *)(iVar2 + 0x60), iVar5 != 0)) &&
           ((((*(byte *)(iVar5 + 100) & 0x80) == 0 && (*(int *)(iVar5 + 0x60) != 0)) &&
            (((*(byte *)(*(int *)(iVar5 + 0x60) + 100) & 0x7f) == (bVar8 & 0x7f) &&
             ((bVar8 & 0x7f) != 0)))))) {
          if (*(int *)(iVar5 + 0x5c) == 0) {
            *(byte *)(iVar2 + 100) = bVar8 | 0x80;
          }
          else {
            *(int *)(iVar2 + 0x60) = *(int *)(iVar5 + 0x5c);
          }
          *(int *)(iVar5 + 0x5c) = iVar2;
          *(char *)(iVar5 + 100) = *(char *)(iVar5 + 100) + '\x01';
          iVar2 = iVar5;
        }
        iVar5 = *(int *)(iVar2 + 0x60);
        if ((iVar5 != 0) && ((*(byte *)(iVar2 + 100) & 0x80) == 0)) {
          bVar8 = *(byte *)(iVar5 + 100);
          if (((bVar8 & 0x80) == 0) &&
             ((((iVar12 = *(int *)(iVar5 + 0x60), iVar12 != 0 &&
                ((*(byte *)(iVar12 + 100) & 0x80) == 0)) && (*(int *)(iVar12 + 0x60) != 0)) &&
              (((*(byte *)(*(int *)(iVar12 + 0x60) + 100) & 0x7f) == (bVar8 & 0x7f) &&
               ((bVar8 & 0x7f) != 0)))))) {
            if (*(int *)(iVar12 + 0x5c) == 0) {
              *(byte *)(iVar5 + 100) = bVar8 | 0x80;
            }
            else {
              *(int *)(iVar5 + 0x60) = *(int *)(iVar12 + 0x5c);
            }
            *(int *)(iVar12 + 0x5c) = iVar5;
            *(char *)(iVar12 + 100) = *(char *)(iVar12 + 100) + '\x01';
            iVar5 = iVar12;
          }
          *(int *)(iVar2 + 0x60) = iVar5;
        }
      }
      else {
        if ((int)(*(byte *)(*(int *)(iVar2 + 0x5c) + 100) & 0x7f) <
            (int)((*(byte *)(iVar2 + 100) & 0x7f) - 1)) goto LAB_00205be8;
LAB_00205ba0:
        bVar8 = *(byte *)(iVar2 + 100);
        if ((bVar8 & 0x80) == 0) {
          if (*(int *)(iVar2 + 0x60) == 0) {
            if ((bVar8 & 0x7f) != 0 && (bVar8 & 0x7f) != 1) goto LAB_00205be8;
          }
          else if ((int)(*(byte *)(*(int *)(iVar2 + 0x60) + 100) & 0x7f) < (int)((bVar8 & 0x7f) - 1)
                  ) goto LAB_00205be8;
        }
      }
      if (iVar4 == 0) {
        param_1[1] = iVar2;
      }
      else {
        *(int *)(local_ac[iVar4] + iVar6 * 4 + 0x5c) = iVar2;
      }
      iVar9 = iVar9 + 1;
      iVar2 = iVar4;
    } while (iVar9 < iVar1 + 1);
  }
  return iVar7;
}

