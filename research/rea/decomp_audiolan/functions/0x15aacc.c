// rea decompile_all
// name: FUN_0015aacc
// address: 0x15aacc
// body: available
// range: 0x15aacc-0x15abeb inclusive
// range: 0x15af9c-0x15afd3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015aacc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_000028a4(s_s_pTGenRegs___0x_08x_0015abf0,DAT_0015abec);
  FUN_000028a4(s_s_iNoOfPLLs____d_0015ac24,2);
  FUN_000028a4(s_m_pTgenAvDevice___0x_08x_0015ac54,*(undefined4 *)(param_1 + 4));
  FUN_000028a4(s_m_fStateChangeHandler___0x_08x_0015ac88,*(undefined4 *)(param_1 + 8));
  FUN_000028a4(s_m_iStateChangeHandlerParam___0x__0015acbc,*(undefined4 *)(param_1 + 0xc));
  FUN_000028a4(s_m_fNewStateChangeHandler___0x_08_0015acf0,*(undefined4 *)(param_1 + 0x10));
  FUN_000028a4(s_m_iNewStateChangeHandlerParam___0_0015ad24,*(undefined4 *)(param_1 + 0x14));
  FUN_000028a4(s_m_iMaxPercentDeviationForGoingIn_0015ad58,*(undefined1 *)(param_1 + 0x18));
  FUN_000028a4(s_m_iMinPercentDeviationForGoingOu_0015ad88,*(undefined1 *)(param_1 + 0x19));
  FUN_000028a4(s_m_bPLLStateHasChanged____d_0015adb8,*(undefined1 *)(param_1 + 0x22));
  FUN_000028a4(s_m_bStarted____d_0015ade8,*(undefined1 *)(param_1 + 0x23));
  FUN_000028a4(s_m_bUpdateStateChangeHandler____d_0015ae18,*(undefined1 *)(param_1 + 0x24));
  FUN_000028a4(s_m_cpAudioHWService___0x_08x_0015ae48,param_1 + 0x38);
  FUN_000028a4(s_m_iNextTimerValue____d_0015ae7c,*(undefined4 *)(param_1 + 0x44));
  iVar1 = 0;
  do {
    iVar3 = param_1 + iVar1;
    FUN_000028a4(s_m_bPLLLocked__i_____d_0015aeac,iVar1,*(undefined1 *)(iVar3 + 0x1a));
    FUN_000028a4(s_m_bPLLStateChange__i_____d_0015aedc,iVar1,*(undefined1 *)(iVar3 + 0x1c));
    FUN_000028a4(s_m_bPLLOutOfLockEvent__i_____d_0015af0c,iVar1,*(undefined1 *)(iVar3 + 0x1e));
    iVar3 = param_1 + iVar1 * 4;
    FUN_000028a4(s_m_iPLLInLockCount__i_____d_0015af3c,iVar1,*(undefined4 *)(iVar3 + 0x28));
    FUN_000028a4(s_m_iUnlockCounter__i_____d_0015af6c,iVar1,*(undefined4 *)(iVar3 + 0x30));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x4c) == puVar2) {
    return;
  }
  do {
    FUN_000028a4(s_m_PLLObservers__d____0x_08x_0015afd4,iVar1,*puVar2);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (*(undefined4 **)(param_1 + 0x4c) != puVar2);
  return;
}

