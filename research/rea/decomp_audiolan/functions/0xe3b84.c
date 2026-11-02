// rea decompile_all
// name: FUN_000e3b84
// address: 0xe3b84
// body: available
// range: 0xe3b84-0xe3c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_000e3b84(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = DAT_000e3c88;
  if (param_1 == param_2) {
    return param_1;
  }
  piVar6 = *(int **)(param_1 + 4);
  piVar7 = *(int **)(param_1 + 8);
  piVar3 = piVar6;
  if (piVar6 != piVar7) {
    do {
      piVar3[4] = iVar1;
      FUN_0019f30c(piVar3[5]);
      puVar4 = (undefined4 *)piVar3[1];
      for (puVar2 = (undefined4 *)*piVar3; puVar2 != puVar4; puVar2 = puVar2 + 4) {
        (**(code **)*puVar2)(puVar2);
      }
      FUN_0010fa20(*piVar3,piVar3[2] - *piVar3 >> 4,0);
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar7);
    iVar1 = (int)((longlong)((int)piVar7 - (int)piVar6) * (longlong)DAT_000e3c8c +
                  ((ulonglong)(uint)((int)piVar7 - (int)piVar6) << 0x20) >> 0x20);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * -0x1c;
  }
  iVar5 = *(int *)(param_2 + 8);
  for (iVar1 = *(int *)(param_2 + 4); iVar1 != iVar5; iVar1 = iVar1 + 0x1c) {
    FUN_001ddc20(param_1 + 4,iVar1);
  }
  *param_1 = *param_2;
  return param_1;
}

