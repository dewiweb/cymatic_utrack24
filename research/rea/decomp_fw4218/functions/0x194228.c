// rea decompile_all
// name: FUN_00194228
// address: 0x194228
// body: available
// range: 0x194228-0x19429b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00194228(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  (**(code **)(*(int *)*param_1 + 0x48))();
  piVar1 = (int *)param_1[4];
  piVar2 = (int *)0x0;
  do {
    if (piVar1 == (int *)0x0) {
LAB_00194288:
                    /* WARNING: Could not recover jumptable at 0x00194298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)*param_1 + 0x4c))();
      return;
    }
    if (piVar1 == param_2) {
      if (piVar2 == (int *)0x0) {
        param_1[4] = piVar1[3];
      }
      else {
        piVar2[3] = piVar1[3];
      }
      piVar1[3] = 0;
      (**(code **)(*piVar1 + 0xc))();
      goto LAB_00194288;
    }
    piVar1 = (int *)piVar1[3];
    piVar2 = piVar1;
  } while( true );
}

