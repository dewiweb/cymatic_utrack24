// rea decompile_all
// name: FUN_0046a107
// address: 0x46a107
// body: available
// range: 0x46a107-0x46b323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0046a107(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  ushort uVar13;
  size_t _Size;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  if ((((param_1 != (int *)0x0) && (puVar4 = (uint *)param_1[7], puVar4 != (uint *)0x0)) &&
      (param_1[3] != 0)) && ((*param_1 != 0 || (param_1[1] == 0)))) {
    if (*puVar4 == 0xb) {
      *puVar4 = 0xc;
    }
    local_20 = (undefined1 *)param_1[3];
    local_24 = param_1[4];
    uVar11 = puVar4[0xe];
    local_28 = 0;
    uVar16 = puVar4[0xf];
    local_8 = (byte *)*param_1;
    uVar5 = param_1[1];
    uVar9 = *puVar4;
    local_18 = local_24;
    local_10 = uVar11;
    local_c = uVar5;
    while (uVar9 < 0x1d) {
      switch((&switchD_0046a175::switchdataD_0046b327)[uVar9]) {
      case (undefined *)0x46a17c:
        if (puVar4[2] == 0) {
          *puVar4 = 0xc;
        }
        else {
          for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
            local_10 = uVar11;
          }
          if (((puVar4[2] & 2) == 0) || (uVar11 != 0x8b1f)) {
            puVar4[4] = 0;
            if (puVar4[8] != 0) {
              *(undefined4 *)(puVar4[8] + 0x30) = 0xffffffff;
            }
            if (((puVar4[2] & 1) == 0) || (((uVar11 & 0xff) * 0x100 + (uVar11 >> 8)) % 0x1f != 0)) {
              param_1[6] = (int)"incorrect header check";
            }
            else if (((byte)uVar11 & 0xf) == 8) {
              local_10 = uVar11 >> 4;
              uVar9 = (local_10 & 0xf) + 8;
              uVar16 = uVar16 - 4;
              if (uVar9 <= puVar4[9]) {
                uVar16 = 0;
                puVar4[5] = 1 << (sbyte)uVar9;
                uVar9 = FUN_0046807d(0);
                puVar4[6] = uVar9;
                param_1[0xc] = uVar9;
                *puVar4 = ~(uVar11 >> 0xc) & 2 | 9;
                local_10 = 0;
                uVar11 = local_10;
                goto LAB_0046b1eb;
              }
              param_1[6] = (int)"invalid window size";
              uVar11 = local_10;
            }
            else {
              param_1[6] = (int)"unknown compression method";
            }
            break;
          }
          uVar16 = 0;
          uVar11 = FUN_00468297(0,0);
          puVar4[6] = uVar11;
          uVar11 = FUN_00468297(uVar11,2);
          puVar4[6] = uVar11;
          local_10 = 0;
          *puVar4 = 1;
          uVar11 = local_10;
        }
        goto LAB_0046b1eb;
      case (undefined *)0x46a2a5:
        for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if (local_c == 0) goto LAB_0046b23c;
          local_c = local_c - 1;
          uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
          local_8 = local_8 + 1;
          local_10 = uVar11;
        }
        puVar4[4] = uVar11;
        if ((char)uVar11 == '\b') {
          if ((uVar11 & 0xe000) == 0) {
            if ((uint *)puVar4[8] != (uint *)0x0) {
              *(uint *)puVar4[8] = uVar11 >> 8 & 1;
            }
            if ((puVar4[4] & 0x200) != 0) {
              uVar11 = FUN_00468297(puVar4[6],2);
              puVar4[6] = uVar11;
            }
            uVar16 = 0;
            *puVar4 = 2;
            uVar11 = 0;
            goto switchD_0046a175_caseD_46a341;
          }
          param_1[6] = (int)"unknown header flags set";
        }
        else {
          param_1[6] = (int)"unknown compression method";
        }
        break;
      case (undefined *)0x46a341:
switchD_0046a175_caseD_46a341:
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          if (local_c == 0) goto LAB_0046b23c;
          local_c = local_c - 1;
          uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
          local_8 = local_8 + 1;
        }
        if (puVar4[8] != 0) {
          *(uint *)(puVar4[8] + 4) = uVar11;
        }
        if ((puVar4[4] & 0x200) != 0) {
          uVar11 = FUN_00468297(puVar4[6],4);
          puVar4[6] = uVar11;
        }
        uVar16 = 0;
        *puVar4 = 3;
        uVar11 = 0;
      case (undefined *)0x46a3bb:
        for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if (local_c == 0) goto LAB_0046b23c;
          local_c = local_c - 1;
          uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
          local_8 = local_8 + 1;
        }
        if (puVar4[8] != 0) {
          *(uint *)(puVar4[8] + 8) = uVar11 & 0xff;
          *(uint *)(puVar4[8] + 0xc) = uVar11 >> 8;
        }
        if ((puVar4[4] & 0x200) != 0) {
          uVar11 = FUN_00468297(puVar4[6],2);
          puVar4[6] = uVar11;
        }
        uVar16 = 0;
        local_10 = 0;
        *puVar4 = 4;
        uVar11 = 0;
