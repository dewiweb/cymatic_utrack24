// rea decompile_all
// name: FUN_0008dc38
// address: 0x8dc38
// body: available
// range: 0x8dc38-0x8dca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008dc38(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      iVar2 = param_1 + uVar1 * 10;
      *(undefined2 *)(iVar2 + 0x6a) = 0;
      *(short *)(iVar2 + 0x6c) = (short)uVar1;
      *(ushort *)(iVar2 + 0x6e) =
           (ushort)(*(int *)(param_1 + 0x38) != 0) + (short)*(undefined4 *)(param_1 + 0x30);
      *(undefined2 *)(iVar2 + 0x70) = 0x40;
      *(undefined1 *)(iVar2 + 0x73) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x30));
  }
  return 1;
}

