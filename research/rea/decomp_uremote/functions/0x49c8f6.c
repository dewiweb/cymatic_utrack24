// rea decompile_all
// name: FUN_0049c8f6
// address: 0x49c8f6
// body: available
// range: 0x49c8f6-0x49d3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c8f6(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  int unaff_ESI;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  int local_24;
  byte *local_20;
  uint local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  
  uVar6 = *(uint *)(param_1 + 4);
  pbVar8 = *(byte **)(unaff_ESI + 0xd8);
  uVar13 = (uint)*(byte *)(unaff_ESI + 0x1c5);
  uVar14 = (int)(*(byte *)(param_1 + 0xb) + 7) >> 3;
  local_10 = 0x7fffffff;
  if (((*(byte *)(unaff_ESI + 0x10a) & 8) != 0) && (*(byte *)(unaff_ESI + 0x10a) != 8)) {
    local_10 = 0;
    local_2c = (byte *)0x0;
    if (uVar6 != 0) {
      do {
        uVar11 = (uint)pbVar8[(int)local_2c + 1];
        if (0x7f < uVar11) {
          uVar11 = 0x100 - uVar11;
        }
        local_10 = local_10 + uVar11;
        local_2c = (byte *)((int)local_2c + 1);
      } while (local_2c < uVar6);
    }
    if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
      local_2c = (byte *)(local_10 & 0xffff);
      local_30 = (byte *)(local_10 >> 10 & 0x3fffc0);
      local_34 = 0;
      if (uVar13 != 0) {
        do {
          if (*(char *)(*(int *)(unaff_ESI + 0x1c8) + local_34) == '\0') {
            uVar11 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1cc) + local_34 * 2);
            local_2c = (byte *)(uVar11 * (int)local_2c >> 8);
            local_30 = (byte *)(uVar11 * (int)local_30 >> 8);
          }
          local_34 = local_34 + 1;
        } while ((int)local_34 < (int)uVar13);
      }
      uVar11 = (uint)**(ushort **)(unaff_ESI + 0x1d4) * (int)local_30 >> 3;
      if (uVar11 < 0x3fffc1) {
        local_10 = ((uint)**(ushort **)(unaff_ESI + 0x1d4) * (int)local_2c >> 3) + uVar11 * 0x400;
      }
      else {
        local_10 = 0x7fffffff;
      }
    }
  }
  if (*(byte *)(unaff_ESI + 0x10a) == 0x10) {
    local_30 = (byte *)0x0;
    local_14 = *(byte **)(unaff_ESI + 0xdc);
    pbVar12 = pbVar8 + 1;
    local_20 = pbVar12;
    pbVar3 = local_14;
    for (uVar11 = uVar14; pbVar3 = pbVar3 + 1, uVar11 != 0; uVar11 = uVar11 - 1) {
      bVar2 = *local_20;
      local_20 = local_20 + 1;
      *pbVar3 = bVar2;
      local_30 = (byte *)uVar14;
    }
    if (local_30 < uVar6) {
      iVar15 = uVar6 - (int)local_30;
      do {
        bVar2 = *local_20;
        bVar1 = *pbVar12;
        local_20 = local_20 + 1;
        pbVar12 = pbVar12 + 1;
        *pbVar3 = bVar2 - bVar1;
        pbVar3 = pbVar3 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
LAB_0049ca5c:
    if ((*(byte *)(unaff_ESI + 0x10a) & 0x20) != 0) {
      uVar11 = 0;
      local_2c = (byte *)local_10;
      if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
        local_30 = (byte *)(local_10 & 0xffff);
        iVar15 = 0;
        uVar7 = local_10 >> 10 & 0x3fffc0;
        if (uVar13 != 0) {
          do {
            if (*(char *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) == '\x02') {
              uVar4 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d0) + iVar15 * 2);
              local_30 = (byte *)(uVar4 * (int)local_30 >> 8);
              uVar7 = uVar4 * uVar7 >> 8;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
        uVar4 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d8) + 4);
        uVar7 = uVar4 * uVar7 >> 3;
        if (uVar7 < 0x3fffc1) {
          local_2c = (byte *)((uVar4 * (int)local_30 >> 3) + uVar7 * 0x400);
        }
        else {
          local_2c = (byte *)0x7fffffff;
        }
      }
      local_28 = (byte *)0x0;
      pbVar3 = (byte *)(*(int *)(unaff_ESI + 0xe0) + 1);
      if (uVar6 != 0) {
        iVar15 = *(int *)(unaff_ESI + 0xd4);
        pbVar12 = pbVar3 + (iVar15 - *(int *)(unaff_ESI + 0xe0));
        do {
          bVar2 = pbVar12[(int)pbVar8 - iVar15];
          bVar1 = *pbVar12;
          *pbVar3 = bVar2 - bVar1;
          uVar7 = (uint)(byte)(bVar2 - bVar1);
          pbVar3 = pbVar3 + 1;
          pbVar12 = pbVar12 + 1;
          if (0x7f < uVar7) {
            uVar7 = 0x100 - uVar7;
          }
          uVar11 = uVar11 + uVar7;
        } while ((uVar11 <= local_2c) && (local_28 = (byte *)((int)local_28 + 1), local_28 < uVar6))
        ;
      }
      if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
        local_30 = (byte *)(uVar11 & 0xffff);
        iVar15 = 0;
        uVar11 = uVar11 >> 10 & 0x3fffc0;
        if (uVar13 != 0) {
          do {
            if (*(char *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) == '\x02') {
              uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1cc) + iVar15 * 2);
              local_30 = (byte *)(uVar7 * (int)local_30 >> 8);
              uVar11 = uVar7 * uVar11 >> 8;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
        uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d4) + 4);
        uVar11 = uVar7 * uVar11 >> 3;
        if (uVar11 < 0x3fffc1) {
          uVar11 = (uVar7 * (int)local_30 >> 3) + uVar11 * 0x400;
        }
        else {
          uVar11 = 0x7fffffff;
        }
      }
      if (uVar11 < local_10) {
        local_14 = *(byte **)(unaff_ESI + 0xe0);
        local_10 = uVar11;
      }
    }
    if (*(char *)(unaff_ESI + 0x10a) != '@') goto LAB_0049ccf1;
    local_14 = *(byte **)(unaff_ESI + 0xe4);
    pbVar3 = (byte *)(*(int *)(unaff_ESI + 0xd4) + 1);
    uVar11 = uVar14;
    local_34 = 0;
    local_20 = pbVar8;
    pbVar12 = local_14;
    while( true ) {
      pbVar12 = pbVar12 + 1;
      local_20 = local_20 + 1;
      if (uVar11 == 0) break;
      *pbVar12 = *local_20 - (*pbVar3 >> 1);
      pbVar3 = pbVar3 + 1;
      uVar11 = uVar11 - 1;
      local_34 = uVar14;
    }
    if (local_34 < uVar6) {
      local_34 = uVar6 - local_34;
      local_30 = pbVar8;
      do {
        local_30 = local_30 + 1;
        *pbVar12 = *local_20 - (char)(((uint)*pbVar3 + (uint)*local_30) / 2);
        pbVar12 = pbVar12 + 1;
        pbVar3 = pbVar3 + 1;
        local_20 = local_20 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
LAB_0049cf04:
    if ((*(byte *)(unaff_ESI + 0x10a) & 0x80) == 0) goto LAB_0049d368;
    local_20 = (byte *)0x0;
    local_34 = local_10;
    if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
      local_30 = (byte *)(local_10 & 0xffff);
      iVar15 = 0;
      uVar11 = local_10 >> 10 & 0x3fffc0;
      if (uVar13 != 0) {
        do {
          if (*(char *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) == '\x04') {
            uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d0) + iVar15 * 2);
            local_30 = (byte *)(uVar7 * (int)local_30 >> 8);
            uVar11 = uVar7 * uVar11 >> 8;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)uVar13);
      }
      uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d8) + 8);
      uVar11 = uVar7 * uVar11 >> 3;
      if (uVar11 < 0x3fffc1) {
        local_34 = (uVar7 * (int)local_30 >> 3) + uVar11 * 0x400;
      }
      else {
        local_34 = 0x7fffffff;
      }
    }
    local_2c = (byte *)0x0;
    local_30 = (byte *)(*(int *)(unaff_ESI + 0xe8) + 1);
    pbVar3 = (byte *)(*(int *)(unaff_ESI + 0xd4) + 1);
    pbVar8 = pbVar8 + 1;
    local_18 = pbVar3;
    local_28 = pbVar8;
    for (uVar11 = uVar14; uVar11 != 0; uVar11 = uVar11 - 1) {
      bVar2 = *local_28;
      bVar1 = *local_18;
      *local_30 = bVar2 - bVar1;
      local_30 = local_30 + 1;
      local_18 = local_18 + 1;
      local_28 = local_28 + 1;
      uVar7 = (uint)(byte)(bVar2 - bVar1);
      if (0x7f < uVar7) {
        uVar7 = 0x100 - uVar7;
      }
      local_20 = (byte *)((int)local_20 + uVar7);
      local_2c = (byte *)uVar14;
    }
    if (local_2c < uVar6) {
      iVar15 = (int)pbVar3 - (int)pbVar8;
      do {
        bVar2 = pbVar8[iVar15];
        bVar1 = *local_18;
        bVar10 = *pbVar8;
        local_18 = local_18 + 1;
        iVar5 = (uint)bVar1 - (uint)bVar2;
        pbVar8 = pbVar8 + 1;
        iVar9 = (uint)bVar10 - (uint)bVar2;
        local_24 = iVar5;
        if (iVar5 < 0) {
          local_24 = -iVar5;
        }
        iVar17 = iVar9;
        if (iVar9 < 0) {
          iVar17 = -iVar9;
        }
        iVar5 = iVar5 + iVar9;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (((iVar17 < local_24) || (iVar5 < local_24)) && (bVar10 = bVar2, iVar17 <= iVar5)) {
          bVar10 = bVar1;
        }
        bVar2 = *local_28;
        local_28 = local_28 + 1;
        *local_30 = bVar2 - bVar10;
        uVar14 = (uint)(byte)(bVar2 - bVar10);
        if (0x7f < uVar14) {
          uVar14 = 0x100 - uVar14;
        }
        local_20 = (byte *)((int)local_20 + uVar14);
      } while ((local_20 <= local_34) &&
              (local_2c = (byte *)((int)local_2c + 1), local_30 = local_30 + 1, local_2c < uVar6));
    }
    if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
      local_34 = (uint)local_20 & 0xffff;
      uVar6 = (uint)local_20 >> 10 & 0x3fffc0;
      iVar15 = 0;
      if (uVar13 != 0) {
        do {
          if (*(char *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) == '\x04') {
            uVar14 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1cc) + iVar15 * 2);
            local_34 = uVar14 * local_34 >> 8;
            uVar6 = uVar14 * uVar6 >> 8;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)uVar13);
      }
      uVar14 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d4) + 8);
      uVar6 = uVar14 * uVar6 >> 3;
      if (uVar6 < 0x3fffc1) {
        local_20 = (byte *)((uVar14 * local_34 >> 3) + uVar6 * 0x400);
      }
      else {
        local_20 = (byte *)0x7fffffff;
      }
    }
    if (local_10 <= local_20) goto LAB_0049d368;
  }
  else {
    local_14 = pbVar8;
    if ((*(byte *)(unaff_ESI + 0x10a) & 0x10) != 0) {
      local_30 = (byte *)local_10;
      if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
        local_30 = (byte *)(local_10 & 0xffff);
        uVar11 = local_10 >> 10 & 0x3fffc0;
        local_34 = 0;
        if (uVar13 != 0) {
          do {
            if (*(char *)(*(int *)(unaff_ESI + 0x1c8) + local_34) == '\x01') {
              uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d0) + local_34 * 2);
              local_30 = (byte *)(uVar7 * (int)local_30 >> 8);
              uVar11 = uVar7 * uVar11 >> 8;
            }
            local_34 = local_34 + 1;
          } while ((int)local_34 < (int)uVar13);
        }
        uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d8) + 2);
        uVar11 = uVar7 * uVar11 >> 3;
        if (uVar11 < 0x3fffc1) {
          local_30 = (byte *)((uVar7 * (int)local_30 >> 3) + uVar11 * 0x400);
        }
        else {
          local_30 = (byte *)0x7fffffff;
        }
      }
      local_28 = (byte *)0x0;
      local_2c = pbVar8 + 1;
      uVar7 = 0;
      pbVar12 = (byte *)(*(int *)(unaff_ESI + 0xdc) + 1);
      pbVar3 = local_2c;
      for (uVar11 = uVar14; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar4 = (uint)*pbVar3;
        *pbVar12 = *pbVar3;
        if (0x7f < uVar4) {
          uVar4 = 0x100 - uVar4;
        }
        uVar7 = uVar7 + uVar4;
        pbVar3 = pbVar3 + 1;
        pbVar12 = pbVar12 + 1;
        local_28 = (byte *)uVar14;
      }
      for (; local_28 < uVar6; local_28 = (byte *)((int)local_28 + 1)) {
        bVar2 = *pbVar3;
        bVar1 = *local_2c;
        *pbVar12 = bVar2 - bVar1;
        uVar11 = (uint)(byte)(bVar2 - bVar1);
        if (0x7f < uVar11) {
          uVar11 = 0x100 - uVar11;
        }
        uVar7 = uVar7 + uVar11;
        if (local_30 < uVar7) break;
        pbVar3 = pbVar3 + 1;
        local_2c = local_2c + 1;
        pbVar12 = pbVar12 + 1;
      }
      if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
        local_30 = (byte *)(uVar7 & 0xffff);
        iVar15 = 0;
        uVar11 = uVar7 >> 10 & 0x3fffc0;
        if (uVar13 != 0) {
          do {
            if (*(char *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) == '\x01') {
              uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d0) + iVar15 * 2);
              local_30 = (byte *)(uVar7 * (int)local_30 >> 8);
              uVar11 = uVar7 * uVar11 >> 8;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
        uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d8) + 2);
        uVar11 = uVar7 * uVar11 >> 3;
        if (uVar11 < 0x3fffc1) {
          uVar7 = (uVar7 * (int)local_30 >> 3) + uVar11 * 0x400;
        }
        else {
          uVar7 = 0x7fffffff;
        }
      }
      if (uVar7 < local_10) {
        local_14 = *(byte **)(unaff_ESI + 0xdc);
        local_10 = uVar7;
      }
    }
    if (*(char *)(unaff_ESI + 0x10a) != ' ') goto LAB_0049ca5c;
    local_34 = 0;
    local_14 = *(byte **)(unaff_ESI + 0xe0);
    if (uVar6 != 0) {
      iVar15 = *(int *)(unaff_ESI + 0xd4);
      pbVar3 = local_14 + iVar15 + (1 - (int)local_14);
      do {
        local_14[local_34 + 1] = pbVar3[(int)pbVar8 - iVar15] - *pbVar3;
        local_34 = local_34 + 1;
        pbVar3 = pbVar3 + 1;
      } while (local_34 < uVar6);
    }
