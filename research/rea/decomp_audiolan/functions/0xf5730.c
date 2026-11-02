// rea decompile_all
// name: FUN_000f5730
// address: 0xf5730
// body: available
// range: 0xf5730-0xf5847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 *
FUN_000f5730(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined2 param_20,undefined2 param_21,
            undefined4 param_22,int param_23)

{
  int iVar1;
  
  iVar1 = FUN_0010f638(param_1 + 4);
  iVar1 = FUN_0010f638(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x50) = DAT_000f5848;
  *(undefined1 *)(iVar1 + 0x54) = 0x7f;
  *(undefined1 *)(iVar1 + 0x55) = 0;
  FUN_0016d910();
  *(undefined2 *)(iVar1 + -0x10) = param_2;
  FUN_0010f650(iVar1 + -0xc,param_3);
  FUN_0010f650(iVar1,param_4);
  *(undefined4 *)(iVar1 + 0xc) = param_5;
  *(undefined4 *)(iVar1 + 0x10) = param_6;
  *(undefined4 *)(iVar1 + 0x14) = param_7;
  *(undefined4 *)(iVar1 + 0x18) = param_8;
  *(undefined4 *)(iVar1 + 0x1c) = param_9;
  *(undefined4 *)(iVar1 + 0x20) = param_10;
  *(undefined4 *)(iVar1 + 0x24) = param_11;
  *(undefined4 *)(iVar1 + 0x28) = param_12;
  *(undefined4 *)(iVar1 + 0x2c) = param_13;
  *(undefined4 *)(iVar1 + 0x30) = param_14;
  *(undefined4 *)(iVar1 + 0x34) = param_15;
  *(undefined4 *)(iVar1 + 0x38) = param_16;
  *(undefined4 *)(iVar1 + 0x3c) = param_17;
  *(undefined4 *)(iVar1 + 0x40) = param_18;
  *(undefined4 *)(iVar1 + 0x44) = param_19;
  *(undefined4 *)(iVar1 + 0x48) = param_22;
  *(undefined2 *)(iVar1 + 0x4c) = param_20;
  *(undefined2 *)(iVar1 + 0x4e) = param_21;
  *(undefined1 *)(iVar1 + 0x54) = *(undefined1 *)(param_23 + 4);
  *(undefined1 *)(iVar1 + 0x55) = *(undefined1 *)(param_23 + 5);
  FUN_0016d9dc(iVar1 + 0x56,param_23 + 6);
  return (undefined2 *)(iVar1 + -0x10);
}

