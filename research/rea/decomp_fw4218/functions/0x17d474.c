// rea decompile_all
// name: FUN_0017d474
// address: 0x17d474
// body: available
// range: 0x17d474-0x17d5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0017d474(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  *param_1 = DAT_0017d5bc;
  param_1[8] = 0;
  param_1[9] = 0;
  *(char *)(param_1 + 10) = (char)param_4;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[6] = param_3;
  param_1[7] = param_2;
  param_1[5] = 0;
  if ((((*(char *)(param_1 + 10) != '\x01') && (*(char *)(param_1 + 10) != '\x04')) &&
      (*(char *)(param_1 + 10) != '\b')) && (*(char *)(param_1 + 10) != '\x18')) {
    FUN_00002898(DAT_0017d5c0,param_4);
  }
  if ((param_2 * param_4 & 0x1f) != 0) {
    *(byte *)((int)param_1 + 0x29) = ' ' - ((byte)param_2 & 0x1f);
  }
  if (((uint)*(byte *)((int)param_1 + 0x29) + param_2 & 0x1f) != 0) {
    FUN_00002898(DAT_0017d5c4,param_2,param_4,*(undefined1 *)((int)param_1 + 0x29));
  }
  param_1[9] = param_4 * param_3 * ((uint)*(byte *)((int)param_1 + 0x29) + param_2) >> 3;
  if (param_4 == 0x18) {
    param_1[8] = param_1[9] + 0x36;
  }
  else {
    param_1[0xb] = (1 << (param_4 & 0xff)) << 2;
    param_1[8] = param_1[0xb] + 0x36 + param_1[9];
  }
  if ((param_1[8] & 3) != 0) {
    param_1[8] = param_1[8] + (4 - (param_1[8] & 3));
  }
  return param_1;
}

