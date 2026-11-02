// rea decompile_all
// name: FUN_001b1230
// address: 0x1b1230
// body: available
// range: 0x1b1230-0x1b1597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b1230(int param_1)

{
  undefined1 auStack_20 [4];
  undefined1 local_1c;
  undefined1 local_10;
  
  FUN_00002898(s_BCD_Header_001b1598);
  FUN_00002898(s____________001b15a4);
  FUN_00003cac(auStack_20,param_1,4);
  local_1c = 0;
  FUN_00002898(s_m_Tag__s__001b15b0,auStack_20);
  FUN_00003cac(auStack_20,param_1 + 8,0x10);
  local_10 = 0;
  FUN_00002898(s_m_swDate_Time__s__001b15bc,auStack_20);
  FUN_00002898(s_m_modelId__08X__001b15d0,*(undefined4 *)(param_1 + 0x18));
  FUN_00002898(s_m_swVersion__d__001b15e4,*(undefined4 *)(param_1 + 0x1c));
  FUN_00002898(s_m_hardwareId__08X__001b15f8,*(undefined4 *)(param_1 + 0x20));
  FUN_00002898(s_m_vendorId__08X__001b160c,*(undefined4 *)(param_1 + 0x24));
  FUN_00002898(s_m_bcdFileVersion__08X__001b1620,*(undefined1 *)(param_1 + 0x28));
  FUN_00002898(s_m_crc32__08X__001b1638,*(undefined4 *)(param_1 + 0x2c));
  FUN_00002898(s_m_image1Offset__08X__001b1648,*(undefined4 *)(param_1 + 0x30));
  FUN_00002898(s_m_image1BaseAddress__08X__001b1660,*(undefined4 *)(param_1 + 0x34));
  FUN_00002898(s_m_image1Length__08X__001b167c,*(undefined4 *)(param_1 + 0x38));
  FUN_00002898(s_m_image1crc32__08X__001b1694,*(undefined4 *)(param_1 + 0x3c));
  FUN_00002898(s_m_image1MaxLength__08X__001b16ac,*(undefined4 *)(param_1 + 0x40));
  FUN_00002898(s_m_image1Reserved_0___08X__001b16c8,*(undefined4 *)(param_1 + 0x44));
  FUN_00002898(s_m_image1Reserved_1___08X__001b16e4,*(undefined4 *)(param_1 + 0x48));
  FUN_00002898(s_m_image1Reserved_2___08X__001b1700,*(undefined4 *)(param_1 + 0x4c));
  FUN_00002898(s_m_cneOffset__08X__001b171c,*(undefined4 *)(param_1 + 0x50));
  FUN_00002898(s_m_reserved2__08X__001b1730,*(undefined4 *)(param_1 + 0x54));
  FUN_00002898(s_m_cneLength__08X__001b1744,*(undefined4 *)(param_1 + 0x58));
  FUN_00002898(s_m_cnecrc32__08X__001b1758,*(undefined4 *)(param_1 + 0x5c));
  FUN_00002898(s_m_cneMaxLength__08X__001b176c,*(undefined4 *)(param_1 + 0x60));
  FUN_00002898(s_m_cneReserved_0___08X__001b1784,*(undefined4 *)(param_1 + 100));
  FUN_00002898(s_m_cneReserved_1___08X__001b179c,*(undefined4 *)(param_1 + 0x68));
  FUN_00002898(s_m_cneReserved_2___08X__001b17b4,*(undefined4 *)(param_1 + 0x6c));
  return;
}

