// rea decompile_all
// name: FUN_000fbda0
// address: 0xfbda0
// body: available
// range: 0xfbda0-0xfc2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfc2dc to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fbda0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  uint local_ac [34];
  
  FUN_001a0700(param_1 + 3);
  if (param_1[1] != 0) {
    uVar4 = *(uint *)(param_2 + 8);
    iVar6 = 0;
    iVar3 = 0;
    uVar5 = param_1[1];
    while( true ) {
      local_ac[iVar3 + 1] = uVar5;
      uVar8 = *(uint *)(uVar5 + 8);
      iVar2 = iVar3 + 1;
      if (uVar4 >= uVar8 && uVar4 != uVar8) {
        iVar6 = 1;
      }
      if (uVar4 < uVar8) {
        iVar6 = 0;
      }
      if (uVar4 == uVar8) break;
      uVar8 = *(uint *)(uVar5 + iVar6 * 4 + 0x18);
      if (uVar8 == 0) goto LAB_000fc2d0;
      if (iVar6 != 0) {
        uVar5 = (uint)*(byte *)(uVar5 + 0x20);
      }
      uVar1 = uVar5 & 0x80;
      iVar3 = iVar2;
      uVar5 = uVar8;
      if (iVar6 != 0 && uVar1 != 0) goto LAB_000fc2d0;
    }
    *param_1 = *param_1 + -1;
    uVar4 = *(uint *)(uVar5 + 0x18);
    if (uVar4 == 0) {
      if ((*(byte *)(uVar5 + 0x20) & 0x80) == 0) {
        if (iVar3 != 0) {
          *(undefined4 *)(local_ac[iVar3] + iVar6 * 4 + 0x18) = *(undefined4 *)(uVar5 + 0x1c);
          goto LAB_000fbf68;
        }
      }
      else if (iVar3 != 0) {
        uVar4 = local_ac[iVar3];
        *(undefined4 *)(uVar4 + iVar6 * 4 + 0x18) = *(undefined4 *)(uVar5 + iVar6 * 4 + 0x18);
        if (iVar6 == 1) {
          *(byte *)(uVar4 + 0x20) = *(byte *)(uVar4 + 0x20) | 0x80;
        }
        goto LAB_000fbf68;
      }
      param_1[1] = *(int *)(uVar5 + 0x1c);
      goto LAB_000fbf68;
    }
    if ((*(byte *)(uVar4 + 0x20) & 0x80) == 0) {
      do {
        uVar8 = uVar4;
        local_ac[iVar2 + 1] = uVar8;
        uVar4 = *(uint *)(uVar8 + 0x1c);
        iVar2 = iVar2 + 1;
      } while ((*(byte *)(uVar4 + 0x20) & 0x80) == 0);
      if (*(int *)(uVar4 + 0x18) == 0) {
        *(byte *)(uVar8 + 0x20) = *(byte *)(uVar8 + 0x20) | 0x80;
      }
      else {
        *(int *)(uVar8 + 0x1c) = *(int *)(uVar4 + 0x18);
      }
      *(undefined4 *)(uVar4 + 0x18) = *(undefined4 *)(uVar5 + 0x18);
      *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(uVar5 + 0x1c);
      *(undefined1 *)(uVar4 + 0x20) = *(undefined1 *)(uVar5 + 0x20);
      if (iVar3 == 0) {
        param_1[1] = uVar4;
        local_ac[1] = uVar4;
        iVar3 = iVar2;
      }
      else {
        *(uint *)(local_ac[iVar3] + iVar6 * 4 + 0x18) = uVar4;
        local_ac[iVar3 + 1] = uVar4;
        iVar3 = iVar2;
      }
    }
    else {
      *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(uVar5 + 0x1c);
      *(undefined1 *)(uVar4 + 0x20) = *(undefined1 *)(uVar5 + 0x20);
      if (iVar3 == 0) {
        param_1[1] = uVar4;
      }
      else {
        *(uint *)(local_ac[iVar3] + iVar6 * 4 + 0x18) = uVar4;
        local_ac[iVar3 + 1] = uVar4;
        iVar3 = iVar2;
      }
    }
LAB_000fbf68:
    iVar9 = 1;
    iVar2 = iVar3;
    if (1 < iVar3 + 1) {
      do {
        iVar7 = iVar2 + -1;
        uVar5 = local_ac[iVar2];
        if (iVar7 != 0) {
          if (*(uint *)(local_ac[iVar7] + 0x1c) == uVar5) {
            iVar6 = 1;
          }
          else {
            iVar6 = 0;
          }
        }
        if (*(int *)(uVar5 + 0x18) == 0) {
          if ((*(byte *)(uVar5 + 0x20) & 0x7f) < 2) goto LAB_000fbfc8;
LAB_000fc010:
          uVar4 = *(uint *)(uVar5 + 0x1c);
          bVar10 = *(char *)(uVar5 + 0x20) - 1;
          *(byte *)(uVar5 + 0x20) = bVar10;
          if ((uVar4 != 0) && ((bVar10 & 0x80) == 0)) {
            if ((bVar10 & 0x7f) < (*(byte *)(uVar4 + 0x20) & 0x7f)) {
              *(byte *)(uVar4 + 0x20) = bVar10 & 0x7f | *(byte *)(uVar4 + 0x20) & 0x80;
            }
          }
          if (uVar5 != 0) {
            uVar4 = *(uint *)(uVar5 + 0x18);
          }
          if (uVar5 != 0 && uVar4 != 0) {
            if (((byte)(*(byte *)(uVar4 + 0x20) * '\x02') ==
                 (byte)(*(byte *)(uVar5 + 0x20) * '\x02')) &&
               ((*(byte *)(uVar5 + 0x20) & 0x7f) != 0)) {
              if ((*(byte *)(uVar4 + 0x20) & 0x80) == 0) {
                uVar11 = *(undefined4 *)(uVar4 + 0x1c);
              }
              else {
                uVar11 = 0;
              }
              *(undefined4 *)(uVar5 + 0x18) = uVar11;
              *(uint *)(uVar4 + 0x1c) = uVar5;
              *(byte *)(uVar4 + 0x20) = *(byte *)(uVar4 + 0x20) & 0x7f;
              uVar5 = uVar4;
            }
          }
          uVar4 = *(uint *)(uVar5 + 0x1c);
          if (uVar4 != 0) {
            if ((*(byte *)(uVar5 + 0x20) & 0x80) == 0) {
              uVar8 = *(uint *)(uVar4 + 0x18);
              if (uVar8 != 0) {
                if (((byte)(*(byte *)(uVar8 + 0x20) * '\x02') ==
                     (byte)(*(byte *)(uVar4 + 0x20) * '\x02')) &&
                   ((*(byte *)(uVar4 + 0x20) & 0x7f) != 0)) {
                  if ((*(byte *)(uVar8 + 0x20) & 0x80) == 0) {
                    uVar11 = *(undefined4 *)(uVar8 + 0x1c);
                  }
                  else {
                    uVar11 = 0;
                  }
                  *(undefined4 *)(uVar4 + 0x18) = uVar11;
                  *(uint *)(uVar8 + 0x1c) = uVar4;
                  *(byte *)(uVar8 + 0x20) = *(byte *)(uVar8 + 0x20) & 0x7f;
                  uVar4 = uVar8;
                }
              }
              *(uint *)(uVar5 + 0x1c) = uVar4;
            }
            iVar2 = *(int *)(uVar4 + 0x1c);
            if (iVar2 != 0) {
              bVar13 = (*(byte *)(uVar5 + 0x20) & 0x80) == 0;
              if (bVar13) {
                uVar4 = (uint)*(byte *)(uVar4 + 0x20);
              }
              if (bVar13 && (uVar4 & 0x80) == 0) {
                iVar12 = *(int *)(iVar2 + 0x18);
                if (iVar12 != 0) {
                  if (((byte)(*(byte *)(iVar12 + 0x20) * '\x02') ==
                       (byte)(*(byte *)(iVar2 + 0x20) * '\x02')) &&
                     ((*(byte *)(iVar2 + 0x20) & 0x7f) != 0)) {
                    if ((*(byte *)(iVar12 + 0x20) & 0x80) == 0) {
                      uVar11 = *(undefined4 *)(iVar12 + 0x1c);
                    }
                    else {
                      uVar11 = 0;
                    }
                    *(undefined4 *)(iVar2 + 0x18) = uVar11;
                    *(int *)(iVar12 + 0x1c) = iVar2;
                    *(byte *)(iVar12 + 0x20) = *(byte *)(iVar12 + 0x20) & 0x7f;
                    iVar2 = iVar12;
                  }
                }
                *(int *)(*(int *)(uVar5 + 0x1c) + 0x1c) = iVar2;
              }
            }
          }
          if ((((uVar5 != 0) && (bVar10 = *(byte *)(uVar5 + 0x20), (bVar10 & 0x80) == 0)) &&
              (uVar4 = *(uint *)(uVar5 + 0x1c), uVar4 != 0)) &&
             ((((*(byte *)(uVar4 + 0x20) & 0x80) == 0 && (*(int *)(uVar4 + 0x1c) != 0)) &&
              (((*(byte *)(*(int *)(uVar4 + 0x1c) + 0x20) & 0x7f) == (bVar10 & 0x7f) &&
               ((bVar10 & 0x7f) != 0)))))) {
            if (*(int *)(uVar4 + 0x18) == 0) {
              *(byte *)(uVar5 + 0x20) = bVar10 | 0x80;
            }
            else {
              *(int *)(uVar5 + 0x1c) = *(int *)(uVar4 + 0x18);
            }
            *(uint *)(uVar4 + 0x18) = uVar5;
            *(char *)(uVar4 + 0x20) = *(char *)(uVar4 + 0x20) + '\x01';
            uVar5 = uVar4;
          }
          iVar2 = *(int *)(uVar5 + 0x1c);
          if ((iVar2 != 0) && ((*(byte *)(uVar5 + 0x20) & 0x80) == 0)) {
            bVar10 = *(byte *)(iVar2 + 0x20);
            if (((bVar10 & 0x80) == 0) &&
               ((((iVar12 = *(int *)(iVar2 + 0x1c), iVar12 != 0 &&
                  ((*(byte *)(iVar12 + 0x20) & 0x80) == 0)) && (*(int *)(iVar12 + 0x1c) != 0)) &&
                (((*(byte *)(*(int *)(iVar12 + 0x1c) + 0x20) & 0x7f) == (bVar10 & 0x7f) &&
                 ((bVar10 & 0x7f) != 0)))))) {
              if (*(int *)(iVar12 + 0x18) == 0) {
                *(byte *)(iVar2 + 0x20) = bVar10 | 0x80;
              }
              else {
                *(int *)(iVar2 + 0x1c) = *(int *)(iVar12 + 0x18);
              }
              *(int *)(iVar12 + 0x18) = iVar2;
              *(char *)(iVar12 + 0x20) = *(char *)(iVar12 + 0x20) + '\x01';
              iVar2 = iVar12;
            }
            *(int *)(uVar5 + 0x1c) = iVar2;
          }
        }
        else {
          if ((int)(*(byte *)(*(int *)(uVar5 + 0x18) + 0x20) & 0x7f) <
              (int)((*(byte *)(uVar5 + 0x20) & 0x7f) - 1)) goto LAB_000fc010;
LAB_000fbfc8:
          bVar10 = *(byte *)(uVar5 + 0x20);
          if ((bVar10 & 0x80) == 0) {
            if (*(int *)(uVar5 + 0x1c) == 0) {
              if ((bVar10 & 0x7f) != 0 && (bVar10 & 0x7f) != 1) goto LAB_000fc010;
            }
            else if ((int)(*(byte *)(*(int *)(uVar5 + 0x1c) + 0x20) & 0x7f) <
                     (int)((bVar10 & 0x7f) - 1)) goto LAB_000fc010;
          }
        }
        if (iVar7 == 0) {
          param_1[1] = uVar5;
        }
        else {
          *(uint *)(local_ac[iVar7] + iVar6 * 4 + 0x18) = uVar5;
        }
        iVar9 = iVar9 + 1;
        iVar2 = iVar7;
      } while (iVar9 < iVar3 + 1);
    }
  }
LAB_000fc2d0:
  FUN_001a0d18(param_1 + 3);
  return;
}

