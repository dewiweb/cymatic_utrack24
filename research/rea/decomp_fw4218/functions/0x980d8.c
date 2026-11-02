// rea decompile_all
// name: FUN_000980d8
// address: 0x980d8
// body: available
// range: 0x980d8-0x9818b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000980d8(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x2c8) = 0xffffffff;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      iVar3 = param_1 + uVar2 * 8;
      *(undefined2 *)(iVar3 + 0x76) = 0;
      *(short *)(iVar3 + 0x78) = (short)uVar2;
      uVar2 = uVar2 + 1;
      *(short *)(iVar3 + 0x7a) = (short)*(undefined4 *)(param_1 + 0x34);
      *(undefined1 *)(iVar3 + 0x7c) = 0;
      *(undefined1 *)(iVar3 + 0x7d) = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x29d) = param_2;
  *(undefined1 *)(param_1 + 0x286) = 0xff;
  uVar2 = FUN_0000ab20(param_1 + 4);
  *(uint *)(param_1 + 0x278) = (uVar2 & 0x3f) << 8 | *(uint *)(param_1 + 0x278) & 0xffffc0ff;
  *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) & 0xc0ffffff | 0x10000000;
  uVar1 = FUN_0000a390(param_1 + 4);
  *(undefined1 *)(param_1 + 0x282) = uVar1;
  *(undefined1 *)(param_1 + 0x27e) = 0;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined1 *)(param_1 + 0x29c) = 1;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  return;
}