switchD_0046a175_caseD_46a438:
        if ((puVar4[4] & 0x400) == 0) {
          if (puVar4[8] != 0) {
            *(undefined4 *)(puVar4[8] + 0x10) = 0;
          }
        }
        else {
          for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
          }
          puVar4[0x10] = uVar11;
          if (puVar4[8] != 0) {
            *(uint *)(puVar4[8] + 0x14) = uVar11;
          }
          if ((puVar4[4] & 0x200) != 0) {
            uVar11 = FUN_00468297(puVar4[6],2);
            puVar4[6] = uVar11;
          }
          uVar16 = 0;
          local_10 = 0;
          uVar11 = 0;
        }
        *puVar4 = 5;
switchD_0046a175_caseD_46a4bb:
        if ((puVar4[4] & 0x400) == 0) {
LAB_0046a54e:
          puVar4[0x10] = 0;
          *puVar4 = 6;
switchD_0046a175_caseD_46a558:
          if ((puVar4[4] & 0x800) == 0) {
            if (puVar4[8] != 0) {
              *(undefined4 *)(puVar4[8] + 0x1c) = 0;
            }
LAB_0046a5e9:
            puVar4[0x10] = 0;
            *puVar4 = 7;
switchD_0046a175_caseD_46a5f3:
            if ((puVar4[4] & 0x1000) == 0) {
              if (puVar4[8] != 0) {
                *(undefined4 *)(puVar4[8] + 0x24) = 0;
              }
LAB_0046a684:
              *puVar4 = 8;
switchD_0046a175_caseD_46a68a:
              if ((puVar4[4] & 0x200) != 0) {
                for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                  if (local_c == 0) goto LAB_0046b23c;
                  local_c = local_c - 1;
                  uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
                  local_8 = local_8 + 1;
                  local_10 = uVar11;
                }
                if (uVar11 != (ushort)puVar4[6]) {
                  param_1[6] = (int)"header crc mismatch";
                  break;
                }
                uVar16 = 0;
                local_10 = 0;
                uVar11 = 0;
              }
              if (puVar4[8] != 0) {
                *(uint *)(puVar4[8] + 0x2c) = (int)puVar4[4] >> 9 & 1;
                *(undefined4 *)(puVar4[8] + 0x30) = 1;
              }
              uVar9 = FUN_00468297(0,0);
              puVar4[6] = uVar9;
              param_1[0xc] = uVar9;
LAB_0046ae2e:
              *puVar4 = 0xb;
              goto LAB_0046b1eb;
            }
            if (local_c != 0) {
              uVar9 = 0;
              do {
                bVar12 = local_8[uVar9];
                uVar9 = uVar9 + 1;
                uVar7 = puVar4[8];
                if (((uVar7 != 0) && (*(int *)(uVar7 + 0x24) != 0)) &&
                   (puVar4[0x10] < *(uint *)(uVar7 + 0x28))) {
                  *(byte *)(*(int *)(uVar7 + 0x24) + puVar4[0x10]) = bVar12;
                  puVar4[0x10] = puVar4[0x10] + 1;
                }
              } while ((bVar12 != 0) && (uVar9 < local_c));
              if ((puVar4[4] & 0x200) != 0) {
                uVar7 = FUN_00468297(puVar4[6],uVar9);
                puVar4[6] = uVar7;
              }
              local_c = local_c - uVar9;
              local_8 = local_8 + uVar9;
              if (bVar12 == 0) goto LAB_0046a684;
            }
          }
          else if (local_c != 0) {
            uVar9 = 0;
            do {
              bVar12 = local_8[uVar9];
              uVar9 = uVar9 + 1;
              uVar7 = puVar4[8];
              if (((uVar7 != 0) && (*(int *)(uVar7 + 0x1c) != 0)) &&
                 (puVar4[0x10] < *(uint *)(uVar7 + 0x20))) {
                *(byte *)(*(int *)(uVar7 + 0x1c) + puVar4[0x10]) = bVar12;
                puVar4[0x10] = puVar4[0x10] + 1;
              }
            } while ((bVar12 != 0) && (uVar9 < local_c));
            if ((puVar4[4] & 0x200) != 0) {
              uVar7 = FUN_00468297(puVar4[6],uVar9);
              puVar4[6] = uVar7;
            }
            local_c = local_c - uVar9;
            local_8 = local_8 + uVar9;
            if (bVar12 == 0) goto LAB_0046a5e9;
          }
        }
        else {
          uVar9 = puVar4[0x10];
          local_14 = uVar9;
          if (local_c < uVar9) {
            local_14 = local_c;
          }
          if (local_14 != 0) {
            uVar7 = puVar4[8];
            if ((uVar7 != 0) && (*(int *)(uVar7 + 0x10) != 0)) {
              iVar10 = *(int *)(uVar7 + 0x14) - uVar9;
              _Size = local_14;
              if (*(uint *)(uVar7 + 0x18) < local_14 + iVar10) {
                _Size = *(uint *)(uVar7 + 0x18) - iVar10;
              }
              _memcpy((void *)(*(int *)(uVar7 + 0x10) + iVar10),local_8,_Size);
            }
            if ((puVar4[4] & 0x200) != 0) {
              uVar9 = FUN_00468297(puVar4[6],local_14);
              puVar4[6] = uVar9;
            }
            local_c = local_c - local_14;
            local_8 = local_8 + local_14;
            puVar4[0x10] = puVar4[0x10] - local_14;
          }
          if (puVar4[0x10] == 0) goto LAB_0046a54e;
        }
