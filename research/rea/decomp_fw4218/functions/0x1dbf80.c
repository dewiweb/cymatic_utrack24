// rea decompile_all
// name: FUN_001dbf80
// address: 0x1dbf80
// body: available
// range: 0x1dbf80-0x1dc07f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001dbf80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00003d18(param_1,&DAT_001dc080);
  if ((iVar1 == 0) || (iVar1 = FUN_00003d18(param_1,s_spiSlave_001dc088), iVar1 == 0)) {
    iVar1 = FUN_001dc0f0(s__cfg_HAL_SPI0_001dc094,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_00003b88(param_2,DAT_001dc0a4,0x14);
      uVar2 = 0;
    }
  }
  else {
    iVar1 = FUN_00003d18(param_1,&DAT_001dc0a8);
    if (iVar1 == 0) {
      iVar1 = FUN_001dc0f0(s__cfg_HAL_SPI1_001dc0b0,param_2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_00003d18(param_1,&DAT_001dc0c0);
      if (iVar1 == 0) {
        iVar1 = FUN_001dc0f0(s__cfg_HAL_SPI2_001dc0c8,param_2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_00003d18(param_1,&DAT_001dc0d8);
        if ((iVar1 == 0) && (iVar1 = FUN_001dc0f0(s__cfg_HAL_SPI3_001dc0e0,param_2), iVar1 == 0)) {
          return 0;
        }
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

