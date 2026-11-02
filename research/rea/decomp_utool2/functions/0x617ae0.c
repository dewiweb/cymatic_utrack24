// rea decompile_all
// name: FUN_00617ae0
// address: 0x617ae0
// body: available
// range: 0x617ae0-0x617efc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00617ae0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  int *in_ECX;
  int in_EDX;
  uint uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  byte *local_c;
  uint local_8;
  
  puVar1 = (undefined4 *)in_ECX[7];
  local_c = (byte *)(*in_ECX + -1);
  pbVar9 = local_c + in_ECX[1] + -5;
  puVar17 = (undefined1 *)(in_ECX[3] + -1);
  iVar2 = in_ECX[4];
  local_8 = puVar1[0xe];
  iVar16 = puVar1[10];
  uVar3 = puVar1[0xb];
  uVar4 = puVar1[0xc];
  iVar24 = puVar1[0xd];
  iVar5 = puVar1[0x13];
  iVar6 = puVar1[0x14];
  uVar21 = puVar1[0xf];
  uVar7 = puVar1[0x15];
  uVar8 = puVar1[0x16];
  puVar19 = puVar17;
LAB_00617b66:
  if (uVar21 < 0xf) {
    pbVar11 = local_c + 1;
    local_c = local_c + 2;
    local_8 = local_8 + ((uint)*pbVar11 << ((byte)uVar21 & 0x1f)) +
              ((uint)*local_c << ((byte)uVar21 + 8 & 0x1f));
    uVar21 = uVar21 + 0x10;
  }
  uVar12 = *(uint *)(iVar5 + ((1 << ((byte)uVar7 & 0x1f)) - 1U & local_8) * 4);
  local_8 = local_8 >> ((byte)(uVar12 >> 8) & 0x1f);
  uVar21 = uVar21 - (uVar12 >> 8 & 0xff);
  cVar14 = (char)uVar12;
  while (cVar14 != '\0') {
    if ((uVar12 & 0x10) != 0) {
      uVar15 = uVar12 >> 0x10;
      uVar12 = uVar12 & 0xf;
      if (uVar12 != 0) {
        if (uVar21 < uVar12) {
          local_c = local_c + 1;
          local_8 = local_8 + ((uint)*local_c << ((byte)uVar21 & 0x1f));
          uVar21 = uVar21 + 8;
        }
        uVar10 = (1 << (sbyte)uVar12) - 1U & local_8;
        local_8 = local_8 >> (sbyte)uVar12;
        uVar15 = uVar15 + uVar10;
        uVar21 = uVar21 - uVar12;
      }
      if (uVar21 < 0xf) {
        pbVar11 = local_c + 1;
        local_c = local_c + 2;
        local_8 = local_8 + ((uint)*pbVar11 << ((byte)uVar21 & 0x1f)) +
                  ((uint)*local_c << ((byte)uVar21 + 8 & 0x1f));
        uVar21 = uVar21 + 0x10;
      }
      uVar12 = *(uint *)(iVar6 + ((1 << ((byte)uVar8 & 0x1f)) - 1U & local_8) * 4);
      uVar21 = uVar21 - (uVar12 >> 8 & 0xff);
      local_8 = local_8 >> ((byte)(uVar12 >> 8) & 0x1f);
      goto joined_r0x00617c7d;
    }
    if ((uVar12 & 0x40) != 0) {
      if ((uVar12 & 0x20) == 0) {
        in_ECX[6] = (int)"invalid literal/length code";
        goto LAB_00617ea0;
      }
      *puVar1 = 0xb;
      goto LAB_00617ea9;
    }
    uVar12 = *(uint *)(iVar5 + (((1 << ((byte)uVar12 & 0x1f)) - 1U & local_8) + (uVar12 >> 0x10)) *
                               4);
    local_8 = local_8 >> ((byte)(uVar12 >> 8) & 0x1f);
    uVar21 = uVar21 - (uVar12 >> 8 & 0xff);
    cVar14 = (char)uVar12;
  }
  puVar19[1] = (char)(uVar12 >> 0x10);
  puVar18 = puVar19 + 1;
  goto LAB_00617e0d;
joined_r0x00617c7d:
  if ((uVar12 & 0x10) != 0) goto LAB_00617cc4;
  if ((uVar12 & 0x40) != 0) {
    in_ECX[6] = (int)"invalid distance code";
    goto LAB_00617ea0;
  }
  uVar12 = *(uint *)(iVar6 + (((1 << ((byte)uVar12 & 0x1f)) - 1U & local_8) + (uVar12 >> 0x10)) * 4)
  ;
  uVar21 = uVar21 - (uVar12 >> 8 & 0xff);
  local_8 = local_8 >> ((byte)(uVar12 >> 8) & 0x1f);
  goto joined_r0x00617c7d;
