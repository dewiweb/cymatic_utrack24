// rea decompile_all
// name: FUN_0040b297
// address: 0x40b297
// body: available
// range: 0x40b297-0x40c779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040b297(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  sbyte sVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  byte *pbVar19;
  uint *puVar20;
  byte *pbVar21;
  int *piVar22;
  uint *puVar23;
  bool bVar24;
  uint uStack_3c;
  int local_38;
  byte *pbStack_30;
  uint *puStack_2c;
  uint local_28;
  int *local_24;
  byte *local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  int local_c;
  
  iVar9 = param_1;
  local_c = *(int *)(*(int *)(param_1 + 0x4c) + 0x558);
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  uVar10 = (uint)&local_18 ^ (uint)&param_1 ^ (uint)&param_2;
  local_18 = ((int)((int)uVar10 >> 10 ^ uVar10) >> 10 ^ uVar10) & 0xffff;
  if (local_18 == 0) {
    local_18 = 0x7384;
  }
  *(int *)(param_1 + 0x114) = param_1 + 0x50;
  *(int *)(param_1 + 0x2a4) = param_1 + 0x118;
  puVar4 = *(undefined4 **)(param_1 + 0x44);
  piVar22 = (int *)(param_1 + 0x118);
  puVar5 = *(uint **)(param_1 + 0x114);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *piVar22 = param_2;
  local_20 = (byte *)(param_3 + param_2);
  *(byte **)(param_1 + 0x11c) = local_20;
  pbStack_30 = (byte *)*piVar22;
  *(byte **)(param_1 + 0x120) = pbStack_30;
  uVar10 = *(uint *)(param_1 + 0x18);
  local_38 = *(int *)(param_1 + 0x1c);
  if (puVar4 != (undefined4 *)0x0) {
    (*(code *)puVar4[1])(*puVar4);
  }
  local_28 = uVar10;
  local_24 = piVar22;
  if (pbStack_30 < local_20) {
    do {
      bVar3 = *pbStack_30;
      pbVar19 = pbStack_30 + 1;
      if ((0x1f < bVar3) || (bVar3 == 0x1c)) {
        sVar8 = 0x10;
        if (bVar3 == 0x1c) {
          if (local_20 <= pbStack_30 + 2) {
            return 3;
          }
          uVar16 = (int)(short)((ushort)*pbVar19 << 8) | (uint)pbStack_30[2];
          pbStack_30 = pbStack_30 + 3;
        }
        else if (bVar3 < 0xf7) {
          uVar16 = bVar3 - 0x8b;
          pbStack_30 = pbVar19;
        }
        else {
          if (bVar3 < 0xfb) {
            if (local_20 <= pbVar19) {
              return 3;
            }
            uVar16 = (uint)bVar3 * 0x100 + -0xf694 + (uint)*pbVar19;
          }
          else {
            if (bVar3 == 0xff) {
              pbVar21 = pbStack_30 + 4;
              if (local_20 <= pbVar21) {
                return 3;
              }
              pbVar1 = pbStack_30 + 2;
              pbVar2 = pbStack_30 + 3;
              pbStack_30 = pbStack_30 + 5;
              uVar16 = CONCAT31(CONCAT21(CONCAT11(*pbVar19,*pbVar1),*pbVar2),*pbVar21);
              if (local_c == 2) {
                sVar8 = 0;
              }
              goto LAB_0040c676;
            }
            if (local_20 <= pbVar19) {
              return 3;
            }
            uVar16 = ((uint)bVar3 * -0x100 + 0xfa94) - (uint)*pbVar19;
          }
          pbStack_30 = pbStack_30 + 2;
        }
LAB_0040c676:
        if (0xbf < (int)(*(int *)(param_1 + 0x114) - (int)puVar5 & 0xfffffffcU)) {
          return 0x82;
        }
        **(int **)(param_1 + 0x114) = uVar16 << sVar8;
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 4;
        pbVar21 = pbStack_30;
        goto switchD_0040b3b4_caseD_2;
      }
      puStack_2c = (uint *)((*(int *)(param_1 + 0x114) - param_1) + -0x50 >> 2);
      pbVar21 = pbVar19;
      switch(bVar3) {
      case 1:
switchD_0040b3b4_caseD_1:
        pbStack_30 = pbVar21;
        uStack_3c = 0x13;
        break;
      default:
        goto switchD_0040b3b4_caseD_2;
      case 3:
switchD_0040b3b4_caseD_3:
        pbStack_30 = pbVar21;
        uStack_3c = 0x14;
        break;
      case 4:
        uStack_3c = 3;
        pbStack_30 = pbVar19;
        break;
      case 5:
        uStack_3c = 4;
        pbStack_30 = pbVar19;
        break;
      case 6:
        uStack_3c = 5;
        pbStack_30 = pbVar19;
        break;
      case 7:
        uStack_3c = 6;
        pbStack_30 = pbVar19;
        break;
      case 8:
        uStack_3c = 7;
        pbStack_30 = pbVar19;
        break;
      case 9:
        uStack_3c = 0x35;
        pbStack_30 = pbVar19;
        break;
      case 10:
        uStack_3c = 0x31;
        pbStack_30 = pbVar19;
        break;
      case 0xb:
        uStack_3c = 0x33;
        pbStack_30 = pbVar19;
        break;
      case 0xc:
        if (local_20 <= pbVar19) {
          return 3;
        }
        pbStack_30 = pbStack_30 + 2;
        pbVar21 = pbStack_30;
        switch(*pbVar19) {
        case 0:
          uStack_3c = 0x19;
          break;
        case 1:
          goto switchD_0040b3b4_caseD_3;
        case 2:
          goto switchD_0040b3b4_caseD_1;
        case 3:
          uStack_3c = 0x2c;
          break;
        case 4:
          uStack_3c = 0x2d;
          break;
        case 5:
          uStack_3c = 0x2e;
          break;
        case 6:
          uStack_3c = 0x38;
          break;
        case 7:
          uStack_3c = 0x39;
          break;
        case 8:
          uStack_3c = 0x2a;
          break;
        case 9:
          uStack_3c = 0x1a;
          break;
        case 10:
          uStack_3c = 0x1b;
          break;
        case 0xb:
          uStack_3c = 0x1c;
          break;
        case 0xc:
          uStack_3c = 0x1d;
          break;
        case 0xd:
          uStack_3c = 0x2b;
          break;
        case 0xe:
          uStack_3c = 0x1e;
          break;
        case 0xf:
          uStack_3c = 0x2f;
          break;
        case 0x10:
          uStack_3c = 0x36;
          break;
        case 0x11:
          uStack_3c = 0x37;
          break;
        case 0x12:
          uStack_3c = 0x23;
          break;
        default:
          goto switchD_0040b3b4_caseD_2;
        case 0x14:
          uStack_3c = 0x28;
          break;
        case 0x15:
          uStack_3c = 0x29;
          break;
        case 0x16:
          uStack_3c = 0x30;
          break;
        case 0x17:
          uStack_3c = 0x1f;
          break;
        case 0x18:
          uStack_3c = 0x20;
          break;
        case 0x1a:
          uStack_3c = 0x21;
          break;
        case 0x1b:
          uStack_3c = 0x27;
          break;
        case 0x1c:
          uStack_3c = 0x24;
          break;
        case 0x1d:
          uStack_3c = 0x25;
          break;
        case 0x1e:
          uStack_3c = 0x26;
          break;
        case 0x21:
          uStack_3c = 0x3a;
          break;
        case 0x22:
          uStack_3c = 0xf;
          break;
        case 0x23:
          uStack_3c = 0xe;
          break;
        case 0x24:
          uStack_3c = 0x10;
          break;
        case 0x25:
          uStack_3c = 0x11;
        }
        break;
      case 0xd:
        uStack_3c = 0x34;
        pbStack_30 = pbVar19;
        break;
      case 0xe:
        uStack_3c = 0x12;
        pbStack_30 = pbVar19;
        break;
      case 0x10:
        uStack_3c = 0x22;
        pbStack_30 = pbVar19;
        break;
      case 0x12:
        uStack_3c = 0x15;
        pbStack_30 = pbVar19;
        break;
      case 0x13:
        uStack_3c = 0x17;
        pbStack_30 = pbVar19;
        break;
      case 0x14:
        uStack_3c = 0x18;
        pbStack_30 = pbVar19;
        break;
      case 0x15:
        uStack_3c = 1;
        pbStack_30 = pbVar19;
        break;
      case 0x16:
        uStack_3c = 2;
        pbStack_30 = pbVar19;
        break;
      case 0x17:
        uStack_3c = 0x16;
        pbStack_30 = pbVar19;
        break;
      case 0x18:
        uStack_3c = 10;
        pbStack_30 = pbVar19;
        break;
      case 0x19:
        uStack_3c = 0xb;
        pbStack_30 = pbVar19;
        break;
      case 0x1a:
        uStack_3c = 0xd;
        pbStack_30 = pbVar19;
        break;
      case 0x1b:
        uStack_3c = 8;
        pbStack_30 = pbVar19;
        break;
      case 0x1d:
        uStack_3c = 0x32;
        pbStack_30 = pbVar19;
        break;
      case 0x1e:
        uStack_3c = 0xc;
        pbStack_30 = pbVar19;
        break;
      case 0x1f:
        uStack_3c = 9;
        pbStack_30 = pbVar19;
      }
      uVar16 = (uint)(byte)(&UNK_008fa534)[uStack_3c];
      if ((char)(&UNK_008fa534)[uStack_3c] < '\0') {
        if ((0 < (int)puStack_2c) && (*(char *)(param_1 + 0x2f0) != '\0')) {
          if (uStack_3c == 1) {
LAB_0040b6f3:
            uVar16 = (uint)puStack_2c & 1;
LAB_0040b6fa:
            if (uVar16 != 0) {
LAB_0040b6fe:
              *(int *)(param_1 + 0x2e8) =
                   (int)*(short *)((int)puVar5 + 2) + *(int *)(param_1 + 0x2ec);
              if (*(char *)(param_1 + 0x2f1) != '\0') {
                return 0;
              }
              puStack_2c = (uint *)((int)puStack_2c - 1);
            }
          }
          else if (1 < uStack_3c) {
            if (uStack_3c < 4) {
              uVar16 = (uint)puStack_2c & 2;
              goto LAB_0040b6fa;
            }
            if (uStack_3c == 0x12) {
              if ((puStack_2c == (uint *)0x5) || (puStack_2c == (uint *)0x1)) goto LAB_0040b6fe;
            }
            else if ((0x12 < uStack_3c) && (uStack_3c < 0x19)) goto LAB_0040b6f3;
          }
        }
        *(undefined1 *)(param_1 + 0x2f0) = 0;
        uVar16 = 0;
      }
      uVar16 = uVar16 & 0xf;
      if ((int)puStack_2c < (int)uVar16) {
        return 0x81;
      }
      puVar20 = (uint *)(*(int *)(param_1 + 0x114) + uVar16 * -4);
      uVar16 = (int)puStack_2c - uVar16;
      puStack_2c = puVar20;
      uVar11 = local_28;
      switch(uStack_3c) {
      case 1:
        FUN_0040af49();
        *(undefined1 *)(iVar9 + 0x40) = 0;
        uVar10 = uVar10 + puVar20[-2];
        local_28 = uVar10;
        goto LAB_0040b89e;
      case 2:
        FUN_0040af49();
        *(undefined1 *)(iVar9 + 0x40) = 0;
        uVar10 = uVar10 + puVar20[-1];
        local_28 = uVar10;
        goto switchD_0040b759_caseD_35;
      case 3:
        FUN_0040af49();
        *(undefined1 *)(iVar9 + 0x40) = 0;
LAB_0040b89e:
        local_38 = local_38 + puVar20[-1];
        goto switchD_0040b759_caseD_35;
      case 4:
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = FUN_0040ae2b((int)uVar16 / 2);
        if (iVar14 != 0) {
          return 0;
        }
        if ((int)uVar16 < 2) {
          return 0x81;
        }
        puVar20 = puVar20 + -(uVar16 & 0xfffffffe);
        puStack_2c = puVar5;
        piVar22 = local_24;
        if (puVar20 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar10 = uVar10 + *puVar20;
            local_38 = local_38 + puVar20[1];
            FUN_0040ae5e(1);
            puVar20 = puVar20 + 2;
            uVar11 = uVar10;
          } while (puVar20 < *(uint **)(param_1 + 0x114));
        }
        break;
      case 5:
      case 6:
        bVar24 = uStack_3c == 5;
        if ((int)uVar16 < 0) {
          return 0x81;
        }
        if (uVar16 != 0) {
          iVar14 = FUN_0040af21(uVar10,local_38);
          if (iVar14 != 0) {
            return 0;
          }
          iVar15 = FUN_0040ae2b(uVar16);
          iVar14 = local_38;
          puVar20 = puVar5;
          if (iVar15 != 0) {
            return 0;
          }
          for (; puStack_2c = puVar5, piVar22 = local_24, uVar11 = local_28,
              puVar20 < *(uint **)(param_1 + 0x114); puVar20 = puVar20 + 1) {
            if (bVar24) {
              uVar10 = uVar10 + *puVar20;
              local_28 = uVar10;
            }
            else {
              iVar14 = iVar14 + *puVar20;
              local_38 = iVar14;
            }
            iVar15 = FUN_0040ae9c(iVar9,uVar10,iVar14);
            if (iVar15 != 0) {
              return 0;
            }
            bVar24 = (bool)(bVar24 ^ 1);
          }
        }
        break;
      case 7:
        if ((int)uVar16 < 6) {
          return 0x81;
        }
        iVar15 = uVar16 - (int)uVar16 % 6;
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = FUN_0040ae2b(iVar15 / 2);
        if (iVar14 != 0) {
          return 0;
        }
        puVar20 = puVar20 + -iVar15;
        puStack_2c = puVar5;
        piVar22 = local_24;
        if (puVar20 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar16 = *puVar20;
            uVar11 = puVar20[1];
            FUN_0040ae5e(0);
            uVar12 = puVar20[2];
            uVar6 = puVar20[3];
            FUN_0040ae5e(0);
            uVar10 = uVar10 + uVar16 + uVar12 + puVar20[4];
            local_38 = local_38 + uVar11 + uVar6 + puVar20[5];
            FUN_0040ae5e(1);
            puVar20 = puVar20 + 6;
            uVar11 = uVar10;
          } while (puVar20 < *(uint **)(param_1 + 0x114));
        }
        break;
      case 8:
        if ((int)uVar16 < 4) {
          return 0x81;
        }
        uVar12 = uVar16 & 0xfffffffd;
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        puVar20 = puVar20 + -uVar12;
        if ((uVar16 & 1) != 0) {
          local_38 = local_38 + *puVar20;
          puVar20 = puVar20 + 1;
          uVar12 = uVar12 - 1;
        }
        iVar14 = FUN_0040ae2b(((int)(uVar12 + ((int)uVar12 >> 0x1f & 3U)) >> 2) * 3);
        if (iVar14 != 0) {
          return 0;
        }
        puStack_2c = puVar5;
        piVar22 = local_24;
        if (puVar20 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar16 = *puVar20;
            FUN_0040ae5e(0);
            uVar11 = puVar20[1];
            local_38 = local_38 + puVar20[2];
            FUN_0040ae5e(0);
            uVar10 = uVar10 + uVar16 + uVar11 + puVar20[3];
            FUN_0040ae5e(1);
            puVar20 = puVar20 + 4;
            uVar11 = uVar10;
          } while (puVar20 < *(uint **)(param_1 + 0x114));
        }
        break;
      case 9:
      case 0xc:
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        if ((int)uVar16 < 4) {
          return 0x81;
        }
        uVar12 = uVar16 & 0xfffffffd;
        puVar20 = puVar20 + -uVar12;
        iVar14 = FUN_0040ae2b(((int)(uVar12 + ((int)uVar16 >> 0x1f & 3U)) >> 2) * 3);
        if (iVar14 != 0) {
          return 0x81;
        }
        bVar24 = uStack_3c == 9;
        while (puStack_2c = puVar5, piVar22 = local_24, uVar11 = local_28, 3 < (int)uVar12) {
          uVar12 = uVar12 - 4;
          if (bVar24) {
            uVar16 = *puVar20;
            FUN_0040ae5e(0);
            uVar10 = uVar10 + uVar16 + puVar20[1];
            uVar16 = puVar20[2];
            FUN_0040ae5e(0);
            local_38 = local_38 + uVar16 + puVar20[3];
            if (uVar12 == 1) {
              uVar10 = uVar10 + puVar20[4];
            }
          }
          else {
            uVar16 = *puVar20;
            FUN_0040ae5e(0);
            uVar11 = puVar20[1];
            local_38 = local_38 + uVar16 + puVar20[2];
            FUN_0040ae5e(0);
            uVar10 = uVar10 + uVar11 + puVar20[3];
            if (uVar12 == 1) {
              local_38 = local_38 + puVar20[4];
            }
          }
          FUN_0040ae5e(1);
          bVar24 = (bool)(bVar24 ^ 1);
          puVar20 = puVar20 + 4;
          local_28 = uVar10;
        }
        break;
      case 10:
        if ((int)uVar16 < 8) {
          return 0x81;
        }
        iVar15 = (uVar16 - 2) + (2 - (int)(uVar16 - 2) % 6);
        local_28 = (iVar15 + -2) / 6;
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = FUN_0040ae2b(local_28 * 3 + 2);
        if (iVar14 != 0) {
          return 0;
        }
        puVar20 = puVar20 + -iVar15;
        while( true ) {
          uVar10 = uVar10 + *puVar20;
          local_38 = local_38 + puVar20[1];
          if ((int)local_28 < 1) break;
          FUN_0040ae5e(0);
          uVar16 = puVar20[2];
          uVar11 = puVar20[3];
          FUN_0040ae5e(0);
          uVar10 = uVar10 + uVar16 + puVar20[4];
          local_38 = local_38 + uVar11 + puVar20[5];
          FUN_0040ae5e(1);
          puVar20 = puVar20 + 6;
          local_28 = local_28 + -1;
        }
        goto LAB_0040be05;
      case 0xb:
        if ((int)uVar16 < 8) {
          return 0x81;
        }
        iVar14 = (int)((uVar16 & 0xfffffffe) - 6) / 2;
        iVar15 = FUN_0040af21(uVar10,local_38);
        if (iVar15 != 0) {
          return 0;
        }
        iVar15 = FUN_0040ae2b(iVar14 + 3);
        if (iVar15 != 0) {
          return 0;
        }
        puVar20 = puVar20 + -(uVar16 & 0xfffffffe);
        for (; 0 < iVar14; iVar14 = iVar14 + -1) {
          uVar10 = uVar10 + *puVar20;
          local_38 = local_38 + puVar20[1];
          FUN_0040ae5e(1);
          puVar20 = puVar20 + 2;
        }
        uVar16 = *puVar20;
        uVar11 = puVar20[1];
        FUN_0040ae5e(0);
        uVar12 = puVar20[2];
        uVar6 = puVar20[3];
        FUN_0040ae5e(0);
        uVar10 = uVar10 + uVar16 + uVar12 + puVar20[4];
        local_38 = local_38 + uVar11 + uVar6 + puVar20[5];
        goto LAB_0040be05;
      case 0xd:
        if ((int)uVar16 < 4) {
          return 0x81;
        }
        uVar11 = uVar16 & 0xfffffffd;
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        puVar20 = puVar20 + -uVar11;
        if ((uVar16 & 1) != 0) {
          uVar10 = uVar10 + *puVar20;
          puVar20 = puVar20 + 1;
          uVar11 = uVar11 - 1;
          local_28 = uVar10;
        }
        iVar14 = FUN_0040ae2b(((int)(uVar11 + ((int)uVar11 >> 0x1f & 3U)) >> 2) * 3);
        if (iVar14 != 0) {
          return 0;
        }
        puStack_2c = puVar5;
        piVar22 = local_24;
        uVar11 = local_28;
        if (puVar20 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar16 = *puVar20;
            FUN_0040ae5e(0);
            uVar10 = uVar10 + puVar20[1];
            uVar11 = puVar20[2];
            FUN_0040ae5e(0);
            local_38 = local_38 + uVar16 + uVar11 + puVar20[3];
            FUN_0040ae5e(1);
            puVar20 = puVar20 + 4;
            uVar11 = uVar10;
          } while (puVar20 < *(uint **)(param_1 + 0x114));
        }
        break;
      case 0xe:
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = FUN_0040ae2b(6);
        if (iVar14 != 0) {
          return 0;
        }
        local_28 = 6;
        uVar16 = 0;
        do {
          uVar10 = uVar10 + *puVar20;
          local_38 = local_38 + puVar20[1];
          if ((local_28 == 4) || (local_28 == 1)) {
            uVar16 = 1;
          }
          else {
            uVar16 = uVar16 & 0xffffff00;
          }
          uVar16 = FUN_0040ae5e(uVar16);
          puVar20 = puVar20 + 2;
          local_28 = local_28 + -1;
          puStack_2c = puVar5;
          piVar22 = local_24;
          uVar11 = uVar10;
        } while (local_28 != 0);
        break;
      case 0xf:
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = FUN_0040ae2b(6);
        if (iVar14 != 0) {
          return 0;
        }
        uVar16 = *puVar20;
        FUN_0040ae5e(0);
        uVar11 = puVar20[1];
        FUN_0040ae5e(0);
        uVar12 = puVar20[3];
        FUN_0040ae5e(1);
        uVar6 = puVar20[4];
        FUN_0040ae5e(0);
        uVar7 = puVar20[5];
        FUN_0040ae5e(0);
        uVar10 = uVar10 + uVar16 + uVar11 + uVar12 + uVar6 + uVar7 + puVar20[6];
        goto LAB_0040be05;
      case 0x10:
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = FUN_0040ae2b(6);
        if (iVar14 != 0) {
          return 0;
        }
        uVar16 = *puVar20;
        FUN_0040ae5e(0);
        uVar11 = puVar20[2];
        FUN_0040ae5e(0);
        uVar12 = puVar20[4];
        FUN_0040ae5e(1);
        uVar6 = puVar20[5];
        FUN_0040ae5e(0);
        uVar7 = puVar20[6];
        FUN_0040ae5e(0);
        uVar10 = uVar10 + uVar16 + uVar11 + uVar12 + uVar6 + uVar7 + puVar20[8];
        goto LAB_0040be05;
      case 0x11:
        puStack_2c = (uint *)0x0;
        iVar14 = FUN_0040af21(uVar10,local_38);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = FUN_0040ae2b(6);
        if (iVar14 != 0) {
          return 0;
        }
        iVar14 = 0;
        local_28 = 5;
        puVar13 = puVar20;
        do {
          iVar14 = iVar14 + puVar13[1];
          puStack_2c = (uint *)((int)puStack_2c + *puVar13);
          puVar13 = puVar13 + 2;
          local_28 = local_28 + -1;
        } while (0 < (int)local_28);
        if ((int)puStack_2c < 0) {
          puStack_2c = (uint *)-(int)puStack_2c;
        }
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        local_28 = 5;
        iVar15 = local_38;
        uStack_14 = uVar10;
        do {
          uVar10 = uVar10 + *puVar20;
          iVar15 = iVar15 + puVar20[1];
          FUN_0040ae5e(local_28 == 3);
          puVar20 = puVar20 + 2;
          local_28 = local_28 + -1;
        } while (0 < (int)local_28);
        if (iVar14 < (int)puStack_2c) {
          uVar10 = uVar10 + *puVar20;
        }
        else {
          local_38 = iVar15 + *puVar20;
          uVar10 = uStack_14;
        }
