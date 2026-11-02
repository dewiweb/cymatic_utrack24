// rea decompile_all
// name: FUN_0018ec90
// address: 0x18ec90
// body: available
// range: 0x18ec90-0x18ed6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0018ec90(int *param_1,uint param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort local_24 [2];
  
  uVar3 = 0;
  *param_4 = 0;
  if (*(short *)((int)param_1 + 0x3e) != 0) {
    do {
      if ((param_1[0x10] != 0) && (*(ushort *)(param_1[0x10] + uVar3 * 8 + 4) == param_2)) {
        FUN_00171828(param_3,*(undefined4 *)(param_1[0x10] + uVar3 * 8));
LAB_0018ed34:
        uVar1 = FUN_00003e14(uVar3 * 0xffff,*(undefined2 *)((int)param_1 + 0x3e));
        *param_4 = uVar1;
        return 1;
      }
      puVar2 = (undefined4 *)param_1[0x11];
      if ((puVar2 != (undefined4 *)0x0) &&
         ((**(code **)*puVar2)
                    (puVar2,*(int *)(*param_1 + -0x14) + (int)param_1,uVar3,param_3,local_24),
         local_24[0] == param_2)) goto LAB_0018ed34;
      uVar3 = uVar3 + 1 & 0xfffeffff;
    } while (uVar3 < *(ushort *)((int)param_1 + 0x3e));
  }
  return 0;
}

