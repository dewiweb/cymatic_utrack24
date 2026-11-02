// rea decompile_all
// name: FUN_00207d04
// address: 0x207d04
// body: available
// range: 0x207d04-0x208257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00207d04(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint auStack_ac [33];
  uint uStack_28;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_2;
  iVar2 = 0;
  uVar3 = param_1[1];
  iVar10 = 0;
  while( true ) {
    auStack_ac[iVar10 + 1] = uVar3;
    uVar5 = *(uint *)(uVar3 + 0x9c);
    iVar9 = iVar10 + 1;
    if (uVar1 >= uVar5 && uVar1 != uVar5) {
      iVar2 = 1;
    }
    if (uVar1 < uVar5) {
      iVar2 = 0;
    }
    if (uVar1 == uVar5) break;
    uVar5 = *(uint *)(uVar3 + iVar2 * 4 + 4);
    if (uVar5 == 0) {
      return 0;
    }
    if (iVar2 != 0) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xc);
    }
    uVar8 = uVar3 & 0x80;
    uVar3 = uVar5;
    iVar10 = iVar9;
    if (iVar2 != 0 && uVar8 != 0) {
      return 0;
    }
  }
  *param_1 = *param_1 + -1;
  auStack_ac[1] = *(uint *)(uVar3 + 4);
  if (auStack_ac[1] == 0) {
    if ((*(byte *)(uVar3 + 0xc) & 0x80) == 0) {
      if (iVar10 != 0) {
        *(undefined4 *)(auStack_ac[iVar10] + iVar2 * 4 + 4) = *(undefined4 *)(uVar3 + 8);
        goto LAB_00207ed0;
      }
    }
    else if (iVar10 != 0) {
      uVar1 = auStack_ac[iVar10];
      *(undefined4 *)(uVar1 + iVar2 * 4 + 4) = *(undefined4 *)(uVar3 + iVar2 * 4 + 4);
      if (iVar2 == 1) {
        *(byte *)(uVar1 + 0xc) = *(byte *)(uVar1 + 0xc) | 0x80;
      }
      goto LAB_00207ed0;
    }
    param_1[1] = *(int *)(uVar3 + 8);
  }
  else if ((*(byte *)(auStack_ac[1] + 0xc) & 0x80) == 0) {
    do {
      uVar1 = auStack_ac[1];
      auStack_ac[iVar9 + 1] = uVar1;
      auStack_ac[1] = *(uint *)(uVar1 + 8);
      iVar9 = iVar9 + 1;
    } while ((*(byte *)(auStack_ac[1] + 0xc) & 0x80) == 0);
    if (*(int *)(auStack_ac[1] + 4) == 0) {
      *(byte *)(uVar1 + 0xc) = *(byte *)(uVar1 + 0xc) | 0x80;
    }
    else {
      *(int *)(uVar1 + 8) = *(int *)(auStack_ac[1] + 4);
    }
    *(undefined4 *)(auStack_ac[1] + 4) = *(undefined4 *)(uVar3 + 4);
    *(undefined4 *)(auStack_ac[1] + 8) = *(undefined4 *)(uVar3 + 8);
    *(undefined1 *)(auStack_ac[1] + 0xc) = *(undefined1 *)(uVar3 + 0xc);
    if (iVar10 == 0) {
      param_1[1] = auStack_ac[1];
      iVar10 = iVar9;
    }
    else {
      *(uint *)(auStack_ac[iVar10] + iVar2 * 4 + 4) = auStack_ac[1];
      auStack_ac[iVar10 + 1] = auStack_ac[1];
      iVar10 = iVar9;
    }
  }
  else {
    *(undefined4 *)(auStack_ac[1] + 8) = *(undefined4 *)(uVar3 + 8);
    *(undefined1 *)(auStack_ac[1] + 0xc) = *(undefined1 *)(uVar3 + 0xc);
    if (iVar10 == 0) {
      param_1[1] = auStack_ac[1];
    }
    else {
      *(uint *)(auStack_ac[iVar10] + iVar2 * 4 + 4) = auStack_ac[1];
      auStack_ac[iVar10 + 1] = auStack_ac[1];
      iVar10 = iVar9;
    }
  }
