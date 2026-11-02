// rea decompile_all
// name: FUN_000f7c00
// address: 0xf7c00
// body: available
// range: 0xf7c00-0xf7c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000f7c00(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_000f2b8c(param_1,DAT_000f7c44);
  iVar2 = DAT_000f7c48 + 0x1c;
  *piVar1 = DAT_000f7c48;
  piVar1[1] = iVar2;
  *(undefined1 *)(piVar1 + 9) = 1;
  *(undefined1 *)((int)piVar1 + 0x25) = 0;
  *(undefined1 *)((int)piVar1 + 0x26) = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  *(undefined2 *)(piVar1 + 0xc) = 0;
  *(undefined1 *)((int)piVar1 + 0x32) = 0;
  piVar1[0xd] = 0;
  return;
}

