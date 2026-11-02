// rea decompile_all
// name: FUN_00133820
// address: 0x133820
// body: available
// range: 0x133820-0x133937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00133820(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_00133938;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_00133938;
    iVar3 = piVar1[0xc];
    param_1[0x11d] = iVar3;
    piVar2 = param_1 + 0x11d;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38)) = piVar1[0xd];
    iVar3 = piVar1[0xe];
    param_1[0x11d] = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38)) = piVar1[0x10];
    *(int *)((int)piVar2 + *(int *)(param_1[0x11d] + -0x48)) = piVar1[0xf];
    iVar3 = piVar1[0x11];
    param_1[0x11d] = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38)) = piVar1[0x14];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x48)) = piVar1[0x13];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x7c)) = piVar1[0x12];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_0012319c(param_1,param_2 + 1,DAT_0013393c,param_3,param_4,1);
  iVar3 = *param_2;
  *piVar1 = iVar3;
  *(int *)((int)piVar1 + *(int *)(iVar3 + -0x10)) = param_2[9];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[8];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[10];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x18)) = param_2[0xb];
  *(undefined2 *)(piVar1 + 0x1c) = 0;
  *(undefined2 *)((int)piVar1 + 0x6e) = 0;
  FUN_00003860((int)piVar1 + 0x72,0x400);
  return piVar1;
}

