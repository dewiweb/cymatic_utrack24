// rea decompile_all
// name: FUN_006161a0
// address: 0x6161a0
// body: available
// range: 0x6161a0-0x6177b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006161a0(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined2 uVar5;
  uint *puVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  int *in_ECX;
  uint *extraout_ECX;
  uint *puVar14;
  uint uVar15;
  int in_EDX;
  uint extraout_EDX;
  uint uVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint local_40;
  undefined4 local_3c;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined1 *local_28;
  uint local_20;
  uint local_18;
  byte *local_14;
  uint local_c;
  uint local_8;
  
  if ((((in_ECX == (int *)0x0) || (puVar6 = (uint *)in_ECX[7], puVar6 == (uint *)0x0)) ||
      (in_ECX[3] == 0)) || ((*in_ECX == 0 && (in_ECX[1] != 0)))) {
    return -2;
  }
  if (*puVar6 == 0xb) {
    *puVar6 = 0xc;
  }
  local_28 = (undefined1 *)in_ECX[3];
  uVar7 = in_ECX[1];
  uVar17 = puVar6[0xf];
  local_2c = in_ECX[4];
  uVar11 = puVar6[0xe];
  pbVar20 = (byte *)*in_ECX;
  local_34 = 0;
  uVar15 = *puVar6;
  if (uVar15 < 0x1d) {
    puVar1 = puVar6 + 0x15;
    puVar14 = puVar6;
    uVar16 = uVar7;
    local_20 = local_2c;
    local_18 = uVar17;
    local_14 = pbVar20;
    local_c = uVar7;
    local_8 = uVar11;
    do {
      uVar9 = local_c;
      switch((&switchD_00616236::switchdataD_006177bc)[uVar15]) {
      case (undefined *)0x61623d:
        puVar2 = puVar14 + 2;
        if (*puVar2 == 0) {
          *puVar14 = 0xc;
        }
        else {
          while (uVar17 < 0x10) {
            if (uVar16 == 0) goto LAB_006176bf;
            uVar16 = uVar16 - 1;
            uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
            pbVar20 = pbVar20 + 1;
            uVar17 = uVar17 + 8;
            puVar14 = puVar6;
            local_18 = uVar17;
            local_14 = pbVar20;
            uVar9 = uVar16;
            local_8 = uVar11;
          }
          local_c = uVar9;
          if (((*puVar2 & 2) == 0) || (uVar11 != 0x8b1f)) {
            puVar14[4] = 0;
            if (puVar14[8] != 0) {
              *(undefined4 *)(puVar14[8] + 0x30) = 0xffffffff;
            }
            uVar15 = uVar11;
            if (((puVar14[2] & 1) == 0) ||
               (puVar14 = puVar6, uVar15 = local_8,
               ((uVar11 >> 8) + (uVar11 & 0xff) * 0x100) % 0x1f != 0)) {
              in_ECX[6] = (int)"incorrect header check";
              *puVar14 = 0x1b;
              uVar11 = uVar15;
            }
            else if (((byte)local_8 & 0xf) == 8) {
              uVar11 = local_8 >> 4;
              uVar17 = uVar17 - 4;
              uVar15 = (uVar11 & 0xf) + 8;
              if (puVar6[9] < uVar15) {
                in_ECX[6] = (int)"invalid window size";
                *puVar6 = 0x1b;
                local_18 = uVar17;
                local_8 = uVar11;
              }
              else {
                puVar6[5] = 1 << (sbyte)uVar15;
                uVar11 = FUN_0061a0c0(0);
                puVar6[6] = uVar11;
                in_ECX[0xc] = uVar11;
                *puVar6 = ~(local_8 >> 0xc) & 2 | 9;
                uVar17 = 0;
                local_8 = 0;
                local_18 = 0;
                uVar11 = 0;
              }
            }
            else {
              in_ECX[6] = (int)"unknown compression method";
              *puVar6 = 0x1b;
              uVar11 = local_8;
            }
          }
          else {
            uVar11 = FUN_0061a0a0(0);
            puVar6[6] = uVar11;
            uVar11 = FUN_00619e10(2);
            local_8 = 0;
            uVar17 = 0;
            local_18 = 0;
            puVar6[6] = uVar11;
            *puVar6 = 1;
            puVar14 = puVar6;
            uVar11 = 0;
          }
        }
        break;
      case (undefined *)0x6163c0:
        while (uVar17 < 0x10) {
          if (uVar16 == 0) goto LAB_006176bf;
          uVar16 = uVar16 - 1;
          uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
          pbVar20 = pbVar20 + 1;
          uVar17 = uVar17 + 8;
          puVar14 = puVar6;
          local_18 = uVar17;
          local_14 = pbVar20;
          uVar9 = uVar16;
          local_8 = uVar11;
        }
        puVar14[4] = uVar11;
        local_c = uVar9;
        if ((char)uVar11 == '\b') {
          if ((uVar11 & 0xe000) == 0) {
            if ((uint *)puVar14[8] != (uint *)0x0) {
              *(uint *)puVar14[8] = uVar11 >> 8 & 1;
            }
            if ((puVar14[4] & 0x200) != 0) {
              uVar11 = FUN_00619e10(2);
              puVar6[6] = uVar11;
              puVar14 = puVar6;
            }
            uVar11 = 0;
            *puVar14 = 2;
            local_8 = 0;
            uVar17 = 0;
            do {
              uVar9 = local_c;
              if (uVar16 == 0) goto LAB_006176bf;
              uVar16 = uVar16 - 1;
              uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
              pbVar20 = pbVar20 + 1;
              uVar17 = uVar17 + 8;
              puVar14 = puVar6;
              local_14 = pbVar20;
              local_c = uVar16;
              local_8 = uVar11;
joined_r0x00616474:
            } while (uVar17 < 0x20);
            if (puVar14[8] != 0) {
              *(uint *)(puVar14[8] + 4) = uVar11;
            }
            if ((puVar14[4] & 0x200) != 0) {
              uVar11 = FUN_00619e10(4);
              puVar6[6] = uVar11;
              puVar14 = puVar6;
            }
            uVar11 = 0;
            *puVar14 = 3;
            local_8 = 0;
            uVar17 = 0;
            do {
              uVar9 = local_c;
              if (uVar16 == 0) goto LAB_006176bf;
              uVar16 = uVar16 - 1;
              uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
              pbVar20 = pbVar20 + 1;
              uVar17 = uVar17 + 8;
              puVar14 = puVar6;
              local_14 = pbVar20;
              local_c = uVar16;
              local_8 = uVar11;
joined_r0x006164f1:
            } while (uVar17 < 0x10);
            if (puVar14[8] != 0) {
              *(uint *)(puVar14[8] + 8) = uVar11 & 0xff;
              *(uint *)(puVar6[8] + 0xc) = uVar11 >> 8;
              puVar14 = puVar6;
            }
            if ((puVar14[4] & 0x200) != 0) {
              uVar11 = FUN_00619e10(2);
              puVar6[6] = uVar11;
              puVar14 = puVar6;
            }
            uVar11 = 0;
            *puVar14 = 4;
            uVar17 = 0;
            local_8 = 0;
            local_18 = 0;
            goto switchD_00616236_caseD_616570;
          }
          in_ECX[6] = (int)"unknown header flags set";
          *puVar14 = 0x1b;
        }
        else {
          in_ECX[6] = (int)"unknown compression method";
          *puVar14 = 0x1b;
        }
        break;
      case (undefined *)0x616471:
        goto joined_r0x00616474;
      case (undefined *)0x6164ee:
        goto joined_r0x006164f1;
      case (undefined *)0x616570:
switchD_00616236_caseD_616570:
        if ((puVar14[4] & 0x400) == 0) {
          if (puVar14[8] != 0) {
            *(undefined4 *)(puVar14[8] + 0x10) = 0;
          }
        }
        else {
          for (; uVar17 < 0x10; uVar17 = uVar17 + 8) {
            uVar9 = local_c;
            if (uVar16 == 0) goto LAB_006176bf;
            uVar16 = uVar16 - 1;
            uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
            pbVar20 = pbVar20 + 1;
            puVar14 = puVar6;
            local_14 = pbVar20;
            local_c = uVar16;
            local_8 = uVar11;
          }
          puVar14[0x10] = uVar11;
          if (puVar14[8] != 0) {
            *(uint *)(puVar14[8] + 0x14) = uVar11;
          }
          if ((puVar14[4] & 0x200) != 0) {
            uVar11 = FUN_00619e10(2);
            puVar6[6] = uVar11;
            puVar14 = puVar6;
          }
          uVar17 = 0;
          local_8 = 0;
          local_18 = 0;
        }
        *puVar14 = 5;
      case (undefined *)0x6165fe:
        if ((puVar14[4] & 0x400) == 0) {
LAB_006166aa:
          puVar14[0x10] = 0;
          *puVar14 = 6;
switchD_00616236_caseD_6166b7:
          if ((puVar14[4] & 0x800) == 0) {
            if (puVar14[8] != 0) {
              *(undefined4 *)(puVar14[8] + 0x1c) = 0;
            }
LAB_00616777:
            puVar14[0x10] = 0;
            *puVar14 = 7;
switchD_00616236_caseD_616784:
            if ((puVar14[4] & 0x1000) == 0) {
              if (puVar14[8] != 0) {
                *(undefined4 *)(puVar14[8] + 0x24) = 0;
              }
LAB_00616847:
              *puVar14 = 8;
              uVar11 = local_8;
switchD_00616236_caseD_616850:
              if ((puVar14[4] & 0x200) != 0) {
                while (uVar17 < 0x10) {
                  uVar9 = local_c;
                  if (uVar16 == 0) goto LAB_006176bf;
                  uVar16 = uVar16 - 1;
                  uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
                  pbVar20 = pbVar20 + 1;
                  uVar17 = uVar17 + 8;
                  puVar14 = puVar6;
                  local_18 = uVar17;
                  local_14 = pbVar20;
                  local_c = uVar16;
                  local_8 = uVar11;
                }
                if (uVar11 != (ushort)puVar14[6]) {
                  in_ECX[6] = (int)"header crc mismatch";
                  *puVar14 = 0x1b;
                  break;
                }
                uVar17 = 0;
                local_8 = 0;
                local_18 = 0;
              }
              if (puVar14[8] != 0) {
                *(uint *)(puVar14[8] + 0x2c) = (int)puVar14[4] >> 9 & 1;
                *(undefined4 *)(puVar14[8] + 0x30) = 1;
              }
              uVar11 = FUN_0061a0a0(0);
              puVar6[6] = uVar11;
              in_ECX[0xc] = uVar11;
              *puVar6 = 0xb;
              puVar14 = puVar6;
              uVar11 = local_8;
              break;
            }
            uVar9 = local_c;
            if (uVar16 != 0) {
              uVar11 = 0;
              do {
                bVar13 = pbVar20[uVar11];
                uVar11 = uVar11 + 1;
                uVar15 = puVar14[8];
                if (((uVar15 != 0) && (*(int *)(uVar15 + 0x24) != 0)) &&
                   (puVar14[0x10] < *(uint *)(uVar15 + 0x28))) {
                  *(byte *)(*(int *)(uVar15 + 0x24) + puVar14[0x10]) = bVar13;
                  puVar14[0x10] = puVar14[0x10] + 1;
                  uVar16 = local_c;
                }
              } while ((bVar13 != 0) && (uVar11 < uVar16));
              if ((puVar14[4] & 0x200) != 0) {
                if (pbVar20 == (byte *)0x0) {
                  local_30 = 0;
                }
                else {
                  local_30 = FUN_00619e10(uVar11);
                  puVar14 = puVar6;
                }
                puVar14[6] = local_30;
                uVar16 = local_c;
              }
              uVar16 = uVar16 - uVar11;
              pbVar20 = pbVar20 + uVar11;
              uVar9 = uVar16;
              uVar17 = local_18;
              local_14 = pbVar20;
              local_c = uVar16;
              if (bVar13 == 0) goto LAB_00616847;
            }
          }
          else {
            uVar9 = local_c;
            if (uVar16 != 0) {
              uVar11 = 0;
              do {
                bVar13 = pbVar20[uVar11];
                uVar11 = uVar11 + 1;
                uVar15 = puVar14[8];
                if (((uVar15 != 0) && (*(int *)(uVar15 + 0x1c) != 0)) &&
                   (puVar14[0x10] < *(uint *)(uVar15 + 0x20))) {
                  *(byte *)(*(int *)(uVar15 + 0x1c) + puVar14[0x10]) = bVar13;
                  puVar14[0x10] = puVar14[0x10] + 1;
                  uVar16 = local_c;
                }
              } while ((bVar13 != 0) && (uVar11 < uVar16));
              if ((puVar14[4] & 0x200) != 0) {
                if (pbVar20 == (byte *)0x0) {
                  local_30 = 0;
                }
                else {
                  local_30 = FUN_00619e10(uVar11);
                  puVar14 = puVar6;
                }
                puVar14[6] = local_30;
                uVar16 = local_c;
              }
              uVar16 = uVar16 - uVar11;
              pbVar20 = pbVar20 + uVar11;
              uVar9 = uVar16;
              uVar17 = local_18;
              local_14 = pbVar20;
              local_c = uVar16;
              if (bVar13 == 0) goto LAB_00616777;
            }
          }
        }
        else {
          uVar11 = puVar14[0x10];
          uVar15 = uVar11;
          if (uVar16 < uVar11) {
            uVar15 = uVar16;
          }
          if (uVar15 != 0) {
            uVar9 = puVar14[8];
            if ((uVar9 != 0) && (pbVar20 = local_14, *(int *)(uVar9 + 0x10) != 0)) {
              iVar10 = *(int *)(uVar9 + 0x14) - uVar11;
              uVar11 = uVar15;
              if (*(uint *)(uVar9 + 0x18) < iVar10 + uVar15) {
                uVar11 = *(uint *)(uVar9 + 0x18) - iVar10;
              }
              FUN_004c2c30(iVar10 + *(int *)(uVar9 + 0x10),local_14,uVar11);
              puVar14 = puVar6;
            }
            if ((puVar14[4] & 0x200) != 0) {
              if (pbVar20 == (byte *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_00619e10(uVar15);
                puVar14 = puVar6;
              }
              puVar14[6] = uVar11;
            }
            uVar16 = uVar16 - uVar15;
            pbVar20 = pbVar20 + uVar15;
            puVar14[0x10] = puVar14[0x10] - uVar15;
            local_14 = pbVar20;
            local_c = uVar16;
          }
          uVar9 = local_c;
          if (puVar14[0x10] == 0) goto LAB_006166aa;
        }
LAB_006176bf:
        in_ECX[3] = (int)local_28;
        in_ECX[4] = local_20;
        in_ECX[1] = uVar9;
        *in_ECX = (int)local_14;
        puVar6[0xf] = uVar17;
        puVar6[0xe] = local_8;
        if (((puVar6[10] == 0) && ((0x17 < (int)*puVar6 || (local_2c == in_ECX[4])))) ||
           (iVar10 = FUN_00617840(), iVar10 == 0)) {
          iVar10 = in_ECX[1];
          iVar18 = local_2c - in_ECX[4];
          in_ECX[2] = in_ECX[2] + (uVar7 - iVar10);
          in_ECX[5] = in_ECX[5] + iVar18;
          puVar6[7] = puVar6[7] + iVar18;
          if ((puVar6[2] != 0) && (iVar18 != 0)) {
            if (puVar6[4] == 0) {
              uVar11 = FUN_0061a0c0(iVar18);
            }
            else if (in_ECX[3] == iVar18) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_00619e10(iVar18);
            }
            puVar6[6] = uVar11;
            in_ECX[0xc] = uVar11;
          }
          iVar12 = 0;
          if (*puVar6 == 0xb) {
            iVar12 = 0x80;
          }
          in_ECX[0xb] = (-(uint)(puVar6[1] != 0) & 0x40) + iVar12 + puVar6[0xf];
          if (((uVar7 - iVar10 != 0) || (iVar18 != 0)) && (in_EDX != 4)) {
            return local_34;
          }
          if (local_34 == 0) {
            local_34 = -5;
          }
          return local_34;
        }
        *puVar6 = 0x1c;
switchD_00616236_caseD_617708:
        return -4;
      case (undefined *)0x6166b7:
        goto switchD_00616236_caseD_6166b7;
      case (undefined *)0x616784:
        goto switchD_00616236_caseD_616784;
      case (undefined *)0x616850:
        goto switchD_00616236_caseD_616850;
      case (undefined *)0x6168f5:
        for (; uVar17 < 0x20; uVar17 = uVar17 + 8) {
          uVar9 = local_c;
          if (uVar16 == 0) goto LAB_006176bf;
          uVar16 = uVar16 - 1;
          uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
          pbVar20 = pbVar20 + 1;
          local_14 = pbVar20;
          local_c = uVar16;
          local_8 = uVar11;
        }
        uVar11 = (uVar11 >> 8 & 0xff00) + ((uVar11 & 0xff00) + uVar11 * 0x10000) * 0x100 +
                 (uVar11 >> 0x18);
        puVar6[6] = uVar11;
        in_ECX[0xc] = uVar11;
        uVar11 = 0;
        local_8 = 0;
        uVar17 = 0;
        *puVar6 = 10;
        puVar14 = puVar6;
      case (undefined *)0x616960:
        if (puVar14[3] == 0) {
          in_ECX[3] = (int)local_28;
          in_ECX[4] = local_20;
          *in_ECX = (int)pbVar20;
          in_ECX[1] = uVar16;
          puVar6[0xf] = uVar17;
          puVar6[0xe] = uVar11;
          return 2;
        }
        uVar11 = FUN_0061a0c0(0);
        puVar6[6] = uVar11;
        in_ECX[0xc] = uVar11;
        *puVar6 = 0xb;
        puVar14 = puVar6;
        uVar11 = local_8;
switchD_00616236_caseD_61698d:
        uVar9 = local_c;
        if (in_EDX != 5) {
switchD_00616236_caseD_616997:
          if (puVar14[1] == 0) {
            for (; uVar17 < 3; uVar17 = uVar17 + 8) {
              uVar9 = local_c;
              if (uVar16 == 0) goto LAB_006176bf;
              uVar16 = uVar16 - 1;
              uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
              pbVar20 = pbVar20 + 1;
              puVar14 = puVar6;
              local_14 = pbVar20;
              local_c = uVar16;
              local_8 = uVar11;
            }
            puVar14[1] = uVar11 & 1;
            switch(uVar11 >> 1 & 3) {
            case 0:
              local_8 = uVar11 >> 3;
              uVar17 = uVar17 - 3;
              *puVar14 = 0xd;
              uVar11 = local_8;
              local_18 = uVar17;
              break;
            case 1:
              FUN_00617940();
              local_8 = extraout_EDX >> 2;
              uVar17 = uVar17 - 3;
              *extraout_ECX = 0x12;
              puVar14 = extraout_ECX;
              uVar11 = local_8;
              local_18 = uVar17;
              break;
            case 2:
              local_8 = uVar11 >> 3;
              uVar17 = uVar17 - 3;
              *puVar14 = 0xf;
              uVar11 = local_8;
              local_18 = uVar17;
              break;
            case 3:
              in_ECX[6] = (int)"invalid block type";
              *puVar14 = 0x1b;
              local_8 = uVar11 >> 3;
              uVar17 = uVar17 - 3;
              uVar11 = local_8;
              local_18 = uVar17;
            }
          }
          else {
            uVar11 = uVar11 >> (sbyte)(uVar17 & 7);
            uVar17 = uVar17 - (uVar17 & 7);
            *puVar6 = 0x18;
            puVar14 = puVar6;
            local_18 = uVar17;
            local_8 = uVar11;
          }
          break;
        }
        goto LAB_006176bf;
      case (undefined *)0x61698d:
        goto switchD_00616236_caseD_61698d;
      case (undefined *)0x616997:
        goto switchD_00616236_caseD_616997;
      case (undefined *)0x616a68:
        local_8 = uVar11 >> (sbyte)(uVar17 & 7);
        for (uVar17 = uVar17 - (uVar17 & 7); uVar17 < 0x20; uVar17 = uVar17 + 8) {
          uVar9 = local_c;
          if (uVar16 == 0) goto LAB_006176bf;
          uVar16 = uVar16 - 1;
          local_8 = local_8 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
          pbVar20 = pbVar20 + 1;
          local_14 = pbVar20;
          local_c = uVar16;
        }
        if ((local_8 & 0xffff) == ~local_8 >> 0x10) {
          uVar11 = 0;
          uVar17 = 0;
          puVar6[0x10] = local_8 & 0xffff;
          local_8 = 0;
          local_18 = 0;
          *puVar6 = 0xe;
          puVar14 = puVar6;
          goto switchD_00616236_caseD_616ae6;
        }
        in_ECX[6] = (int)"invalid stored block lengths";
        *puVar6 = 0x1b;
        puVar14 = puVar6;
        uVar11 = local_8;
        local_18 = uVar17;
        break;
      case (undefined *)0x616ae6:
switchD_00616236_caseD_616ae6:
        uVar15 = puVar14[0x10];
        if (uVar15 == 0) {
LAB_006171ca:
          *puVar14 = 0xb;
        }
        else {
          if (uVar16 < uVar15) {
            uVar15 = uVar16;
          }
          if (local_20 < uVar15) {
            uVar15 = local_20;
          }
          uVar9 = local_c;
          if (uVar15 == 0) goto LAB_006176bf;
          FUN_004c2c30(local_28,pbVar20,uVar15);
          uVar16 = uVar16 - uVar15;
          local_20 = local_20 - uVar15;
          pbVar20 = pbVar20 + uVar15;
          local_28 = local_28 + uVar15;
          puVar6[0x10] = puVar6[0x10] - uVar15;
          puVar14 = puVar6;
          uVar11 = local_8;
          local_14 = pbVar20;
          local_c = uVar16;
        }
        break;
      case (undefined *)0x616b33:
        for (; uVar17 < 0xe; uVar17 = uVar17 + 8) {
          uVar9 = local_c;
          if (uVar16 == 0) goto LAB_006176bf;
          uVar16 = uVar16 - 1;
          uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
          pbVar20 = pbVar20 + 1;
          puVar14 = puVar6;
          local_14 = pbVar20;
          local_c = uVar16;
          local_8 = uVar11;
        }
        uVar17 = uVar17 - 0xe;
        puVar14[0x18] = (uVar11 & 0x1f) + 0x101;
        uVar15 = uVar11 >> 10;
        puVar14[0x19] = (uVar11 >> 5 & 0x1f) + 1;
        uVar11 = uVar11 >> 0xe;
        puVar14[0x17] = (uVar15 & 0xf) + 4;
        local_18 = uVar17;
        local_8 = uVar11;
        if ((puVar14[0x18] < 0x11f) && (puVar14[0x19] < 0x1f)) {
          puVar14[0x1a] = 0;
          *puVar14 = 0x10;
          goto switchD_00616236_caseD_616bb6;
        }
        in_ECX[6] = (int)"too many length or distance symbols";
        *puVar14 = 0x1b;
        break;
      case (undefined *)0x616bb6:
switchD_00616236_caseD_616bb6:
        pbVar19 = pbVar20;
        if (puVar14[0x1a] < puVar14[0x17]) {
          do {
            for (; pbVar20 = local_14, local_14 = pbVar20, uVar17 < 3; uVar17 = uVar17 + 8) {
              uVar9 = local_c;
              if (uVar16 == 0) goto LAB_006176bf;
              uVar16 = uVar16 - 1;
              local_8 = uVar11 + ((uint)*pbVar19 << ((byte)uVar17 & 0x1f));
              pbVar19 = pbVar19 + 1;
              uVar11 = local_8;
              local_14 = pbVar19;
              local_c = uVar16;
            }
            local_8 = uVar11 >> 3;
            uVar17 = uVar17 - 3;
            *(ushort *)
             ((int)puVar6 + (uint)*(ushort *)(&DAT_00c15e50 + puVar6[0x1a] * 2) * 2 + 0x70) =
                 (ushort)uVar11 & 7;
            puVar6[0x1a] = puVar6[0x1a] + 1;
            puVar14 = puVar6;
            local_18 = uVar17;
            uVar11 = local_8;
            pbVar19 = pbVar20;
          } while (puVar6[0x1a] < puVar6[0x17]);
        }
        uVar11 = puVar14[0x1a];
        while (uVar11 < 0x13) {
          *(undefined2 *)
           ((int)puVar14 + (uint)*(ushort *)(&DAT_00c15e50 + puVar14[0x1a] * 2) * 2 + 0x70) = 0;
          puVar14[0x1a] = puVar14[0x1a] + 1;
          uVar11 = puVar14[0x1a];
        }
        puVar6[0x13] = (uint)(puVar14 + 0x14c);
        puVar14[0x1b] = (uint)(puVar14 + 0x14c);
        puVar6[0x15] = 7;
        local_34 = FUN_00615c40(0x13,puVar14 + 0x1b,puVar6 + 0x15,puVar6 + 0xbc);
        if (local_34 == 0) {
          puVar6[0x1a] = 0;
          *puVar6 = 0x11;
          puVar14 = puVar6;
          goto switchD_00616236_caseD_616cd1;
        }
        in_ECX[6] = (int)"invalid code lengths set";
LAB_00616c92:
        *puVar6 = 0x1b;
        puVar14 = puVar6;
        uVar11 = local_8;
        break;
      case (undefined *)0x616cd1:
switchD_00616236_caseD_616cd1:
        if (puVar14[0x1a] < puVar14[0x19] + puVar14[0x18]) {
          do {
            uVar11 = *(uint *)(puVar6[0x13] + ((1 << ((byte)*puVar1 & 0x1f)) - 1U & local_8) * 4);
            if (uVar17 < (uVar11 >> 8 & 0xff)) {
              do {
                uVar9 = local_c;
                if (uVar16 == 0) goto LAB_006176bf;
                local_8 = local_8 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
                uVar16 = uVar16 - 1;
                pbVar20 = pbVar20 + 1;
                uVar17 = uVar17 + 8;
                uVar11 = *(uint *)(puVar6[0x13] + ((1 << ((byte)*puVar1 & 0x1f)) - 1U & local_8) * 4
                                  );
                local_14 = pbVar20;
                local_c = uVar16;
              } while (uVar17 < (uVar11 >> 8 & 0xff));
            }
            local_3c._2_2_ = (short)(uVar11 >> 0x10);
            bVar13 = (byte)(uVar11 >> 8);
            if (uVar11 >> 0x10 < 0x10) {
              for (; uVar17 < (uVar11 >> 8 & 0xff); uVar17 = uVar17 + 8) {
                uVar9 = local_c;
                if (uVar16 == 0) goto LAB_006176bf;
                uVar16 = uVar16 - 1;
                local_8 = local_8 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
                pbVar20 = pbVar20 + 1;
                local_14 = pbVar20;
                local_c = uVar16;
              }
              local_8 = local_8 >> (bVar13 & 0x1f);
              uVar17 = uVar17 - (uVar11 >> 8 & 0xff);
              *(short *)((int)puVar6 + puVar6[0x1a] * 2 + 0x70) = local_3c._2_2_;
              puVar6[0x1a] = puVar6[0x1a] + 1;
            }
            else {
              if (local_3c._2_2_ == 0x10) {
                uVar15 = uVar11 >> 8 & 0xff;
                if (uVar17 < uVar15 + 2) {
                  do {
                    uVar9 = local_c;
                    if (uVar16 == 0) goto LAB_006176bf;
                    uVar16 = uVar16 - 1;
                    local_8 = local_8 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
                    pbVar20 = pbVar20 + 1;
                    uVar17 = uVar17 + 8;
                    local_14 = pbVar20;
                    local_c = uVar16;
                  } while (uVar17 < uVar15 + 2);
                }
                uVar11 = local_8 >> (bVar13 & 0x1f);
                uVar17 = uVar17 - uVar15;
                if (puVar6[0x1a] == 0) {
                  in_ECX[6] = (int)"invalid bit length repeat";
                  *puVar6 = 0x1b;
                  puVar14 = puVar6;
                  local_18 = uVar17;
                  local_8 = uVar11;
                  goto LAB_00616c9b;
                }
                uVar5 = *(undefined2 *)((int)puVar6 + puVar6[0x1a] * 2 + 0x6e);
                local_8 = uVar11 >> 2;
                local_30 = (uVar11 & 3) + 3;
                uVar17 = uVar17 - 2;
              }
              else {
                uVar11 = uVar11 >> 8 & 0xff;
                if (local_3c._2_2_ == 0x11) {
                  if (uVar17 < uVar11 + 3) {
                    do {
                      uVar9 = local_c;
                      if (uVar16 == 0) goto LAB_006176bf;
                      uVar16 = uVar16 - 1;
                      local_8 = local_8 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
                      pbVar20 = pbVar20 + 1;
                      uVar17 = uVar17 + 8;
                      local_14 = pbVar20;
                      local_c = uVar16;
                    } while (uVar17 < uVar11 + 3);
                  }
                  local_8 = local_8 >> (bVar13 & 0x1f);
                  local_30 = (local_8 & 7) + 3;
                  local_8 = local_8 >> 3;
                  iVar10 = -3;
                }
                else {
                  if (uVar17 < uVar11 + 7) {
                    do {
                      uVar9 = local_c;
                      if (uVar16 == 0) goto LAB_006176bf;
                      uVar16 = uVar16 - 1;
                      local_8 = local_8 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
                      pbVar20 = pbVar20 + 1;
                      uVar17 = uVar17 + 8;
                      local_14 = pbVar20;
                      local_c = uVar16;
                    } while (uVar17 < uVar11 + 7);
                  }
                  local_8 = local_8 >> (bVar13 & 0x1f);
                  local_30 = (local_8 & 0x7f) + 0xb;
                  local_8 = local_8 >> 7;
                  iVar10 = -7;
                }
                uVar5 = 0;
                uVar17 = uVar17 + (iVar10 - uVar11);
              }
              pbVar20 = local_14;
              if (puVar6[0x19] + puVar6[0x18] < puVar6[0x1a] + local_30) {
                in_ECX[6] = (int)"invalid bit length repeat";
                *puVar6 = 0x1b;
                puVar14 = puVar6;
                uVar11 = local_8;
                local_18 = uVar17;
                goto LAB_00616c9b;
              }
              do {
                *(undefined2 *)((int)puVar6 + puVar6[0x1a] * 2 + 0x70) = uVar5;
                puVar6[0x1a] = puVar6[0x1a] + 1;
                local_30 = local_30 + -1;
                uVar16 = local_c;
              } while (local_30 != 0);
            }
            puVar14 = puVar6;
            local_18 = uVar17;
          } while (puVar6[0x1a] < puVar6[0x19] + puVar6[0x18]);
        }
        uVar11 = local_8;
        if (*puVar14 != 0x1b) {
          puVar2 = puVar14 + 0x1b;
          puVar14[0x15] = 9;
          *puVar2 = (uint)(puVar14 + 0x14c);
          puVar14[0x13] = (uint)(puVar14 + 0x14c);
          local_34 = FUN_00615c40(puVar14[0x18],puVar2,puVar14 + 0x15,puVar14 + 0xbc);
          if (local_34 != 0) {
            in_ECX[6] = (int)"invalid literal/lengths set";
            goto LAB_00616c92;
          }
          puVar6[0x16] = 6;
          puVar6[0x14] = *puVar2;
          local_34 = FUN_00615c40(puVar6[0x19],puVar2,puVar6 + 0x16,puVar6 + 0xbc);
          if (local_34 == 0) {
            *puVar6 = 0x12;
            puVar14 = puVar6;
            goto switchD_00616236_caseD_617003;
          }
          in_ECX[6] = (int)"invalid distances set";
          *puVar6 = 0x1b;
          puVar14 = puVar6;
        }
        break;
      case (undefined *)0x617003:
switchD_00616236_caseD_617003:
        if ((uVar16 < 6) || (local_20 < 0x102)) {
          uVar15 = *(uint *)(puVar14[0x13] + ((1 << ((byte)*puVar1 & 0x1f)) - 1U & uVar11) * 4);
          if (uVar17 < (uVar15 >> 8 & 0xff)) {
            do {
              uVar9 = local_c;
              if (uVar16 == 0) goto LAB_006176bf;
              uVar16 = uVar16 - 1;
              uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
              pbVar20 = pbVar20 + 1;
              uVar17 = uVar17 + 8;
              uVar15 = *(uint *)(puVar6[0x13] + ((1 << ((byte)*puVar1 & 0x1f)) - 1U & uVar11) * 4);
              local_14 = pbVar20;
              local_c = uVar16;
              local_8 = uVar11;
            } while (uVar17 < (uVar15 >> 8 & 0xff));
          }
          cVar8 = (char)uVar15;
          uVar9 = uVar15;
          if ((cVar8 != '\0') && ((uVar15 & 0xf0) == 0)) {
            bVar13 = (byte)(uVar15 >> 8);
            uVar9 = *(uint *)(puVar14[0x13] +
                             ((((1 << (cVar8 + bVar13 & 0x1f)) - 1U & local_8) >> (bVar13 & 0x1f)) +
                             (uVar15 >> 0x10)) * 4);
            uVar11 = uVar17;
            if (uVar17 < (uVar9 >> 8 & 0xff) + (uVar15 >> 8 & 0xff)) {
              do {
                uVar9 = 0;
                uVar17 = uVar11;
                if (local_c == 0) goto LAB_006176bf;
                local_c = local_c - 1;
                uVar17 = uVar11 + 8;
                bVar4 = *local_14;
                local_14 = local_14 + 1;
                local_8 = local_8 + ((uint)bVar4 << ((byte)uVar11 & 0x1f));
                uVar9 = *(uint *)(puVar6[0x13] +
                                 ((((1 << (cVar8 + bVar13 & 0x1f)) - 1U & local_8) >>
                                  (bVar13 & 0x1f)) + (uVar15 >> 0x10)) * 4);
                uVar11 = uVar17;
              } while (uVar17 < (uVar9 >> 8 & 0xff) + (uVar15 >> 8 & 0xff));
            }
            uVar11 = local_8 >> (bVar13 & 0x1f);
            uVar17 = uVar17 - (uVar15 >> 8 & 0xff);
            uVar16 = local_c;
          }
          uVar11 = uVar11 >> ((byte)(uVar9 >> 8) & 0x1f);
          uVar17 = uVar17 - (uVar9 >> 8 & 0xff);
          puVar6[0x10] = uVar9 >> 0x10;
          pbVar20 = local_14;
          local_18 = uVar17;
          local_8 = uVar11;
          if ((char)uVar9 == '\0') {
            *puVar6 = 0x17;
            puVar14 = puVar6;
            break;
          }
          puVar14 = puVar6;
          if ((uVar9 & 0x20) == 0) {
            if ((uVar9 & 0x40) == 0) {
              *puVar6 = 0x13;
              puVar6[0x12] = uVar9 & 0xf;
              goto switchD_00616236_caseD_6171fd;
            }
            in_ECX[6] = (int)"invalid literal/length code";
            *puVar6 = 0x1b;
            break;
          }
          goto LAB_006171ca;
        }
        in_ECX[3] = (int)local_28;
        in_ECX[4] = local_20;
        *in_ECX = (int)local_14;
        in_ECX[1] = uVar16;
        puVar14[0xe] = uVar11;
        puVar14[0xf] = uVar17;
        FUN_00617ae0();
        uVar16 = in_ECX[1];
        local_20 = in_ECX[4];
        uVar17 = puVar6[0xf];
        puVar14 = puVar6;
        uVar11 = puVar6[0xe];
        pbVar20 = (byte *)*in_ECX;
        local_28 = (undefined1 *)in_ECX[3];
        local_18 = uVar17;
        local_14 = (byte *)*in_ECX;
        local_c = uVar16;
        local_8 = puVar6[0xe];
        break;
      case (undefined *)0x6171fd:
switchD_00616236_caseD_6171fd:
        uVar15 = puVar14[0x12];
        if (uVar15 != 0) {
          for (; uVar17 < uVar15; uVar17 = uVar17 + 8) {
            uVar9 = local_c;
            if (uVar16 == 0) goto LAB_006176bf;
            uVar16 = uVar16 - 1;
            uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
            pbVar20 = pbVar20 + 1;
            local_14 = pbVar20;
            local_c = uVar16;
            local_8 = uVar11;
          }
          puVar6[0x10] = puVar6[0x10] + ((1 << ((byte)uVar15 & 0x1f)) - 1U & uVar11);
          uVar11 = uVar11 >> ((byte)uVar15 & 0x1f);
          uVar17 = uVar17 - uVar15;
          puVar14 = puVar6;
          local_8 = uVar11;
        }
        *puVar14 = 0x14;
      case (undefined *)0x61725a:
        uVar15 = *(uint *)(puVar14[0x14] + ((1 << ((byte)puVar6[0x16] & 0x1f)) - 1U & uVar11) * 4);
        if (uVar17 < (uVar15 >> 8 & 0xff)) {
          do {
            uVar9 = local_c;
            if (uVar16 == 0) goto LAB_006176bf;
            uVar16 = uVar16 - 1;
            uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
            pbVar20 = pbVar20 + 1;
            uVar17 = uVar17 + 8;
            uVar15 = *(uint *)(puVar6[0x14] + ((1 << ((byte)puVar6[0x16] & 0x1f)) - 1U & uVar11) * 4
                              );
            local_14 = pbVar20;
            local_c = uVar16;
            local_8 = uVar11;
          } while (uVar17 < (uVar15 >> 8 & 0xff));
        }
        uVar9 = uVar15;
        if ((uVar15 & 0xf0) == 0) {
          bVar13 = (byte)(uVar15 >> 8);
          uVar9 = *(uint *)(puVar14[0x14] +
                           ((((1 << ((char)uVar15 + bVar13 & 0x1f)) - 1U & local_8) >>
                            (bVar13 & 0x1f)) + (uVar15 >> 0x10)) * 4);
          uVar11 = uVar17;
          if (uVar17 < (uVar9 >> 8 & 0xff) + (uVar15 >> 8 & 0xff)) {
            do {
              uVar9 = 0;
              uVar17 = uVar11;
              if (local_c == 0) goto LAB_006176bf;
              local_c = local_c - 1;
              uVar17 = uVar11 + 8;
              bVar4 = *local_14;
              local_14 = local_14 + 1;
              local_8 = local_8 + ((uint)bVar4 << ((byte)uVar11 & 0x1f));
              uVar9 = *(uint *)(puVar6[0x14] +
                               ((((1 << ((char)uVar15 + bVar13 & 0x1f)) - 1U & local_8) >>
                                (bVar13 & 0x1f)) + (uVar15 >> 0x10)) * 4);
              uVar11 = uVar17;
            } while (uVar17 < (uVar9 >> 8 & 0xff) + (uVar15 >> 8 & 0xff));
          }
          uVar11 = local_8 >> (bVar13 & 0x1f);
          uVar17 = uVar17 - (uVar15 >> 8 & 0xff);
        }
        uVar11 = uVar11 >> ((byte)(uVar9 >> 8) & 0x1f);
        uVar17 = uVar17 - (uVar9 >> 8 & 0xff);
        uVar16 = local_c;
        pbVar20 = local_14;
        local_18 = uVar17;
        local_8 = uVar11;
        if ((uVar9 & 0x40) != 0) {
          in_ECX[6] = (int)"invalid distance code";
          *puVar6 = 0x1b;
          puVar14 = puVar6;
          break;
        }
        puVar6[0x11] = uVar9 >> 0x10;
        puVar6[0x12] = uVar9 & 0xf;
        *puVar6 = 0x15;
        puVar14 = puVar6;
switchD_00616236_caseD_6173c7:
        uVar15 = puVar14[0x12];
        if (uVar15 != 0) {
          for (; uVar17 < uVar15; uVar17 = uVar17 + 8) {
            uVar9 = local_c;
            if (uVar16 == 0) goto LAB_006176bf;
            uVar16 = uVar16 - 1;
            uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
            pbVar20 = pbVar20 + 1;
            local_14 = pbVar20;
            local_c = uVar16;
            local_8 = uVar11;
          }
          puVar6[0x11] = puVar6[0x11] + ((1 << ((byte)uVar15 & 0x1f)) - 1U & uVar11);
          uVar11 = uVar11 >> ((byte)uVar15 & 0x1f);
          uVar17 = uVar17 - uVar15;
          puVar14 = puVar6;
          local_18 = uVar17;
          local_8 = uVar11;
        }
        if ((puVar14[0xb] - local_20) + local_2c < puVar14[0x11]) {
          in_ECX[6] = (int)"invalid distance too far back";
          *puVar14 = 0x1b;
          uVar16 = local_c;
          break;
        }
        *puVar14 = 0x16;
switchD_00616236_caseD_617448:
        uVar9 = local_c;
        if (local_20 != 0) {
          local_3c = puVar14[0x11];
          if (local_2c - local_20 < local_3c) {
            local_3c = local_3c - (local_2c - local_20);
            local_30 = puVar14[0xc];
            if (local_30 < local_3c) {
              local_3c = local_3c - local_30;
              local_30 = (puVar14[0xd] + puVar14[10]) - local_3c;
            }
            else {
              local_30 = (puVar14[0xd] - local_3c) + local_30;
            }
            local_40 = puVar14[0x10];
            if (local_40 < local_3c) goto LAB_006174a3;
          }
          else {
            local_30 = (int)local_28 - local_3c;
            local_40 = puVar14[0x10];
LAB_006174a3:
            local_3c = local_40;
          }
          if (local_20 < local_3c) {
            local_3c = local_20;
          }
          local_20 = local_20 - local_3c;
          iVar10 = local_30 - (int)local_28;
          puVar14[0x10] = local_40 - local_3c;
          do {
            *local_28 = local_28[iVar10];
            local_28 = local_28 + 1;
            local_3c = local_3c - 1;
          } while (local_3c != 0);
          uVar11 = local_8;
          uVar16 = local_c;
          pbVar20 = local_14;
          if (puVar14[0x10] == 0) {
            *puVar14 = 0x12;
          }
          break;
        }
        goto LAB_006176bf;
      case (undefined *)0x6173c7:
        goto switchD_00616236_caseD_6173c7;
      case (undefined *)0x617448:
        goto switchD_00616236_caseD_617448;
      case (undefined *)0x6174f2:
        if (local_20 == 0) goto LAB_006176bf;
        local_20 = local_20 - 1;
        *local_28 = (char)puVar14[0x10];
        *puVar14 = 0x12;
        uVar11 = local_8;
        local_28 = local_28 + 1;
        break;
      case (undefined *)0x617515:
        if (puVar14[2] != 0) {
          while (uVar17 < 0x20) {
            uVar9 = local_c;
            if (uVar16 == 0) goto LAB_006176bf;
            uVar16 = uVar16 - 1;
            uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
            pbVar20 = pbVar20 + 1;
            uVar17 = uVar17 + 8;
            puVar14 = puVar6;
            local_18 = uVar17;
            local_14 = pbVar20;
            local_c = uVar16;
            local_8 = uVar11;
          }
          puVar3 = (undefined1 *)(local_2c - local_20);
          in_ECX[5] = (int)(puVar3 + in_ECX[5]);
          puVar14[7] = (uint)(puVar3 + puVar14[7]);
          if (puVar3 != (undefined1 *)0x0) {
            if (puVar14[4] == 0) {
              uVar11 = FUN_0061a0c0(puVar3);
              puVar14 = puVar6;
            }
            else {
              pbVar20 = local_14;
              if (local_28 == puVar3) {
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_00619e10(puVar3);
                puVar14 = puVar6;
              }
            }
            puVar14[6] = uVar11;
            in_ECX[0xc] = uVar11;
            uVar16 = local_c;
          }
          local_2c = local_20;
          uVar11 = local_8;
          if (puVar14[4] == 0) {
            uVar11 = ((local_8 & 0xff00) + local_8 * 0x10000) * 0x100 + (local_8 >> 8 & 0xff00) +
                     (local_8 >> 0x18);
          }
          if (uVar11 != puVar14[6]) {
            in_ECX[6] = (int)"incorrect data check";
            *puVar14 = 0x1b;
            uVar11 = local_8;
            break;
          }
          uVar11 = 0;
          uVar17 = 0;
          local_8 = 0;
          local_18 = 0;
        }
        *puVar14 = 0x19;
      case (undefined *)0x61761a:
        if ((puVar14[2] != 0) && (puVar14[4] != 0)) {
          while (uVar17 < 0x20) {
            uVar9 = local_c;
            if (uVar16 == 0) goto LAB_006176bf;
            uVar16 = uVar16 - 1;
            uVar11 = uVar11 + ((uint)*pbVar20 << ((byte)uVar17 & 0x1f));
            pbVar20 = pbVar20 + 1;
            uVar17 = uVar17 + 8;
            puVar14 = puVar6;
            local_18 = uVar17;
            local_14 = pbVar20;
            local_c = uVar16;
            local_8 = uVar11;
          }
          if (uVar11 != puVar14[7]) {
            in_ECX[6] = (int)"incorrect length check";
            *puVar14 = 0x1b;
            break;
          }
          local_8 = 0;
          uVar17 = 0;
        }
        *puVar14 = 0x1a;
switchD_00616236_caseD_6176ac:
        local_34 = 1;
        uVar9 = local_c;
        goto LAB_006176bf;
      case (undefined *)0x6176ac:
        goto switchD_00616236_caseD_6176ac;
      case (undefined *)0x6176b5:
        local_34 = -3;
        goto LAB_006176bf;
      case (undefined *)0x617708:
        goto switchD_00616236_caseD_617708;
      }
LAB_00616c9b:
      uVar15 = *puVar14;
    } while (uVar15 < 0x1d);
  }
  return -2;
}

