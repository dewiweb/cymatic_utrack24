// rea decompile_all
// name: FUN_001668f8
// address: 0x1668f8
// body: available
// range: 0x1668f8-0x166b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001668f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_0015e574();
  iVar4 = DAT_00166b98 + 0x3c;
  *piVar3 = DAT_00166b98;
  piVar3[8] = iVar4;
  iVar4 = FUN_0014cd58(piVar3 + 10);
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x50) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x60) = 0;
  uVar1 = DAT_00166b9c;
  *(undefined4 *)(iVar4 + 100) = 0;
  *(undefined4 *)(iVar4 + 0x68) = 0;
  uVar2 = _DAT_00166ba0;
  *(undefined4 *)(iVar4 + 0x98) = uVar1;
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  *(undefined4 *)(iVar4 + 0x70) = uVar2;
  *(undefined4 *)(iVar4 + 0x74) = 0;
  *(undefined4 *)(iVar4 + 0x78) = 0;
  *(undefined4 *)(iVar4 + 0x7c) = 0;
  *(undefined4 *)(iVar4 + 0x80) = 0;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0;
  *(undefined4 *)(iVar4 + 0x8c) = 0;
  *(undefined4 *)(iVar4 + 0x90) = 0;
  *(undefined4 *)(iVar4 + 0x94) = 0;
  FUN_001f0168(iVar4 + 0x74);
  *(int *)(iVar4 + 0x9c) = iVar4 + -0x28;
  *(undefined4 *)(iVar4 + 0xa0) = param_3;
  *(undefined4 *)(iVar4 + 0xa4) = 0;
  *(char **)(iVar4 + 0xd0) = s_D__TransEth_Send_00166ba1 + 3;
  *(undefined4 *)(iVar4 + 0xac) = 0;
  *(undefined4 *)(iVar4 + 0xa8) = uVar2;
  *(undefined4 *)(iVar4 + 0xb0) = 0;
  *(undefined4 *)(iVar4 + 0xb4) = 0;
  *(undefined4 *)(iVar4 + 0xb8) = 0;
  *(undefined4 *)(iVar4 + 0xbc) = 0;
  *(undefined4 *)(iVar4 + 0xc0) = 0;
  *(undefined4 *)(iVar4 + 0xc4) = 0;
  *(undefined4 *)(iVar4 + 200) = 0;
  *(undefined4 *)(iVar4 + 0xcc) = 0;
  FUN_001f0168(iVar4 + 0xac);
  *(char **)(iVar4 + 0xfc) = s_TransEth_RcvFIFO_00166bb4;
  *(undefined4 *)(iVar4 + 0xd8) = 0;
  *(undefined4 *)(iVar4 + 0xd4) = uVar2;
  *(undefined4 *)(iVar4 + 0xdc) = 0;
  *(undefined4 *)(iVar4 + 0xe0) = 0;
  *(undefined4 *)(iVar4 + 0xe4) = 0;
  *(undefined4 *)(iVar4 + 0xe8) = 0;
  *(undefined4 *)(iVar4 + 0xec) = 0;
  *(undefined4 *)(iVar4 + 0xf0) = 0;
  *(undefined4 *)(iVar4 + 0xf4) = 0;
  *(undefined4 *)(iVar4 + 0xf8) = 0;
  FUN_001f0168(iVar4 + 0xd8);
  *(char **)(iVar4 + 0x128) = s_TransEth_Src_00166bc8;
  *(undefined4 *)(iVar4 + 0x104) = 0;
  *(undefined4 *)(iVar4 + 0x100) = uVar2;
  *(undefined4 *)(iVar4 + 0x108) = 0;
  *(undefined4 *)(iVar4 + 0x10c) = 0;
  *(undefined4 *)(iVar4 + 0x110) = 0;
  *(undefined4 *)(iVar4 + 0x114) = 0;
  *(undefined4 *)(iVar4 + 0x118) = 0;
  *(undefined4 *)(iVar4 + 0x11c) = 0;
  *(undefined4 *)(iVar4 + 0x120) = 0;
  *(undefined4 *)(iVar4 + 0x124) = 0;
  FUN_001f0168(iVar4 + 0x104);
  *(char **)(iVar4 + 0x154) = s_TransEth_SvcMsg_00166bd8;
  *(undefined4 *)(iVar4 + 0x130) = 0;
  *(undefined4 *)(iVar4 + 300) = uVar2;
  *(undefined4 *)(iVar4 + 0x134) = 0;
  *(undefined4 *)(iVar4 + 0x138) = 0;
  *(undefined4 *)(iVar4 + 0x13c) = 0;
  *(undefined4 *)(iVar4 + 0x140) = 0;
  *(undefined4 *)(iVar4 + 0x144) = 0;
  *(undefined4 *)(iVar4 + 0x148) = 0;
  *(undefined4 *)(iVar4 + 0x14c) = 0;
  *(undefined4 *)(iVar4 + 0x150) = 0;
  FUN_001f0168(iVar4 + 0x130);
  uVar1 = DAT_00166bf8;
  *(char **)(iVar4 + 0xda4) = s_TransEth_Bkg_00166be8;
  *(undefined4 *)(iVar4 + 0xd84) = uVar1;
  *(undefined4 *)(iVar4 + 0xd88) = 0;
  *(undefined4 *)(iVar4 + 0xd8c) = 0;
  *(undefined4 *)(iVar4 + 0xd90) = 0;
  *(undefined4 *)(iVar4 + 0xd94) = 0;
  *(undefined4 *)(iVar4 + 0xd98) = 0;
  *(undefined4 *)(iVar4 + 0xd9c) = 0;
  *(undefined4 *)(iVar4 + 0xda0) = 0;
  FUN_001ce8fc(iVar4 + 0xd88,s_TransEth_Bkg_00166be8,0,1);
  iVar4 = FUN_0015d64c(iVar4 + 0xda8);
  *(undefined4 *)(iVar4 + -0xdac) = param_5;
  *(undefined2 *)(iVar4 + -0xc50) = 0;
  *(undefined1 *)(iVar4 + -0xdcc) = 7;
  *(undefined4 *)(iVar4 + -0xd9c) = 0;
  uVar1 = DAT_00166bfc;
  *(undefined4 *)(iVar4 + -0xd90) = 0;
  FUN_0014cd08(iVar4 + -0xda8,uVar1);
  *(undefined1 *)(iVar4 + -0x90) = 1;
  *(undefined4 *)(iVar4 + -0xc4c) = 0;
  *(undefined4 *)(iVar4 + -0x30) = 0;
  *(undefined4 *)(iVar4 + -0xd84) = 0;
  *(undefined4 *)(iVar4 + -0x8c) = 0;
  *(undefined4 *)(iVar4 + -0x88) = 0;
  *(undefined4 *)(iVar4 + -0x84) = 0;
  *(undefined4 *)(iVar4 + -0x80) = 0;
  *(undefined4 *)(iVar4 + -0x7c) = 0;
  *(undefined4 *)(iVar4 + -0x78) = 0;
  *(undefined4 *)(iVar4 + -0x74) = 0;
  *(undefined4 *)(iVar4 + -0x60) = 0;
  *(undefined4 *)(iVar4 + -0x5c) = 0;
  *(undefined4 *)(iVar4 + -0x70) = 0;
  *(undefined4 *)(iVar4 + -0x58) = 0;
  *(undefined4 *)(iVar4 + -0x6c) = 0;
  *(undefined4 *)(iVar4 + -0x68) = 0;
  *(undefined4 *)(iVar4 + -0x54) = 0;
  *(undefined4 *)(iVar4 + -0x40) = 0;
  *(undefined4 *)(iVar4 + -0x3c) = 0;
  *(undefined4 *)(iVar4 + -0x38) = 0;
  *(undefined4 *)(iVar4 + -0x50) = 0;
  *(undefined4 *)(iVar4 + -0x4c) = 0;
  *(undefined4 *)(iVar4 + -0x48) = 0;
  *(undefined4 *)(iVar4 + -0x44) = 0;
  *(undefined4 *)(iVar4 + -0x34) = 0;
  *(undefined4 *)(iVar4 + -0x2c) = 0;
  *(undefined4 *)(iVar4 + -0x28) = 0;
  return iVar4 + -0xdd0;
}