LAB_00207ed0:
  iVar11 = 1;
  iVar9 = iVar10;
  if (iVar10 + 1 < 2) {
    return uVar3;
  }
  do {
    iVar4 = iVar9 + -1;
    uVar1 = auStack_ac[iVar9];
    if (iVar4 != 0) {
      if (*(uint *)(auStack_ac[iVar4] + 8) == uVar1) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    if (*(int *)(uVar1 + 4) == 0) {
      if ((*(byte *)(uVar1 + 0xc) & 0x7f) < 2) goto LAB_00207f38;
LAB_00207f80:
      uVar5 = *(uint *)(uVar1 + 8);
      bVar6 = *(char *)(uVar1 + 0xc) - 1;
      *(byte *)(uVar1 + 0xc) = bVar6;
      if ((uVar5 != 0) && ((bVar6 & 0x80) == 0)) {
        if ((bVar6 & 0x7f) < (*(byte *)(uVar5 + 0xc) & 0x7f)) {
          *(byte *)(uVar5 + 0xc) = bVar6 & 0x7f | *(byte *)(uVar5 + 0xc) & 0x80;
        }
      }
      if (uVar1 != 0) {
        uVar5 = *(uint *)(uVar1 + 4);
      }
      if (uVar1 != 0 && uVar5 != 0) {
        if (((byte)(*(byte *)(uVar5 + 0xc) * '\x02') == (byte)(*(byte *)(uVar1 + 0xc) * '\x02')) &&
           ((*(byte *)(uVar1 + 0xc) & 0x7f) != 0)) {
          if ((*(byte *)(uVar5 + 0xc) & 0x80) == 0) {
            uVar7 = *(undefined4 *)(uVar5 + 8);
          }
          else {
            uVar7 = 0;
          }
          *(undefined4 *)(uVar1 + 4) = uVar7;
          *(uint *)(uVar5 + 8) = uVar1;
          *(byte *)(uVar5 + 0xc) = *(byte *)(uVar5 + 0xc) & 0x7f;
          uVar1 = uVar5;
        }
      }
      uVar5 = *(uint *)(uVar1 + 8);
      if (uVar5 != 0) {
        if ((*(byte *)(uVar1 + 0xc) & 0x80) == 0) {
          uVar8 = *(uint *)(uVar5 + 4);
          if (uVar8 != 0) {
            bVar6 = *(byte *)(uVar8 + 0xc);
            uStack_28 = (uint)bVar6;
            if (((uint)bVar6 * 0x2000000 == (uint)*(byte *)(uVar5 + 0xc) * 0x2000000) &&
               ((*(byte *)(uVar5 + 0xc) & 0x7f) != 0)) {
              if ((bVar6 & 0x80) == 0) {
                uVar7 = *(undefined4 *)(uVar8 + 8);
              }
              else {
                uVar7 = 0;
              }
              *(undefined4 *)(uVar5 + 4) = uVar7;
              *(uint *)(uVar8 + 8) = uVar5;
              *(byte *)(uVar8 + 0xc) = *(byte *)(uVar8 + 0xc) & 0x7f;
              uVar5 = uVar8;
            }
          }
          *(uint *)(uVar1 + 8) = uVar5;
        }
        iVar9 = *(int *)(uVar5 + 8);
        if (iVar9 != 0) {
          bVar13 = (*(byte *)(uVar1 + 0xc) & 0x80) == 0;
          if (bVar13) {
            uVar5 = (uint)*(byte *)(uVar5 + 0xc);
          }
          if (bVar13 && (uVar5 & 0x80) == 0) {
            uStack_28 = *(int *)(iVar9 + 4);
            if (uStack_28 != 0) {
              if (((byte)(*(byte *)(uStack_28 + 0xc) * '\x02') ==
                   (byte)(*(byte *)(iVar9 + 0xc) * '\x02')) &&
                 ((*(byte *)(iVar9 + 0xc) & 0x7f) != 0)) {
                if ((*(byte *)(uStack_28 + 0xc) & 0x80) == 0) {
                  uVar7 = *(undefined4 *)(uStack_28 + 8);
                }
                else {
                  uVar7 = 0;
                }
                *(undefined4 *)(iVar9 + 4) = uVar7;
                *(int *)(uStack_28 + 8) = iVar9;
                *(byte *)(uStack_28 + 0xc) = *(byte *)(uStack_28 + 0xc) & 0x7f;
                iVar9 = uStack_28;
              }
            }
            *(int *)(*(int *)(uVar1 + 8) + 8) = iVar9;
          }
        }
      }
      if ((((uVar1 != 0) && (bVar6 = *(byte *)(uVar1 + 0xc), (bVar6 & 0x80) == 0)) &&
          (uVar5 = *(uint *)(uVar1 + 8), uVar5 != 0)) &&
         ((((*(byte *)(uVar5 + 0xc) & 0x80) == 0 && (*(int *)(uVar5 + 8) != 0)) &&
          (((*(byte *)(*(int *)(uVar5 + 8) + 0xc) & 0x7f) == (bVar6 & 0x7f) && ((bVar6 & 0x7f) != 0)
           ))))) {
        if (*(int *)(uVar5 + 4) == 0) {
          *(byte *)(uVar1 + 0xc) = bVar6 | 0x80;
        }
        else {
          *(int *)(uVar1 + 8) = *(int *)(uVar5 + 4);
        }
        *(uint *)(uVar5 + 4) = uVar1;
        *(char *)(uVar5 + 0xc) = *(char *)(uVar5 + 0xc) + '\x01';
        uVar1 = uVar5;
      }
      iVar9 = *(int *)(uVar1 + 8);
      if ((iVar9 != 0) && ((*(byte *)(uVar1 + 0xc) & 0x80) == 0)) {
        bVar6 = *(byte *)(iVar9 + 0xc);
        if (((bVar6 & 0x80) == 0) &&
           ((((iVar12 = *(int *)(iVar9 + 8), iVar12 != 0 && ((*(byte *)(iVar12 + 0xc) & 0x80) == 0))
             && (*(int *)(iVar12 + 8) != 0)) &&
            (((*(byte *)(*(int *)(iVar12 + 8) + 0xc) & 0x7f) == (bVar6 & 0x7f) &&
             ((bVar6 & 0x7f) != 0)))))) {
          if (*(int *)(iVar12 + 4) == 0) {
            *(byte *)(iVar9 + 0xc) = bVar6 | 0x80;
          }
          else {
            *(int *)(iVar9 + 8) = *(int *)(iVar12 + 4);
          }
          *(int *)(iVar12 + 4) = iVar9;
          *(char *)(iVar12 + 0xc) = *(char *)(iVar12 + 0xc) + '\x01';
          iVar9 = iVar12;
        }
        *(int *)(uVar1 + 8) = iVar9;
      }
    }
    else {
      if ((int)(*(byte *)(*(int *)(uVar1 + 4) + 0xc) & 0x7f) <
          (int)((*(byte *)(uVar1 + 0xc) & 0x7f) - 1)) goto LAB_00207f80;
LAB_00207f38:
      bVar6 = *(byte *)(uVar1 + 0xc);
      if ((bVar6 & 0x80) == 0) {
        if (*(int *)(uVar1 + 8) == 0) {
          if ((bVar6 & 0x7f) != 0 && (bVar6 & 0x7f) != 1) goto LAB_00207f80;
        }
        else if ((int)(*(byte *)(*(int *)(uVar1 + 8) + 0xc) & 0x7f) < (int)((bVar6 & 0x7f) - 1))
        goto LAB_00207f80;
      }
    }
    if (iVar4 == 0) {
      param_1[1] = uVar1;
    }
    else {
      *(uint *)(auStack_ac[iVar4] + iVar2 * 4 + 4) = uVar1;
    }
    iVar11 = iVar11 + 1;
    iVar9 = iVar4;
    if (iVar10 + 1 <= iVar11) {
      return uVar3;
    }
  } while( true );
}

