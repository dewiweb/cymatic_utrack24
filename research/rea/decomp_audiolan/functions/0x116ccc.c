// rea decompile_all
// name: FUN_00116ccc
// address: 0x116ccc
// body: available
// range: 0x116ccc-0x116e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00116ccc(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined2 param_7,undefined4 *param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)FUN_00117bd8(param_1,param_2 + 1,param_3,**(undefined4 **)(param_4 + 0x7c),param_1
                              );
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0x10)) = param_2[5];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[4];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[6];
  iVar2 = FUN_00133050(piVar1 + 0x10,param_4 + 0xa8,**(int **)(param_4 + 0x7c) + 0x658,0x20);
  iVar2 = FUN_00133050(iVar2 + 0x14,param_4 + 0xa8,**(int **)(param_4 + 0x7c) + 0x658,4);
  *(undefined4 *)(iVar2 + 0x14) = param_6;
  *(int *)(iVar2 + 0x18) = param_4;
  iVar2 = FUN_0010e728(iVar2 + 0x1c,param_5);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined2 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined2 *)(iVar2 + 0x2a) = 0;
  *(undefined2 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined2 *)(iVar2 + 0x32) = 0;
  iVar2 = FUN_0010f718(iVar2 + 0x34);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x35) = 1;
  FUN_000ee880(iVar2 + -0x1c);
  uVar3 = param_8[1];
  uVar4 = param_8[2];
  uVar5 = param_8[3];
  *(undefined4 *)(iVar2 + 0x3c) = *param_8;
  *(undefined4 *)(iVar2 + 0x40) = uVar3;
  *(undefined4 *)(iVar2 + 0x44) = uVar4;
  *(undefined4 *)(iVar2 + 0x48) = uVar5;
  *(undefined2 *)(iVar2 + 0x4c) = 0;
  *(undefined2 *)(iVar2 + 0x4e) = param_7;
  *(undefined1 *)(iVar2 + 0x50) = 0;
  *(undefined1 *)(iVar2 + 0x51) = 0;
  *(undefined1 *)(iVar2 + 0x52) = 0x25;
  return iVar2 + -0xa4;
}

