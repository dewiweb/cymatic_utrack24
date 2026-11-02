// rea decompile_all
// name: FUN_001bec44
// address: 0x1bec44
// body: available
// range: 0x1bec44-0x1bf177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001bec44(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_ac;
  int *local_a8 [32];
  uint local_28;
  
  if ((int *)param_1[1] == (int *)0x0) {
    return (int *)0x0;
  }
  iVar7 = 0;
  piVar9 = (int *)param_1[1];
  iVar3 = 0;
  while( true ) {
    local_a8[iVar3] = piVar9;
    iVar12 = iVar3 + 1;
    uVar14 = FUN_000ea0a8(param_2,piVar9 + 4);
    uVar2 = (uint)((ulonglong)uVar14 >> 0x20);
    iVar4 = (int)uVar14;
    if (0 < iVar4) {
      iVar7 = 1;
    }
    if (iVar4 < 0) {
      iVar7 = 0;
    }
    if (iVar4 == 0) break;
    if ((int *)piVar9[iVar7] == (int *)0x0) {
      return (int *)0x0;
    }
    if (iVar7 != 0) {
      uVar2 = (uint)*(byte *)(piVar9 + 2);
    }
    piVar9 = (int *)piVar9[iVar7];
    iVar3 = iVar12;
    if (iVar7 != 0 && (uVar2 & 0x80) != 0) {
      return (int *)0x0;
    }
  }
  *param_1 = *param_1 + -1;
  local_a8[0] = (int *)*piVar9;
  if (local_a8[0] == (int *)0x0) {
    if ((*(byte *)(piVar9 + 2) & 0x80) == 0) {
      if (iVar3 != 0) {
        *(int *)((&local_ac)[iVar3] + iVar7 * 4) = piVar9[1];
        goto LAB_001bedf0;
      }
    }
    else if (iVar3 != 0) {
      iVar4 = (&local_ac)[iVar3];
      *(int *)(iVar4 + iVar7 * 4) = piVar9[iVar7];
      if (iVar7 == 1) {
        *(byte *)(iVar4 + 8) = *(byte *)(iVar4 + 8) | 0x80;
      }
      goto LAB_001bedf0;
    }
    param_1[1] = piVar9[1];
  }
  else if ((*(byte *)(local_a8[0] + 2) & 0x80) == 0) {
    do {
      piVar1 = local_a8[0];
      local_a8[iVar12] = piVar1;
      local_a8[0] = (int *)piVar1[1];
      iVar12 = iVar12 + 1;
    } while ((*(byte *)(local_a8[0] + 2) & 0x80) == 0);
    if (*local_a8[0] == 0) {
      *(byte *)(piVar1 + 2) = *(byte *)(piVar1 + 2) | 0x80;
    }
    else {
      piVar1[1] = *local_a8[0];
    }
    *local_a8[0] = *piVar9;
    local_a8[0][1] = piVar9[1];
    *(char *)(local_a8[0] + 2) = (char)piVar9[2];
    if (iVar3 == 0) {
      param_1[1] = (int)local_a8[0];
      iVar3 = iVar12;
    }
    else {
      *(int **)((&local_ac)[iVar3] + iVar7 * 4) = local_a8[0];
      local_a8[iVar3] = local_a8[0];
      iVar3 = iVar12;
    }
  }
  else {
    local_a8[0][1] = piVar9[1];
    *(char *)(local_a8[0] + 2) = (char)piVar9[2];
    if (iVar3 == 0) {
      param_1[1] = (int)local_a8[0];
    }
    else {
      *(int **)((&local_ac)[iVar3] + iVar7 * 4) = local_a8[0];
      local_a8[iVar3] = local_a8[0];
      iVar3 = iVar12;
    }
  }
