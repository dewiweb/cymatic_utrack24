// rea decompile_all
// name: FUN_0023dc08
// address: 0x23dc08
// body: available
// range: 0x23dc08-0x23dded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023dc08(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined1 *puVar5;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  undefined4 extraout_r1_04;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  
  puVar7 = (undefined1 *)param_1[1];
  if (puVar7 == (undefined1 *)param_1[2]) {
    iVar1 = *param_1;
    FUN_001c6e90(param_1[2] - iVar1);
    FUN_001c6e90((int)puVar7 - iVar1);
    if (extraout_r1 <= extraout_r1_00) {
      uVar6 = (extraout_r1_00 >> 1) + extraout_r1_00 + (extraout_r1_00 >> 3);
      uVar3 = extraout_r1_00 + 1;
      if (extraout_r1_00 + 1 <= uVar6) {
        uVar3 = uVar6;
      }
      puVar4 = (undefined1 *)FUN_00173860(uVar3 * 0x14,0);
      puVar5 = puVar4;
      for (puVar2 = (undefined1 *)*param_1; puVar2 != puVar7; puVar2 = puVar2 + 0x14) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
          iVar1 = FUN_00072994(puVar5 + 4,DAT_0023ddf0,0xff);
          if ((undefined1 *)(iVar1 + -4) != puVar2) {
            *(undefined1 *)(iVar1 + -4) = *puVar2;
            FUN_00072b00(iVar1,puVar2 + 4);
          }
        }
        puVar5 = puVar5 + 0x14;
      }
      FUN_001c6e90((int)puVar7 - *param_1);
      puVar2 = puVar4 + extraout_r1_01 * 0x14;
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        iVar1 = FUN_00072994(puVar2 + 4,DAT_0023ddf0,0xff);
        if ((undefined1 *)(iVar1 + -4) != param_2) {
          *(undefined1 *)(iVar1 + -4) = *param_2;
          FUN_00072b00(iVar1,param_2 + 4);
        }
      }
      puVar5 = (undefined1 *)param_1[1];
      FUN_001c6e90((int)puVar7 - *param_1);
      puVar2 = puVar4 + extraout_r1_02 * 0x14;
      for (; puVar7 != puVar5; puVar7 = puVar7 + 0x14) {
        puVar8 = puVar2 + 0x14;
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = 0;
          iVar1 = FUN_00072994(puVar2 + 0x18,DAT_0023ddf0,0xff);
          if ((undefined1 *)(iVar1 + -4) != puVar7) {
            *(undefined1 *)(iVar1 + -4) = *puVar7;
            FUN_00072b00(iVar1,puVar7 + 4);
          }
        }
        puVar2 = puVar8;
      }
      iVar9 = param_1[1];
      iVar1 = *param_1;
      FUN_001c6e90(iVar9 - iVar1);
      for (; iVar1 != iVar9; iVar1 = iVar1 + 0x14) {
        FUN_00072ad0(iVar1 + 4);
      }
      iVar1 = *param_1;
      FUN_001c6e90(param_1[2] - iVar1);
      FUN_00173a54(iVar1,extraout_r1_04,0);
      *param_1 = (int)puVar4;
      param_1[1] = (int)(puVar4 + extraout_r1_03 * 0x14 + 0x14);
      param_1[2] = (int)(puVar4 + uVar3 * 0x14);
      return;
    }
    param_1[1] = (int)(puVar7 + 0x14);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      iVar1 = FUN_00072994(puVar7 + 4,DAT_0023ddf0,0xff);
      if ((undefined1 *)(iVar1 + -4) != puVar7 + -0x14) {
        *(undefined1 *)(iVar1 + -4) = puVar7[-0x14];
        FUN_00072b00(iVar1,puVar7 + -0x10);
      }
    }
    puVar2 = puVar7;
    puVar5 = puVar7 + -0x14;
    while (puVar8 = puVar5, puVar4 = puVar2, puVar7 != puVar8) {
      puVar2 = puVar4 + -0x14;
      puVar5 = puVar8 + -0x14;
      if (puVar2 != puVar5) {
        *puVar2 = *puVar5;
        FUN_00072b00(puVar4 + -0x10,puVar8 + -0x10);
      }
    }
    if (puVar7 == param_2) {
      return;
    }
    *puVar7 = *param_2;
  }
  else {
    param_1[1] = (int)(puVar7 + 0x14);
    if (puVar7 == (undefined1 *)0x0) {
      return;
    }
    *puVar7 = 0;
    iVar1 = FUN_00072994(puVar7 + 4,DAT_0023ddf0,0xff);
    puVar7 = (undefined1 *)(iVar1 + -4);
    if (puVar7 == param_2) {
      return;
    }
    *puVar7 = *param_2;
  }
  FUN_00072b00(puVar7 + 4,param_2 + 4);
  return;
}