LAB_00617cc4:
  uVar13 = uVar12 & 0xf;
  uVar10 = uVar21;
  pbVar11 = local_c;
  if (uVar21 < uVar13) {
    uVar10 = uVar21 + 8;
    local_8 = local_8 + ((uint)local_c[1] << ((byte)uVar21 & 0x1f));
    pbVar11 = local_c + 1;
    if (uVar10 < uVar13) {
      local_8 = local_8 + ((uint)local_c[2] << ((byte)uVar10 & 0x1f));
      uVar10 = uVar21 + 0x10;
      pbVar11 = local_c + 2;
    }
  }
  local_c = pbVar11;
  uVar21 = uVar10 - uVar13;
  uVar12 = (uVar12 >> 0x10) + ((1 << (sbyte)uVar13) - 1U & local_8);
  local_8 = local_8 >> (sbyte)uVar13;
  if (uVar12 <= (uint)((int)puVar19 - (int)(puVar17 + (iVar2 - in_EDX)))) {
    puVar18 = puVar19 + -uVar12;
    do {
      puVar20 = puVar19;
      puVar23 = puVar18;
      puVar20[1] = puVar23[1];
      uVar15 = uVar15 - 3;
      puVar20[2] = puVar23[2];
      puVar19 = puVar20 + 3;
      *puVar19 = puVar23[3];
      puVar18 = puVar23 + 3;
    } while (2 < uVar15);
    puVar18 = puVar19;
    if (uVar15 != 0) {
      puVar20[4] = puVar23[4];
      puVar18 = puVar20 + 4;
      if (1 < uVar15) {
        puVar20[5] = puVar23[5];
        puVar18 = puVar20 + 5;
      }
    }
    goto LAB_00617e0d;
  }
  uVar10 = uVar12 - ((int)puVar19 - (int)(puVar17 + (iVar2 - in_EDX)));
  if (uVar3 < uVar10) {
    in_ECX[6] = (int)"invalid distance too far back";
LAB_00617ea0:
    *puVar1 = 0x1b;
LAB_00617ea9:
    iVar16 = (int)local_c - (uVar21 >> 3);
    iVar24 = uVar21 + (uVar21 >> 3) * -8;
    *in_ECX = iVar16 + 1;
    in_ECX[3] = (int)(puVar19 + 1);
    in_ECX[1] = (int)(pbVar9 + (5 - iVar16));
    in_ECX[4] = (int)(puVar17 + iVar2 + -0x101 + (0x101 - (int)puVar19));
    puVar1[0xf] = iVar24;
    puVar1[0xe] = local_8 & (1 << ((byte)iVar24 & 0x1f)) - 1U;
    return;
  }
  iVar22 = iVar24 + -1;
  puVar18 = puVar19;
  if (uVar4 == 0) {
    puVar23 = (undefined1 *)(iVar22 + (iVar16 - uVar10));
    if (uVar10 < uVar15) {
      uVar15 = uVar15 - uVar10;
      do {
        puVar19 = puVar23 + 1;
        puVar23 = puVar23 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
LAB_00617dbe:
      puVar23 = puVar18 + -uVar12;
      puVar19 = puVar18;
    }
  }
  else if (uVar4 < uVar10) {
    uVar13 = uVar10 - uVar4;
    puVar23 = (undefined1 *)(iVar22 + (uVar4 - uVar10) + iVar16);
    if (uVar13 < uVar15) {
      uVar15 = uVar15 - uVar13;
      do {
        puVar20 = puVar18 + (int)(puVar23 + (1 - (int)puVar19));
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar20;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      puVar23 = (undefined1 *)(iVar24 + -1);
      puVar19 = puVar18;
      if (uVar4 < uVar15) {
        uVar15 = uVar15 - uVar4;
        uVar10 = uVar4;
        do {
          puVar19 = puVar23 + 1;
          puVar23 = puVar23 + 1;
          puVar18 = puVar18 + 1;
          *puVar18 = *puVar19;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        goto LAB_00617dbe;
      }
    }
  }
  else {
    puVar23 = (undefined1 *)(iVar22 + (uVar4 - uVar10));
    if (uVar10 < uVar15) {
      uVar15 = uVar15 - uVar10;
      do {
        puVar19 = puVar23 + 1;
        puVar23 = puVar23 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = *puVar19;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      goto LAB_00617dbe;
    }
  }
  if (2 < uVar15) {
    iVar22 = (uVar15 - 3) / 3 + 1;
    do {
      uVar15 = uVar15 - 3;
      puVar19[1] = puVar23[1];
      puVar18 = puVar23 + 2;
      puVar23 = puVar23 + 3;
      puVar19[2] = *puVar18;
      puVar19 = puVar19 + 3;
      *puVar19 = *puVar23;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  puVar18 = puVar19;
  if (uVar15 != 0) {
    puVar18 = puVar19 + 1;
    *puVar18 = puVar23[1];
    if (1 < uVar15) {
      puVar18 = puVar19 + 2;
      *puVar18 = puVar23[2];
    }
  }
LAB_00617e0d:
  puVar19 = puVar18;
  if ((pbVar9 <= local_c) || (puVar17 + iVar2 + -0x101 <= puVar18)) goto LAB_00617ea9;
  goto LAB_00617b66;
}

