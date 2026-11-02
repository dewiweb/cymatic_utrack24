// rea decompile_all
// name: FUN_000e3004
// address: 0xe3004
// body: available
// range: 0xe3004-0xe307b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e3004(int param_1)

{
  int iVar1;
  
  FUN_000028a4(s_Deframer_Statistics__000e307c);
  FUN_000028a4(s_DBS___d_000e3094,*(undefined4 *)(param_1 + 0x40));
  FUN_000028a4(s_SYT_interval___d_000e30ac,*(undefined4 *)(param_1 + 0x44));
  FUN_000028a4(s_Number_of_routes___d_000e30c4,*(undefined4 *)(param_1 + 0x48));
  FUN_000028a4(s_AHB_Sync_quadlet_000e30e0);
  FUN_000028a4(s_DestIdx_Header_000e30f4);
  FUN_000028a4(s_____________________000e3108);
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      return;
    }
    FUN_000028a4(&DAT_000e3120,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

