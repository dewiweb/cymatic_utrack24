// rea decompile_all
// name: FUN_0041f3a3
// address: 0x41f3a3
// body: available
// range: 0x41f3a3-0x41f664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041f3a3(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  short sVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint *extraout_EDX;
  uint *extraout_EDX_00;
  uint uVar14;
  undefined4 *unaff_ESI;
  uint *puVar15;
  uint local_2c;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  FUN_004c6ae2();
  FUN_004c6ae2();
  FUN_004c6ae2();
  local_1c = (int)unaff_ESI[0x13] >> ((byte)*unaff_ESI & 0x1f) & 0xffff;
  local_14 = (int)unaff_ESI[0x14] >> ((byte)*unaff_ESI & 0x1f) & 0xffff;
  puVar5 = (undefined4 *)unaff_ESI[0x17];
  while( true ) {
    if (puVar5 == (undefined4 *)0x0) break;
    puVar2 = (undefined4 *)puVar5[1];
    uVar11 = (*(short *)(puVar5 + 4) + *(short *)(puVar5 + 5)) - 1;
    if ((short)*(ushort *)(puVar5 + 5) < (short)local_14) {
      local_14 = (uint)*(ushort *)(puVar5 + 5);
    }
    bVar4 = (short)local_1c < (short)uVar11;
    if (bVar4) {
      local_1c = (uint)uVar11;
    }
    *puVar5 = 0;
    FUN_0041ee97();
    puVar5 = puVar2;
  }
  if (unaff_ESI[0xc] == 0) {
    unaff_ESI[0xb] = 0x14;
    uVar8 = 1;
  }
  else {
    (*(code *)unaff_ESI[0x29])();
    for (iVar9 = local_20; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
      *(uint *)(iVar9 + 0x18) = (uint)(ushort)(*(short *)(iVar9 + 0x14) - (short)local_14);
    }
    iVar9 = unaff_ESI[0xc];
    local_2c = 0;
    if ((0 < iVar9) && (*(int *)(unaff_ESI[8] + iVar9 * -4) == (int)(short)local_14)) {
      unaff_ESI[0xc] = iVar9 + -1;
    }
    iVar9 = unaff_ESI[0xc];
    local_8 = local_14;
    while (0 < iVar9) {
      if (local_20 != 0) {
        iVar9 = local_20;
        do {
          piVar1 = (int *)(iVar9 + 0x18);
          *piVar1 = *piVar1 - (int)(short)local_2c;
          iVar3 = *(int *)(iVar9 + 4);
          if (*piVar1 == 0) {
            thunk_FUN_0041eebb(iVar9);
            FUN_0041ee97();
          }
          iVar9 = iVar3;
        } while (iVar3 != 0);
      }
      FUN_0041eec8();
      FUN_0041eec8();
      uVar11 = *(ushort *)(unaff_ESI[8] + unaff_ESI[0xc] * -4);
      unaff_ESI[0xc] = unaff_ESI[0xc] + -1;
      local_2c = uVar11 - local_8 & 0xffff;
      puVar7 = local_c;
      if ((short)local_8 < (short)uVar11) {
        while( true ) {
          sVar6 = 0;
          puVar10 = local_10;
          puVar15 = local_c;
          if (local_c != (uint *)0x0) {
            do {
              local_18 = *puVar15;
              uVar14 = *puVar10;
              uVar12 = uVar14;
              if ((int)uVar14 < (int)local_18) {
                uVar12 = local_18;
                local_18 = uVar14;
              }
              uVar14 = -unaff_ESI[1];
              uVar13 = uVar14 & local_18;
              uVar14 = unaff_ESI[1] + -1 + uVar12 & uVar14;
              if (((((int)unaff_ESI[1] < (int)(uVar12 - local_18)) || (uVar13 == local_18)) ||
                  (uVar14 == uVar12)) ||
                 (((int)uVar13 <= (int)uVar14 && (uVar14 != unaff_ESI[1] + uVar13)))) {
                (*(code *)unaff_ESI[0x2a])();
              }
              else if (((byte)puVar15[3] & 7) != 2) {
                sVar6 = sVar6 + 1;
                *puVar15 = local_18;
                *puVar10 = uVar12;
                puVar15[6] = 1;
              }
              puVar15 = (uint *)puVar15[1];
              puVar10 = (uint *)puVar10[1];
            } while (puVar15 != (uint *)0x0);
            puVar15 = local_c;
            if (0 < sVar6) {
              do {
                if (puVar15[6] != 0) {
                  puVar15[6] = 0;
                  (*(code *)unaff_ESI[0x2b])();
                }
                puVar10 = puVar15 + 1;
                puVar15 = (uint *)*puVar10;
              } while ((uint *)*puVar10 != (uint *)0x0);
            }
          }
          (*(code *)unaff_ESI[0x2c])();
          local_8 = local_8 + 1;
          if ((short)uVar11 <= (short)local_8) break;
          FUN_0041eec8();
          FUN_0041eec8();
        }
      }
      while (puVar15 = puVar7, puVar7 = local_10, puVar15 != (uint *)0x0) {
        puVar7 = (uint *)puVar15[1];
        if (puVar15[4] == 0) {
          thunk_FUN_0041eebb(puVar15);
          puVar7 = extraout_EDX;
        }
      }
      while (puVar15 = puVar7, puVar15 != (uint *)0x0) {
        puVar7 = (uint *)puVar15[1];
        if (puVar15[4] == 0) {
          thunk_FUN_0041eebb(puVar15);
          puVar7 = extraout_EDX_00;
        }
      }
      iVar9 = unaff_ESI[0xc];
    }
    for (; (short)local_8 <= (short)local_1c; local_8 = local_8 + 1) {
      (*(code *)unaff_ESI[0x2c])();
    }
    uVar8 = 0;
  }
  return uVar8;
}

