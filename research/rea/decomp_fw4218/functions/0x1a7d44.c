// rea decompile_all
// name: FUN_001a7d44
// address: 0x1a7d44
// body: available
// range: 0x1a7d44-0x1a7e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a7d44(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  iVar1 = FUN_00070a34(param_1);
  uVar2 = FUN_00230e4c(auStack_10);
  iVar1 = FUN_00232050(iVar1 + 8,uVar2);
  uVar2 = FUN_00230e4c(auStack_14);
  iVar1 = FUN_00232050(iVar1 + 4,uVar2);
  iVar1 = FUN_001a7f24(iVar1 + 0x34);
  uVar2 = FUN_0022f2d0(auStack_18);
  iVar1 = FUN_00239b28(iVar1 + 0x1c,uVar2);
  uVar2 = FUN_00230d7c(auStack_1c);
  iVar1 = FUN_00244878(iVar1 + 0xc,uVar2);
  uVar2 = FUN_0022f4e8(auStack_20);
  iVar1 = FUN_0023ba10(iVar1 + 0xc,uVar2);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  return iVar1 + -0x74;
}

