// rea decompile_all
// name: FUN_000a1d04
// address: 0xa1d04
// body: available
// range: 0xa1d04-0xa1d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a1d04(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  cVar1 = *(char *)(param_1 + 0xa0);
  uVar3 = param_1 + 0x500;
  if (*(short *)(DAT_000a1d88 + param_1) == 2) {
    if (cVar1 == '\0') {
      uVar3 = (uint)*(ushort *)(param_1 + 0x5f0);
    }
    if (cVar1 == '\0' && uVar3 == 1) {
      uVar4 = *(undefined4 *)(DAT_000a1d8c + 8);
      uVar2 = *(undefined4 *)(DAT_000a1d8c + 0xc);
    }
    else {
      uVar4 = *(undefined4 *)(DAT_000a1d8c + 0x10);
      uVar2 = *(undefined4 *)(DAT_000a1d8c + 0x14);
    }
    *(undefined4 *)(param_1 + 0x680) = uVar4;
    *(undefined4 *)(param_1 + 0x684) = uVar2;
    return;
  }
  if ((cVar1 == '\0') && (*(short *)(param_1 + 0x5f0) == 1)) {
    uVar4 = *(undefined4 *)(DAT_000a1d8c + 0x1c);
    *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(DAT_000a1d8c + 0x18);
    *(undefined4 *)(param_1 + 0x684) = uVar4;
    return;
  }
  uVar4 = *(undefined4 *)(DAT_000a1d8c + 0x24);
  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(DAT_000a1d8c + 0x20);
  *(undefined4 *)(param_1 + 0x684) = uVar4;
  return;
}