LAB_001bedf0:
  iVar12 = iVar3 + 1;
  iVar4 = 1;
  if (1 < iVar12) {
    do {
      iVar3 = iVar3 + -1;
      piVar1 = local_a8[iVar3];
      if (iVar3 != 0) {
        if (*(int **)((&local_ac)[iVar3] + 4) == piVar1) {
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
        }
      }
      if (*piVar1 == 0) {
        if ((*(byte *)(piVar1 + 2) & 0x7f) < 2) goto LAB_001bee58;
LAB_001beea0:
        piVar5 = (int *)piVar1[1];
        bVar8 = (char)piVar1[2] - 1;
        *(byte *)(piVar1 + 2) = bVar8;
        if ((piVar5 != (int *)0x0) && ((bVar8 & 0x80) == 0)) {
          if ((bVar8 & 0x7f) < (*(byte *)(piVar5 + 2) & 0x7f)) {
            *(byte *)(piVar5 + 2) = bVar8 & 0x7f | *(byte *)(piVar5 + 2) & 0x80;
          }
        }
        if (piVar1 != (int *)0x0) {
          piVar5 = (int *)*piVar1;
        }
        if (piVar1 != (int *)0x0 && piVar5 != (int *)0x0) {
          if (((byte)(*(byte *)(piVar5 + 2) * '\x02') == (byte)(*(byte *)(piVar1 + 2) * '\x02')) &&
             ((*(byte *)(piVar1 + 2) & 0x7f) != 0)) {
            if ((*(byte *)(piVar5 + 2) & 0x80) == 0) {
              *piVar1 = piVar5[1];
            }
            else {
              *piVar1 = 0;
            }
            piVar5[1] = (int)piVar1;
            *(byte *)(piVar5 + 2) = *(byte *)(piVar5 + 2) & 0x7f;
            piVar1 = piVar5;
          }
        }
        puVar6 = (undefined4 *)piVar1[1];
        if (puVar6 != (undefined4 *)0x0) {
          if ((*(byte *)(piVar1 + 2) & 0x80) == 0) {
            puVar10 = (undefined4 *)*puVar6;
            if (puVar10 != (undefined4 *)0x0) {
              bVar8 = *(byte *)(puVar10 + 2);
              local_28 = (uint)bVar8;
              if (((uint)bVar8 * 0x2000000 == (uint)*(byte *)(puVar6 + 2) * 0x2000000) &&
                 ((*(byte *)(puVar6 + 2) & 0x7f) != 0)) {
                if ((bVar8 & 0x80) == 0) {
                  *puVar6 = puVar10[1];
                }
                else {
                  *puVar6 = 0;
                }
                puVar10[1] = puVar6;
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) & 0x7f;
                puVar6 = puVar10;
              }
            }
            piVar1[1] = (int)puVar6;
          }
          puVar10 = (undefined4 *)puVar6[1];
          if (puVar10 != (undefined4 *)0x0) {
            bVar13 = (*(byte *)(piVar1 + 2) & 0x80) == 0;
            if (bVar13) {
              puVar6 = (undefined4 *)(uint)*(byte *)(puVar6 + 2);
            }
            if (bVar13 && ((uint)puVar6 & 0x80) == 0) {
              puVar6 = (undefined4 *)*puVar10;
              if (puVar6 != (undefined4 *)0x0) {
                bVar8 = *(byte *)(puVar6 + 2);
                local_28 = (uint)bVar8;
                if (((uint)bVar8 * 0x2000000 == (uint)*(byte *)(puVar10 + 2) * 0x2000000) &&
                   ((*(byte *)(puVar10 + 2) & 0x7f) != 0)) {
                  if ((bVar8 & 0x80) == 0) {
                    *puVar10 = puVar6[1];
                  }
                  else {
                    *puVar10 = 0;
                  }
                  puVar6[1] = puVar10;
                  *(byte *)(puVar6 + 2) = *(byte *)(puVar6 + 2) & 0x7f;
                  puVar10 = puVar6;
                }
              }
              *(undefined4 **)(piVar1[1] + 4) = puVar10;
            }
          }
        }
        if ((((piVar1 != (int *)0x0) && (bVar8 = *(byte *)(piVar1 + 2), (bVar8 & 0x80) == 0)) &&
            (piVar5 = (int *)piVar1[1], piVar5 != (int *)0x0)) &&
           ((((*(byte *)(piVar5 + 2) & 0x80) == 0 && (piVar5[1] != 0)) &&
            (((*(byte *)(piVar5[1] + 8) & 0x7f) == (bVar8 & 0x7f) && ((bVar8 & 0x7f) != 0)))))) {
          if (*piVar5 == 0) {
            *(byte *)(piVar1 + 2) = bVar8 | 0x80;
          }
          else {
            piVar1[1] = *piVar5;
          }
          *piVar5 = (int)piVar1;
          *(char *)(piVar5 + 2) = (char)piVar5[2] + '\x01';
          piVar1 = piVar5;
        }
        piVar5 = (int *)piVar1[1];
        if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar1 + 2) & 0x80) == 0)) {
          bVar8 = *(byte *)(piVar5 + 2);
          if (((bVar8 & 0x80) == 0) &&
             ((((piVar11 = (int *)piVar5[1], piVar11 != (int *)0x0 &&
                ((*(byte *)(piVar11 + 2) & 0x80) == 0)) && (piVar11[1] != 0)) &&
              (((*(byte *)(piVar11[1] + 8) & 0x7f) == (bVar8 & 0x7f) && ((bVar8 & 0x7f) != 0)))))) {
            if (*piVar11 == 0) {
              *(byte *)(piVar5 + 2) = bVar8 | 0x80;
            }
            else {
              piVar5[1] = *piVar11;
            }
            *piVar11 = (int)piVar5;
            *(char *)(piVar11 + 2) = (char)piVar11[2] + '\x01';
            piVar5 = piVar11;
          }
          piVar1[1] = (int)piVar5;
        }
      }
      else {
        if ((int)(*(byte *)(*piVar1 + 8) & 0x7f) < (int)((*(byte *)(piVar1 + 2) & 0x7f) - 1))
        goto LAB_001beea0;
LAB_001bee58:
        bVar8 = *(byte *)(piVar1 + 2);
        if ((bVar8 & 0x80) == 0) {
          if (piVar1[1] == 0) {
            if ((bVar8 & 0x7f) != 0 && (bVar8 & 0x7f) != 1) goto LAB_001beea0;
          }
          else if ((int)(*(byte *)(piVar1[1] + 8) & 0x7f) < (int)((bVar8 & 0x7f) - 1))
          goto LAB_001beea0;
        }
      }
      if (iVar3 == 0) {
        param_1[1] = (int)piVar1;
      }
      else {
        *(int **)((&local_ac)[iVar3] + iVar7 * 4) = piVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar12);
  }
  return piVar9;
}

