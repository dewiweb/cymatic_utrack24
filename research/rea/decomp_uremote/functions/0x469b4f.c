// rea decompile_all
// name: FUN_00469b4f
// address: 0x469b4f
// body: available
// range: 0x469b4f-0x469f2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469b4f(int *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = param_1[4];
  pbVar17 = (byte *)(*param_1 + -1);
  pbVar1 = pbVar17 + param_1[1] + -5;
  iVar11 = iVar2 - param_2;
  puVar3 = (undefined4 *)param_1[7];
  puVar20 = (undefined1 *)(param_1[3] + -1);
  iVar4 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar19 = puVar3[0xd];
  local_8 = puVar3[0xe];
  param_2 = puVar3[0xf];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  puVar21 = puVar20;
LAB_00469bce:
  if (param_2 < 0xf) {
    pbVar18 = pbVar17 + 1;
    pbVar17 = pbVar17 + 2;
    local_8 = local_8 + ((uint)*pbVar18 << ((byte)param_2 & 0x1f)) +
              ((uint)*pbVar17 << ((byte)param_2 + 8 & 0x1f));
    param_2 = param_2 + 0x10;
  }
  uVar12 = *(uint *)(iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & local_8) * 4);
  local_8 = local_8 >> ((byte)(uVar12 >> 8) & 0x1f);
  param_2 = param_2 - (uVar12 >> 8 & 0xff);
  while ((uVar12 & 0xff) != 0) {
    pbVar18 = pbVar17;
    puVar15 = puVar21;
    if ((uVar12 & 0x10) != 0) {
      local_10 = uVar12 >> 0x10;
      uVar12 = uVar12 & 0xf;
      if (uVar12 != 0) {
        if (param_2 < uVar12) {
          pbVar17 = pbVar17 + 1;
          local_8 = local_8 + ((uint)*pbVar17 << ((byte)param_2 & 0x1f));
          param_2 = param_2 + 8;
        }
        uVar16 = (1 << (sbyte)uVar12) - 1U & local_8;
        local_8 = local_8 >> (sbyte)uVar12;
        local_10 = local_10 + uVar16;
        param_2 = param_2 - uVar12;
        pbVar18 = pbVar17;
      }
      if (param_2 < 0xf) {
        pbVar17 = pbVar18 + 1;
        pbVar18 = pbVar18 + 2;
        local_8 = local_8 + ((uint)*pbVar17 << ((byte)param_2 & 0x1f)) +
                  ((uint)*pbVar18 << ((byte)param_2 + 8 & 0x1f));
        param_2 = param_2 + 0x10;
      }
      uVar12 = *(uint *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & local_8) * 4);
      goto LAB_00469cf9;
    }
    if ((uVar12 & 0x40) != 0) {
      if ((uVar12 & 0x20) != 0) {
        *puVar3 = 0xb;
        goto LAB_00469ed9;
      }
      param_1[6] = (int)"invalid literal/length code";
      goto LAB_00469ed3;
    }
    uVar12 = *(uint *)(iVar7 + (((1 << ((byte)uVar12 & 0x1f)) - 1U & local_8) + (uVar12 >> 0x10)) *
                               4);
    local_8 = local_8 >> ((byte)(uVar12 >> 8) & 0x1f);
    param_2 = param_2 - (uVar12 >> 8 & 0xff);
  }
  puVar21[1] = (char)(uVar12 >> 0x10);
  puVar15 = puVar21 + 1;
  goto LAB_00469e9d;
