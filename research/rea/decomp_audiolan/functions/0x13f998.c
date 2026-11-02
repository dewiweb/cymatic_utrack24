// rea decompile_all
// name: FUN_0013f998
// address: 0x13f998
// body: available
// range: 0x13f998-0x13fa87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0013f998(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = 0xffffffff;
  *(undefined2 *)(param_1 + 1) = 0;
  iVar1 = FUN_0010e7e0(param_1 + 2);
  *(undefined2 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if ((int)param_2[2] <= param_3) {
    return;
  }
  *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(param_2[3] + param_3 * 0x14);
  *(undefined2 *)(iVar1 + -4) = *(undefined2 *)(param_2[3] + param_3 * 0x14 + 4);
  FUN_0010e498(iVar1,param_3 * 0x14 + 8 + param_2[3]);
  *(undefined2 *)(iVar1 + 8) = *(undefined2 *)(param_2[3] + param_3 * 0x14 + 0x10);
  *(undefined1 *)(iVar1 + 10) = *(undefined1 *)(param_2[3] + param_3 * 0x14 + 0x12);
  piVar2 = *(int **)(iVar1 + 0xc);
  piVar3 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x48)) + 0x34))
              ((int)piVar2 + *(int *)(*piVar2 + -0x48));
  }
  *(int **)(iVar1 + 0xc) = piVar3;
  if (piVar3 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013fa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x48)) + 0x30))
            (*(int *)(*piVar3 + -0x48) + (int)piVar3);
  return;
}

