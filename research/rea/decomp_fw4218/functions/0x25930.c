// rea decompile_all
// name: FUN_00025930
// address: 0x25930
// body: available
// range: 0x25930-0x25945 inclusive
// range: 0x25954-0x259b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00025930(int param_1)

{
  if (param_1 == 0x10) {
    return &DAT_000259f0;
  }
  if (param_1 < 0x11) {
    switch(param_1) {
    case 1:
      return &DAT_000259c4;
    case 2:
      return &DAT_000259cc;
    case 5:
      return s_CNAME_000259d0;
    case 6:
      return &DAT_000259d8;
    case 10:
      return &DAT_000259dc;
    case 0xc:
      return &DAT_000259e4;
    case 0xd:
      return s_HINFO_000259e8;
    }
  }
  else {
    if (param_1 == 0x2f) {
      return &DAT_00025a04;
    }
    if (param_1 < 0x30) {
      if (param_1 == 0x1c) {
        return &DAT_000259f4;
      }
      if (param_1 == 0x21) {
        return &DAT_000259fc;
      }
      if (param_1 == 0x29) {
        return &DAT_00025a00;
      }
    }
    else {
      if (param_1 == 0xfa) {
        return &DAT_00025a0c;
      }
      if (param_1 == 0xff) {
        return &DAT_00025a14;
      }
    }
  }
  FUN_001eaf9c(DAT_000259c0,0x10,&DAT_000259b8,param_1);
  return DAT_000259c0;
}

