// rea decompile_all
// name: FUN_000cf90c
// address: 0xcf90c
// body: available
// range: 0x7687c-0x768d3 inclusive
// range: 0xb4c60-0xb4c67 inclusive
// range: 0xcf90c-0xcf98b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000cf90c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = DAT_000cf98c;
  *(undefined4 *)(param_1[1] + 4) = 1;
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x3c) = 1;
    FUN_001cf828(iVar2 + 0xc);
  }
  FUN_000767e8(param_1);
  FUN_000b4c44(param_1);
  piVar1 = DAT_000cf990;
  DAT_000cf990[param_1[10] + 1] = 0;
  iVar2 = *piVar1 + -1;
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    FUN_001f0770(DAT_000cf994);
  }
  FUN_001ce98c(param_1 + 0xe);
  *param_1 = DAT_000768d4;
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if (param_1[2] != 0) {
    FUN_001eecc8();
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return param_1;
}

