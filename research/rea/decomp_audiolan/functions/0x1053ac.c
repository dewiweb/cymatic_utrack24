// rea decompile_all
// name: FUN_001053ac
// address: 0x1053ac
// body: available
// range: 0x1053ac-0x10548b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001053ac(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = DAT_0010548c;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  uVar1 = DAT_001054a4;
  param_1[0x11] = s_BaseMsgLnkVNMMtx_00105490;
  param_1[8] = 0;
  param_1[7] = uVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_001a07ac(param_1 + 8);
  param_1[0x1c] = s_LnkFCMtx_001054a8;
  param_1[0x13] = 0;
  param_1[0x12] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_001a07ac(param_1 + 0x13);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  iVar2 = FUN_0010e7e0(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x21) = 0;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  return iVar2 + -0x90;
}

