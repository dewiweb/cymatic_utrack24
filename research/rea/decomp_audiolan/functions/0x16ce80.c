// rea decompile_all
// name: FUN_0016ce80
// address: 0x16ce80
// body: available
// range: 0x16ce80-0x16cf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016ce80(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort local_2c [4];
  
  param_1 = (int *)(*(int *)(*param_1 + -0x40) + (int)param_1);
  uVar3 = 0;
  uVar2 = 0;
  if (*(short *)((int)param_1 + 0x3e) != 0) {
    do {
      if ((param_1[0x10] != 0) && (*(ushort *)(param_1[0x10] + uVar2 * 8 + 4) == param_2)) {
        FUN_0010e240(param_3,*(undefined4 *)(param_1[0x10] + uVar2 * 8));
LAB_0016cf30:
        FUN_00003a1c(uVar2 * 0xffff,*(undefined2 *)((int)param_1 + 0x3e));
        return 1;
      }
      puVar1 = (undefined4 *)param_1[0x11];
      if ((puVar1 != (undefined4 *)0x0) &&
         ((**(code **)*puVar1)
                    (puVar1,*(int *)(*param_1 + -0x14) + (int)param_1,uVar2,param_3,local_2c,param_3
                     ,uVar3), local_2c[0] == param_2)) goto LAB_0016cf30;
      uVar2 = uVar2 + 1 & 0xfffeffff;
    } while (uVar2 < *(ushort *)((int)param_1 + 0x3e));
  }
  return 0;
}

