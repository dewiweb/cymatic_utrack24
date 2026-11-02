// rea decompile_all
// name: FUN_00153604
// address: 0x153604
// body: available
// range: 0x153604-0x15373b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00153604(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined2 param_11,undefined2 param_12,
                undefined4 param_13,undefined4 param_14,undefined2 param_15,undefined2 param_16,
                int param_17,int param_18,int param_19,byte param_20,int param_21,int param_22)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  iVar2 = FUN_001726d4();
  iVar2 = FUN_001726d4(iVar2 + 0xc,param_3);
  uVar1 = DAT_0015373c;
  *(undefined4 *)(iVar2 + 0xc) = param_4;
  *(undefined4 *)(iVar2 + 0x10) = param_5;
  *(undefined4 *)(iVar2 + 0x14) = param_6;
  *(undefined4 *)(iVar2 + 0x18) = param_7;
  *(undefined4 *)(iVar2 + 0x1c) = param_8;
  *(undefined4 *)(iVar2 + 0x20) = param_9;
  *(undefined4 *)(iVar2 + 0x24) = param_10;
  *(undefined2 *)(iVar2 + 0x28) = param_11;
  *(undefined2 *)(iVar2 + 0x2a) = param_12;
  *(undefined4 *)(iVar2 + 0x2c) = param_13;
  *(undefined4 *)(iVar2 + 0x30) = param_14;
  *(undefined2 *)(iVar2 + 0x34) = param_15;
  *(undefined2 *)(iVar2 + 0x36) = param_16;
  *(undefined1 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  *(undefined1 *)(iVar2 + 0x40) = 0x7f;
  *(undefined1 *)(iVar2 + 0x41) = 0;
  FUN_001c6c64(iVar2 + 0x42);
  if (param_17 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = 4;
  }
  bVar4 = bVar4 | *(byte *)(iVar2 + 0x38);
  if (param_18 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0x80;
  }
  *(byte *)(iVar2 + 0x38) = bVar4;
  bVar4 = bVar4 | bVar3;
  if (param_19 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = 2;
  }
  *(byte *)(iVar2 + 0x38) = bVar4;
  param_20 = bVar4 | bVar3 | param_20;
  if (param_21 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)(iVar2 + 0x38) = param_20;
  param_20 = param_20 | bVar4;
  if (param_22 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0x40;
  }
  *(byte *)(iVar2 + 0x38) = param_20;
  *(byte *)(iVar2 + 0x38) = param_20 | bVar4;
  return iVar2 + -0xc;
}

