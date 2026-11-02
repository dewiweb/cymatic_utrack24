// rea decompile_all
// name: FUN_000f3e30
// address: 0xf3e30
// body: available
// range: 0xf3e30-0xf3f71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000f3e30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = DAT_000f3f78;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = uVar2;
  iVar1 = FUN_0006ef0c(param_1 + 7,2,0,0,0xff);
  iVar1 = FUN_0006ef0c(iVar1 + 0x18,2,1,1,1);
  iVar1 = FUN_0006ef0c(iVar1 + 0x18,2,2,1,0);
  iVar1 = FUN_0006ef0c(iVar1 + 0x18,2,3,1,2);
  iVar1 = FUN_0006ef0c(iVar1 + 0x18,2,4,0,0xff);
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x21) = 2;
  uVar2 = DAT_000f3f7c;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  *(undefined1 *)(iVar1 + 0x23) = 0;
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  *(undefined1 *)(iVar1 + 0x24) = 0xff;
  *(undefined1 *)(iVar1 + 0x25) = 0xff;
  iVar1 = FUN_0007983e(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 2;
  uVar2 = DAT_000f3f80;
  *(undefined1 *)(iVar1 + 0x12) = 1;
  *(undefined1 *)(iVar1 + 0x13) = 0;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 2;
  *(undefined1 *)(iVar1 + 0x1e) = 2;
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  *(undefined1 *)(iVar1 + 0x29) = 2;
  uVar2 = DAT_000f3f84;
  *(undefined1 *)(iVar1 + 0x2a) = 1;
  *(undefined1 *)(iVar1 + 0x2b) = 1;
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  *(undefined1 *)(iVar1 + 0x2c) = 1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  iVar1 = FUN_0007983e(iVar1 + 0x30);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 2;
  *(undefined1 *)(iVar1 + 0x1e) = 2;
  *(undefined1 *)(iVar1 + 0x1f) = 1;
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x21) = 2;
  iVar1 = FUN_0007983e(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x1d) = 2;
  *(undefined1 *)(iVar1 + 0x1e) = 3;
  uVar2 = DAT_000f3f88;
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined1 *)(iVar1 + 0x20) = 4;
  *(undefined1 *)(iVar1 + 0x21) = 3;
  iVar1 = FUN_0007983e(iVar1 + 0x24);
  iVar1 = FUN_0007983e(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 2;
  uVar2 = DAT_000f3f8c;
  *(undefined1 *)(iVar1 + 0x1a) = 4;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  return;
}

