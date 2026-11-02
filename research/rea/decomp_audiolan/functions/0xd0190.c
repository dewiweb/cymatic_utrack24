// rea decompile_all
// name: FUN_000d0190
// address: 0xd0190
// body: available
// range: 0xd0190-0xd02bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d0190(int param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,int param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  int *piVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x47f) != '\0') {
    FUN_000028a4(DAT_000d02c0);
                    /* WARNING: Could not recover jumptable at 0x000d01e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,1);
    return;
  }
  if (param_3[1] != '\x01') {
    FUN_000028a4(DAT_000d02c4);
                    /* WARNING: Could not recover jumptable at 0x000d0214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,6);
    return;
  }
  if (param_5 != 0) {
    piVar1 = (int *)FUN_0009b63c();
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined2 *)(param_6 + 2),param_6[1],*param_6,*param_7,param_7[1],
               param_7[2]);
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x18))
                    (*(int **)(param_1 + 0x11c),*param_3,param_3[3],param_3[4],param_3[2],param_3[5]
                     ,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x10),param_4,1,
                     *(undefined4 *)(param_3 + 0xc));
  if (uVar2 != 0) {
    *(undefined1 *)(param_1 + 0x480) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000d02bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar2 ^ 1);
  return;
}