LAB_0040be05:
        FUN_0040ae5e(1);
        puStack_2c = puVar5;
        piVar22 = local_24;
        uVar11 = uVar10;
        break;
      case 0x12:
        if (3 < (int)uVar16) {
          uVar17 = *(undefined4 *)(param_1 + 0x2e8);
          uVar18 = FUN_0040b0a0(0,puVar20[-4],puVar20[-3]);
          *(undefined4 *)(param_1 + 0x2e8) = uVar17;
          return uVar18;
        }
        FUN_0040af49();
        if (puVar4 != (undefined4 *)0x0) {
          iVar14 = (*(code *)puVar4[2])(*puVar4,(int)*(short *)(*(int *)(iVar9 + 0x14) + 2));
          if (iVar14 != 0) {
            return 3;
          }
          (*(code *)puVar4[6])
                    (*puVar4,*(undefined4 *)(iVar9 + 0x14),*(undefined4 *)(iVar9 + 0x48),
                     *(undefined4 *)(param_1 + 0x398));
        }
        FUN_0040d89f();
        return 0;
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        if (puVar4 != (undefined4 *)0x0) {
          if ((uStack_3c == 0x13) || (uStack_3c == 0x15)) {
            uVar17 = 1;
          }
          else {
            uVar17 = 0;
          }
          (*(code *)puVar4[3])(*puVar4,uVar17,(int)uVar16 / 2,puVar20 + -(uVar16 & 0xfffffffe));
        }
        *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + (int)uVar16 / 2;
        goto switchD_0040b759_caseD_35;
      case 0x17:
      case 0x18:
        if (0 < (int)uVar16) {
          if (puVar4 != (undefined4 *)0x0) {
            (*(code *)puVar4[3])(*puVar4,0,(int)uVar16 / 2,puVar20 + -(uVar16 & 0xfffffffe));
          }
          *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + (int)uVar16 / 2;
        }
        if (local_20 <= pbStack_30 + (*(int *)(param_1 + 0x2f4) + 7 >> 3)) {
          return 3;
        }
        if (puVar4 != (undefined4 *)0x0) {
          if (uStack_3c == 0x17) {
            (*(code *)puVar4[4])(*puVar4,(int)*(short *)(*(int *)(iVar9 + 0x14) + 2));
          }
          else {
            (*(code *)puVar4[5])(*puVar4,*(int *)(param_1 + 0x2f4),pbStack_30);
          }
        }
        pbStack_30 = pbStack_30 + (*(int *)(param_1 + 0x2f4) + 7 >> 3);
        goto switchD_0040b759_caseD_35;
      case 0x19:
      case 0x23:
        break;
      case 0x1a:
        if ((int)*puVar20 < 0) {
          uVar16 = -*puVar20;
          goto LAB_0040c173;
        }
      case 0x37:
