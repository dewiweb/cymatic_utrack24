// rea decompile_all
// name: FUN_00040698
// address: 0x40698
// body: available
// range: 0x40698-0x407c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407c4 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00040698(void)

{
  int iVar1;
  
  iVar1 = FUN_000984ec();
  FUN_000028a4(s_USB_bus_driver_statistics__000407c8);
  FUN_000028a4(s____________________________000407e4);
  FUN_000028a4(s_UsbIsr__9u_00040804,*(undefined4 *)(iVar1 + 0x47c));
  FUN_000028a4(s_BusResets__9u_00040818,*(undefined4 *)(iVar1 + 0x478));
  FUN_000028a4(s_SetupEnd__9u_0004082c,*(undefined4 *)(iVar1 + 0x46c));
  FUN_000028a4(s_BlockAllocErr__9u_00040840,*(undefined4 *)(iVar1 + 0x470));
  FUN_000028a4(s_Babbles__9u_00040854,*(undefined4 *)(iVar1 + 0x474));
  FUN_000028a4(s_Record___9s_Playback__00040868,s____________________________000407e4 + 0x1c);
  FUN_000028a4(s_TxDmaCtx__9u_RxDmaCtx__9u_00040890,*(undefined4 *)(iVar1 + 0x428),
               *(undefined4 *)(iVar1 + 0x458));
  FUN_000028a4(s_TxPackets__9u_RxPackets__9u_000408c8,*(undefined4 *)(iVar1 + 0x424),
               *(undefined4 *)(iVar1 + 0x454));
  FUN_000028a4(s_TxDmaComplete__9u_RxDmaComplete___00040900,*(undefined4 *)(iVar1 + 0x42c),
               *(undefined4 *)(iVar1 + 0x45c));
  FUN_000028a4(s_TxDmaError__9u_RxDmaError__9u_00040938,*(undefined4 *)(iVar1 + 0x430),
               *(undefined4 *)(iVar1 + 0x460));
  FUN_000028a4(s_TxBusError__9u_RxBusError__9u_00040970,*(undefined4 *)(iVar1 + 0x434),
               *(undefined4 *)(iVar1 + 0x464));
  FUN_000028a4(s_TxIrqErrIncomplete__9u_RxIsoCrcE_000409a8,*(undefined4 *)(iVar1 + 0x438),
               *(undefined4 *)(iVar1 + 0x468));
  if (*(int *)(iVar1 + 0x43c) != 0) {
    thunk_FUN_000028a4(s_TxIrqErrSentStall__9u_000409e0);
  }
  if (*(int *)(iVar1 + 0x440) != 0) {
    thunk_FUN_000028a4(s_TxIrqErrFifoUnderRun__9u_000409fc);
  }
  if (*(int *)(iVar1 + 0x444) != 0) {
    thunk_FUN_000028a4(s_TxPktRdyErr__9u_00040a18);
  }
  if (*(int *)(iVar1 + 0x448) != 0) {
    thunk_FUN_000028a4(s_TxTimeOut__9u_00040a34);
  }
  if (*(int *)(iVar1 + 0x44c) != 0) {
    thunk_FUN_000028a4(s_TxBusMsgErr__9u_00040a50);
  }
  if (*(int *)(iVar1 + 0x450) != 0) {
    thunk_FUN_000028a4(s_VBusError__9u_00040a6c);
    return;
  }
  return;
}