LAB_0046b23c:
        param_1[3] = (int)local_20;
        param_1[4] = local_18;
        *param_1 = (int)local_8;
        param_1[1] = local_c;
        puVar4[0xe] = uVar11;
        puVar4[0xf] = uVar16;
        if (((puVar4[10] == 0) && ((0x17 < (int)*puVar4 || (local_24 == param_1[4])))) ||
           (iVar10 = FUN_0046a02f(), iVar10 == 0)) {
          iVar10 = uVar5 - param_1[1];
          iVar15 = local_24 - param_1[4];
          param_1[2] = param_1[2] + iVar10;
          param_1[5] = param_1[5] + iVar15;
          puVar4[7] = puVar4[7] + iVar15;
          if ((puVar4[2] != 0) && (iVar15 != 0)) {
            if (puVar4[4] == 0) {
              uVar11 = FUN_0046807d(iVar15);
            }
            else {
              uVar11 = FUN_00468297(puVar4[6]);
            }
            puVar4[6] = uVar11;
            param_1[0xc] = uVar11;
          }
          if (*puVar4 == 0xb) {
            iVar14 = 0x80;
          }
          else {
            iVar14 = 0;
          }
          param_1[0xb] = (-(uint)(puVar4[1] != 0) & 0x40) + iVar14 + puVar4[0xf];
          if (((iVar10 != 0) || (iVar15 != 0)) && (param_2 != 4)) {
            return local_28;
          }
          if (local_28 != 0) {
            return local_28;
          }
          return -5;
        }
        *puVar4 = 0x1c;
LAB_0046a16d:
        return -4;
      case (undefined *)0x46a438:
        goto switchD_0046a175_caseD_46a438;
      case (undefined *)0x46a4bb:
        goto switchD_0046a175_caseD_46a4bb;
      case (undefined *)0x46a558:
        goto switchD_0046a175_caseD_46a558;
      case (undefined *)0x46a5f3:
        goto switchD_0046a175_caseD_46a5f3;
      case (undefined *)0x46a68a:
        goto switchD_0046a175_caseD_46a68a;
      case (undefined *)0x46a713:
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          if (local_c == 0) goto LAB_0046b23c;
          local_c = local_c - 1;
          uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
          local_8 = local_8 + 1;
        }
        uVar11 = ((uVar11 & 0xff00) + uVar11 * 0x10000) * 0x100 + (uVar11 >> 8 & 0xff00) +
                 (uVar11 >> 0x18);
        uVar16 = 0;
        puVar4[6] = uVar11;
        param_1[0xc] = uVar11;
        *puVar4 = 10;
        uVar11 = 0;
      case (undefined *)0x46a774:
        if (puVar4[3] == 0) {
          param_1[3] = (int)local_20;
          param_1[4] = local_18;
          *param_1 = (int)local_8;
          param_1[1] = local_c;
          puVar4[0xe] = uVar11;
          puVar4[0xf] = uVar16;
          return 2;
        }
        uVar9 = FUN_0046807d(0);
        puVar4[6] = uVar9;
        param_1[0xc] = uVar9;
        *puVar4 = 0xb;