switchD_0040b759_caseD_37:
        puStack_2c = puVar20 + 1;
        break;
      case 0x1b:
        *puVar20 = *puVar20 + puVar20[1];
        goto LAB_0040c184;
      case 0x1c:
        *puVar20 = *puVar20 - puVar20[1];
LAB_0040c184:
        puStack_2c = puVar20 + 1;
        break;
      case 0x1d:
        uVar16 = FUN_0040d2d8();
        goto LAB_0040c1a4;
      case 0x1e:
        *puVar20 = -*puVar20;
        goto switchD_0040b759_caseD_37;
      case 0x1f:
        uVar16 = local_18;
        if (0x7fff < (int)local_18) {
          uVar16 = local_18 + 1;
        }
        *puVar20 = uVar16;
        local_18 = FUN_00401000(local_18,0x10000 - local_18);
        if (local_18 == 0) {
          local_18 = 0x2873;
        }
        goto switchD_0040b759_caseD_37;
      case 0x20:
        uVar16 = FUN_00401000(*puVar20,puVar20[1]);
LAB_0040c1a4:
        puStack_2c = puVar20 + 1;
        *puVar20 = uVar16;
        break;
      case 0x21:
        if (0 < (int)*puVar20) {
          iVar14 = FUN_0040d2d8();
          uVar16 = (int)(iVar14 + 1 + *puVar20) >> 1;
          bVar24 = uVar16 == *puVar20;
          while (!bVar24) {
            uStack_14 = uVar16;
            iVar14 = FUN_0040d2d8();
            uVar16 = (int)(iVar14 + 1 + uVar16) >> 1;
            bVar24 = uVar16 == uStack_14;
          }
          goto LAB_0040c173;
        }
        *puVar20 = 0;
        goto switchD_0040b759_caseD_37;
      default:
        return 7;
      case 0x24:
        uVar16 = *puVar20;
        *puVar20 = puVar20[1];
        goto LAB_0040c24b;
      case 0x25:
        iVar14 = (int)*(short *)((int)puVar20 + 2);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        else if ((int)(uVar16 - 2) < iVar14) {
          iVar14 = uVar16 - 2;
        }
        uVar16 = *(uint *)((int)puVar20 - (iVar14 * 4 + 4));
        goto LAB_0040c173;
      case 0x26:
        iVar14 = (int)*(short *)((int)puVar20 + 2);
        iVar15 = (int)*(short *)((int)puVar20 + 6);
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        puVar20 = puVar20 + -iVar14;
        if (puVar20 < puVar5) {
          return 0x81;
        }
        if (iVar15 < 0) {
          uStack_10 = iVar14 - 1;
          puStack_2c = (uint *)-iVar15;
          do {
            uVar16 = *puVar20;
            uVar12 = uStack_10;
            puVar23 = puVar20;
            puVar13 = puVar20;
            if (0 < (int)uStack_10) {
              for (; piVar22 = local_24, uVar10 = local_28, uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar23 = puVar13[1];
                puVar23 = puVar23 + 1;
                puVar13 = puVar13 + 1;
              }
            }
            puStack_2c = (uint *)((int)puStack_2c + -1);
            puVar20[iVar14 + -1] = uVar16;
          } while (puStack_2c != (uint *)0x0);
        }
        else if (0 < iVar15) {
          uStack_14 = iVar14 - 2;
          do {
            uStack_10 = puVar20[iVar14 + -1];
            for (uVar16 = uStack_14; -1 < (int)uVar16; uVar16 = uVar16 - 1) {
              puVar20[uVar16 + 1] = puVar20[uVar16];
            }
            iVar15 = iVar15 + -1;
            *puVar20 = uStack_10;
          } while (0 < iVar15);
        }
        puStack_2c = puVar20 + iVar14;
        break;
      case 0x27:
        uVar16 = *puVar20;