LAB_00469cf9:
  local_8 = local_8 >> ((byte)(uVar12 >> 8) & 0x1f);
  uVar16 = param_2 - (uVar12 >> 8 & 0xff);
  param_2 = uVar16;
  if ((uVar12 & 0x10) != 0) goto code_r0x00469d16;
  if ((uVar12 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
    goto LAB_00469ed3;
  }
  uVar12 = *(uint *)(iVar8 + (((1 << ((byte)uVar12 & 0x1f)) - 1U & local_8) + (uVar12 >> 0x10)) * 4)
  ;
  goto LAB_00469cf9;
code_r0x00469d16:
  uVar13 = uVar12 & 0xf;
  pbVar17 = pbVar18;
  if (uVar16 < uVar13) {
    param_2 = uVar16 + 8;
    pbVar17 = pbVar18 + 1;
    local_8 = local_8 + ((uint)*pbVar17 << ((byte)uVar16 & 0x1f));
    if (param_2 < uVar13) {
      pbVar17 = pbVar18 + 2;
      local_8 = local_8 + ((uint)*pbVar17 << ((byte)param_2 & 0x1f));
      param_2 = uVar16 + 0x10;
    }
  }
  param_2 = param_2 - uVar13;
  uVar16 = (1 << (sbyte)uVar13) - 1U & local_8;
  local_8 = local_8 >> (sbyte)uVar13;
  uVar16 = (uVar12 >> 0x10) + uVar16;
  if (uVar16 <= (uint)((int)puVar21 - (int)(puVar20 + iVar11))) {
    local_14 = puVar21 + -uVar16;
    do {
      local_10 = local_10 - 3;
      puVar21[1] = local_14[1];
      puVar15 = local_14 + 2;
      local_14 = local_14 + 3;
      puVar21[2] = *puVar15;
      puVar21 = puVar21 + 3;
      *puVar21 = *local_14;
    } while (2 < local_10);
    goto LAB_00469e85;
  }
  local_c = uVar16 - ((int)puVar21 - (int)(puVar20 + iVar11));
  if (uVar5 < local_c) {
    param_1[6] = (int)"invalid distance too far back";
    pbVar18 = pbVar17;
LAB_00469ed3:
    *puVar3 = 0x1b;
    pbVar17 = pbVar18;
LAB_00469ed9:
    iVar19 = (int)pbVar17 - (param_2 >> 3);
    iVar4 = param_2 + (param_2 >> 3) * -8;
    *param_1 = iVar19 + 1;
    param_1[3] = (int)(puVar15 + 1);
    param_1[1] = (int)(pbVar1 + (5 - iVar19));
    param_1[4] = (int)(puVar20 + iVar2 + -0x101 + (0x101 - (int)puVar15));
    puVar3[0xe] = local_8 & (1 << ((byte)iVar4 & 0x1f)) - 1U;
    puVar3[0xf] = iVar4;
    return;
  }
  iVar14 = iVar19 + -1;
  if (uVar6 == 0) {
    local_14 = (undefined1 *)(iVar14 + (iVar4 - local_c));
    if (local_c < local_10) {
      local_10 = local_10 - local_c;
      do {
        local_14 = local_14 + 1;
        puVar21 = puVar21 + 1;
        local_c = local_c - 1;
        *puVar21 = *local_14;
      } while (local_c != 0);
LAB_00469e04:
      local_14 = puVar21 + -uVar16;
    }
  }
  else if (uVar6 < local_c) {
    local_14 = (undefined1 *)(iVar14 + (uVar6 - local_c) + iVar4);
    local_c = local_c - uVar6;
    if (local_c < local_10) {
      local_10 = local_10 - local_c;
      do {
        local_14 = local_14 + 1;
        puVar21 = puVar21 + 1;
        local_c = local_c - 1;
        *puVar21 = *local_14;
      } while (local_c != 0);
      local_14 = (undefined1 *)(iVar19 + -1);
      if (uVar6 < local_10) {
        local_10 = local_10 - uVar6;
        local_c = uVar6;
        do {
          local_14 = local_14 + 1;
          puVar21 = puVar21 + 1;
          local_c = local_c - 1;
          *puVar21 = *local_14;
        } while (local_c != 0);
        goto LAB_00469e04;
      }
    }
  }
  else {
    local_14 = (undefined1 *)(iVar14 + (uVar6 - local_c));
    if (local_c < local_10) {
      local_10 = local_10 - local_c;
      do {
        local_14 = local_14 + 1;
        puVar21 = puVar21 + 1;
        local_c = local_c - 1;
        *puVar21 = *local_14;
      } while (local_c != 0);
      goto LAB_00469e04;
    }
  }
  if (2 < local_10) {
    iVar14 = (local_10 - 3) / 3 + 1;
    do {
      local_10 = local_10 - 3;
      puVar21[1] = local_14[1];
      puVar15 = local_14 + 2;
      local_14 = local_14 + 3;
      puVar21[2] = *puVar15;
      puVar21 = puVar21 + 3;
      iVar14 = iVar14 + -1;
      *puVar21 = *local_14;
    } while (iVar14 != 0);
  }
LAB_00469e85:
  puVar15 = puVar21;
  if (local_10 != 0) {
    puVar15 = puVar21 + 1;
    *puVar15 = local_14[1];
    if (1 < local_10) {
      puVar15 = puVar21 + 2;
      *puVar15 = local_14[2];
    }
  }
LAB_00469e9d:
  if ((pbVar1 <= pbVar17) || (puVar21 = puVar15, puVar20 + iVar2 + -0x101 <= puVar15))
  goto LAB_00469ed9;
  goto LAB_00469bce;
}