switchD_0046a175_caseD_46a799:
        if (param_2 != 5) {
switchD_0046a175_caseD_46a7a6:
          if (puVar4[1] == 0) {
            for (; uVar16 < 3; uVar16 = uVar16 + 8) {
              if (local_c == 0) goto LAB_0046b23c;
              local_c = local_c - 1;
              uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
              local_8 = local_8 + 1;
            }
            puVar4[1] = uVar11 & 1;
            uVar9 = uVar11 >> 1 & 3;
            if (uVar9 == 0) {
              *puVar4 = 0xd;
            }
            else if (uVar9 == 1) {
              FUN_0046a012();
              *puVar4 = 0x12;
            }
            else if (uVar9 == 2) {
              *puVar4 = 0xf;
            }
            else if (uVar9 == 3) {
              param_1[6] = (int)"invalid block type";
              *puVar4 = 0x1b;
            }
            local_10 = uVar11 >> 3;
            uVar16 = uVar16 - 3;
            uVar11 = local_10;
          }
          else {
            local_10 = uVar11 >> (sbyte)(uVar16 & 7);
            uVar16 = uVar16 - (uVar16 & 7);
            *puVar4 = 0x18;
            uVar11 = local_10;
          }
          goto LAB_0046b1eb;
        }
        goto LAB_0046b23c;
      case (undefined *)0x46a799:
        goto switchD_0046a175_caseD_46a799;
      case (undefined *)0x46a7a6:
        goto switchD_0046a175_caseD_46a7a6;
      case (undefined *)0x46a846:
        uVar11 = uVar11 >> (sbyte)(uVar16 & 7);
        for (uVar16 = uVar16 - (uVar16 & 7); uVar16 < 0x20; uVar16 = uVar16 + 8) {
          if (local_c == 0) goto LAB_0046b23c;
          local_c = local_c - 1;
          uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
          local_8 = local_8 + 1;
        }
        if ((uVar11 & 0xffff) == ~uVar11 >> 0x10) {
          uVar16 = 0;
          puVar4[0x10] = uVar11 & 0xffff;
          local_10 = 0;
          *puVar4 = 0xe;
          uVar11 = 0;
          goto switchD_0046a175_caseD_46a8af;
        }
        param_1[6] = (int)"invalid stored block lengths";
        local_10 = uVar11;
        break;
      case (undefined *)0x46a8af:
switchD_0046a175_caseD_46a8af:
        local_14 = puVar4[0x10];
        if (local_14 != 0) {
          if (local_c < local_14) {
            local_14 = local_c;
          }
          if (local_18 < local_14) {
            local_14 = local_18;
          }
          if (local_14 == 0) goto LAB_0046b23c;
          _memcpy(local_20,local_8,local_14);
          local_c = local_c - local_14;
          local_8 = local_8 + local_14;
          local_18 = local_18 - local_14;
          local_20 = local_20 + local_14;
          puVar4[0x10] = puVar4[0x10] - local_14;
          goto LAB_0046b1eb;
        }
        goto LAB_0046ae2e;
      case (undefined *)0x46a905:
        for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
          if (local_c == 0) goto LAB_0046b23c;
          local_c = local_c - 1;
          uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
          local_8 = local_8 + 1;
        }
        puVar4[0x18] = (uVar11 & 0x1f) + 0x101;
        uVar9 = uVar11 >> 10;
        puVar4[0x19] = (uVar11 >> 5 & 0x1f) + 1;
        uVar11 = uVar11 >> 0xe;
        uVar16 = uVar16 - 0xe;
        puVar4[0x17] = (uVar9 & 0xf) + 4;
        local_10 = uVar11;
        if ((puVar4[0x18] < 0x11f) && (puVar4[0x19] < 0x1f)) {
          puVar4[0x1a] = 0;
          *puVar4 = 0x10;
          goto switchD_0046a175_caseD_46a9cd;
        }
        param_1[6] = (int)"too many length or distance symbols";
        break;
      case (undefined *)0x46a9cd:
