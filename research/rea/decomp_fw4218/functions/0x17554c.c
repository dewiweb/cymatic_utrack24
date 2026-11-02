// rea decompile_all
// name: FUN_0017554c
// address: 0x17554c
// body: available
// range: 0x17554c-0x1758d1 inclusive
// range: 0x1758d4-0x175943 inclusive
// range: 0x175948-0x175b25 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x175b22 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001757f4) */
/* WARNING: Removing unreachable block (ram,0x001755b4) */

undefined4
FUN_0017554c(int *param_1,uint *param_2,int param_3,uint *param_4,uint param_5,int param_6)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  pcVar11 = (code *)*DAT_00175944;
  if (param_3 == 1) {
    if (param_6 != 0) {
      *param_1 = (int)param_4;
      *param_2 = param_5;
      return 1;
    }
    iVar15 = (*pcVar11)(param_5 + 1);
    if (iVar15 == 0) {
      return 0;
    }
    FUN_000039e0(iVar15,param_4,param_5);
    *(undefined1 *)(iVar15 + param_5) = 0;
    *param_1 = iVar15;
    *param_2 = param_5 + 1;
    return 1;
  }
  if ((param_3 == 3) || (param_3 == 2)) {
    puVar14 = (uint *)((param_5 >> 1) * 2 + (int)param_4);
    if (param_3 == 2) {
      iVar15 = 0;
      puVar7 = param_4;
      while (puVar7 < puVar14) {
        uVar17 = (uint)(ushort)*puVar7;
        if ((uVar17 < 0xd800) || (uVar17 - 0xe000 < 0x2000)) {
          if (uVar17 < 0x80) {
            iVar15 = iVar15 + 1;
          }
          else if (uVar17 < 0x800) {
            iVar15 = iVar15 + 2;
          }
          else {
            iVar15 = iVar15 + 3;
          }
LAB_0017562c:
          puVar7 = (uint *)((int)puVar7 + 2);
        }
        else {
          if (((0x3ff < uVar17 - 0xd800) || (puVar14 <= (uint *)((int)puVar7 + 2))) ||
             (0x3ff < *(ushort *)((int)puVar7 + 2) - 0xdc00)) goto LAB_0017562c;
          iVar15 = iVar15 + 4;
          puVar7 = puVar7 + 1;
        }
      }
      iVar9 = (*pcVar11)(iVar15 + 1);
      if (iVar9 == 0) {
        return 0;
      }
      puVar3 = (undefined1 *)FUN_00224a3c(param_4,param_5 >> 1,iVar9);
      if ((undefined1 *)(iVar9 + iVar15) == puVar3) {
        *puVar3 = 0;
        *param_1 = iVar9;
        *param_2 = iVar15 + 1;
        return 1;
      }
    }
    else {
      iVar15 = 0;
      puVar7 = param_4;
      while (puVar7 < puVar14) {
        uVar17 = ((ushort)*puVar7 & 0xff) << 8 | (uint)(ushort)((ushort)*puVar7 >> 8);
        if ((uVar17 < 0xd800) || (uVar17 - 0xe000 < 0x2000)) {
          if (uVar17 < 0x80) {
            iVar15 = iVar15 + 1;
          }
          else if (uVar17 < 0x800) {
            iVar15 = iVar15 + 2;
          }
          else {
            iVar15 = iVar15 + 3;
          }
LAB_001756d6:
          puVar7 = (uint *)((int)puVar7 + 2);
        }
        else {
          if (((0x3ff < uVar17 - 0xd800) || (puVar14 <= (uint *)((int)puVar7 + 2))) ||
             (0x3ff < ((*(ushort *)((int)puVar7 + 2) & 0xff) << 8 |
                      (uint)(*(ushort *)((int)puVar7 + 2) >> 8)) - 0xdc00)) goto LAB_001756d6;
          iVar15 = iVar15 + 4;
          puVar7 = puVar7 + 1;
        }
      }
      pbVar10 = (byte *)(*pcVar11)(iVar15 + 1);
      pbVar5 = pbVar10;
      if (pbVar10 == (byte *)0x0) {
        return 0;
      }
      while (param_4 < puVar14) {
        uVar2 = (ushort)*param_4;
        uVar17 = (uVar2 & 0xff) << 8;
        uVar8 = (uint)(uVar2 >> 8);
        uVar4 = uVar17 | uVar8;
        bVar1 = (byte)(uVar2 >> 8);
        if ((uVar4 < 0xd800) || (uVar4 - 0xe000 < 0x2000)) {
          if (uVar4 < 0x80) {
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 1;
          }
          else if (uVar4 < 0x800) {
            *pbVar5 = (byte)(uVar4 >> 6) | 0xc0;
            pbVar5[1] = (bVar1 & 0x3f) + 0x80;
            pbVar5 = pbVar5 + 2;
          }
          else {
            *pbVar5 = (byte)((uVar2 & 0xff) >> 4) | 0xe0;
            pbVar5[1] = (char)((uVar17 & 0xfff | uVar8) >> 6) + 0x80;
            pbVar5[2] = (bVar1 & 0x3f) + 0x80;
            pbVar5 = pbVar5 + 3;
          }
LAB_001757c2:
          param_4 = (uint *)((int)param_4 + 2);
        }
        else {
          if ((0x3ff < uVar4 - 0xd800) || (puVar14 <= (uint *)((int)param_4 + 2)))
          goto LAB_001757c2;
          uVar2 = *(ushort *)((int)param_4 + 2);
          uVar4 = (uVar2 & 0xff) << 8;
          if (0x3ff < (uVar4 | uVar2 >> 8) - 0xdc00) goto LAB_001757c2;
          uVar17 = (uVar17 & 0x3ff | uVar8) * 0x400 + (uVar4 & 0x3ff | (uint)(uVar2 >> 8));
          uVar4 = uVar17 + 0x10000;
          *pbVar5 = (byte)(uVar4 >> 0x12) | 0xf0;
          pbVar5[1] = (char)((uVar4 & 0x3ffff) >> 0xc) + 0x80;
          pbVar5[2] = (char)((uVar17 & 0xfff) >> 6) + 0x80;
          pbVar5[3] = ((byte)(uVar2 >> 8) & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
          param_4 = param_4 + 1;
        }
      }
      if (pbVar10 + iVar15 == pbVar5) {
        *pbVar5 = 0;
        *param_1 = (int)pbVar10;
        *param_2 = iVar15 + 1;
        return 1;
      }
    }
  }
  else if ((param_3 == 6) || (param_3 == 5)) {
    puVar14 = (uint *)((param_5 & 0xfffffffc) + (int)param_4);
    if (param_3 == 5) {
      iVar15 = 0;
      for (puVar7 = param_4; puVar7 < puVar14; puVar7 = puVar7 + 1) {
        uVar17 = *puVar7;
        if (uVar17 < 0x10000) {
          if (uVar17 < 0x80) {
            iVar15 = iVar15 + 1;
          }
          else if (uVar17 < 0x800) {
            iVar15 = iVar15 + 2;
          }
          else {
            iVar15 = iVar15 + 3;
          }
        }
        else {
          iVar15 = iVar15 + 4;
        }
      }
      pbVar10 = (byte *)(*pcVar11)(iVar15 + 1);
      pbVar5 = pbVar10;
      if (pbVar10 == (byte *)0x0) {
        return 0;
      }
      for (; param_4 < puVar14; param_4 = param_4 + 1) {
        uVar17 = *param_4;
        bVar1 = (byte)uVar17;
        if (uVar17 < 0x10000) {
          if (uVar17 < 0x80) {
            *pbVar5 = bVar1;
            pbVar16 = pbVar5 + 1;
          }
          else if (uVar17 < 0x800) {
            *pbVar5 = (byte)(uVar17 >> 6) | 0xc0;
            pbVar5[1] = (bVar1 & 0x3f) + 0x80;
            pbVar16 = pbVar5 + 2;
          }
          else {
            *pbVar5 = (byte)(uVar17 >> 0xc) | 0xe0;
            pbVar5[1] = (char)((uVar17 & 0xfff) >> 6) + 0x80;
            pbVar5[2] = (bVar1 & 0x3f) + 0x80;
            pbVar16 = pbVar5 + 3;
          }
        }
        else {
          *pbVar5 = (byte)(uVar17 >> 0x12) | 0xf0;
          pbVar5[1] = (char)((uVar17 & 0x3ffff) >> 0xc) + 0x80;
          pbVar5[2] = (char)((uVar17 & 0xfff) >> 6) + 0x80;
          pbVar16 = pbVar5 + 4;
          pbVar5[3] = (bVar1 & 0x3f) + 0x80;
        }
        pbVar5 = pbVar16;
      }
      if (pbVar10 + iVar15 == pbVar5) {
        *pbVar5 = 0;
        *param_1 = (int)pbVar10;
        *param_2 = iVar15 + 1;
        return 1;
      }
    }
    else {
      iVar15 = 0;
      for (puVar7 = param_4; puVar7 < puVar14; puVar7 = puVar7 + 1) {
        uVar17 = *puVar7;
        uVar17 = uVar17 << 0x18 | (uVar17 & 0xff00) << 8 | (uVar17 & 0xff0000) >> 8 | uVar17 >> 0x18
        ;
        if (uVar17 < 0x10000) {
          if (uVar17 < 0x80) {
            iVar15 = iVar15 + 1;
          }
          else if (uVar17 < 0x800) {
            iVar15 = iVar15 + 2;
          }
          else {
            iVar15 = iVar15 + 3;
          }
        }
        else {
          iVar15 = iVar15 + 4;
        }
      }
      pbVar10 = (byte *)(*pcVar11)(iVar15 + 1);
      pbVar5 = pbVar10;
      if (pbVar10 == (byte *)0x0) {
        return 0;
      }
      for (; param_4 < puVar14; param_4 = param_4 + 1) {
        uVar12 = *param_4;
        uVar18 = (uVar12 & 0xff00) << 8;
        uVar17 = uVar12 << 0x18 | uVar18;
        uVar19 = (uVar12 & 0xff0000) >> 8;
        uVar4 = uVar17 | uVar19;
        uVar13 = uVar12 >> 0x18;
        uVar8 = uVar4 | uVar13;
        bVar1 = (byte)(uVar12 >> 0x18);
        if (uVar8 < 0x10000) {
          if (uVar8 < 0x80) {
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 1;
          }
          else if (uVar8 < 0x800) {
            *pbVar5 = (byte)(uVar8 >> 6) | 0xc0;
            pbVar5[1] = (bVar1 & 0x3f) + 0x80;
            pbVar5 = pbVar5 + 2;
          }
          else {
            *pbVar5 = (byte)(uVar4 >> 0xc) | 0xe0;
            pbVar5[1] = (char)((uVar19 & 0xfff | uVar13) >> 6) + 0x80;
            pbVar5[2] = (bVar1 & 0x3f) + 0x80;
            pbVar5 = pbVar5 + 3;
          }
        }
        else {
          *pbVar5 = (byte)(uVar17 >> 0x12) | 0xf0;
          pbVar5[1] = (char)((uVar18 & 0x3ffff | uVar19) >> 0xc) + 0x80;
          pbVar5[2] = (char)((uVar19 & 0xfff | uVar13) >> 6) + 0x80;
          pbVar5[3] = (bVar1 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
        }
      }
      if (pbVar10 + iVar15 == pbVar5) {
        *pbVar5 = 0;
        *param_1 = (int)pbVar10;
        *param_2 = iVar15 + 1;
        return 1;
      }
    }
  }
  else if (param_3 == 9) {
    uVar17 = param_5;
    if (param_5 != 0) {
      uVar4 = param_5 & 1;
      uVar17 = 0;
      if (uVar4 != 0) {
        do {
          if (0x7f < *(byte *)((int)param_4 + uVar17)) goto LAB_00175a3e;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar4);
      }
      while( true ) {
        uVar17 = param_5;
        if ((param_5 <= uVar4) || (uVar17 = uVar4, 0x7f < *(byte *)((int)param_4 + uVar4)))
        goto LAB_00175a3e;
        if (0x7f < *(byte *)((int)param_4 + uVar4 + 1)) break;
        uVar4 = uVar4 + 2;
      }
      uVar17 = uVar4 + 1;
LAB_00175a3e:
      if (param_5 < uVar17) goto LAB_00175b22;
    }
    pbVar5 = (byte *)((int)param_4 + uVar17);
    iVar15 = param_5 - uVar17;
    if (iVar15 == 0) {
      if (param_6 == 0) {
        iVar15 = (*pcVar11)(param_5 + 1);
        if (iVar15 == 0) {
          return 0;
        }
        FUN_000039e0(iVar15,param_4,param_5);
        *(undefined1 *)(iVar15 + param_5) = 0;
        *param_1 = iVar15;
        *param_2 = param_5 + 1;
      }
      else {
        *param_1 = (int)param_4;
        *param_2 = param_5;
      }
    }
    else {
      iVar6 = 0;
      iVar9 = iVar15;
      pbVar10 = pbVar5;
      do {
        if (*pbVar10 < 0x80) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar6 = iVar6 + 2;
        }
        pbVar10 = pbVar10 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar6 = iVar6 + uVar17;
      iVar9 = (*pcVar11)(iVar6 + 1);
      if (iVar9 == 0) {
        return 0;
      }
      FUN_000039e0(iVar9,param_4,uVar17);
      pbVar10 = (byte *)(iVar9 + uVar17);
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (bVar1 < 0x80) {
          *pbVar10 = bVar1;
          pbVar10 = pbVar10 + 1;
        }
        else if (bVar1 < 0x800) {
          *pbVar10 = bVar1 >> 6 | 0xc0;
          pbVar10[1] = (bVar1 & 0x3f) + 0x80;
          pbVar10 = pbVar10 + 2;
        }
        else {
          *pbVar10 = 0xe0;
          pbVar10[1] = (bVar1 >> 6) + 0x80;
          pbVar10[2] = (bVar1 & 0x3f) + 0x80;
          pbVar10 = pbVar10 + 3;
        }
      }
      if ((byte *)(iVar9 + iVar6) != pbVar10) goto LAB_00175b22;
      *pbVar10 = 0;
      *param_1 = iVar9;
      *param_2 = iVar6 + 1;
    }
    return 1;
  }
LAB_00175b22:
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

