// rea decompile_all
// name: FUN_000f115c
// address: 0xf115c
// body: available
// range: 0xf115c-0xf120b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f115c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined2 param_11,undefined2 param_12,
                undefined4 param_13,undefined4 param_14,undefined2 param_15,undefined2 param_16,
                undefined1 param_17,int param_18)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = param_3;
  iVar3 = FUN_0010f5fc();
  iVar3 = FUN_0010f5fc(iVar3 + 0xc,param_3);
  uVar2 = DAT_000f120c;
  *(undefined4 *)(iVar3 + 0xc) = param_4;
  *(undefined4 *)(iVar3 + 0x10) = param_5;
  *(undefined4 *)(iVar3 + 0x14) = param_6;
  *(undefined4 *)(iVar3 + 0x18) = param_7;
  *(undefined4 *)(iVar3 + 0x1c) = param_8;
  *(undefined4 *)(iVar3 + 0x20) = param_9;
  *(undefined4 *)(iVar3 + 0x24) = param_10;
  *(undefined2 *)(iVar3 + 0x28) = param_11;
  *(undefined2 *)(iVar3 + 0x2a) = param_12;
  *(undefined4 *)(iVar3 + 0x2c) = param_13;
  *(undefined4 *)(iVar3 + 0x30) = param_14;
  *(undefined2 *)(iVar3 + 0x34) = param_15;
  *(undefined2 *)(iVar3 + 0x36) = param_16;
  *(undefined1 *)(iVar3 + 0x38) = param_17;
  *(undefined4 *)(iVar3 + 0x3c) = uVar2;
  *(undefined1 *)(iVar3 + 0x40) = *(undefined1 *)(param_18 + 4);
  uVar1 = *(undefined1 *)(param_18 + 5);
  *(undefined1 *)(iVar3 + 0x41) = uVar1;
  FUN_0016d9dc(iVar3 + 0x42,param_18 + 6,uVar2,uVar1,param_1,param_2,uVar4);
  return iVar3 + -0xc;
}