switchD_0046a175_caseD_46a9cd:
        while (puVar4[0x1a] < puVar4[0x17]) {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
          }
          uVar13 = (ushort)uVar11;
          uVar11 = uVar11 >> 3;
          *(ushort *)((int)puVar4 + (uint)*(ushort *)(&DAT_00917cf0 + puVar4[0x1a] * 2) * 2 + 0x70)
               = uVar13 & 7;
          puVar4[0x1a] = puVar4[0x1a] + 1;
          uVar16 = uVar16 - 3;
          local_10 = uVar11;
        }
        while (puVar4[0x1a] < 0x13) {
          *(undefined2 *)
           ((int)puVar4 + (uint)*(ushort *)(&DAT_00917cf0 + puVar4[0x1a] * 2) * 2 + 0x70) = 0;
          puVar4[0x1a] = puVar4[0x1a] + 1;
        }
        puVar4[0x1b] = (uint)(puVar4 + 0x14c);
        puVar4[0x13] = (uint)(puVar4 + 0x14c);
        puVar4[0x15] = 7;
        local_28 = FUN_0046b3d2(0,puVar4 + 0x1c,0x13,puVar4 + 0xbc);
        uVar11 = local_10;
        if (local_28 == 0) {
          puVar4[0x1a] = 0;
          *puVar4 = 0x11;
          goto switchD_0046a175_caseD_46ac4c;
        }
        param_1[6] = (int)"invalid code lengths set";
        break;
      case (undefined *)0x46ac4c:
switchD_0046a175_caseD_46ac4c:
        while (puVar4[0x1a] < puVar4[0x19] + puVar4[0x18]) {
          for (; uVar9 = *(uint *)(puVar4[0x13] +
                                  ((1 << ((byte)puVar4[0x15] & 0x1f)) - 1U & uVar11) * 4),
              uVar16 < (uVar9 >> 8 & 0xff); uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
          }
          uVar13 = (ushort)(uVar9 >> 0x10);
          bVar12 = (byte)(uVar9 >> 8);
          if (uVar13 < 0x10) {
            for (; uVar16 < (uVar9 >> 8 & 0xff); uVar16 = uVar16 + 8) {
              if (local_c == 0) goto LAB_0046b23c;
              local_c = local_c - 1;
              uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
              local_8 = local_8 + 1;
            }
            uVar11 = uVar11 >> (bVar12 & 0x1f);
            uVar16 = uVar16 - (uVar9 >> 8 & 0xff);
            *(ushort *)((int)puVar4 + puVar4[0x1a] * 2 + 0x70) = uVar13;
            puVar4[0x1a] = puVar4[0x1a] + 1;
            local_10 = uVar11;
          }
          else {
            if (uVar13 == 0x10) {
              uVar9 = uVar9 >> 8 & 0xff;
              for (; uVar16 < uVar9 + 2; uVar16 = uVar16 + 8) {
                if (local_c == 0) goto LAB_0046b23c;
                local_c = local_c - 1;
                uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
                local_8 = local_8 + 1;
              }
              uVar11 = uVar11 >> (bVar12 & 0x1f);
              uVar16 = uVar16 - uVar9;
              if (puVar4[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                local_10 = uVar11;
                goto LAB_0046b1e5;
              }
              uVar3 = *(undefined2 *)((int)puVar4 + puVar4[0x1a] * 2 + 0x6e);
              iVar10 = (uVar11 & 3) + 3;
              uVar11 = uVar11 >> 2;
              uVar16 = uVar16 - 2;
            }
            else {
              uVar9 = uVar9 >> 8 & 0xff;
              if (uVar13 == 0x11) {
                for (; uVar16 < uVar9 + 3; uVar16 = uVar16 + 8) {
                  if (local_c == 0) goto LAB_0046b23c;
                  local_c = local_c - 1;
                  uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
                  local_8 = local_8 + 1;
                }
                uVar11 = uVar11 >> (bVar12 & 0x1f);
                iVar15 = -3;
                iVar10 = (uVar11 & 7) + 3;
                uVar11 = uVar11 >> 3;
              }
              else {
                for (; uVar16 < uVar9 + 7; uVar16 = uVar16 + 8) {
                  if (local_c == 0) goto LAB_0046b23c;
                  local_c = local_c - 1;
                  uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
                  local_8 = local_8 + 1;
                }
                uVar11 = uVar11 >> (bVar12 & 0x1f);
                iVar15 = -7;
                iVar10 = (uVar11 & 0x7f) + 0xb;
                uVar11 = uVar11 >> 7;
              }
              uVar3 = 0;
              uVar16 = uVar16 + (iVar15 - uVar9);
            }
            local_10 = uVar11;
            if (puVar4[0x19] + puVar4[0x18] < puVar4[0x1a] + iVar10) {
              param_1[6] = (int)"invalid bit length repeat";
              *puVar4 = 0x1b;
              break;
            }
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined2 *)((int)puVar4 + puVar4[0x1a] * 2 + 0x70) = uVar3;
              puVar4[0x1a] = puVar4[0x1a] + 1;
            }
          }
        }
        if (*puVar4 != 0x1b) {
          puVar4[0x1b] = (uint)(puVar4 + 0x14c);
          puVar4[0x13] = (uint)(puVar4 + 0x14c);
          puVar4[0x15] = 9;
          local_28 = FUN_0046b3d2(1,puVar4 + 0x1c,puVar4[0x18],puVar4 + 0xbc);
          uVar11 = local_10;
          if (local_28 == 0) {
            puVar4[0x14] = puVar4[0x1b];
            puVar4[0x16] = 6;
            local_28 = FUN_0046b3d2(2,(int)puVar4 + puVar4[0x18] * 2 + 0x70,puVar4[0x19],
                                    puVar4 + 0xbc);
            if (local_28 == 0) {
              *puVar4 = 0x12;
              goto switchD_0046a175_caseD_46acb5;
            }
            param_1[6] = (int)"invalid distances set";
          }
          else {
            param_1[6] = (int)"invalid literal/lengths set";
          }
          break;
        }
        goto LAB_0046b1eb;
      case (undefined *)0x46acb5:
