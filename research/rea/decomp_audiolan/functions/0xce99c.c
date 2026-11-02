// rea decompile_all
// name: FUN_000ce99c
// address: 0xce99c
// body: available
// range: 0xce99c-0xcea2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000ce99c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,char *param_5)

{
  int *piVar1;
  undefined4 local_28 [4];
  char local_16;
  undefined1 auStack_14 [4];
  undefined4 local_10;
  
  FUN_000c4d00(local_28,param_1 + 0x14c,param_2,param_3);
  piVar1 = (int *)FUN_0009b63c();
  (**(code **)(*piVar1 + 8))(piVar1,local_28,0xffffffff);
  *param_5 = local_16;
  local_28[0] = DAT_000cea2c;
  if (local_16 != '\0') {
    FUN_001d9b00(auStack_14);
    return 0;
  }
  *param_4 = local_10;
  FUN_001d9b00(auStack_14);
  return 1;
}

