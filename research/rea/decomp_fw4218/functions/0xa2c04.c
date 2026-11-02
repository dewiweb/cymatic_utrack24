// rea decompile_all
// name: FUN_000a2c04
// address: 0xa2c04
// body: available
// range: 0xa2c04-0xa2d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a2c04(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  bool bVar5;
  
  FUN_0012c4ac(param_1 + 0x814,0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x5ec));
  (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),param_1 + 0x814,0);
  bVar1 = *(byte *)(param_1 + 0x5e4);
  FUN_00003b88(param_1 + 0x5e8,param_1 + (uint)bVar1 * 0x54 + 0xa4,0x52);
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  uVar3 = bVar1 + 1;
  uVar2 = (undefined1)uVar3;
  if (0xf < (uVar3 & 0xff)) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x5e4) = uVar2;
  if (-1 < *(int *)(param_1 + 0x634)) {
    FUN_0005f140(param_1);
  }
  FUN_0005f0c0(param_1,4,*(undefined4 *)(param_1 + 0x674),*(undefined4 *)(param_1 + 0x5e8),0,0);
  uVar4 = FUN_00006604(*(undefined4 *)(param_1 + 0x61c),*(undefined2 *)(DAT_000a2d04 + param_1));
  *(undefined4 *)(param_1 + 0x670) = uVar4;
  *(int *)(param_1 + 0x674) = *(int *)(param_1 + 0x628);
  bVar5 = *(int *)(param_1 + 0x10) == 0;
  if (bVar5) {
    *(undefined4 *)(param_1 + 0x66c) = 0;
  }
  if (!bVar5 && *(int *)(param_1 + 0x628) != 0) {
    FUN_00006604();
    *(undefined4 *)(param_1 + 0x66c) = extraout_r1;
  }
  return 1;
}

