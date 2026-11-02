// rea decompile_all
// name: FUN_001ddf4c
// address: 0x1ddf4c
// body: available
// range: 0x1ddf4c-0x1de0e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ddf4c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar4;
  undefined4 *puVar5;
  int extraout_r1_02;
  undefined4 *puVar6;
  int extraout_r1_03;
  int extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 != (undefined4 *)param_1[2]) {
    param_1[1] = (int)(puVar9 + 5);
    if (puVar9 != (undefined4 *)0x0) {
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar10 = param_2[3];
      *puVar9 = *param_2;
      puVar9[1] = uVar7;
      puVar9[2] = uVar8;
      puVar9[3] = uVar10;
      puVar9[4] = param_2[4];
    }
    return;
  }
  iVar11 = *param_1;
  FUN_0016db0c(param_1[2] - iVar11);
  FUN_0016db0c((int)puVar9 - iVar11);
  if (extraout_r1 <= extraout_r1_00) {
    uVar4 = (extraout_r1_00 >> 1) + extraout_r1_00 + (extraout_r1_00 >> 3);
    uVar1 = extraout_r1_00 + 1;
    if (extraout_r1_00 + 1 <= uVar4) {
      uVar1 = uVar4;
    }
    puVar2 = (undefined4 *)FUN_0010f82c(uVar1 * 0x14,0);
    puVar6 = puVar2;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar9; puVar5 = puVar5 + 5) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        uVar10 = puVar5[3];
        *puVar6 = *puVar5;
        puVar6[1] = uVar7;
        puVar6[2] = uVar8;
        puVar6[3] = uVar10;
        puVar6[4] = puVar5[4];
      }
      puVar6 = puVar6 + 5;
    }
    FUN_0016db0c((int)puVar9 - *param_1);
    puVar5 = puVar2 + extraout_r1_02 * 5;
    if (puVar5 != (undefined4 *)0x0) {
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar10 = param_2[3];
      *puVar5 = *param_2;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar10;
      puVar5[4] = param_2[4];
    }
    puVar6 = (undefined4 *)param_1[1];
    FUN_0016db0c((int)puVar9 - *param_1);
    puVar5 = puVar2 + extraout_r1_03 * 5;
    for (; puVar9 != puVar6; puVar9 = puVar9 + 5) {
      puVar3 = puVar5 + 5;
      if (puVar3 != (undefined4 *)0x0) {
        uVar7 = puVar9[1];
        uVar8 = puVar9[2];
        uVar10 = puVar9[3];
        *puVar3 = *puVar9;
        puVar5[6] = uVar7;
        puVar5[7] = uVar8;
        puVar5[8] = uVar10;
        puVar5[9] = puVar9[4];
      }
      puVar5 = puVar3;
    }
    iVar11 = *param_1;
    FUN_0016db0c(param_1[1] - iVar11);
    FUN_0016db0c(param_1[2] - iVar11);
    FUN_0010fa20(iVar11,extraout_r1_05,0);
    *param_1 = (int)puVar2;
    param_1[1] = (int)(puVar2 + extraout_r1_04 * 5 + 5);
    param_1[2] = (int)(puVar2 + uVar1 * 5);
    return;
  }
  param_1[1] = (int)(puVar9 + 5);
  puVar5 = puVar9 + -5;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = *puVar5;
    puVar9[1] = puVar9[-4];
    puVar9[2] = puVar9[-3];
    puVar9[3] = puVar9[-2];
    puVar9[4] = puVar9[-1];
  }
  if (0x13 < (int)puVar5 - (int)puVar9) {
    FUN_0016db0c();
    puVar6 = puVar5;
    puVar2 = puVar9;
    if ((extraout_r1_01 & 1) != 0) {
      puVar6 = puVar9 + -10;
      *puVar5 = *puVar6;
      puVar9[-4] = puVar9[-9];
      puVar9[-3] = puVar9[-8];
      puVar9[-2] = puVar9[-7];
      puVar9[-1] = puVar9[-6];
      puVar2 = puVar5;
    }
    for (iVar11 = (int)extraout_r1_01 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar7 = puVar6[-4];
      uVar8 = puVar6[-3];
      uVar10 = puVar6[-2];
      puVar2[-5] = puVar6[-5];
      puVar2[-4] = uVar7;
      puVar2[-3] = uVar8;
      puVar2[-2] = uVar10;
      puVar2[-1] = puVar6[-1];
      uVar7 = puVar6[-9];
      uVar8 = puVar6[-8];
      uVar10 = puVar6[-7];
      puVar2[-10] = puVar6[-10];
      puVar2[-9] = uVar7;
      puVar2[-8] = uVar8;
      puVar2[-7] = uVar10;
      puVar2[-6] = puVar6[-6];
      puVar6 = puVar6 + -10;
      puVar2 = puVar2 + -10;
    }
  }
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar10 = param_2[3];
  *puVar9 = *param_2;
  puVar9[1] = uVar7;
  puVar9[2] = uVar8;
  puVar9[3] = uVar10;
  puVar9[4] = param_2[4];
  return;
}

