// rea decompile_all
// name: FUN_001278b4
// address: 0x1278b4
// body: available
// range: 0xb4c68-0xb4c69 inclusive
// range: 0x1278b4-0x127977 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001278b4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00127978;
  iVar2 = DAT_00127978 + 0x50;
  iVar3 = DAT_00127978 + 0x9c;
  param_1[2] = DAT_00127978 + 0x70;
  param_1[0x32] = iVar3;
  *param_1 = iVar1;
  param_1[1] = iVar2;
  *(undefined1 *)((int)param_1 + 0x1b2) = 1;
  FUN_001e1528(param_1[0x4a]);
  FUN_000b4c44(param_1);
  thunk_EXT_FUN_004001ec(param_1 + 0x6d,DAT_0012797c);
  FUN_001ce98c(param_1 + 0x6d);
  param_1[0x32] = DAT_00127980;
  FUN_001ce98c(param_1 + 0x43);
  param_1[0x32] = DAT_00127984;
  if (param_1[0x3d] != 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    FUN_001cf828(param_1 + 0x35);
    FUN_001eecc8(param_1[0x3d]);
    param_1[0x3d] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x34] = 0;
  }
  FUN_001cf5f8(param_1 + 0x35);
  iVar1 = FUN_0006f888(param_1 + 2);
  iVar1 = FUN_000bac18(iVar1 + -4);
  return iVar1 + -4;
}

