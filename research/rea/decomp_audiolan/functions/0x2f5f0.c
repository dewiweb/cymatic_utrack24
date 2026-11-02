// rea decompile_all
// name: FUN_0002f5f0
// address: 0x2f5f0
// body: available
// range: 0x2f5f0-0x2f78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002f5f0(int *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  *param_2 = 0xd;
  param_2[1] = 2;
  uVar1 = FUN_0003586c(param_4);
  param_2[2] = (char)uVar1;
  param_2[3] = (char)((ushort)uVar1 >> 8);
  param_2[4] = *(undefined1 *)(*(int *)(*param_1 + 0x274) + 0x13);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0x14] = **(undefined1 **)(*param_1 + 0x280);
  param_2[0x15] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 1);
  param_2[0x16] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 2);
  param_2[0x17] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 3);
  param_2[0x18] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 4);
  param_2[0x19] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 5);
  param_2[0x1a] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 6);
  param_2[0x1b] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 7);
  param_2[0x1c] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 8);
  param_2[0x1d] = *(undefined1 *)(*(int *)(*param_1 + 0x280) + 9);
  uVar1 = FUN_0003586c(param_3);
  param_2[0x1e] = (char)uVar1;
  param_2[0x1f] = (char)((ushort)uVar1 >> 8);
  param_2[0x20] = 4;
  param_2[0x21] = 0x7f;
  return;
}

