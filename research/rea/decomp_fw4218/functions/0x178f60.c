// rea decompile_all
// name: FUN_00178f60
// address: 0x178f60
// body: available
// range: 0x178f60-0x1790cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00178f60(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    local_18 = param_3;
    local_14 = param_4;
    iVar1 = FUN_001ffb40(param_1 + 0x5a,s_sds___cne_AppSettings_Global_Ena_001790cc);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__HWCom__midiInit__no_Shell_001790f4);
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    iVar1 = FUN_001db900(DAT_00179120,&local_18);
    if (iVar1 == 0) {
      if (((((local_18 & 0xff) == 0) && ((local_18 & 0xffff) >> 8 == 7)) &&
          ((local_18 & 0xffffff) >> 0x10 == 0xf5)) &&
         (((local_18 >> 0x18 == 0xff && ((local_14 & 0xff) == 0xff)) &&
          ((local_14 & 0xffff) >> 8 == 0xff)))) {
        FUN_00002898(DAT_00179124);
        *(undefined1 *)(param_1 + 0x5a) = 0;
      }
    }
    else {
      FUN_00002898(DAT_00179128);
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    if (*(char *)(param_1 + 0x5a) != '\0') {
      uVar2 = FUN_001dbf3c();
      iVar1 = FUN_00003d18(uVar2,s_uart1_0017912c);
      if (iVar1 == 0) {
        FUN_00013244(s_HWCom__midiInit__Shell_disabled_t_00179134);
        FUN_001f4728(s_ERROR__HWCom__midiInit__no_Shell_001790f4 + 0x28);
        FUN_001f47c8(s_ERROR__HWCom__midiInit__no_Shell_001790f4 + 0x28);
        FUN_001f466c(s_ERROR__HWCom__midiInit__no_Shell_001790f4 + 0x28);
        FUN_001f458c(s_ERROR__HWCom__midiInit__no_Shell_001790f4 + 0x28);
      }
      iVar1 = FUN_001779b8(param_1,param_1 + 0x60,s_uart1_0017912c);
      if (iVar1 == 0) {
        FUN_00002898(s_ERROR__HWCom__midiInit__couldn_t_00179164);
        return 0;
      }
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return *(undefined1 *)(param_1 + 0x58);
}

