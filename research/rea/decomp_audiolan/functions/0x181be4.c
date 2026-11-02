// rea decompile_all
// name: FUN_00181be4
// address: 0x181be4
// body: available
// range: 0x181be4-0x181caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00181be4(uint param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  if ((DAT_00181cb0 <= param_1) && (param_1 < (DAT_00181cb0 - DAT_00181cb4) + DAT_00181cb8)) {
    return 9;
  }
  uVar1 = DAT_00181cbc;
  if (DAT_00181cbc <= param_1) {
    uVar1 = DAT_00181cc0;
  }
  if ((DAT_00181cbc <= param_1 && param_1 <= uVar1) && param_1 != uVar1) {
    return 10;
  }
  uVar1 = DAT_00181cb4;
  if (DAT_00181cb4 <= param_1) {
    uVar1 = DAT_00181cb8;
  }
  if ((DAT_00181cb4 <= param_1 && param_1 <= DAT_00181cb8) && param_1 != uVar1) {
    return 8;
  }
  uVar1 = DAT_00181cc4;
  if (DAT_00181cc4 <= param_1) {
    uVar1 = DAT_00181cc8;
  }
  if ((DAT_00181cc4 > param_1 || uVar1 < param_1) || param_1 == uVar1) {
    uVar1 = DAT_00181ccc;
    if (DAT_00181ccc <= param_1) {
      uVar1 = DAT_00181cd0;
    }
    if ((DAT_00181ccc <= param_1 && param_1 <= uVar1) && param_1 != uVar1) {
      return 4;
    }
    uVar1 = DAT_00181cd4;
    if (DAT_00181cd4 <= param_1) {
      uVar1 = DAT_00181cd8;
    }
    if ((DAT_00181cd4 > param_1 || uVar1 < param_1) || param_1 == uVar1) {
      uVar1 = DAT_00181cdc;
      if (DAT_00181cdc <= param_1) {
        uVar1 = DAT_00181ce0;
      }
      if ((DAT_00181cdc > param_1 || uVar1 < param_1) || param_1 == uVar1) {
        bVar3 = DAT_00181ce4 <= param_1;
        uVar1 = DAT_00181ce4;
        if (bVar3) {
          uVar1 = DAT_00181ce8;
        }
        bVar2 = param_1 == uVar1;
        bVar4 = uVar1 < param_1;
        if ((!bVar3 || bVar4) || bVar2) {
          param_1 = 0xff;
        }
        if ((bVar3 && !bVar4) && !bVar2) {
          param_1 = 0xc;
        }
        return param_1;
      }
      return 1;
    }
    return 6;
  }
  return 2;
}

