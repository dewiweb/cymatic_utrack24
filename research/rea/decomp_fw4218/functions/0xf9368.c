// rea decompile_all
// name: FUN_000f9368
// address: 0xf9368
// body: available
// range: 0xf9368-0xf954b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f9368(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000f954c;
  *param_1 = DAT_000f954c;
  param_1[0x45] = iVar1 + 0xac;
  param_1[0x5d] = iVar1 + 0xd0;
  param_1[0x5e] = iVar1 + 0xf0;
  FUN_000f5ae4(param_1);
  FUN_00071c88(param_1);
  iVar1 = FUN_0013adf0(param_1 + 0x187);
  iVar1 = FUN_001101bc(iVar1 + -0x14);
  iVar1 = FUN_0012f8b8(iVar1 + -0x14);
  iVar1 = FUN_000fb140(iVar1 + -0x14);
  iVar1 = FUN_00137e98(iVar1 + -0x14);
  iVar1 = FUN_000cd1e4(iVar1 + -0x14);
  iVar1 = FUN_00111100(iVar1 + -0x14);
  iVar1 = FUN_00124210(iVar1 + -0x1c);
  iVar1 = FUN_000fa5fc(iVar1 + -0x18);
  iVar1 = FUN_00092668(iVar1 + -0x14);
  iVar1 = FUN_00146c30(iVar1 + -0x14);
  iVar1 = FUN_0011aba0(iVar1 + -0x14);
  iVar1 = FUN_001288f4(iVar1 + -0x14);
  iVar1 = FUN_0006b5ec(iVar1 + -100);
  iVar1 = FUN_000d4f50(iVar1 + -0x10);
  iVar1 = FUN_00130ed0(iVar1 + -0x1c);
  iVar1 = FUN_00245044(iVar1 + -4);
  iVar1 = FUN_000d0508(iVar1 + -0xc);
  iVar1 = FUN_00122588(iVar1 + -0x5c);
  iVar1 = FUN_001c159c(iVar1 + -0x1c);
  iVar1 = FUN_000f4c48(iVar1 + -0x124);
  iVar1 = FUN_0006a91c(iVar1 + -0x168);
  iVar1 = FUN_001448f8(iVar1 + -4);
  iVar1 = FUN_00142c40(iVar1 + -4);
  uVar2 = FUN_000b0ff0(iVar1 + -0x174);
  return uVar2;
}

