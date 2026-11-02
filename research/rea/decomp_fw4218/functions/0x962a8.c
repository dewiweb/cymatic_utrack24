// rea decompile_all
// name: FUN_000962a8
// address: 0x962a8
// body: available
// range: 0x962a8-0x965ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000962a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar10 = (int *)(param_1 + 0x44);
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  if (puVar2 == *(undefined4 **)(param_1 + 0x4c)) {
    uVar1 = (int)puVar2 - *piVar10 >> 5;
    if ((uint)((int)*(undefined4 **)(param_1 + 0x4c) - *piVar10 >> 5) <= uVar1) {
      uVar5 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar5 < uVar1 + 1) {
        uVar5 = uVar1 + 1;
      }
      puVar3 = (undefined4 *)FUN_00173860(uVar5 << 5,0);
      puVar9 = puVar3;
      for (puVar6 = (undefined4 *)*piVar10; puVar6 != puVar2; puVar6 = puVar6 + 8) {
        if (puVar9 != (undefined4 *)0x0) {
          uVar11 = puVar6[1];
          uVar12 = puVar6[2];
          uVar13 = puVar6[3];
          *puVar9 = *puVar6;
          puVar9[1] = uVar11;
          puVar9[2] = uVar12;
          puVar9[3] = uVar13;
          uVar11 = puVar6[5];
          uVar12 = puVar6[6];
          uVar13 = puVar6[7];
          puVar9[4] = puVar6[4];
          puVar9[5] = uVar11;
          puVar9[6] = uVar12;
          puVar9[7] = uVar13;
        }
        puVar9 = puVar9 + 8;
      }
      puVar6 = (undefined4 *)(((int)puVar2 - *piVar10 & 0xffffffe0U) + (int)puVar3);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = param_2;
        puVar6[1] = param_3;
        puVar6[2] = param_4;
        puVar6[3] = param_5;
        puVar6[4] = param_6;
        puVar6[5] = param_7;
        puVar6[6] = param_8;
        puVar6[7] = param_9;
      }
      puVar9 = *(undefined4 **)(param_1 + 0x48);
      puVar6 = (undefined4 *)(((int)puVar2 - *piVar10 & 0xffffffe0U) + (int)puVar3);
      for (; puVar2 != puVar9; puVar2 = puVar2 + 8) {
        puVar4 = puVar6 + 8;
        if (puVar4 != (undefined4 *)0x0) {
          uVar11 = puVar2[1];
          uVar12 = puVar2[2];
          uVar13 = puVar2[3];
          *puVar4 = *puVar2;
          puVar6[9] = uVar11;
          puVar6[10] = uVar12;
          puVar6[0xb] = uVar13;
          uVar11 = puVar2[5];
          uVar12 = puVar2[6];
          uVar13 = puVar2[7];
          puVar6[0xc] = puVar2[4];
          puVar6[0xd] = uVar11;
          puVar6[0xe] = uVar12;
          puVar6[0xf] = uVar13;
        }
        puVar6 = puVar4;
      }
      iVar8 = *piVar10;
      iVar7 = *(int *)(param_1 + 0x48);
      FUN_00173a54(iVar8,*(int *)(param_1 + 0x4c) - iVar8 >> 5,0);
      *(undefined4 **)(param_1 + 0x4c) = puVar3 + uVar5 * 8;
      *(undefined4 **)(param_1 + 0x48) = puVar3 + (iVar7 - iVar8 >> 5) * 8 + 8;
      *piVar10 = (int)puVar3;
      return;
    }
    *(undefined4 **)(param_1 + 0x48) = puVar2 + 8;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar2[-8];
      puVar2[1] = puVar2[-7];
      puVar2[2] = puVar2[-6];
      puVar2[3] = puVar2[-5];
      puVar2[4] = puVar2[-4];
      puVar2[5] = puVar2[-3];
      puVar2[6] = puVar2[-2];
      puVar2[7] = puVar2[-1];
    }
    puVar6 = puVar2 + -8;
    iVar8 = (int)puVar6 - (int)puVar2;
    if (0 < iVar8 >> 5) {
      puVar9 = puVar2;
      if (iVar8 * 0x4000000 < 0) {
        puVar6 = puVar2 + -0x10;
        puVar9 = puVar2 + -8;
        *puVar9 = *puVar6;
        puVar2[-7] = puVar2[-0xf];
        puVar2[-6] = puVar2[-0xe];
        puVar2[-5] = puVar2[-0xd];
        puVar2[-4] = puVar2[-0xc];
        puVar2[-3] = puVar2[-0xb];
        puVar2[-2] = puVar2[-10];
        puVar2[-1] = puVar2[-9];
      }
      for (iVar8 = iVar8 >> 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        uVar11 = puVar6[-7];
        uVar12 = puVar6[-6];
        uVar13 = puVar6[-5];
        puVar9[-8] = puVar6[-8];
        puVar9[-7] = uVar11;
        puVar9[-6] = uVar12;
        puVar9[-5] = uVar13;
        uVar11 = puVar6[-3];
        uVar12 = puVar6[-2];
        uVar13 = puVar6[-1];
        puVar9[-4] = puVar6[-4];
        puVar9[-3] = uVar11;
        puVar9[-2] = uVar12;
        puVar9[-1] = uVar13;
        uVar11 = puVar6[-0xf];
        uVar12 = puVar6[-0xe];
        uVar13 = puVar6[-0xd];
        puVar9[-0x10] = puVar6[-0x10];
        puVar9[-0xf] = uVar11;
        puVar9[-0xe] = uVar12;
        puVar9[-0xd] = uVar13;
        uVar11 = puVar6[-0xb];
        uVar12 = puVar6[-10];
        uVar13 = puVar6[-9];
        puVar9[-0xc] = puVar6[-0xc];
        puVar9[-0xb] = uVar11;
        puVar9[-10] = uVar12;
        puVar9[-9] = uVar13;
        puVar9 = puVar9 + -0x10;
        puVar6 = puVar6 + -0x10;
      }
    }
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    puVar2[3] = param_5;
    puVar2[4] = param_6;
    puVar2[5] = param_7;
    puVar2[6] = param_8;
    puVar2[7] = param_9;
    return;
  }
  *(undefined4 **)(param_1 + 0x48) = puVar2 + 8;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[2] = param_4;
    puVar2[1] = param_3;
    *puVar2 = param_2;
    puVar2[3] = param_5;
    puVar2[4] = param_6;
    puVar2[5] = param_7;
    puVar2[6] = param_8;
    puVar2[7] = param_9;
    return;
  }
  return;
}