LAB_0040c24b:
        puVar20[1] = uVar16;
        puStack_2c = puVar20 + 2;
        break;
      case 0x28:
        if ((uint)(int)*(short *)((int)puVar20 + 6) < 0x20) {
          *(uint *)(param_1 + 0x2f8 + *(short *)((int)puVar20 + 6) * 4) = *puVar20;
        }
        break;
      case 0x29:
        uVar16 = 0;
        if ((uint)(int)*(short *)((int)puVar20 + 2) < 0x20) {
          uVar16 = *(uint *)(param_1 + 0x2f8 + *(short *)((int)puVar20 + 2) * 4);
        }
        *puVar20 = uVar16;
        goto switchD_0040b759_caseD_37;
      case 0x2c:
        if (*puVar20 != 0) {
LAB_0040c422:
          if (puVar20[1] != 0) goto LAB_0040c419;
        }
        bVar3 = 0;
        goto LAB_0040c40b;
      case 0x2d:
        if (*puVar20 == 0) goto LAB_0040c422;
LAB_0040c419:
        bVar3 = 1;
LAB_0040c40b:
        uVar16 = -(uint)bVar3 & 0x10000;
        goto LAB_0040c173;
      case 0x2f:
        uVar16 = (-(uint)(*puVar20 != 0) & 0xffff0000) + 0x10000;
