// rea decompile_all
// name: FUN_0012f264
// address: 0x12f264
// body: available
// range: 0x12f264-0x12f36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0012f264(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined2 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined2 param_11,undefined4 param_12,undefined2 param_13,
                undefined2 param_14)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0012f36c;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_0012f36c;
    iVar2 = piVar1[0xb];
    param_1[0x23] = iVar2;
    *(int *)((int)param_1 + *(int *)(iVar2 + -0x38) + 0x8c) = piVar1[0xc];
    iVar2 = piVar1[0xd];
    param_1[0x24] = iVar2;
    *(int *)((int)param_1 + *(int *)(iVar2 + -0x38) + 0x90) = piVar1[0xe];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_00115858(param_1,param_2 + 1,1,param_3,param_4,param_5,param_6,param_12,
                               param_13,param_14);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0x10)) = param_2[9];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[8];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[10];
  piVar1[0x1b] = 0;
  iVar2 = FUN_0010e728(piVar1 + 0x1c,param_8);
  iVar2 = FUN_0010e728(iVar2 + 8,param_9);
  iVar2 = FUN_0010e728(iVar2 + 8,param_10);
  *(undefined2 *)(iVar2 + 8) = param_11;
  *(undefined2 *)(iVar2 + 10) = param_7;
  return iVar2 + -0x80;
}