switchD_0046a175_caseD_46acb5:
        if ((local_c < 6) || (local_18 < 0x102)) {
          uVar9 = *(uint *)(puVar4[0x13] + ((1 << ((byte)puVar4[0x15] & 0x1f)) - 1U & uVar11) * 4);
          for (; uVar16 < (uVar9 >> 8 & 0xff); uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
            uVar9 = *(uint *)(puVar4[0x13] + ((1 << ((byte)puVar4[0x15] & 0x1f)) - 1U & uVar11) * 4)
            ;
          }
          cVar6 = (char)uVar9;
          uVar7 = uVar9;
          if ((cVar6 != '\0') && ((uVar9 & 0xf0) == 0)) {
            local_14._0_1_ = (byte)(uVar9 >> 8);
            uVar7 = *(uint *)(puVar4[0x13] +
                             ((((1 << (cVar6 + (byte)local_14 & 0x1f)) - 1U & uVar11) >>
                              ((byte)local_14 & 0x1f)) + (uVar9 >> 0x10)) * 4);
            for (; uVar16 < (uVar7 >> 8 & 0xff) + (uint)(byte)local_14; uVar16 = uVar16 + 8) {
              if (local_c == 0) goto LAB_0046b23c;
              local_c = local_c - 1;
              uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
              local_8 = local_8 + 1;
              uVar7 = *(uint *)(puVar4[0x13] +
                               ((((1 << (cVar6 + (byte)local_14 & 0x1f)) - 1U & uVar11) >>
                                ((byte)local_14 & 0x1f)) + (uVar9 >> 0x10)) * 4);
            }
            uVar11 = uVar11 >> ((byte)local_14 & 0x1f);
            uVar16 = uVar16 - (byte)local_14;
          }
          uVar11 = uVar11 >> ((byte)(uVar7 >> 8) & 0x1f);
          uVar16 = uVar16 - (uVar7 >> 8 & 0xff);
          puVar4[0x10] = uVar7 >> 0x10;
          local_10 = uVar11;
          if ((char)uVar7 == '\0') {
            *puVar4 = 0x17;
            goto LAB_0046b1eb;
          }
          if ((uVar7 & 0x20) == 0) {
            if ((uVar7 & 0x40) == 0) {
              puVar4[0x12] = uVar7 & 0xf;
              *puVar4 = 0x13;
              goto switchD_0046a175_caseD_46ae5b;
            }
            param_1[6] = (int)"invalid literal/length code";
            break;
          }
          goto LAB_0046ae2e;
        }
        param_1[3] = (int)local_20;
        param_1[4] = local_18;
        *param_1 = (int)local_8;
        param_1[1] = local_c;
        puVar4[0xe] = uVar11;
        puVar4[0xf] = uVar16;
        FUN_00469b4f(param_1,local_24);
        uVar16 = puVar4[0xf];
        local_20 = (undefined1 *)param_1[3];
        local_18 = param_1[4];
        local_8 = (byte *)*param_1;
        local_c = param_1[1];
        local_10 = puVar4[0xe];
        uVar11 = local_10;
        goto LAB_0046b1eb;
      case (undefined *)0x46ae5b:
