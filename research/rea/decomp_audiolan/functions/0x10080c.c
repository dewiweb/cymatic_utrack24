// rea decompile_all
// name: FUN_0010080c
// address: 0x10080c
// body: available
// range: 0x10080c-0x100903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010080c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_4[5] != '\x02') {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x178);
  if (piVar1 != (int *)0x0) {
    piVar2 = param_4;
    if (param_4 != (int *)0x0) {
      piVar2 = param_4 + 6;
    }
    (**(code **)(*piVar1 + 0x1c))(piVar1,piVar2);
  }
  iVar3 = param_4[0x307];
  if (iVar3 != 0) {
    param_4[0x307] = 0;
    FUN_001003b0(iVar3);
    FUN_000fcfe8(*(undefined4 *)(param_1 + 0x160),iVar3);
  }
  FUN_001a0700(param_1 + 0x134);
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0 && param_4 != (int *)0x0) {
    if (piVar1 == param_4) {
      *(int *)(param_1 + 0x124) = piVar1[2];
    }
    if (*(int **)(param_1 + 0x128) == param_4) {
      *(int *)(param_1 + 0x128) = (*(int **)(param_1 + 0x128))[1];
    }
    if (param_4[1] != 0) {
      *(int *)(param_4[1] + 8) = param_4[2];
    }
    if (param_4[2] != 0) {
      *(int *)(param_4[2] + 4) = param_4[1];
    }
    param_4[1] = 0;
    param_4[2] = 0;
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
  }
  FUN_001a0d18(param_1 + 0x134);
  FUN_000f2634(param_4 + 8);
  if (param_4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 4))(param_4);
    return;
  }
  return;
}

