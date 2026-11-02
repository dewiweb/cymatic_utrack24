// rea decompile_all
// name: FUN_001375f8
// address: 0x1375f8
// body: available
// range: 0x1375f8-0x13770b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_001375f8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  uint local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_0012be48(param_1);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else if ((*(char *)(param_1 + 9) == '\0') ||
          (iVar1 = FUN_000466b0(s__cfg_AppSettings_CopperLan_Midi_0013770c,&local_14), iVar1 == 0))
  {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_00049674(local_14,s_ControlEnabled_0013772c,param_1 + 0x11);
    bVar2 = iVar1 != 0;
    if (!bVar2) {
      FUN_00002898(s_ERROR__CpMidiConfigurationCustom_0013773c,s_ControlEnabled_0013772c);
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      iVar1 = FUN_00048bd4(local_14,s_ControlName_00137774,param_1 + 0xc);
      if (iVar1 == 0) {
        FUN_00002898(s_ERROR__CpMidiConfigurationCustom_0013773c,s_ControlName_00137774);
        FUN_002329fc(param_1 + 0xc,s_MIDI_Control_00137780);
      }
      iVar1 = FUN_0004febc(local_14,s_ControlMode_00137790,&local_18);
      if ((iVar1 == 0) || (1 < local_18)) {
        FUN_00002898(s_ERROR__CpMidiConfigurationCustom_0013773c,s_ControlMode_00137790);
        *(undefined1 *)(param_1 + 0x10) = 0;
        bVar2 = false;
      }
      else {
        *(char *)(param_1 + 0x10) = (char)local_18;
      }
    }
    FUN_00046b8c(local_14);
  }
  return bVar2;
}

