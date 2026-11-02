// rea decompile_all
// name: FUN_0002ce64
// address: 0x2ce64
// body: available
// range: 0x2ce64-0x2ceab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002ce64(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  FUN_0002f9d4(s_Foreign_Data_set___0002ceac);
  FUN_0002f9d4(s_Foreign_master_port_identity__0002cec0);
  FUN_0002f9d4(s_Clock_identity__0002cee4);
  do {
    FUN_0002f9d4(&DAT_0002cef8,*(undefined1 *)(param_1 + iVar1 + 0x1c));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_0002f9d4(s_Port_number___i_0002cefc,
               CONCAT11(*(undefined1 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x25)));
  FUN_0002f9d4(s_Foreign_Master_announce_messages_0002cf10,*(undefined1 *)(param_1 + 0x26));
  FUN_0002f9d4(&DAT_0002cf38);
  return;
}

