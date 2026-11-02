// rea decompile_all
// name: FUN_00178cbc
// address: 0x178cbc
// body: available
// range: 0x178cbc-0x178f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00178cbc(undefined4 param_1)

{
  FUN_001a6ea0(param_1,DAT_00178f54);
  FUN_001a6ea8(param_1,0,DAT_00178f58);
  FUN_001a6ea8(param_1,1,DAT_00178f58);
  FUN_001a6ea8(param_1,2,DAT_00178f58);
  FUN_001a6ea8(param_1,3,DAT_00178f58);
  FUN_001a6ec0(param_1,6,DAT_00178f5c);
  FUN_001a6ec0(param_1,0xb,DAT_00178f5c);
  FUN_001a6ec0(param_1,1,DAT_00178f60);
  FUN_001a6ec0(param_1,0x12,DAT_00178f64);
  FUN_001a6ec0(param_1,0x17,DAT_00178f64);
  FUN_001a6ec0(param_1,0xd,DAT_00178f68);
  FUN_001a6ec0(param_1,0x23,DAT_00178f5c);
  FUN_001a6ec0(param_1,0x28,DAT_00178f5c);
  FUN_001a6ec0(param_1,0x20,DAT_00178f60);
  FUN_001a6ec0(param_1,0x34,DAT_00178f64);
  FUN_001a6ec0(param_1,0x39,DAT_00178f64);
  FUN_001a6ec0(param_1,0x31,DAT_00178f68);
  FUN_001a6ed4(param_1,0,DAT_00178f6c);
  FUN_001a6ed4(param_1,1,DAT_00178f6c);
  FUN_001a6ed4(param_1,2,DAT_00178f6c);
  FUN_001a6ed4(param_1,3,DAT_00178f6c);
  FUN_001a6ec0(param_1,0,DAT_00178f70);
  FUN_001a6ec0(param_1,2,DAT_00178f74);
  FUN_001a6ec0(param_1,0x18,DAT_00178f78);
  FUN_001a6ec0(param_1,0x19,DAT_00178f7c);
  FUN_001a6ec0(param_1,0x1c,DAT_00178f80);
  FUN_001a6ec0(param_1,0x1b,DAT_00178f84);
  FUN_001a6ec0(param_1,0x1a,DAT_00178f88);
  FUN_001a6ec0(param_1,0x1e,DAT_00178f8c);
  FUN_001a6ec0(param_1,0x1d,DAT_00178f90);
  FUN_001a6ec0(param_1,0x1f,DAT_00178f94);
  FUN_001a6ec0(param_1,4,DAT_00178f98);
  FUN_001a6ec0(param_1,5,DAT_00178f9c);
  FUN_001a6ec0(param_1,7,DAT_00178fa0);
  FUN_001a6ec0(param_1,8,DAT_00178fa4);
  FUN_001a6ec0(param_1,9,DAT_00178fa8);
  FUN_001a6ec0(param_1,10,DAT_00178fac);
  FUN_001a6ec0(param_1,0x10,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x11,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x13,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x14,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x15,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x16,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x21,DAT_00178f98);
  FUN_001a6ec0(param_1,0x22,DAT_00178f9c);
  FUN_001a6ec0(param_1,0x24,DAT_00178fa0);
  FUN_001a6ec0(param_1,0x25,DAT_00178fa4);
  FUN_001a6ec0(param_1,0x26,DAT_00178fa8);
  FUN_001a6ec0(param_1,0x27,DAT_00178fac);
  FUN_001a6ec0(param_1,0x32,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x33,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x35,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x36,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x37,DAT_00178fb0);
  FUN_001a6ec0(param_1,0x38,DAT_00178fb0);
  FUN_001a6ec0(param_1,0xc,DAT_00178fb4);
  FUN_001a6ec0(param_1,0xe,DAT_00178fb8);
  FUN_001a6ec0(param_1,0xf,DAT_00178fbc);
  FUN_001a6ec0(param_1,0x2d,DAT_00178fc0);
  FUN_001a6ec0(param_1,0x29,DAT_00178fc4);
  FUN_001a6ec0(param_1,0x2a,DAT_00178fc8);
  FUN_001a6ec0(param_1,0x2c,DAT_00178fc8);
  FUN_001a6ec0(param_1,0x2b,DAT_00178fc8);
  FUN_001a6ec0(param_1,0x2f,DAT_00178fc8);
  FUN_001a6ec0(param_1,0x2e,DAT_00178fc8);
  FUN_001a6ec0(param_1,0x30,DAT_00178fc8);
  return 0;
}

