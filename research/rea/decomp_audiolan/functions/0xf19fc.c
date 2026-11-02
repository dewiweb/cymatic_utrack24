// rea decompile_all
// name: FUN_000f19fc
// address: 0xf19fc
// body: available
// range: 0xf19fc-0xf1a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f19fc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined4 param_13,undefined1 param_14)

{
  int iVar1;
  int iVar2;
  
  param_1[2] = 0;
  iVar1 = DAT_000f1a74;
  iVar2 = DAT_000f1a70;
  param_1[3] = 0;
  param_1[4] = iVar2;
  *param_1 = iVar1;
  param_1[1] = iVar1 + 0x1c;
  iVar2 = FUN_0010f5fc(param_1 + 6);
  iVar2 = FUN_0010f5fc(iVar2 + 0xc,param_3);
  iVar2 = FUN_0010f5fc(iVar2 + 0xc,param_4);
  *(undefined4 *)(iVar2 + 0xc) = param_5;
  *(undefined4 *)(iVar2 + 0x10) = param_6;
  *(undefined4 *)(iVar2 + 0x14) = param_7;
  *(undefined4 *)(iVar2 + 0x18) = param_8;
  *(undefined4 *)(iVar2 + 0x1c) = param_9;
  *(undefined4 *)(iVar2 + 0x20) = param_10;
  *(undefined4 *)(iVar2 + 0x24) = param_11;
  *(undefined4 *)(iVar2 + 0x28) = param_12;
  iVar2 = FUN_0010e770(iVar2 + 0x2c,param_13);
  *(undefined1 *)(iVar2 + 8) = param_14;
  return iVar2 + -0x5c;
}

