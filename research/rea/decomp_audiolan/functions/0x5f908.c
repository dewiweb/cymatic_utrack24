// rea decompile_all
// name: FUN_0005f908
// address: 0x5f908
// body: available
// range: 0x5f908-0x5fa57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005f908(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  uint uVar1;
  ushort local_38 [2];
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_38[0] = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_001a0700(param_1 + 0xc);
  *(char *)(param_1 + (uint)local_38[0] + 0x30) = (char)local_30;
  uVar1 = local_38[0] + 1 & 0xfffeffff;
  *(undefined1 *)(uVar1 + param_1 + 0x30) = 0;
  uVar1 = (uVar1 + 1 & 0xfffeffff) + 2 & 0xfffeffff;
  *(char *)(param_1 + uVar1 + 0x30) = (char)local_2c;
  uVar1 = uVar1 + 1 & 0xfffeffff;
  *(char *)(param_1 + uVar1 + 0x30) = (char)uStack_28;
  uVar1 = uVar1 + 1 & 0xfffeffff;
  *(undefined1 *)(param_1 + uVar1 + 0x30) = param_5;
  uVar1 = uVar1 + 1 & 0xfffeffff;
  *(undefined1 *)(param_1 + uVar1 + 0x30) = param_6;
  uVar1 = uVar1 + 1 & 0xfffeffff;
  *(undefined1 *)(param_1 + uVar1 + 0x30) = param_7;
  uVar1 = uVar1 + 1 & 0xfffeffff;
  *(undefined1 *)(param_1 + uVar1 + 0x30) = param_8;
  local_38[0] = 2;
  uVar1 = uVar1 + 1 & 0xfffeffff;
  FUN_000778e8(uVar1 - 4 & 0xffff,param_1 + 0x30,local_38);
  FUN_0005ad9c(param_1,param_1 + 0x30,uVar1);
  FUN_001a0d18(param_1 + 0xc);
  return;
}

