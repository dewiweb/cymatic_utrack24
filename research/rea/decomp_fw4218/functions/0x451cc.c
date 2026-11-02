// rea decompile_all
// name: FUN_000451cc
// address: 0x451cc
// body: available
// range: 0x451cc-0x452fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452f8 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000451cc(void)

{
  int iVar1;
  
  iVar1 = FUN_000c63b8();
  FUN_00002898(s_USB_bus_driver_statistics__000452fc);
  FUN_00002898(s____________________________00045318);
  FUN_00002898(s_UsbIsr__9u_00045338,*(undefined4 *)(iVar1 + 0x47c));
  FUN_00002898(s_BusResets__9u_0004534c,*(undefined4 *)(iVar1 + 0x478));
  FUN_00002898(s_SetupEnd__9u_00045360,*(undefined4 *)(iVar1 + 0x46c));
  FUN_00002898(s_BlockAllocErr__9u_00045374,*(undefined4 *)(iVar1 + 0x470));
  FUN_00002898(s_Babbles__9u_00045388,*(undefined4 *)(iVar1 + 0x474));
  FUN_00002898(s_Record___9s_Playback__0004539c,s____________________________00045318 + 0x1c);
  FUN_00002898(s_TxDmaCtx__9u_RxDmaCtx__9u_000453c4,*(undefined4 *)(iVar1 + 0x428),
               *(undefined4 *)(iVar1 + 0x458));
  FUN_00002898(s_TxPackets__9u_RxPackets__9u_000453fc,*(undefined4 *)(iVar1 + 0x424),
               *(undefined4 *)(iVar1 + 0x454));
  FUN_00002898(s_TxDmaComplete__9u_RxDmaComplete___00045434,*(undefined4 *)(iVar1 + 0x42c),
               *(undefined4 *)(iVar1 + 0x45c));
  FUN_00002898(s_TxDmaError__9u_RxDmaError__9u_0004546c,*(undefined4 *)(iVar1 + 0x430),
               *(undefined4 *)(iVar1 + 0x460));
  FUN_00002898(s_TxBusError__9u_RxBusError__9u_000454a4,*(undefined4 *)(iVar1 + 0x434),
               *(undefined4 *)(iVar1 + 0x464));
  FUN_00002898(s_TxIrqErrIncomplete__9u_RxIsoCrcE_000454dc,*(undefined4 *)(iVar1 + 0x438),
               *(undefined4 *)(iVar1 + 0x468));
  if (*(int *)(iVar1 + 0x43c) != 0) {
    thunk_FUN_00002898(s_TxIrqErrSentStall__9u_00045514);
  }
  if (*(int *)(iVar1 + 0x440) != 0) {
    thunk_FUN_00002898(s_TxIrqErrFifoUnderRun__9u_00045530);
  }
  if (*(int *)(iVar1 + 0x444) != 0) {
    thunk_FUN_00002898(s_TxPktRdyErr__9u_0004554c);
  }
  if (*(int *)(iVar1 + 0x448) != 0) {
    thunk_FUN_00002898(s_TxTimeOut__9u_00045568);
  }
  if (*(int *)(iVar1 + 0x44c) != 0) {
    thunk_FUN_00002898(s_TxBusMsgErr__9u_00045584);
  }
  if (*(int *)(iVar1 + 0x450) != 0) {
    thunk_FUN_00002898(s_VBusError__9u_000455a0);
    return;
  }
  return;
}

