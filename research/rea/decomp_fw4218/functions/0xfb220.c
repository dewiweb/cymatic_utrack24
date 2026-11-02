// rea decompile_all
// name: FUN_000fb220
// address: 0xfb220
// body: available
// range: 0xfb220-0xfb31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fb220(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = _DAT_000fb31c;
  FUN_00002898(s_NA_Interrupt_Counters__000fb31d + 3);
  puVar2 = DAT_000fb33c;
  FUN_00002898(*DAT_000fb33c,&DAT_000fb338,*(undefined4 *)(iVar1 + 0x4d0));
  FUN_00002898(*puVar2,&DAT_000fb340,*(undefined4 *)(iVar1 + 0x4d4));
  FUN_00002898(*puVar2,&DAT_000fb344,*(undefined4 *)(iVar1 + 0x4d8));
  FUN_00002898(*puVar2,s_rx_overrun_000fb348,*(undefined4 *)(iVar1 + 0x4dc));
  FUN_00002898(*puVar2,s_tx_underrun_000fb354,*(undefined4 *)(iVar1 + 0x4e0));
  FUN_00002898(*puVar2,s_rx_discarded_000fb360,*(undefined4 *)(iVar1 + 0x4e4));
  FUN_00002898(*puVar2,s_tx_discarded_000fb370,*(undefined4 *)(iVar1 + 0x4e8));
  FUN_00002898(*puVar2,s_rx_callback_000fb380,*(undefined4 *)(iVar1 + 0x4ec));
  FUN_00002898(*puVar2,s_rx_stack_000fb38c,*(undefined4 *)(iVar1 + 0x4f0));
  FUN_00002898(*puVar2,s_rx_unused_000fb398,*(undefined4 *)(iVar1 + 0x4f4));
  FUN_00002898(*puVar2,s_rx_drop__no_SOF_000fb3a4,*(undefined4 *)(iVar1 + 0x4f8));
  FUN_00002898(*puVar2,s_rx_drop__no_EOF_000fb3b4,*(undefined4 *)(iVar1 + 0x4fc));
  FUN_00002898(*puVar2,s_rx_drop__no_EOF__fragment_recove_000fb3c4,*(undefined4 *)(iVar1 + 0x500));
  FUN_00002898(*puVar2,s_rx_drop__no_space_in_IP_stack_000fb3e8,*(undefined4 *)(iVar1 + 0x504));
  return 0;
}

