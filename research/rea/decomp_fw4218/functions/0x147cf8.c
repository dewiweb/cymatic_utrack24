// rea decompile_all
// name: FUN_00147cf8
// address: 0x147cf8
// body: available
// range: 0x147cf8-0x147d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00147cf8(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined1 param_12,
                undefined4 param_13)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_001289f0(param_1);
  *puVar1 = DAT_00147d88;
  *(undefined1 *)((int)puVar1 + 5) = param_2;
  *(undefined1 *)((int)puVar1 + 6) = param_3;
  *(undefined1 *)((int)puVar1 + 7) = param_4;
  *(undefined1 *)(puVar1 + 2) = param_5;
  *(undefined1 *)((int)puVar1 + 9) = param_6;
  *(undefined1 *)((int)puVar1 + 10) = param_7;
  puVar1[3] = param_8;
  puVar1[4] = param_9;
  iVar2 = FUN_00232084(puVar1 + 5,param_10);
  *(undefined1 *)(iVar2 + 4) = param_11;
  *(undefined1 *)(iVar2 + 5) = param_12;
  *(undefined4 *)(iVar2 + 8) = param_13;
  FUN_001289e8(iVar2 + -0x14,1);
  return iVar2 + -0x14;
}

