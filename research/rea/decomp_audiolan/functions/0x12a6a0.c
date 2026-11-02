// rea decompile_all
// name: FUN_0012a6a0
// address: 0x12a6a0
// body: available
// range: 0x12a6a0-0x12a877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012a6a0(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0012a878;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_0012a878;
    iVar2 = piVar1[7];
    param_1[0x5a] = iVar2;
    *(int *)((int)param_1 + *(int *)(iVar2 + -0x38) + 0x168) = piVar1[8];
    iVar2 = piVar1[9];
    param_1[0x5b] = iVar2;
    *(int *)((int)param_1 + *(int *)(iVar2 + -0x38) + 0x16c) = piVar1[10];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_00117bd8(param_1,param_2 + 1,param_3,*param_4,param_1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0x10)) = param_2[5];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[4];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[6];
  iVar2 = FUN_0010f638(piVar1 + 0x10);
  iVar2 = FUN_0010e7e0(iVar2 + 0x10);
  iVar2 = FUN_0010e7e0(iVar2 + 8);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  iVar2 = FUN_00137730(iVar2 + 0x48);
  iVar2 = FUN_0013f070(iVar2 + 8,iVar2 + -0xa0);
  iVar2 = FUN_001324ac(iVar2 + 0xc);
  iVar2 = FUN_00132034(iVar2 + 0xc,*param_4);
  *(undefined2 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined2 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  iVar2 = FUN_001383cc(iVar2 + 0x58);
  iVar2 = FUN_00138418(iVar2 + 8,iVar2 + -0x118);
  iVar2 = FUN_00131ae0(iVar2 + 0x2c,iVar2 + -0x120);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 **)(iVar2 + -0xd0) = param_4;
  *(undefined1 *)(iVar2 + -0xff) = 0;
  *(undefined4 *)(iVar2 + -0xc) = 0;
  *(undefined2 *)(iVar2 + -4) = 0;
  *(byte *)(iVar2 + -4) = *(byte *)(iVar2 + -4) & 0xfe | 2;
  *(undefined4 *)(iVar2 + -0x44) = 0;
  *(undefined4 *)(iVar2 + -0x40) = 0;
  *(undefined4 *)(iVar2 + -0x3c) = 0;
  *(undefined4 *)(iVar2 + -0x38) = 0;
  *(undefined4 *)(iVar2 + -0xd4) = 0;
  *(undefined4 *)(iVar2 + -0xe4) = 0;
  *(undefined4 *)(iVar2 + -0xe0) = 0;
  *(undefined4 *)(iVar2 + -0xdc) = 0;
  *(undefined4 *)(iVar2 + -0xd8) = 0;
  *(undefined4 *)(iVar2 + -0x24) = 0;
  *(undefined4 *)(iVar2 + -0x20) = 0;
  *(undefined4 *)(iVar2 + -0x1c) = 0;
  *(undefined4 *)(iVar2 + -0x18) = 0;
  *(undefined4 *)(iVar2 + -0x14) = 0;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined2 *)(iVar2 + -0x10c) = 0;
  *(undefined2 *)(iVar2 + -0x10a) = 0;
  *(undefined4 *)(iVar2 + -0x108) = 0;
  *(undefined2 *)(iVar2 + -0x104) = 0;
  *(undefined1 *)(iVar2 + -0x100) = 1;
  *(undefined4 *)(iVar2 + -0xec) = 0;
  *(undefined4 *)(iVar2 + -0xe8) = 0;
  *(undefined4 *)(iVar2 + -0x48) = 0;
  return;
}

