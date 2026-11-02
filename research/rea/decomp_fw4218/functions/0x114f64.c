// rea decompile_all
// name: FUN_00114f64
// address: 0x114f64
// body: available
// range: 0x114f64-0x11505f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00114f64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00079504(param_1,param_5,param_6);
  iVar1 = FUN_0013ed64(iVar1 + 0x4c);
  piVar2 = (int *)FUN_0012d308(iVar1 + 4);
  iVar1 = DAT_00115060;
  piVar2[-0x14] = DAT_00115060;
  piVar2[-2] = iVar1 + 0x7c;
  piVar2[-1] = iVar1 + 0xa4;
  *piVar2 = iVar1 + 0xbc;
  iVar1 = FUN_00203f0c(piVar2 + 1);
  iVar1 = FUN_00204380(iVar1 + 0xc);
  iVar1 = FUN_001467ec(iVar1 + 0xc);
  iVar1 = FUN_0012f2ac(iVar1 + 0x2c,param_2);
  *(undefined4 *)(iVar1 + 0x40) = param_4;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  iVar1 = FUN_00129bc0(iVar1 + 0xb4);
  iVar1 = FUN_0013a108(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  FUN_00003c58(iVar1 + -0x84,0x30);
  FUN_00003c58(iVar1 + -0x4c,0x30);
  return iVar1 + -0x160;
}