LAB_0049ccf1:
    if ((*(byte *)(unaff_ESI + 0x10a) & 0x40) != 0) {
      iVar15 = 0;
      local_1c = 0;
      local_2c = (byte *)local_10;
      if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
        local_30 = (byte *)(local_10 & 0xffff);
        uVar11 = local_10 >> 10 & 0x3fffc0;
        if (uVar13 != 0) {
          do {
            if (*(char *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) == '\x03') {
              uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d0) + iVar15 * 2);
              local_30 = (byte *)(uVar7 * (int)local_30 >> 8);
              uVar11 = uVar7 * uVar11 >> 8;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
        uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d8) + 6);
        uVar11 = uVar7 * uVar11 >> 3;
        if (uVar11 < 0x3fffc1) {
          local_2c = (byte *)((uVar7 * (int)local_30 >> 3) + uVar11 * 0x400);
        }
        else {
          local_2c = (byte *)0x7fffffff;
        }
      }
      local_28 = (byte *)0x0;
      pbVar3 = (byte *)(*(int *)(unaff_ESI + 0xe4) + 1);
      pbVar16 = (byte *)(*(int *)(unaff_ESI + 0xd4) + 1);
      pbVar12 = pbVar8;
      for (uVar11 = uVar14; pbVar12 = pbVar12 + 1, local_30 = pbVar8, uVar11 != 0;
          uVar11 = uVar11 - 1) {
        bVar2 = *pbVar12 - (*pbVar16 >> 1);
        *pbVar3 = bVar2;
        pbVar3 = pbVar3 + 1;
        uVar7 = (uint)bVar2;
        pbVar16 = pbVar16 + 1;
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        local_1c = local_1c + uVar7;
        local_28 = (byte *)uVar14;
      }
      for (; local_28 < uVar6; local_28 = (byte *)((int)local_28 + 1)) {
        local_30 = local_30 + 1;
        bVar2 = *pbVar12 - (char)(((uint)*local_30 + (uint)*pbVar16) / 2);
        *pbVar3 = bVar2;
        pbVar3 = pbVar3 + 1;
        uVar11 = (uint)bVar2;
        pbVar16 = pbVar16 + 1;
        pbVar12 = pbVar12 + 1;
        if (0x7f < uVar11) {
          uVar11 = 0x100 - uVar11;
        }
        local_1c = local_1c + uVar11;
        if (local_2c < local_1c) break;
      }
      if (*(char *)(unaff_ESI + 0x1c4) == '\x02') {
        local_30 = (byte *)(local_1c & 0xffff);
        uVar11 = local_1c >> 10 & 0x3fffc0;
        iVar15 = 0;
        if (uVar13 != 0) {
          do {
            if (*(char *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) == '\0') {
              uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1cc) + iVar15 * 2);
              local_30 = (byte *)(uVar7 * (int)local_30 >> 8);
              uVar11 = uVar7 * uVar11 >> 8;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar13);
        }
        uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x1d4) + 6);
        uVar11 = uVar7 * uVar11 >> 3;
        if (uVar11 < 0x3fffc1) {
          local_1c = (uVar7 * (int)local_30 >> 3) + uVar11 * 0x400;
        }
        else {
          local_1c = 0x7fffffff;
        }
      }
      if (local_1c < local_10) {
        local_14 = *(byte **)(unaff_ESI + 0xe4);
        local_10 = local_1c;
      }
    }
    if (*(char *)(unaff_ESI + 0x10a) != -0x80) goto LAB_0049cf04;
    local_30 = (byte *)0x0;
    local_2c = (byte *)(*(int *)(unaff_ESI + 0xe8) + 1);
    pbVar8 = pbVar8 + 1;
    pbVar12 = (byte *)(*(int *)(unaff_ESI + 0xd4) + 1);
    local_20 = pbVar8;
    pbVar3 = pbVar12;
    for (uVar11 = uVar14; uVar11 != 0; uVar11 = uVar11 - 1) {
      *local_2c = *local_20 - *pbVar3;
      local_2c = local_2c + 1;
      pbVar3 = pbVar3 + 1;
      local_20 = local_20 + 1;
      local_30 = (byte *)uVar14;
    }
    if (local_30 < uVar6) {
      iVar15 = (int)pbVar12 - (int)pbVar8;
      local_34 = uVar6 - (int)local_30;
      do {
        bVar2 = pbVar8[iVar15];
        bVar1 = *pbVar3;
        bVar10 = *pbVar8;
        pbVar3 = pbVar3 + 1;
        iVar5 = (uint)bVar1 - (uint)bVar2;
        pbVar8 = pbVar8 + 1;
        iVar9 = (uint)bVar10 - (uint)bVar2;
        local_30 = (byte *)iVar5;
        if (iVar5 < 0) {
          local_30 = (byte *)-iVar5;
        }
        iVar17 = iVar9;
        if (iVar9 < 0) {
          iVar17 = -iVar9;
        }
        iVar5 = iVar5 + iVar9;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (((iVar17 < (int)local_30) || (iVar5 < (int)local_30)) &&
           (bVar10 = bVar2, iVar17 <= iVar5)) {
          bVar10 = bVar1;
        }
        bVar2 = *local_20;
        local_20 = local_20 + 1;
        local_34 = local_34 + -1;
        *local_2c = bVar2 - bVar10;
        local_2c = local_2c + 1;
      } while (local_34 != 0);
    }
  }
  local_14 = *(byte **)(unaff_ESI + 0xe8);
LAB_0049d368:
  FUN_0049d3b0(local_14,*(int *)(param_1 + 4) + 1);
  if (*(char *)(unaff_ESI + 0x1c5) != '\0') {
    iVar15 = 1;
    if (1 < uVar13) {
      iVar5 = *(int *)(unaff_ESI + 0x1c8);
      do {
        *(undefined1 *)(iVar15 + iVar5) = *(undefined1 *)(iVar15 + -1 + iVar5);
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uVar13);
    }
    *(byte *)(iVar15 + *(int *)(unaff_ESI + 0x1c8)) = *local_14;
  }
  return;
}