LAB_0040c173:
        *puVar20 = uVar16;
        goto switchD_0040b759_caseD_37;
      case 0x30:
        if ((int)puVar20[3] < (int)puVar20[2]) {
          uVar16 = puVar20[1];
          goto LAB_0040c173;
        }
        goto switchD_0040b759_caseD_37;
      case 0x31:
        uStack_10 = (int)*(short *)((int)puVar20 + 2) + *(int *)(param_1 + 0x380);
        if (*(uint *)(param_1 + 0x378) <= uStack_10) {
          return 3;
        }
        if (0x1f < ((int)piVar22 + (-0x118 - param_1)) / 0xc) {
          return 3;
        }
        piVar22[2] = (int)pbStack_30;
        iVar15 = uStack_10 * 4;
        piVar22[3] = *(int *)(iVar15 + *(int *)(param_1 + 0x388));
        iVar14 = *(int *)(param_1 + 0x388);
        goto LAB_0040c4ae;
      case 0x32:
        uStack_10 = (int)*(short *)((int)puVar20 + 2) + *(int *)(param_1 + 900);
        if (*(uint *)(param_1 + 0x37c) <= uStack_10) {
          return 3;
        }
        if (0x1f < ((int)piVar22 + (-0x118 - param_1)) / 0xc) {
          return 3;
        }
        piVar22[2] = (int)pbStack_30;
        iVar15 = uStack_10 * 4;
        piVar22[3] = *(int *)(iVar15 + *(int *)(param_1 + 0x38c));
        iVar14 = *(int *)(param_1 + 0x38c);
