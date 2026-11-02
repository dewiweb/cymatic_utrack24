// rea decompile_all
// name: FUN_00135aec
// address: 0x135aec
// body: available
// range: 0x135aec-0x135c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00135aec(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = DAT_00135c14;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = uVar1;
  iVar2 = FUN_0006ef0c(param_1 + 7,1,0,0,0xff);
  iVar2 = FUN_0006ef0c(iVar2 + 0x18,1,1,1,1);
  iVar2 = FUN_0006ef0c(iVar2 + 0x18,1,2,1,0);
  iVar2 = FUN_0006ef0c(iVar2 + 0x18,1,3,1,2);
  iVar2 = FUN_0006ef0c(iVar2 + 0x18,1,4,0,0xff);
  *(undefined4 *)(iVar2 + 0x1c) = param_2;
  *(undefined1 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x21) = 1;
  uVar1 = DAT_00135c18;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  *(undefined1 *)(iVar2 + 0x23) = 0;
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x25) = 5;
  iVar2 = FUN_0007983e(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0x11) = 1;
  uVar1 = DAT_00135c1c;
  *(undefined1 *)(iVar2 + 0x12) = 1;
  *(undefined1 *)(iVar2 + 0x13) = 0;
  *(undefined4 *)(iVar2 + 8) = uVar1;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x1d) = 1;
  *(undefined1 *)(iVar2 + 0x1e) = 2;
  *(undefined1 *)(iVar2 + 0x1f) = 0;
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  iVar2 = FUN_00147a3c(iVar2 + 0x20,param_2,1,1,1,1,0x22,1);
  iVar2 = FUN_00147a3c(iVar2 + 0x28,param_2,1,2,2,0,4,0);
  *(undefined4 *)(iVar2 + 0x2c) = param_2;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x31) = 1;
  *(undefined1 *)(iVar2 + 0x32) = 3;
  uVar1 = DAT_00135c20;
  *(undefined1 *)(iVar2 + 0x33) = 0;
  *(undefined4 *)(iVar2 + 0x28) = uVar1;
  *(undefined1 *)(iVar2 + 0x34) = 4;
  *(undefined1 *)(iVar2 + 0x35) = 3;
  iVar2 = FUN_0007983e(iVar2 + 0x38);
  iVar2 = FUN_0007983e(iVar2 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(undefined1 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 0x19) = 1;
  uVar1 = DAT_00135c24;
  *(undefined1 *)(iVar2 + 0x1a) = 4;
  *(undefined1 *)(iVar2 + 0x1b) = 0;
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  return;
}

