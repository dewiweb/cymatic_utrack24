// rea decompile_all
// name: FUN_000344e0
// address: 0x344e0
// body: available
// range: 0x344e0-0x34593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000344e0(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = 0;
  FUN_00029e84(s_____Port_data_set_______00034594);
  FUN_00029e84(s_Port_identity__000345b0);
  FUN_00029e84(s_Clock_identity__000345c4);
  do {
    FUN_00029e84(&DAT_000345d8,*(undefined1 *)(param_1 + iVar3));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  FUN_00029e84(s_Port_number___d_000345dc,
               CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)));
  uVar1 = FUN_000278b0(*(undefined1 *)(param_1 + 10));
  FUN_00029e84(s_Port_state___s_000345f0,uVar1);
  FUN_00029e84(s_Log_min_delay_req_interval___i_00034604,(int)*(char *)(param_1 + 0xb));
  local_14 = *(undefined4 *)(param_1 + 0x14);
  local_18 = *(undefined4 *)(param_1 + 0x10);
  FUN_00036588(auStack_28,&local_18);
  FUN_00029e84(s_Peer_mean_path_delay__00034628);
  FUN_0003698c(auStack_28);
  FUN_00029e84(s_Log_announce_interval___i_00034640,(int)*(char *)(param_1 + 0x18));
  FUN_00029e84(s_Announce_receipt_timeout___i_0003465c,*(undefined1 *)(param_1 + 0x1b));
  FUN_00029e84(s_Log_sync_interval___i_0003467c,(int)*(char *)(param_1 + 0x1c));
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puVar2 = &DAT_000346f0;
  }
  else {
    puVar2 = &DAT_00034694;
  }
  FUN_00029e84(s_Delay_mechanismus___s_00034698,puVar2);
  FUN_00029e84(s_Log_min_pdelay_req_interval___i_000346b0,(int)*(char *)(param_1 + 0x1e));
  FUN_00029e84(s_Version_number___i_000346d4,*(undefined1 *)(param_1 + 0x1f));
  FUN_00029e84(&DAT_000346ec);
  return;
}

