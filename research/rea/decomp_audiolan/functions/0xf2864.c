// rea decompile_all
// name: FUN_000f2864
// address: 0xf2864
// body: available
// range: 0xf2864-0xf2977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_000f2864(char *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = s__f__CLPSendBufferMtx_000f2978._0_4_;
  uVar1 = DAT_000f2990;
  *(char **)(param_1 + 0x38) = s__f__CLPSendBufferMtx_000f2978 + 4;
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  FUN_001a07ac(param_1 + 0x14);
  *(char **)(param_1 + 100) = s_CLPSendMtx_000f2994;
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  FUN_001a07ac(param_1 + 0x40);
  uVar1 = DAT_000f29ac;
  *(char **)(param_1 + 0x88) = s_CLPAckEvent_000f29a0;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  FUN_0017a1c4(param_1 + 0x6c,s_CLPAckEvent_000f29a0,0,1);
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  param_1[0xbd0] = '\0';
  param_1[0xbd1] = '\0';
  param_1[0xbd2] = '\0';
  param_1[0xbd3] = '\0';
  param_1[0xbd4] = '\0';
  param_1[0xbd5] = '\0';
  param_1[0xbd6] = '\0';
  param_1[0xbd7] = '\0';
  param_1[0xbd8] = '\0';
  param_1[0xbd9] = '\0';
  param_1[0xbda] = '\0';
  param_1[0xbdb] = '\0';
  param_1[0xbdc] = '\0';
  param_1[0xbdd] = '\0';
  param_1[0xbde] = '\0';
  param_1[0xbdf] = '\0';
  param_1[0xbe0] = '\0';
  param_1[0xbe1] = '\0';
  param_1[0xbe2] = '\0';
  param_1[0xbe3] = '\0';
  param_1[0xbe4] = '\x02';
  param_1[0xbe5] = '\0';
  param_1[0xbe6] = '\0';
  param_1[0xbe7] = '\0';
  param_1[0xbe8] = '\0';
  param_1[0xbec] = '\0';
  param_1[0xbed] = '\0';
  param_1[0xbee] = '\0';
  param_1[0xbef] = '\0';
  param_1[0xbf4] = -0xc;
  param_1[0xbf5] = '\x01';
  param_1[0xbf6] = '\0';
  param_1[0xbf7] = '\0';
  param_1[0xbf0] = '\0';
  param_1[0xbf1] = '\0';
  param_1[0xbf2] = '\0';
  param_1[0xbf3] = '\0';
  param_1[0xbf8] = '\0';
  return param_1;
}

