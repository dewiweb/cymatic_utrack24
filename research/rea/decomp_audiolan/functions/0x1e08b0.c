// rea decompile_all
// name: FUN_001e08b0
// address: 0x1e08b0
// body: available
// range: 0x1e08b0-0x1e0a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001e08b0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 != (undefined4 *)param_1[2]) {
    param_1[1] = (int)(puVar7 + 1);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *param_2;
    }
    return;
  }
  uVar1 = (int)puVar7 - *param_1 >> 2;
  if ((uint)(param_1[2] - *param_1 >> 2) <= uVar1) {
    uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar8 < uVar1 + 1) {
      uVar8 = uVar1 + 1;
    }
    puVar2 = (undefined4 *)FUN_0010f82c(uVar8 << 2,0);
    puVar5 = puVar2;
    for (puVar4 = (undefined4 *)*param_1; puVar4 != puVar7; puVar4 = puVar4 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar4;
      }
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)(((int)puVar7 - *param_1 & 0xfffffffcU) + (int)puVar2);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_2;
    }
    puVar5 = (undefined4 *)param_1[1];
    puVar4 = (undefined4 *)(((int)puVar7 - *param_1 & 0xfffffffcU) + (int)puVar2);
    for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
      puVar4 = puVar4 + 1;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar7;
      }
    }
    iVar3 = *param_1;
    iVar6 = param_1[1];
    FUN_0010fa20(iVar3,param_1[2] - iVar3 >> 2,0);
    param_1[2] = (int)(puVar2 + uVar8);
    param_1[1] = (int)(puVar2 + (iVar6 - iVar3 >> 2) + 1);
    *param_1 = (int)puVar2;
    return;
  }
  param_1[1] = (int)(puVar7 + 1);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = puVar7[-1];
  }
  puVar4 = puVar7 + -1;
  iVar3 = (int)puVar4 - (int)puVar7;
  if (0 < iVar3 >> 2) {
    puVar5 = puVar7;
    if (iVar3 * 0x20000000 < 0) {
      puVar4 = puVar7 + -2;
      puVar5 = puVar7 + -1;
      *puVar5 = *puVar4;
    }
    for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar5[-1] = puVar4[-1];
      puVar4 = puVar4 + -2;
      puVar5 = puVar5 + -2;
      *puVar5 = *puVar4;
    }
  }
  *puVar7 = *param_2;
  return;
}