switchD_0046a175_caseD_46ae5b:
        uVar9 = puVar4[0x12];
        if (uVar9 != 0) {
          if (uVar16 < uVar9) {
            do {
              if (local_c == 0) goto LAB_0046b23c;
              local_c = local_c - 1;
              bVar12 = (byte)uVar16;
              uVar16 = uVar16 + 8;
              uVar11 = uVar11 + ((uint)*local_8 << (bVar12 & 0x1f));
              local_8 = local_8 + 1;
            } while (uVar16 < puVar4[0x12]);
          }
          puVar4[0x10] = puVar4[0x10] + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar11);
          uVar11 = uVar11 >> ((byte)uVar9 & 0x1f);
          uVar16 = uVar16 - uVar9;
        }
        *puVar4 = 0x14;
      case (undefined *)0x46aea1:
        uVar9 = *(uint *)(puVar4[0x14] + ((1 << ((byte)puVar4[0x16] & 0x1f)) - 1U & uVar11) * 4);
        for (; uVar16 < (uVar9 >> 8 & 0xff); uVar16 = uVar16 + 8) {
          if (local_c == 0) goto LAB_0046b23c;
          local_c = local_c - 1;
          uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
          local_8 = local_8 + 1;
          uVar9 = *(uint *)(puVar4[0x14] + ((1 << ((byte)puVar4[0x16] & 0x1f)) - 1U & uVar11) * 4);
        }
        uVar7 = uVar9;
        if ((uVar9 & 0xf0) == 0) {
          local_14._0_1_ = (byte)(uVar9 >> 8);
          uVar7 = *(uint *)(puVar4[0x14] +
                           ((((1 << ((char)uVar9 + (byte)local_14 & 0x1f)) - 1U & uVar11) >>
                            ((byte)local_14 & 0x1f)) + (uVar9 >> 0x10)) * 4);
          for (; uVar16 < (uVar7 >> 8 & 0xff) + (uint)(byte)local_14; uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
            uVar7 = *(uint *)(puVar4[0x14] +
                             ((((1 << ((char)uVar9 + (byte)local_14 & 0x1f)) - 1U & uVar11) >>
                              ((byte)local_14 & 0x1f)) + (uVar9 >> 0x10)) * 4);
          }
          uVar11 = uVar11 >> ((byte)local_14 & 0x1f);
          uVar16 = uVar16 - (byte)local_14;
        }
        uVar11 = uVar11 >> ((byte)(uVar7 >> 8) & 0x1f);
        uVar16 = uVar16 - (uVar7 >> 8 & 0xff);
        local_10 = uVar11;
        if ((uVar7 & 0x40) != 0) {
          param_1[6] = (int)"invalid distance code";
          break;
        }
        puVar4[0x11] = uVar7 >> 0x10;
        puVar4[0x12] = uVar7 & 0xf;
        *puVar4 = 0x15;
switchD_0046a175_caseD_46afbf:
        if (puVar4[0x12] != 0) {
          if (uVar16 < puVar4[0x12]) {
            do {
              if (local_c == 0) goto LAB_0046b23c;
              local_c = local_c - 1;
              bVar12 = (byte)uVar16;
              uVar16 = uVar16 + 8;
              uVar11 = uVar11 + ((uint)*local_8 << (bVar12 & 0x1f));
              local_8 = local_8 + 1;
            } while (uVar16 < puVar4[0x12]);
          }
          bVar12 = (byte)puVar4[0x12];
          puVar4[0x11] = puVar4[0x11] + ((1 << (bVar12 & 0x1f)) - 1U & uVar11);
          uVar11 = uVar11 >> (bVar12 & 0x1f);
          uVar16 = uVar16 - puVar4[0x12];
          local_10 = uVar11;
        }
        if ((puVar4[0xb] - local_18) + local_24 < puVar4[0x11]) {
          param_1[6] = (int)"invalid distance too far back";
          break;
        }
        *puVar4 = 0x16;
