// rea decompile_all
// name: FUN_0016f928
// address: 0x16f928
// body: available
// range: 0x16f928-0x16fb97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0016f928(int *param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_0016fb98;
  iVar3 = DAT_0016fb98 + 100;
  iVar4 = DAT_0016fb98 + 0x94;
  iVar5 = DAT_0016fb98 + 0xa8;
  iVar6 = DAT_0016fb98 + 0xbc;
  iVar7 = DAT_0016fb98 + 200;
  param_1[6] = DAT_0016fb98 + 0xd4;
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar5;
  param_1[4] = iVar6;
  param_1[5] = iVar7;
  iVar2 = FUN_0015d64c(param_1 + 7);
  *(undefined4 *)(iVar2 + 0x114) = _DAT_0016fb9c;
  *(int *)(iVar2 + 0x118) = iVar2 + -0x1c;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x11c) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  uVar1 = DAT_0016fbac;
  *(undefined4 *)(iVar2 + 0x128) = DAT_0016fbac;
  *(undefined4 *)(iVar2 + 300) = 0;
  *(char **)(iVar2 + 0x148) = s_H__KeyEvent_0016fb9d + 3;
  *(undefined4 *)(iVar2 + 0x130) = 0;
  *(undefined4 *)(iVar2 + 0x134) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0;
  *(undefined4 *)(iVar2 + 0x13c) = 0;
  *(undefined4 *)(iVar2 + 0x140) = 0;
  *(undefined4 *)(iVar2 + 0x144) = 0;
  FUN_001ce8fc((undefined4 *)(iVar2 + 300),s_H__KeyEvent_0016fb9d + 3,0,1);
  *(undefined4 *)(iVar2 + 0x14c) = uVar1;
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(char **)(iVar2 + 0x16c) = s_VNMCore_0016fbb0;
  *(undefined4 *)(iVar2 + 0x154) = 0;
  *(undefined4 *)(iVar2 + 0x158) = 0;
  *(undefined4 *)(iVar2 + 0x15c) = 0;
  *(undefined4 *)(iVar2 + 0x160) = 0;
  *(undefined4 *)(iVar2 + 0x164) = 0;
  *(undefined4 *)(iVar2 + 0x168) = 0;
  FUN_001ce8fc((undefined4 *)(iVar2 + 0x150),s_VNMCore_0016fbb0,0,1);
  iVar2 = FUN_0015d64c(iVar2 + 0x170);
  iVar2 = FUN_0015d64c(iVar2 + 0x114);
  uVar1 = DAT_0016fbb8;
  *(char **)(iVar2 + 0x13c) = s_VNMCore_0016fbb0;
  *(undefined4 *)(iVar2 + 0x114) = uVar1;
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar2 + 0x11c) = 0;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  *(undefined4 *)(iVar2 + 0x128) = 0;
  *(undefined4 *)(iVar2 + 300) = 0;
  *(undefined4 *)(iVar2 + 0x130) = 0;
  *(undefined4 *)(iVar2 + 0x134) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0;
  FUN_001f0168(iVar2 + 0x118);
  *(undefined4 *)(iVar2 + 0x140) = DAT_0016fbbc;
  *(int *)(iVar2 + 0x144) = iVar2 + -0x2a0;
  iVar2 = FUN_001602dc(iVar2 + 0x148,iVar2 + -0x29c);
  iVar2 = FUN_0016a7c0(iVar2 + 0xb8,iVar2 + -0x3e4,iVar2 + -0x3dc,iVar2);
  iVar2 = FUN_00161b68(iVar2 + 0x1c,iVar2 + -0x49c,iVar2 + -0x490);
  iVar2 = FUN_0015e9d4(iVar2 + 0x1c);
  iVar2 = FUN_00164610(iVar2 + 0x1e8,iVar2 + -0x38,iVar2 + -0xf0,iVar2 + -0x4d4);
  iVar2 = FUN_00161ebc(iVar2 + 0xc,iVar2 + -0x558,iVar2 + -0x6b8,iVar2 + 0x60,param_4);
  iVar2 = FUN_0016ac84(iVar2 + 0x18,iVar2 + -0x6c8,iVar2 + -0x22c,iVar2 + -0x2e4,iVar2,iVar2 + -500,
                       iVar2 + -0x6cc);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined2 *)(iVar2 + 0x34) = param_3;
  *(undefined1 *)(iVar2 + 0x36) = param_2;
  *(undefined1 *)(iVar2 + 0x37) = 0;
  *(undefined1 *)(iVar2 + 0x38) = 0;
  *(undefined1 *)(iVar2 + 0x39) = 0;
  iVar2 = FUN_0014c8cc(iVar2 + 0x3c);
  *(undefined4 *)(iVar2 + 0x40) = 1;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 1;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = param_4;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  *(undefined1 *)(iVar2 + 0x94) = 1;
  return iVar2 + -0x720;
}

