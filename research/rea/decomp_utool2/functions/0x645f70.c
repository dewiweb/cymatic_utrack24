// rea decompile_all
// name: FUN_00645f70
// address: 0x645f70
// body: available
// range: 0x645f70-0x646da2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00645f70(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  uint uVar65;
  byte *pbVar66;
  int iVar67;
  int iVar68;
  int in_ECX;
  uint uVar69;
  char *pcVar70;
  char *pcVar71;
  uint uVar72;
  int iVar73;
  int in_EDX;
  uint uVar74;
  uint uVar75;
  char *pcVar76;
  byte *pbVar77;
  uint uVar78;
  char *pcVar79;
  byte *pbVar80;
  byte *pbVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  uint local_3c;
  uint local_38;
  byte *local_34;
  byte *local_30;
  uint local_28;
  byte *local_24;
  byte local_1c;
  char *local_18;
  uint local_14;
  int local_c;
  
  bVar4 = *(byte *)(in_ECX + 0x10a);
  uVar72 = *(uint *)(in_EDX + 4);
  iVar83 = *(int *)(in_ECX + 0xd4);
  uVar74 = (uint)*(byte *)(in_ECX + 0x1c5);
  pcVar7 = *(char **)(in_ECX + 0xd8);
  uVar65 = *(byte *)(in_EDX + 0xb) + 7 >> 3;
  local_14 = 0x7fffffff;
  if (((bVar4 & 8) != 0) && (bVar4 != 8)) {
    uVar78 = 0;
    local_14 = 0;
    if (uVar72 != 0) {
      uVar75 = 0;
      do {
        uVar69 = (uint)(byte)pcVar7[uVar75 + 1];
        if (0x7f < uVar69) {
          uVar69 = 0x100 - uVar69;
        }
        uVar75 = uVar75 + 1;
        uVar78 = uVar78 + uVar69;
        local_14 = uVar78;
      } while (uVar75 < uVar72);
    }
    if (*(char *)(in_ECX + 0x1c4) == '\x02') {
      local_30 = (byte *)(local_14 & 0xffff);
      uVar78 = local_14 >> 10 & 0x3fffc0;
      if (uVar74 != 0) {
        iVar84 = *(int *)(in_ECX + 0x1c8);
        iVar82 = 0;
        do {
          if (*(char *)(iVar84 + iVar82) == '\0') {
            uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1cc) + iVar82 * 2);
            local_30 = (byte *)(uVar75 * (int)local_30 >> 8);
            iVar84 = *(int *)(in_ECX + 0x1c8);
            uVar78 = uVar78 * uVar75 >> 8;
          }
          iVar82 = iVar82 + 1;
        } while (iVar82 < (int)uVar74);
      }
      uVar78 = uVar78 * **(ushort **)(in_ECX + 0x1d4) >> 3;
      if (uVar78 < 0x3fffc1) {
        local_14 = ((int)local_30 * (uint)**(ushort **)(in_ECX + 0x1d4) >> 3) + uVar78 * 0x400;
      }
      else {
        local_14 = 0x7fffffff;
      }
    }
  }
  if (bVar4 == 0x10) {
    pcVar79 = pcVar7 + 1;
    local_28 = 0;
    local_18 = *(char **)(in_ECX + 0xdc);
    pcVar76 = pcVar79;
    pcVar70 = local_18;
    for (uVar78 = uVar65; pcVar70 = pcVar70 + 1, uVar78 != 0; uVar78 = uVar78 - 1) {
      cVar5 = *pcVar76;
      pcVar76 = pcVar76 + 1;
      *pcVar70 = cVar5;
      local_28 = uVar65;
    }
    uVar78 = uVar72 - local_28;
    if (local_28 < uVar72) {
      if (0x1f < uVar78) {
        if (((pcVar7 + uVar72 < pcVar70 + local_28) || (pcVar70 + (uVar72 - 1) < pcVar79 + local_28)
            ) && ((pcVar76 + (uVar72 - 1) < pcVar70 + local_28 ||
                  (pcVar70 + (uVar72 - 1) < pcVar76 + local_28)))) {
          do {
            cVar5 = pcVar79[1];
            cVar6 = pcVar79[2];
            cVar8 = pcVar79[3];
            cVar9 = pcVar79[4];
            cVar10 = pcVar79[5];
            cVar11 = pcVar79[6];
            cVar12 = pcVar79[7];
            cVar13 = pcVar79[8];
            cVar14 = pcVar79[9];
            cVar15 = pcVar79[10];
            cVar16 = pcVar79[0xb];
            cVar17 = pcVar79[0xc];
            cVar18 = pcVar79[0xd];
            cVar19 = pcVar79[0xe];
            cVar20 = pcVar79[0xf];
            local_28 = local_28 + 0x20;
            cVar21 = pcVar76[1];
            cVar22 = pcVar76[2];
            cVar23 = pcVar76[3];
            cVar24 = pcVar76[4];
            cVar25 = pcVar76[5];
            cVar26 = pcVar76[6];
            cVar27 = pcVar76[7];
            cVar28 = pcVar76[8];
            cVar29 = pcVar76[9];
            cVar30 = pcVar76[10];
            cVar31 = pcVar76[0xb];
            cVar32 = pcVar76[0xc];
            cVar33 = pcVar76[0xd];
            cVar34 = pcVar76[0xe];
            cVar35 = pcVar76[0xf];
            *pcVar70 = *pcVar76 - *pcVar79;
            pcVar70[1] = cVar21 - cVar5;
            pcVar70[2] = cVar22 - cVar6;
            pcVar70[3] = cVar23 - cVar8;
            pcVar70[4] = cVar24 - cVar9;
            pcVar70[5] = cVar25 - cVar10;
            pcVar70[6] = cVar26 - cVar11;
            pcVar70[7] = cVar27 - cVar12;
            pcVar70[8] = cVar28 - cVar13;
            pcVar70[9] = cVar29 - cVar14;
            pcVar70[10] = cVar30 - cVar15;
            pcVar70[0xb] = cVar31 - cVar16;
            pcVar70[0xc] = cVar32 - cVar17;
            pcVar70[0xd] = cVar33 - cVar18;
            pcVar70[0xe] = cVar34 - cVar19;
            pcVar70[0xf] = cVar35 - cVar20;
            pcVar71 = pcVar76 + 0x10;
            cVar5 = pcVar76[0x11];
            cVar6 = pcVar76[0x12];
            cVar8 = pcVar76[0x13];
            cVar9 = pcVar76[0x14];
            cVar10 = pcVar76[0x15];
            cVar11 = pcVar76[0x16];
            cVar12 = pcVar76[0x17];
            cVar13 = pcVar76[0x18];
            cVar14 = pcVar76[0x19];
            cVar15 = pcVar76[0x1a];
            cVar16 = pcVar76[0x1b];
            cVar17 = pcVar76[0x1c];
            cVar18 = pcVar76[0x1d];
            cVar19 = pcVar76[0x1e];
            cVar20 = pcVar76[0x1f];
            pcVar76 = pcVar76 + 0x20;
            pcVar1 = pcVar79 + 0x10;
            cVar21 = pcVar79[0x11];
            cVar22 = pcVar79[0x12];
            cVar23 = pcVar79[0x13];
            cVar24 = pcVar79[0x14];
            cVar25 = pcVar79[0x15];
            cVar26 = pcVar79[0x16];
            cVar27 = pcVar79[0x17];
            cVar28 = pcVar79[0x18];
            cVar29 = pcVar79[0x19];
            cVar30 = pcVar79[0x1a];
            cVar31 = pcVar79[0x1b];
            cVar32 = pcVar79[0x1c];
            cVar33 = pcVar79[0x1d];
            cVar34 = pcVar79[0x1e];
            cVar35 = pcVar79[0x1f];
            pcVar79 = pcVar79 + 0x20;
            pcVar70[0x10] = *pcVar71 - *pcVar1;
            pcVar70[0x11] = cVar5 - cVar21;
            pcVar70[0x12] = cVar6 - cVar22;
            pcVar70[0x13] = cVar8 - cVar23;
            pcVar70[0x14] = cVar9 - cVar24;
            pcVar70[0x15] = cVar10 - cVar25;
            pcVar70[0x16] = cVar11 - cVar26;
            pcVar70[0x17] = cVar12 - cVar27;
            pcVar70[0x18] = cVar13 - cVar28;
            pcVar70[0x19] = cVar14 - cVar29;
            pcVar70[0x1a] = cVar15 - cVar30;
            pcVar70[0x1b] = cVar16 - cVar31;
            pcVar70[0x1c] = cVar17 - cVar32;
            pcVar70[0x1d] = cVar18 - cVar33;
            pcVar70[0x1e] = cVar19 - cVar34;
            pcVar70[0x1f] = cVar20 - cVar35;
            pcVar70 = pcVar70 + 0x20;
          } while (local_28 < uVar72 - (uVar78 & 0x1f));
        }
      }
      if (local_28 < uVar72) {
        iVar84 = uVar72 - local_28;
        pcVar71 = pcVar70;
        do {
          *pcVar71 = pcVar71[(int)pcVar76 - (int)pcVar70] -
                     (pcVar71 + 1)[(int)(pcVar79 + (-1 - (int)pcVar70))];
          iVar84 = iVar84 + -1;
          pcVar71 = pcVar71 + 1;
        } while (iVar84 != 0);
      }
    }
LAB_006461a8:
    if ((bVar4 & 0x20) != 0) {
      cVar5 = *(char *)(in_ECX + 0x1c4);
      local_34 = (byte *)local_14;
      if (cVar5 == '\x02') {
        local_34 = (byte *)(local_14 & 0xffff);
        uVar78 = local_14 >> 10 & 0x3fffc0;
        if (uVar74 != 0) {
          iVar84 = 0;
          local_3c = uVar78;
          do {
            if (*(char *)(*(int *)(in_ECX + 0x1c8) + iVar84) == '\x02') {
              uVar78 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d0) + iVar84 * 2);
              local_34 = (byte *)((int)local_34 * uVar78 >> 8);
              uVar78 = uVar78 * local_3c >> 8;
              local_3c = uVar78;
            }
            iVar84 = iVar84 + 1;
          } while (iVar84 < (int)uVar74);
        }
        uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d8) + 4);
        uVar78 = uVar75 * uVar78 >> 3;
        if (uVar78 < 0x3fffc1) {
          local_34 = (byte *)((uVar75 * (int)local_34 >> 3) + uVar78 * 0x400);
        }
        else {
          local_34 = (byte *)0x7fffffff;
        }
      }
      uVar78 = 0;
      local_3c = 0;
      local_30 = (byte *)(*(int *)(in_ECX + 0xe0) + 1);
      if (uVar72 != 0) {
        pcVar79 = pcVar7 + ((int)local_30 - *(int *)(in_ECX + 0xe0));
        do {
          bVar64 = *pcVar79 - (pcVar79 + 1)[(iVar83 - (int)pcVar7) + -1];
          *local_30 = bVar64;
          uVar75 = (uint)bVar64;
          if (0x7f < uVar75) {
            uVar75 = 0x100 - uVar75;
          }
          uVar78 = uVar78 + uVar75;
        } while ((uVar78 <= local_34) &&
                (local_3c = local_3c + 1, pcVar79 = pcVar79 + 1, local_30 = local_30 + 1,
                local_3c < uVar72));
      }
      if (cVar5 == '\x02') {
        local_34 = (byte *)(uVar78 & 0xffff);
        uVar78 = uVar78 >> 10 & 0x3fffc0;
        if (uVar74 != 0) {
          iVar83 = *(int *)(in_ECX + 0x1c8);
          iVar84 = 0;
          local_3c = uVar78;
          do {
            if (*(char *)(iVar83 + iVar84) == '\x02') {
              uVar78 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1cc) + iVar84 * 2);
              local_34 = (byte *)(uVar78 * (int)local_34 >> 8);
              uVar78 = uVar78 * local_3c >> 8;
              iVar83 = *(int *)(in_ECX + 0x1c8);
              local_3c = uVar78;
            }
            iVar84 = iVar84 + 1;
          } while (iVar84 < (int)uVar74);
        }
        uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d4) + 4);
        uVar78 = uVar75 * uVar78 >> 3;
        if (uVar78 < 0x3fffc1) {
          uVar78 = (uVar75 * (int)local_34 >> 3) + uVar78 * 0x400;
        }
        else {
          uVar78 = 0x7fffffff;
        }
      }
      if (uVar78 < local_14) {
        local_18 = *(char **)(in_ECX + 0xe0);
        local_14 = uVar78;
      }
    }
    if (bVar4 == 0x40) {
      local_18 = *(char **)(in_ECX + 0xe4);
      pbVar77 = (byte *)(*(int *)(in_ECX + 0xd4) + 1);
      local_30 = (byte *)0x0;
      pcVar79 = pcVar7 + 1;
      pcVar76 = local_18;
      for (uVar78 = uVar65; pcVar76 = pcVar76 + 1, uVar78 != 0; uVar78 = uVar78 - 1) {
        bVar4 = *pbVar77;
        pbVar77 = pbVar77 + 1;
        cVar5 = *pcVar79;
        pcVar79 = pcVar79 + 1;
        *pcVar76 = cVar5 - (bVar4 >> 1);
        local_30 = (byte *)uVar65;
      }
      if (local_30 < uVar72) {
        iVar83 = uVar72 - (int)local_30;
        pbVar80 = pbVar77;
        do {
          pbVar80[(int)pcVar76 - (int)pbVar77] =
               pbVar80[(int)pcVar79 - (int)pbVar77] -
               (char)((uint)pbVar80[(int)(pcVar7 + 1) - (int)pbVar77] + (uint)*pbVar80 >> 1);
          iVar83 = iVar83 + -1;
          pbVar80 = pbVar80 + 1;
        } while (iVar83 != 0);
      }
      goto LAB_00646cde;
    }
  }
  else {
    local_18 = pcVar7;
    if ((bVar4 & 0x10) != 0) {
      cVar5 = *(char *)(in_ECX + 0x1c4);
      uVar78 = 0;
      local_24 = (byte *)local_14;
      if (cVar5 == '\x02') {
        local_30 = (byte *)(local_14 & 0xffff);
        uVar75 = local_14 >> 10 & 0x3fffc0;
        if (uVar74 != 0) {
          iVar84 = *(int *)(in_ECX + 0x1c8);
          iVar82 = 0;
          local_3c = uVar75;
          do {
            if (*(char *)(iVar84 + iVar82) == '\x01') {
              uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d0) + iVar82 * 2);
              local_30 = (byte *)(uVar75 * (int)local_30 >> 8);
              uVar75 = uVar75 * local_3c >> 8;
              iVar84 = *(int *)(in_ECX + 0x1c8);
              local_3c = uVar75;
            }
            iVar82 = iVar82 + 1;
          } while (iVar82 < (int)uVar74);
        }
        uVar69 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d8) + 2);
        uVar75 = uVar69 * uVar75 >> 3;
        if (uVar75 < 0x3fffc1) {
          local_24 = (byte *)((uVar69 * (int)local_30 >> 3) + uVar75 * 0x400);
        }
        else {
          local_24 = (byte *)0x7fffffff;
        }
      }
      pbVar80 = (byte *)(*(int *)(in_ECX + 0xdc) + 1);
      local_28 = 0;
      pbVar77 = (byte *)(pcVar7 + 1);
      for (uVar75 = uVar65; uVar75 != 0; uVar75 = uVar75 - 1) {
        uVar69 = (uint)*pbVar77;
        *pbVar80 = *pbVar77;
        if (0x7f < uVar69) {
          uVar69 = 0x100 - uVar69;
        }
        pbVar77 = pbVar77 + 1;
        uVar78 = uVar78 + uVar69;
        pbVar80 = pbVar80 + 1;
        local_28 = uVar65;
      }
      if (local_28 < uVar72) {
        iVar84 = (int)(pcVar7 + 1) - (int)pbVar80;
        iVar82 = (int)pbVar77 - (int)pbVar80;
        do {
          uVar75 = (uint)(byte)(pbVar80[iVar82] - pbVar80[iVar84]);
          *pbVar80 = pbVar80[iVar82] - pbVar80[iVar84];
          if (0x7f < uVar75) {
            uVar75 = 0x100 - uVar75;
          }
          uVar78 = uVar78 + uVar75;
          if (local_24 < uVar78) break;
          pbVar80 = pbVar80 + 1;
          local_28 = local_28 + 1;
        } while (local_28 < uVar72);
      }
      if (cVar5 == '\x02') {
        local_34 = (byte *)(uVar78 & 0xffff);
        iVar84 = 0;
        uVar78 = uVar78 >> 10 & 0x3fffc0;
        if (uVar74 != 0) {
          iVar82 = *(int *)(in_ECX + 0x1c8);
          local_3c = uVar78;
          do {
            if (*(char *)(iVar82 + iVar84) == '\x01') {
              uVar78 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d0) + iVar84 * 2);
              local_34 = (byte *)(uVar78 * (int)local_34 >> 8);
              uVar78 = uVar78 * local_3c >> 8;
              iVar82 = *(int *)(in_ECX + 0x1c8);
              local_3c = uVar78;
            }
            iVar84 = iVar84 + 1;
          } while (iVar84 < (int)uVar74);
        }
        uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d8) + 2);
        uVar78 = uVar75 * uVar78 >> 3;
        if (uVar78 < 0x3fffc1) {
          uVar78 = (uVar75 * (int)local_34 >> 3) + uVar78 * 0x400;
        }
        else {
          uVar78 = 0x7fffffff;
        }
      }
      if (uVar78 < local_14) {
        local_18 = *(char **)(in_ECX + 0xdc);
        local_14 = uVar78;
      }
    }
    if (bVar4 != 0x20) goto LAB_006461a8;
    local_18 = *(char **)(in_ECX + 0xe0);
    pcVar76 = pcVar7 + 1;
    pcVar70 = (char *)(*(int *)(in_ECX + 0xd4) + 1);
    pcVar79 = local_18 + 1;
    uVar78 = 0;
    if (uVar72 != 0) {
      if (0x1f < uVar72) {
        if (((pcVar70 + (uVar72 - 1) < pcVar79) || (pcVar79 + (uVar72 - 1) < pcVar70)) &&
           ((pcVar7 + uVar72 < pcVar79 || (pcVar79 + (uVar72 - 1) < pcVar76)))) {
          uVar78 = 0;
          do {
            cVar5 = pcVar70[1];
            cVar6 = pcVar70[2];
            cVar8 = pcVar70[3];
            cVar9 = pcVar70[4];
            cVar10 = pcVar70[5];
            cVar11 = pcVar70[6];
            cVar12 = pcVar70[7];
            cVar13 = pcVar70[8];
            cVar14 = pcVar70[9];
            cVar15 = pcVar70[10];
            cVar16 = pcVar70[0xb];
            cVar17 = pcVar70[0xc];
            cVar18 = pcVar70[0xd];
            cVar19 = pcVar70[0xe];
            cVar20 = pcVar70[0xf];
            uVar78 = uVar78 + 0x20;
            cVar21 = pcVar76[1];
            cVar22 = pcVar76[2];
            cVar23 = pcVar76[3];
            cVar24 = pcVar76[4];
            cVar25 = pcVar76[5];
            cVar26 = pcVar76[6];
            cVar27 = pcVar76[7];
            cVar28 = pcVar76[8];
            cVar29 = pcVar76[9];
            cVar30 = pcVar76[10];
            cVar31 = pcVar76[0xb];
            cVar32 = pcVar76[0xc];
            cVar33 = pcVar76[0xd];
            cVar34 = pcVar76[0xe];
            cVar35 = pcVar76[0xf];
            *pcVar79 = *pcVar76 - *pcVar70;
            pcVar79[1] = cVar21 - cVar5;
            pcVar79[2] = cVar22 - cVar6;
            pcVar79[3] = cVar23 - cVar8;
            pcVar79[4] = cVar24 - cVar9;
            pcVar79[5] = cVar25 - cVar10;
            pcVar79[6] = cVar26 - cVar11;
            pcVar79[7] = cVar27 - cVar12;
            pcVar79[8] = cVar28 - cVar13;
            pcVar79[9] = cVar29 - cVar14;
            pcVar79[10] = cVar30 - cVar15;
            pcVar79[0xb] = cVar31 - cVar16;
            pcVar79[0xc] = cVar32 - cVar17;
            pcVar79[0xd] = cVar33 - cVar18;
            pcVar79[0xe] = cVar34 - cVar19;
            pcVar79[0xf] = cVar35 - cVar20;
            pcVar71 = pcVar76 + 0x10;
            cVar5 = pcVar76[0x11];
            cVar6 = pcVar76[0x12];
            cVar8 = pcVar76[0x13];
            cVar9 = pcVar76[0x14];
            cVar10 = pcVar76[0x15];
            cVar11 = pcVar76[0x16];
            cVar12 = pcVar76[0x17];
            cVar13 = pcVar76[0x18];
            cVar14 = pcVar76[0x19];
            cVar15 = pcVar76[0x1a];
            cVar16 = pcVar76[0x1b];
            cVar17 = pcVar76[0x1c];
            cVar18 = pcVar76[0x1d];
            cVar19 = pcVar76[0x1e];
            cVar20 = pcVar76[0x1f];
            pcVar76 = pcVar76 + 0x20;
            pcVar1 = pcVar70 + 0x10;
            cVar21 = pcVar70[0x11];
            cVar22 = pcVar70[0x12];
            cVar23 = pcVar70[0x13];
            cVar24 = pcVar70[0x14];
            cVar25 = pcVar70[0x15];
            cVar26 = pcVar70[0x16];
            cVar27 = pcVar70[0x17];
            cVar28 = pcVar70[0x18];
            cVar29 = pcVar70[0x19];
            cVar30 = pcVar70[0x1a];
            cVar31 = pcVar70[0x1b];
            cVar32 = pcVar70[0x1c];
            cVar33 = pcVar70[0x1d];
            cVar34 = pcVar70[0x1e];
            cVar35 = pcVar70[0x1f];
            pcVar70 = pcVar70 + 0x20;
            pcVar79[0x10] = *pcVar71 - *pcVar1;
            pcVar79[0x11] = cVar5 - cVar21;
            pcVar79[0x12] = cVar6 - cVar22;
            pcVar79[0x13] = cVar8 - cVar23;
            pcVar79[0x14] = cVar9 - cVar24;
            pcVar79[0x15] = cVar10 - cVar25;
            pcVar79[0x16] = cVar11 - cVar26;
            pcVar79[0x17] = cVar12 - cVar27;
            pcVar79[0x18] = cVar13 - cVar28;
            pcVar79[0x19] = cVar14 - cVar29;
            pcVar79[0x1a] = cVar15 - cVar30;
            pcVar79[0x1b] = cVar16 - cVar31;
            pcVar79[0x1c] = cVar17 - cVar32;
            pcVar79[0x1d] = cVar18 - cVar33;
            pcVar79[0x1e] = cVar19 - cVar34;
            pcVar79[0x1f] = cVar20 - cVar35;
            pcVar79 = pcVar79 + 0x20;
          } while (uVar78 < (uVar72 & 0xffffffe0));
        }
        else {
          uVar78 = 0;
        }
      }
      if (uVar78 < uVar72) {
        iVar83 = uVar72 - uVar78;
        pcVar71 = pcVar79;
        do {
          *pcVar71 = pcVar71[(int)pcVar76 - (int)pcVar79] -
                     (pcVar71 + 1)[(int)(pcVar70 + (-1 - (int)pcVar79))];
          iVar83 = iVar83 + -1;
          pcVar71 = pcVar71 + 1;
        } while (iVar83 != 0);
      }
    }
  }
  if ((bVar4 & 0x40) != 0) {
    cVar5 = *(char *)(in_ECX + 0x1c4);
    local_34 = (byte *)local_14;
    if (cVar5 == '\x02') {
      local_34 = (byte *)(local_14 & 0xffff);
      uVar78 = local_14 >> 10 & 0x3fffc0;
      if (uVar74 != 0) {
        iVar83 = *(int *)(in_ECX + 0x1c8);
        iVar84 = 0;
        local_3c = uVar78;
        do {
          if (*(char *)(iVar83 + iVar84) == '\x03') {
            uVar78 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d0) + iVar84 * 2);
            iVar83 = *(int *)(in_ECX + 0x1c8);
            local_34 = (byte *)((int)local_34 * uVar78 >> 8);
            uVar78 = uVar78 * local_3c >> 8;
            local_3c = uVar78;
          }
          iVar84 = iVar84 + 1;
        } while (iVar84 < (int)uVar74);
      }
      uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d8) + 6);
      uVar78 = uVar75 * uVar78 >> 3;
      if (uVar78 < 0x3fffc1) {
        local_34 = (byte *)((uVar75 * (int)local_34 >> 3) + uVar78 * 0x400);
      }
      else {
        local_34 = (byte *)0x7fffffff;
      }
    }
    uVar75 = 0;
    pbVar77 = (byte *)(*(int *)(in_ECX + 0xe4) + 1);
    pbVar80 = (byte *)(*(int *)(in_ECX + 0xd4) + 1);
    local_30 = (byte *)0x0;
    pcVar79 = pcVar7 + 1;
    for (uVar78 = uVar65; uVar78 != 0; uVar78 = uVar78 - 1) {
      bVar64 = *pbVar80;
      pbVar80 = pbVar80 + 1;
      cVar6 = *pcVar79;
      pcVar79 = pcVar79 + 1;
      bVar64 = cVar6 - (bVar64 >> 1);
      *pbVar77 = bVar64;
      pbVar77 = pbVar77 + 1;
      uVar69 = (uint)bVar64;
      if (0x7f < uVar69) {
        uVar69 = 0x100 - uVar69;
      }
      uVar75 = uVar75 + uVar69;
      local_30 = (byte *)uVar65;
    }
    if (local_30 < uVar72) {
      pbVar81 = pbVar80;
      do {
        bVar64 = pbVar81[(int)pcVar79 - (int)pbVar80] -
                 (char)((uint)pbVar81[(int)(pcVar7 + 1) - (int)pbVar80] + (uint)*pbVar81 >> 1);
        pbVar81[(int)pbVar77 - (int)pbVar80] = bVar64;
        uVar78 = (uint)bVar64;
        if (0x7f < uVar78) {
          uVar78 = 0x100 - uVar78;
        }
        uVar75 = uVar75 + uVar78;
      } while ((uVar75 <= local_34) &&
              (local_30 = (byte *)((int)local_30 + 1), pbVar81 = pbVar81 + 1, local_30 < uVar72));
    }
    if (cVar5 == '\x02') {
      local_38 = uVar75 & 0xffff;
      iVar83 = 0;
      uVar78 = uVar75 >> 10 & 0x3fffc0;
      if (uVar74 != 0) {
        iVar84 = *(int *)(in_ECX + 0x1c8);
        local_3c = uVar78;
        do {
          if (*(char *)(iVar84 + iVar83) == '\0') {
            uVar78 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1cc) + iVar83 * 2);
            local_38 = uVar78 * local_38 >> 8;
            uVar78 = uVar78 * local_3c >> 8;
            iVar84 = *(int *)(in_ECX + 0x1c8);
            local_3c = uVar78;
          }
          iVar83 = iVar83 + 1;
        } while (iVar83 < (int)uVar74);
      }
      uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d4) + 6);
      uVar78 = uVar75 * uVar78 >> 3;
      if (uVar78 < 0x3fffc1) {
        uVar75 = (uVar75 * local_38 >> 3) + uVar78 * 0x400;
      }
      else {
        uVar75 = 0x7fffffff;
      }
    }
    if (uVar75 < local_14) {
      local_18 = *(char **)(in_ECX + 0xe4);
      local_14 = uVar75;
    }
  }
  if (bVar4 == 0x80) {
    local_34 = (byte *)(pcVar7 + 1);
    local_14 = 0;
    local_18 = *(char **)(in_ECX + 0xe8);
    pbVar77 = (byte *)(local_18 + 1);
    pbVar66 = (byte *)(*(int *)(in_ECX + 0xd4) + 1);
    pbVar80 = pbVar66;
    pbVar81 = local_34;
    if (uVar65 != 0) {
      if (0x1f < uVar65) {
        iVar83 = uVar65 - 1;
        local_14 = 0;
        if (((pbVar66 + iVar83 < pbVar77) || (pbVar77 + iVar83 < pbVar66)) &&
           ((local_34 + iVar83 < pbVar77 || (pbVar77 + iVar83 < local_34)))) {
          local_14 = 0;
          do {
            bVar4 = pbVar80[1];
            bVar64 = pbVar80[2];
            bVar36 = pbVar80[3];
            bVar37 = pbVar80[4];
            bVar38 = pbVar80[5];
            bVar39 = pbVar80[6];
            bVar40 = pbVar80[7];
            bVar41 = pbVar80[8];
            bVar42 = pbVar80[9];
            bVar43 = pbVar80[10];
            bVar44 = pbVar80[0xb];
            bVar45 = pbVar80[0xc];
            bVar46 = pbVar80[0xd];
            bVar47 = pbVar80[0xe];
            bVar48 = pbVar80[0xf];
            local_14 = local_14 + 0x20;
            bVar49 = pbVar81[1];
            bVar50 = pbVar81[2];
            bVar51 = pbVar81[3];
            bVar52 = pbVar81[4];
            bVar53 = pbVar81[5];
            bVar54 = pbVar81[6];
            bVar55 = pbVar81[7];
            bVar56 = pbVar81[8];
            bVar57 = pbVar81[9];
            bVar58 = pbVar81[10];
            bVar59 = pbVar81[0xb];
            bVar60 = pbVar81[0xc];
            bVar61 = pbVar81[0xd];
            bVar62 = pbVar81[0xe];
            bVar63 = pbVar81[0xf];
            *pbVar77 = *pbVar81 - *pbVar80;
            pbVar77[1] = bVar49 - bVar4;
            pbVar77[2] = bVar50 - bVar64;
            pbVar77[3] = bVar51 - bVar36;
            pbVar77[4] = bVar52 - bVar37;
            pbVar77[5] = bVar53 - bVar38;
            pbVar77[6] = bVar54 - bVar39;
            pbVar77[7] = bVar55 - bVar40;
            pbVar77[8] = bVar56 - bVar41;
            pbVar77[9] = bVar57 - bVar42;
            pbVar77[10] = bVar58 - bVar43;
            pbVar77[0xb] = bVar59 - bVar44;
            pbVar77[0xc] = bVar60 - bVar45;
            pbVar77[0xd] = bVar61 - bVar46;
            pbVar77[0xe] = bVar62 - bVar47;
            pbVar77[0xf] = bVar63 - bVar48;
            pbVar2 = pbVar81 + 0x10;
            bVar4 = pbVar81[0x11];
            bVar64 = pbVar81[0x12];
            bVar36 = pbVar81[0x13];
            bVar37 = pbVar81[0x14];
            bVar38 = pbVar81[0x15];
            bVar39 = pbVar81[0x16];
            bVar40 = pbVar81[0x17];
            bVar41 = pbVar81[0x18];
            bVar42 = pbVar81[0x19];
            bVar43 = pbVar81[0x1a];
            bVar44 = pbVar81[0x1b];
            bVar45 = pbVar81[0x1c];
            bVar46 = pbVar81[0x1d];
            bVar47 = pbVar81[0x1e];
            bVar48 = pbVar81[0x1f];
            pbVar81 = pbVar81 + 0x20;
            pbVar3 = pbVar80 + 0x10;
            bVar49 = pbVar80[0x11];
            bVar50 = pbVar80[0x12];
            bVar51 = pbVar80[0x13];
            bVar52 = pbVar80[0x14];
            bVar53 = pbVar80[0x15];
            bVar54 = pbVar80[0x16];
            bVar55 = pbVar80[0x17];
            bVar56 = pbVar80[0x18];
            bVar57 = pbVar80[0x19];
            bVar58 = pbVar80[0x1a];
            bVar59 = pbVar80[0x1b];
            bVar60 = pbVar80[0x1c];
            bVar61 = pbVar80[0x1d];
            bVar62 = pbVar80[0x1e];
            bVar63 = pbVar80[0x1f];
            pbVar80 = pbVar80 + 0x20;
            pbVar77[0x10] = *pbVar2 - *pbVar3;
            pbVar77[0x11] = bVar4 - bVar49;
            pbVar77[0x12] = bVar64 - bVar50;
            pbVar77[0x13] = bVar36 - bVar51;
            pbVar77[0x14] = bVar37 - bVar52;
            pbVar77[0x15] = bVar38 - bVar53;
            pbVar77[0x16] = bVar39 - bVar54;
            pbVar77[0x17] = bVar40 - bVar55;
            pbVar77[0x18] = bVar41 - bVar56;
            pbVar77[0x19] = bVar42 - bVar57;
            pbVar77[0x1a] = bVar43 - bVar58;
            pbVar77[0x1b] = bVar44 - bVar59;
            pbVar77[0x1c] = bVar45 - bVar60;
            pbVar77[0x1d] = bVar46 - bVar61;
            pbVar77[0x1e] = bVar47 - bVar62;
            pbVar77[0x1f] = bVar48 - bVar63;
            pbVar77 = pbVar77 + 0x20;
          } while (local_14 < uVar65 - (uVar65 & 0x1f));
        }
      }
      if (local_14 < uVar65) {
        iVar83 = uVar65 - local_14;
        local_14 = local_14 + iVar83;
        do {
          bVar4 = *pbVar81;
          pbVar81 = pbVar81 + 1;
          bVar64 = *pbVar80;
          pbVar80 = pbVar80 + 1;
          *pbVar77 = bVar4 - bVar64;
          pbVar77 = pbVar77 + 1;
          iVar83 = iVar83 + -1;
        } while (iVar83 != 0);
      }
    }
    if (local_14 < uVar72) {
      iVar84 = (int)pbVar77 - (int)pbVar81;
      iVar83 = (int)pbVar66 - (int)local_34;
      iVar82 = (int)pbVar80 - (int)local_34;
      local_c = uVar72 - local_14;
      do {
        pbVar77 = local_34 + iVar82;
        bVar4 = local_34[iVar83];
        local_3c._0_1_ = *local_34;
        local_34 = local_34 + 1;
        uVar72 = (uint)(byte)local_3c - (uint)bVar4;
        uVar78 = (uint)*pbVar77 - (uint)bVar4;
        iVar67 = (uVar78 ^ (int)uVar78 >> 0x1f) - ((int)uVar78 >> 0x1f);
        iVar68 = (uVar72 ^ (int)uVar72 >> 0x1f) - ((int)uVar72 >> 0x1f);
        uVar65 = (int)(uVar72 + uVar78) >> 0x1f;
        iVar73 = (uVar72 + uVar78 ^ uVar65) - uVar65;
        if (((iVar68 < iVar67) || (iVar73 < iVar67)) && (local_3c._0_1_ = bVar4, iVar68 <= iVar73))
        {
          local_3c._0_1_ = *pbVar77;
        }
        pbVar81[iVar84] = *pbVar81 - (byte)local_3c;
        pbVar81 = pbVar81 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  else if ((char)bVar4 < '\0') {
    cVar5 = *(char *)(in_ECX + 0x1c4);
    local_34 = (byte *)local_14;
    if (cVar5 == '\x02') {
      local_38 = local_14 & 0xffff;
      uVar78 = local_14 >> 10 & 0x3fffc0;
      if (uVar74 != 0) {
        iVar83 = *(int *)(in_ECX + 0x1c8);
        iVar84 = 0;
        local_3c = uVar78;
        do {
          if (*(char *)(iVar83 + iVar84) == '\x04') {
            uVar78 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d0) + iVar84 * 2);
            iVar83 = *(int *)(in_ECX + 0x1c8);
            local_38 = local_38 * uVar78 >> 8;
            uVar78 = uVar78 * local_3c >> 8;
            local_3c = uVar78;
          }
          iVar84 = iVar84 + 1;
        } while (iVar84 < (int)uVar74);
      }
      uVar75 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d8) + 8);
      uVar78 = uVar75 * uVar78 >> 3;
      if (uVar78 < 0x3fffc1) {
        local_34 = (byte *)((uVar75 * local_38 >> 3) + uVar78 * 0x400);
      }
      else {
        local_34 = (byte *)0x7fffffff;
      }
    }
    uVar75 = 0;
    pcVar79 = (char *)(*(int *)(in_ECX + 0xd4) + 1);
    pbVar80 = (byte *)(pcVar7 + 1);
    pbVar77 = (byte *)(*(int *)(in_ECX + 0xe8) + 1);
    local_30 = (byte *)0x0;
    pcVar7 = pcVar79;
    local_24 = pbVar80;
    for (uVar78 = uVar65; uVar78 != 0; uVar78 = uVar78 - 1) {
      bVar4 = *local_24;
      local_24 = local_24 + 1;
      uVar69 = (uint)(byte)(bVar4 - *pcVar7);
      *pbVar77 = bVar4 - *pcVar7;
      pbVar77 = pbVar77 + 1;
      if (0x7f < uVar69) {
        uVar69 = 0x100 - uVar69;
      }
      uVar75 = uVar75 + uVar69;
      pcVar7 = pcVar7 + 1;
      local_30 = (byte *)uVar65;
    }
    if (local_30 < uVar72) {
      iVar82 = (int)pcVar7 - (int)pbVar80;
      iVar83 = (int)pcVar79 - (int)pbVar80;
      iVar84 = (int)pbVar77 - (int)local_24;
      do {
        pbVar77 = pbVar80 + iVar82;
        bVar4 = pbVar80[iVar83];
        local_1c = *pbVar80;
        pbVar80 = pbVar80 + 1;
        uVar69 = (uint)*pbVar77 - (uint)bVar4;
        uVar65 = (uint)local_1c - (uint)bVar4;
        iVar67 = (uVar69 ^ (int)uVar69 >> 0x1f) - ((int)uVar69 >> 0x1f);
        iVar68 = (uVar65 ^ (int)uVar65 >> 0x1f) - ((int)uVar65 >> 0x1f);
        uVar78 = (int)(uVar65 + uVar69) >> 0x1f;
        iVar73 = (uVar65 + uVar69 ^ uVar78) - uVar78;
        if (((iVar68 < iVar67) || (iVar73 < iVar67)) && (local_1c = bVar4, iVar68 <= iVar73)) {
          local_1c = *pbVar77;
        }
        bVar4 = *local_24;
        local_24[iVar84] = bVar4 - local_1c;
        local_24 = local_24 + 1;
        uVar65 = (uint)(byte)(bVar4 - local_1c);
        if (0x7f < uVar65) {
          uVar65 = 0x100 - uVar65;
        }
        uVar75 = uVar75 + uVar65;
      } while ((uVar75 <= local_34) && (local_30 = (byte *)((int)local_30 + 1), local_30 < uVar72));
    }
    if (cVar5 == '\x02') {
      local_3c = uVar75 & 0xffff;
      iVar83 = 0;
      uVar72 = uVar75 >> 10 & 0x3fffc0;
      if (uVar74 != 0) {
        iVar84 = *(int *)(in_ECX + 0x1c8);
        do {
          if (*(char *)(iVar84 + iVar83) == '\x04') {
            uVar65 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1cc) + iVar83 * 2);
            local_3c = uVar65 * local_3c >> 8;
            iVar84 = *(int *)(in_ECX + 0x1c8);
            uVar72 = uVar72 * uVar65 >> 8;
          }
          iVar83 = iVar83 + 1;
        } while (iVar83 < (int)uVar74);
      }
      uVar65 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1d4) + 8);
      uVar72 = uVar65 * uVar72 >> 3;
      if (uVar72 < 0x3fffc1) {
        uVar75 = (uVar65 * local_3c >> 3) + uVar72 * 0x400;
      }
      else {
        uVar75 = 0x7fffffff;
      }
    }
    if (uVar75 < local_14) {
      local_18 = *(char **)(in_ECX + 0xe8);
    }
  }
