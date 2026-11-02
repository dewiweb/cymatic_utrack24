// rea decompile_all
// name: FUN_00036d64
// address: 0x36d64
// body: available
// range: 0x36d64-0x36d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00036d64(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00036d94;
  iVar2 = *(int *)(DAT_00036d94 + 4) + 1;
  *(undefined1 *)(DAT_00036d98 + *(int *)(DAT_00036d94 + 4) * 0x18) = 0;
  *(int *)(iVar1 + 4) = iVar2;
  if (0x3f < iVar2) {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  iVar2 = *(int *)(iVar1 + 8) + 1;
  *(undefined1 *)(DAT_00036d9c + *(int *)(iVar1 + 8) * 0x10) = 0;
  *(int *)(iVar1 + 8) = iVar2;
  if (0x3f < iVar2) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}

