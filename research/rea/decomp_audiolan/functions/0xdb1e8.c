// rea decompile_all
// name: FUN_000db1e8
// address: 0xdb1e8
// body: available
// range: 0xdb1e8-0xdb243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000db1e8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_000a3030();
  iVar1 = DAT_000db244;
  iVar4 = DAT_000db244 + 0x1b4;
  iVar3 = DAT_000db244 + 0x1c8;
  piVar2[0x4c] = DAT_000db244 + 0x200;
  piVar2[0x4b] = iVar3;
  piVar2[0x48] = iVar1 + 400;
  piVar2[0x47] = iVar1 + 0x178;
  piVar2[0x46] = iVar1 + 0x15c;
  piVar2[0x45] = iVar1 + 0xfc;
  *piVar2 = iVar1;
  piVar2[0x49] = iVar1 + 0x1a4;
  piVar2[0x4a] = iVar4;
  *(undefined1 *)(piVar2 + 0x174) = 1;
  return;
}

