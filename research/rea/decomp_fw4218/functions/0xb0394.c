// rea decompile_all
// name: FUN_000b0394
// address: 0xb0394
// body: available
// range: 0xb0394-0xb049b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b0394(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000b049c;
  *param_1 = DAT_000b049c;
  param_1[0x45] = iVar2 + 0x68;
  param_1[0x46] = iVar2 + 0x88;
  param_1[0x47] = iVar2 + 0x94;
  param_1[0x48] = iVar2 + 0xa8;
  param_1[0x49] = iVar2 + 200;
  param_1[0x4a] = iVar2 + 0xe0;
  FUN_00236694(param_1 + 0x238);
  uVar1 = FUN_000f4e84();
  FUN_000f4f30(uVar1,param_1 + 0x45);
  FUN_000f7ef8(param_1[0x4b],DAT_000b04a0);
  uVar1 = FUN_000f6910(param_1[0x4b]);
  FUN_00069b9c(uVar1,param_1 + 0x46);
  iVar2 = FUN_00236960(param_1 + 0x238);
  iVar2 = FUN_0013eb68(iVar2 + -0x98);
  iVar2 = FUN_00146138(iVar2 + -0x2d4);
  iVar2 = FUN_00090c28(iVar2 + -0x3d0);
  iVar2 = FUN_001724f0(iVar2 + -0x7c);
  iVar2 = FUN_00172458(iVar2 + -4);
  iVar2 = FUN_001724c8(iVar2 + -4);
  iVar2 = FUN_001724dc(iVar2 + -4);
  iVar2 = FUN_00143214(iVar2 + -8);
  uVar1 = FUN_000710f8(iVar2 + -0x114);
  return uVar1;
}

