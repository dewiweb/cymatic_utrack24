// rea decompile_all
// name: FUN_0009ad4c
// address: 0x9ad4c
// body: available
// range: 0x9ad4c-0x9adf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0009ad4c(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = param_1 + param_2 * 0x38;
  piVar4 = *(int **)(iVar5 + 0x26c);
  uVar6 = 0;
  if (piVar4[1] != 0) {
    if (piVar4[1] != 0) {
      puVar3 = (undefined1 *)piVar4[4] + 1;
      *param_3 = *(undefined1 *)piVar4[4];
      if ((undefined1 *)piVar4[3] <= puVar3) {
        puVar3 = (undefined1 *)piVar4[2];
      }
      piVar4[4] = (int)puVar3;
      FUN_00029894(piVar4 + 1);
    }
    uVar6 = 1;
    *(int *)(iVar5 + 0x25c) = *(int *)(iVar5 + 0x25c) + 1;
  }
  if (*(uint *)(iVar5 + 0x244) < *(uint *)(iVar5 + 0x240)) {
    lVar2 = (ulonglong)(uint)(*piVar4 << 2) * (ulonglong)DAT_0009adf8;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x22);
    if ((uint)piVar4[1] < uVar1) {
      FUN_001cf828(*(int *)(param_1 + 500) + 0xc4,uVar1,DAT_0009adf8,(int)lVar2);
    }
  }
  return uVar6;
}

