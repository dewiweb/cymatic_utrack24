// rea decompile_all
// name: FUN_00024968
// address: 0x24968
// body: available
// range: 0x24968-0x249ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024968(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
                 undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  
  if ((param_2 == param_1 + DAT_000249f0) && (*(char *)(param_1 + DAT_000249f4 + 0x10) != '\0')) {
    uVar1 = FUN_0002272c(param_1 + DAT_000249fc,*(int *)(param_1 + DAT_000249f8 + 0x10) + 4,
                         param_1 + 0x37);
    FUN_00024642(0,DAT_00024a00,uVar1);
  }
  *(undefined1 *)(param_2 + 4) = 0xf0;
  *(undefined4 *)(param_2 + 0x1c) = param_8;
  *(undefined4 *)(param_2 + 0x28) = param_9;
  *(undefined4 *)(param_2 + 0x20) = param_3;
  *(undefined2 *)(param_2 + 6) = param_5;
  *(undefined2 *)(param_2 + 8) = param_6;
  *(undefined4 *)(param_2 + 0xc) = param_7;
  *(undefined2 *)(param_2 + 0x10) = 0;
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined4 *)(param_2 + 0x14) = param_4;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined2 **)(param_2 + 0x24) = (undefined2 *)(param_2 + 0x50);
  *(undefined2 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0xdc);
  uVar1 = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}

