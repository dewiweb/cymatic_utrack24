// rea decompile_all
// name: FUN_001ada5c
// address: 0x1ada5c
// body: available
// range: 0x1ada5c-0x1adc3f inclusive
// range: 0x1adff8-0x1ae037 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1adb14 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1ae034 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ada5c(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar2 = DAT_001adc44;
  puVar1 = DAT_001adc40;
  puVar4 = DAT_001adc40 + 0x200;
  puVar3 = (uint *)((int)puVar4 - ((int)DAT_001adc40 >> 0x1b));
  if (param_1 == 0) {
    FUN_000028a4(s_AvPtu_registers__001adcec);
    FUN_000028a4(s__________________001add00);
    FUN_000028a4(s_0x_08x__avPtuCtrl0___0x_08x_001add14,puVar1,*puVar1);
    FUN_000028a4(s_0x_08x__avPtuCtrl1___0x_08x_001add40,DAT_001add3c,puVar1[1]);
    FUN_000028a4(s_0x_08x__avPtuCtrl2___0x_08x_001add6c,DAT_001add68,puVar1[2]);
    FUN_000028a4(s_0x_08x__fifoLuTable_0____0x_08x_001add98,DAT_001add94,puVar1[4]);
    FUN_000028a4(s_0x_08x__fifoLuTable_2____0x_08x_001addc4,DAT_001addc0,puVar1[6]);
    FUN_000028a4(s_0x_08x__fifoLuTable_3____0x_08x_001addf0,DAT_001addec,puVar1[7]);
    FUN_000028a4(s_0x_08x__fifoLuTable_4____0x_08x_001ade1c,DAT_001ade18,puVar1[8]);
    FUN_000028a4(s_0x_08x__ptuFifoEmpty___0x_08x_001ade44,puVar4,*puVar4);
    FUN_000028a4(s_0x_08x__ptuFifoFull___0x_08x_001ade6c,puVar3,*puVar3);
    FUN_000028a4(s_0x_08x__ptuFillLevel_0____0x_08x_001ade98,DAT_001ade94,*DAT_001ade94);
    FUN_000028a4(s_0x_08x__ptuFillLevel_2____0x_08x_001adec4,DAT_001adec0,*DAT_001adec0);
    FUN_000028a4(s_0x_08x__ptuFillLevel_3____0x_08x_001adef0,DAT_001adeec,*DAT_001adeec);
    FUN_000028a4(s_0x_08x__ptuFillLevel_4____0x_08x_001adf1c,DAT_001adf18,*DAT_001adf18);
    FUN_000028a4(s_0x_08x__ptuAvBndEmptyIntSet___0x_001adf48,DAT_001adf44,*DAT_001adf44);
    FUN_000028a4(s_0x_08x__ptuAvBndEmptyIntClr___0x_001adf74,DAT_001adf70,*DAT_001adf70);
    FUN_000028a4(s_0x_08x__ptuBusBndFullIntSet___0x_001adfa0,DAT_001adf9c,*DAT_001adf9c);
    FUN_000028a4(s_0x_08x__ptuBusBndFullIntClr___0x_001adfcc,DAT_001adfc8,*DAT_001adfc8);
    FUN_000028a4(s_0x_08x__ptuDMAAbortIntSet___0x_0_001ae038,DAT_001adff4,*DAT_001adff4);
    FUN_000028a4(s_0x_08x__ptuDMAAbortIntClr___0x_0_001ae060,puVar2,*puVar2);
    FUN_000028a4(s_0x_08x__ptuVersion___0x_08x_001ae08c,DAT_001ae088,*DAT_001ae088);
    thunk_FUN_000028a4(s_0x_08x__ptuReset___0x_08x_001ae0b8,DAT_001ae0b4,*DAT_001ae0b4);
    return;
  }
  if (((((~*puVar4 & 0xf) == 0) && ((*puVar4 & 0xfff) >> 8 == 0xf)) &&
      ((*puVar4 & 0xffff) >> 0xc == 0xf)) && ((*puVar4 & 0xfffff) >> 0x10 == 0xf)) {
    FUN_000028a4(s_Error__All_AV_ports_are_empty__p_001adc48,*puVar4);
  }
  if ((((*puVar3 & 0xf) != 0) || ((*puVar3 & 0xf00) != 0)) ||
     (((*puVar3 & 0xf000) != 0 || ((*puVar3 & 0xf0000) != 0)))) {
    FUN_000028a4(s_Error__At_least_one_AV_ports_is_f_001adc80,*puVar3);
  }
  if ((*puVar2 & 1) == 0) {
    return;
  }
  thunk_FUN_000028a4(s_Error__DMA_transfer_on_AV_port_P_001adcc0);
  return;
}

