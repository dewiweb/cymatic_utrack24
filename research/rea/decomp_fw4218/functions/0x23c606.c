// rea decompile_all
// name: FUN_0023c606
// address: 0x23c606
// body: available
// range: 0x23c606-0x23c8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023c606(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 extraout_r1;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 *local_28;
  
  puVar9 = (undefined1 *)param_1[1];
  if (puVar9 == (undefined1 *)param_1[2]) {
    uVar5 = (int)puVar9 - *param_1 >> 4;
    if ((uint)(param_1[2] - *param_1 >> 4) <= uVar5) {
      uVar2 = (uVar5 >> 1) + uVar5 + (uVar5 >> 3);
      if (uVar2 < uVar5 + 1) {
        uVar2 = uVar5 + 1;
      }
      puVar3 = (undefined1 *)FUN_00173860(uVar2 * 0x10,0);
      puVar7 = puVar3;
      for (puVar12 = (undefined1 *)*param_1; puVar12 != puVar9; puVar12 = puVar12 + 0x10) {
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 4) = 0;
          *(undefined4 *)(puVar7 + 8) = 0;
          *(undefined4 *)(puVar7 + 0xc) = 0;
          if (puVar7 != puVar12) {
            *puVar7 = *puVar12;
            iVar13 = *(int *)(puVar12 + 8);
            for (iVar11 = *(int *)(puVar12 + 4); iVar11 != iVar13; iVar11 = iVar11 + 0x10) {
              FUN_0023ddf4(puVar7 + 4,iVar11);
            }
          }
        }
        puVar7 = puVar7 + 0x10;
      }
      puVar12 = puVar3 + ((int)puVar9 - *param_1 & 0xfffffff0);
      if (puVar12 != (undefined1 *)0x0) {
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 4) = 0;
        *(undefined4 *)(puVar12 + 8) = 0;
        *(undefined4 *)(puVar12 + 0xc) = 0;
        if (puVar12 != param_2) {
          *puVar12 = *param_2;
          iVar13 = *(int *)(param_2 + 8);
          for (iVar11 = *(int *)(param_2 + 4); iVar11 != iVar13; iVar11 = iVar11 + 0x10) {
            FUN_0023ddf4(puVar12 + 4,iVar11);
          }
        }
      }
      puVar7 = (undefined1 *)param_1[1];
      puVar12 = puVar3 + ((int)puVar9 - *param_1 & 0xfffffff0);
      for (; puVar9 != puVar7; puVar9 = puVar9 + 0x10) {
        local_28 = puVar12 + 0x10;
        if (local_28 != (undefined1 *)0x0) {
          *local_28 = 0;
          *(undefined4 *)(puVar12 + 0x14) = 0;
          *(undefined4 *)(puVar12 + 0x18) = 0;
          *(undefined4 *)(puVar12 + 0x1c) = 0;
          if (local_28 != puVar9) {
            *local_28 = *puVar9;
            iVar13 = *(int *)(puVar9 + 8);
            for (iVar11 = *(int *)(puVar9 + 4); iVar11 != iVar13; iVar11 = iVar11 + 0x10) {
              FUN_0023ddf4(puVar12 + 0x14,iVar11);
            }
          }
        }
        puVar12 = local_28;
      }
      iVar11 = *param_1;
      iVar13 = param_1[1];
      iVar6 = iVar13 - iVar11;
      for (; iVar11 != iVar13; iVar11 = iVar11 + 0x10) {
        iVar4 = *(int *)(iVar11 + 8);
        for (iVar10 = *(int *)(iVar11 + 4); iVar10 != iVar4; iVar10 = iVar10 + 0x10) {
          iVar14 = *(int *)(iVar10 + 8);
          for (iVar8 = *(int *)(iVar10 + 4); iVar8 != iVar14; iVar8 = iVar8 + 0x14) {
            FUN_00072ad0(iVar8 + 4);
          }
          iVar8 = *(int *)(iVar10 + 4);
          FUN_001c6e90(*(int *)(iVar10 + 0xc) - iVar8);
          FUN_00173a54(iVar8,extraout_r1,0);
        }
        iVar10 = *(int *)(iVar11 + 4);
        FUN_00173a54(iVar10,*(int *)(iVar11 + 0xc) - iVar10 >> 4,0);
      }
      FUN_00173a54(*param_1,param_1[2] - *param_1 >> 4,0);
      *param_1 = (int)puVar3;
      param_1[1] = (int)(puVar3 + (iVar6 >> 4) * 0x10 + 0x10);
      param_1[2] = (int)(puVar3 + uVar2 * 0x10);
      return;
    }
    param_1[1] = (int)(puVar9 + 0x10);
    if (puVar9 != (undefined1 *)0x0) {
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      *(undefined4 *)(puVar9 + 8) = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0;
      *puVar9 = puVar9[-0x10];
      iVar13 = *(int *)(puVar9 + -8);
      for (iVar11 = *(int *)(puVar9 + -0xc); iVar11 != iVar13; iVar11 = iVar11 + 0x10) {
        FUN_0023ddf4(puVar9 + 4,iVar11);
      }
    }
    puVar12 = puVar9;
    puVar7 = puVar9 + -0x10;
    while (puVar1 = puVar7, puVar3 = puVar12, puVar9 != puVar1) {
      puVar7 = puVar1 + -0x10;
      puVar12 = puVar3 + -0x10;
      if (puVar12 != puVar7) {
        *puVar12 = *puVar7;
        iVar13 = *(int *)(puVar1 + -8);
        for (iVar11 = *(int *)(puVar1 + -0xc); iVar11 != iVar13; iVar11 = iVar11 + 0x10) {
          FUN_0023ddf4(puVar3 + -0xc,iVar11);
        }
      }
    }
    if (puVar9 != param_2) {
      *puVar9 = *param_2;
      iVar13 = *(int *)(param_2 + 4);
      iVar11 = *(int *)(param_2 + 8);
      if (iVar13 != iVar11) {
        do {
          FUN_0023ddf4(puVar9 + 4,iVar13);
          iVar13 = iVar13 + 0x10;
        } while (iVar13 != iVar11);
        return;
      }
    }
  }
  else {
    param_1[1] = (int)(puVar9 + 0x10);
    if (puVar9 != (undefined1 *)0x0) {
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      *(undefined4 *)(puVar9 + 8) = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0;
      if (puVar9 != param_2) {
        *puVar9 = *param_2;
        iVar13 = *(int *)(param_2 + 8);
        for (iVar11 = *(int *)(param_2 + 4); iVar11 != iVar13; iVar11 = iVar11 + 0x10) {
          FUN_0023ddf4(puVar9 + 4,iVar11);
        }
      }
    }
  }
  return;
}