LAB_00646cde:
  FUN_00648870(*(int *)(in_EDX + 4) + 1,0);
  iVar83 = *(int *)(in_ECX + 0xd4);
  if (iVar83 != 0) {
    *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0xd8);
    *(int *)(in_ECX + 0xd8) = iVar83;
  }
  FUN_00647010();
  *(int *)(in_ECX + 0x138) = *(int *)(in_ECX + 0x138) + 1;
  if (((*(uint *)(in_ECX + 0x134) != 0) && (*(uint *)(in_ECX + 0x134) <= *(uint *)(in_ECX + 0x138)))
     && (*(uint *)(in_ECX + 0xcc) < *(uint *)(in_ECX + 0xbc))) {
    FUN_00648870(0,2);
    *(undefined4 *)(in_ECX + 0x138) = 0;
    if (*(code **)(in_ECX + 0x130) != (code *)0x0) {
      (**(code **)(in_ECX + 0x130))(in_ECX);
    }
  }
  if (*(char *)(in_ECX + 0x1c5) != '\0') {
    iVar83 = 1;
    if (1 < uVar74) {
      iVar84 = *(int *)(in_ECX + 0x1c8);
      do {
        *(undefined1 *)(iVar83 + iVar84) = *(undefined1 *)(iVar83 + -1 + iVar84);
        iVar83 = iVar83 + 1;
      } while (iVar83 < (int)uVar74);
    }
    *(char *)(iVar83 + *(int *)(in_ECX + 0x1c8)) = *local_18;
  }
  return;
}

