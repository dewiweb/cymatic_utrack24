// rea decompile_all
// name: FUN_0023ddf4
// address: 0x23ddf4
// body: available
// range: 0x23ddf4-0x23e0c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023ddf4(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *local_28;
  
  puVar7 = (undefined1 *)param_1[1];
  if (puVar7 == (undefined1 *)param_1[2]) {
    uVar9 = (int)puVar7 - *param_1 >> 4;
    if ((uint)(param_1[2] - *param_1 >> 4) <= uVar9) {
      uVar5 = (uVar9 >> 1) + uVar9 + (uVar9 >> 3);
      uVar3 = uVar9 + 1;
      if (uVar9 + 1 <= uVar5) {
        uVar3 = uVar5;
      }
      puVar4 = (undefined1 *)FUN_00173860(uVar3 * 0x10,0);
      puVar2 = puVar4;
      for (puVar13 = (undefined1 *)*param_1; puVar13 != puVar7; puVar13 = puVar13 + 0x10) {
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0xff;
          puVar2[2] = 0;
          *(undefined4 *)(puVar2 + 4) = 0;
          *(undefined4 *)(puVar2 + 8) = 0;
          *(undefined4 *)(puVar2 + 0xc) = 0;
          if (puVar2 != puVar13) {
            puVar2[2] = puVar13[2];
            puVar2[1] = puVar13[1];
            *puVar2 = *puVar13;
            iVar11 = *(int *)(puVar13 + 8);
            for (iVar8 = *(int *)(puVar13 + 4); iVar8 != iVar11; iVar8 = iVar8 + 0x14) {
              FUN_0023dc08(puVar2 + 4,iVar8);
            }
          }
        }
        puVar2 = puVar2 + 0x10;
      }
      puVar13 = puVar4 + ((int)puVar7 - *param_1 & 0xfffffff0);
      if (puVar13 != (undefined1 *)0x0) {
        *puVar13 = 0;
        puVar13[1] = 0xff;
        puVar13[2] = 0;
        *(undefined4 *)(puVar13 + 4) = 0;
        *(undefined4 *)(puVar13 + 8) = 0;
        *(undefined4 *)(puVar13 + 0xc) = 0;
        if (puVar13 != param_2) {
          puVar13[2] = param_2[2];
          puVar13[1] = param_2[1];
          *puVar13 = *param_2;
          iVar11 = *(int *)(param_2 + 8);
          for (iVar8 = *(int *)(param_2 + 4); iVar8 != iVar11; iVar8 = iVar8 + 0x14) {
            FUN_0023dc08(puVar13 + 4,iVar8);
          }
        }
      }
      puVar2 = (undefined1 *)param_1[1];
      puVar13 = puVar4 + ((int)puVar7 - *param_1 & 0xfffffff0);
      for (; puVar7 != puVar2; puVar7 = puVar7 + 0x10) {
        local_28 = puVar13 + 0x10;
        if (local_28 != (undefined1 *)0x0) {
          *local_28 = 0;
          puVar13[0x11] = 0xff;
          puVar13[0x12] = 0;
          *(undefined4 *)(puVar13 + 0x14) = 0;
          *(undefined4 *)(puVar13 + 0x18) = 0;
          *(undefined4 *)(puVar13 + 0x1c) = 0;
          if (local_28 != puVar7) {
            puVar13[0x12] = puVar7[2];
            puVar13[0x11] = puVar7[1];
            *local_28 = *puVar7;
            iVar11 = *(int *)(puVar7 + 8);
            for (iVar8 = *(int *)(puVar7 + 4); iVar8 != iVar11; iVar8 = iVar8 + 0x14) {
              FUN_0023dc08(puVar13 + 0x14,iVar8);
            }
          }
        }
        puVar13 = local_28;
      }
      iVar11 = param_1[1];
      iVar8 = *param_1;
      iVar6 = iVar11 - iVar8;
      for (; iVar8 != iVar11; iVar8 = iVar8 + 0x10) {
        iVar12 = *(int *)(iVar8 + 8);
        for (iVar10 = *(int *)(iVar8 + 4); iVar10 != iVar12; iVar10 = iVar10 + 0x14) {
          FUN_00072ad0(iVar10 + 4);
        }
        iVar10 = *(int *)(iVar8 + 4);
        FUN_001c6e90(*(int *)(iVar8 + 0xc) - iVar10);
        FUN_00173a54(iVar10,extraout_r1,0);
      }
      FUN_00173a54(*param_1,param_1[2] - *param_1 >> 4,0);
      *param_1 = (int)puVar4;
      param_1[1] = (int)(puVar4 + (iVar6 >> 4) * 0x10 + 0x10);
      param_1[2] = (int)(puVar4 + uVar3 * 0x10);
      return;
    }
    param_1[1] = (int)(puVar7 + 0x10);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0xff;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
      puVar7[2] = puVar7[-0xe];
      puVar7[1] = puVar7[-0xf];
      *puVar7 = puVar7[-0x10];
      iVar11 = *(int *)(puVar7 + -8);
      for (iVar8 = *(int *)(puVar7 + -0xc); iVar8 != iVar11; iVar8 = iVar8 + 0x14) {
        FUN_0023dc08(puVar7 + 4,iVar8);
      }
    }
    puVar13 = puVar7;
    puVar2 = puVar7 + -0x10;
    while (puVar1 = puVar2, puVar4 = puVar13, puVar7 != puVar1) {
      puVar13 = puVar4 + -0x10;
      puVar2 = puVar1 + -0x10;
      if (puVar13 != puVar2) {
        puVar4[-0xe] = puVar1[-0xe];
        puVar4[-0xf] = puVar1[-0xf];
        *puVar13 = *puVar2;
        iVar11 = *(int *)(puVar1 + -8);
        for (iVar8 = *(int *)(puVar1 + -0xc); iVar8 != iVar11; iVar8 = iVar8 + 0x14) {
          FUN_0023dc08(puVar4 + -0xc,iVar8);
        }
      }
    }
    if (puVar7 != param_2) {
      puVar7[2] = param_2[2];
      puVar7[1] = param_2[1];
      *puVar7 = *param_2;
      iVar11 = *(int *)(param_2 + 8);
      iVar8 = *(int *)(param_2 + 4);
      if (iVar8 != iVar11) {
        do {
          FUN_0023dc08(puVar7 + 4,iVar8);
          iVar8 = iVar8 + 0x14;
        } while (iVar8 != iVar11);
        return;
      }
    }
  }
  else {
    param_1[1] = (int)(puVar7 + 0x10);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0xff;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
      if (puVar7 != param_2) {
        puVar7[2] = param_2[2];
        puVar7[1] = param_2[1];
        *puVar7 = *param_2;
        iVar11 = *(int *)(param_2 + 8);
        for (iVar8 = *(int *)(param_2 + 4); iVar8 != iVar11; iVar8 = iVar8 + 0x14) {
          FUN_0023dc08(puVar7 + 4,iVar8);
        }
      }
    }
  }
  return;
}