switchD_0046a175_caseD_46b026:
        if (local_18 != 0) {
          local_14 = puVar4[0x11];
          if (local_24 - local_18 < local_14) {
            local_14 = local_14 - (local_24 - local_18);
            uVar9 = puVar4[0xc];
            if (uVar9 < local_14) {
              local_14 = local_14 - uVar9;
              puVar8 = (undefined1 *)((puVar4[0xd] + puVar4[10]) - local_14);
            }
            else {
              puVar8 = (undefined1 *)((puVar4[0xd] - local_14) + uVar9);
            }
            local_2c = puVar4[0x10];
            if (local_2c < local_14) goto LAB_0046b075;
          }
          else {
            puVar8 = local_20 + -local_14;
            local_2c = puVar4[0x10];
LAB_0046b075:
            local_14 = local_2c;
          }
          if (local_18 < local_14) {
            local_14 = local_18;
          }
          local_18 = local_18 - local_14;
          puVar4[0x10] = local_2c - local_14;
          do {
            uVar2 = *puVar8;
            puVar1 = local_20 + 1;
            puVar8 = puVar8 + 1;
            local_14 = local_14 - 1;
            *local_20 = uVar2;
            local_20 = puVar1;
          } while (local_14 != 0);
          if (puVar4[0x10] == 0) {
LAB_0046b0c6:
            *puVar4 = 0x12;
          }
          goto LAB_0046b1eb;
        }
        goto LAB_0046b23c;
      case (undefined *)0x46afbf:
        goto switchD_0046a175_caseD_46afbf;
      case (undefined *)0x46b026:
        goto switchD_0046a175_caseD_46b026;
      case (undefined *)0x46b0ae:
        if (local_18 == 0) goto LAB_0046b23c;
        local_18 = local_18 - 1;
        *local_20 = (char)puVar4[0x10];
        local_20 = local_20 + 1;
        goto LAB_0046b0c6;
      case (undefined *)0x46b0d1:
        if (puVar4[2] != 0) {
          for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
            local_10 = uVar11;
          }
          iVar10 = local_24 - local_18;
          param_1[5] = param_1[5] + iVar10;
          puVar4[7] = puVar4[7] + iVar10;
          if (iVar10 != 0) {
            if (puVar4[4] == 0) {
              uVar9 = FUN_0046807d(iVar10);
            }
            else {
              uVar9 = FUN_00468297(puVar4[6]);
            }
            puVar4[6] = uVar9;
            param_1[0xc] = uVar9;
          }
          uVar9 = uVar11;
          if (puVar4[4] == 0) {
            uVar9 = ((uVar11 & 0xff00) + uVar11 * 0x10000) * 0x100 + (uVar11 >> 8 & 0xff00) +
                    (uVar11 >> 0x18);
          }
          local_24 = local_18;
          if (uVar9 != puVar4[6]) {
            param_1[6] = (int)"incorrect data check";
            break;
          }
          uVar16 = 0;
          local_10 = 0;
          uVar11 = 0;
        }
        *puVar4 = 0x19;
      case (undefined *)0x46b19a:
        if ((puVar4[2] != 0) && (puVar4[4] != 0)) {
          for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
            if (local_c == 0) goto LAB_0046b23c;
            local_c = local_c - 1;
            uVar11 = uVar11 + ((uint)*local_8 << ((byte)uVar16 & 0x1f));
            local_8 = local_8 + 1;
            local_10 = uVar11;
          }
          if (uVar11 != puVar4[7]) {
            param_1[6] = (int)"incorrect length check";
            break;
          }
          uVar16 = 0;
          uVar11 = 0;
        }
        *puVar4 = 0x1a;
switchD_0046a175_caseD_46b22c:
        local_28 = 1;
        goto LAB_0046b23c;
      case (undefined *)0x46b22c:
        goto switchD_0046a175_caseD_46b22c;
      case (undefined *)0x46b235:
        local_28 = -3;
        goto LAB_0046b23c;
      case (undefined *)0x46b287:
        goto LAB_0046a16d;
      }
LAB_0046b1e5:
      *puVar4 = 0x1b;
LAB_0046b1eb:
      uVar9 = *puVar4;
    }
  }
  return -2;
}

