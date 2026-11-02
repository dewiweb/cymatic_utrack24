// rea decompile_all
// name: FUN_00154ee0
// address: 0x154ee0
// body: available
// range: 0x154ee0-0x154f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00154ee0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = DAT_00154f8c;
  FUN_001f00bc(param_1 + 5);
  if (*(char *)((int)param_1 + 0xbe5) != '\0') {
    *(undefined1 *)((int)param_1 + 0xbe5) = 0;
    if (*(char *)((int)param_1 + 0xbe6) != '\0') {
      FUN_001f06d4(param_1 + 5);
      (**(code **)(param_1[0x2f4] + 0x28))(param_1[0x2f6],0);
      FUN_001f00bc(param_1 + 5);
    }
  }
  if (param_1[0x2f7] != 0) {
    FUN_001c6a78();
    param_1[0x2f7] = 0;
  }
  FUN_001f06d4(param_1 + 5);
  param_1[0x1a] = DAT_00154f90;
  FUN_001ce98c(param_1 + 0x1b);
  uVar1 = DAT_00154f94;
  param_1[0xf] = DAT_00154f94;
  FUN_001f01ac(param_1 + 0x10);
  param_1[4] = uVar1;
  FUN_001f01ac(param_1 + 5);
  return param_1;
}

