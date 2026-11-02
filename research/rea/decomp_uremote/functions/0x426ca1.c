// rea decompile_all
// name: FUN_00426ca1
// address: 0x426ca1
// body: available
// range: 0x426ca1-0x427017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00426ca1(int *param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  int iVar10;
  byte *pbVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  short *psVar18;
  short *psVar19;
  byte *pbVar20;
  int *piVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  short *local_20;
  byte *local_1c;
  byte *local_18;
  int local_14;
  byte *local_10;
  int local_c;
  
  pbVar5 = (byte *)param_1[0x33];
  iVar6 = *param_1;
  iVar7 = param_1[3];
  iVar10 = param_1[8];
  iVar14 = (int)(short)iVar10;
  pcVar8 = (char *)param_1[0x32];
  if ((iVar14 == 0) ||
     ((uint)((int)*(short *)(iVar7 + 0x14) + *(short *)(iVar7 + 0x38) + iVar14) <=
      *(uint *)(iVar7 + 8))) {
    local_c = 0;
  }
  else {
    local_c = FUN_0040d706(0,iVar14);
  }
  if (local_c != 0) {
    return local_c;
  }
  psVar18 = *(short **)(iVar7 + 0x44);
  local_20 = psVar18 + iVar14;
  if (0xffe < iVar14) {
    return 0x14;
  }
  if (pbVar5 < pcVar8 + iVar14 * 2 + 2) {
    return 0x14;
  }
  cVar2 = *pcVar8;
  sVar12 = CONCAT11(cVar2,pcVar8[1]);
  if (0 < iVar14) {
    *psVar18 = sVar12;
  }
  if (cVar2 < '\0') {
    return 0x14;
  }
  while( true ) {
    psVar19 = psVar18 + 1;
    if (local_20 <= psVar19) break;
    sVar13 = CONCAT11(pcVar8[2],pcVar8[3]);
    *psVar19 = sVar13;
    bVar9 = sVar13 <= sVar12;
    psVar18 = psVar19;
    pcVar8 = pcVar8 + 2;
    sVar12 = sVar13;
    if (bVar9) {
      return 0x14;
    }
  }
  local_14 = 0;
  if ((0 < iVar14) && (local_14 = *psVar18 + 1, local_14 < 0)) {
    return 0x14;
  }
  if ((local_14 + 4 == 0) ||
     ((uint)(*(short *)(iVar7 + 0x16) + 4 + *(short *)(iVar7 + 0x3a) + local_14) <=
      *(uint *)(iVar7 + 4))) {
    local_c = 0;
  }
  else {
    local_c = FUN_0040d706(local_14 + 4,0);
  }
  if (local_c != 0) {
    return local_c;
  }
  *(undefined4 *)(param_1[2] + 0x8c) = 0;
  pbVar23 = (byte *)(pcVar8 + 4);
  *(undefined4 *)(param_1[2] + 0x88) = 0;
  if (pbVar5 < pbVar23) {
    return 0x14;
  }
  uVar15 = (uint)CONCAT11(pcVar8[2],pcVar8[3]);
  if ((CONCAT11(pcVar8[2],pcVar8[3]) <= *(ushort *)(iVar6 + 0x11e)) &&
     ((int)uVar15 <= (int)pbVar5 - (int)pbVar23)) {
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      *(uint *)(param_1[2] + 0x8c) = uVar15;
      *(undefined4 *)(param_1[2] + 0x88) = *(undefined4 *)(param_1[0x28] + 0x188);
      _memcpy(*(void **)(param_1[0x28] + 0x188),pbVar23,uVar15);
    }
    pbVar23 = pbVar23 + uVar15;
    pbVar20 = *(byte **)(iVar7 + 0x40);
    pbVar16 = pbVar20 + local_14;
    if (pbVar20 < pbVar16) {
      local_10 = pbVar23 + 1;
      pbVar24 = pbVar23;
      do {
        if (pbVar5 < local_10) {
          return 0x14;
        }
        bVar3 = *pbVar24;
        *pbVar20 = bVar3;
        pbVar20 = pbVar20 + 1;
        pbVar23 = pbVar24 + 1;
        local_20 = (short *)CONCAT31(local_20._1_3_,bVar3);
        pbVar11 = local_10 + 1;
        if ((bVar3 & 8) != 0) {
          if (pbVar5 < local_10 + 1) {
            return 0x14;
          }
          bVar3 = *pbVar23;
          uVar15 = (uint)bVar3;
          pbVar23 = pbVar24 + 2;
          if (pbVar16 < pbVar20 + uVar15) {
            return 0x14;
          }
          pbVar11 = local_10 + 2;
          if (bVar3 != 0) {
            _memset(pbVar20,(int)local_20,uVar15);
            pbVar20 = pbVar20 + uVar15;
          }
        }
        local_10 = pbVar11;
        pbVar24 = pbVar23;
      } while (pbVar20 < pbVar16);
    }
    piVar21 = *(int **)(iVar7 + 0x3c);
    pbVar20 = *(byte **)(iVar7 + 0x40);
    local_10 = (byte *)0x0;
    piVar1 = piVar21 + local_14 * 2;
    if (pbVar5 < pbVar23) {
      return 0x14;
    }
    if (piVar21 < piVar1) {
      local_1c = pbVar23 + 2;
      local_18 = pbVar23 + 1;
      do {
        bVar3 = *pbVar20;
        uVar15 = 0;
        if ((bVar3 & 2) == 0) {
          if ((bVar3 & 0x10) == 0) {
            if (pbVar5 < local_1c) {
              return 0x14;
            }
            local_18 = local_18 + 2;
            local_1c = local_1c + 2;
            pbVar16 = pbVar23 + 1;
            bVar4 = *pbVar23;
            pbVar23 = pbVar23 + 2;
            uVar15 = (int)(short)((short)(char)bVar4 << 8) | (uint)*pbVar16;
          }
        }
        else {
          if (pbVar5 < local_18) {
            return 0x14;
          }
          uVar15 = (uint)*pbVar23;
          pbVar23 = pbVar23 + 1;
          local_18 = local_18 + 1;
          local_1c = local_1c + 1;
          if ((bVar3 & 0x10) == 0) {
            uVar15 = -uVar15;
          }
        }
        local_10 = (byte *)((int)local_10 + uVar15);
        *piVar21 = (int)local_10;
        piVar21 = piVar21 + 2;
        *pbVar20 = bVar3 & 0xed;
        pbVar20 = pbVar20 + 1;
      } while (piVar21 < piVar1);
    }
    uVar22 = *(uint *)(iVar7 + 0x3c);
    pbVar20 = *(byte **)(iVar7 + 0x40);
    local_10 = (byte *)0x0;
    uVar15 = uVar22 + local_14 * 8;
    if (uVar22 < uVar15) {
      local_18 = pbVar23 + 2;
      local_1c = pbVar23 + 1;
      do {
        bVar3 = *pbVar20;
        uVar17 = 0;
        if ((bVar3 & 4) == 0) {
          if ((bVar3 & 0x20) == 0) {
            if (pbVar5 < local_18) {
              return 0x14;
            }
            local_1c = local_1c + 2;
            local_18 = local_18 + 2;
            pbVar16 = pbVar23 + 1;
            bVar4 = *pbVar23;
            pbVar23 = pbVar23 + 2;
            uVar17 = (int)(short)((short)(char)bVar4 << 8) | (uint)*pbVar16;
          }
        }
        else {
          if (pbVar5 < local_1c) {
            return 0x14;
          }
          uVar17 = (uint)*pbVar23;
          pbVar23 = pbVar23 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          if ((bVar3 & 0x20) == 0) {
            uVar17 = -uVar17;
          }
        }
        local_10 = (byte *)((int)local_10 + uVar17);
        *(byte **)(uVar22 + 4) = local_10;
        uVar22 = uVar22 + 8;
        *pbVar20 = bVar3 & 1;
        pbVar20 = pbVar20 + 1;
      } while (uVar22 < uVar15);
    }
    *(undefined2 *)(iVar7 + 0x3a) = (undefined2)local_14;
    *(short *)(iVar7 + 0x38) = (short)iVar10;
    param_1[0x32] = (int)pbVar23;
    return 0;
  }
  return 0x16;
}

