// rea decompile_all
// name: FUN_001d9dac
// address: 0x1d9dac
// body: available
// range: 0x1d9dac-0x1d9ee5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001d9dac(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_34;
  
  piVar5 = DAT_001d9ef4;
  piVar4 = DAT_001d9ef0;
  iVar1 = DAT_001d9eec;
  iVar3 = DAT_001d9ee8;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_001d9ef0;
    param_1[3] = iVar3;
    if (*piVar5 == 0) {
      FUN_00161678();
    }
    iVar2 = *piVar5;
    param_1[9] = iVar2;
    *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[3] = iVar1;
    param_2 = piVar4;
  }
  piVar4 = DAT_001d9ef8;
  piVar5 = param_2 + 1;
  if (param_2 + 1 == (int *)0x0) {
    *param_1 = *DAT_001d9ef8;
    param_1[2] = iVar3;
    if (*DAT_001d9ef4 == 0) {
      FUN_00161678();
    }
    iVar2 = *DAT_001d9ef4;
    param_1[8] = iVar2;
    *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[2] = iVar1;
    piVar5 = piVar4;
  }
  iVar2 = *piVar5;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = piVar5[1];
  param_1[1] = 0;
  FUN_001e0ac4(*(int *)(*param_1 + -0xc) + (int)param_1,param_3);
  piVar4 = param_1 + 2;
  local_34 = param_2 + 3;
  if (local_34 == (int *)0x0) {
    local_34 = DAT_001d9efc;
    *piVar4 = *DAT_001d9efc;
    param_1[3] = iVar3;
    if (*DAT_001d9ef4 == 0) {
      FUN_00161678();
    }
    iVar3 = *DAT_001d9ef4;
    param_1[9] = iVar3;
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[3] = iVar1;
  }
  iVar3 = *local_34;
  *piVar4 = iVar3;
  *(int *)((int)piVar4 + *(int *)(iVar3 + -0xc)) = local_34[1];
  FUN_001e0ac4(*(int *)(*piVar4 + -0xc) + (int)piVar4,param_3);
  iVar3 = *param_2;
  *param_1 = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0xc)) = param_2[5];
  param_1[2] = param_2[6];
  return param_1;
}

