// rea decompile_all
// name: FUN_00130814
// address: 0x130814
// body: available
// range: 0x130814-0x130a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00130814(int *param_1,int *param_2,undefined4 param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  
  piVar1 = DAT_00130a80;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_00130a80;
    iVar3 = piVar1[7];
    param_1[0x51] = iVar3;
    *(int *)((int)param_1 + *(int *)(iVar3 + -0x38) + 0x144) = piVar1[8];
    iVar3 = piVar1[9];
    param_1[0x51] = iVar3;
    *(int *)((int)param_1 + *(int *)(iVar3 + -0x38) + 0x144) = piVar1[0xb];
    *(int *)((int)param_1 + *(int *)(param_1[0x51] + -0x48) + 0x144) = piVar1[10];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_00117bd8(param_1,param_2 + 1,DAT_00130a84,param_3,param_1);
  iVar3 = DAT_00130a88;
  piVar1[0x13] = 0;
  piVar1[0x14] = 0;
  piVar1[0x12] = iVar3;
  piVar1[0x15] = 0;
  iVar3 = DAT_00130a8c;
  piVar1[0x19] = 0;
  piVar1[0x1a] = 0;
  piVar1[0x18] = iVar3;
  iVar3 = DAT_00130a90;
  piVar1[0x1b] = 0;
  piVar1[0x1c] = iVar3;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  iVar3 = DAT_00130a94;
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0x10)) = param_2[5];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[4];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[6];
  piVar1[0x18] = iVar3 + 0x98;
  piVar1[0x1c] = iVar3 + 0xb4;
  piVar1[0x10] = iVar3;
  piVar1[0x11] = iVar3 + 0x20;
  piVar1[0x1f] = (int)param_4;
  piVar1[0x21] = param_5;
  piVar1[0x12] = iVar3 + 0x3c;
  piVar1[0x16] = iVar3 + 0x6c;
  piVar1[0x17] = iVar3 + 0x84;
  *(undefined2 *)(piVar1 + 0x22) = 0;
  *(undefined2 *)((int)piVar1 + 0x8a) = 0;
  *(undefined2 *)(piVar1 + 0x23) = 0;
  *(undefined2 *)((int)piVar1 + 0x8e) = 0;
  iVar3 = FUN_0010e7e0(piVar1 + 0x24);
  iVar3 = FUN_0010e7e0(iVar3 + 8);
  iVar3 = FUN_0010e7e0(iVar3 + 8);
  *(undefined1 *)(iVar3 + 8) = 1;
  iVar3 = FUN_0010f058(iVar3 + 0xc,0);
  iVar3 = FUN_0010f058(iVar3 + 0x18,0);
  *(undefined1 *)(iVar3 + 0x18) = 0;
  iVar3 = FUN_0013711c(iVar3 + 0x1c,*(int *)(*(int *)(iVar3 + -0xc4) + -0x14) + iVar3 + -0xc4);
  iVar3 = FUN_0013fc7c(iVar3 + 0x10,*(int *)(*(int *)(iVar3 + -0xe0) + -0x14) + iVar3 + -0xe0);
  iVar3 = FUN_00139d30(iVar3 + 0x10,*(int *)(*(int *)(iVar3 + -0xf0) + -0x14) + iVar3 + -0xf0);
  iVar3 = FUN_001327e4(iVar3 + 0x10);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined1 *)(iVar3 + 0x30) = 0;
  piVar1 = *(int **)(iVar3 + -0x94);
  (**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x48)) + 0x30))
            ((int)piVar1 + *(int *)(*piVar1 + -0x48));
  (**(code **)(**(int **)(iVar3 + -0xec) + 0x158))(*(int **)(iVar3 + -0xec),iVar3 + -0xb8);
  (**(code **)(*param_4 + 0x44))(auStack_30,param_4);
  FUN_0015e8b8(auStack_3c,auStack_30);
  piVar1 = (int *)FUN_00147974(*(undefined4 *)(iVar3 + -0xec),auStack_3c,iVar3 + -0xb4);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0x14));
  }
  *(int **)(iVar3 + -0x90) = piVar1;
  return iVar3 + -0x110;
}

