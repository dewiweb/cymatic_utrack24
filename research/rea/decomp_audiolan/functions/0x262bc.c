// rea decompile_all
// name: FUN_000262bc
// address: 0x262bc
// body: available
// range: 0x262bc-0x26311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000262bc(undefined2 *param_1)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00029e84(s_____Current_Data_set_______00026314);
  FUN_00029e84(s_Steps_removed___d_00026330,*param_1);
  local_c = *(undefined4 *)(param_1 + 6);
  local_10 = *(undefined4 *)(param_1 + 4);
  FUN_00036588(auStack_20,&local_10);
  FUN_00029e84(s_Offset_from_master__00026344);
  FUN_0003698c(auStack_20);
  local_c = *(undefined4 *)(param_1 + 10);
  local_10 = *(undefined4 *)(param_1 + 8);
  FUN_00036588(auStack_20,&local_10);
  FUN_00029e84(s_Mean_path_delay__0002635c);
  FUN_0003698c(auStack_20);
  FUN_00029e84(&DAT_00026370);
  return;
}

