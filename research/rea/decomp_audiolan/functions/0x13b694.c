// rea decompile_all
// name: FUN_0013b694
// address: 0x13b694
// body: available
// range: 0x13b694-0x13b7c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0013b694(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0013b7c8;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_0013b7c8;
    iVar2 = piVar1[0xb];
    param_1[0x37] = iVar2;
    *(int *)((int)param_1 + *(int *)(iVar2 + -0x38) + 0xdc) = piVar1[0xc];
    iVar2 = piVar1[0xd];
    param_1[0x37] = iVar2;
    *(int *)((int)param_1 + *(int *)(iVar2 + -0x38) + 0xdc) = piVar1[0xf];
    *(int *)((int)param_1 + *(int *)(param_1[0x37] + -0x48) + 0xdc) = piVar1[0xe];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_0012319c(param_1,param_2 + 1,DAT_0013b7cc,param_3,param_4,param_5 >> 7);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0x10)) = param_2[9];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[8];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[10];
  *(char *)((int)piVar1 + 0x6d) = (char)param_5;
  *(undefined2 *)((int)piVar1 + 0x7a) = 0;
  *(undefined2 *)(piVar1 + 0x1e) = 0;
  *(undefined2 *)(piVar1 + 0x1f) = 0;
  *(undefined2 *)((int)piVar1 + 0x7e) = 0;
  iVar2 = FUN_0010f718(piVar1 + 0x20);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  iVar2 = FUN_0010f4c4(iVar2 + 0x28);
  iVar2 = FUN_0010e7e0(iVar2 + 0xc);
  iVar2 = FUN_0010f718(iVar2 + 8);
  FUN_0010f738(iVar2,DAT_0013b7d0);
  *(undefined2 *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x12) = 0;
  *(undefined2 *)(iVar2 + 0x14) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x1a) = 0;
  *(undefined2 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + -0x18) = 0;
  *(undefined1 *)(iVar2 + -0x1c) = 0;
  return iVar2 + -0xbc;
}

