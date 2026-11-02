// rea decompile_all
// name: FUN_0023b224
// address: 0x23b224
// body: available
// range: 0x23b224-0x23b5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023b224(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar3 = DAT_0023b5cc;
  uVar2 = DAT_0023b5c8;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 == (undefined4 *)param_1[2]) {
    uVar1 = (int)puVar7 - *param_1 >> 4;
    if ((uint)(param_1[2] - *param_1 >> 4) <= uVar1) {
      uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar6 < uVar1 + 1) {
        uVar6 = uVar1 + 1;
      }
      puVar4 = (undefined4 *)FUN_00173860(uVar6 << 4,0);
      puVar10 = puVar4;
      for (puVar9 = (undefined4 *)*param_1; puVar9 != puVar7; puVar9 = puVar9 + 4) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uVar2;
          *(undefined1 *)(puVar10 + 1) = 0;
          *(undefined1 *)((int)puVar10 + 5) = 0xff;
          *(undefined1 *)((int)puVar10 + 6) = 0;
          puVar10[3] = 0;
          puVar10[2] = uVar3;
          if (puVar10 != puVar9) {
            *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar9 + 1);
            FUN_00063c44(puVar10 + 2,puVar9 + 2);
            *(undefined1 *)((int)puVar10 + 5) = *(undefined1 *)((int)puVar9 + 5);
            *(undefined1 *)((int)puVar10 + 6) = *(undefined1 *)((int)puVar9 + 6);
          }
        }
        puVar10 = puVar10 + 4;
      }
      puVar9 = (undefined4 *)(((int)puVar7 - *param_1 & 0xfffffff0U) + (int)puVar4);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uVar2;
        *(undefined1 *)(puVar9 + 1) = 0;
        *(undefined1 *)((int)puVar9 + 5) = 0xff;
        *(undefined1 *)((int)puVar9 + 6) = 0;
        puVar9[3] = 0;
        puVar9[2] = uVar3;
        if (puVar9 != param_2) {
          *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_2 + 1);
          FUN_00063c44(puVar9 + 2,param_2 + 2);
          *(undefined1 *)((int)puVar9 + 5) = *(undefined1 *)((int)param_2 + 5);
          *(undefined1 *)((int)puVar9 + 6) = *(undefined1 *)((int)param_2 + 6);
        }
      }
      puVar10 = (undefined4 *)param_1[1];
      puVar9 = (undefined4 *)((int)puVar4 + ((int)puVar7 - *param_1 & 0xfffffff0U));
      for (; puVar7 != puVar10; puVar7 = puVar7 + 4) {
        puVar8 = puVar9 + 4;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = uVar2;
          *(undefined1 *)(puVar9 + 5) = 0;
          *(undefined1 *)((int)puVar9 + 0x15) = 0xff;
          *(undefined1 *)((int)puVar9 + 0x16) = 0;
          puVar9[7] = 0;
          puVar9[6] = uVar3;
          if (puVar8 != puVar7) {
            *(undefined1 *)(puVar9 + 5) = *(undefined1 *)(puVar7 + 1);
            FUN_00063c44(puVar9 + 6,puVar7 + 2);
            *(undefined1 *)((int)puVar9 + 0x15) = *(undefined1 *)((int)puVar7 + 5);
            *(undefined1 *)((int)puVar9 + 0x16) = *(undefined1 *)((int)puVar7 + 6);
          }
        }
        puVar9 = puVar8;
      }
      puVar7 = (undefined4 *)*param_1;
      puVar9 = (undefined4 *)param_1[1];
      iVar5 = (int)puVar9 - (int)puVar7;
      for (; puVar7 != puVar9; puVar7 = puVar7 + 4) {
        (**(code **)*puVar7)(puVar7);
      }
      FUN_00173a54(*param_1,param_1[2] - *param_1 >> 4,0);
      *param_1 = (int)puVar4;
      param_1[1] = (int)(puVar4 + (iVar5 >> 4) * 4 + 4);
      param_1[2] = (int)(puVar4 + uVar6 * 4);
      return;
    }
    param_1[1] = (int)(puVar7 + 4);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = uVar2;
      *(undefined1 *)(puVar7 + 1) = 0;
      *(undefined1 *)((int)puVar7 + 5) = 0xff;
      *(undefined1 *)((int)puVar7 + 6) = 0;
      puVar7[3] = 0;
      puVar7[2] = uVar3;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar7 + -3);
      FUN_00063c44(puVar7 + 2,puVar7 + -2);
      *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)((int)puVar7 + -0xb);
      *(undefined1 *)((int)puVar7 + 6) = *(undefined1 *)((int)puVar7 + -10);
    }
    puVar9 = puVar7;
    puVar10 = puVar7 + -4;
    while (puVar8 = puVar10, puVar4 = puVar9, puVar7 != puVar8) {
      puVar9 = puVar4 + -4;
      puVar10 = puVar8 + -4;
      if (puVar9 != puVar10) {
        *(undefined1 *)(puVar4 + -3) = *(undefined1 *)(puVar8 + -3);
        FUN_00063c44(puVar4 + -2,puVar8 + -2);
        *(undefined1 *)((int)puVar4 + -0xb) = *(undefined1 *)((int)puVar8 + -0xb);
        *(undefined1 *)((int)puVar4 + -10) = *(undefined1 *)((int)puVar8 + -10);
      }
    }
    if (puVar7 != param_2) {
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 1);
      FUN_00063c44(puVar7 + 2,param_2 + 2);
      *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)((int)param_2 + 5);
      *(undefined1 *)((int)puVar7 + 6) = *(undefined1 *)((int)param_2 + 6);
      return;
    }
    return;
  }
  param_1[1] = (int)(puVar7 + 4);
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  *puVar7 = uVar2;
  *(undefined1 *)(puVar7 + 1) = 0;
  *(undefined1 *)((int)puVar7 + 5) = 0xff;
  *(undefined1 *)((int)puVar7 + 6) = 0;
  puVar7[3] = 0;
  puVar7[2] = uVar3;
  if (puVar7 != param_2) {
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 1);
    FUN_00063c44(puVar7 + 2,param_2 + 2);
    *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)((int)param_2 + 5);
    *(undefined1 *)((int)puVar7 + 6) = *(undefined1 *)((int)param_2 + 6);
    return;
  }
  return;
}

