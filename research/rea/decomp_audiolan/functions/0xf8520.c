// rea decompile_all
// name: FUN_000f8520
// address: 0xf8520
// body: available
// range: 0xf8520-0xf85ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f8520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_000f2bc4(param_1,DAT_000f85ac,param_2,param_3);
  iVar2 = DAT_000f85b0 + 0x1c;
  *piVar1 = DAT_000f85b0;
  piVar1[1] = iVar2;
  *(undefined2 *)(piVar1 + 9) = param_4;
  iVar2 = FUN_000ea2e0(piVar1 + 10);
  iVar2 = FUN_000ea2e0(iVar2 + 0xc);
  *(undefined2 *)(iVar2 + 0xc) = 0;
  iVar2 = FUN_0010e7e0(iVar2 + 0x34);
  *(undefined4 *)(iVar2 + -0x20) = 0;
  *(undefined4 *)(iVar2 + -0x1c) = 0;
  *(undefined4 *)(iVar2 + -0x18) = 0;
  *(undefined4 *)(iVar2 + -0x14) = 0;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined4 *)(iVar2 + -0xc) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  FUN_000ea348(iVar2 + -0x40,param_5);
  *(undefined1 *)(iVar2 + 0xc) = 1;
  return iVar2 + -0x68;
}

