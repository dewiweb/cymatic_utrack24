// rea decompile_all
// name: FUN_001dacc0
// address: 0x1dacc0
// body: available
// range: 0x1dacc0-0x1dae37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001dacc0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_001dae40;
  piVar1 = DAT_001dae38;
  *param_1 = *DAT_001dae38;
  param_1[0xf] = DAT_001dae3c;
  if (*piVar2 == 0) {
    thunk_FUN_00161678();
  }
  iVar3 = *piVar2;
  param_1[0x15] = iVar3;
  *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  iVar3 = DAT_001dae44;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xf] = iVar3;
  param_1[0x1b] = 0;
  iVar3 = piVar1[2];
  *param_1 = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0xc)) = piVar1[3];
  param_1[1] = 0;
  FUN_001e0ac4(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 3);
  iVar3 = piVar1[4];
  param_1[2] = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0xc) + 8) = piVar1[5];
  FUN_001e0ac4((int)param_1 + *(int *)(param_1[2] + -0xc) + 8,param_1 + 3);
  iVar3 = piVar1[1];
  *param_1 = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0xc)) = piVar1[6];
  param_1[2] = piVar1[7];
  iVar3 = *piVar1;
  *param_1 = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0xc)) = piVar1[8];
  param_1[2] = piVar1[9];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar3 = DAT_001dae48;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = iVar3;
  param_1[4] = param_2;
  if (*piVar2 == 0) {
    thunk_FUN_00161678();
  }
  iVar3 = *piVar2;
  param_1[0xe] = iVar3;
  *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
  param_1[3] = DAT_001dae4c;
  param_1[7] = param_1[7] | 1;
  return param_1;
}

