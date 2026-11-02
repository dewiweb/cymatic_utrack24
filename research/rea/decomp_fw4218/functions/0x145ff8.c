// rea decompile_all
// name: FUN_00145ff8
// address: 0x145ff8
// body: available
// range: 0x145ff8-0x146137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00145ff8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *param_1 = 0;
  puStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_00171e90(param_1 + 2);
  iVar1 = FUN_00171e90(iVar1 + 8);
  iVar1 = FUN_00171e90(iVar1 + 0x78);
  iVar1 = FUN_00171e90(iVar1 + 8);
  iVar1 = FUN_00171e90(iVar1 + 0x20);
  iVar1 = FUN_00171e90(iVar1 + 0x10);
  iVar1 = FUN_00171e90(iVar1 + 0xc);
  uVar2 = FUN_00230d7c(&uStack_14);
  iVar1 = FUN_00244878(iVar1 + 8,uVar2);
  uVar2 = FUN_00230d7c(&uStack_18);
  iVar1 = FUN_00244878(iVar1 + 0xc,uVar2);
  iVar1 = FUN_00171e90(iVar1 + 0x18);
  iVar1 = FUN_00171e90(iVar1 + 0x18);
  iVar1 = FUN_00171e90(iVar1 + 0x4c);
  iVar1 = FUN_00171e90(iVar1 + 0x130);
  iVar1 = FUN_00171e90(iVar1 + 8);
  uVar2 = FUN_0022f460(&uStack_1c);
  iVar1 = FUN_0023af48(iVar1 + 8,uVar2);
  iVar1 = FUN_00171e90(iVar1 + 0xc);
  uVar2 = FUN_0022f3dc(&puStack_20);
  iVar1 = FUN_0023a7d4(iVar1 + 8,uVar2);
  iVar1 = FUN_00171e90(iVar1 + 0xc);
  iVar1 = FUN_00171e90(iVar1 + 8);
  return iVar1 + -0x2c4;
}

