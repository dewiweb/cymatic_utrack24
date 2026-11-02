// rea decompile_all
// name: FUN_001dcb96
// address: 0x1dcb96
// body: available
// range: 0x1dcb96-0x1dcc39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001dcb96(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_001dcb48(param_1);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 0xc;
  param_1[4] = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  iVar1 = *(int *)param_1[4];
  piVar2 = *(int **)(param_2 + 0x10);
  for (piVar4 = (int *)*piVar2; piVar4 != piVar2; piVar4 = (int *)*piVar4) {
    piVar3 = (int *)param_1[1];
    if (piVar3 == (int *)0x0) {
      if (param_1[2] == param_1[3]) {
        FUN_001dcb48(param_1,0);
      }
      piVar3 = (int *)param_1[2];
      param_1[2] = piVar3 + 3;
    }
    else {
      param_1[1] = *piVar3;
    }
    if (piVar3 + 2 != (int *)0x0) {
      piVar3[2] = piVar4[2];
    }
    *piVar3 = iVar1;
    piVar3[1] = *(int *)(iVar1 + 4);
    **(undefined4 **)(iVar1 + 4) = piVar3;
    *(int **)(iVar1 + 4) = piVar3;
    param_1[5] = param_1[5] + 1;
  }
  return param_1;
}

