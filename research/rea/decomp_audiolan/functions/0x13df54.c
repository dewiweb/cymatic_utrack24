// rea decompile_all
// name: FUN_0013df54
// address: 0x13df54
// body: available
// range: 0x13df54-0x13e0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0013df54(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = DAT_0013e0a8;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_0013e0a8;
    iVar4 = piVar1[0xd];
    param_1[0x79] = iVar4;
    *(int *)((int)param_1 + *(int *)(iVar4 + -0x38) + 0x1e4) = piVar1[0xe];
    iVar4 = piVar1[0xf];
    piVar3 = param_1 + 0x7a;
    param_1[0x7a] = iVar4;
    *(int *)((int)piVar3 + *(int *)(iVar4 + -0x38)) = piVar1[0x10];
    iVar4 = piVar1[0x15];
    param_1[0x7a] = iVar4;
    *(int *)((int)piVar3 + *(int *)(iVar4 + -0x38)) = piVar1[0x17];
    *(int *)((int)piVar3 + *(int *)(param_1[0x7a] + -0x1ec)) = piVar1[0x16];
    iVar4 = piVar1[0x11];
    param_1[0x7a] = iVar4;
    *(int *)((int)piVar3 + *(int *)(iVar4 + -0x38)) = piVar1[0x14];
    *(int *)((int)piVar3 + *(int *)(*piVar3 + -0x1ec)) = piVar1[0x13];
    *(int *)((int)piVar3 + *(int *)(*piVar3 + -0x214)) = piVar1[0x12];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_0012a6a0(param_1,param_2 + 1,0x108,param_3);
  iVar4 = DAT_0013e0ac;
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0x10)) = param_2[9];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[8];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[10];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x1c)) = param_2[0xc];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x18)) = param_2[0xb];
  piVar1[0x5a] = iVar4 + 0x298;
  piVar1[0x5b] = iVar4 + 0x2b0;
  piVar1[0x5c] = iVar4 + 0x2d0;
  iVar4 = FUN_00125190(piVar1 + 0x5d);
  *(undefined2 *)(iVar4 + 0x60) = 0;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  *(undefined2 *)(iVar4 + 0x68) = 0;
  *(undefined4 *)(iVar4 + 100) = 0;
  *(undefined1 *)(iVar4 + 0x6c) = 0;
  *(undefined1 *)(iVar4 + 0x6d) = 0;
  return iVar4 + -0x174;
}

