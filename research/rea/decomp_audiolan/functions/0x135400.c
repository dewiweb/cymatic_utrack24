// rea decompile_all
// name: FUN_00135400
// address: 0x135400
// body: available
// range: 0x135400-0x135597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00135400(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = DAT_00135598;
  *param_1 = *DAT_00135598;
  iVar5 = piVar4[9];
  param_1[0x49] = iVar5;
  *(int *)((int)param_1 + *(int *)(iVar5 + -0x38) + 0x124) = piVar4[10];
  piVar2 = (int *)FUN_00117bd8(param_1,piVar4 + 1,DAT_0013559c,*(undefined4 *)(param_2 + 4),param_1)
  ;
  iVar5 = DAT_001355a0;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0;
  piVar2[0x11] = iVar5;
  piVar2[0x14] = 0;
  iVar5 = DAT_001355a4;
  piVar2[0x16] = 0;
  piVar2[0x17] = 0;
  piVar2[0x15] = iVar5;
  piVar2[0x18] = 0;
  iVar5 = DAT_001355a8;
  iVar3 = *piVar4;
  *piVar2 = iVar3;
  *(int *)((int)piVar2 + *(int *)(iVar3 + -0x10)) = piVar4[7];
  *(int *)((int)piVar2 + *(int *)(*piVar2 + -0xc)) = piVar4[6];
  piVar2[0x10] = piVar4[8];
  piVar2[0x11] = iVar5;
  piVar2[0x15] = iVar5 + 0x24;
  piVar2[0x19] = iVar5 + 0x38;
  iVar5 = FUN_00135a54(piVar2 + 0x1a);
  iVar5 = FUN_00136250(iVar5 + 0x10,iVar5 + -0x68);
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(int *)(iVar5 + 0x30) = param_2;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  piVar4 = *(int **)(param_2 + 4);
  if (piVar4 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar4 + -0xc) + (int)piVar4;
  }
  iVar5 = FUN_0012c90c(iVar5 + 0x40,iVar3);
  *(undefined1 *)(iVar5 + 0x20) = 1;
  *(undefined1 *)(iVar5 + 0x21) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  iVar5 = FUN_00120484(iVar5 + 0x28);
  *(undefined1 *)(iVar5 + 0x28) = 0;
  uVar1 = DAT_001355ac;
  iVar3 = *(int *)(param_2 + 4) + 0x864;
  *(undefined4 *)(iVar5 + 0x2c) = DAT_001355b0;
  *(int *)(iVar5 + 0x30) = iVar3;
  *(undefined4 *)(iVar5 + 0x34) = uVar1;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  FUN_00134be8(iVar3,(undefined4 *)(iVar5 + 0x2c));
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  uVar1 = DAT_001355b4;
  *(undefined2 *)(iVar5 + 0x40) = 0;
  *(undefined2 *)(iVar5 + 0x42) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = uVar1;
  (**(code **)(**(int **)(iVar5 + -0xbc) + 0x84))(*(int **)(iVar5 + -0xbc),iVar5 + -0x9c);
  return iVar5 + -0xe0;
}

