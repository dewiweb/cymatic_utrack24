// rea decompile_all
// name: FUN_0017e06c
// address: 0x17e06c
// body: available
// range: 0x17e06c-0x17e233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0017e06c(int *param_1,int *param_2,undefined2 param_3,int *param_4,undefined4 param_5,
                undefined2 param_6,int *param_7,undefined2 param_8,undefined2 param_9,
                undefined2 param_10)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = DAT_0017e234;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_0017e234;
    iVar6 = piVar3[7];
    param_1[0x1b] = iVar6;
    *(int *)((int)param_1 + *(int *)(iVar6 + -0x38) + 0x6c) = piVar3[8];
    iVar6 = piVar3[9];
    param_1[0x1c] = iVar6;
    *(int *)((int)param_1 + *(int *)(iVar6 + -0x38) + 0x70) = piVar3[10];
    param_2 = piVar3;
  }
  piVar3 = (int *)FUN_0018007c(param_1,param_2 + 1,7,param_4[9],param_1);
  iVar6 = *param_2;
  *piVar3 = iVar6;
  *(int *)((int)piVar3 + *(int *)(iVar6 + -0x10)) = param_2[5];
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0xc)) = param_2[4];
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0x14)) = param_2[6];
  uVar1 = (**(code **)(*param_4 + 0x6c))(param_4);
  if (param_7 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_7 + 0x48))(param_7);
  }
  *(undefined2 *)(piVar3 + 0x10) = uVar1;
  *(undefined2 *)((int)piVar3 + 0x3e) = param_3;
  *(undefined2 *)((int)piVar3 + 0x42) = param_6;
  *(undefined2 *)(piVar3 + 0x11) = uVar2;
  piVar3[0x12] = (int)param_4;
  piVar3[0x13] = (int)param_7;
  iVar6 = FUN_00171d94(piVar3 + 0x14,param_5);
  *(undefined2 *)(iVar6 + 8) = param_8;
  *(undefined2 *)(iVar6 + 10) = param_9;
  *(undefined2 *)(iVar6 + 0xc) = param_10;
  *(undefined4 *)(iVar6 + 0x18) = 0;
  if (*(int **)(iVar6 + -4) == (int *)0x0) {
    *(undefined2 *)(iVar6 + 0x10) = 0;
    *(byte *)(iVar6 + 0x12) = *(byte *)(iVar6 + 0x12) & 0xfc;
  }
  else {
    (**(code **)(**(int **)(iVar6 + -4) + 0x38))();
    uVar4 = (**(code **)(**(int **)(iVar6 + -4) + 0x48))();
    uVar4 = FUN_001c6a94(uVar4,DAT_0017e238);
    *(undefined4 *)(iVar6 + 0x14) = uVar4;
    uVar4 = (**(code **)(**(int **)(iVar6 + -4) + 0x48))();
    FUN_00003c18(*(undefined4 *)(iVar6 + 0x14),uVar4);
    iVar5 = (**(code **)(**(int **)(iVar6 + -4) + 0x48))();
    uVar4 = FUN_001c6a94(iVar5 << 1,DAT_0017e238);
    *(undefined4 *)(iVar6 + 0x10) = uVar4;
    iVar5 = (**(code **)(**(int **)(iVar6 + -4) + 0x48))();
    FUN_00003c18(*(undefined4 *)(iVar6 + 0x10),iVar5 << 1);
  }
  return iVar6 + -0x50;
}