LAB_0040c4ae:
        local_24 = piVar22 + 3;
        piVar22[4] = *(int *)(iVar14 + 4 + iVar15);
        iVar14 = *local_24;
        piVar22[5] = iVar14;
        if ((iVar14 == 0) || (piVar22[4] == iVar14)) {
          return 3;
        }
        *(int **)(param_1 + 0x2a4) = local_24;
        pbStack_30 = (byte *)*local_24;
LAB_0040c56a:
        local_20 = (byte *)local_24[1];
        piVar22 = local_24;
        break;
      case 0x33:
        puVar20 = (uint *)(param_1 + 0x2a4);
        if (*puVar20 <= param_1 + 0x118U) {
          return 3;
        }
        *puVar20 = *puVar20 - 0xc;
        local_24 = *(int **)(param_1 + 0x2a4);
        pbStack_30 = (byte *)local_24[2];
        goto LAB_0040c56a;
      case 0x34:
        *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar20 + 6) + *(int *)(param_1 + 0x2ec);
        *(uint *)(param_1 + 0x20) = *puVar20;
        *(undefined4 *)(param_1 + 0x24) = 0;
        uVar10 = *(int *)(param_1 + 0x18) + *puVar20;
        local_38 = *(int *)(param_1 + 0x1c);
        local_28 = uVar10;
      case 0x35:
        goto switchD_0040b759_caseD_35;
      case 0x36:
        puStack_2c = puVar20 + (-2 - *(short *)((int)puVar20 + -6));
        if (puVar20 + (-2 - *(short *)((int)puVar20 + -6)) < puVar5) {
          return 0x81;
        }
        break;
      case 0x38:
        uVar17 = FUN_0040b0a0(*puVar20,puVar20[1],puVar20[2]);
        FUN_0040d89f();
        return uVar17;
      case 0x39:
        *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar20 + 10) + *(int *)(param_1 + 0x2ec);
        *(uint *)(param_1 + 0x20) = *puVar20;
        *(uint *)(param_1 + 0x24) = puVar20[1];
        uVar10 = *(int *)(param_1 + 0x18) + *puVar20;
        local_38 = *(int *)(param_1 + 0x1c) + puVar20[1];
        local_28 = uVar10;
        goto switchD_0040b759_caseD_35;
      case 0x3a:
        uVar10 = *(int *)(param_1 + 0x18) + *puVar20;
        local_38 = puVar20[1] + *(int *)(param_1 + 0x1c);
        local_28 = uVar10;
switchD_0040b759_caseD_35:
        puStack_2c = puVar5;
        uVar11 = local_28;
      }
      local_28 = uVar11;
      *(uint **)(param_1 + 0x114) = puStack_2c;
      pbVar21 = pbStack_30;
      if (0xbf < (int)(*(int *)(param_1 + 0x114) - (int)puVar5 & 0xfffffffcU)) {
        return 0x82;
      }
switchD_0040b3b4_caseD_2:
      pbStack_30 = pbVar21;
    } while (pbStack_30 < local_20);
  }
  return 0;
}

