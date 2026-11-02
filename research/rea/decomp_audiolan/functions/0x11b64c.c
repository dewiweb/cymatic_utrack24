// rea decompile_all
// name: FUN_0011b64c
// address: 0x11b64c
// body: available
// range: 0x11b64c-0x11b6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011b64c(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int *piVar3;
  char *pcVar4;
  char *in_stack_00000004;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1c);
  FUN_0011b2ac(param_1);
  uVar2 = *(ushort *)(param_1 + 0x1e);
  pcVar4 = (char *)(uVar2 + 1);
  *(short *)(param_1 + 0x1e) = (short)pcVar4;
  if (in_stack_00000004 == (char *)0x0) {
    pcVar4 = s_Commit_changes_0011b6dc;
  }
  if (in_stack_00000004 != (char *)0x0) {
    pcVar4 = in_stack_00000004;
  }
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x80))
                            (*(int **)(param_1 + 0xc),pcVar4,(uint)uVar2,0,
                             *(undefined4 *)(param_1 + 0x10),uVar1,1,7);
                    /* WARNING: Could not recover jumptable at 0x0011b6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x38)) + 0x1c))
            ((int)piVar3 + *(int *)(*piVar3 + -0x38),param_2);
  return;
}

