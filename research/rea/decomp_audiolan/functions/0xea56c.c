// rea decompile_all
// name: FUN_000ea56c
// address: 0xea56c
// body: available
// range: 0xea56c-0xea61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000ea56c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined2 param_8,undefined2 param_9,
                 undefined2 param_10,undefined2 param_11,undefined2 param_12,undefined4 *param_13,
                 undefined4 param_14,undefined4 param_15)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0010f650(param_1 + 0x60,param_3);
  FUN_0010f650(param_1 + 0x6c,param_4);
  *(undefined2 *)(param_1 + 0x78) = param_8;
  *(undefined2 *)(param_1 + 0x7a) = param_9;
  *(undefined2 *)(param_1 + 0x7c) = param_10;
  *(undefined2 *)(param_1 + 0x7e) = param_11;
  *(undefined2 *)(param_1 + 0x80) = param_12;
  uVar2 = param_13[1];
  uVar3 = param_13[2];
  uVar4 = param_13[3];
  *(undefined4 *)(param_1 + 0x88) = *param_13;
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  FUN_0016d9f8(param_1 + 0x98,param_14);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2000;
  }
  iVar1 = FUN_000fb7e0(param_1,param_5,param_3,param_6,param_7,uVar2,2,param_15);
  return iVar1 != 0;
}

