// rea decompile_all
// name: FUN_00148bf0
// address: 0x148bf0
// body: available
// range: 0x148bf0-0x148f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00148bf0(int *param_1,int *param_2,undefined1 param_3,int param_4,undefined2 param_5,
                undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_00148f10;
  piVar1 = DAT_00148f0c;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_00148f0c;
    param_1[0x22d] = iVar3;
    param_2 = piVar1;
  }
  iVar3 = _DAT_00148f14;
  iVar2 = *param_2;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = param_2[1];
  param_1[2] = iVar3 + 0x1c;
  param_1[1] = iVar3;
  *(undefined1 *)(param_1 + 3) = param_3;
  iVar3 = DAT_00148f24;
  *(undefined1 *)((int)param_1 + 0xd) = param_8;
  param_1[0xe] = (int)(s___CHAICore_00148f16 + 2);
  param_1[4] = iVar3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_001a07ac(param_1 + 5);
  param_1[0xf] = param_4;
  iVar3 = FUN_0010e7e0(param_1 + 0x10);
  iVar3 = FUN_000fb700(iVar3 + 8);
  *(undefined1 *)(iVar3 + 0x115) = 1;
  *(undefined1 *)(iVar3 + 0x116) = 1;
  *(undefined1 *)(iVar3 + 0x117) = 1;
  *(undefined2 *)(iVar3 + 0x118) = 0;
  uVar4 = FUN_000e9bac();
  *(undefined4 *)(iVar3 + 0x11c) = uVar4;
  iVar3 = FUN_0010e7e0(iVar3 + 0x120);
  *(undefined4 *)(iVar3 + 0xc) = 0x32;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  iVar3 = FUN_0010e7e0(iVar3 + 0x18);
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined2 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined2 *)(iVar3 + 0x14) = 0;
  *(undefined2 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined2 *)(iVar3 + 0x2c) = 1;
  *(undefined2 *)(iVar3 + 0x2e) = 1;
  iVar3 = FUN_000ea2e0(iVar3 + 0x30);
  iVar3 = FUN_0010e7e0(iVar3 + 0xc);
  *(undefined1 *)(iVar3 + 8) = 0;
  *(undefined1 *)(iVar3 + 9) = 0;
  *(undefined1 *)(iVar3 + 10) = 2;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  iVar3 = FUN_00117930(iVar3 + 0x24);
  iVar3 = FUN_0010e7e0(iVar3 + 0x18);
  iVar3 = FUN_0010e7e0(iVar3 + 0xc);
  iVar3 = FUN_0010e7e0(iVar3 + 8);
  iVar3 = FUN_00118118(iVar3 + 0x14,iVar3 + -0x20c);
  uVar4 = DAT_00148f28;
  *(char **)(iVar3 + 0x260) = s___CHAICore_00148f16 + 2;
  *(undefined4 *)(iVar3 + 0x240) = uVar4;
  *(undefined4 *)(iVar3 + 0x244) = 0;
  *(undefined4 *)(iVar3 + 0x248) = 0;
  *(undefined4 *)(iVar3 + 0x24c) = 0;
  *(undefined4 *)(iVar3 + 0x250) = 0;
  *(undefined4 *)(iVar3 + 0x254) = 0;
  *(undefined4 *)(iVar3 + 600) = 0;
  *(undefined4 *)(iVar3 + 0x25c) = 0;
  FUN_0017a1c4(iVar3 + 0x244,s___CHAICore_00148f16 + 2,0,1);
  iVar3 = FUN_000e9b7c(iVar3 + 0x264,iVar3 + -0x21c);
  iVar3 = FUN_0014a24c(iVar3 + 0x1c,iVar3 + -0x484);
  iVar3 = FUN_000fc400(iVar3 + 0xa8);
  iVar3 = FUN_0012c5e0(iVar3 + 0x3c,iVar3 + -0x548);
  iVar3 = FUN_00122790(iVar3 + 8,iVar3 + -0x584);
  iVar3 = FUN_00146a28(iVar3 + 0x44,iVar3 + -0x58c);
  iVar3 = FUN_0011949c(iVar3 + 0x88,iVar3 + -0x5d0);
  iVar3 = FUN_00132034(iVar3 + 0x24,iVar3 + -0x658);
  iVar3 = FUN_00134624(iVar3 + 0x2c);
  iVar3 = FUN_0012ca60(iVar3 + 0x10);
  iVar3 = FUN_001185ac(iVar3 + 8,iVar3 + -0x6b8);
  iVar3 = FUN_0012eef8(iVar3 + 0x168);
  iVar3 = FUN_00134e58(iVar3 + 0x3c,iVar3 + -0x828);
  uVar4 = DAT_00148f2c;
  *(undefined4 *)(iVar3 + 0x18) = DAT_00148f30;
  *(int *)(iVar3 + 0x1c) = iVar3;
  *(undefined4 *)(iVar3 + 0x20) = uVar4;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_00134be8(iVar3,(undefined4 *)(iVar3 + 0x18));
  *(undefined4 *)(iVar3 + 0x28) = 0;
  uVar4 = DAT_00148f34;
  *(undefined2 *)(iVar3 + 0x2c) = 0;
  *(undefined2 *)(iVar3 + 0x2e) = 0;
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  iVar3 = FUN_0013157c(iVar3 + 0x30,iVar3 + -0x864);
  iVar3 = FUN_00133a68(iVar3 + 0x10);
  *(undefined1 *)(iVar3 + -0x748) = 0;
  *(undefined1 *)(iVar3 + -0x6c8) = 0;
  *(undefined1 *)(iVar3 + -0x6c7) = 0;
  *(undefined2 *)(iVar3 + -0x6b0) = param_5;
  FUN_0010e240(iVar3 + -0x6ac,param_6);
  FUN_0010e240(iVar3 + -0x698,param_7);
  *(undefined1 *)(iVar3 + -0x690) = 3;
  FUN_000ea274(iVar3 + -0x6f4);
  FUN_0017bfc0();
  FUN_000faf5c();
  *(undefined1 *)(iVar3 + -0x6d4) = 0;
  *(undefined4 *)(iVar3 + -0x6d0) = 0;
  *(undefined4 *)(iVar3 + -0x6cc) = 0;
  return iVar3 + -0x8a4;
}

