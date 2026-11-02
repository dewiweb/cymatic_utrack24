// rea decompile_all
// name: FUN_00243fa0
// address: 0x243fa0
// body: available
// range: 0x243fa0-0x24410f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00243fa0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar8 = param_1[2] - *param_1 >> 2;
  puVar2 = (uint *)param_1[1];
  uVar1 = (int)puVar2 - *param_1 >> 2;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar8 < uVar1 + 1) {
      uVar8 = uVar1 + 1;
    }
    puVar3 = (undefined4 *)FUN_00173860(uVar8 << 2,0);
    puVar6 = puVar3;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != param_2; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffcU) + (int)puVar3);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_3;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffcU) + (int)puVar3);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_2;
      }
    }
    iVar4 = *param_1;
    iVar7 = param_1[1];
    FUN_00173a54(iVar4,param_1[2] - iVar4 >> 2,0);
    param_1[2] = (int)(puVar3 + uVar8);
    param_1[1] = (int)(puVar3 + (iVar7 - iVar4 >> 2) + 1);
    *param_1 = (int)puVar3;
    return;
  }
  param_1[1] = (int)(puVar2 + 1);
  if (puVar2 != (uint *)0x0) {
    uVar8 = puVar2[-1];
  }
  puVar9 = puVar2 + -1;
  iVar4 = (int)puVar9 - (int)param_2;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = uVar8;
  }
  if (0 < iVar4 >> 2) {
    if (iVar4 * 0x20000000 < 0) {
      puVar9 = puVar2 + -2;
      puVar2 = puVar2 + -1;
      *puVar2 = *puVar9;
    }
    for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2[-1] = puVar9[-1];
      puVar9 = puVar9 + -2;
      puVar2 = puVar2 + -2;
      *puVar2 = *puVar9;
    }
  }
  *param_2 = *param_3;
  return;
}

